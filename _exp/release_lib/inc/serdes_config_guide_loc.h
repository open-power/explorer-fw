/********************************************************************************
* MICROCHIP PM8596 EXPLORER FIRMWARE
*                                                                               
* Copyright (c) 2018, 2019, 2020 Microchip Technology Inc. All rights reserved. 
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
*     Generated local register header file to be used by serdes_config_guide.c.
*     Please put this file in the same location as the source file.
*     
*     This file is generated from:
*     Foxhound_RevA_Config_Guide_pdox_r0_53.xlsx (0.53)
*     using this command:
*     
*     python ConfigGuideConv.py -gFoxhound_RevA_Config_Guide_pdox_r0_53.xlsx
*     -r0.53 -pFoxhound_RevA_Config_Guide_pdox_r0_53.parsed
*     -nnamespace_exp_p_a_release_047.tcl -cserdes_config_guide.c
*     -hserdes_config_guide.h
*     -xFHCG_init,FHCG_LBinit,FHCG_sim_init,FH_reset_deassert,FH_iddq_deassert,FH_CSU_open_fastsim,FH_TXRX_datapath_fastsim,FH_alignment_fastsim,FH_IQ_Offset_Calibration
*     -fSERDES -a
* 
* 
*   NOTES: 
*     None.
*
*******************************************************************************/
#ifndef _SERDES_CONFIG_GUIDE_LOC_H
#define _SERDES_CONFIG_GUIDE_LOC_H

/*
** Include Files
*/




/* Macros for Register Offsets */

/*******************************************************************************
* Register Offset Definitions for IP Block
* PM20_80_102 (MDSP_PCBI)
*******************************************************************************/
#define MDSP_PCBI_TR_CONFIG_0_OFFSET                                                        (0x000)
#define MDSP_PCBI_TR_CONFIG_1_OFFSET                                                        (0x004)
#define MDSP_PCBI_TR_CONFIG_2_OFFSET                                                        (0x008)
#define MDSP_PCBI_TR_CONFIG_3_OFFSET                                                        (0x00C)
#define MDSP_PCBI_TR_CONFIG_4_OFFSET                                                        (0x010)
#define MDSP_PCBI_TR_CONFIG_5_OFFSET                                                        (0x014)
#define MDSP_PCBI_DATA_CAPT_0_OFFSET                                                        (0x018)
#define MDSP_PCBI_DATA_CAPT_1_OFFSET                                                        (0x01C)
#define MDSP_PCBI_DATA_CAPT_2_OFFSET                                                        (0x020)
#define MDSP_PCBI_DATA_CAPT_3_OFFSET                                                        (0x024)
#define MDSP_PCBI_DATA_CAPT_4_OFFSET                                                        (0x028)
#define MDSP_PCBI_PJ_GEN_CONFIG_0_OFFSET                                                    (0x02C)
#define MDSP_PCBI_PJ_GEN_CONFIG_1_OFFSET                                                    (0x030)
#define MDSP_PCBI_PJ_GEN_CONFIG_2_OFFSET                                                    (0x034)
#define MDSP_PCBI_PJ_GEN_CONFIG_3_OFFSET                                                    (0x038)
#define MDSP_PCBI_PJ_GEN_CONFIG_4_OFFSET                                                    (0x03C)
#define MDSP_PCBI_MDSP_INT_EN_OFFSET                                                        (0x040)
#define MDSP_PCBI_MDSP_INT_EVENT_OFFSET                                                     (0x044)
#define MDSP_PCBI_MDSP_INT_STAT_OFFSET                                                      (0x048)

/*******************************************************************************
* Register Offset Definitions for IP Block
* PM20_80_103 (ADSP_PCBI)
*******************************************************************************/
#define ADSP_PCBI_ADAPT_DSP_CTRL_OFFSET                                                     (0x000)
#define ADSP_PCBI_ADAPT_CTRL_1_OFFSET                                                       (0x004)
#define ADSP_PCBI_ADAPT_CTRL_2_OFFSET                                                       (0x008)
#define ADSP_PCBI_ADAPT_CTRL_3_OFFSET                                                       (0x00C)
#define ADSP_PCBI_ADAPT_CTRL_4_OFFSET                                                       (0x010)
#define ADSP_PCBI_ADAPT_CTRL_5_OFFSET                                                       (0x014)
#define ADSP_PCBI_ADAPT_CTRL_6_OFFSET                                                       (0x018)
#define ADSP_PCBI_ADAPT_CTRL_7_OFFSET                                                       (0x01C)
#define ADSP_PCBI_ADAPT_CTRL_8_OFFSET                                                       (0x020)
#define ADSP_PCBI_ADAPT_CTRL_9_OFFSET                                                       (0x024)
#define ADSP_PCBI_ADAPT_CTRL_10_OFFSET                                                      (0x028)
#define ADSP_PCBI_ADAPT_CTRL_11_OFFSET                                                      (0x02C)
#define ADSP_PCBI_ADAPT_CTRL_12_OFFSET                                                      (0x030)
#define ADSP_PCBI_ADAPT_CTRL_13_OFFSET                                                      (0x034)
#define ADSP_PCBI_ADAPT_CTRL_14_OFFSET                                                      (0x038)
#define ADSP_PCBI_ADAPT_CTRL_15_OFFSET                                                      (0x03C)
#define ADSP_PCBI_ADAPT_CTRL_16_OFFSET                                                      (0x040)
#define ADSP_PCBI_ADAPT_STAT_OFFSET                                                         (0x044)
#define ADSP_PCBI_ADAPT_RESULTS_CAPT_REQ_OFFSET                                             (0x048)
#define ADSP_PCBI_ADAPT_RESULTS_CAPTURE_1_OFFSET                                            (0x04C)
#define ADSP_PCBI_ADAPT_RESULTS_CAPTURE_2_OFFSET                                            (0x050)
#define ADSP_PCBI_ADAPT_RESULTS_CAPTURE_3_OFFSET                                            (0x054)
#define ADSP_PCBI_ADAPT_RESULTS_CAPTURE_4_OFFSET                                            (0x058)
#define ADSP_PCBI_STAT_INT_EN_OFFSET                                                        (0x05C)
#define ADSP_PCBI_STAT_INT_EVENT_OFFSET                                                     (0x060)
#define ADSP_PCBI_STAT_INT_OFFSET                                                           (0x064)
#define ADSP_PCBI_OBJECT_PRELOAD_VAL_1_OFFSET                                               (0x068)
#define ADSP_PCBI_OBJECT_PRELOAD_VAL_2_OFFSET                                               (0x06C)
#define ADSP_PCBI_OBJECT_PRELOAD_VAL_4_OFFSET                                               (0x070)
#define ADSP_PCBI_OBJECT_PRELOAD_VAL_5_OFFSET                                               (0x074)
#define ADSP_PCBI_ADAPT_FORCE_VAL_OFFSET                                                    (0x078)
#define ADSP_PCBI_ADAPT_AFIR_FORCE_1_OFFSET                                                 (0x07C)
#define ADSP_PCBI_ADAPT_AFIR_FORCE_2_OFFSET                                                 (0x080)
#define ADSP_PCBI_SPR_CTRL_1_OFFSET                                                         (0x084)
#define ADSP_PCBI_SPR_STAT_1_OFFSET                                                         (0x088)
#define ADSP_PCBI_SPR_STAT_2_OFFSET                                                         (0x08C)

/*******************************************************************************
* Register Offset Definitions for IP Block
* PM20_80_73 (DIAG_PCBI)
*******************************************************************************/
#define DIAG_PCBI_BT_CONFIG_OFFSET                                                          (0x000)
#define DIAG_PCBI_BT_CNT_TIM_LIMIT_REG_LOW_OFFSET                                           (0x004)
#define DIAG_PCBI_BT_CNT_TIM_LIMIT_REG_HIGH_OFFSET                                          (0x008)
#define DIAG_PCBI_FSM_STATE_OUT_INFO_OFFSET                                                 (0x00C)
#define DIAG_PCBI_BT_BIN_0_OFFSET                                                           (0x010)
#define DIAG_PCBI_BT_BIN_1_OFFSET                                                           (0x014)
#define DIAG_PCBI_BT_BIN_2_OFFSET                                                           (0x018)
#define DIAG_PCBI_BT_BIN_3_OFFSET                                                           (0x01C)
#define DIAG_PCBI_BT_BIN_4_OFFSET                                                           (0x020)
#define DIAG_PCBI_BT_BIN_5_OFFSET                                                           (0x024)
#define DIAG_PCBI_BT_BIN_6_OFFSET                                                           (0x028)
#define DIAG_PCBI_BT_BIN_7_OFFSET                                                           (0x02C)
#define DIAG_PCBI_BT_BIN_8_OFFSET                                                           (0x030)
#define DIAG_PCBI_BT_BIN_9_OFFSET                                                           (0x034)
#define DIAG_PCBI_BT_BIN_10_OFFSET                                                          (0x038)
#define DIAG_PCBI_BT_BIN_11_OFFSET                                                          (0x03C)
#define DIAG_PCBI_BT_BIN_12_OFFSET                                                          (0x040)
#define DIAG_PCBI_BT_BIN_13_OFFSET                                                          (0x044)
#define DIAG_PCBI_BT_BIN_14_OFFSET                                                          (0x048)
#define DIAG_PCBI_BT_BIN_15_OFFSET                                                          (0x04C)
#define DIAG_PCBI_BT_BIN_16_OFFSET                                                          (0x050)
#define DIAG_PCBI_BT_BIN_17_OFFSET                                                          (0x054)
#define DIAG_PCBI_BT_BIN_18_OFFSET                                                          (0x058)
#define DIAG_PCBI_BT_BIN_19_OFFSET                                                          (0x05C)
#define DIAG_PCBI_BT_BIN_20_OFFSET                                                          (0x060)
#define DIAG_PCBI_BT_BIN_21_OFFSET                                                          (0x064)
#define DIAG_PCBI_BT_BIN_22_OFFSET                                                          (0x068)
#define DIAG_PCBI_BT_BIN_23_OFFSET                                                          (0x06C)
#define DIAG_PCBI_BT_BIN_24_OFFSET                                                          (0x070)
#define DIAG_PCBI_BT_BIN_25_OFFSET                                                          (0x074)
#define DIAG_PCBI_BT_BIN_26_OFFSET                                                          (0x078)
#define DIAG_PCBI_BT_BIN_27_OFFSET                                                          (0x07C)
#define DIAG_PCBI_BT_BIN_28_OFFSET                                                          (0x080)
#define DIAG_PCBI_BT_BIN_29_OFFSET                                                          (0x084)
#define DIAG_PCBI_BT_BIN_30_OFFSET                                                          (0x088)
#define DIAG_PCBI_BT_BIN_31_OFFSET                                                          (0x08C)
#define DIAG_PCBI_BT_BIN_32_OFFSET                                                          (0x090)
#define DIAG_PCBI_BT_BIN_33_OFFSET                                                          (0x094)
#define DIAG_PCBI_BT_BIN_34_OFFSET                                                          (0x098)
#define DIAG_PCBI_BT_BIN_35_OFFSET                                                          (0x09C)
#define DIAG_PCBI_BT_BIN_36_OFFSET                                                          (0x0A0)
#define DIAG_PCBI_BT_BIN_37_OFFSET                                                          (0x0A4)
#define DIAG_PCBI_BT_BIN_38_OFFSET                                                          (0x0A8)
#define DIAG_PCBI_BT_BIN_39_OFFSET                                                          (0x0AC)
#define DIAG_PCBI_BT_BIN_40_OFFSET                                                          (0x0B0)
#define DIAG_PCBI_BT_BIN_41_OFFSET                                                          (0x0B4)
#define DIAG_PCBI_BT_BIN_42_OFFSET                                                          (0x0B8)
#define DIAG_PCBI_BT_BIN_43_OFFSET                                                          (0x0BC)
#define DIAG_PCBI_BT_BIN_44_OFFSET                                                          (0x0C0)
#define DIAG_PCBI_BT_BIN_45_OFFSET                                                          (0x0C4)
#define DIAG_PCBI_BT_BIN_46_OFFSET                                                          (0x0C8)
#define DIAG_PCBI_BT_BIN_47_OFFSET                                                          (0x0CC)
#define DIAG_PCBI_BT_BIN_48_OFFSET                                                          (0x0D0)
#define DIAG_PCBI_BT_BIN_49_OFFSET                                                          (0x0D4)
#define DIAG_PCBI_BT_BIN_50_OFFSET                                                          (0x0D8)
#define DIAG_PCBI_BT_BIN_51_OFFSET                                                          (0x0DC)
#define DIAG_PCBI_BT_BIN_52_OFFSET                                                          (0x0E0)
#define DIAG_PCBI_BT_BIN_53_OFFSET                                                          (0x0E4)
#define DIAG_PCBI_BT_BIN_54_OFFSET                                                          (0x0E8)
#define DIAG_PCBI_BT_BIN_55_OFFSET                                                          (0x0EC)
#define DIAG_PCBI_BT_BIN_56_OFFSET                                                          (0x0F0)
#define DIAG_PCBI_BT_BIN_57_OFFSET                                                          (0x0F4)
#define DIAG_PCBI_BT_BIN_58_OFFSET                                                          (0x0F8)
#define DIAG_PCBI_BT_BIN_59_OFFSET                                                          (0x0FC)
#define DIAG_PCBI_BT_BIN_60_OFFSET                                                          (0x100)
#define DIAG_PCBI_BT_BIN_61_OFFSET                                                          (0x104)
#define DIAG_PCBI_BT_BIN_62_OFFSET                                                          (0x108)
#define DIAG_PCBI_BT_BIN_63_OFFSET                                                          (0x10C)
#define DIAG_PCBI_COMP_ID_REG_OFFSET                                                        (0x110)
#define DIAG_PCBI_INT_REG_OFFSET                                                            (0x114)
#define DIAG_PCBI_INT_EN_REG_OFFSET                                                         (0x118)
#define DIAG_PCBI_INT_STAT_REG_OFFSET                                                       (0x11C)
#define DIAG_PCBI_PCBI_PARITY_REG_OFFSET                                                    (0x120)

/*******************************************************************************
* Register Offset Definitions for IP Block
* PM55_82_89_CHANNEL (CHANNEL_PCBI)
*******************************************************************************/
#define CHANNEL_PCBI_CHANNEL_CTRL_CFG_1_OFFSET                                              (0x000)
#define CHANNEL_PCBI_ADC_CLK_DEGLITCH_CFG_OFFSET                                            (0x004)
#define CHANNEL_PCBI_TX_MABC_CONFIG_1_OFFSET                                                (0x008)
#define CHANNEL_PCBI_TX_MABC_CONFIG_2_OFFSET                                                (0x00C)
#define CHANNEL_PCBI_RX_MABC_CONFIG_1_OFFSET                                                (0x010)
#define CHANNEL_PCBI_MABC_STAT_REG1_OFFSET                                                  (0x014)
#define CHANNEL_PCBI_PATT_GEN_AND_MON_CFG_1_OFFSET                                          (0x018)
#define CHANNEL_PCBI_PATT_GEN_AND_MON_CFG_2_OFFSET                                          (0x01C)
#define CHANNEL_PCBI_PATT_GEN_AND_MON_CFG_3_OFFSET                                          (0x020)
#define CHANNEL_PCBI_PATT_GEN_AND_MON_CFG_4_OFFSET                                          (0x024)
#define CHANNEL_PCBI_PATT_GEN_AND_MON_CFG_5_OFFSET                                          (0x028)
#define CHANNEL_PCBI_PATT_GEN_AND_MON_CFG_6_OFFSET                                          (0x02C)
#define CHANNEL_PCBI_PATT_GEN_AND_MON_CFG_7_OFFSET                                          (0x030)
#define CHANNEL_PCBI_PATT_GEN_AND_MON_CFG_8_OFFSET                                          (0x034)
#define CHANNEL_PCBI_PATT_GEN_AND_MON_CFG_9_OFFSET                                          (0x038)
#define CHANNEL_PCBI_PATT_GEN_AND_MON_CFG_10_OFFSET                                         (0x03C)
#define CHANNEL_PCBI_PATT_GEN_AND_MON_CFG_11_OFFSET                                         (0x040)
#define CHANNEL_PCBI_PATT_GEN_AND_MON_CFG_12_OFFSET                                         (0x044)
#define CHANNEL_PCBI_PATT_GEN_AND_MON_CFG_13_OFFSET                                         (0x048)
#define CHANNEL_PCBI_PATT_GEN_AND_MON_CFG_14_OFFSET                                         (0x04C)
#define CHANNEL_PCBI_PATT_GEN_AND_MON_CFG_15_OFFSET                                         (0x050)
#define CHANNEL_PCBI_PATT_GEN_AND_MON_CFG_16_OFFSET                                         (0x054)
#define CHANNEL_PCBI_PATT_GEN_AND_MON_CFG_17_OFFSET                                         (0x058)
#define CHANNEL_PCBI_PATT_GEN_AND_MON_CFG_18_OFFSET                                         (0x05C)
#define CHANNEL_PCBI_PATT_GEN_AND_MON_CFG_19_OFFSET                                         (0x060)
#define CHANNEL_PCBI_PATT_GEN_AND_MON_CFG_20_OFFSET                                         (0x064)
#define CHANNEL_PCBI_PATT_GEN_AND_MON_CFG_21_OFFSET                                         (0x068)
#define CHANNEL_PCBI_PATT_GEN_AND_MON_CFG_22_OFFSET                                         (0x06C)
#define CHANNEL_PCBI_LANE_N_STAT_INT_EN_OFFSET                                              (0x070)
#define CHANNEL_PCBI_LANE_N_STAT_INT_EVENT_OFFSET                                           (0x074)
#define CHANNEL_PCBI_LANE_N_STAT_INT_OFFSET                                                 (0x078)
#define CHANNEL_PCBI_LOOPBACK_CFG_OFFSET                                                    (0x07C)
#define CHANNEL_PCBI_TXRX_CFG_OFFSET                                                        (0x080)
#define CHANNEL_PCBI_SOFT_RESET_REG_OFFSET                                                  (0x084)
#define CHANNEL_PCBI_RAM_CFG_REG_OFFSET                                                     (0x088)
#define CHANNEL_PCBI_AFIR_CFG_REG_OFFSET                                                    (0x08C)
#define CHANNEL_PCBI_ATTN_CFG_REG_OFFSET                                                    (0x090)
#define CHANNEL_PCBI_PI_CFG_REG_OFFSET                                                      (0x094)
#define CHANNEL_PCBI_MODE_CFG_REG_OFFSET                                                    (0x098)
#define CHANNEL_PCBI_TEST_MODE_CFG_REG_OFFSET                                               (0x09C)
#define CHANNEL_PCBI_LOS_CFG_REG_OFFSET                                                     (0x0A0)
#define CHANNEL_PCBI_FSM_STATE_OUT_INFO_OFFSET                                              (0x0A4)
#define CHANNEL_PCBI_LANE_ALIGN_CONFIG_1_OFFSET                                             (0x0A8)
#define CHANNEL_PCBI_LANE_ALIGN_CONFIG_2_OFFSET                                             (0x0AC)
#define CHANNEL_PCBI_LANE_ALIGN_CONFIG_3_OFFSET                                             (0x0B0)
#define CHANNEL_PCBI_LANE_ALIGN_CONFIG_4_OFFSET                                             (0x0B4)
#define CHANNEL_PCBI_LANE_ALIGN_CONFIG_5_OFFSET                                             (0x0B8)
#define CHANNEL_PCBI_LANE_ALIGN_CONFIG_6_OFFSET                                             (0x0BC)
#define CHANNEL_PCBI_LANE_ALIGN_CONFIG_7_OFFSET                                             (0x0C0)
#define CHANNEL_PCBI_LANE_ALIGN_STATUS_1_OFFSET                                             (0x0C4)
#define CHANNEL_PCBI_LANE_ALIGN_STATUS_2_OFFSET                                             (0x0C8)
#define CHANNEL_PCBI_LANE_ALIGN_STATUS_3_OFFSET                                             (0x0CC)
#define CHANNEL_PCBI_LANE_ALIGN_STATUS_4_OFFSET                                             (0x0D0)
#define CHANNEL_PCBI_MABC_TEST_CONFIG_REG_OFFSET                                            (0x0D4)
#define CHANNEL_PCBI_FUSE_OVR_REG_OFFSET                                                    (0x0D8)
#define CHANNEL_PCBI_MABC_CONFIG_REG1_OFFSET                                                (0x0DC)
#define CHANNEL_PCBI_MABC_CONFIG_REG2_OFFSET                                                (0x0E0)
#define CHANNEL_PCBI_PCBI_PARITY_REG_OFFSET                                                 (0x0E4)
#define CHANNEL_PCBI_FUSE_VAL_STAT_0_OFFSET                                                 (0x0E8)
#define CHANNEL_PCBI_FUSE_VAL_STAT_1_OFFSET                                                 (0x0EC)

/*******************************************************************************
* Register Offset Definitions for IP Block
* PM55_82_89_CSU (CSU_PCBI)
*******************************************************************************/
#define CSU_PCBI_FB_CLK_DIV_CONFIG_OFFSET                                                   (0x000)
#define CSU_PCBI_PFAC_CONFIG_1_OFFSET                                                       (0x004)
#define CSU_PCBI_PFAC_CONFIG_2_OFFSET                                                       (0x008)
#define CSU_PCBI_PFAC_STAT_1_OFFSET                                                         (0x00C)
#define CSU_PCBI_PLD_CONFIG_OFFSET                                                          (0x010)
#define CSU_PCBI_FLD_CONFIG_1_OFFSET                                                        (0x014)
#define CSU_PCBI_FLD_CONFIG_2_OFFSET                                                        (0x018)
#define CSU_PCBI_FLD_CONFIG_3_OFFSET                                                        (0x01C)
#define CSU_PCBI_FLD_LOCK_DET_STAT_OFFSET                                                   (0x020)
#define CSU_PCBI_EADSM_CONFIG_1_OFFSET                                                      (0x024)
#define CSU_PCBI_EADSM_CONFIG_2_OFFSET                                                      (0x028)
#define CSU_PCBI_EADSM_CONFIG_3_OFFSET                                                      (0x02C)
#define CSU_PCBI_EADSM_CONFIG_4_OFFSET                                                      (0x030)
#define CSU_PCBI_EADSM_CONFIG_5_OFFSET                                                      (0x034)
#define CSU_PCBI_EADSM_CONFIG_6_OFFSET                                                      (0x038)
#define CSU_PCBI_FRAC_DIV_MOD_STAT_OFFSET                                                   (0x03C)
#define CSU_PCBI_DLF_ACC_CONFIG_1_OFFSET                                                    (0x040)
#define CSU_PCBI_DLF_ACC_CONFIG_2_OFFSET                                                    (0x044)
#define CSU_PCBI_DLF_ACC_CONFIG_3_OFFSET                                                    (0x048)
#define CSU_PCBI_DLF_ACC_CONFIG_4_OFFSET                                                    (0x04C)
#define CSU_PCBI_DLF_FIFO_CONFIG_OFFSET                                                     (0x050)
#define CSU_PCBI_DLF_IF_DSM_CONFIG_1_OFFSET                                                 (0x054)
#define CSU_PCBI_DLF_IF_DSM_CONFIG_2_OFFSET                                                 (0x058)
#define CSU_PCBI_DLF_IC_CTRL_CFG_1_OFFSET                                                   (0x05C)
#define CSU_PCBI_DLF_IC_CTRL_CFG_2_OFFSET                                                   (0x060)
#define CSU_PCBI_DLF_IC_RAMP_CONFIG_OFFSET                                                  (0x064)
#define CSU_PCBI_DLF_IC_DSM_CONFIG_OFFSET                                                   (0x068)
#define CSU_PCBI_DLF_VCO_CAL_CFG_1_OFFSET                                                   (0x06C)
#define CSU_PCBI_DLF_VCO_CAL_CFG_2_OFFSET                                                   (0x070)
#define CSU_PCBI_DLF_VCO_CAL_CFG_3_OFFSET                                                   (0x074)
#define CSU_PCBI_DLF_STAT_1_OFFSET                                                          (0x078)
#define CSU_PCBI_DLF_STAT_2_OFFSET                                                          (0x07C)
#define CSU_PCBI_DLF_STAT_3_OFFSET                                                          (0x080)
#define CSU_PCBI_DLF_STAT_4_OFFSET                                                          (0x084)
#define CSU_PCBI_VCAP_INTF_OFFSET                                                           (0x088)
#define CSU_PCBI_VCO_BIST_CONFIG_1_OFFSET                                                   (0x08C)
#define CSU_PCBI_VCO_BIST_CONFIG_2_OFFSET                                                   (0x090)
#define CSU_PCBI_VCO_BIST_STAT_OFFSET                                                       (0x094)
#define CSU_PCBI_VCO_AMP_CAL_OFFSET                                                         (0x098)
#define CSU_PCBI_MABC_CS_CONFIG_OFFSET                                                      (0x09C)
#define CSU_PCBI_MABC_CSU_CTRL_OVR_OFFSET                                                   (0x0A0)
#define CSU_PCBI_MABC_CSU_CTRL_OFFSET                                                       (0x0A4)
#define CSU_PCBI_MABC_CSU_CTRL2_OFFSET                                                      (0x0D0)
#define CSU_PCBI_MABC_CSU_MODE_OFFSET                                                       (0x0A8)
#define CSU_PCBI_MABC_CSU_FB_DIV_CTRL_OFFSET                                                (0x0AC)
#define CSU_PCBI_INT_REG_OFFSET                                                             (0x0B0)
#define CSU_PCBI_INT_EN_REG_OFFSET                                                          (0x0B4)
#define CSU_PCBI_INT_STAT_REG_OFFSET                                                        (0x0B8)
#define CSU_PCBI_SW_RESET_CTRL_1_OFFSET                                                     (0x0BC)
#define CSU_PCBI_SW_RESET_CTRL_2_OFFSET                                                     (0x0C0)
#define CSU_PCBI_MABC_CONFIG_1_OFFSET                                                       (0x0C4)
#define CSU_PCBI_MABC_CONFIG_2_OFFSET                                                       (0x0C8)
#define CSU_PCBI_SW_INT_BYPASS_REG_OFFSET                                                   (0x0CC)
#define CSU_PCBI_PCBI_PARITY_REG_OFFSET                                                     (0x0D4)

/*******************************************************************************
* Register Offset Definitions for IP Block
* PM55_82_89_MTSB_CTRL (MTSB_CTRL_PCBI)
*******************************************************************************/
#define MTSB_CTRL_PCBI_PCBI_CONFIG_1_OFFSET                                                 (0x000)
#define MTSB_CTRL_PCBI_CONFIG_REG1_OFFSET                                                   (0x008)
#define MTSB_CTRL_PCBI_CONFIG_REG2_OFFSET                                                   (0x00C)
#define MTSB_CTRL_PCBI_CONFIG_REG3_OFFSET                                                   (0x010)
#define MTSB_CTRL_PCBI_STATUS_INTR_EN_OFFSET                                                (0x014)
#define MTSB_CTRL_PCBI_STATUS_INTR_EVT_OFFSET                                               (0x018)
#define MTSB_CTRL_PCBI_STATUS_INTR_OFFSET                                                   (0x01C)
#define MTSB_CTRL_PCBI_GLBL_MTSB_CONFIG_1_OFFSET                                            (0x020)
#define MTSB_CTRL_PCBI_GLBL_MTSB_CONFIG_2_OFFSET                                            (0x024)
#define MTSB_CTRL_PCBI_GLBL_MTSB_STATUS_2_OFFSET                                            (0x028)
#define MTSB_CTRL_PCBI_GLBL_MTSB_CONFIG_4_OFFSET                                            (0x02C)
#define MTSB_CTRL_PCBI_GLBL_MTSB_CONFIG_3_OFFSET                                            (0x030)
#define MTSB_CTRL_PCBI_CALIBRATION_OVR_1_OFFSET                                             (0x034)
#define MTSB_CTRL_PCBI_LANE_OBS_1_OFFSET                                                    (0x038)
#define MTSB_CTRL_PCBI_LANE_OBS_2_OFFSET                                                    (0x03C)
#define MTSB_CTRL_PCBI_LANE_OVR_3_OFFSET                                                    (0x040)
#define MTSB_CTRL_PCBI_ADAPT_CONFIG_1_OFFSET                                                (0x044)
#define MTSB_CTRL_PCBI_ADAPT_CONFIG_2_OFFSET                                                (0x048)
#define MTSB_CTRL_PCBI_ADAPT_CONFIG_3_OFFSET                                                (0x04C)
#define MTSB_CTRL_PCBI_PHGEN_OC_CFG_1_OFFSET                                                (0x050)
#define MTSB_CTRL_PCBI_PHGEN_OC_CFG_2_OFFSET                                                (0x054)
#define MTSB_CTRL_PCBI_ADAPT_CONFIG_9_OFFSET                                                (0x058)
#define MTSB_CTRL_PCBI_ADAPT_CONFIG_10_OFFSET                                               (0x05C)
#define MTSB_CTRL_PCBI_ADAPT_CONFIG_11_OFFSET                                               (0x060)
#define MTSB_CTRL_PCBI_ADAPT_CONFIG_12_OFFSET                                               (0x064)
#define MTSB_CTRL_PCBI_ADAPT_CONFIG_13_OFFSET                                               (0x068)
#define MTSB_CTRL_PCBI_ADAPT_CONFIG_14_OFFSET                                               (0x06C)
#define MTSB_CTRL_PCBI_ADAPT_CONFIG_15_OFFSET                                               (0x070)
#define MTSB_CTRL_PCBI_ADAPT_CONFIG_16_OFFSET                                               (0x074)
#define MTSB_CTRL_PCBI_ADAPT_CONFIG_17_OFFSET                                               (0x078)
#define MTSB_CTRL_PCBI_ADAPT_CONFIG_18_OFFSET                                               (0x07C)
#define MTSB_CTRL_PCBI_ADAPT_CONFIG_19_OFFSET                                               (0x080)
#define MTSB_CTRL_PCBI_ADAPT_CONFIG_20_OFFSET                                               (0x084)
#define MTSB_CTRL_PCBI_TX_CTRL_LOGIC_CONFIG1_OFFSET                                         (0x090)
#define MTSB_CTRL_PCBI_TX_CTRL_LOGIC_CONFIG2_OFFSET                                         (0x094)
#define MTSB_CTRL_PCBI_TX_CTRL_LOGIC_CONFIG3_OFFSET                                         (0x098)
#define MTSB_CTRL_PCBI_PGA_LUT_CONFIG_1_OFFSET                                              (0x0A0)
#define MTSB_CTRL_PCBI_PGA_LUT_CONFIG_2_OFFSET                                              (0x0A4)
#define MTSB_CTRL_PCBI_PGA_LUT_CONFIG_3_OFFSET                                              (0x0A8)
#define MTSB_CTRL_PCBI_ADC_OC_CALIB_CONFIG1_OFFSET                                          (0x0AC)
#define MTSB_CTRL_PCBI_ADC_OC_CALIB_CONFIG2_OFFSET                                          (0x0B0)
#define MTSB_CTRL_PCBI_ADC_OC_CALIB_CONFIG3_OFFSET                                          (0x0B4)
#define MTSB_CTRL_PCBI_ADC_OC_CALIB_CONFIG4_OFFSET                                          (0x0B8)
#define MTSB_CTRL_PCBI_MTSB_PHGEN_CONFIG_1_OFFSET                                           (0x0DC)
#define MTSB_CTRL_PCBI_MTSB_PHGEN_CONFIG_2_OFFSET                                           (0x0E0)
#define MTSB_CTRL_PCBI_MTSB_PHGEN_CONFIG_3_OFFSET                                           (0x0E4)
#define MTSB_CTRL_PCBI_MTSB_PHGEN_CONFIG_4_OFFSET                                           (0x0E8)
#define MTSB_CTRL_PCBI_MTSB_PHGEN_CONFIG_5_OFFSET                                           (0x0EC)
#define MTSB_CTRL_PCBI_MTSB_PHGEN_STATUS_1_OFFSET                                           (0x0F0)
#define MTSB_CTRL_PCBI_DCD_OC_CFG_1_OFFSET                                                  (0x0F4)
#define MTSB_CTRL_PCBI_DCD_OC_CFG_2_OFFSET                                                  (0x0F8)
#define MTSB_CTRL_PCBI_DCD_OC_CFG_5_OFFSET                                                  (0x104)
#define MTSB_CTRL_PCBI_DCD_OC_STAT_1_OFFSET                                                 (0x108)
#define MTSB_CTRL_PCBI_PHGEN_OFFSET_STATUS_OFFSET                                           (0x10C)
#define MTSB_CTRL_PCBI_PI_PHGEN_IQCOR_CFG1_OFFSET                                           (0x110)
#define MTSB_CTRL_PCBI_PI_PHGEN_IQCOR_CFG2_OFFSET                                           (0x114)
#define MTSB_CTRL_PCBI_PI_PHGEN_IQCOR_STS1_OFFSET                                           (0x118)
#define MTSB_CTRL_PCBI_ADC_PH_CAL_OVERRIDE_OFFSET                                           (0x11C)
#define MTSB_CTRL_PCBI_PSAVE_STATUS_OFFSET                                                  (0x120)
#define MTSB_CTRL_PCBI_PCBI_PARITY_REG_OFFSET                                               (0x124)

#endif /* _SERDES_CONFIG_GUIDE_LOC_H */
