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

/********************************************************************************
*   DESCRIPTION :
*     Generated register header file to be used by ocmb_config_guide.c.
*     
*     This file is generated from:
*     ocmb_config_ibm_v26.xlsx (ibm_v26)
*     using this command:
*     
*     python ConfigGuideConv.py -gocmb_config_ibm_v26.xlsx -ribm_v26
*     -pocmb_config_ibm_v26.parsed -nnamespace_exp_p_a_release_047.tcl
*     -cocmb_config_guide.c -hocmb_config_guide.h
*     -xexp_ccs_config,Configurations,DLx_Config -focmb_cfg -a -64bit
* 
* 
*   NOTES: 
*     None.
*
*******************************************************************************/
#ifndef _OCMB_CONFIG_GUIDE_H
#define _OCMB_CONFIG_GUIDE_H

/*
** Include Files
*/




/* Function Prototypes */

EXTERN BOOL ocmb_cfg_exp_mcbist_maint_config(UINT32 ocmb_base_addr);
EXTERN BOOL ocmb_cfg_exp_config(UINT32 ocmb_base_addr);
EXTERN BOOL ocmb_cfg_RxPatAorB(UINT32 ocmb_base_addr);
EXTERN BOOL ocmb_cfg_exp_mcbist_config(UINT32 ocmb_base_addr);
EXTERN BOOL ocmb_cfg_Sensor_Cache_enable(UINT32 ocmb_base_addr);
EXTERN BOOL ocmb_cfg_DLx_config_FW(UINT32 ocmb_base_addr);
EXTERN BOOL ocmb_cfg_exp_enterprise(UINT32 ocmb_base_addr);
EXTERN BOOL ocmb_cfg_Prbs_reset(UINT32 ocmb_base_addr);
EXTERN BOOL ocmb_cfg_SendPatB(UINT32 ocmb_base_addr);
EXTERN BOOL ocmb_cfg_RxPatB(UINT32 ocmb_base_addr);
EXTERN BOOL ocmb_cfg_SendPatA(UINT32 ocmb_base_addr);

#endif /* _OCMB_CONFIG_GUIDE_H */