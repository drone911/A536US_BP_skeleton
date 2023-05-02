[ScgUlp_Isr] TX0_RX_TX_SAMPLE_CNT[0X%X] TX1_RX_TX_SAMPLE_CNT[0X%X], TX1_INT_N[0X%X], TX1_SYSTEM_INFO[0X%X]
LTE ULP Disabled : status : %d
RACH triggered CellGrIdx: %d
IPC: IPC_ACTION_ID_RF_DUMP.
Re-init TX channel, absolute TA[%d] for DSDS.
Re-init TX channel, No absolute TA because absolute TA is ready
(W) RF control disabled. shm_sm_mipi_enable:0x%x
UL0_TTI_CONFIG[0x%x], UL1_TTI_CONFIG[0x%x], rtg_cnt(DL/UL)[0x%x], rfd_rtg_cnt_TX0~1(DL/UL)[0x%x][0x%x], UL/DL_RTG_diff[%d], ULP_ISR_time[%d(us)], et_en/pre_rach_check[%05d], ulDigitalGainCompInfo[0x%x], RFD_TXF_MPR_AVG_ACC[0x%x]
(F) TX0_SYSTEM_INFO : 0x%x TX0_SYSTEM_INFO : 0x%x !!
DSPTX_ULP_ISR(Tx0)=> ul_sfn+ul_tti(%d), ta_acc=%d, cell_id:%d, ue_id:0x%x, tx_sys_info:0x%x, rtg_cnt(DL/UL):0x%x, femsif_main_ctl:0x%x, lpm_status[%d], lpm_status_SHM[%d], spi_off_delay[%d]
DSPTX_ULP_ISR(Tx1)=> ul_sfn+ul_tti(%d), ta_acc_tx1=%d, cell_id:%d, rtg_cnt(DL/UL):0x%x, Tx1_diff:%d, UL0_SLCA_MIXER_FREQ_OFFSET:0x%x, spi_off_delay[%d], ul_cc_idx:%d
UL_SFN Mismatch!!! (UL_TTI:%d, UL_SFN:%d, DL_SFN:%d, ul_cc_idx:%d)
[fmt3_tpc] tpc_acc_pusch:%d, tpc_acc_pucch:%d, fmt3_tpc_val:0x%x, dci_tpc_exist:0x%x, ul_cc_idx:%d
Set forced [Modify TA]. ul_cc_idx[%d]
[Modify TA] is delayed because Absolute TA is pending for next tti. modify_ta_timer[%d], ul_cc_idx[%d]
Set pTAG_ID/psTAG_ID Absolute TA for scell. ul_cc_idx[%d], ul_pcc_idx[%d]
Change Processing Time by LPM. lpm_status[%d]->[%d], cell_group[%d]
ul_cc_idx : %d, RAR Timer Expired
RACH=>t_tti:%d, tti_con:0x%x, DAC:%d, timer:%d, ra_sr:%d, ra_type:%d, ul_sfn:%d
UL=>DL/UL timing diff is negative, TA set zero : ul_cc_idx:%d, DL/UL RTG:0x%x
DRX&CQI cqi_mask(%d), ODT_state(%d)
DRX&CQI return(%d), CC(%d)
pusch_cqi: conc/idx/cc/proc/set/rank(%d), len_r1/org(%d,%d), data(0x%x,0x%x,0x%x,0x%x)
CC(%d), ACQI=>t_tti:%d, request:%d, meas_set_r10:0x%x, cqi_size:%d, ri_size:%d, ri_on:%d
CQI_Err=>%d
RI on Pusch, pusch_ri_size: %d, pusch_ri_info: %d, cqi_type: %d
CC(%d), PCQI=>t_tti:%d, cqi_type:%d, cqi_size:%d, cqi_info:0x%x, ri_on:%d
(f) false alarm for CQI size(%d)!!
(F) CQI_SIZE error: %d
(F) false ack size (%d)
(f) ul_cc_idx(%d) is INVALID for LMAC
(F) harq_buf.SWHarqBufAddress[0]:0x%x
(f) tx_lte_trs_enc_ttibuf_set:0x%x
(f) tx_lte_trs_enc_ttibuf_set:0x%x
Zero-Padding PUSCH Skipped. cell_group:%d, ul_cc_idx:%d, ul_reg_index:%d, ul_h_id:%d
(F) discard PUSCH. sw_harq_buf_status:0x%x, ul_h_id:%d, ant_idx:%d, ul_trans_sfn_tti:%d, length_pusch:%d
PUCCH_rach Check %d, %d, 0x%x
ACK&SRI=>ACK[0x%x]Idx[Ant0:%d, 1:%d]SIZE[%d]
PUCCH_TPC=>t_tti:%d, TPC[0]:%d, TPC[1]:%d, TPC[4]:%d, TPC[5]:%d, TPC[6]:%d, TPC[9]:%d
[simul_pucch] PUCCH=>t_tti:%d, fmt:%d, tti_con:0x%x, ack_val:0x%x, rsc_idx:%d, an_cw:%d, ul_sfn:%d
SRI drop=>sri_trans_count:%d, cell_group: %d
ACK&SRI=>ACK[0x%x]Idx[Ant0:%d,1:%d]SIZE[%d] cell_group[%d]
CQI&ACK->Format_2B:ACK[0x%x]AckNum[%d] cell_group[%d]
PUCCH_TPC=>t_tti:%d, TPC[0/1]:%d, TPC[2/3]:%d, TPC[4/5]:%d, TPC[6/7]:%d, TPC[8/9]:%d
PUCCH=>cell_group/t_tti:%d, fmt:%d, tti_con:0x%x, ack_val:0x%x, rsc_idx:%d, an_size:%d, ul_sfn:%d
PUCCH=>cell_group/t_tti:%d, fmt:%d, tti_con:0x%x, ack_val:0x%x, an_size:%d, cqi_size:%d, rsc_idx2:%d
PUCCH=>format: %d, rsc index : %d, pcc index : %d
Ant switching [Hard_AS Done]. TAS_status:%02d, tx_pwr:%d, txpwr_th[%d, %d], rsrp_diff:%d, rsrp_th[%d, %d]
Ant switching [Done]. TAS_status:%02d, tx_pwr:%d, txpwr_th[%d, %d], rsrp_diff:%d, rsrp_th[%d, %d]
Ant switching [Hard_AS Waiting]. <FORCED UL REMOVE!!> TAS_status:%d, tx_pwr:%d, txpwr_th[%d, %d], rsrp_diff:%d, hard_ant_sw_timer:%d, TAS_HardSw_Time:%d
Ant switching [Hard_AS Waiting]. TAS_status:%d, tx_pwr:%d, txpwr_th[%d, %d], rsrp_diff:%d, hard_ant_sw_timer:%d, TAS_HardSw_Time:%d
Ant switching [Hard_AS Checking]. TAS_status:%d, tx_pwr:%d, txpwr_th[%d, %d], rsrp_diff:%d, hard_ant_sw_timer:%d, TAS_HardSw_Time:%d
Ant switching [Waiting]. TAS_status:%d, tx_pwr:%d, txpwr_th[%d, %d], rsrp_diff:%d, rsrp_th[%d, %d]
Ant switching [N/A]. TAS_status:%d, tx_pwr:%d, txpwr_th[%d, %d], rsrp_diff:%d, rsrp_th[%d, %d]
[AIT_4x4MIMO] average pusch power(%d)
GAP UL remove
Measurement GAP UL0 remove, flag:%d
Measurement GAP UL1 remove, flag:%d
TX Block UL remove, timer:%d
IPC: IPC_ACTION_ID_TX_WAKEUP.
[PowerClass] et_en : %d, pwr_val : %d, pwr_indx : %d, srs_pwr_val : %d, srs_pwr_idx : %d, shift_gain_idx : %d
DPD/ET=> et_en:%d, pwr_idx:%d, sum_comp_val(x10):%d, srs_et_en:%d, srs_pwr_idx:%d, srs_on:%d
sum_comp_val[%d], mod_val[%d], setting_apt_cfr_clipping_limit[0x%x], apt_cfr_clipping_limit0~3[0x%x][0x%x][0x%x][0x%x]
[DPS] tx_ch : %d, nrOnStatus : %d, pwr_val : %d, cond_ofs : %d, non_ulCa_p_e_max : %d
UL_PWR=>pwr:%d, tx_analog_gain:0x%x, ifft(/srs):0x%x, ul_cc_idx/pa gain(/srs):0x%x, rboff_comp_val:%d, pwr_detect_comp_val:%d, tx_gain_table_comp_val:%d, tx_gain_table_srs_comp_val:%d, ul_user_mpr:0x%x update_pmax_p_e_max:%d
A-MPR=> A-MPR:%d, rf_band:%d, start_rb_slot0:%d, ns_val(ori/cvt):%d, ns15_1_en:%d, tx_freq_100khz:%d, ul_cc_idx/ul_bw:%02d
large_a has abnormal value. large_n_rb_alloc:%d, large_n_rb_agg:%d
large_a has abnormal value. large_n_rb_alloc:%d, large_n_rb_agg:%d
ca_ns_val:%d, rf_band:%d, Tx_pcc_scc:%d, max_pwr:%d, p_e_max_c:%d, mpr/a_mpr:%d, ca_user_mpr:%d, rb1_rb1/mod_val/simul/revers/ctg_rb_alloc/nctg_flag:0x%x
Abnormal BW configuration. CA BW Class can not be A! (CC0/CC1 : %d/%d)
[CalMaxTxPwr] ul_cc_idx:%d, e_max:%d, max_pwr_ue_spt:%d, cd_ofs[pc3/pc2]:[%d/%d], boost:%d, max_pwr:%d
DSPTX_GenPseudoSeq. cell_id : %d, ue_id : %d, ul_cc_idx : %d, cell_group : %d, delta_ss : %d
DSPTX_GenPseudoVirtualCell. cell_id[0] : %d, dmrs_setup_r11 : %d, pusch_id : %d, csh_dmrs_id : %d, nPucch_param_r11_setup : %d, pucch_id : %d, ul_cc_idx : %d
[Modify TA] Change Small TA value. ta_val[%d], ul_dl_timing_diff[%d], ul_rtg_cnt[0x%x], dl_rtg_cnt[0x%x], err_correct_drx[%d], modi_relative_ta_val[%d], ul_cc_idx[%d]
(W) [Modify TA] Out of small TA value range => Set Big TA. modi_relative_ta_val[%d], ul_dl_timing_diff[%d], ul_rtg_cnt[0x%x], dl_rtg_cnt[0x%x], ul_cc_idx[%d]
[RFD_Modify TA] Change Small TA value. ta_val[%d], ul_dl_timing_diff[%d], ul_rtg_cnt[0x%x], dl_rtg_cnt[0x%x], err_correct_drx[%d], modi_relative_ta_val[%d], ul_cc_idx[%d]
(W) [RFD_Modify TA] Out of small TA value range => Set Big TA. modi_relative_ta_val[%d], ul_dl_timing_diff[%d], ul_rtg_cnt[0x%x], dl_rtg_cnt[0x%x], ul_cc_idx[%d]
After init, No Absolute TA. Set forced Absolute TA. TA_Val[%d]
UL_TA=> TA_mode[%d], TA_val[%d], REG_TA_acc0~1[0x%x][0x%x], han_ta_acc[%d], ul_cc_idx[%d]
UL_STR=> err_corr[Ts]:%d, str_val:%d, str_accum[Ts]:%d, ul_sfn:%d, rx_cnt:%d, tx_cnt:%d, ul_cc_idx:%d
UL_STR=> [for MIMO, PUCCH diversity, SRS 2ports]. err_corr[Ts]:%d
UL_STR=> [for same TAG]. err_corr[Ts]:%d. ref_cell_ul_cc_idx:%d, set_ul_cc_idx:%d, tag_id:%d
TxTimingDiff. rtg_cnt[0x%x, 0x%x], TA_acc[%d, %d]
IPC:UL_SIB!! cell_group: %d, rs_sib.valid:%d, pwr_ctrl_sib.valid:%d, pwr_ctrl_r10_sib.valid:%d, pucch_sib.valid:%d, pusch_sib.valid/srs_sib.valid:%d, pucch_sib.n1_pucch_an:%d
Dedi para ul_pwr_ctrl.valid : 0x%x, pusch.valid : 0x%x, pucch.valid : 0x%x, cell_group : %d
TPC_PUSCH reset : tpc_acc : %d, p0_old : %d, p0_new : %d, cell_group : %d
copy start msg_pucch.valid = %d
pucch_r10 valid : %d format3 setup:%d pucch_format4_setup: %d, pucch_format5_setup:%d
copy start pucch_r11.valid = %d
pucch_r13 spatial bundling PUCCH : %d PUSCH:%d, format4 setup: %d, format5 setup: %d, format3 setup: %d, cs setup : %d
1370 copy start n3_pucch_an_list_cnt : %d, n3_pucch_an_list_p1_cnt : %d, n3_pucch_an_list[i_list] : %d %d %d %d
1370 copy start n3_pucch_an_list_p1[i_list] : %d %d %d %d
UL_ERR=> SRI parameter error, sr_Configuration_Index : %d, cell_group
IPC:UL_SR=>SrValid:%d SrRscIndex:%d, SrConfigIdx:%d, DsrMax:%d, P1valid:%d, rscindexP1:%d, cell_group:%d
UL=> sr_ProhibitTimer : %d, cell_group : %d
UL=> skip_zeropadding_pusch : %d, cell_group : %d
rach_sib : c_i:%d, r_i:%d, z_c:%d, h_f:%d, f_o:%d, cell_group:%d
UL(F)=> Wrong srs_Configuration_Index : %d
srs_periodicity:%d, srs_sub_offset:%d, ul_cc_idx:%d
UL(F)=> Wrong ap_srs_Configuration_Index : %d
IPC:UL_SRS=>[0x%x] ConfigIdx:%d, srs_bandwidth:%d ul_srs_r10.valid:%d, ul_srs_ap_r10.valid:%d, cell_group: %d
ul_srs_req.valid %d, val: %d, cell_group: %d
TX power time trigger => tx_level_num[%d], Period[%d] power_index0[0x%x] 1[0x%x] 2[0x%x] 3[0x%x] 4[0x%x]
IPC:UL_Common. msg_ul_bw.valid[%d], msg_ul_bw.ul_common_bw[%d], msg_ul_bw.ul_common_cp_type[%d], cell_group/dulplex[%02d], femsif_main_ctl[0x%x], mipi_sm_type2_on_delay[%d], mipi_sm_type2_off_delay[%d]
IPC:UL_Common. MIPI_CH => PA[0x%x], SM[0x%x], DELAY => PA_ON[%d], PA_OFF[%d], PA_GAIN[%d], SM_ON[%d], SM_OFF[%d], SM_GAIN[%d], SPI_ON[%d], SPI_OFF[%d]
IPC: SRI ON !! ipc_sri_on : %d, SRI_INFO_arm.on_cnt : %d, cell_group: %d
DRX&SRI(%d)
[Modify TA] is delayed because Absolute TA is pending for next tti. modify_ta_timer[%d], ul_cc_idx[0]
[Modify TA] Skipped because Absolute TA was applied at last tti only
IPC:UL_TA0[M:%d, V:%d, acc:%d, ta_abs_set_on:%d, cc_bitmap:0x%x]
[Modify TA] is delayed because Absolute TA is pending for next tti. modify_ta_timer[%d], ul_cc_idx[1]
[Modify TA] Skipped because Absolute TA was applied at last tti only
IPC:UL_TA1[M:%d, V:%d, acc:%d, ta_abs_set_on:%d, cc_bitmap:0x%x]
[Modify TA] is delayed because Absolute TA is pending for next tti. modify_ta_timer[%d], ul_cc_idx[%d]
[Modify TA] Skipped because Absolute TA was applied at last tti only
IPC:UL_TA_PScell[M:%d, V:%d, acc:%d, ta_abs_set_on:%d, cc_bitmap:0x%x]
IPC: GAP info[en:%d, patern:%d, offset:%d]
IPC: HoTempSfn:%d, cell_id[UL_ANT0]:%d, Ul_ActiveCC:%d
IPC: ReleaseSrsCqi : Cell Group[%d]
IPC: ReleaseScellSrs !! cc_bitmap : 0x%x, cell_group(%d)
IPC: PowerEMax[%d], power_c_max[%d], cell_group[%d], cc_idx[dl/ul:%d], ipcFirstCome:%d
IPC: PowerEMax[ul_cc_idx : %d] : %d, powerClass(ulca/nonUlCa) : %d, max_pwr_ue_support : %d, cd_ofs(PC3/PC2) : %d / %d, ltmSet : %d
(W) Invalid max power value [%d]
(f) [UL CA][UL DC] Invalid ul_cc_idx for RACH. cell_group:%d, scell_idx:%d
IPC:Rachinfo rar_t:%d, p_cnt:%d, p_id:%d, cmd:%d, ul_cc_idx:%d, m_id:%d, cell_group/ra_sr:%d
ULP_rec=> ul_tti0(%d), ul_sfn0:%d, han_ta_acc0=%d, ul_tti1(%d), ul_sfn1:%d, han_ta_acc1=%d
IPC: ChangeLTMode : LTM_MODE_ENABLE[SHM] : 0x%x, DSP_LTM_MODE_ENABLE : 0x%x, DSP_AFC_CAL_ENABLE : 0x%x, TX_SCC_MODE : 0x%x, CL_DELAY_CAL_MODE : 0x%x
TDD pusch_trans=> rb_size:%d, trans_tti:%d, duplex:%d sf_assign:%d, ul_dl :%d
WARNING REMOVAL TRACE : %d
WARNING REMOVAL TRACE : %d
LTM_PUSCH=> ltm_ch:%d, rb_size:%d, start_rb:%d, mcs:%d(1:QPSK, 2:16QAM), ul_bw:%d, ant_sel:%d, ltm_pwr_set_enable:%d
LTM_PRACH=> config_index:%d, offset:%d, ul_bw:%d
UL_LTM=> final_pwr:%d, rcv_pwr:%d, mpr_v:%d, max_power:%d
TDD pusch_trans=> rb_size:%d, trans_tti:%d, duplex:%d sf_assign:%d, ul_dl :%d
LTM_PUSCH=> ltm_ch:%d, rb_size:%d, start_rb:%d, mcs:%d(1:QPSK, 2:16QAM), ul_bw:%d, ant_sel:%d, ltm_pwr_set_enable:%d
IPC: IPC_LTM_SET - cell_group(%d)
IPC: LtmSet to Tx disable (ltm_set_enable : %d)
mipi_sm_type2_on_delay[%d][%d], mipi_sm_type2_off_delay[%d][%d]
MIPI_CH => PA[0x%x], SM[0x%x], AIT[0x%x]. DELAY => PA_ON[%d], PA_OFF[%d], PA_GAIN[%d], SM_ON[%d], SM_OFF[%d], SPI_ON[%d], SPI_OFF[%d]
MIPI_CH TX1 => PA[0x%x], SM[0x%x], AIT[0x%x]. DELAY => PA_ON[%d], PA_OFF[%d], PA_GAIN[%d], SM_ON[%d], SM_OFF[%d], SPI_ON[%d], SPI_OFF[%d]
IPC: LtmSet %d , tti_con %d, TX0_bw:%d, TX1_bw:%d, ltm_2tx_on:%d, ul_cc_idx:%d, FEMSIF_MAIN_CTL:0x%x
in IPC Tx Freq = %d, shared = %d, tx_path_off_block : %d, ul_cc_idx:%d
IPC: GetHWVer hw_version[0] : %d, hw_version[1] : %d, hw_version[2] : %d
ULP_MSG2=>r_tti:%d, sfn:%d, tti:%d, ul_delay:%d
ULP_MSG2_DLY=>add_s:%d, sfn:%d, sub_f:%d
gain_table_update_flag set. stop_ipc_timer[%d], ul_cc_idx[%d]
[Abnormal TX power] UL_CH[%d], Target_power[%d], PM_val[%d], sfn_tti[%d], ul_cc_idx[%d], stop_ipc_timer[%d]
[Abnormal TX power] UL_CH[%d], Target_power[%d], gpadc_value[%d], sfn_tti[%d], ul_cc_idx[%d], stop_ipc_timer[%d]
IPC: IPC_ACTION_ID_ABNORMAL_PWR
AIT=> Enable:%d, status:%d, ait_cnt:%d, pwr_threshold:%d, interval:%d, max_dump_num:%d, ait_end:%d
IPC:AIT MIPI[num:%d, [0]:0x%x, [1]:0x%x, [last]:0x%x, X-GND en:%d, type:%d, set_val:0x%x
AIT=> Send AIT dump End, ait_end_trigger:%d
out of range power : %d
Reduce PUSCH power : limit_pwr:[%d => %d], UL_ANT0[%d => %d => %d], UL_ANT1[%d => %d => %d]
Reduce SRS power UL_ANT0[%d => %d], UL_ANT1[%d => %d], max_linear_val:%d, total_linear_val:%d
[DSPTX_CheckULSingleLo]. ul_single_lo_scc_idx:%d, dl_cc_idx:%d, slo_cc_idx:%d, dmxr_freq_value:%d
Single LO=> Scell TX[0x%x] is dropped because of Pcell PRACH
Single LO=> total_pwr:%d, single_lo_digital_gain_comp[0x%x, 0x%x], total_last_sym_pwr:%d, single_lo_last_sym_digital_gain_comp[0x%x, 0x%x]
Out of range!! gain_atten_val:%d
num_ul_cc[MCG]:%d, num_ul_cc[SCG]:%d
Set [Modify TA] for ul_pcc_idx[%d]
[UL CA] DSPTX_SetScell. MIXER_FREQ_OFFSET CC0[0x%x] CC1[0x%x], diff_freqeuency1:%d, diff_freq2:%d, comp_100khz[%d], ul_slca_in_config.rate[%d], O_frq:%d, O_frq2:%d single-LO/revers_flag:%02d
[UL CA] IPC: DSPTX_GetIpcScell. srs_comm.valid:%d, pusch_comm.valid:%d, pusch_ulrs.valid:%d, prach_scell_setup:%d, pusch.valid:%d, srs.valid:%d, srs_ap.valid:%d
IPC: SCELL_TX_CONFIG Power: %d, cell_group : %d, cc_idx : %d
[UL CA] update Scell_TxComm. prach_comm_setup:%d, peamble_init_power:%d, power_ramp_step:%d, delta_preamble_Msg3:%d, idx:%d
[UL CA] updaete Scell_TxComm. root_seq_index:%d, prach_cfg_index:%d, high_speed_flag:%d, zero_correlation_zone_cfg:%d, prach_freq_offset:%d, tag_id:%d, ref_flag_for_stag:%d
[UL CA] updaete Scell_TxDedi. idx:%d, ul_cc_idx:%d, dl_cc_idx:%d, cell_group:%d, ul_srs_ap_r10_valid:%d, ul_srs_ap_r10_setup:%d, gDb[srs_req_on]:%d
[AS] Backup: ant_sw_en:%d, ant_sw_timer:%d, ant_sw_txpwr_en:%d, accumulated_BO:%d, rsrp_diff:%d, gAntSWStop:%d
UL=>BackupTXdb. TA_ACC[%d, %d], PUCCH_TPC_ACC:%d, PUSCH_TPC_ACC[%d, %d], absolute_init_pwr[%d], tag_id[%03d]
Change Absolute TA value [%d] -> [%d]
[AS] Restore: ant_sw_en:%d, ant_sw_timer:%d, ant_sw_txpwr_en:%d, accumulated_BO:%d, rsrp_diff:%d, gAntSWStop:%d
UL=>RestoreTXdb. TA_ACC[%d, %d], PUCCH_TPC_ACC:%d, PUSCH_TPC_ACC[%d, %d], tx_freq_100khz[%d], tag_id[%03d]
IPC: TXBackupCommand
final_ul_64qam_enable:%d, enable_64_Qam:%d, enable_64_Qam_r12:%d, UECategory:%d, UECategory_UL:%d, UECategory_DL:%d, ul_cc_idx:%d
final_ul_256qam_enable:%d, enable_256_Qam_r14:%d, UECategory:%d, UECategory_UL:%d, UECategory_DL:%d, ul_cc_idx:%d
PUCCH_TPC_CAL=>pucch_tpc_sum:%d, tpc_acc_pucch:%d, cell_group %d
ULP_MCW_UL_Mutex=> wait_cnt[%d], id[%d], set_enable[%d]
[DSPTX_Set_FilterDelay]. BW[%d], ifft_val[0x%x], rach_val[0x%x], ifftdelay[0x%x], rach_ifftdelay[0x%x], ul_cc_idx[%d], dl_cc_idx[%d]
Init TX. rf_board_type:0x%x, ul_user_mpr_en:0x%x, mipi_FEMSIF_ch:0x%x, mipi_SM_ch:0x%x, mc_apt_only_en:0x%x, mipi_ait_ch:%d, rfd_filter_idx[%d][%d], rfd_et_idx[%d][%d]
IPC:IPC_ACTION_ID_LTE_DSP_UL_INIT.
Data move dl_cc_idx:%d, tti:0x%x,_tti:0x%x, dl_ack_info:0x%x, dl_ack_info_next : %d
IPC TX Power Time Report => 0[%X] 1[%X] 2[%X] 3[%X] 4[%X]
IPC:TX_SWAP=> swap_tx_path:0x%x, cell_group[%d]
Set TX_SWAP=> swap_tx_path:0x%x, rfic_tx_path_off[1/0]:0x%02x, mipi_FEMSIF_ch[%d], mipi_SM_ch[%d], mipi_sm_type2_on_delay[%d], mipi_sm_type2_off_delay[%d], sm_type[%d]
Set TX_SWAP. MIPI_CH => PA[0x%x], SM[0x%x], DELAY => PA_ON[%d], PA_OFF[%d], PA_GAIN[%d], SM_ON[%d], SM_OFF[%d], SM_GAIN[%d], SPI_ON[%d], SPI_OFF[%d]
IPC:TX_BLOCK
IPC:TX_BLOCK_DONE
DSPTX_Gnss_GeneratePaenSig_Init. TICKGEN_TX0_MAIN_CTL0[0x%x], IRAT_MUX_MAIN_CTL_RD[0x%x]
DSPTX_Gnss_GeneratePaenSig_Control. cp_type[%d], gnss_ctrl_en_ttim[%d], reg_ul_tti_config[0x%x], gnss_tick_cnt[0x%x][0x%x][0x%x][0x%x]
DSPTX_Gnss_GeneratePaenSig_SWmode. gps_pa_en[%d], IRAT_MUX_GPS_SEL[0x%x]
DSPTX_Gnss_GeneratePaenSig_HWmode. IRAT_MUX_GPS_SEL[0x%x], TICKGEN_TX0_MAIN_CTL0[0x%x], ON0_CNT[0x%x], OFF0_CNT[0x%x], ON1_CNT[0x%x], OFF1_CNT[0x%x], IRAT_MUX_MAIN_CTL_RD[0x%x]
[TAS_report] ul_reg_index : %d, numUlActiveCell : %d, txPowSumDbm : %d, txPowSum : %d, pointer : %d, dump :[%d, %d, %d, %d, %d]
[ET_DELAY] lpm_status : %d, lpm_delay_offset : 0x%x, final_delay : 0x%x
[PowerClass] activeCcNum : %d, powerClass : %d, p_e_max : %d, DSP_LTM_MODE_ENABLE : %d, max_pwr_ue_support : %d
[PowerClass] ulca_onoff : %d, powerClass : %d, max_pwr_ue_support : %d, non_ulCa_p_e_max : %d, p_e_max_scell : %d
S5511 [MARCONI_UL] RX_M_MARCONI_LINK_INTR_STATUS[0x%x], FILT_STATUS_CH2~3[0x%x][0x%x], RX_M_MARCONI_LINK_CH_INTR_STATUS[0x%x], RX_M_MARCONI_LINK_MON_EOT_ERROR_COUNT[0x%x], RX_M_MARCONI_LINK_MON_CRC_ERROR_COUNT[0x%x], RX_F_MARCONI_LINK_FILT_CH2_CONFIG[0x%x], RFD_TX_FRAME_SYNC_PHASE[0x%x], DVALID/Valid(CC0/1)[0x%x][0x%x]
[RFD_MCMU] SW_RESETn0[0x%x], SW_RESETn1[0x%x], SW_RESETn2[0x%x], SW_CLK_ON0[0x%x], SW_CLK_ON1[0x%x], SW_CLK_ON2[0x%x], DYN_CLK_ON_EN0[0x%x], DYN_CLK_ON_EN1[0x%x], DYN_CLK_ON_EN2[0x%x], CLK_DIV_EN[0x%x]
[RFD_TXFilter] RFD_UL0_TXF_CFG[0x%x], RFD_TXF_EN[0x%x], RFD_UL0_INTP_ON[0x%x], RFD_UL0_CFR_CLIPPING_LIMT[0x%x], RFD_UL0_CFR[0x%x], RFD_UL0_DPD_SEL[0x%x], RFD_UL0_DPD_AMAM_GAIN[0x%x], RFD_UL0_DMIXER_FREQ_OFFSET[0x%x], RFD_UL0_DMIXER_PHASE_OFFSET[0x%x], RFD_UL0_PLL_PHASE_COMPEN[0x%x]
[RFD_TXFilter] RFD_UL0_TX_IQ_MIS[0x%x], RFD_UL0_TX_DC_OFS[0x%x], RFD_UL0_MAIN_BIT_SEL[0x%x], RFD_UL0_MAIN_DELAY_VAL[0x%x], RFD_UL0_DAC_CFG[0x%x], RFD_TXF_IN_SWAP[0x%x], RFD_TXF_OUT_SWAP[0x%x], RFD_TXF_DVALID_CLK0[0x%x], RFD_TXF_CLK_EN[0x%x]
[TXFilter] txf_modem_sel[0x%x], txf_lte_window_mem_on[0x%x], ul0_4g_window[0x%x], ul_intp0_config[0x%x], ul_intp0_on[0x%x], ul_slca0_in_config[0x%x], ul_slca0_mixer_dgain[0x%x], ul_slca_sub6_out_sel[0x%x]
[TXSymProc] sp_cc_enable:0x%x, sp_state_mon:0x%x, tti_4gnr_cmdX_bufinfo:[0x%x][0x%x], tx_symbproc_lmacif_3g_mode_enable:0x%x, tx_symbproc_lmacif_out_endian:0x%x,lmac_sm_ctrl_state_4g:0x%x,
[Infra_Gen_FRONT_TX] rx_modem_sel[0x%x], rx_sw_clk_on1[0x%x], rx_dyn_clk_on_en1[0x%x], tx_sw_resetn0[0x%x], tx_sharedmem_sel[0x%x], tx_mod_sharedmem_sel[0x%x], tx_sw_clk_on0~1[0x%x][0x%x], tx_dyn_clk_on0~1[0x%x][0x%x]
(f) ul_cc_idx(%d) is INVALID
(w) IPC: IPC_IDLE_DTX - ipc comes abnormal dl_cc_idx:%d, dtx_on_off:%d
(w) IPC: IPC_IDLE_DTX - idle_dtx on already set. dl_cc_idx:%d, dtx_on_off:%d
IPC: IPC_IDLE_DTX - ul_cc_idx : %d, dl_cc_idx : %d, IPC_IDLE_DTX : %d, idle_dtx_status : %d
(w) IPC: IPC_IDLE_DTX - Target ul_cc_idx(%d)[%d/%d] mipi channel overlabs UL_ANT0[%d/%d]. block_disable_flag[%d/%d]
IDLE_DTX on - ul_cc_idx : %d, dl_cc_idx : %d, IPC_IDLE_DTX : %d, idle_dtx_status : %d, block_mipi_ch : %d, block_flag : [%d/%d]
DSPTX_Trigger_forced_orderd_rach. trigger_type[%d]
REMOVE 'BLOCK RELATIVE TA'. rf_band[%d], cell_id[%d], str_accum[%d]
BLOCK RELATIVE TA. rf_band[%d], cell_id[%d]
[TRX SW] FEM CH : %d, ctrl_type : %d, arbit reg : [0x%x/0x%x]
[RF-CTRL][DSPTX_StoreShm2Global] getType[%d], ant_idx[%d], shm_idx[%d], cell_group[%d], sm_type[%d], et_dac_ctr_i[0x%x], et_dac_ctr_q[0x%x], mipi_sm_type2_on_delay[%d], mipi_sm_type2_off_delay[%d], lpm_dealy[%d]
[RF-CTRL][DSPTX_StoreShm2Global][TX0] MIPI_CH => PA[0x%x], SM[0x%x]. DELAY => PA_ON[%d], PA_OFF[%d], PA_GAIN[%d], SM_ON[%d], SM_OFF[%d], SM_GAIN[%d], SPI_ON[%d], SPI_OFF[%d]
[RF-CTRL][DSPTX_StoreShm2Global][TX1] MIPI_CH => PA[0x%x], SM[0x%x]. DELAY => PA_ON[%d], PA_OFF[%d], PA_GAIN[%d], SM_ON[%d], SM_OFF[%d], SM_GAIN[%d], SPI_ON[%d], SPI_OFF[%d]
[DSPTX_Check_Set_Femsif] femsif_main_ctl[0x%x], femsif_main_ctl2[0x%x], femsif_main_ctl3[0x%x]
