(w) RF control disabled. ul_cc_idx : %d, idle_dtx_flag : %d
(W)[RF-CRTL] [DSPTX_Read_Fr1Hispd]. abnormal power domain!!
(W)[RF-CRTL] [DSPTX_Read_Fr1Hispd]. SPI Write FIFO not Cleared!! swSpiAddr[0x%X]
(W)[RF-CRTL] [DSPTX_Read_Fr1Hispd]. Read_HISPEEDY: FIFO NOT CLEARED!!! step[%d], cnt[%d], Addr[0x%x]
(W)[RF-CRTL] [DSPTX_Read_Fr1Hispd]. Read_HISPEEDY: read wait time out!!! cnt[%d], Addr[0x%x]
(W)[RF-CRTL] [DSPTX_Write_Sw_Fr1Hispd]. Hispd SW WR in not ready. sub6_hispd_sw_wr_ready_flag[%d], ul_cc_idx[%d]
[RF-CRTL] [DSPTX_Write_Sw_Fr1Hispd]. data_num[%d], data0~2[0x%x][0x%x][0x%x], addr0~2[0x%x][0x%x][0x%x], ul_cc_idx[%d], count[%d]
(W)[RF-CRTL] [DSPTX_ReadRfdReg] Wrong addr. addr[0x%x]
(W)[RF-CRTL] [DSPTX_WriteRfdReg] Wrong addr. addr[0x%x], data[0x%x], ul_cc_idx[%d]
[RF-CRTL] [DSPTX_Write_Hw_Fr1Hispd]. mem_idx[%d], data_num[%d], data0~2[0x%x][0x%x][0x%x], addr0~2[0x%x][0x%x][0x%x], ul_cc_idx[%d]
[RF-CRTL] [DSPTX_Write_Hw_Fr1Hispd]. sub6_hispd_trig_mask0~2[0x%x][0x%x][0x%x], sub6_hispd_src_num0~3[0x%x][0x%x][0x%x][0x%x], sub6_hispd0_flg_mask0~1[0x%x][0x%x], sub6_hispd_blk_en[0x%x]
UL_PWR2=> pwr:%d, TX_SPI[%d]:0x%x, comp_pwrx10:%d, et_en:%d, srs_on:%d, ul_cc_idx:%d
[TX on][TX_PATH_ON_HW_MODE_CTRL]. TX_on_SPI[0x%x][0x%x][0x%x][0x%x][0x%x], hispd_tx_path_on_addr[0x%x][0x%x][0x%x], direct_spi_word_num[%d], ul_cc_idx[%d]
[TX off][TX_PATH_ON_HW_MODE_CTRL]. tx_off_spi[0x%x][0x%x][0x%x][0x%x][0x%x], hispd_tx_path_addr[0x%x][0x%x][0x%x], direct_spi_word_num[%d], ul_cc_idx[%d]
(W) Invalid MIPI word number. ul_cc_idx:%d, debug_id:%d, val:%d, min_val:%d, max_val:%d
[MipiAitControl] ARBIT_TR_NUM0[0x%x], TICKGEN_MIPI_RFFE_PA[0x%x], ON0_CNT[0x%x], OFF0_CNT[0x%x], REG_FEMSIF_ARBIT_CTL0[0x%x], REG_FEMSIF_ARBIT_ENABLE0[0x%x], mipi_reg_idx[%d]
PA_MODE=> et_en:%d, srs_en:%d, main_word_idx(num1/num2):0x%x, arbitor(add1/add2):0x%x, last_mipi_word:0x%x, pm_trig_word:0x%x, reg_arbit_tr_num0:0x%x
PA_2ndOFF=> main_word_idx:%d, arbitor_add:%d, pa_off_word:0x%x, index_error:%d, ul_cc_idx:%d
[ON0][OFF0] Block HW tick. ul_cc_idx:%d
[ON0][OFF0] Block HW tick. TWO-ANT mode
[ON1][OFF1] Block HW tick. ul_cc_idx:%d
[ON1][OFF1] Block HW tick. TWO-ANT mode
PA_Con=> tx0_tx1_word_idx[0x%x], sample_cnt_on0[%d], sample_cnt_off0[%d], sample_cnt_on1[%d], sample_cnt_off1[%d], next_srs_on/next_empty_on[%02d], pa_on_delay[%d], PA_ON1_CNT[0x%x], PA_OFF1_CNT[0x%x]
(W) Invalid pa gain. pa_gain[%d], pwr_val[%d], arbitor_addr[%d], mipi_ch_for_sm_only[%d]
DSPTX_MipiSmControl => pwr_val[%d], sample_cnt[%d], next_srs_pwr_val[%d], srs_sample_cnt[%d], next_srs_on[%d], et_en(PUSCH/SRS)[%02d], mipi_source_en[0x%x]
(Warning-RFCTRL) Mipi Read fail#0, mipiCh:%d
[FBRX_CPL][SwMipi] mipiCh : %d, word : 0x%x
(W) Invalid pa gain. pa_gain[%d], pwr_val[%d], arbitor_addr[%d], mipi_ch_for_sm_only[%d]
(W) Invalid pa gain. pa_gain[%d], pwr_val[%d], arbitor_addr[%d], mipi_ch_for_sm_only[%d]
DSPTX_MipiSmControl => pwr_val[%d], sample_cnt[%d][%d], next_srs_pwr_val[%d], srs_sample_cnt[%d][%d], next_srs_on[%d], et_en(PUSCH/SRS)[%02d], mipi_source_en[0x%x]
DSPTX_DisableControlSm !! reg_tickgen_main_ctl1 : 0x%x reg_tickgen_mipi_rffe : 0x%x, mipi_reg_idx : %d, ul_cc_idx : %d
DSPTX_DisableControlMIPInGPIO !! pa_control_mode : %d, tickgen_main_ctl0_reg : 0x%x, tickgen_main_ctl0_reg1 : 0x%x, reg_tickgen_mipi_rffe : 0x%x, ul_cc_idx : %d, mipi_reg_idx : %d
DSPTX_SetIratMeasureFlag[%d]
LTE IRAT MEASURE => return DSPTX_BlockRfTickSet
ULP status is released => return DSPTX_BlockRfTickSet
DSPTX_BlockRfTickSet. block_mipi_ch[0x%x], block_spi_idx[0x%x], RFD_TXF_EN[0x%x], rfd_init_flag[%d], noReset[%d]
GPIO Init=>ireg_tickgen_main_ctrl:0x%x, tti_con:0x%x, REG_TICKGEN_TX_PA_ON_ON0_CNT[0x%x], REG_TICKGEN_TX_PA_MODE_ON0_CNT[0x%x]
[RF-CTRL][Rf_Debug_Log] idx[%d], REG_TICKGEN_MIPI_RFFE_CNT[0x%x][0x%x][0x%x][0x%x][0x%x][0x%x][0x%x][0x%x], pa_mipi_ch[%d]
[RF-CTRL][Rf_Debug_Log] FEMSIF_ARBIT_CTL0[0x%x], TICKGEN_MIPI_RFFE_CTL~1[0x%x][0x%x], FEMSIF_ARBIT_ENABLE0~1[0x%x][0x%x], ARBIT_TR_NUM0/4/5[0x%x][0x%x][0x%x], pa_mipi_ch[%d]
[RF-CTRL][Rf_Debug_Log] REG_TICKGEN_MIPI_RFFE_CNT[0x%x][0x%x][0x%x][0x%x][0x%x][0x%x][0x%x][0x%x], sm_mipi_ch[%d]
[RF-CTRL][Rf_Debug_Log] FEMSIF_ARBIT_CTL0[0x%x], TICKGEN_MIPI_RFFE_CTL~1[0x%x][0x%x], FEMSIF_ARBIT_ENABLE0~1[0x%x][0x%x], ARBIT_TR_NUM0/4/5[0x%x][0x%x][0x%x], sm_mipi_ch[%d]
[RF-CTRL][Rf_Debug_Log] pa_en_reg[0x%x][0x%x][0x%x], pa_en_pwr_reg[0x%x][0x%x], pacdac_value[0x%x], sm_mode[0x%x], femsif_main_ctl/2/3[0x%x][0x%x][0x%x]
[1st] FEMSIF_ARBIT0_CTL_RD0/1[0x%x][0x%x], FEMSIF_ARBIT2_CTL_RD0/1[0x%x][0x%x], FEMSIF_ARBIT4_CTL_RD0/1[0x%x][0x%x], FEMSIF_ARBIT6_CTL_RD0/1[0x%x][0x%x]
[2nd] FEMSIF_ARBIT0_CTL_RD0/1[0x%x][0x%x], FEMSIF_ARBIT2_CTL_RD0/1[0x%x][0x%x], FEMSIF_ARBIT4_CTL_RD0/1[0x%x][0x%x], FEMSIF_ARBIT6_CTL_RD0/1[0x%x][0x%x]
