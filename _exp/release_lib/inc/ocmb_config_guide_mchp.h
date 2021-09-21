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
*     Generated register header file to be used by ocmb_config_guide_mchp.c.
*     
*     This file is generated from:
*     ocmb_config_guide_mchp_v30.xlsx (mchp_v30)
*     using this command:
*     
*     python ConfigGuideConv.py -gocmb_config_guide_mchp_v30.xlsx -rmchp_v30
*     -pocmb_config_guide_mchp_v30.parsed -nnamespace_exp_p_a_release_047.tcl
*     -cocmb_config_guide_mchp.c -hocmb_config_guide_mchp.h -xexp_ccs_config
*     -focmb_cfg -a -64bit
* 
* 
*   NOTES: 
*     None.
*
*******************************************************************************/
#ifndef _OCMB_CONFIG_GUIDE_MCHP_H
#define _OCMB_CONFIG_GUIDE_MCHP_H

/*
** Include Files
*/




/* Function Prototypes */

EXTERN BOOL ocmb_cfg_exp_mcbist_maint_config(UINT32 ocmb_base_addr);
EXTERN BOOL ocmb_cfg_exp_mcbist_config_W_RWW(UINT32 ocmb_base_addr);
EXTERN BOOL ocmb_cfg_exp_mcbist_config_W_RRW(UINT32 ocmb_base_addr);
EXTERN BOOL ocmb_cfg_RxPatAorB(UINT32 ocmb_base_add, UINT8 lane_bitmask);
EXTERN BOOL ocmb_cfg_exp_mcbist_config(UINT32 ocmb_base_addr);
EXTERN BOOL ocmb_cfg_exp_mcbist_config_RandCmdSeq(UINT32 ocmb_base_addr);
EXTERN BOOL ocmb_cfg_RxPatB(UINT32 ocmb_base_addr, UINT8 lane_bitmask);
EXTERN BOOL ocmb_cfg_SendPatB(UINT32 ocmb_base_addr);
EXTERN BOOL ocmb_cfg_SendPatA(UINT32 ocmb_base_addr);
EXTERN BOOL ocmb_cfg_exp_mcbist_config_W_RW(UINT32 ocmb_base_addr);
EXTERN BOOL ocmb_cfg_exp_mcbist_config_W_RWR(UINT32 ocmb_base_addr);
EXTERN BOOL ocmb_cfg_exp_mcbist_config_W_R(UINT32 ocmb_base_addr);

#endif /* _OCMB_CONFIG_GUIDE_MCHP_H */
