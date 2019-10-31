/********************************************************************************
* MICROCHIP PM8596 EXPLORER FIRMWARE
*                                                                               
* Copyright (c) 2018, 2019 Microchip Technology Inc. All rights reserved. 
*                                                                               
* Licensed under the Apache License, Version 2.0 (the "License"); you may not 
* use this file except in compliance with the License. You may obtain a copy of 
* the License at http://www.apache.org/licenses/LICENSE-2.0
*                                                                               
* Unless required by applicable law or agreed to in writing, software 
* distributed under the License is distributed on an "AS IS" BASIS, WITHOUT 
* WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the 
* License for the specific language governing permissions and limitations under 
* the License.
********************************************************************************/



/**
*
* @addtogroup FAM
* @{
* @file
* @brief
*   Implementation of the Firmware Authentication Module.
*
* @note
*
*/

#include "fam_plat.h"
#include "app_fw.h"
#include "top.h"
#include "opsw_api.h"


/*
** Constants
*/

/* 
** Following are the locations of mbedTLS routine in BOOTROM
** Use PBBOT mapfile to determine the location of the routine
** FAM_BOOTROM_MBEDTLS_PLATFORM_SET_CALLOC_FREE_FUNC_ADDR  is having the address of 'mbedtls_platform_set_calloc_free' function
** FAM_BOOTROM_MBEDTLS_RSA_INIT_FUNC_ADDR is having the address of 'mbedtls_rsa_init' function
** FAM_BOOTROM_MBEDTLS_RSA_PUBLIC_FUNC_ADDR is having the address of 'mbedtls_rsa_public' function
** FAM_BOOTROM_MBEDTLS_SHA512_FUNC_ADDR is having the address of 'mbedtls_sha512' function
** FAM_BOOTROM_PUB_KEY_MODULUS_DATA_ADDR is the address of public keys in bootrom
** FAM_BOOTROM_PUB_KEY_LENGTH_BYTES is the length of each public key
*/
#define FAM_BOOTROM_MBEDTLS_PLATFORM_SET_CALLOC_FREE_FUNC_ADDR              0x82005590
#define FAM_BOOTROM_MBEDTLS_RSA_INIT_FUNC_ADDR                              0x82005424
#define FAM_BOOTROM_MBEDTLS_RSA_PUBLIC_FUNC_ADDR                            0x82005470
#define FAM_BOOTROM_MBEDTLS_SHA512_FUNC_ADDR                                0x8200c83c
#define FAM_BOOTROM_PUB_KEY_MODULUS_DATA_ADDR                               0x82016898
#define FAM_BOOTROM_PUB_KEY_LENGTH_BYTES                                    512


/*
** Local Variables
*/

/*
** Global Variables
*/

/*
** Local Functions
*/

/*
** Public Functions
*/
PUBLIC VOID (*mbedtls_platform_set_calloc_free_ptr) (VOID * (*calloc_func)( size_t, size_t ), VOID (*free_func)( VOID * ));
PUBLIC VOID (*mbedtls_rsa_init_ptr) (mbedtls_rsa_context *ctx, INT32 padding, INT32 hash_id );
PUBLIC INT32 (*mbedtls_rsa_public_ptr) (mbedtls_rsa_context *ctx, const UINT8 *input, UINT8 *output );
PUBLIC VOID (*mbedtls_sha512_ptr) (const UINT8 *input, size_t ilen, UINT8 output[64], INT32 is384 );



/****************************************************************************
*
* FUNCTION: fam_plat_init
* __________________________________________________________________________
*
* DESCRIPTION:
*   Fam Initialzation.
*
* INPUTS:
*   None.
*
* OUTPUTS:
*   None.
*
* RETURNS:
*   None.
*
* NOTES:
*   None.
*
*****************************************************************************/
PUBLIC VOID fam_plat_init(VOID)
{
#if (CRYPTO_ROUTINE_SOURCE == USE_BOOTROM)
    /* 
    ** As FW will be using BOOTROM routines using function pointer, following check  
    ** will ensure that we are compiling code for proper BOOTROM version.
    */
    PMCFW_ASSERT((opsw_scratchpad_get(OPSW_SCRATCHPAD_0) == ((PBOOT_MAJOR_VERSION_INFO << 16) | PBOOT_MINOR_VERSION_INFO)), 
                 APP_FW_ERR_PBOOT_VERSION);

    mbedtls_platform_set_calloc_free_ptr = ((void (*) (void * (*calloc_func)( size_t, size_t ), void (*free_func)( void * )))
                                            FAM_BOOTROM_MBEDTLS_PLATFORM_SET_CALLOC_FREE_FUNC_ADDR);
    mbedtls_rsa_init_ptr = ((void (*) (mbedtls_rsa_context *ctx, INT32 padding, INT32 hash_id ))
                                            FAM_BOOTROM_MBEDTLS_RSA_INIT_FUNC_ADDR);
    mbedtls_rsa_public_ptr = ((INT32 (*) (mbedtls_rsa_context *ctx, const UINT8 *input,UINT8 *output ))FAM_BOOTROM_MBEDTLS_RSA_PUBLIC_FUNC_ADDR);
    mbedtls_sha512_ptr = ((void (*) (const unsigned char *input, size_t ilen, UINT8 output[64], INT32 is384 ))FAM_BOOTROM_MBEDTLS_SHA512_FUNC_ADDR);
    
#elif (CRYPTO_ROUTINE_SOURCE == USE_CRYPTO_LIB)
    #error "Not Supported in this build"
#else
    #error "Please set appropriate value for BOOTROM_CRYPTO_ROUTINE_USE"
#endif

}

/**
* @brief
*   retrieve public key based on supplied index
*
* @return
*   pointer to the requested key data
*
*/
PUBLIC const UINT8* fam_plat_pka_pubkey_get(UINT32 key_idx)
{
    return ((UINT8*)(FAM_BOOTROM_PUB_KEY_MODULUS_DATA_ADDR + (FAM_BOOTROM_PUB_KEY_LENGTH_BYTES * key_idx)));
}

