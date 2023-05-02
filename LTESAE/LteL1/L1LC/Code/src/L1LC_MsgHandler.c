HandoverStartSig Set: %d => %d
HandoverStartSig Get: %d
Stop Conn Conn RF timer for current stack
Stop Conn Conn RF timer for other stack
[Bandlist] RF_Set_CA_Release : release_rf_path(%d, %d, %d, %d, %d, %d) release_rf_num(%d)
scell_config_info.Num of Scell = [%d]
SADR Measure is ongoing using scell. So, UpdateRfBandList is pending
[Bandlist] L1LC_UpdateRfBandList:start::4ca
(%d)th Scell: This RF band(%d) is for DRDS.
Cell List(cc idx): idx(%d), freq(%d), band(%d), non-con band(%d)
Cell List(sorted): idx(%d), freq(%d), band(%d), bw(%d), num_cell(%d)
Non Contiguous SLOt(sorted): idx(%d %d), band(%d), is_slo_cc(%d %d)
[Bandlist] UpdateRfBandList: update_band_list(%d) num_band(%d)
[Bandlist] UpdateRfBandList: band_list(%d) num_band(%d)
[Bandlist] UpdateRfBandList: scg_band_list(%d) scg_num_band(%d)
[Bandlist] UpdateRfBandList: scg band not found on tail !!!!!!!
[Bandlist] UpdateRfBandList: scg_band_list(%d) scg_num_band(%d)
[Bandlist] UpdateRfBandList: Semi DRDS
[%d]Updated BandList (%d)
[%d]Updated SCG BandList (%d)
[Bandlist] L1LC_UpdateRfBandList:finish
Updated LteBandListForNr : band_num(%d), band_list(%d)
Do not start SetDlFreqReq (mode: %d) due to nearby e.p.t
Do not start SetDlFreqReq (mode: %d) due to nearby e.p.t
[LTE_L1LC] RFBand of SCG STACK should be removed
L1LC_DecodeRrmSetDlFreqReq(RRM_L1LC_DL_TUNE_BPLMN_INIT)(Save HALSC_SavedAfcValueBplmn(%d))
L1LC_DecodeRrmSetDlFreqReq(pMsg->SearchRepeatMode:%d, pMsg->dl_mode:%d)
L1LC_DecodeRrmSetDlFreqReq(FH Test)(pMsg->SearchRepeatMode:%d FHCnt:%d pMsg->dl_mode:%d)
L1LC_DecodeRrmSetUlFreqReq (mode:%d, cp type:%d, ul earfcn:%d, ul bw:%d)
UL CP type = %d
[DS_OPT] NR search is ongoing. Wait response
Do not start SearchReq (mode: %d) due to nearby e.p.t
[RRM => L1LC] Decode RRM_L1LC_MEASURE_REQ (mode:%d, IsBeforeResync: %d)
[DRX] Meas_Done state receive Meas_req again)
[NRDS] Reset IsLteSleepPended - NrdsSleepState(%d), set IsLteSleepPended(TRUE -> FALSE)
Restore DRX Config
Block SIB RNTI (%d, %d)
[LTE L1LC DSL1RC] SI Decoding completed!!!
UE is in sleep (%d) or Measurement (%d) or cell reselection (%d) or RACH (%d, %d) is on going, RETURN!!!
Do not consider Update Rf cause in SibCtrlNtf(Stop) as Pause Flag is set,PauseFlag(%d)
[RRM => L1LC] Decode RRM_L1LC_MEAS_CONFIG_NTF
DSP Status bitmap(Rach/ULG/SRI/CR(%x) RTT/RTX/IAT/ODT(%x) Paging/DediRach(%x))
Not found available CC for earfcn(%d)
[4G_DRDS] Serving cell is in weak signal area
Not found SCell index for earfcn(%d)
updateDsp(SCell rsrp(%d), NCell rsrp(%d)
Max cc num is %d (CC = %d)
SCell(%d): RSRP(PC) = %d, PathLoss = %d
updateDsp(PCell rsrp(%d), NCell rsrp(%d)
PCell: RSRP(PC) = %d, PathLoss = %d
[DRX, 4GDS] MeasStop case (reset IsDuringGsmMeas:%d)
[L1LC] L1LC_IratProcLteMeasStopReq : IratNrMeasState(%d)
DsdsDB.IsWaitResponse (%d)
[L1LC] Waiting for L2N suspend cnf from other stack.
[L1LC] Waiting for L2N suspend cnf. MeasureStopCnf will be sent when L2N suspend cnf was received. Current NR state(%d), MeasStopCnfPending(%d)
[LTE_L1LC] gL1LC_AllstopMsgProcByRrmEvent = [%d]
[LTE_DSDS] DRX spare timer expiry case. RRM saved message [%d] is freed!!(RF available[%d])
Ignore All stop if IRAT procedure is ongoing
[L1LC] L1LC_IratProcLteMeasStopReq : IratNrMeasState(%d)
signal mask is set, do not stop gL1LC_DsdsRetryTmr
All Stop case. RF response pending.Retry Timer stopped
No resource release during signaling (DsdsMask: 0x%x)
wakeup ongoing, not pause
All Stop case. RF response pending. Release RF to allow further RF request (Is_ResumeReq:%d)
Clear isNextPagingConflict
[RRM => L1LC] Decode RRM_L1LC_SET_TDP_STATE_NTF (mode:%d)
abnormal TDP state ntf mode
[RRM => L1LC] Decode RRM_L1LC_UE_STATE_NTF (%d -> %d)
L1LC_DecodeRrmUeStateNtf: (next state : CONN) -> Restart Thermal Restriction
Unknown NextUeState(%d)
[4GDS] Conn - Conn state is started!!
[LTE L1LC DSL1RC] Release RF by ST[%d] in case it has done pause done with release[NO] and both stack is in Conn-Conn state
[4GDS] Conn - Conn state is ended!!
Stop Conn Conn RF timer for other stack
Stop Conn Conn RF timer for current stack
RE-Invoke L1LC_ProcL1txTxReq For RAND_ACC and RESET gRand_Acc_Tx_Cnf_Nop to FALSE
[RRM => L1LC] Decode RRM_L1LC_CGI_START_NTF
[RRM => L1LC] Decode RRM_L1LC_AGAP_STOP_REQ
[RRM => L1LC] Decode RRM_L1LC_OTDOA_MEAS_REQ
[RRM => L1LC] Decode RRM_L1LC_OTDOA_ABORT
[RRM => L1LC] Decode RRM_L1LC_OTDOA_RESULT_REQ
[RRM => L1LC] Decode RRM_L1LC_INTER_FREQ_LIST : NumInterFreq[%d]
InterFreqList[%d] earfcn[%d] bw[%d]
[RRM => L1LC] Received RRM_L1LC_SCELL_PCH_INFO_NTF earfcn[%d]
[HAL-MBSFN] Invalid CC
[MBSFN] PCH status on CC[%d] command[%d] drx_T[%d] PF[%d] PO[%d]
[RRM => L1LC] Decode RRM_L1LC_NCELL_TIMING_INFO_REQ : ratType[%d]
Cannot Allocate Message buffer
Waiting LATCH_CNF
LATCH for L2U handover shall be pended(gL1LC_IratGsmMeasState:%d, gL1LC_IratGsmVerifyState:%d).
Waiting LATCH_CNF and send Latch request for HO after Latch Cnf
LATCH for L2U handover shall be pended(gL1LC_IratGsmMeasState:%d, gL1LC_IratGsmVerifyState:%d).
Do not stop IRAT Meas, gL1LC_IratUmtsMeasState(%d)
Waiting LATCH_CNF
LATCH for L2G handover shall be pended(gL1LC_IratUmtsMeasState:%d).
[L2N] Current gL1LC_IratNrMeasState(%d), isENDC(%d)
Not handled case for L2N ncell timing update, gL1LC_IratNrMeasState(%d)
NOT support RRM_L1LC_NCELL_TIMING_INFO_REQ(rat_type:%d)
[4G_DRDS] %s
SET gL1lc DsdsDB_[%d].IsSuspend
[LTE_L1LC] gL1LC_SuspendMsgProcByRrmEvent = [%d], SearchConfiguredflag(0x%x), MeasureConfiguredflag(0x%x)
[LTE_L1LC] RFBand of SCG STACK should be removed
[4G_DRDS] restore Dynamic QS (4G_DRDS deact)
[4G_DRDS] DEACTIVATED From DR_State(%d) / Suspend SCG ===
[4G_DRDS] RF_Update_DR_Band_info(clear)
LATCH is ongoing, RrmSuspendCnf message is pended.
[LTE_L1LC] Don't send SUSPEND_CNF until NR pause or release. Set SuspendHold(1). NrDsState(%d)
[LTE_L1LC] Clear L2N timing latch for Handover flag since LTE received resume. gL1LC_NrTimingLatchForHO(%d)
[4G_DRDS] Set gEarlyPauseFlag as FALSE
[LTE_L1LC] SUSPEND message saved in Other stack
[SADS] Current LTE suspended, recover other LTE's bandlist from 0xff.
[DRX] Stop gL1LC_CheckWakeupAvailableTmr for ST: %d
[DRX] current_sleep_cnt(%d) , gsleepTime_inSlowClk_[OtherStackID] (%d)
[DRX] Lwakeup_Status(%d) Start Default Wakeup Timer for ST%d DsdsWakeupIntrTmr : [500us]
[Resume]Start wakeup procedure for the current stack immediately
[DRX] SleepAbort is Failed (Minimun Sleep Abort Allowable Time[ST:%d, %d, %d])
[DRX] Start Default Wakeup Timer for ST%d DsdsWakeupIntrTmr : [500us]
[DRX] Sleep Start Time : (Previous ST%d %dus) vs (Current ST%d %dus)
[DRX] (100us)hal_sleepTime(%d)
[DRX] Stop Soc Warmup timer of other stack(%d)
[DRX] Soc Warmup timer is started(%d ms) for resume_req
[DRX] Set DsdsWakeupIntr timer for other STACK (%d ms)
[Debug] Is_Drx_check_ind = %d
[DRX] Wait for WakeupIntr!
[RRM => L1LC] Decode RRM_L1LC_IDLE_SLEEP_REQ
[DRX] Don't Sleep due to force wakeup case
[DRX] Don't Sleep due to measure ongoing
[4GDRDS] Ignore IDLE_SLEEP_REQ until PagingRcvIntrTmr expired.
[DRX] L1 can sleep because received sleep_req msg when Wakeup procedure is ongoing.
[DRX] Do not process IdleSleepReq as Slow Clock Estimation is running!
[RRM => L1LC] Decode RRM_L1LC_CONN_SLEEP_REQ
[DRX] Don't Sleep due to force wakeup case
[DRX] Don't Sleep due to measure ongoing
[DRX] L1 can sleep because received sleep_req msg when Wakeup procedure is ongoing.
Measure is running, Sleep pass.
(L1LC_DecodeRrmConnSleepReq) (R value no update for long time)
Measure is running, Sleep pass.
gL1LC_DrxControl->state = DRX_CLKEST, Sleep pass.
L1LC_DecodeRrmForceWakeupReq(%d) assert
1LC_DecodeRrmTxPowerDownNtf(skip), RF unavailable
[SADS] Not Release UL >> MTM Mode
[RRM => L1LC] Decode RRM_L1LC_POWER_RESET_REQ
[RRM => L1LC] Decode RRM_L1LC_BPLMN_CGI_START_NTF
[L2N_ANR] L2N ANR triggered in ENDC scenario
[L2N_ANR] L2N ANR triggered for AGAP
[RRM => L1LC] Decode RRM_L1LC_BPLMN_CGI_STOP_NTF
gL1LC_DrxState is NOT DRX_STATE_SUSPEND_MEAS
[RRM => L1LC] Decode RRM_L1LC_BPLMN_CGI_HOLD_NTF
gL1LC_DrxState is NOT DRX_STATE_SUSPEND_MEAS
utra_SI_AcquisitionForHO is postponed because UMTS modem is ongoing!
gL1LC_SupportBandList[%d]= %d
[RRM => L1LC] Decode RRM_L1LC_SET_SCELL_NTF(%d)
Not supported band for SCC(earfcn:%d)
Instant SCell configuration&activation for MBSFN (TTI:%d)
Not found available CC for earfcn(%d)
(CA activation) Skip checking TDD contiguous CA & setting SLO because this device can't support TDD SLO.
[4G_DRDS] Remove RFband of SCG from RFbandlist due to MIMO conflict
MBSFN Config present in Scell(%d) NumMbsfnConfig[%d]
Not found activated CC for earfcn(%d)
[RRM => L1LC] Decode RRM_L1LC_SCELL_CONFIG_NTF (numCC:%d)
Skip SCell Config - all inter-freq bands already added
[Bandlist] add scell : no need to remove DR band (band combination met)
[Bandlist] temporary remove DR band to add DR band tail
[Bandlist] ConnDR_State is reset!
[Bandlist] cannot add Interfreq due to DR band!
[Bandlist] add scell : no need to remove DR band (not actual scell added case)
earfcn(%d) is already configured as Scell(%d)
Add Scell(Scell): cid(%d), dl_earfcn(%d), band(%d), ul_earfcn(%d), dl_bw(%d), ul_bw(%d)
Num of Scell: total(%d) = prev(%d, %d) + curr(%d)
skip checking StackOrder because no Scell update and SCG only removed state: Scell update flag(%d), SCG removed(%d)
(Scell configuration) Skip checking TDD contiguous CA & setting SLO because this device can't support TDD SLO.
No available RF
[Refarming] SCELL_CONFIG_NTF : NrBand[CC:%d] : %d), remove Inter-Freq BAND(same refarming band)
earfcn(%d) is need to using GAP for measurement
Not supported band list for target inter_freq(%d). Clear inter_freq list: Num of Scell (%d) -> (%d)
Not supported band list for target inter_freq(%d). cannot add this object
earfcn(%d) is already configured as Scell
[Refarming] Same NrBand exist!!(CC%d:%d). Gap measure for this Band(%d), earfcn(%d)
earfcn(%d) is already configured, update infomation to scell info
earfcn(%d) is already configured
Replace Freq: dl_earfcn(%d), meas_bw(%d)
Add Scell(Inter-freq): dl_earfcn(%d), meas_bw(%d)
num_scell_freq(%d) + num_inter_freq(%d) >= MAX_CA_SUPPORT_NUM(%d)
Num of Scell: total(%d) = prev(%d, %d) + curr(%d)
[Bandlist] re-add DR band to add DR band tail
skip checking StackOrder because no Scell update and SCG only removed state: Scell update flag(%d), SCG removed(%d)
[Bandlist] DR band re-added (need check)
[4G_DRDS] Already ConnDR_state: DR_ADDED
[Bandlist] update_flag(%d), ConnDR_state_changed(%d)
[FEDV] Make eDV_Available as FALSE
[RRM => L1LC] Decode RRM_L1LC_DCXO_SIB1_NTF
[RRM => L1LC] Abnormal msg Decode RRM_L1LC_DCXO_SIB1_NTF
[RRM => L1LC] Decode RRM_L1LC_SCELL_UPDATE_TIMEOFFSET_NTF
Ignore SCell TimeOffset !!!
[RRM => L1LC] Decode RRM_L1LC_RELEASE_SCELL_NTF (numCC:%d)
[Bandlist] temporary remove DR band for release scell
[Bandlist] even if DR_NONE state, scg_cc is exist
[Bandlist] num_scell_freq(%d) + num_inter_freq(%d) = total num_of_scell(%d)
Remove Scell: cid(%d), dl_earfcn(%d)
[Bandlist](Scell) wrong RF path
Num of Scell: total(%d) = prev(%d, %d) - curr(%d)
[Bandlist] RF_Set_CA_Release : release_rf_path(%d, %d, %d, %d, %d, %d) release_rf_num(%d)
[Bandlist] re-add DR band after release scell
[4G_DRDS] Already ConnDR_state: DR_ADDED
[FEDV] Make eDV_Available as FALSE
[RRM => L1LC] Decode RRM_L1LC_EICIC_IC_NTF
[RRM => L1LC] Decode RRM_L1LC_FEICIC_NTF
[L1LC => RRM] Send L1LC_RRM_SCELL_DEACT_TIMER_EXPIRY_IND
Cannot Allocate Message buffer
[L1LC => RRM] Send L1LC_RRM_SCELL_RTG_UPDATE_NTF
Cannot Allocate Message buffer
L1LC_DecodeRrmEventA3Ntf(%d)
[RRM => L1LC] Decode RRM_L1LC_GPS_TIME_INFO_NTF
GSP info is absent
[MMC => L1LC] Decode MMC_LTEL1_WIFI_COEXIST_INFO_NTF (wifi_coexist_info: %d)
[MMC => L1LC] Decode MMC_LTEL1_FREQ_AID_REQ
[RRM => L1LC] Decode RRM_L1LC_VOLTE_STATUS_NTF (%d)
[RRM => L1LC] Decode RRM_L1LC_SET_SFNINFO_NTF
[RRM => L1LC] Decode RRM_L1LC_NR_PBCH_DECODE_REQ
NR PBCH decoding information : band(%d), ssbFrequency(%d), subcarrierSpacing(%d), periodicity(%d), cellId(%d), beamIndex(%d), beamTimingOffset(%d)
NR PBCH decoding information : RxBeamIdx(%d), agcGain(%d, %d)
[L1LC => RRM] Send L1LC_RRM_NR_PBCH_DECODE_CNF
Cannot Allocate Message buffer
[RRM => L1LC] Decode RRM_L1LC_NR_MEAS_RELEASE_NTF
[RRM => L1LC] Decode RRM_L1LC_ENDC_STATUS_IND(%d)
[CL-AIT] Disable CL-AIT due to RRM_L1LC_ENDC_STATUS_IND(%d)
[L1LC => RRM] Send L1LC_RRM_SET_DL_FREQ_CNF
Cannot Allocate Message buffer
[L1LC => RRM] Send L1LC_RRM_FREQ_SCAN_CNF
Cannot Allocate Message buffer
[L1LC => RRM] Send L1LC_RRM_SEARCH_CNF
Cannot Allocate Message buffer
[L1LC => RRM] Send L1LC_RRM_MEASURE_CNF(isLastMeas:%d)
Cannot Allocate Message buffer
gL1LC_DsdsCheckReleaseFeasibilityTmr started for 200ms
[L1LC => RRM] Send L1LC_RRM_PBCH_DECODE_CNF
Cannot Allocate Message buffer
[L1LC => RRM] Send L1LC_RRM_MEASURE_STOP_CNF
Cannot Allocate Message buffer
[L1LC => RRM] Send L1LC_RRM_ALL_STOP_CNF
Cannot Allocate Message buffer
Cannot Allocate Message buffer
[L1LC => RRM] Send L1LC_RRM_MEAS_SCHEDULE_IND(%d)
[L1LC => RRM] Send L1LC_RRM_CELL_CHANGE_CNF
Cannot Allocate Message buffer
[L1LC => RRM] Send L1LC_RRM_OUT_OF_SYNC_IND
Cannot Allocate Message buffer
pSendMsg->req.OutOfSyncInd.oosCause:%d
[L1LC => RRM] Send L1LC_RRM_IRAT_CDMA_INFO_IND
Cannot Allocate Message buffer
[L1LC => RRM] Send L1LC_RRM_IRAT_CDMA_CS_STATE_IND
Cannot Allocate Message buffer
[L1LC => RRM] Send L1LC_RRM_IN_SYNC_IND
Cannot Allocate Message buffer
[L1LC => RRM] Send L1LC_RRM_NCELL_TIMING_INFO_CNF
Cannot Allocate Message buffer
[L1LC => RRM] Send L1LC_RRM_SUSPEND_CNF
Cannot Allocate Message buffer
[L1LC => RRM] Send L1LC_RRM_OTDOA_MEASURE_RSP
[ERROR] L1LC_SendRrmOtdoaMeasureRsp :: Incoming OTDOA Response is NULL!!!
[ERROR] L1LC_SendRrmOtdoaMeasureRsp :: Cannot Allocate Message Buffer!!!
[L1LC => RRM] Send L1LC_RRM_RSTD_INTER_FREQ_MEAS_IND
[ERROR] L1LC_SendRrmRstdInterFreqMeasInd :: Cannot Allocate Message Buffer!!!
[L1LC => RRM] Send L1LC_RRM_RESUME_CNF
Cannot Allocate Message buffer
[L1LC => RRM] Send L1LC_RRM_SHADE_CNF
Cannot Allocate Message buffer
[L1LC => RRM] Send L1LC_RRM_FORCE_WAKEUP_CNF
Cannot Allocate Message buffer
[L1LC => RRM] Send L1LC_RRM_SHADE_WAKEUP_IND
Cannot Allocate Message buffer
[L1LC => RRM] Send L1LC_RRM_WAKEUP_IND
Cannot Allocate Message buffer
[L1LC => RRM] Send L1LC_RRM_BPLMN_CGI_START_IND
Cannot Allocate Message buffer
[L1LC => RRM] Send L1LC_RRM_PAGING_DONE_IND
Cannot Allocate Message buffer
[L1LC => RRM] Send L1LC_RRM_REINIT_DRX_IND
Cannot Allocate Message buffer
[L1LC_DisableDsdsMask] -> 0x00
[L1LC => RRM] Send L1LC_RRM_MEAS_CONFIG_IND
Cannot Allocate Message buffer
[L1LC => RRM] Send L1LC_RRM_MEASURE_SUSPEND_FOR_TX_REQ
Cannot Allocate Message buffer
[L1LC => RRM] Send L1LC_RRM_MEASURE_RESUME_FOR_TX_IND
Cannot Allocate Message buffer
[L1LC => RRM] Send L1LC_RRM_SET_SIUPDATE_TMR_IND
Cannot Allocate Message buffer
[L1LC => RRM] Send L1LC_RRM_BARRED_LIST_REQ
Cannot Allocate Message buffer
[L1LC => RRM] Send L1LC_RRM_CLK_EST_DONE_IND
Cannot Allocate Message buffer
[L1LC => RRM] Send L1LC_RRM_SEARCH_REQUEST_IND
Cannot Allocate Message buffer
[L1LC => RRM] Send L1LC_RRM_BACKGROUND_START_LTE_ACTIVE_IND, cause[%d]
Cannot Allocate Message buffer
[L1LC => RRM] Send L1LC_RRM_BACKGROUND_STOP_LTE_ACTIVE_IND
Cannot Allocate Message buffer
[L1LC => RRM] Send L1LC_RRM_BACKGROUND_START_IND
Cannot Allocate Message buffer
[L1LC => RRM] Send L1LC_RRM_CGI_STOP_RSP
Cannot Allocate Message buffer
[L1LC => RRM] Send L1LC_RRM_UMTS_SFN_MIB_ACQUISITION_IND
Cannot Allocate Message buffer
Measure had been stopped. Ignore MMC_LTEL1_GSM_TIMING_LATCH_CNF.
[MMC => L1LC] Decode MMC_LTEL1_GSM_TIMING_LATCH_CNF
Measure had been stopped. Ignore MMC_LTEL1_GSM_RSSI_MEASURE_CNF.
[MMC => L1LC] Decode MMC_LTEL1_GSM_RSSI_MEASURE_CNF
Measure had been stopped. Ignore MMC_LTEL1_GSM_FCH_ACQ_CNF.
[MMC => L1LC] Decode MMC_LTEL1_GSM_FCH_ACQ_CNF
Measure had been stopped. Ignore MMC_LTEL1_GSM_SCH_ACQ_CNF.
[MMC => L1LC] Decode MMC_LTEL1_GSM_SCH_ACQ_CNF
Measure had been stopped. Ignore MMC_LTEL1_UMTS_TIMING_LATCH_CNF.
[MMC => L1LC] Decode MMC_LTEL1_UMTS_TIMING_LATCH_CNF
Measure had been stopped. Ignore MMC_LTEL1_UMTS_CELL_SEARCH_CNF.
[MMC => L1LC] Decode MMC_LTEL1_UMTS_CELL_SEARCH_CNF
[MMC => L1LC] Ignore Further proceesing as IRAT HO is in progress
Measure had been stopped. Ignore MMC_LTEL1_UMTS_PARTIAL_SEARCH_CNF.
[MMC => L1LC] Decode MMC_LTEL1_UMTS_PARTIAL_SEARCH_CNF
[MMC => L1LC] Ignore Further proceesing as IRAT HO is in progress
Measure had been stopped. Ignore MMC_LTEL1_UMTS_TDD_PARTIAL_SEARCH_CNF.
[MMC => L1LC] Decode MMC_LTEL1_UMTS_TDD_PARTIAL_SEARCH_CNF
Measure had been stopped. Ignore MMC_LTEL1_UMTS_INIT_MEASURE_CNF.
[MMC => L1LC] Decode MMC_LTEL1_UMTS_INIT_MEASURE_CNF
[MMC => L1LC] Ignore Further proceesing as IRAT HO is in progress
Measure had been stopped. Ignore MMC_LTEL1_UMTS_MEASURE_CNF.
[MMC => L1LC] Decode MMC_LTEL1_UMTS_MEASURE_CNF
[MMC => L1LC] Ignore Further proceesing as IRAT HO is in progress
[MMC => L1LC] Decode MMC_LTEL1_UMTS_CGI_ACQUISITION_CNF
[MMC => L1LC] Decode MMC_LTEL1_LEGACY_MEASURE_CNF
[MMC => L1LC] Decode MMC_LTEL1_CDMA_TIMING_LATCH_CNF(rat_mode:%d)
[MMC => L1LC] Decode MMC_LTEL1_CDMA_MEAS_RESULT_IND(freq num : %d)
[MMC => L1LC] Decode MMC_LTEL1_LTE_TIMING_LATCH_REQ(%d), DRX STATE(%d)
gL1LC_DrxState(%d), prev_source_rat(%d), cur_source_rat(%d)
MMC MSG(L1LC_DecodeMmcLteAgcInitReq) from DRX_STATE_SUSPEND
[MMC => L1LC] Decode MMC_LTEL1_LTE_AGC_INIT_REQ
[MMC => L1LC] Decode MMC_LTEL1_LTE_CELL_SEARCH_REQ >> Discard Search for N2L HO
[SADS] N2L measure during SADR >> send CELL_SEARCH_CNF
MMC MSG(L1LC_DecodeMmcLteCellSearchReq) from DRX_STATE_SUSPEND
[MMC => L1LC] Decode MMC_LTEL1_LTE_CELL_SEARCH_REQ
[MMC => L1LC] Decode MMC_LTEL1_LTE_MEASURE_REQ >> Discard Measure for N2L HO
[SADS] N2L measure during SADR >> send MEASURE_CNF
MMC MSG(L1LC_DecodeMmcLteMeasureReq) from DRX_STATE_SUSPEND
[MMC => L1LC] Decode MMC_LTEL1_LTE_MEASURE_REQ
MMC MSG(L1LC_DecodeMmcLteSearchMeasureReq) from DRX_STATE_SUSPEND
[MMC => L1LC] Decode MMC_LTEL1_LTE_SEARCH_MEASURE_REQ
MMC MSG(L1LC_DecodeMmcLteMeasReselReq) from DRX_STATE_SUSPEND
[MMC => L1LC] Decode MMC_LTEL1_LTE_MEAS_RESEL_REQ
[L1LC => %s] Send LTEL1_MMC_LTE_MEAS_STOP_CNF
Cannot Allocate Message buffer
MMC MSG(L1LC_DecodeMmcLteMeasStopReq) from DRX_STATE_SUSPEND
[MMC => L1LC] Decode MMC_LTEL1_LTE_MEAS_STOP_REQ
[MMC => L1LC] Decode MMC_LTEL1_HEDGEMODE_IND
[MMC => L1LC] Decode MMC_LTEL1_CDMACS_STATUS_IND
[MMC => L1LC] Decode MMC_LTEL1_START_DRX_INFOSHARE_IND
gL1LC_DrxState(%d) BplmnListCause (%d), Therefore L1LC send LTEL1_MMC_BACK_GND_PLMN_LIST_FAIL_IND to MMC
[MMC => L1LC] Decode MMC_LTEL1_BPLMN_SRCH_STOP_IND
[MMC => L1LC] Decode MMC_HEDGE_LTEL1_BPLMN_SRCH_START_IND gL1LC_DrxState[%d] avail_time[%d] start_time[%d]
DRX spare timer has already elapsed. elapsedTime=%d avail_time=%d
[DRX] Stop gL1LC_CheckWakeupAvailableTmr for ST: %d
[DRX] current_sleep_cnt(%d), gsleepTime_inSlowClk_[OtherStackID] (%d)
[DRX] Lwakeup_Status(%d) Start Default Wakeup Timer for ST%d DsdsWakeupIntrTmr : [500us]
[DRX] [BPLMN]Start wakeup procedure for the current stack immediately
[DRX] SleepAbort is Failed (Minimun Sleep Abort Allowable Time[ST:%d, %d, %d])
[DRX] Start Default Wakeup Timer for ST%d DsdsWakeupIntrTmr : [1000us]
[DRX] Sleep Start Time : (Previous ST%d %dus) vs (Current ST%d %dus)
[DRX] hal_sleepTime(%d (100us))
[DRX] Stop Soc Warmup timer of other stack(%d)
[DRX] Soc Warmup timer is started(%d ms) for Hedge BPLMN start Ind
[DRX] Set DsdsWakeupIntr timer for other STACK (%d ms)
[DRX] Avail_Time(%d (ms) is shorter than IDLE_BPLMN_MIN_TIME + gDrx_SysStableTime/10 - DRX_INFO_WARMUP_PERIOD)
[DRX] Don't need to turn on the modem!
[DRX] HW is not off actually
[DRX] pHALDRX_Db->gDrx_PowerOn_TimingLatch, Skip Modem/Dsp power on
[DRX] gDrx_PowerOn_TimingLatch (Other ST: %d), Skip Modem/Dsp power on
[DRX] Diff cellboundary is zero!
G2L search/measure is running, Pending BPLMN start avail_time(%d)
Current state is not suspend(%d)
[LTE_DSDS] RRM request [%d] is freed!!
[MMC => L1LC] Decode MMC_HEDGE_LTEL1_BPLMN_SRCH_HOLD_IND
[MMC => L1LC] Decode MMC_LTEL1_BPLMN_ABORT_DONE_IND
sleep abort at L1LC_DecodeMmcLteL1BplmnAbortDoneInd
[MMC => L1LC] Process MMC_LTEL1_GRIP_SENSOR_STATE_REQ (Feature: %d, Sensor status: 0x%X)
[AS] Proximity Backoff:OFF, Proximity Sensor status:%d
[AS] Force switch to down antenna
[MMC => L1LC] Decode MMC_LTEL1_AS_SWITCH_CONTROL_REQ (UseCase_Id: %d )
[ERROR] [AS] Wrong UseCase_Id: %d
[MMC => L1LC] Process MMC_LTEL1_ANT_SWITCH_INFO_REQ (AS INFO: 0x%X)
[MMC => L1LC] Process MMC_LTEL1_RX_MODE_SET_REQ (CC: %d, Ant Mode: 0x%X)
[MMC => L1LC] Process MMC_LTEL1_AIT_TESTMODE_REQ (CP EVENT INFO: 0x%X)
[MMC => L1LC] Decode MMC_LTEL1_SENSOR_STATE_REQ (Feature: 0x%x, Sensor status: 0x%x)
[MMC => L1LC] Decode MMC_LTEL1_CONN_PAGING_MONITORING_IND (status: %d)
[MMC => L1LC] Decode MMC_LTEL1_RESTRICTION_CTRL_REQ (Level: 0x%x, OneByOne: 0x%x, Restriction(%d))
[MMC => L1LC] Decode MMC_LTEL1_RESTRICTION_REL_REQ (Level: 0x%x, Restriction(%d))
[L1LC => %s] Send LTEL1_MMC_FREQUENCY_AIDING_RSP
Cannot Allocate Message buffer
Send LTEL1_MMC_FREQUENCY_AIDING_RSP(status:%d, rat:%d, tcxo_type:%d, tcxo_drift:%d)
[MMC => L1LC] Decode MMC_LTEL1_FREQ_AID_REQ (start:%d rat:%d tcxo_type:%d)
[L1LC => %s] Send LTEL1_MMC_GSM_TIMING_LATCH_REQ
Simulate sending LTEL1_MMC_GSM_TIMING_LATCH_REQ to MMC
Cannot Allocate Message buffer
[L1LC => %s] Send LTEL1_MMC_GSM_RSSI_MEASURE_REQ
Simulate sending LTEL1_MMC_GSM_RSSI_MEASURE_REQ to MMC
Cannot Allocate Message buffer
[L1LC => %s] Send LTEL1_MMC_GSM_FCH_ACQ_REQ
[L1LC => %s] Send LTEL1_MMC_GSM_POWER_DOWN_REQ
Simulate sending L1LC_SendMmcGsmFchAcqReq to MMC
Cannot Allocate Message buffer
[L1LC => %s] Send LTEL1_MMC_GSM_SCH_ACQ_REQ
Simulate sending LTEL1_MMC_GSM_SCH_ACQ_REQ to MMC
Cannot Allocate Message buffer
[L1LC => %s] Send LTEL1_MMC_UMTS_TIMING_LATCH_REQ
Simulate sending LTEL1_MMC_UMTS_TIMING_LATCH_REQ to MMC
Cannot Allocate Message buffer
[L1LC => %s] Send LTEL1_MMC_UMTS_CELL_SEARCH_REQ
Simulate sending LTEL1_MMC_UMTS_CELL_SEARCH_REQ to MMC
Cannot Allocate Message buffer
[L1LC => %s] Send LTEL1_MMC_UMTS_PARTIAL_SEARCH_REQ
Simulate sending LTEL1_MMC_UMTS_PARTIAL_SEARCH_REQ to MMC
Cannot Allocate Message buffer
[L1LC => %s] Send LTEL1_MMC_UMTS_TDD_PARTIAL_SEARCH_REQ
Simulate sending LTEL1_MMC_UMTS_TDD_PARTIAL_SEARCH_REQ to MMC
Cannot Allocate Message buffer
[L1LC => %s] Send LTEL1_MMC_UMTS_INIT_MEASURE_REQ
Simulate sending LTEL1_MMC_UMTS_INIT_MEASURE_REQ to MMC
Cannot Allocate Message buffer
[L1LC => %s] Send LTEL1_MMC_UMTS_MEASURE_REQ
Simulate sending LTEL1_MMC_UMTS_MEASURE_REQ to MMC
Cannot Allocate Message buffer
[L1LC => %s] Send LTEL1_MMC_UMTS_CGI_ACQUISITION_REQ
Simulate sending LTEL1_MMC_UMTS_CGI_ACQUISITION_REQ to MMC
Cannot Allocate Message buffer
[L1LC => %s] Send LTEL1_MMC_LEGACY_MEASURE_REQ
Simulate sending LTEL1_MMC_LEGACY_MEASURE_REQ to MMC
Cannot Allocate Message buffer
[L1LC => %s] Send LTEL1_MMC_LEGACY_MEAS_STOP_REQ
Simulate sending LTEL1_MMC_LEGACY_MEAS_STOP_REQ to MMC
Cannot Allocate Message buffer
[L1LC => %s] Send LTEL1_MMC_CDMA_TIMING_LATCH_REQ
Cannot Allocate Message buffer
[L1LC => MMC] Send LTEL1_MMC_CDMA_MEAS_REQ
Simulate sending LTEL1_MMC_CDMA_MEAS_REQ to MMC
Cannot Allocate Message buffer
[L1LC => %s] Send LTEL1_MMC_LTE_TIMING_LATCH_CNF
Simulate sending LTEL1_MMC_LTE_TIMING_LATCH_CNF to MMC
Cannot Allocate Message buffer
EmodemStatus %d
[L1LC => %s] Send LTEL1_MMC_LTE_AGC_INIT_CNF
Simulate sending LTEL1_MMC_LTE_AGC_INIT_CNF to MMC
Cannot Allocate Message buffer
[L1LC => %s] Send LTEL1_MMC_LTE_CELL_SEARCH_CNF
Simulate sending LTEL1_MMC_LTE_CELL_SEARCH_CNF to MMC
Simulate sending LTEL1_MMC_LTE_CELL_SEARCH_CNF to MMC => Check LteCellSearchCnf_msg earfcn:%d, AGC1:%d, AGC2:%d, AFC:%d, numOfcells:%d
CELL[%d] - cell_id(%d), cp_type:%d, FramePosition:%d
Cannot Allocate Message buffer
[L1LC => %s] Send LTEL1_MMC_LTE_MEASURE_CNF
Simulate sending LTEL1_MMC_LTE_MEASURE_CNF to MMC
Cannot Allocate Message buffer
[L1LC => %s] Send LTEL1_MMC_LTE_MEASURE_STOP_CNF
Simulate sending LTEL1_MMC_LTE_MEASURE_STOP_CNF to MMC
Cannot Allocate Message buffer
[L1LC => %s] Send LTEL1_MMC_LTE_SEARCH_MEASURE_CNF
Simulate sending LTEL1_MMC_LTE_SEARCH_MEASURE_CNF to MMC
Cannot Allocate Message buffer
[L1LC => %s] Send LTEL1_MMC_LTE_MEAS_RESEL_CNF
Simulate sending LTEL1_MMC_LTE_MEAS_RESEL_CNF to MMC(cell num:%d)
Cannot Allocate Message buffer
[L1LC => %s] Send LTEL1_TO_2G3G_MMC_BPLMN_SRCH_START_IND (spare=%d)
Cannot Allocate Message buffer
[L1LC => %s] SKIP SENDING LTEL1_TO_2G3G_MMC_BPLMN_SRCH_HOLD_IND
[L1LC => %s] Send LTEL1_TO_2G3G_MMC_BPLMN_SRCH_HOLD_IND
Cannot Allocate Message buffer
[L1LC => %s] SKIP SENDING LTEL1_TO_NR_MMC_CGI_SRCH_HOLD_IND
[L1LC => %s] Send LTEL1_TO_NR_MMC_CGI_SRCH_HOLD_IND
Cannot Allocate Message buffer
[L1LC => MMC] Send LTEL1_MMC_BACK_GND_PLMN_LIST_FAIL_IND
Cannot Allocate Message buffer
[L1LC => MMC] Send LTEL1_MMC_TIMING_AIDING_RSP
Cannot Allocate Message buffer
L1LC_DecodeL1lcTurnOnRxPathTimerExpired
[L1LC => L1LC] Send L1LC_INT_SYNC_TIMER_EXPIRED
Cannot Allocate Message buffer
[L1LC => L1LC] Send L1LC_INT_TURN_ON_RX_PATH_TIMER_EXPIRED
Cannot Allocate Message buffer
[L1LC => L1LC] Send L1LC_INT_SLEEP_RETRY_TIMER_EXPIRED
Cannot Allocate Message buffer
[L1LC=> L1LC] Send L1LC_INT_MEAS_TIMER_EXPIRED
Cannot Allocate Message buffer
[L1LC=> L1LC] Send L1LC_INT_IRAT_MEAS_TIMER_EXPIRED
Cannot Allocate Message buffer
[L1LC => L1LC] Send L1LC_INT_MBSFN_DRX_TIMER_EXPIRED
Cannot Allocate Message buffer
[L1LC => L1LC] [4G_DRDS] Send L1LC_INT_EDV_NTF
Cannot Allocate Message buffer
[L1LC => L1LC] [SADS] Send L1LC_INT_DRIMPOSSIBLE(%d)
Cannot Allocate Message buffer
[SADS] Tx Direct Call >> TxGrant
[SADS] [SADS] Tx Direct Call >> Wait
[SADS] Tx Rsp Waiting >> Skip Tx Req to SRIF
Cannot Allocate Message buffer
Cannot Allocate Message buffer
Cannot Allocate Message buffer
[L1TUNNEL => L1LC]: Decode L1LC_L1TUNNEL_LTE_TX_GRANT_CNF [SADS] Tx >> txRequestResponse(%d), retry_time(%d)
[SR-IF => L1LC]: Modem power down(%d) or TX unavailable(%d) or RF unavailebale(%d)
[SADS] Tx Rsp from SRIF is REJECT(RETRY)(%d)
[L1TUNNEL => L1LC]: Decode L1LC_L1TUNNEL_LTE_TX_CHANGE_IND
[SR-IF => L1LC]: Decode MMCIF_L1LC_DSL1C_IS_CONCON_IND(%d)
[L1LC => L1LC] [4G_DRDS] Decode L1LC_INT_EDV_NTF
[4G_DRDS] SCG got suspened, do not activate eDV. Reset will be done as part of Suspend procedure
[4G_DRDS] Start pended UpdateRfBandList.
[L1LC => L1LC] [4G_DRDS] Reset EDV variable and trigger recovery procedure
[Debug] Is_Drx_check_ind = %d
[L1LC => L1LC] [4G_DRDS] Decode HAL_L1LC_EDV_SCG_IPC_IND
[4G_DRDS] Start pended UpdateRfBandList.
[Debug] Is_Drx_check_ind = %d
[L1LC => L1LC] [4G_DRDS] Decode HAL_L1LC_UPDATE_RFBAND_LIST_IND
[4G_DRDS] Do not update Rf bandlist in RF unavailable state
[4G_DRDS] Already updated Band List.
[L1LC => L1LC] [4G_DRDS] Decode HAL_L1LC_RESET_SEMIDR_IND
[4G_DRDS] Do not reset semiDR in RF unavailable state
[4G_DRDS] Pending ResetSemiDr case.
[HAL => L1LC] Decode HAL_L1LC_MEAS_DURATION_IND
[4GDS] There is no RF resource
[HAL => L1LC] Decode HAL_L1LC_MEAS_DURATION_IND (LTERRM_L1LC_CMEAS_GAP)
DecodeHalMeasDurationInd - DmtcEnable(%d)
[HAL => L1LC] Decode HAL_L1LC_GAP_SCHEDULE_IND
[4GDS] There is no RF resource(%d) or GAP disabled(%d) or during HO(%d)
[RSTD] Skip GAP_SCHEDULE_IND (curMode:%d, curIratMode:%d)
GAP_SCHEDULE_IND Measure(curMode:%d, curIratMode:%d)
GAP_SCHEDULE_IND Measure(curMode:%d, curIratMode:%d)
L1LC_DecodeHalGapEndInd: [RSTD] Ignore the Dummy Sync Results
GapEnd_Intra_L1LC_StartMeas
GapEnd_IRAT_L1LC_StartMeas
[HAL => L1LC] Decode HAL_L1LC_WAKEUP_IND
[DRX OPT] No measurement element -> Meas done & DRX ready
[DRX OPT] onDuration[%d] gDrxWakeTTI[%d]
[DRX-MBSFN] Sleep not triggered for MBSFN
[DRX-MBSFN] [Conn State] Wrap around Condition Current SFN[%d] Mbsfn_Start_info SFN[%d]
[DRX-MBSFN] Current Time SFN[%d] TTI[%d] offset[%d]
[DRX-MBSFN] Timer-2 Created = %d
[HAL ==> L1LC] Decode HAL_L1LC_MEAS_TIMING_IND
Do not start measurement during reinit drx period
[HAL ==> L1LC] Decode HAL_L1LC_PREPARE_WAKEUP_IND
[DRX] PagingRcvIntr timer is running, ignore PAGING_DONE_IND
[DRX] Preponed PagingRcvIntr timer expiry yet to process, ignore PAGING_DONE_IND
[DRX-MBSFN] Sleep not triggered for MBSFN
[DRX-MBSFN] Paging Rcv Intr set at paging_frame(%d), paging_offset(%d), curTimeSFN(%d, %d)
[DRX-MBSFN] [Idle State] Wrap around Condition Current SFN[%d] Mbsfn_Start_info SFN[%d]
[DRX-MBSFN] Timer value is not sufficient, Default timer created[%d]
[DRX-MBSFN] Mbsfn_End_info.sfn[%d] Mbsfn_End_info.sfn[%d] time[%d]
[DRX-MBSFN] Current Time SFN[%d] TTI[%d] offset[%d]
[DRX-MBSFN] Timer-2 Created = %d
[4G_DRDS] Reset HoldRrmMsgFlag, so as to request RF again
[4G_DRDS] Processing the Saved RRM message after PAGING_DONE, reset eDV_State(%d)
[4G_DRDS] Start the Pending MeasureReq[%d] in SCG stack
[4G_DRDS] Update RF cause as MeasureReq[%d] is pending in SCG stack!
[4G_DRDS] Update RF cause Result : %d !!!
[4G_DRDS] Deactivate 4G_DRDS as PauseInd is TRUE in SCG stack !
Stop DrdsAbnormalCheckTmr
Do not start measurement during reinit drx period(%d) or Reselection(%d)
[4G_DRDS] eDV is ongoing. So, Ignore MCG sleep_start_ind
Measure is running, Sleep pass.
Abnormal behavior, CurrMeasFlag(%d), ue_state(%d)
Skip TX path recovery at this time(due to GAP)(gHALSC_IdleGapOnGoing(%d) gHALSC_PrepareGapMeas(%d))
[L1LC => RRM] Send L1LC_RRM_MCCH_CHANGE_IND
Cannot Allocate Message buffer
[L1LC => RRM] Send L1LC_RRM_MBSFN_SIG_STRENGTH_RSP
[L1LC] [%d]snr[%d] area_id[%d] eSnr[%d]
Cannot Allocate Message buffer
[HAL => L1LC] Decode HAL_L1LC_RRC_IDLE_IND
Don't start sleep proedure for MCG stack due to DRDS is active
Modem is off. Don't decode HAL_L1LC_RRC_IDLE_IND
RF is not available. Don't decode HAL_L1LC_RRC_IDLE_IND
gL1LC_DsdsPagingRcvIntrTmr is not running. Don't decode HAL_L1LC_RRC_IDLE_IND
Rrc_Flag is FALSE. Don't decode HAL_L1LC_RRC_IDLE_IND
Rach is ongoing. Don't decode HAL_L1LC_RRC_IDLE_IND
IsCellResel is TRUE. Don't decode HAL_L1LC_RRC_IDLE_IND
RF is not available. Don't decode HAL_L1LC_RRC_IDLE_IND
Wakeup is ongoing. Don't decode HAL_L1LC_RRC_IDLE_IND
Don't decode HAL_L1LC_RRC_IDLE_IND as sleep state is [%d]
[DRX] Do not process IdleSleepReq as Slow Clock Estimation is running!
HAL_L1LC_RRC_IDLE_IND send Sleep_Req, gHalDrx_SleepState[%d]
Measure or paging ongoing, do not send Sleep_Req, gHalDrx_SleepState[%d]
[HAL => L1LC] Decode HAL_L1LC_RSTD_MEASURE_DONE_IND
[HAL => L1LC] Decode HAL_L1LC_RSTD_SCHEDULE_IND
[HAL => L1LC] Decode HAL_L1LC_AGAP_STOP_IND
L1LC_DecodeHalSCellDeactCnfInd : (CC:%d, msg_type:%d, SCG_CC:%d, RF_Available:%d, Pscellcnf : %d)
L1LC_DecodeHalSCellDeactCnfInd: do not update4RxMode when waiting CA deact modem
[4G_DRDS] restore Dynamic QS (4G_DRDS deact)
[4G_DSDS] DRDS already deact
[4G_DSDS] RF unavailable! Skip DEACT in L1LC_DecodeHalSCellDeactCnfInd
DecodeHalSCellDeactCnfInd(%d) during no RF resource
DecodeHalSCellDeactCnfInd: Invalid CNF message type(%d)
L1LC_DecodeHalRxModeReqInd: Skip as UE state(%d)
[HAL => L1LC] Decode HAL_L1LC_RXMODE_REQ_IND : cc(%d), rx_mode(%d), gDrxL1_Flag(%d), offset(%d)
Ignore L1LC_DecodeHalRxModeReqInd due to DSDS_RF_UNAVAILABLE
L1LC_DecodeHalRxModeReqInd: Skip due to GAP scheduled in %dms
L1LC_DecodeHalRxModeReqInd: Skip due to intra_meas or scell sync&meas on-going
[L1LC => L1TX] Send L1LC_L1TX_TX_CNF:TxType(%d)
Simulate sending L1LC_L1TX_TX_CNF to L1TX
Cannot Allocate Message buffer
[L1RX => L1LC][PWR_OPT] Decode L2LRX_L1LC_IDLE_PAGING_DONE_IND
Ignore L2LRX_L1LC_IDLE_PAGING_DONE_IND during BPLMN search
Ignore L2LRX_L1LC_IDLE_PAGING_DONE_IND during 4GDRDS
Ignore L2LRX_L1LC_IDLE_PAGING_DONE_IND due not to HALSC_UE_STATE_IDLE (ue_state:%d)
Abnormal case!! Modem Power [%d], RF Available[%d]
[DRX][PWR_OPT] Last paging is not invoked yet!!!
[DRX] Saved AGC Index(%d, %d)
[DRX] ProcDrxPagingRcvHisr: gHalDrx_SleepState(%d), gHalDrx_NonPaging(%d)
[L1LC => L2TX] Send L1LC_L2HTX_TX_CNF
Simulate sending L1LC_L2HTX_TX_CNF to L2TX
Cannot Allocate Message buffer
[L1LC => L2RX] Send L1LC_L2RX_RX_CNF
Simulate sending L1LC_L2RX_RX_CNF to L2RX
Cannot Allocate Message buffer
[LTE DSDS] assert condition : Message is NULL
[LTE DSDS] assert condition : Message Sending failed
[LTE DSDS] assert condition : Message is NULL
[LTE DSDS] assert condition : Message Sending failed
Unable to set event to L1 event grou
[L1LC => L1TX] Send L1LC_L1TX_TX_RF_STATUS_IND
Cannot Allocate Message buffer
[L1LC => L1TX] Send L1LC_L1TX_TX_RF_RELEASE_IND
Cannot Allocate Message buffer
[L1TUNNEL => L1LC] Decode L1LC_L1TUNNEL_LTE_RF_GRANT_CNF [%s][%d],EarlyPauseDuration[%u],Early_time[%u], retry_time[%u]
[LTE L1LC DSL1RC] Ignore response due to wrong message number (Msg: %d, LTE L1: %d) !!!
[LTE L1LC DSL1RC] Ignore response because didn't request RF GRANT !!!
Early Pause Timer stop
Ignore this response because RF requesting is before eDV Active
Ignore Early Pause Timer as eDV is active. Early Pause Time(%u)
Early Pause Time(%u) is too small - But UE is in DRX sleep. RF will be released
[LTE_DSDS] Wake up ongoing hence do not pause even when ept time is small
[4G_DRDS] eDV_AvailableforEPT(%d -> %d) ConnDR_State(%d) SemiDrds(%d)
[4G_DRDS] Don't do pause done ! EDV_Active [%u] EDV_State [%d]
Early Pause Time(%u) is too small - send PAUSE DONE CNF
[SADS]gL1lc DsdsDB.FakeWakeUpTime(%d)
Early Pause Timer started with [%u]us!!!
[NRDS] EPT not started as Rf is avail for NR and DRDS is available
early_pause_duration [%u]us/Early time is negative/Timer is already running!!!
Early pause duration is zero
[L1TUNNEL => L1LC] Decode L1LC_L1TUNNEL_LTE_RF_PAUSE_REQ
[L1TUNNEL => L1LC] Decode L1LC_L1TUNNEL_LTE_SADR_MEAS_RESUME_REQ with EarlyPauseDuration[%u],Early_time[%u]
[L1TUNNEL => L1LC] Decode L1LC_L1TUNNEL_LTE_RF_RESUME_REQ with EarlyPauseDuration[%u],Early_time[%u]
[LTE L1LC DSL1RC] Ignore RESUME. RF is already released. No Resume awaited at L1LC at this time!!!
[NRDS] NR EPT time updated (%d->%d)
Early Pause Timer stop
gL1LC_DsdsReleaseAndReqTmr Timer stop
Early Pause Timer started with [%u]us!!!
[NRDS] EPT not started as Rf is avail for NR and DRDS is available
early_pause_duration [%u]us/Early time is negative/Timer is already running!!!
Early Pause Timer is already expired. So, skip.
[L1TUNNEL => L1LC]: Decode L1LC_L1TUNNEL_LTE_AUTO_PAUSE_UPDATE_IND with EarlyPauseDuration[%u],Early_time[%u]
Early Pause Timer stop
IsTxReqSentBeforeReconfig = %d
Early Pause Timer started with [%u]us!!!
[NRDS] Update NR EPT info also.(curProc:%d, NrCurProc:%d, ept:%d->%d)
[LTE L1LC DSL1RC] L1LC_StartResumeProcedure: Post Processing -PendingFromSetDlFreq!!!
[LTE L1LC DSL1RC] L1LC_StartResumeProcedure: Post Processing -PendingFromSearchReq!!!
early_pause_duration is 0!!
[LTE L1LC DSL1RC] L1LC_StartResumeProcedure: Post Processing -PendingFromSetDlFreq!!!
[LTE L1LC DSL1RC] L1LC_StartResumeProcedure: Post Processing -PendingFromSearchReq!!!
early_pause_duration [%u]us / Early time is negative!!
No need early_pause_time update. IsRfAvailable (%d), IsTxReqSentBeforeReconfig (%d)
[SR-IF => L1LC] Decode MMCIF_L1LC_DSL1C_STOP_TIMER_IND
Early Pause Timer stop
[SR-IF => L1LC] Decode MMCIF_L1LC_DSL1C_PSPS_IND. IsPsPsEnabled[%s]
[LTE PSPS] PSPS Scheme Started! Enable RF Protection during C-DRX Sleep
[LTE PSPS] PSPS Scheme stopped! Stop Early Pause Timer
[LTE PSPS] PSPS Scheme stopped during C-DRX and RF is not released
[SR-IF => L1LC] Decode MMCIF_L1LC_DSL1C_2G_CS_CALL_IND
[LTE L1LC DSL1RC] Suspend is expected for the Call on other stack..Restarted Protecting timer for 100ms!!!
[HAL => L1LC]: Decode HAL_L1LC_WAKEUP_START_IND
[HAL => L1LC]: Decode HAL_L1LC_CONFIG_GAP_INT
[MTM => L1LC] Decode MTM_L1LC_FER_MEAS_REQ
[HAL => L1LC] Decode HAL_L1LC_DRX_WAKEUP_IND1
[HAL => L1LC] Decode HAL_L1LC_DRX_WAKEUP_IND2
[L1LC => SR-IF] send LTE_L1LC_MMCIF_NS_UNRECOVER_IND
Cannot Allocate Message buffer
PAUSE due to SADR MEASURE
Cannot Allocate Message buffer
[4GDS] set rx_mode as 2rx
IsInConnected [%u], DutyCycle [%u]
[4GDS] set rx_mode as 2rx
Cannot Allocate Message buffer
IsInConnected [%u], NextEventPresent [%u], NextWakeupCause [%u], NextEventStartTime [%u], NextEventDuration [%u]
PAUSE due to SADR MEASURE
dsds_db->IsWaitResponse(%d)
L1LC_SendSrIfReq->Csfb(%d), Handover (%d)
L1LC_SendSrIfReq->RF status(%s), remaining Early pause time(%u)
RF Cause Update due to PBCH decoding for BPLMN return
[SADS] Always request RF as SA-DRDS mode is on
[DS_OPT] Do not pending RF Cause update
RF Cause : Signalling. Do not check nearby Early pause time
dsds_db->IsWaitResponse(0)
Cannot Allocate Message buffer
IsInConnected [%u], DutyCycle [%u]
Early Pause Timer stop
LTE L1LC is already in deregistered state, do not send deregister again
LTE L1LC is already in registered state, do not send register again
Cannot Allocate Message buffer
gL1LC_IsBplmnOnOtherRat[%d] gL1LC_CgiInfo.isEnable[%d] L1LC_CgiMeasMode[%d]
Cannot Allocate Message buffer
Cannot Allocate Message buffer
[SADR] Don't measure release if pause flag is set for measure pause.
Cannot Allocate Message buffer
[L1LC => SR-IF] Decode LTE_L1LC_MMCIF_DSL1C_SADR_GAP_MEASURE_PAUSE_DONE_CNF
Cannot Allocate Message buffer
[SR-IF => L1LC] Decode MMCIF_L1LC_DSL1C_SADR_GAP_MEASURE_RESUME_IND
Abnormal procedure (%d)
[L1TUNNEL => L1LC] Decode L1LC_L1TUNNEL_LTE_SADR_MEAS_GRANT_CNF (%d, %d)
[L1TUNNEL => L1LC] Decode L1LC_L1TUNNEL_LTE_SADR_MEAS_PAUSE_REQ
Early return - @Exception(SADR unavailable or RF unavailable(%d)) or SADR meas state is none: %s()
L1LC_DecodeSrIfMeasurePauseReq: Meas Pause received when no measurments ongoing
[L1LC => RRM] Send L1LC_RRM_DSDS_RELEASE_IND
Cannot Allocate Message buffer
[L1LC => RRM] Send L1LC_RRM_PROC_PAUSE_IND [%d]
Cannot Allocate Message buffer
[L1LC => RRM] Send L1LC_RRM_PROC_RESUME_IND
Cannot Allocate Message buffer
[RRM => L1LC] Decode RRM_L1LC_SIGNALLING_IND [%d]
[RRM => L1LC] Decode RRM_L1LC_IDLE_STATE_IND
%s: RFRelease Check !
[DRX] Extend gL1LC_DrdsAbnormalCheckTmr (gDrxRrcFlag case)
[DRX] Don't release RF. Wait RRC_IDLE_IND.
[RRM => L1LC] Decode RRM_L1LC_OTHER_RAT_BPLMN_IND
gL1LC_OtherRatBplmnStart(%d), Therefore L1LC send LTEL1_MMC_BACK_GND_PLMN_LIST_FAIL_IND to MMC
[RRM => L1LC] Decode RRM_L1LC_HIGH_PRIORITY_IND [%d, %d]
[RRM => L1LC] Decode RRM_L1LC_DSDS_PAUSE_IND
[4G_DRDS] PauseInd received in ST[%u]. eDV_Active[%u], MeasMode[%u], IsPreponeSet[%u]
[4G_DRDS] Deactivate 4G_DRDS as PauseInd is received in SCG stack!
UE DRX State(%d), Wakeup or CLK EST Procedure is not completed. Hence do not send pause done yet!
[NRDS] Wait NR PAUSE_CNF, After that LTE will RELEASE
Perform RF Release first because RF is unavailable
[RRM => L1LC] Decode RRM_L1LC_DSDS_RESUME_IND
DSDS_RESUME_IND received when RESUME_REQ msg is saved or IsRetryPending is true, ignore ModemPowerOn state check
Ignore RESUME_IND due to Modem Power Off
Wakeup procedure is not completed. Hence do not process Resume Ind!
Due to PAUSE_IND, retry timer was stopped. So, RF request again.
End of %s()
[RRM => L1LC] Decode RRM_L1LC_CELL_CHANGE_START_IND
[LTE_L1LC] RFBand of SCG STACK should be removed
[4G_DRDS] abnormal case!! Remove Scell: cid(%d), dl_earfcn(%d)
[4G_DRDS] For clearing abnormal case, RFBandlist is done
[L1LC => L1LC] Send L1LC_INT_EARLY_PAUSE_TIMER_EXPIRED
[LTE_DSDS] Search/Measure mode (HALSC_SyncMode: [%d], LTERRM_MEASMODE: [%d], curIratMode: [%d])
[FEDV] Ignore EPT
[LTE_DSDS] Ignore EPT
Cannot Allocate Message buffer
[4G_DRDS] Set gEarlyPauseFlag as TRUE
[L1LC => L1LC] Send L1LC_INT_ReleaseAndReqTimer_Expired
Cannot Allocate Message buffer
[L1LC => L1LC] Send L1LC_INT_CHECK_RELEASE_FEASIBILITY_TIMER_EXPIRED
Cannot Allocate Message buffer
[L1LC => L1LC] Send L1LC_INT_DSDS_CONN_CONN_RF_TIMER_EXPIRED
Cannot Allocate Message buffer
[L1LC => L1LC] Send L1LC_INT_DSDS_CONN_SIB_TIMER_EXPIRED
Cannot Allocate Message buffer
[L1LC => L1LC] Send L1LC_INT_DSDS_TIMER_EXPIRY_ACTION
Cannot Allocate Message buffer
[L1LC => L1LC] Send L1LC_INT_DSDS_BPLMN_DURATION_TIMER_EXPIRED
Cannot Allocate Message buffer
[SADS] Skip earlyPauseTimer
[SADS] SADR case. start pended CauseUpdate. RF Requet[%s]
[SADS] SADR case. start pended SearchReq!!!
[SADS] SADR case. start pended SetDlFreq!!!
[NRDS] Ignore E.P.T because eDV is ongoing
[NRDS] NR EPT time is not 0, Don't send RESUME and wait NR pause done.
Set IsMandatarySibsReadReq as FALSE.
[SADS]DRImpossible(%d)
[L1LC => MMC] send LTE_L1LC_MMCIF_DSL1C_PSUPDATE_TIME_IND [%d]
Cannot Allocate Message buffer
UpdateTime [%u], EventDuration [%u], Cause [%u]
Cannot Allocate Message buffer
[SADS] No need to RF Request(%d)
[L1LC => %s] Send LTEL1_MMC_UMTS_STOP_REQ
Simulate sending LTEL1_MMC_UMTS_STOP_REQ to MMC
Cannot Allocate Message buffer
[L1LC => %s] Send LTEL1_MMC_GSM_STOP_REQ
Simulate sending LTEL1_MMC_GSM_STOP_REQ to MMC
Cannot Allocate Message buffer
[L1LC => %s] Send LTEL1_MMC_CDMA_STOP_REQ
[RRM => L1LC] Decode RRM_L1LC_SIB8_INFO_NTF
CMDA2000 info is absent
[HAL => L1LC] Decode HAL_L1LC_GNSS_TIME_AID_IND
[L1LC => %s] Send LTEL1_MMC_RESTRICTION_CTRL_RSP
Simulate sending LTEL1_MMC_RESTRICTION_CTRL_RSP to MMC
Cannot Allocate Message buffer
[LTE L1LC DSL1RC] RsrcReqInd
Early Pause Timer stop, remain time (%d)
[4G_DRDS] eDV_Active[%u] Don't do early pause for Active Idle-Idle case !
[DRX] L1LC_DecodeHalRsrcReqInd: PreponePagingRFReqTime(%d)
[DRX][Before] PreponePagingRFReqTime(%d), Current SfnTTI(%d), next_paging_SfnTTI(%d)
[DRX][After] PreponePagingRFReqTime(%d), Current SfnTTI(%d), next_paging_SfnTTI(%d)
[DRX] Preponed HALDRX_ProcPagingRcvIntr, paging_frame=%d, paging_offset=%d, IsRfAvailable(%d)
[DRX] Process PagingRcvIntr immediatly (time diff : %d)
[DRX] Saved AGC Index(%d, %d)
[L1LC => L1TUNNEL] Send L1LC_L1TUNNEL_NR_4G_INFO_REQ(%d)
Cannot Allocate Message buffer
[L1LC => L1TUNNEL] Send L1LC_L1TUNNEL_4G_NR_INFO_CNF Failed response
Cannot Allocate Message buffer
[L1LC => L1TUNNEL] Failure response (type:%d, UserType:%d)
[L1LC => L1TUNNEL] Send L1LC_L1TUNNEL_4G_NR_INFO_CNF
Cannot Allocate Message buffer
Do not update LTE state >> IsProcConflict(%d), IsStart(%d)
Cannot Allocate Message buffer
[L1LC => L1TUNNEL] Send L1TUNNEL_L1LC_LTE_SLEEP_IND (IsStart:%d, IsModemOn:%d)
[L1LC => L1TUNNEL] Send L1TUNNEL_L1LC_LTE_WAKEUP_IND (IsStart:%d)
Cannot Allocate Message buffer
[L1TUNNEL => L1LC] L1LC_INT_L1TUNNEL_4G_NR_INFO_REQ (type:%d) will be processed after EDV end
[L1TUNNEL => L1LC] Decode L1LC_INT_L1TUNNEL_4G_NR_INFO_REQ (type:%d)
[Debug] type(%d) UserType(%d) remain_fdbuf(%d) num_needed_cc(%d) remain_ecb(%d) remain_mcw(%d)
[RFFE Debug][NR_INFO_REQ] NrBandListNum(%d -> %d) type(%d) IsEndc(%d) cc_occupied(0x%x)
[RF] Consider TX_SWAP in case of ENDC Activation(%d) (Band:B%d/N%d)
[RF] Consider RFFE Change in case of NR ADD(NR Band#:%d -> %d)
[NRDS] 4G_NR_INFO_REQ : PCC NR band (%d) added
[NRDS] 4G_NR_INFO_REQ : SCC NR band[%d, N%d] added
[NRDS] 4G_NR_INFO_REQ : add SCC NR band[%d, N%d] to dsds DB[%d, N%d]
[NRDS] 4G_NR_INFO_REQ : find starting point of NR CC (%d)
[Refarming] 4G_NR_INFO_REQ : Path REQ (NrBand[CC:%d] : %d), remove Inter-Freq BAND(same refarming band)
[NRDS] 4G_NR_INFO_REQ : Path REQ (NrBand : %d), remove DR BAND(unable ENDC)
[NRDS] 4G_NR_INFO_REQ : Path REQ (NrBand : %d), remove Inter-Freq BAND(unable ENDC)
case 1 : available_cc_num(%d)
case 2 : available_cc_num(%d)
[SC] NSA CC%d: earfcn(%d), resv(%d), type(%d), pair_cc(%02x), tdp_state(%d), rx_mode(%x)
num_needed_cc(%d), available_cc_num(%d) CC1 rx_mode(%d), tdp_state(%d), type(%d), resv(%d)
[L1LC] tcxoFreqOffset(%d), refFreqOffset(%d)
[L1LC] CoreAllocDb from NR: processing_Sum0(%d), buffer_Sum0(%d), output_occupied(%x), tdbuf_occupied(%x), reducedModeStatusNr0(%d)
[L1LC] 4G_NR_INFO_REQ : Path REQ, type(%d) //0:PCC, 1:SCC, used_cc_path(0x%x), using_dr_path(%d)
[Debug] type(%d) UserType(%d) remain_fdbuf(%d) num_needed_cc(%d) remain_ecb(%d) remain_mcw(%d)
[SC] NSA CC%d: earfcn(%d), resv(%d), type(%d), pair_cc(%02x), tdp_state(%d), rx_mode(%x)
[L1LC] 4G_NR_INFO_REQ : Send LCPU GAP IPC for NR interband gap
[NRDS] 4G_NR_INFO_REQ : ENDC_CGI - RF_Check_CA_Support : Source_Band[%d]: rat(%d), band(%d), earfcn(%d)
[NRDS] 4G_NR_INFO_REQ : ENDC_CGI - RF_Check_CA_Support(DR_BAND): Source_Band[%d]: rat(%d), band(%d), earfcn(%d)
[NRDS] 4G_NR_INFO_REQ : ENDC_CGI - RF_Check_CA_Support : Target_Band[%d]: rat(%d), band(%d)
[NRDS] 4G_NR_INFO_REQ : ENDC_CGI - RF_Check_CA_Support(without DR_BAND)
[NRDS] 4G_NR_INFO_REQ : ENDC_CGI (NrCgiBand : %d), remove DR BAND(unable NR 4Rx)
[NRDS] 4G_NR_INFO_REQ : DR_PATH (NrBand : %d), remove DR BAND(unable NR 4Rx)
[NRDS] 4G_NR_INFO_REQ : DR_PATH (NrBand : %d), DR BAND already not exist
[SC] NSA CC%d: earfcn(%d), resv(%d), type(%d), pair_cc(%02x), tdp_state(%d), rx_mode(%x)
[L1LC] 4G_NR_INFO_REQ : NOT defined type, please check L1 tunnel message type(%d)
[L1TUNNEL => L1LC] Decode L1LC_L1TUNNEL_NR_4G_INFO_CNF(type:%d)
[L1TUNNEL => L1LC] NR modem is NOT powered off!!!
[L1TUNNEL => L1LC] Decode L1LC_INT_L1TUNNEL_NR_INFO_UPDATE_IND (type:%d) search_ongoing(%d) measure_ongoing(%d)
[L1LC] CoreAllocDb from NR: processing_Sum0(%d), buffer_Sum0(%d), output_occupied(%x), tdbuf_occupied(%x), reducedModeStatusNr[0](%d)
[NRDS] gL1lc DsdsDB.NrBandNum : %d
[NRDS] initialize NrBandNum before new checking
[Debug] cc_occupied [%d], scell_cc_occupied [%d], NrScellBandCnt [%d] !!!
[Debug] NR SLO CC (SCC occupied but no NR band info) !!!
[Debug] cc_idx[%d], NrBandInfo [N%d] !!!
[NRDS] NR_INFO_UPDATE_IND (resv) : NR band (CC%d: %d), num = %d, Nr4rxCc = %d
[NRDS] NR_INFO_UPDATE_IND (free) : NR band (CC%d: %d), num = %d, Nr4rxCc = %d
[Debug][fd_buf] Invalid remain_fdbuf 0 !!!
[SC] NSA CC%d: earfcn(%d), resv(%d), type(%d), pair_cc(%02x), tdp_state(%d), rx_mode(0x%x)
[RFFE Debug][NR_INFO_UPDATE] type(%d) NrBandListNum(%d -> %d) IsEndc(%d -> %d) cc_occupied(0x%x)
[RF] Consider TX_SWAP in case of ENDC release (Band:B%d)
[L1LC] Set Update4RxPended
[L1LC] NR_INFO_UPDATE_IND : Path Release, cc_occupied(0x%x)
[L1LC] NR_INFO_UPDATE_IND : TYPE(%d)
[L1LC] CoreAllocDb from NR: processing_Sum0(%d), buffer_Sum0(%d), output_occupied(0x%x), tdbuf_occupied(0x%x), reducedModeStatusNr0(%d)
[L1TUNNEL => L1LC] NR_INFO_UPDATE_IND : Please check Message type(%d)
[NRDS] prev_NrBandNum (%d), current (%d), consider add DR BAND
[NRDS] DR added check will be done after CDRX wakeup or RF GRANT
[NRDS] pLTE_OHE->eDV_Active [%d]. So, don't check CheckEdvStackOrder
[NRDS] ConnDR_State is not DR_NONE
[L1LC => L1TUNNEL] Send L1LC_L1TUNNEL_NR_RESUME_SUSPEND_REQ(type:%d => [0]:suspend, [1]:resume, [2]:L2N meas config release)
Cannot Allocate Message buffer
[L1LC => L1TUNNEL] Send L1LC_L1TUNNEL_NR_RESUME_SUSPEND_REQ(SkipPowerDown : (%d), [0]: powerDownNr, [1]: skipPowerDownNR for L2N HO)
[L1TUNNEL => L1LC] Decode L1LC_L1TUNNEL_NR_RESUME_SUSPEND_CNF
[L1LC => L1TUNNEL] Send L1LC_L1TUNNEL_NR_4G_MEAS_REQ(measMode:%d)
Cannot Allocate Message buffer
[L1LC => L1TUNNEL] request information : Band(%d), SsbFreq(%d), NumOfCell(%d), Scs(%d), Period(%d), AgcGain(%d, %d)
[L1LC => L1TUNNEL] request information : IsGap?(%d), smtcIncluded(%d), smtc.offset(%d), smtc.duration(%d), NumSsbToMeasure(%d), SsbToMeasure(0x%x, 0x%x)
[L1LC => L1TUNNEL] request information : gap_info->gap_start_time(%u), length(%d)
L2N SRCH/MEAS Type(%d)(0:scell, 1:gap)
[L1LC => L1TUNNEL] request information : #%d => CellId(%d), SsbIndex(%d), TimingOffset(%d -> %d), nrTimeOffset(%d), RxBeamIndex(%d), half_frame_num(%d)
[L1TUNNEL => L1LC] Decode L1LC_L1TUNNEL_NR_4G_MEAS_CNF(measMode:%d, isEnable:%d, curMode:%d, curIratMode:%d)
[L1LC] L2N result early before Gap Start, so call HALSC_ForcedDisableGapIntr(HALSC_GapStartFlag: %d)
[L1LC] L2N meas cnf was sent in between inner GAP, pending until gapEnd (HALSC_GapStartFlag: %d)
[L1LC] SrchResult(NR) : SsbArfcn(%d), NumOfCell(%d), TimerExpired(%d), AgcGain(%6d)
[L1LC] SrchResult(NR) : CellId(%d), TimingOffset(%d), Corr(%d), FreqOffset(%d), RxBeamIndex(%d)
[L1LC] MeasResult(NR) : Band(%d), SsbArfcn(%d), NumOfCell(%d), TimerExpired(%d), AgcGain(%6d)
[L1LC] MeasResult(NR) : CellId(%d), SsbIndex(%d), TimingOffset(%d), RxBeamIndex(%d), half_frame_num(%d)
[L1LC] MeasResult(NR) : Rssi(%d), Rsrp(%d) Rsrq(%d), Sinr(%d)
[L1LC] SFTDInfo LTE: sfn(%d), offset(%d), NR: sfn(%d), offset(%d) Diff: sfn(%d) offset(%d)
[L1LC] PbchResult : Result(%d), SsbArfcn(%d), Period(%d), CellId(%d), SsbIndex(%d), Scs(%d), kSsb(%d)
[L1LC] Unknown measMode:%d
[L1LC] Delete MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
[L1LC => L1TUNNEL] Send L1LC_L1TUNNEL_NR_MEASSTOP_IND
Cannot Allocate Message buffer
[HAL => L1LC] Decode HAL_L1LC_MEAS_START_IND msg
start intra_meas,intra_sync ongoing
Already current measmode(%d) ongoing
Measurement is ongoing. Do not start the pending meas
Irat Measurement is ongoing(mode:%d). Do not start other Irat meas(mode:%d)
[HAL => L1LC] Decode HAL_L1LC_PROC_STORED_MSG_IND msg
[HAL => L1LC] Decode HAL_L1LC_NR_RESOURCE_FEAS_IND msg
[HAL => L1LC] Decode HAL_L1LC_DYNAMIC_QS_CONTROL_IND msg (%d)
[L1TUNNEL => L1LC] Decode L1LC_L1TUNNEL_NR_AIT_INFO_REQ(%d, %d, %d, %d, %d)
[RRM => L1LC] Decode L1LC_DecodeDsdsSrLteStatusInd (SRLTE [%d])--Cnt(%d)
[4G_DRDS] pLTE_OHE->eDV_Enable(%d -> %d)
[4G_DRDS] Change in SrLteStatusHistory (%d -> %d)
[4G_DRDS] LTE Suspended state. Do nothing more
L1LC_ProcFixedRxModeSet (CC%d rx_mode: %d)
SCC not activated, TDP state CC%d: %d
Update default RX mode 0 (Dynamic mode))
Cannot Allocate Message buffer
[L1LC => L1TUNNEL] Send L1TUNNEL_L1LC_NR_RF_GRANT_CNF (AutoPauseTime:%u)
[L1TUNNEL => L1LC] Decode L1LC_L1TUNNEL_NR_RF_GRANT_REQ (Req reason:%d)
Cannot Allocate Message buffer
[L1LC => L1TUNNEL] Send L1TUNNEL_L1LC_NR_RF_UPDATE_CNF (AutoPauseTime:%u, Result:%d)
[L1TUNNEL => L1LC] Decode L1LC_L1TUNNEL_NR_RF_UPDATE_REQ (Req reason:%d)
[L1LC => L1TUNNEL] Send L1TUNNEL_L1LC_NR_RF_PAUSE_REQ
Cannot Allocate Message buffer
4G_NR_INFO response is pending, so trigger failure before NR pause
[L1TUNNEL => L1LC] Decode L1LC_L1TUNNEL_NR_RF_PAUSE_CNF
[L1LC => L1TUNNEL] Send L1TUNNEL_L1LC_NR_RF_RESUME_REQ (AutoPauseTime:%u)
Cannot Allocate Message buffer
[L1TUNNEL => L1LC] Decode L1LC_L1TUNNEL_NR_RF_RESUME_CNF
[L1TUNNEL => L1LC] Decode L1LC_L1TUNNEL_NR_RF_RELEASE_IND
[NRDS] This is from this function
Cannot Allocate Message buffer
[L1LC => L1TUNNEL] Send L1TUNNEL_L1LC_NR_AUTO_PAUSE_UPDATE_IND (AutoPauseTime:%u)
[L1TUNNEL => L1LC] Decode L1LC_L1TUNNEL_NR_AUTO_PAUSE_DONE_IND
[L1TUNNEL => L1LC] Decode L1LC_L1TUNNEL_NR_SLEEP_IND
[NRDS] L1LC_NrdsProcSleepInd - Do not update SA sleep state (invalid state)
[L1TUNNEL => L1LC] Decode L1LC_L1TUNNEL_NR_WAKEUP_IND
[HAL => L1LC] Decode HAL_L1LC_THERMAL_RESTRICT_CNF (result : %d, level: %d, release: %d)
[L1LC => L1LC] Send L1LC_INT_CHECK_WAKEUP_AVAILABLE_TIMER_EXPIRED
Cannot Allocate Message buffer
[L1TUNNEL => L1LC] Decode L1LC_L1TUNNEL_NR_BAND_LIST_UPDATE_IND
[L1LC => L1TUNNEL] Send L1LC_L1TUNNEL_LTE_BAND_LIST_UPDATE_IND
Cannot Allocate Message buffer
[HAL => L1LC] Decode HAL_L1LC_SYNC_10MS_IND
[L1LC => L1TUNNEL] Decode L1LC_L1TUNNEL_LTE_RSRC_EXCEPTION_IND (%d)
RF unavailable >> Do not request the meas/search rsrc
[DS_OPT] Search ongoing => Do not start measure
[DS_OPT] start meas: %d
Invaild Message. Meas/Srch_State (%d)
[DS_OPT] Measure ongoing => Do not start search
[DS_OPT] Start pended Freq Scan Req
[DS_OPT] Start pended Search Req
[DS_OPT] start srch: %d
Invaild Message. Meas/Srch_State (%d)
Cannot Allocate Message buffer
[L1LC => L1TUNNEL] send L1TUNNEL_L1LC_LTE_RF_REG_IND
[L1LC => L1TUNNEL] send L1TUNNEL_L1LC_LTE_RF_DEREG_IND
[L1LC => L1TUNNEL] send L1TUNNEL_L1LC_LTE_RF_GRANT_REQ [%s][%d]
[L1LC => L1TUNNEL] send L1TUNNEL_L1LC_LTE_EARLY_PAUSE_DONE_IND (%d)
[L1LC => L1TUNNEL] send L1TUNNEL_L1LC_LTE_SADR_MEAS_PAUSE_DONE_CNF
[L1LC => L1TUNNEL] send L1TUNNEL_L1LC_LTE_RF_PAUSE_CNF - RELEASE[%s], Register[%d]
[L1LC => L1TUNNEL] L1TUNNEL_L1LC_LTE_RF_RESUME_CNF
[L1LC => L1TUNNEL] send L1TUNNEL_L1LC_LTE_RF_RELEASE_IND [%s]
[L1LC => L1TUNNEL] send L1TUNNEL_L1LC_LTE_UPDATE_TIME_IND time[%u]eventDuration[%u]
[L1LC => L1TUNNEL] send L1TUNNEL_L1LC_LTE_PSUPDATE_TIME_IND [%d]
[L1LC => L1TUNNEL] send L1TUNNEL_L1LC_LTE_INFO_NTF
[L1LC => L1TUNNEL] send L1TUNNEL_L1LC_LTE_MEAS_GRANT_REQ
[L1LC => L1TUNNEL] send L1TUNNEL_L1LC_LTE_MEAS_RELEASE
[L1LC => L1TUNNEL] send L1TUNNEL_L1LC_LTE_TX_GRANT_REQ
[L1LC => L1TUNNEL] send L1TUNNEL_L1LC_LTE_TX_RELEASE
[L1LC => L1TUNNEL] send L1TUNNEL_L1LC_LTE_TX_CHANGE_DONE_IND
Invaild message id (%d)
Cannot Allocate Message buffer
Cannot Allocate Message buffer
[HAL => L1LC] Decode HAL_L1LC_CDRX_RESTORE_REQ
L1LC_ForceDeactSCC for cc %d, dl_earfcn %d
CC %d, TDP_STATE %d
Not found activated CC for earfcn(%d)
[SC] SA CC%d: earfcn(%d), resv(%d), type(%d), pair_cc(%02x), tdp_state(%d), rx_mode(%x)
[L1LC] DS_SA_CONFIG type(%d) //0:PCC, 1:SCC, cc_occupied(0x%x), used_cc_path(0x%x)
