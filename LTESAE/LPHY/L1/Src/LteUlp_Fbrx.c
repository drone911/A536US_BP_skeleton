cell_group : %d, ul_cc_idx[control/shm] : 0x%x, cmd : %d, ltm_set_enable : %d, cl_ait_on : %d, clAit_non_sig_on : %d
[PM_DEBUG] This FBRX already on. ul_cc_idx : %d, ltm_set_enable : %d
PM_module[On]=> spi write fail [0x%x]
PM_Module On[ul_cc_idx:%d]=> a_b_set = %d, word_add = 0x%x, a_val = %d, b_val = 0x%x, word_on_num = %d
PM_module[On]=> pm_module_set_fail. spi write fail [0x%x]
PM_module[Off]=> spi write fail [0x%x]
PM_Module off[ul_cc_idx:%d]=> word_off_num:%d, a_b_set:%d, fbrx_dcr_accum:0x%x, dcr_acc_adr:0x%x, dcr_acc_ov_adr:0x%x
(W) PM_Module => FBRX disabled due to IDLE DTX. ul_cc_idx : %d
[PM_DEBUG] continuous same FBRX result detected. ul_cc_idx : %d, pm_val : %d, cnt : %d
PM_Module=> ul_cc_idx/dl_cc_idx:%02d, UL_CH:0x%x, pwr:%d, scaledPwr:%d, PM_val = %d, fbrx_priority:%d, fbrx_own_cnt:%d, nrOnStatus:%d, fbrxReqByNR:%d, fbrxAbnormalCnt:%d
PM_Module=> FBRX report skip / ul_cc_idx/dl_cc_idx:%02d, CL-AIT:%d, SKIP:%d
PM_Module=> Tx TTI config was set, but FBRX Module is not ready (detect_ch : 0x%x, target Pwr : %d)
[PM_DEBUG] ul_tx_path : %d, ul_cc_idx : %d, ul_tti_config : 0x%x
[PM_DEBUG][MeasPM] Different with previous meas Tx path. ul_cc_idx:%d, latest_meas_tx_path:%d, ul_active_num:%d, pathSelDone:%d, two_ant_used:%d
[PM_DEBUG][MeasPM] Duplicated with previous meas Tx path. ul_cc_idx:%d, latest_meas_tx_path:%d, ul_active_num:%d, pathSelDone:%d, two_ant_used:%d
FBRX read skipped. ul_cc_idx : %d, fbrxMeasRate_cnt : %d
FBRX read skipped. ul_cc_idx : %d, shm_ul_cc_idx : %d, skip_cnt : %d
[PM_DEBUG][FbrxShrCtrl][ST] tti_con:0x%x/0x%x, latest_meas_tx_path:%d, prev_prior : %d, fbrx_priority:%d, fbrx_own_cnt:%d, nrOnStatus:%d
[PM_DEBUG][OwnCheck][PRIOR_H] fbrxOwnerFlag:%d, fbrx_priority:%d, fbrx_en:%d
[PM_DEBUG][OwnCheck][PRIOR_L] prach_on:%d, fbrxOwnerFlag:%d, fbrxReqByNR:%d, nrOnStatue:%d
PM_Module=>[OwnChg][L->H] fbrxOwnerFlag:%d, prev_priority : %d, fbrx_priority:%d, fbrx_en:%d, fbrx_own_cnt:%d, nrOnStatus:%d, fbrxReqByNR:%d
PM_Module=>[OwnChg][N->H] fbrxOwnerFlag:%d, prev_priority : %d, fbrx_priority:%d, fbrx_en:%d, fbrx_own_cnt:%d, nrOnStatus:%d, fbrxReqByNR:%d
PM_Module=>[SkipMeas] fbrxOwnerFlag:%d, prev_priority : %d, fbrx_priority:%d, fbrx_en:%d, fbrx_own_cnt:%d, nrOnStatus:%d, fbrxReqByNR:%d
[PM_DEBUG][FbrxShrCtrl][ED] tti_con:0x%x/0x%x, latest_meas_tx_path:%d, fbrx_priority:%d, fbrx_own_cnt:%d, nrOnStatus:%d
[FBRX_CPL] ul_cc_idx : %d, shm_ul_cc_idx : %d, word_num : %d, wordIdx : %d, mipiCh : [%d/%d], On : 0x%x, Off : 0x%x
[FBRX_CPL] mipiCh : %d, wordPerCh : %d, word : [0x%x][0x%x][0x%x]
[PM_DEBUG] FBRX coupler set Error. result : %d
PM_Module=> FBRX is not configured. pd_type : %d, ul_cc_idx : %d
PM_Module=> FBRX is configured. pd_type : %d, ul_cc_idx : %d
[PM_DEBUG] FBRX control [LTE DSP => RF Drv] ul_cc_idx : %d, shm_ul_cc_idx : %d
[PM_DEBUG] FBRX control [RF Drv => LTE DSP] ul_cc_idx : %d, shm_ul_cc_idx : %d
feedback_control[0x%x][0x%x], feedback_onoff_num[0x%x][0x%x], hispd_feedback_onoff_addr[0x%x][0x%x], feedback_onoff_data[0x%x][0x%x], fbrx_dcr_address[0x%x][0x%x]
