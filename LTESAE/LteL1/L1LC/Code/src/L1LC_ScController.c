Delete MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
Delete MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
[L1LC] Tune EARFCN : %d, Freq : %d, band : %d
[L1LC] Unknown SyncMode(%d)
[4G_DRDS] Update AbnormalCheckTimer: %lu(current) + %d(sync_t) -> %lu [ms] due to SCG srch
[DS_OPT] NR search is ongoing. Wait response
[MDVFS] RT_DL is already enabled, HALMDVFS isn't set by 1
[L1LC][DCXO][DEBUG] DCXO FREQ OFFET(SCAN): hypoMode(%d)
[L1LC][DCXO][DEBUG] LTE OOS MAX FO RANGE
[L1LC][DCXO][DEBUG] DCXO FREQ OFFET(SCAN): freq_offset_rangem(%d, %dHz), dcxo_current_freq_offset_idx(%d), dcxo_freq_offset_apm(%d), dcxo_freq_offset_step(%dHz), temp(%d)
[L1LC][DCXO][DEBUG] DCXO FREQ OFFET(SCAN): dcxo_freq_offset_range(%dHz), dcxo_current_freq_offset_idx(%d), current_freq_offset_by_temp(%d)
[L1LC][DCXO][DEBUG] DCXO FREQ OFFET(SCAN): idx(%d), energy(%d), dcxo_offset(%d), hypoCnt(%d)
[L1LC][DCXO][DEBUG] DCXO FREQ OFFET(SCAN): dcxo_freq_offset_range(%dHz), dcxo_current_freq_offset_idx(%d), next_freq_offset_by_temp(%d)
[L1LC][DCXO][DEBUG] DCXO FREQ OFFET(SCAN): dcxo_freq_offset_range(%dHz), dcxo_next_freq_offset_idx(%d), calculate_dmxr_freq_offset(%d), AfcPdmOffset(%d->%d)
[L1LC][DCXO][DEBUG] sorted psch list : idx(%d), energy(%d), offset(%d)
[L1LC] RSSISCAN RESULT: BAND(%d),EARFCN(%d),RXMODE(%d),RSSI_MAIN(%d)
[L1LC] RSSISCAN RESULT: BAND(%d),EARFCN(%d),RXMODE(%d),RSSI_SUB(%d)
[L1LC] RSSISCAN RESULT: BAND(%d),EARFCN(%d),RXMODE(%d),RSSI_MAIN(%d),RSSI_SUB(%d)
Invalid SrchMode:%d
SearchConfiguredflag(0x%x)!!!
Search Already Started by another Controller(SearchConfiguredflag:0x%02x)!!!
[MTM: AFC PDM CAL] Skip Sync timer setting
[MDVFS] RT_DL is already enabled, HALMDVFS isn't set by 1
[L1LC][DCXO][DEBUG] DCXO FREQ OFFET(SRCH): HALSC_AfcPdmStored(%d -> %d), dcxo_freq_offset[%d](%dHz), freq(%d), dcxo_freq_offset_apm(%d)
Disable Cdrx as handover is on-going
Invalid pMsg->srchMode:%d
(offset : %d serving_rtg_offset: %d, frame_position:%d)
(offset : %d serving_rtg_offset: %d, frame_position:%d)
(offset : %d str: %d, cinr:%d)
L1LC_ProcSyncDoneInd(no cell detection)
no cell detection
SLAM DONE!!!(slam_cnt:%d str:%d)
L1LC_ProcSyncDoneInd(FS offset large)(offset : %d str: %d)
repeater detection but serving not detected(init serving_m0m1_pwr:%d)
repeater detection but srch_offset different(rpt_srch_diff:%d)
repeater detection but repeater pwr lower(rpt_m0m1_pwr:%d serving_m0m1_pwr:%d)
repeater detection but rpt_rtg_offset more than 4400(rpt_rtg_offset:%d)
repeater detection(offset:%d rpt_detect_cnt:%d)(rpt_srch_diff:%d)(rpt_m0m1_pwr:%d serving_m0m1_pwr:%d)
SLAM START!!!(rpt_detect_cnt:%d)(cinr:%d)(slam_time_offset:%d rpt_srch_pos:%d)
(offset:%d str:%d rpt_srch_pos:%d)(slam_cnt:%d)(repeater detection)
L1LC_ProcSyncDoneInd(FS offset small)(str: %d)
(offset:%d str:%d rpt_srch_pos:%d)(slam_cnt:%d)(repeater no detection)
L1LC_ProcSyncDoneInd(serving cell is not detected)
repeater&serving cell no detection
SearchConfiguredflag(0x%02x)!!!
[RSTD] Ignore the Dummy Sync Results
search_result is NULL
Dummy Sync
[MTM: AFC PDM CAL] Skip ProcSyncDoneInd
[L1LC][DEBUG] DCXO FREQ OFFET: srch_FO(%d), AfcPdmOffset(%d), HALSC_AfcPdmStored(%d)
SRCH DIV : ConnSrchCnt:%d
Delete MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
Invalid gL1LC_MeasInfo.curMode(%d)
Invalid syncResult.Num(%d)
Pcell is not detected!!
Delete MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
syncResult[%d] Num(%d)(%d)
[PWR_OPT] LTERRM_MEASMODE_INTRA_SYNC triggered -> Do not off RF Rx path
Invalid mode(gL1LC_SrchMode:%d, gL1LC_MeasInfo.curMode:%d, HALSC_GetSyncMode()(%d)
ProcSyncTimerExpired - gL1LC_SrchMode(%d), HALSC_SyncMode(%d), curMode(%d)
SearchConfiguredflag(0x%02x)!!!
L1LC_ProcSyncTimerExpired(Stop FS)
Delete MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
Invalid gL1LC_MeasInfo.curMode(%d)
Delete MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
Invalid mode(gL1LC_SrchMode:%d, gL1LC_MeasInfo.curMode:%d, HALSC_GetSyncMode()(%d)
[4G_DRDS] Retrigger WakeupIntr which was ignored!
[4G_DRDS] Wakeup intr still running, retrigger after wakeupintr expiry
L1LC_TriggerMeas (enable: %d)
MeasureConfiguredflag(0x%02x)!!!
measCnt is 0 (earfcn:%d, numOfCell:%d)
Irat measure is ongoing(%d), prepared(%d) (IratMeasState: %d, %d, %d)
UMTS measure stop!
GSM measure stop!
Measure_Stop_Req is pending, wait measure result from other RAT
During Inter GAP, IratMeasState (%d, %d, %d)
L1LC_StopAll
L1LC_StopAll(Stop FS)
Stop gL1LC_CheckLastPagingIntrTmr if it is still running.
[DRX, 4GDS] AllStop case (reset IsDuringGsmMeas:%d)
Invalid NeighCellConfig(%d)
L1LC_CheckNrRscFlag: mode(%d), is_allowed(%d), MeasureConfiguredflag(0x%x), SearchConfiguredflag(0x%x)
Invalid pMeasElem->mode(%d)
[PWR_OPT] SINR value (%d), SavedSINR(%d)
L1LC_StartMeasElemInIdleDrx: Start IntraMeas
L1LC_StartMeasElemInConnNormal gL1LC_MeasInfo.curMode(%d) gL1LC_MeasInfo.measElem[LTERRM_MEASMODE_INTRA_MEAS].isEnable(%d)
L1LC_StartMeasElemInConnNormal gL1LC_MeasInfo.measElem[LTERRM_MEASMODE_INTRA_MEAS].earfcn(%d), pMeasElem->earfcn(%d)
Pending IntraMeas till next trigger
Invalid pMeasElem->mode(%d)
L1LC_StartMeasElemInConnNormal gL1LC_MeasInfo.curMode(%d) gL1LC_MeasInfo.measElem[LTERRM_MEASMODE_INTRA_MEAS].isEnable(%d)
L1LC_StartMeasElemInConnNormal gL1LC_MeasInfo.measElem[LTERRM_MEASMODE_INTRA_MEAS].earfcn(%d), pMeasElem->earfcn(%d)
L1LC_StartMeasElemInConnDrx: Start IntraMeas
L1LC_StartMeasElemInConnDrx: MEASMODE not changed to LTERRM_MEASMODE_INTRA_BOTH
[PWR_OPT] SINR value (%d), SavedSINR (%d)
Pending IntraMeas till next trigger
IntraMeas was already started!
L1LC_StartMeasElemInConnDrx: MEASMODE not changed to LTERRM_MEASMODE_INTER_BOTH
L1LC_StartMeasElemInConnDrx: MEASMODE not changed to LTERRM_MEASMODE_INTER_BOTH
L1LC_StartMeasElemInGap: MEASMODE not changed to LTERRM_MEASMODE_SCELL_BOTH
Inter sync can't be scheduled (curMode:%d, curIratMode:%d, lastIratMode:%d)
L1LC_StartMeasElemInGap: MEASMODE not changed to LTERRM_MEASMODE_SCELL_BOTH
L1LC_StartMeasElemInConnDrx: MEASMODE not changed to LTERRM_MEASMODE_SCELL_BOTH
LTERRM_MEASMODE_UMTS_CGI_CELL_SEARCH is postponed because UMTS modem is ongoing!
Invalid pMeasElem->mode(%d)
L1LC_StartMeasElemInConnNormal gL1LC_MeasInfo.curMode(%d) gL1LC_MeasInfo.measElem[LTERRM_MEASMODE_INTRA_MEAS].isEnable(%d)
L1LC_StartMeasElemInConnNormal gL1LC_MeasInfo.measElem[LTERRM_MEASMODE_INTRA_MEAS].earfcn(%d), pMeasElem->earfcn(%d)
Start IntraMeas after STR stable duration
L1LC_StartMeasElemInConnNormal: MEASMODE not changed to LTERRM_MEASMODE_INTRA_BOTH
[PWR_OPT] SINR value (%d), SavedSINR (%d)
Do not start IntraMeas during STR stable duration
IntraMeas was already started!
L1LC_StartMeasElemInConnNormal: MEASMODE not changed to LTERRM_MEASMODE_INTRA_BOTH
L1LC_StartMeasElemInConnNormal: MEASMODE not changed to LTERRM_MEASMODE_INTRA_BOTH
L1LC_StartMeasElemInConnNormal: MEASMODE not changed to LTERRM_MEASMODE_SCELL_BOTH
Invalid pMeasElem->mode(%d)
Start IntraMeas after STR stable duration
L1LC_StartMeasElemInGap: MEASMODE not changed to LTERRM_MEASMODE_INTRA_BOTH
[PWR_OPT] SINR value (%d), SavedSINR (%d)
nextGapBoundary(%d) is small. wait next time
gL1LC_MeasInfo.curMode(%d) is invalid!
Do not start IntraMeas during STR stable duration
L1LC_StartMeasElemInGap: MEASMODE not changed to LTERRM_MEASMODE_INTRA_BOTH
IntraMeas was already started!
Intra sync can't be scheduled (curMode:%d, curIratMode:%d, lastIratMode:%d)
L1LC_StartMeasElemInGap: MEASMODE not changed to LTERRM_MEASMODE_INTRA_BOTH
Inter-freq and IRAT can not be triggered concurrently, curMode(%d), curIratMode(%d), SearchConfiguredflag(0x%x), MeasureConfiguredflag(0x%x)
GAP Stop!! nextGapBoundary > GAP_READY_HW_OFFSET
L1LC_StartMeasElemInGap: MEASMODE not changed to LTERRM_MEASMODE_INTER_BOTH
Inter-freq and IRAT can not be triggered concurrently, curMode(%d), curIratMode(%d), SearchConfiguredflag(0x%x), MeasureConfiguredflag(0x%x)
GAP Stop!! nextGapBoundary <= GAP_READY_HW_OFFSET
Inter sync can't be scheduled (curMode:%d, curIratMode:%d, lastIratMode:%d)
L1LC_StartMeasElemInGap: MEASMODE not changed to LTERRM_MEASMODE_INTER_BOTH
GAP Stop!! nextGapBoundary > GAP_READY_HW_OFFSET
L1LC_StartMeasElemInGap: MEASMODE not changed to LTERRM_MEASMODE_SCELL_BOTH
Irat meas is running, so SCell sync is delayed (curIratMode:%d)
L1LC_StartMeasElemInGap: MEASMODE not changed to LTERRM_MEASMODE_SCELL_BOTH
GAP Stop!! nextGapBoundary <= GAP_READY_HW_OFFSET
Inter sync can't be scheduled (curMode:%d, curIratMode:%d, lastIratMode:%d)
L1LC_StartMeasElemInGap: MEASMODE not changed to LTERRM_MEASMODE_SCELL_BOTH
Irat meas is running, so SCell meas is delayed (curIratMode:%d)
Scell sync can't be scheduled (curMode:%d, curIratMode:%d, lastIratMode:%d)
L1LC_StartMeasElemInGap: MEASMODE not changed to LTERRM_MEASMODE_SCELL_BOTH
[L2N_GAP] More margin needed inorder to trigger a L2N GAP, gapBoundary(%d)
Invalid pMeasElem->mode(%d)
RF available FALSE. So, NR can search/meas
LTE Inter sync/Meas[%d] can be scheduled (curMode:%d, curIratMode:%d, lastIratMode:%d)
[SADS] LTE Inter sync/Meas cannot be scheduled even if nearby GAP. Due to SadrMeasState()= %d
[DEBUG] L1LC_ReleaseSearchMeasureResource: Search resource is under use by LTE for IRAT, Do not give resource to NR, SearchConfiguredflag(0x%x)
[DEBUG] L1LC_ReleaseSearchMeasureResource: Measure resource is under use by LTE for IRAT, Do not give resource to NR, MeasureConfiguredflag(0x%x)
[DEBUG] L1LC_ReleaseSearchMeasureResource: mode(%d), resource(%d), status(SearchConfiguredflag:0x%02x, MeasureConfiguredflag:0x%02x)
measNrElem[%d] isEnable:%d, mode:%d earfcn:%d
During Measure element setting.
[DEBUG] L1LC_GetNextMeasElemFromResourceUpdateInd: DR-DSDS is active, hence SCG measurement is started
[DEBUG] L1LC_GetNextMeasElemFromResourceUpdateInd (mode:%d, numOfCell:%d, earfcn:%d)
[DEBUG] L1LC_GetNextMeasElemFromResourceUpdateInd IRAT(mode:%d, numOfCell:%d, earfcn:%d)
L1LC_GetNextMeasElemFromNrSCell - NrSCellPrio(%d) [0-NR, 1-SCell], gL1LC_WaitingIratMeasDone(%d) gL1LC_MeasSuspendForTxFlag(%d)
During Measure element setting.
measNrElem Queue (Debug) measConfig:%d, curIratMode:%d, prevMeasMode:%d, gL1LC_IratNrMeasState:%d, measNrCnt:%d, measNrWrPtr:%d, measNrRdPtr:%d)
Add MeasElem(DeQueue) (measMode:%d, earfcn:%d, numOfCell:%d, gL1LC_IratNrMeasState:%d, measNrCnt:%d, measNrWrPtr:%d, measNrRdPtr:%d)
Add MeasElem(DeQueue) (measMode:%d, earfcn:%d, numOfCell:%d, gL1LC_IratNrMeasState:%d, measNrCnt:%d, measNrWrPtr:%d, measNrRdPtr:%d)
L1LC_GetNextMeasElemFromMeasDone(DEBUG) (prevMeasMode(%d), curMode(%d), measNrCnt(%d), measNrWrPtr(%d), measNrRdPtr(%d))
Gap is not finished (prevMeasMode:%d), curIratMode(%d)
NR IRAT measure can't be scheduled (curMode:%d, curIratMode:%d, lastIratMode:%d)
IRAT measuure is ongoing, Do not start any measurement (prevMeasMode:%d, curMode:%d, curIratMode:%d, lastIratMode:%d)
Intra sync can't be scheduled (curMode:%d, curIratMode:%d, lastIratMode:%d)
NR IRAT measure can't be scheduled (curMode:%d, curIratMode:%d, lastIratMode:%d)
Inter Meas is suspended (MeasMode:%d, gL1LC_WaitingInterMeasDone:%d, gL1LC_MeasSuspendForTxFlag:%d)
Irat Meas is suspended (MeasMode:%d, gL1LC_WaitingIratMeasDone:%d, gL1LC_MeasSuspendForTxFlag:%d)
Delete MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
Gap is not finished (prevMeasMode:%d), curIratMode(%d)
Intra sync can't be scheduled (curMode:%d, curIratMode:%d, lastIratMode:%d)
[DEBUG] L1LC_GetNextMeasElemFromMeasDone (mode:%d, numOfCell:%d, earfcn:%d)
[4G_DRDS] SCG cannot process next measelem (measmode : %d, PagingState : %d) RF will be requested at paging done
[4G_DRDS] SCG cannot process next measelem (measmode : %d, PagingState : %d) Request RF first
During Measure element setting.
Irat Meas is suspended (gL1LC_WaitingIratMeasDone:%d, gL1LC_MeasSuspendForTxFlag:%d)
(gL1LC_IratUmtsMeasState(%d)
(L1LC_GetNextIratMeasElemFromInterSyncDone.PAUSE REQ pending. Do not start IRAT simultaneous process
(GAP Intr was already set. Don't do SIMULTANEOUS PROCESS. (curMode:%d, curIratMode:%d, lastIratMode:%d)
IRAT SIMULTANEOUS PROCESS is possible(curMode:%d, curIratMode:%d, lastIratMode:%d)
Gap is not finished (prevMeasMode:%d), curIratMode(%d)
NR IRAT measure can't be scheduled (curMode:%d, curIratMode:%d, lastIratMode:%d)
During Measure element setting.
Inter Meas is suspended (gL1LC_WaitingInterMeasDone:%d, gL1LC_MeasSuspendForTxFlag:%d)
(L1LC_GetNextMeasElemFromGapStart.PAUSE REQ pending. Do not start IRAT simultaneous process
(GAP Intr was already set. Don't do SIMULTANEOUS PROCESS. (curMode:%d, curIratMode:%d, lastIratMode:%d)
IRAT SIMULTANEOUS PROCESS is possible(curMode:%d, curIratMode:%d, lastIratMode:%d)
Inter sync can't be scheduled (curMode:%d, curIratMode:%d, lastIratMode:%d)
SCell sync can't be scheduled (curMode:%d, curIratMode:%d, lastIratMode:%d)
NR IRAT measure can't be scheduled (curMode:%d, curIratMode:%d, lastIratMode:%d)
Inter sync can't be scheduled (curMode:%d, curIratMode:%d, lastIratMode:%d)
SCell sync can't be scheduled (curMode:%d, curIratMode:%d, lastIratMode:%d)
NR IRAT measure can't be scheduled (curMode:%d, curIratMode:%d, lastIratMode:%d)
During Measure element setting.
Intra sync can't be scheduled (curMode:%d, curIratMode:%d, lastIratMode:%d)
NR IRAT measure can't be scheduled (curMode:%d, curIratMode:%d, lastIratMode:%d)
Scell sync can't be scheduled (curMode:%d, curIratMode:%d, lastIratMode:%d)
During Measure element setting or Scell Sync Ongoing (curMode %d).
Irat Meas is suspended (gL1LC_WaitingIratMeasDone:%d, gL1LC_MeasSuspendForTxFlag:%d)
(gL1LC_IratUmtsMeasState(%d)
(L1LC_GetNextIratMeasElemFromGapEnd.PAUSE REQ pending. Do not start IRAT simultaneous process
(GAP Intr was already set. Don't do SIMULTANEOUS PROCESS. (curMode:%d, curIratMode:%d, lastIratMode:%d)
IRAT SIMULTANEOUS PROCESS is possible(curMode:%d, curIratMode:%d, lastIratMode:%d)
Inter Synch is running (curMode:%d, curIratMode:%d)
NR IRAT measure can't be scheduled (curMode:%d, curIratMode:%d, lastIratMode:%d)
During Measure element setting.
Irat Meas is suspended (gL1LC_WaitingIratMeasDone:%d, gL1LC_MeasSuspendForTxFlag:%d)
During Measure element setting.
L1LC_GetElemFromMeasReq (measConfig : %d)
IRAT Measure/Sync is running (curMode:%d, curIratMode:%d, MeasConfig: %d)
DMTC window nearby, pick LAA element (meas_elem : %d, numOfCell:%d, curMode:%d, curIratMode:%d)
Inter Meas is suspended (MeasMode:%d, gL1LC_WaitingInterMeasDone:%d, gL1LC_MeasSuspendForTxFlag:%d)
Irat Meas is suspended (MeasMode:%d, gL1LC_WaitingIratMeasDone:%d, gL1LC_MeasSuspendForTxFlag:%d)
Delete MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
L1LC_GetNextElemFromMeasReq_ConfigGap (nextGapBoundary : %d)
nextDmtcBoundary sufficient to measure (meas_elem : %d, numOfCell:%d, curMode:%d, curIratMode:%d)
Scell sync can't be scheduled (curMode:%d, curIratMode:%d, lastIratMode:%d)
nextGapBoundary(%d) is small.. (curMode:%d, curIratMode:%d)
nextGapBoundary(%d) is small.. (numOfCell:%d, curMode:%d, curIratMode:%d)
Intra sync can't be scheduled (curMode:%d, curIratMode:%d, lastIratMode:%d)
nextGapBoundary(%d) is small.. (curMode:%d, curIratMode:%d, GapStartFlag:%d)
nextGapBoundary(%d) is small.. (numOfCell:%d, curMode:%d, curIratMode:%d, GapStartFlag:%d)
NR IRAT measure can't be scheduled (curMode:%d, curIratMode:%d, lastIratMode:%d)
Inter Meas is suspended (gL1LC_WaitingInterMeasDone:%d, gL1LC_MeasSuspendForTxFlag:%d)
(gL1LC_IratUmtsMeasState(%d)
(L1LC_GetNextMeasElemFromMeasReq.PAUSE REQ pending. Do not start IRAT simultaneous process
(GAP Intr was already set. Don't do SIMULTANEOUS PROCESS. (curMode:%d, curIratMode:%d, lastIratMode:%d)
IRAT SIMULTANEOUS PROCESS is possible(curMode:%d, curIratMode:%d, lastIratMode:%d)
Inter sync can't be scheduled (curMode:%d, curIratMode:%d, lastIratMode:%d)
[RSTD] Gap Available Immediately (curMode:%d, earfcn:%d), pL1RstdDb->MeasTriggerOffset[%d]
Invalid gL1LC_MeasInfo.config(%d)
L1LC_RestorePrevMeasConfig
Add MeasElem(DeQueue) (measMode:%d, earfcn:%d, numOfCell:%d, gL1LC_IratNrMeasState:%d, measNrCnt:%d, measNrWrPtr:%d, measNrRdPtr:%d)
Add MeasElem(DeQueue) (measMode:%d, earfcn:%d, numOfCell:%d, gL1LC_IratNrMeasState:%d, measNrCnt:%d, measNrWrPtr:%d, measNrRdPtr:%d)
When NR meas mode 24 is given continuously, leave the second meas object uncorrupted.
Add MeasElem(DeQueue) (measMode:%d, earfcn:%d, numOfCell:%d, gL1LC_IratNrMeasState:%d, measNrCnt:%d, measNrWrPtr:%d, measNrRdPtr:%d)
During Measure element setting.
[PWR_OPT] Current:%d, Intra_meas:Enabled, Is_Drx_Wakeup_ongoing:%d
No need to trigger next measurement because some measurement is ongoing (not a wakeup case), curMode(%d)
(L1LC_GetNextMeasElemFromMeasReq) Meas skip due to Short mode
(L1LC_GetNextMeasElemFromMeasReq) Selected MeasElem: %d
[PWR_OPT] Current:%d, Next:%d, Intra_meas:Enabled, Is_Drx_Wakeup_ongoing:%d
[PWR_OPT] No need to trigger next measurement because some measurement is ongoing (not a wakeup case)
[PWR_OPT] Next measure element(%d): INTRA_MEAS(9), INTRA_SYNC(8) (Wakeup case)
[PWR_OPT] No need to trigger another measurement(%d), except for INTRA_MEAS and INTRA_SYNC (Wakeup case). Set IsMeasReqPending TRUE
measNrElem Queue (Debug) measConfig:%d, curIratMode:%d, gL1LC_IratNrMeasState:%d, measNrCnt:%d, measNrWrPtr:%d, measNrRdPtr:%d)
RF is unavailable. Do not start L1LC_StartMeasElem
Waiting MEASURE GRANT. So, will perform again after MEASURE GRANT.
Measurement should wait for 2.8 ms after eDRDS end.
[SADR] SADR Measure State (%d). Don't disable Meas Dsds Mask
[SADR] SADR Measure State (%d). But, can't start other reason
[SADR] NR not suspended yet(IratNrMeasState:%d). So, can't release measure resource.
[SADR] Other measure(%d) is ongoing. So, can't start this measure (%d) and skip measure release
[DS_OPT] Srch (%d)/Meas (%d) State. Don't disable Meas Dsds Mask
Set IsMeasReqPending = TRUE as CheckFeasibility failed, curMode(%d), curIratMode(%d), SearchConfiguredflag(0x%x), MeasureConfiguredflag(0x%x)
L1LC_StartMeasElem(measConfig:%d, mode:%d, measCnt:%d, nextMeasIndex:%d, SearchConfiguredflag:0x%x, MeasureConfiguredflag:0x%x)
L1LC_StartMeasElem => Skip to start NR measurement & return(measmode:%d)
Invalid gL1LC_MeasInfo.config(%d)
Release search & measure resource due to NR
Check Release search & measure >> curMode(%d) curIratMode(%d) pMeasElem->mode(%d) IsSearchNeed(%d) IsMeasureNeed(%d)
[4G_DRDS] (Check_Feasibility) During 4G_DRDS(eDV_active : %d, eDV_available : %d)
[4G_DRDS] (Check_Feasibility) During 4G_DRDS, MCG can't start meas!
[4G_DRDS] (Check_Feasibility) Meas (%d) of MCG Stack is not finished yet!!
[4G_DRDS] (Check_Feasibility) start intra meas!
[4G_DRDS] (Check_Feasibility) Waiting for pagingrcvintr, SCG can't start non-intra meas!
[SADS] gap not configured. cannot do inter sync/meas
[SADS] SRL1RC sent MEASURE_PAUSE_REQ. So, don't Measure_Req
[SADS] Get_CA_Support to check 4rx release is needed for inter meas
[SADS] 4rx release is needed for inter meas
[SADS] SADR measure (%d)
[SADS] Can't this meas mode(earfcn: %d) during SADR
[SADS] Wait other measurement (%d) done. So, pending (%d) for SADR
[SADS] SA DR Meas State = %d. So, wait SADR meas response.
[SADS] mode (%d), can start measure
[LTE_DSDS] (Check_Feasibility)Initial Search/ measure hence not doing pause even Early timer expired
PauseFlag (%d), IsWaitResponse (%d), pal HandoverStartSig (%d) L1LC HandoverStartSig(%d)
Pauseflag is set as TRUE, but Meas (%d) is ongoing, therefore, do not pend Meas
Do not start Meas (%d) due to PauseFlag (%d)/ IsWaitResponse(%d)
Do not start Search (%d) due to PauseFlag (%d)/ IsWaitResponse(%d)
IRAT MeasMode(%d) feasibility will be checked later!
Unknown MeasMode(%d)
[LTE L1LC] Pause will be performed as part of EPT expiry handling
mode(%d), MeasureConfiguredflag(0x%x), SearchConfiguredflag(0x%x)
[DRX] Extend gL1LC_DrdsAbnormalCheckTmr + 300ms for NR search resource release
Unknown MeasMode(%d)
Do not start Sync related meas mode(%d) operation due to nearby e.p.t
Do not start Meas related meas mode(%d) operation due to nearby e.p.t
Do not start InterMeas due to nearby paging timing of current stack
Do not start InterSync due to nearby paging timing of current stack
[L1LC] Other stack BplmnDurationTimer should have expired
[L1LC] Other stack BplmnDurationTimer handler will conflict with gap, pending this meas operation
[DS_OPT] L1LC_CheckFeasibiltyWithMeasState = %d
[DS_OPT] NR measure is ongoing. Wait response
[DS_OPT] NR search is ongoing. Wait response
[DS_OPT] NR measure is ongoing. Wait response
[DS_OPT] NR search is ongoing. Wait response
[DS_OPT] LTE can Meas(%d)/Search(%d)
Start MeasElem (%d) after resync
Delete MeasElem(measMode:%d, earfcn:%d, numOfCell:%d)
Unknown pMeasElem->mode(%d)
[4G_DRDS] %s: - PendingFromMeasReq[%d]!!!
[4G_DRDS] !!! pNextMeasElem is NULL !!!
GapLevelState(%d) AgcOvrAnt0(%d) AgcOvrAnt1(%d) PschPwr0(%d) PschPwr1(%d) PschPwr2(%d), SrchResultValid(%d)
GapLevelState(%d) AgcOvrAnt0(%d) AgcOvrAnt1(%d) PschPwr0(%d) PschPwr1(%d) PschPwr2(%d), SrchResultValid(%d)
L1LC_ProcMeasureReq during power down state
Delete MeasElem (measMode:%d, earfcn:%d, measNum:%d)
Delete MeasElem (measMode:%d, earfcn:%d, measNum:%d)
Add MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
Add MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
Delete MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
L1LC_ProcMeasureReq_UpdateMeasElemInfoDefault :Mode(%d), pNewMeasElem (%d)
Add MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
[PWR_OPT] LTERRM_MEASMODE_INTRA_SYNC triggered
Add MeasElem(InQueue) (numOfCell#%d => measMode(%d) earfcn(%d) cell_Id(%d) framePos from Serving Cell Timing(%d))
Add MeasElem(InQueue) (numOfCell#%d => ssb_index(%d), timing_offset(%d), rxbeam_index(%d)), half_frame_num(%d)
Add MeasElem(InQueue) (measMode(%d), subcarrierSpacing(%d), periodicity(%d), smtc.duration(%d), smtc.offset(%d), smtc_included(%d))
Add MeasElem(InQueue) (NumSsbToMeasure(%d), SsbToMeasure(0x%x, 0x%x), measNrCnt(%d), measNrWrPtr(%d), measNrRdPtr(%d))
[DMTC] Disable Current Measurement for DMTC measure: curr_measMode(%d)
[DMTC] Disable Current Search for DMTC measure: curr_measMode(%d)
Wrong numOfCell:(%d) -> Skip GSM ALL MEAS
Not expected measMode(%d) - Turn off ALL MEAS
pCurMeasElem is NULL (pMsg->measMode:%d)
(DEBUG) (pMsg->measMode(%d), gL1LC_MeasInfo.measElem[LTERRM_MEASMODE_NR_SYNC].isEnable(%d), gL1LC_MeasInfo.measElem[LTERRM_MEASMODE_NR_MEAS].isEnable(%d)
Same measInfo is already exist (curMode:%d, curIratMode:%d, measMode:%d, arfcn:%d)
Triggered measure needs [%d ms] - but DRX T[%d ms] duration is not enough
short of Sparetime(%d) - spareTime(:%d, withOffset -%d) < minTrigTime(:%d)
Trigger measMode(%d) for ALL MEAS - spareTime(:%d, withOffset -%d) > minTrigTime(:%d)
Add MeasElem (measMode:%d, earfcn:%d, numOfCell:%d, dmtc:%d, laa:%d, csi-rs:%d)
[ProcMeasureReq] change BW for gap search BW(%d -> 0)
Add MeasElem (subcarrierSpacing(%d), periodicity(%d), smtc.duration(%d), smtc.offset(%d), smtc_included(%d))
Add MeasElem (NumSsbToMeasure(%d), SsbToMeasure(0x%x, 0x%x))
Add MeasElem (numOfCell#%d => measMode(%d) earfcn(%d) cell_Id(%d) framePos from Serving Cell Timing(%d))
Add MeasElem (numOfCell#%d => ssb_index(%d), timing_offset(%d), rxbeam_index(0x%03x)), half_frame_num(%d)
L1LC_ProcMeasureReq_CheckIntraInterMeasNumCell (isEnable:%d)
MeasureConfiguredflag(0x%02x)!!!
MeasDoneInd - gL1LC_MeasInfo.curMode(%d), curIratMode(%d)
Invalid gL1LC_MeasInfo.curMode(%d)
IRAT Measurement done
Invalid measCnt(%d)
pCurMeasElem->measCnt:%d, pCurMeasElem->nextMeasIndex:%d, pCurMeasElem->numOfCell:%d
MEAS_CNF is delayed because remaining Cells for inter frequency(%d) should be measured.
[DRX] Extend gL1LC_DrdsAbnormalCheckTmr + 100ms
[DMTC] CNT(%d) AGC0(%d) AGC1(%d)!!!
Measure[%4d]: cell id(%d) is removed!!!
Invalid RSRQ(%d)
Invalid RSRP(%d,%d,%d,%d)
Delete MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
Set default value (earfcn:%d, Cell ID:%d, RSRP:-204dBm, RSRQ:-40dBm for sub-antenna) due to invalid sub antenna
Abnormal intra-measurement case (AGC: 127)
ProcMeasTimerExpired - curMode(%d)
MeasureConfiguredflag(0x%02x)!!!
Invalid gL1LC_MeasInfo.curMode(%d)
Delete MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
[MTM] ProcMeasTimerExpired --> Skip sending Measure CNF!!!
IsDuringMeas is set as FALSE
ProcIratTimerExpired - curIratMode(%d)
ret_val!!
RF parameter not saved. Skip Return to LTE
[DRX, 4GDS] IratMeasTimer expired case (reset IsDuringGsmMeas:%d)
LAA meas for earfcn(%d) started too close to DMTC occasion - abort
SCC configuration check for measure using GAP(%d) (earfcn:%d %d)
GAP configured, SCC measure using GAP (earfcn:%d)
[L1LC_CheckScellFeasibility] cc,(%d), earfcn(%d)
Not supported band for SCC(earfcn:%d)
NCELL PBCH decoding is NOT used ANYMORE!!!
Not found available CC for earfcn(%d)
[DRX] Extend gL1LC_DrdsAbnormalCheckTmr (+L1LC_PBCH_TIMER_V)
[A-GAP]: PBCH of CSG Cell Decoded Successfully
Reset GNSS Time(H:%d, R:%d)
[RSTD] No Serving Cell Found in Assistance Data
Handover ul_freq(%d) time_diff(%d) beforeSFN(%d) afterSFN(%d)
Disable Cdrx as handover is on-going
(L1LC_ProcCellChangeReq)HALSC_SavedAfcValue:%d
Time diff(%d), old SFN(%d) restored SFN(%d)
RSRP(PC) = %d, gHALSC_PathLoss = %d
[RLM] OutSyncCnt (%d)
[LTE L1LC DSDS] RF Unavailable!!!!OOS Indication from L1 Ignored!!!
[RLM] InSyncCnt (%d)
[RLM] RLF Recovery
[RLM] RLMonitorCnt Reset
[RLM] RL result error
[LTE_L1LC] Already conn state. do not try remove DR band
[LTE_L1LC] RFBand of SCG STACK should be removed
Clear isNextPagingConflict
[RLM] N310(%d), N311(%d)
ERROR: curUeState(%d) invalid
[4G_DRDS] Already ConnDR_state: DR_ADDED
L1LC_ProcUeStateNtf(IPC_ACTION_ID_PHY_RX_SIB_PDSCH)Pb:%d
[RLM] N310(%d), N311(%d)
ERROR: Invalid UE State in NTF
L1LC_ProcL1txTxReq: TxReqType(%d), CurUeState(%d),CurMode(%d),CurIratMode(%d)
[IDLE state] curIratMode: IRAT(UMTS/GSM):Pending L1LC_L1TX_TX_CNF
[IDLE state] curMode: LTERRM_MEASMODE_NONE:
[IDLE state] curMode:INIT Measure, BPLMN Measure or CGI Measure(CurMode:%d)
[IDLE state] curMode:INTRA Freq Srch/meas
[IDLE state] curMode: INTER:Pending L1LC_L1TX_TX_CNF
UnExpected gL1LC_MeasInfo.curMode(%D)
(CONN State) SONANR(CGI ongoing): Pending L1LC_L1TX_TX_CNF
(CONN state) curMode: IRAT(UMTS/GSM):Pending L1LC_L1TX_TX_CNF
(CONN state) RACH (curMode: LTERRM_MEASMODE_NONE)
(CONN state) curMode:NONE or NORMAL:Send L1LC_L1TX_TX_CNF directly without L1LC-RRM interface
(CONN state) curMode:NONE or NORMAL:Send L1LC_L1TX_TX_CNF directly without L1LC-RRM interface
(CONN state) curMode: INTER:Pending L1LC_L1TX_TX_CNF
UnExpected gL1LC_MeasInfo.curMode(%D)
SET gRand_Acc_Tx_Cnf_Nop to TRUE
(CONN State) SONANR(CGI ongoing): Pending L1LC_L1TX_TX_CNF
(TxType:SR) Send L1LC_SendL1txTxCnf to L1TX without any action
Invalid TxReqType:%d
L1LC_ProcL2txTxReq
L1LC_ProcL2rxRxReq
Invalid Msg(L1TX_L1LC_DONE_IND)from L1TX(TxReqType:%d)
No Need to update SI info again
L1LC_UpdateSibSchedulingInfo: valid[%d] sfn[%d] tti[%d] periodicity[%d] si_bitmap[0x%x -> 0x%x]
Timer started for SIB12: Occassion[%d], Updated SIB Window [%d]
Timer started for other SIBs: Occassion[%d], Updated SIB Window[%d]
Timer started for %d ms
SIB occassion is nearby, take immediate action
No SIB scheduled: Invalid scenario
Sib_index[%d] siPeriodicity[%d] current_sfn_tti[%d] sfn_tti[%d] siWindow[%d]
temp_sfn_tti[%d]
1: Next SIB Occassion: Index : %d, Occassion: %d, Sib Window : %d
2: Next SIB Occassion: Index : %d, Occassion: %d, Sib Window : %d
Next SIB Occassion: Index : %d, Occassion: %d, Updated Sib Window : %d
is_filled[%d] siPeriodicity[%d] sibBitmap[0x%x]
SI update triggered by paging (ModPeriod: %d)
SI Update Timer Start (Current SFN : %d, si_update_sfn : %d, timer : %d)
Improper value of update_immediate
Improper value of update_immediate
Wakeup Modem and Execute L1LC_ProcSiReadReq
Process RRM_L1LC_MBSFN_SI_START_READ_REQ earfcn[%d] cc[%d]
Invalid cc[%d]
Wakeup Modem and Execute L1LC_ProcSiReadReq
Process RRM_L1LC_MBSFN_SI_STOP_READ_REQ earfcn[%d] cc[%d]
Invalid cc[%d]
ProcPendingForGap %d ms(offset:2 ms, preTimeInMs:%u ms)
L1LC pending <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> L1LC resume
ProcPendingForGap finish(curTimeInMs:%u ms)
ProcPendingForGap IratMeasTmr %d ms delay
Invalid gL1lc_BarredList.numOfbarredCell(%d)
Match BarredCell[%d] earfcn:%d, cell id:%d
Invalid gL1lc_BarredList.numOfbarredFreq(%d)
Match BarredFreq[%d] earfcn:%d
Invalid gL1lc_BarredList.numOfUnsuitableFreq(%d)
Match Unsuitable Freq[%d] earfcn:%d
%dms(<10ms) left until wakeup, so will wait for wakeup intr
(CONN State) SONANR(CGI ongoing): Pending SleepAbort
Wakeup already started, avoid sleep-abort
Current State:DRX(Idle or Connected): Wakeup Modem and Send %s
Wakeup already started, avoid sleep-abort
LteRrm_CheckSupportBand: NOT Supported DL_EARFCN %d!!!
LteRrm_CheckSupportBand: NOT Supported DL_EARFCN %d!!!
measMode(%d) is not related with the scheduling for LTE search!!!
measMode(%d) lastSrch(%d) HALSC_CurSrchCnt(%d)
3G IRAT response awaited.(gL1LC_IratUmtsMeasState=%d)
2G IRAT response awaited.(gL1LC_IratGsmMeasState=%d)
2G IRAT response awaited.(gL1LC_IratGsmVerifyState=%d)
CDMA IRAT response awaited.(gL1LC_IratCdmaMeasState=%d)
LTE inter-Meas ongoing
LTE Scell-Meas ongoing
IDLE -> Conn
Idle -> UE_RACHING, Stop Measurement
Disable SIB-DRX when RACH procedure is started
Scell sync can't be scheduled (curMode:%d, curIratMode:%d, lastIratMode:%d)
Intra sync can't be scheduled (curMode:%d, curIratMode:%d, lastIratMode:%d)
Invalid syncResult.Num(%d)
NR response awaited.(gL1LC_IratNrMeasState=%d)
Delete MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
Delete MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
L1LC_CheckMeasPending: MeasMode(%d)
Tx Path Recovery ON(Count(%d))
ProcRxModeChange: rx_mode(%d),edr/subdr(%d,%d)
ProcRxModeChange: Change not possible. cc(%d), rx_mode(%x, %x)
ProcRxModeChange: Change not possible. cc(%d),TdpState(%d)
ProcRxModeChange: cc(%d), rx_mode(%x, %x)
L1LC_ProcSetSfninfoNtf: time(%d), Sfn(%d)
[L1LC] L1LC_ReturnToLteMeasStop
[SADR] invalid measmode (%d)
[LTE L1LC DSL1RC] Saved message for SADR meas [mode:%d, earfcn:%d, time:%d]
[SADR] Source band CC0: %d - %d
[SADR] Source band CC1: %d - %d - %d
[SADR] Source band CC2: %d - %d - %d
[SADR] Source band CC3: %d - %d - %d
[SADR] Source band CC4: %d - %d - %d
[SADR] Source band - numofcell = %d
[SADR] findccidx = %d
[SADR] ++ Num of Scell
[SADR] Source band CC0: %d - %d
[SADR] Source band CC1: %d - %d - %d
[SADR] Source band CC2: %d - %d - %d
[SADR] Source band CC3: %d - %d - %d
[SADR] Source band CC4: %d - %d - %d
[SADR] Source band - numofcell = %d
[SADR] Source band CC0: %d - %d
[SADR] Source band CC1: %d - %d - %d
[SADR] Source band CC2: %d - %d - %d
[SADR] Source band CC3: %d - %d - %d
[SADR] Source band CC4: %d - %d - %d
[SADR] Source band - numofcell = %d
[4G_DRDS] Remove Scell: dl_earfcn(%d)
[4G_DRDS] Remove Scell: dl_earfcn(%d)
[SADR] Source band CC0: %d - %d
[SADR] Source band CC1: %d - %d - %d
[SADR] Source band CC2: %d - %d - %d
[SADR] Source band CC3: %d - %d - %d
[SADR] Source band CC4: %d - %d - %d
[SADR] Source band - numofcell = %d
[SADR] L1LC_SadrUpdateBandList = %d
[SADR] Do pended UpdateBandList, So, changed scell configured. So, first RF bandlist update should start.
Not configured scell for SADR
[SADR] Band was added for SADR IRAT measure
Can't Start Measure/Sync. So, SADR Measure(%d) Release
[%4d] SRCH_RESULT[%d] Sl_id(%3d) M0M1[%3d %3d] (pos:%d) (cp:%d)
[%4d] SRCH_RESULT[%d] Sl_id(%3d) CFO[%d] (pos:%d) (cp:%d)
[%4d] SRCH_RESULT[%d] Cell_id(%3d) M0M1[%3d %3d] (pos:%d) (cp:%d)
Do not set IsDuringMeas
IsDuringMeas is set as TRUE
IsDuringMeas is set as FALSE
measCnt is 0 (mode:%d, earfcn:%d, numOfCell:%d, measCnt:%d, nextMeasIndex:%d) - Enable(%d)
