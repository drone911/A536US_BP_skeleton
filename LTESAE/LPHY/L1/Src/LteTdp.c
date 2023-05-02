DEMOD_SUB disabled - waiting DEMOD_CORE
[CDRX_QS][interrupt][before] quick_sleep_status(0x%x), sync_int_time_18(0x%x)
[CDRX_QS][Debug] decinfo_dm(0x%x),dci_obuf_0_dm(0x%x),decinfo.reg(0x%x),obuf0(0x%x)
[CDRX_QS] PHY CDRX handler has sent higher layer the CDRX sleep IPC for fast sleep !!!
[CDRX_QS][Debug] PHY CDRX Gtti(%d),dcidm_sfn.tti_idx(%d), decinfo(0x%x), obuf0(0x%x), ulflag(%d)
[CDRX_QS][interrupt][after] quick_sleep_status(0x%x), sync_int_time_18(0x%x)
D2dSync_Isr:%d
IPC: IPC_ACTION_ID_TDP_CONFIG [Act CC Num : %d] [AGC][0][1][2][3][4] : %d, %d, %d, %d, %d
IPC: IPC_ACTION_ID_TDP_CONFIG [Act CC Num : %d] [AFC][0][1][2][3][4] : %d, %d, %d, %d, %d
IPC: IPC_ACTION_ID_TDP_CONFIG [Act CC Num : %d] [STR][0][1][2][3][4] : %d, %d, %d, %d, %d
[QS] quick sleep waiting procedure, duplex_mode(0x%x), state(0x%x), cnt(%d)
IPC: IPC_ACTION_ID_SET_DMXR_FREQ_INIT [BEFORE], ind_type[%d], pair_num[%d], cc[%d][%d][%d][%d], dmxr_freq_value[%d][%d][%d][%d]
IPC: IPC_ACTION_ID_SET_DMXR_FREQ_INIT [BEFORE], ind_type[%d], pair_num[%d], cc[%d][%d][%d][%d], changed_ind[%d][%d][%d][%d]
(F)IPC: IPC_ACTION_ID_SET_DMXR_FREQ_INIT -> Invalid SLO config indication [%d] !!!
IPC: IPC_ACTION_ID_SET_DMXR_FREQ_INIT [AFTER], ind_type[%d], pair_num[%d], cc[%d][%d][%d][%d], dmxr_freq_value[%d][%d][%d][%d]
IPC: IPC_ACTION_ID_SET_DMXR_FREQ_INIT [AFTER], ind_type[%d], pair_num[%d], cc[%d][%d][%d][%d], changed_ind[%d][%d][%d][%d]
Invalid PA,PB value[%d](%d, %d)[%d]
Invalid PA,PB value[%d](%d, %d)[%d]
Invalid PA,PB value[%d](%d, %d)[%d]
[LTEPHY][CC : %d]Pa: %d, Pb : %d, n_antP : %d, flag_mode : 0x%x
[LTEPHY][CC : %d]Pa_dB: %d, Pb_dB : %d, n_antP : %d
[LTEPHY][CC : %d]Rho_a_rx: %d, Rho_b_rx : %d, n_antP : %d
[LTEPHY][CC : %d]pa(%d), pb(%d), enbant(%d), RMS[Ctrl_dB : %d](RMS : %d, Pa_offset : %d)
[FD_AGC][LAA][En|Ind|Prv|Cur|AgcBy|AfcBy] 0x%6x, 0x%6x, 0x%6x, 0x%6x, 0x%6x, 0x%5x, 0x%5x [SLO pair : CC0~CC4] : 0x%x [CompT] : 0x%x
[FD_AGC][IDX/FD/TD/MarTD](0-9) : (0x%08x, 0x%08x, 0x%08x, 0x%08x, 0x%08x, 0x%08x, 0x%08x, 0x%08x, 0x%08x, 0x%08x)
[FD_AGC][IDX/FD/TD/MarTD](10-19) : (0x%08x, 0x%08x, 0x%08x, 0x%08x, 0x%08x, 0x%08x, 0x%08x, 0x%08x, 0x%08x, 0x%08x)
[FD_AGC][IDX/FD/TD/MarTD](20-29) : (0x%08x, 0x%08x, 0x%08x, 0x%08x, 0x%08x, 0x%08x, 0x%08x, 0x%08x, 0x%08x, 0x%08x)
[FD_AGC][RMS](CC0-3) : 0x%08x, (CC4-7) : 0x%08x, [QS](CC0-7) : 0x%08x, [FLAG] : (0x%08x), AGC_Cfg_Bypass : 0x%08x, NrStatus(0x%x), fr2_rf_onoff : %d, fdagcpath0tx0rx0(0x%x)
[FD_AFC][AngleDiff](CC0-3) : (%d, %d, %d, %d), [Mxr(DL)](CC0-3) : (%d, %d, %d, %d), [AngleOut](0/1) : %08d, (2/3) : %08d
[FD_AFC][Mxr(UL)] : (%d, %d), [UL_FREQ] : (%d, %d), [MPLL/FPLL/MWPLL(delta)] : (%d/%d/%d), [TCXO_FREQ_OFFSET] : %d, [RF_FREQ] : %d
[FD_AFC][Real](CC0-3) : (%d, %d, %d, %d) [Imag](CC0-3) : (%d, %d, %d, %d)
[FD_AFC][AngleDiff](CC4-7) : (%d, %d, %d, %d), [Mxr(DL)](CC4-7) : (%d, %d, %d, %d), [AngleOut](4/5) : %08d, (6/7) : %08d
[FD_AFC][Real](CC4-7) : (%d, %d, %d, %d), [Imag](CC4-7) : (%d, %d, %d, %d)
[AGAP : Pre]gapRrcState : %d, gap_in : %d, RXF_FREQ_x_VALUE : 0x%x
[FD_AFC][CC%d][SLO][Afc_Upt_En]:%d, [Afc_Ctrl_En]:%d, [slo_afc_upt]:%d
[FD_AGC] AGC Hold by QS(%d)
CC%d:: [cc_rx_path %d][Adc_Path : %d]FD_AGC gain change %d[LoopFilterOut] with %d[Current read], Comp_Idx : %d
initialize compen previous value when agc gain changed cc:%d tti:%d rxk:%d
[FD_AFC] AdcPath is not valid [cc : %d][adc_path : %d]
[FD_AFC][CC%d][BEFORE]p_AFC_data->InOrder_BufIdx_Afc: %d
[FD_AFC][CC%d][BEFORE]TimeCorr_LOG :: Register value : %d, loop value(loop only + bw_norm) : %d, SLO_offset : %d, bw_norm : %d, mixer_init_value : %d
[FD_AFC][CC%d][AFTER]TimeCorr_LOG :: Register value : %d, loop value(loop only + bw_norm) : %d, SLO_offset : %d, bw_norm : %d, mixer_init_value : %d
[FD_AFC][CC%d][BEFORE]TimeCorr_LOG :: Register value : %d, loop value(loop only + bw_norm) : %d, SLO_offset : %d, bw_norm : %d, mixer_init_value : %d, Config_Ind(%d)
[FD_AFC][CC%d][AFTER]TimeCorr_LOG :: Register value : %d, loop value(loop only + bw_norm) : %d, SLO_offset : %d, bw_norm : %d, mixer_init_value : %d, Config_Ind(%d)
[FD_AFC][CC%d][AFTER]p_AFC_data->InOrder_BufIdx_Afc: %d
[FD_AFC][CC%d] Afc_En : %d, Afc_ctrl_En : %d, Register value : %d, Cotrol value : %d, loop_mem(w/o scale) : %d, mixer_init_value : %d
[FD_AFC][CC%d] gapRunState : %d, gapRrcState : %d, first_ind_agap : %d, mixer_init_value_agap : %d, dl_dmxr_scale : %d
[FD_AFC] Invalid AFC Mode : %d
[LTETDP_Laa_Dci_Detection] wrong Cck!
[LTETDP_Laa_1st_Dci_Detection][Before]CC(%d)_LAA_SLEEP_STATE(0x%x), current_dci_result(%d), Ind : %d
[LTETDP_Laa_1st_Dci_Detection][After]CC(%d)_LAA_SLEEP_STATE(0x%x), current_dci_result(%d), Ind : %d
[TDP][LAA][CC%d][CG : %d] Current subframe is end one of this burst !!! => sf_type[TTI_PRV2] : %d, sf_type[TTI_PRV1] : %d, sf_type[TTI_CUR] : %d, sf_type[TTI_NXT] : %d
[TDP][LAA][CC%d] Init. subframe detection is running !!!
[TDP][LAA][CC%d]Init. subframe detection success, Normal TDP operation is going to run at next suframe !!!
[TDP][LAA][CC%d] Init. subframe detection is running !!!
[QS] quick sleep waiting procedure, duplex_mode(0x%x), state(0x%x), cnt(%d)
(Warning-RFCTRL) SPI Write FIFO not Cleared!! swSpiAddr[0x%X]
(Warning-RFCTRL) RFD_SWHISPD_RD: abnormal power domain!!
(Warning-RFCTRL) SPI Read FIFO not Cleared!! swSpiAddr[0x%X] step[%d]
(Warning-RFCTRL) RFIC not response swSpiAddr[0x%X]
(Warning-RFCTRL) CenterChip SW SPI Num Overflow!! wordNum[%d]
(Warning-RFCTRL) CenterChip SPI Write FIFO not Cleared!! swSpiAddr[0x%X]
(Warning-RFCTRL) Center SPI Read FIFO not Cleared!! swSpiAddr[0x%X] step[%d]
