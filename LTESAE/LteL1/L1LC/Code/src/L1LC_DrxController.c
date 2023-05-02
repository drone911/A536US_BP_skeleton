Parameters related with Paging are incorrect!!!
L1LC_UpdatePagingTimingInComparisionWithRef(Ref Timing - SFN:%d, TTI:%d) and update end timing(SFN:%d, TTI:%d)
L1LC_DrxInit :: Reset gDrx_DSDSPagingRcvIntrSkip(%d)
L1LC_DrxInitToReady(%d)
Invalid ueState(%d)
L1LC_ShadeInit
Invalid state %d
L1LC_DrxStateChange (%s -> %s)
L1LC_DrxStateShadeStart
gDRXShort_Block=%d
(L1LC_DrxUpdateConnDrxTime)(curTimeTti:%d gDrxWakeSFN:%d gDrxWakeTTI:%d drx->curSleepTime:%d gDrxShortModeFlag:%d gDrxResync_cnt:%d)
dsp_sleep_time=%d, rrm_sleep_time=%d, slink_slp_time=%d[ms]
Invalid drx_T value is %d
Change SleepTime : prev(%d), after(%d)!
drx->curSleepTime = %u (IpcTimeInTTI: %u, SleepTimeInTTI: %u)
SIB SFN_tti(%d, %d), Paging SFN_tti(%d, %d), Wakeup_Time_tti(%d)!
Paging occassion is nearby SIB occasion!
SIB occassion is nearby paging occassion!
[SADS]Fake wakeupTime(%u)
[SADS] curTime(%u)us
[SADS] Changed Fake wakeupTime(%u)us
[SADS]Fake paging_slp_time (%u)->(%u)
[SADS]sleep time is short then margin (%u), (%u)
[SADS]paging_slp_time (%u)->(%u)
[SADS]sleep time is short then margin (%u), (%u)
PF(%d)PO(%d)curTimeSFN(%d)curTimeTti(%d)reset_offset(%d)(%d)
sib_frame=%d, sib_offset=%d, pagingFrame=%d, paging_offset=%d, drx->state=%d, paging_slp_time=%u
drx->curSleepTime = %u, (%u, %u)
L1LC_DrxProcSlowClkEstComplete, state[%d][%d]
DRX spare timer start(%d), Curr=%d
DRX spare timer CANNOT start(bplmn_spare_tmr_duration = %d), Curr=%d
Remaining time for next paging occassion = %d
need more DRX spare time
[DRX] L1LC_DrxCheckIdleOOS
[DRX] [%d]RLF(peak_value(%d) < thresh(%d))
L1LC_DrxCheckSleepStart[comm](gL1lc DsdsDB.IsCellResel is TRUE)
L1LC_DrxCheckSleepStart[idle(reinit)](Invalid SFN)
L1LC_DrxCheckSleepStart[idle(reinit)](Serving timing abnormal)(filtered_rsrp:%d)
L1LC_DrxCheckSleepStart[idle](Serving timing abnormal)(filtered_rsrp:%d)
L1LC_DrxCheckSleepStart[idle(reinit)](SCG - Serving timing abnormal)
L1LC_DrxCheckSleepStart[idle(reinit)](PDM value abnormal)(gDrxPdmArray[0]:%d gDrxPdmArray[1]:%d)
L1LC_DrxCheckSleepStart[idle(reinit)](OOS Event)
L1LC_DrxCheckSleepStart[idle](oos_result_cnt(%d) < gDrxOOSCriteria(%d))
L1LC_DrxCheckSleepStart[idle(reinit)](Ongoing ReInitDrx)
L1LC_DrxCheckSleepStart[idle](BPLMN Start)
L1LC_DrxCheckSleepStart[idle](HALDRX_CheckUpperLayerFlag)
IDLE DRX skip cus Meas ongoing.(curMode:%d, curIratMode:%d)
L1LC_DrxCheckSleepStart(NR SCG setup C-DRX skip)
L1LC_DrxCheckSleepStart(C-DRX(cycle:%d) skip on throughput(DL: %dMbps / UL: %dMbps)
(DSDS)L1LC_DrxCheckSleepStart[conn](LTE Paused)
(4G_DRDS)L1LC_DrxCheckSleepStart[conn](4G_DRDS Active)
L1LC_DrxCheckSleepStart[conn](OtherStWakeup nearby: %d(100us)
L1LC_DrxCheckSleepStart[conn](SIB modification)
L1LC_DrxCheckSleepStart[conn](RSTD Measurement)
L1LC_DrxCheckSleepStart[conn](OutOfSync is found)(Out Sync Rate:%d)
L1LC_DrxCheckSleepStart[conn](AFC hold mode-long sleep)(afc_hold_mode_check:%d)(gHALSC_fast_srch_flag:%d)(gHALSC_fast_srch_offset:%d)
[ERR]L1LC_DrxCheckSleepStart[conn](UNEXPECTED SLEEP_TIME)(gL1LC_DrxControl->curSleepTime(%d) > DrxMaxCycle(25600))
L1LC_DrxCheckSleepStart[conn](LMAC Working)(tx:%d, rx:%d, gSRTriggered:%d HALTX_SleepOkFlag:%d)
L1LC_DrxCheckSleepStart[conn](gHalDrx_ConnDrxState = DRX_CONN_INIT, wait DSP Done)
L1LC_DrxCheckSleepStart[conn](gHALEXP_SpecialModeStatus is On)
L1LC_DrxCheckSleepStart[conn](HALEXP_GetPingModeControl is On)
[DRX] MsgPendingNum = %d.
L1LC_DrxCheckSleepStart[4GDS](NumOfQueueMsg[%d])
L1LC_DrxCheckSleepStart[4GDS](HoldRrmMsgFlag[%d])
L1LC_DrxCheckSleepStart[4GDS] - skip (cum_drx_time[%d], Conn-Conn state[%d], longDRXcycle[%d])
[STAT]Drx Skip(common):gDrxMbsfnSiCount[%d] gDrxVocoderCount[%d] gDrxStateErrCount[%d] gDrxVolteCount[%d] gDrxHoldCount[%d]
[STAT]IdleDrx Skip : gDrxBplmnCount[%d] gDrxFlagCount[%d]
[STAT]Resync[%d] : SfnCount[%d] WakeupTimeCount[%d] ServigTimeCount[%d] PdmCount[%d] CinrCount[%d]
[STAT]ConnDrx Skip:gDrxRstdMeasCount[%d] gDrxRlfCount[%d] gDrxRepeaterCount[%d] gDrxAbnormalTimeCount[%d] gDrxLMacCount[%d] gDrxWaitIpcCount[%d] gDrxSiModCount[%d]
L1LC_DrxCheckSleepStart[comm](MBSFN DRX check)
L1LC_DrxCheckSleepStart[comm](Serving Cell mismatch-no skip)(%d, %d)
L1LC_DrxCheckSleepStart[comm](VoLTE is working)
L1LC_DrxCheckSleepStart[comm](gDrx_HoldFlag is TRUE)
L1LC_DrxCheckSleepStart[comm](DRX is not ready)(gL1LC_DrxControl->state:%d)
L1LC_DrxCheckSleepStart[comm](GnssTimeAid is TRUE)
L1LC_DrxCheckSleepStart[comm](clait_state is TRUE)
L1LC_DrxCheckSleepStart[comm](PBCH is being decoded, mode(%d))
L1LC_DrxProcSleepStart
UNEXPECTED SLEEP_TIME(%u)!!!!!!!!!!!!!!!!!
L1LC_DrxUpdateLongDrxTime!!!!!!!!!!!!!!!!!
L1LC_DrxProcSleepStart: Add 1ms sleep margin in 4G/4G case
[DRX] DRX_SLEEP_MARGIN = %d, gDrx_SysStableTime = %d, gDrxResync_cnt = %d, 4RX_MARGIN = %d, drx_T = %d, SFN corner = %d, dmGetDmState = %d, Is_1msMargin4GDS = %d, pHALDRX_Db->gDrx_2RxMargin = %d
[EMCP] gL1LC_EMCP_ONOFF[%d] = %d (hw_ApActiveStateGet(%d)
gL1LC_DrxControl->curSleepTime = %d, DRX_SLEEP_MARGIN = %d
[gL1LC_DrxControl->curSleepTime = %d, pLTE_OHE->SleepTime = %d/%d]
[DRX] L1LC_DrxProcSleepReq ue_state(%d), sleep_ready(%d), curstate(%d)
[DRX] L1LC_DrxProcSleepReq state=%s
[DRX] UpdateRfCause to SysRead for SCG
[DRX] skip SI command: current(%d) sib_start(%d) sib_end(%d)
[DRX] UpdateRfCause to SysRead for SCG
[DRX] PagingRcvIntr already set due to prepone. Skip L1LC_DrxSetPagingRcvIntrForMeas
[DRX] Don't release RF. Wait RRC_IDLE_IND.
[DRX] Extend gL1LC_DrdsAbnormalCheckTmr (gDrxRrcFlag case)
[DRX] Do not change gHalDrx_PagingState state when eDV is active
[DRX] Meas Done, Don't Sleep, gHalDrx_PagingState = DRX_MEAS_DONE
[DRX] Meas Done, Abnormal Case
[NRDS] Stop Conn DRX meas. (IsEndc : %d, gL1lc DsdsDB.NrDsInfo.NrGrantPendedByCdrxMeas: %d)
Conn DRX spare time(%d) is longer than Conn DRX cycle(%d)!!!
Conn DRX spare time(%d), MinRequiredTime=%d, cgi_returnTime=%d
need more Conn DRX spare time(%d), MinRequiredTime=%d, cgi_returnTime=%d
Change SleepTime : prev(%d), after(%d)!
remain time to paging(%d), MinRequiredTime(%d), ret_val(%d)
LteMifFreq(%d) DrxLongSleepMargin(%d)
extend sleep margin(%d) for conn-conn state
L1LC_DrxProcConnSleepStart: Add 1ms sleep margin in 4G/4G case
[DRX] DRX_SLEEP_MARGIN = %d, gDrx_SysStableTime = %d, DRX_TX_TIME_ALIGN = %d, gDrxResync_cnt = %d, 4RX_MARGIN = %d, pHALDRX_Db->gDrx_ScellMargin = %d, SFN corner = %d, dmGetDmState = %d, Is_1msMargin4GDS = %d, pHALDRX_Db->gDrx_2RxMargin = %d
[EMCP] gL1LC_EMCP_ONOFF[%d] = %d hw_ApActiveStateGet(%d)
gL1LC_DrxControl->curSleepTime(%d) DRX_SLEEP_MARGIN(%d) DrxLongSleepMargin(%d)
gL1LC_DrxControl->curSleepTime(%d) DRX_SLEEP_MARGIN(%d) DrxLongSleepMargin(%d)
AFC hold mode...(short sleep) Sleep Pass...(afc_hold_mode_check:%d)(gHALSC_fast_srch_flag:%d)(gHALSC_fast_srch_offset:%d)
(L1LC_DrxProcConnShortSleepStart)(Sleep time is insufficient)(gL1LC_DrxControl->curSleepTime:%d pHALDRX_Db->gDrxShortStableTime(%d) DRX_SHORT_MODE_SLEEP_MARGIN(%d)
[DRX-MBSFN] L1LC_MbmsDrxCheck :: Mode (%s) Start_Sfn = %d, Start_Tti = %d, End_sfn = %d, End_tti = %d
[DRX-MBSFN] mbsfn_sleep_time = %d, DRX_MARGIN = %d
Sleep time is insufficient : gDrxSleepTimeInTTI = %d
gL1LC_DrxControl->curSleepTime = %d, pHALDRX_Db->DRX_SLEEP_MARGIN = %d
[DRX-MBSFN] No Sleep for the whole DRX period
[DRX-MBSFN] Avoid Sleep Timer-1 Created = %d
[DRX-MBSFN] L1LC_DrxSleep,Sleep Mode = %s
[DRX] %s Soft SleepStart start!!!
[DRX] %s Sleep Start Time : (Previous %d.%d) vs (Current %d.%d) [100us]
[DRX] Set Current ST%d DsdsWakeupIntrTmr: %d [100us]
[DRX] %s Soft SleepStart end!!!
[DRX] Other ST(%d)'s remaining time is %d (100us)
[EMCP] gL1LC_EMCP_ONOFF[%d] = %d hw_ApActiveStateGet(%d)
[DRX] %s Soft SleepStart start!!!
[DRX] %s Sleep Start Time : (Previous %d.%d) vs (Current %d.%d) [100us]
[DRX] Set Current ST%d DsdsWakeupIntrTmr : %d, pLTE_OHE->SleepTime: %d, gDrx_WakeupSocTime: %d [100us]
[Debug] ConfigRxFilter - for fix
[DRX] %s Soft SleepStart end!!!
L1LC_DrxProcConnSleepReq :: DSP Status bitmap(Rach/ULG/SRI/CR(%x) RTT/RTX/IAT/ODT(%x) Paging/DediRach(%x)) gRACHflag(%d)
[DRX] Meas Done, Abnormal Case : gHalDrx_ConnDrxState = DRX_CONN_INIT
CGI Measure Start (Don't Sleep)
CGI Measure didn't Start (need more spare time[%d] NrBandNum[%d] rfSupport[%d])
(L1LC_DrxProcConnSleepReq)(shortmode insufficient time case)(pHALDRX_Db->gDrxShortModeFlag:%d shortsleepflag:%d)
(L1LC_DrxProcConnSleepReq)(gDrxShortModeFlag:%d shortsleepflag:%d)
IRAT CGI Measure Starts (LTE Modem remains sleep)
IRAT CGI Measure didn't Start (need more spare time)
[DRX] Meas Done, gHalDrx_ConnDrxState = DRX_CONN_MEAS_DONE, gHalDrx_SleepState = %d
[DRX] Don't Sleep, gHalDrx_ConnDrxState = %d, gHalDrx_SleepState = %d
(L1LC_ConnDrxUpdateDrxConfig)(CdrxConfig setup)
(L1LC_ConnDrxUpdateDrxConfig)(CdrxConfig diable)
HalDrxUpdate is maintained
L1LC_DrxUpdateDrxNewConfig (%d)
L1LC_DrxUpdateDrxConfig is maintained (%d)
(L1LC_ConnDrxUpdateDrxConfig)(onDurationTimer:%d drxInactivityTimer:%d drxRetransmissionTimer:%d)
(L1LC_ConnDrxUpdateDrxConfig)(longDRXCycle:%d longDRXCycle_offset:%d shortDRXCycle:%d drxShortCycleTimer:%d)
(L1LC_ConnDrxUpdateDrxConfig)(onDurationTimer:%d drxInactivityTimer:%d drxRetransmissionTimer:%d)
(L1LC_ConnDrxUpdateDrxConfig)(longDRXCycle:%d longDRXCycle_offset:%d shortDRXCycle:%d drxShortCycleTimer:%d)
L1LC_DrxConfig is Disabled
(L1LC_ConnDrxUpdateDrxConfig)(L1LC_DrxConfig is Disabled)
Diffent DRX !!!!!n PrevL1LC_DrxUpdatePagingConfig(drx_T:%d, PF:%d, PO:%d, nB:%d)
L1LC_DrxUpdatePagingConfig(drx_T:%d, PF:%d, PO:%d)
L1LC_DrxUpdatePagingConfig(drx_T:%d, PF:%d, PO:%d)
L1LC_DrxSuspendReq
MTM calibration is already working
LTE is already in test mode
L1 is already suspend mode(%d)
L1 is already power down
[L4GDS]Other LTE stack is not inactive
[L1LC_DrxSuspendReq] Do not clear IRAT Signal as response from UMTS is awaited
[4GDS] Conn - Conn state is ended!!
Other LTE stack is actived(%d)
Set gDrxLmacReady(%d)
[LTE_L1LC] Do not set OheStackStaus this time due to NrDsState(%d)
L1LC_DrxResumeReq
[L1LC_DrxResumeReq] Do not clear IRAT Signal as response from UMTS is awaited
OtherST(%d) Active and CurrentST(%d) Resume-Req: L2BlockStatus -> FALSE!
[DRX] HW is not off actually
[DRX] gDrx_PowerOn_TimingLatch, Skip Modem/Dsp power on
[DRX] gDrx_PowerOn_TimingLatch (Other ST: %d), Skip Modem/Dsp power on
[DRX] Diff cellboundary is zero!
Set gDrxLmacReady(%d)
Paging Receive Intr is already set, Do not update again
Change SleepTime : prev(%d), after(%d)!
time_diff(%d)! IsConn(%d)
It seems that paging timing was passed already! Is_Drx_Wakeup_ongoing = %d
UNEXPECTED SLEEP_TIME(%u)!!!!!!!!!!!!!!!!!
L1LC_DrxUpdateLongDrxTime!!!!!!!!!!!!!!!!!
[DRX] Remaining Time for PagingRcvIntr is too small. Set PagingRcvIntr 1ms later
[DRX] Prepone not possible!!paging_frame=%d(%d), curTimeSFN=%d(%d)
[DRX] paging_frame=%d, paging_offset=%d, curTimeSFN=%d(%d)
[DRX] Don't release RF. Wait RRC_IDLE_IND.
[DRX] Extend gL1LC_DrdsAbnormalCheckTmr (gDrxRrcFlag case)
time_diff(%d, (100us))!
[4G_DRDS] SCG Paging Receive Intr is already set, Do not update again!
Change SleepTime : prev(%d), after(%d)!
time_diff(%d)!
UNEXPECTED SLEEP_TIME(%u)!!!!!!!!!!!!!!!!!
L1LC_DrxUpdateLongDrxTime!!!!!!!!!!!!!!!!!
[DRX] Remaining Time for PagingRcvIntr is too small. Set PagingRcvIntr 1ms later
[DRX] Prepone not possible!!paging_frame=%d(%d), curTimeSFN=%d(%d)
[DRX] paging_frame=%d, paging_offset=%d, curTimeSFN=%d(%d)
Remaining time for next paging occassion = %d
ALL MEAS cycle - Need more DRX spare time
[LTE_DSDS] HAL saved message [%d] is freed)
Current SFN and TTI = %d, Paging Frame and TTI = %d
L1LC_ProcCheckWakeupAvailableTimerExpired!!
