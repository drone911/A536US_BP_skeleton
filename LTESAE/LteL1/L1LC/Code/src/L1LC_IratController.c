[L1LC] GAP Time is too short. IRAT MEAS is not triggered
[L1LC] IRAT MEAS SUCCESS: measure result - numOfCells:%d
Update framepos [toMmcFramePos(%d), HALSC_IratMeasList.frame_position(%d)]
CELL[%d] with rsrp[%d], rsrq[%d], best_rsrp[%d], rsrp_diff[%d] - removed...
[IRAT] LTE Measure report : CELL[%d] - cell_id:%d, rsrp:%d, rsrq:%d, rs_sinr:%d(Only NR), framepos(%d)
CELL[%d] with rsrp[%d], rsrq[%d], best_rsrp[%d], rsrp_diff[%d] - removed...
[IRAT] LTE Measure report : CELL[%d] - cell_id:%d, rsrp:%d, rsrq:%d, rs_sinr:%d(Only NR), framepos(%d)
No Suspend for Test
gL1LC_DrxState is NOT DRX_STATE_SUSPEND_MEAS
[U2L TEST] Found Target Cell (earfcn:%d, cell id:%d, index:%d)
[U2L TEST] Found Target Cell but not best (earfcn:%d, cell id:%d, index:%d)
[U2L TEST] NOT Found Target Cell (earfcn:%d, cell id:%d, index:%d)
[U2L TEST] U2L Cell Search Success Rate: %d%% (Total Cnt:%d, Fail Cnt:%d)
IRAT CELL is not valid.
GAP Time is too short. IRAT CELL Srch is not triggered.
IRAT CELL SRCH SUCCESS
search_result->Num ERROR (search_result->Num = %d)
[IRAT] LTE Search Report : cell id(%d), earfcn(%d), m0m1_power(%d, %d), frame_position(%d), cp_type(%d)
No Suspend for Test
gL1LC_DrxState is NOT DRX_STATE_SUSPEND_MEAS
IRAT CELL SRCH SUCCESS
[L1LC] L1LC_IratSrchReq (earfcn = %d)
[L1LC] L1LC_IratMeasReq (earfcn = %d, measBw = %d)
[L1LC] Invalid IRAT meas req
[L1LC] L1LC_IratProcLteTimingLatchReq is skip
[L1LC] LATCH~~!
Skip GSM Timing Latch due to Emodem off
gL1LC_IratlatchedTime sfn = %d, subframe num = %d, offset = %d
[L1LC] L1LC_IratProcLteAgcInitReq is skip
[L1LC] L1LC_IratProcLteAgcInitReq
[L1LC] L1LC_IratProcLteCellSearchReq is skip
Post AGC0 %d, AGC1 %d
Post AGC0 %d, AGC1 %d
[L1LC] L1LC_IratProcLteCellSearchReq(%d)
[SADR] pLTE_OHE->N2LMeasDuringDR = TRUE (%d)
[L1LC] This earfcn(%d) is not support
[L1LC] GAP Timing ERROR!!(Gap Start SFN:%d TTI:%d Offset:%d) (Cur SFN:%d TTI:%d Offset:%d)
[L1LC] L1LC_IratProcLteMeasReq is skip
LTE cell list is NULL... Please do the cell search!!!
Irat_FaInfo.AgcOvrAnt0:%d, Irat_FaInfo.AgcOvrAnt1:%d
Num Of Cell exceeds the Max Count
Num of Cell from source RAT is 0, LTE will send cnf to source rat(%d) and suspend.
Post AGC0 %d, AGC1 %d
[L1LC] L1LC_IratProcLteMeasReq(gL1LC_MeasInfo.curMode(%d), meas_bw(%d), AGC(%d,%d), numOfCell(%d)
[L1LC] This earfcn(%d) is not support
[SADR] pLTE_OHE->N2LMeasDuringDR = TRUE (%d)
failed to allocate N2L scell path for measure, LTE will send cnf to source rat(%d) and suspend.
[L1LC] GAP Timing ERROR!!(Gap Start SFN:%d TTI:%d Offset:%d) (Cur SFN:%d TTI:%d Offset:%d)
numOfFreqs is 0xff, DrxState is: %d ! isabnormal (%d)
[L1LC] L1LC_IratProcLteSearchMeasureReq is skip
[L1LC] L1LC_IratProcLteSearchMeasureReq(Source RAT:%d) - numOfFreqs:(%d) gL1LC_IratNumOfFreqs (%d)
[L1LC] L1LC_IratProcLteSearchMeasureReq : Num Freq is Out of range (%d)
[L1LC] Freq is mismatched between before(%d) and after(%d)
[L1LC] Freq is mismatched between before(%d) and after(%d)
[L1LC] freq num is matched (matchcnt %d gL1LC_IratTotalNumOfFreqs %d)
[L1LC] Freq num is same but, List is changed (matchcnt %d gL1LC_IratTotalNumOfFreqs %d)
[L1LC] gL1LC_IratTotalNumOfFreqs is zero : 1st try
[L1LC] gL1LC_IratSupportedBandSortedEarfcnCnt %d gL1LC_IratUnsupportedBandSortedEarfcnCnt %d req_count %d
gBplmStartPending is TRUE, so Don't suspend in srch/meas req
gL1LC_DrxState is NOT DRX_STATE_SUSPEND_MEAS
[L1LC] previous LTE earfcn %d L1LC_IratDb->gL1LC_MeasuredCnt %d
[L1LC] SIB is changed or 1st time!!
[L1LC] 1st list is previous LTE earfcn %d
[L1LC] ==== Received IRAT Earfcn list ====
[L1LC] Earfcn[%d]: %d
[L1LC] ==========================
[L1LC] Already measured earfcn(%d): %d
[L1LC] ==== IRAT Earfcn list to be measured soon ====
[L1LC] Earfcn[%d]: %d
[L1LC] ==========================
[L1LC] L1LC_IratProcLteSearchMeasureReq is skip by illegal EARFCN
gBplmStartPending is TRUE, so Don't suspend in srch/meas req
gL1LC_DrxState is NOT DRX_STATE_SUSPEND_MEAS
[L1LC] L1LC_IratProcLteMeasReselReq is skip
[L1LC] L1LC_IratProcLteReselectReq measPeriod:(%d), source_rat:(%d), gsmServingRssi:(%d), umtsServingRscp:(%d), umtsServingEcno:(%d), Plmn[0]:(0x%x), Plmn[1]:(0x%x)
[L1LC] ==== IRAT Earfcn list ====
[L1LC] Earfcn[%d]: %d
[L1LC] ==========================
[L1LC] L1LC_IratProcLteMeasReselReq is skip by illegal EARFCN
[L1LC] L1LC_IratProcLteMeasReq
[L1LC] L1LC_IratProcLteSrchResult(gL1LC_IratLteMeasState(%d))
IRAT CELL SRCH Failure(NO cell identified)
[U2L TEST] NOT Found Target Cell (earfcn:%d, cell id:%d, index:%d)
[U2L TEST] U2L Cell Search Success Rate: %d%% (Total Cnt:%d, Fail Cnt:%d)
gBplmStartPending is TRUE, so Don't suspend in IratSrchResult
gL1LC_DrxState is NOT DRX_STATE_SUSPEND_MEAS
search_result->Num ERROR (search_result->Num = %d)
[IRAT] LTE Search result : [cell id:%d]
IRAT CELL SRCH Failure(NO cell identified)(%d)
gBplmStartPending is TRUE, so Don't suspend in IratSrchResult
gL1LC_DrxState is NOT DRX_STATE_SUSPEND_MEAS
[L1LC] L1LC_IratProcLteMeasResult(Num.MeasResult:%d)
[IRAT] LTE Measure result: cell id(%d), rsrp(%3d), rsrq(%3d), rs_sinr(%3d)(Only NR)
gL1LC_DrxState is NOT DRX_STATE_SUSPEND_MEAS
gBplmStartPending is TRUE, so Don't suspend in IratMeasResult
gL1LC_DrxState is NOT DRX_STATE_SUSPEND_MEAS
gBplmStartPending is TRUE, so Don't suspend in IratMeasResult
gL1LC_DrxState is NOT DRX_STATE_SUSPEND_MEAS
L1LC_IratSortReselecCand ERROR (L1LC_IratDb->gL1LC_IratNumOfCell = %d)
[L1LC] L1LC_IratProcLteConEvalLegacy
Reselection cell info: earfcn:(%d), cell id(%d), rsrp(%d)> (%d)(resel Threshold)
Earfcn:(%d), Number of Cells:(%d)
Barred Cell:Earfcn:(%d), CellId:(%d)
[IRAT] LTE Measure report : earfcn(%d), cell id(%d), rsrp(%d), rsrq(%d), rs_sinr(%d)(Only NR)
[L1LC] LTEL1_MMC_LTE_SEARCH_MEASURE_CNF to MMC(rat:%d, cell num:%d, AGC(%d/%d))
gBplmnStartPendingStartTime: %d L1LC_IratDb->gBplmnStartPendingEndTime: %d time_diff: %d gBplmnStartPendingRcvdAvailTime: %d
BPLMN start pending time is not enough
[L1LC] L1LC_IratProcLteMeasStopReq
GSM measure stop!
[L1LC] L1LC_IratProcLteMeasStopReq : gL1LC_IratNrMeasState(%d)
gL1LC_DrxState is NOT DRX_STATE_SUSPEND_MEAS
L1LC_IratNcellTimingInfoUpdate(ratType:%d, afcPdm:%d)
umts timing difference(delta_offset:%d) comparision with LTE umts ref. timing
UTRAN NCELL[%d] (time_offset:%d) -> (time_offset:%d)
gsm timing difference(delta_Qbit:0x%X) comparision with LTE gsm ref. timing
GERAN NCELL[%d] (frameNumber:%d, Qb:%d) -> (frameNumber:%d, Qb:%d)
NR NCELL_id[%d] ssb_cnt[%d] period[%d] (time_offset:%d) -> (time_offset:%d)
Current LTE Timing(SFN:%d, TTI:%d, Offset:%d), gap_lastEndTime:%d, gap_interval:%d, margin:%d
The difference between current time and paging timing is %dms by TTI unit
The timing for AGAP(SFN:%d, TTI:%d, Offset:%d) is calculated.
IRAT LATCH REQ(LTE Current Time): SFN(%d), TTI(%d), OFFSET(%d)
Latch Fail:diffRtg(%d) diffLatch(%d)
Latch fail#(%d) >= L1LC_MAX_LATCH_COUNT(%d), Send UMTS SrchMeasReq with Wrong timning latch info
Latch Success:diffRtg(%d) diffLatch(%d)
IRAT LATCH CNF(UMTS Side): SFN(%d), SLOT(%d), CHIP(%d)
IRAT latch response is received, send Latch request for HO
pLatchCbFuncPara is NULL
%d times Latch fail, Send UMTS Timing Latch Again!!!
[L1LC] L1LC_IratUmtsCellSearchMeasureDone Called: Info.(Num of Freq:%d, Arfcn:%d, numOfRscpEcNoInfo:%d)
L2U measurement has been already stopped.
[L1LC] Num Freq = 0 :Delete MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
pMeasList[i].numOfRscpEcNoInfo(%d) > L1LC_RRM_MAX_MEAS_CNT
[IRAT] UMTS Measure result : index:%i, SRC code:%d, RSCP:%d, Ec/No:%d, RSSI:%d, FrameOffset:%d, newTimeOffset: %d
Delete MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
[L1LC] L1LC_IratUmtsTddCellSearchMeasureDone Called: Info.(Num of Freq:%d, Arfcn:%d, numOfRscpEcNoInfo:%d)
[L1LC] Num Freq = 0, Delete MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
pMeasList[i].numOfRscpEcNoInfo(%d) > L1LC_RRM_MAX_MEAS_CNT
[IRAT] UMTS Measure result : index:%i, SRC code:%d, RSCP:%d, RSSI:%d, FrameOffset:%d
Delete MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
TDSCDMA Cell Gap Start time: (sfn:%d, slot:%d, chip:%d)
LTEL1_MMC_UMTS_CELL_SEARCH_REQ(arfch:%d)
[L1LC] ProcUmtsPartialSearchReq(arfcn:%d, phase:%d)
pathList[%d] - offset(umts:%d, lte:%d)
[L1LC] UmtsTddPartialSearchReq(phase:%d, DominantSyncDlId:%d, frameOffset:%d)
[L1LC] UmtsTddPartialSearchReq(Cell Id[%d]:%d)
Abnormal phase state(%d): Try Phase0 !!!
[L1LC] numOfFrequencies(%d) arfcn(%d) numOfRscpEcNoInfo(%d)
[L1LC] Cell Id(%d)
measurement GAP length for L2T is adjusted from 5.5ms to 6.5 ms!!!
TDSCDMA Cell Gap Start time: (sfn:%d, slot:%d, chip:%d) gamma[%d] isUarfcnOnly[%d]
[L1LC] L1LC_IratProcUmtsPartialSearchDone Called: Info.(phase:%d, numOfPathes:%d, numOfRscpEcNoInfo:%d)
pathList[%d] - offset(umts:%d, lte:%d)
UmtsPartialSearch phase0 fail!!!
the step value of Phase(%d) is wrong!!!
[L1LC] L1LC_IratProcUmtsTddPartialSearchDone Called: Info.(phase:%d, Success:%d, numOfRscpEcNoInfo:%d, isUarfcnOnly:%d)
DominantSyncDlId[%d] frameOffset[%d]
Phase0 fail!!!
Phase 1 : Num of Cell[%d -> %d]
[L1LC] UmtsTddPartialSearchDone(Cell Id[%d]:%d)
Phase1 fail!!!
the step value of Phase(%d) is wrong!!!
UMTS Measure Setting - earfcn:%d, numOfCell:%d
TDSCDMA Cell Gap Start time: (sfn:%d, slot:%d, chip:%d)
LTEL1_MMC_UMTS_MEASURE_REQ(arfch:%d)
UMTS Measure Setting - earfcn:%d, numOfCell:%d
UMTS MeasureList[%d]
UMTS Cell Timing Offset: %d(LTE Side) to %d(UMTS Side) cell ID:%d, TimingOffset(sfn:%d, slot:%d, chip:%d)
Base for UmtsSiAcq timing(SFN:%d, TTI:%d, Offset:%d), Current LTE Timing(SFN:%d, TTI:%d, Offset:%d)
gap_lastEndTime:%d, gap_interval:%d, margin:%d
The difference between current time and UmtsSiAcq timing is %dms by TTI unit(marginForlastGap:%d)
The difference between UmtsSiAcq timing and Paging timing is %dms by TTI unit
Timing for UmtsSiAcq(period:%dms) shall be updated, due to the collision with Paging(period:%dms).
UmtsSiAcq(period:%dms) will be tried instead of the reception for PAGING(period:%dms), due to the collision.
The timing for AGAP(SFN:%d, TTI:%d, Offset:%d) is calculated.
Proc SelectTargetSibTypeForUmtsCgiAcq(SIB1:%d, SIB3:%d)
Difference with current time(SIB1:%dms, SIB3:%dms)
UtranSiAcquisitionMode(%d) for SIB is selected.
L1LC_IratUpdateTimingForUmtsCgiAcq Called(PagingInfo(period:%d, PF:%d, PO%d), UtraSiAcquisitionMode:%d)
UMTS CGI Cell Timing Offset: %d(LTE Side) to %d(UMTS Side)
The update for UmtsSiAcq timing is finished.(UtraSiAcquisitionMode:%d - SFN:%d, TTI:%d, Offset:%d)
The timing for SIB has been not updated yet.
UmtsCgiAcqReq Setting - measMode:%d, cellTimingOffset:%d, gapDuration:%d
L1LC_IratProcUmtsCgiAcquisitionDone Called(measModeInCnfMessage:%d, currMeasMode:%d, isSuccess:%d)
LteTimingInfo in LATCH procedure - sfn:%d, tti:%d, offset:%d)
UmtsTimingInfo in LATCH procedure - sfn:%d, slot:%d, chip:%d)
UmtsCgiAcquisitionCnf Info. - neededDuration[0]:%d, period[0]:%d, UmtsTimingInfo[0](sfn:%d, slot:%d, chip:%d)
UmtsCgiAcquisitionCnf Info. - neededDuration[1]:%d, period[1]:%d, UmtsTimingInfo[1](sfn:%d, slot:%d, chip:%d)
NextUmtsCgiAcquisition information for MIB - delta_rtg:%d, LteTimingInfo(sfn:%d, tti:%d, offset:%d)
NextUmtsCgiAcquisition information for SIB1 - delta_rtg:%d, LteTimingInfo(sfn:%d, tti:%d, offset:%d)
NextUmtsCgiAcquisition information for SIB3 - delta_rtg:%d, LteTimingInfo(sfn:%d, tti:%d, offset:%d)
utran_SI_AcquisitionForHO is finished as a success.
utra_SI_AcquisitionForHO(measMode:%d) was failed and will be retried.
utra_SI_AcquisitionForHO operation has been stopped.
utra_SI_AcquisitionForHO is suspended(UtraSiAcquisitionMode:%d, gL1LC_MeasSuspendForTxFlag:%d)
utra_SI_AcquisitionForHO operation is started.
Invalid UMTS meas_state(%d)
[GSM SCH TIMING CHECK] Update and Check GSM(arfcn:%d) cell time position
Post GSM cell time position(FrameNum:%d, Qb:%d, NetFrameNum:%d, delta_Qbit:%d)
Update GSM cell time position(FrameNum:%d, Qb:%d, NetFrameNum:%d)
Remain GSM cell time position(FrameNum:%d, Qb:%d, NetFrameNum:%d)
Gap start position: frame(%d), Qb(%d)
Gap end position: frame(%d), Qb(%d)
(MATCH!!!) SCH_ACQ_REQ will be transmitted
(NO MATCH) SCH_ACQ_REQ is delayed.
Set ratMode(%d) is invalid!!!
Required PreTime is insufficient.(ratMode:%d, spare RTG:%d, required RTG:%d)
L1LC_IratCheckGsmCellForRssi - numOfCell(0), return(%d)
L1LC_IratCheckGsmCellForRssi - needRssiMeas:%d
[GSM_FCH_ACQ] start the GsmFchAcquisition(arfcn:%d, rssi:%d)
GsmPauseProcedure for other IRAT measurement
GsmPauseProcedure for Inter E-UTRA measurement or NR Measurement
[GSM_SCH_ACQ] NextSchFrameNum:%d, FrameNumForPreGAP:%d
[GSM_SCH_ACQ] NextSchFrameNum(%d) should be postponed to %d GSM Frame!!!
[%s] LTEL1_MMC_GSM_TIMING_LATCH_REQ LTE LATCH: SFN(%d), TTI(%d), OFFSET(%d)
Skip RF Power down
Latch Fail:diffRtg(%d) diffLatch(%d)
Latch fail#(%d) >= L1LC_MAX_LATCH_COUNT(%d), Proceed GSM SrchMeas w/ wrong timning latch info
Latch Success:diffRtg(%d) diffLatch(%d)
IRAT LATCH(GSM): FRAME(%d), QBIT(%d)
Invalid IratGsmMeasState(%d)
GsmPauseProcedure for other IRAT measurement
Invalid IratGsmMeasState(%d)
[L1LC] L1LC_IratSendGsmMeasCnf: Arfcn(%d)
gL1LC GSM numOfCell > L1LC_MAX_MEAS_CNT
Delete MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
Start next IRAT measurement after processing GERAN measurement
L1LC_IratReturnToLTE: L1LC task sleep time(%d)
L1LC_IratGsmMeasPostProcessing: IratGsmMeasState (%d) IratGsmVerifyState (%d)
[DRX, 4GDS] Set measconfig as HALSC_MEAS_CONFIG_CONN_DRX as FCH or SCH done (reset IsDuringGsmMeas:%d)
GSM_RSSI_MEAS_REQ or GSM_FCH_ACQ_REQ or GSM_SCH_ACQ_REQ was hold!!!
In GSM_RSSI_MEASURE_REQ, numOfFrequencies are abnormal!!!
LTEL1_MMC_GSM_RSSI_MEASURE_REQ(FreqNum:%d, start(frame:%d, Qb:%d), delta_rtg:%d)
(IRAT_GSM_bandIndicator:%d) LTEL1_MMC_GSM_RSSI_MEASURE_REQ(FreqNum:%d, start(frame:%d, Qb:%d), delta_rtg:%d)
gL1LC_GsmCellInfo.cell[%d].arfcn(%d) != pMsg->frequencyList[%d].arfcn(%d)
[IRAT] GSM Measure result : arfcn(%d), rssi(%d dBm)(level: %d) GSM State: (%d
LTEL1_MMC_GSM_FCH_ACQ_REQ(arfcn:%d, start(frame:%d, Qb:%d), ref(frame:%d, Qb:%d), delta_rtg:%d)
LTEL1_MMC_GSM_FCH_ACQ_REQ(FchAcqTryNum:%d, arfcn:%d, start(frame:%d, Qb:%d), ref(fram:%d, Qb:%d), delta_rtg:%d)
LTEL1_MMC_GSM_FCH_ACQ_REQ_FOR_POWER_DOWN
L1LC_IratProcGsmFchAcqDone: FCH ACQ SUCCESS (arfcn:%d, ref-frame((%d), timeOffset(%d)) (recv:%d))!!!
L1LC_IratProcGsmFchAcqDone: FCH ACQ FAIL (arfcn:%d maxFbAcqTryNum:%d)!!!
NONEXISTENT GSM FCH!!! (maxFbAcqTryNum:%d)
L1LC_IratProcPreSCHAcqReq: arfcn(%d) frame_number is for SCH position! (%d) => (%d)
L1LC_IratProcPreSCHAcqReq: arfcn(%d) frame_number is for FCH position! (%d) => (%d)
LteRrmIdle_ScheduleNextSchPos fail!!
LTEL1_MMC_GSM_SCH_ACQ_REQ(arfcn:%d, start(frame:%d, Qb:%d), ref(frame:%d, Qb:%d), delta_qbit:%d, delta_rtg:%d)
Gap Start Position Ref(frame:%d, Qb:%d)
Gap End Position Ref(frame:%d, Qb:%d) -> Sch Start Position Ref(frame:%d, Qb:%d)
GSM_SCH_ACQ_TIME: %d
LTEL1_MMC_GSM_SCH_ACQ_REQ(arfcn:%d, start(frame:%d, Qb:%d), ref(frame:%d, Qb:%d), delta_qbit:%d)
GsmSchAcqInd timingOffset(%d) is invalid!!!
L1LC_IratProcGsmSchAcqDone: SCH ACQ SUCCESS (BSIC:%d, timeOffset:%d(%d), frameNumber:%d(net:%d), arfcn:%d, count:%d)!!!
L1LC_IratProcGsmSchAcqDone: SCH ACQ FAIL (arfcn:%d)(count:%d)!!!
IRAT LATCH REQ(LTE Current Time): SFN(%d), TTI(%d), OFFSET(%d)
CDMA_TIMING_LATCH_REQ to EVDO
CDMA_TIMING_LATCH_REQ to 1xRTT
Latch Fail:diffRtg(%d) diffLatch(%d)
Latch Success:diffRtg(%d) diffLatch(%d)
IRAT LATCH CNF(EVDO Side): latched evdo rtg (High: 0x%x Low: 0x%x)
IRAT LATCH CNF(1xRTT Side): latched 1xRTT rtg (High: 0x%x Low: 0x%x)
[L1LC] L1LC_IratSendCdmaMeasReq (%s)
[L1LC] msgToMmc.searchwindowSize is absent(set 15)
[L1LC] msgToMmc.neigh_cell_list[%d].phyCellIdCDMA2000[%d](%d)
[L1LC] bandClass(%d) arfcnCDMA2000(%d) numPhyCellIdCDMA2000(%d)
[L1LC][IDLE] gHAL_IratLatchTime.lteTime - current_time : deltaRtg(%d)
[L1LC] L1LC_IratSendCdmaMeasReq : deltaRtg(%d)
current sfn(%d), tti(%d), offset(%d) ipc delay(%d)
current sfn(%d), tti(%d), offset(%d) ipc delay(%d)
CDMA Gap Start time(IDLE): systemTime in chip high(0x%x) low(0x%x)
CDMA Gap duration time(IDLE): systemTime in chip high(0x%x) low(0x%x)
[L1LC] LTEL1_MMC_CDMA_MEAS_REQ to MMC(curIratMode:%d)
[L1LC] L1LC_IratSendCdmaMeasReqInConnGap (%s)
CDMA Measure Setting Cell list[%d] - bandClass:%d, arfcnCDMA2000:%d numPhyCellIdCDMA2000:%d
[CONN] phyCellIdCDMA2000[%d](%d)
[L1LC][CONN] gHAL_IratLatchTime.lteTime - HALSC_MeasSche.GapStartSfn/tti : deltaRtg(%d)
[L1LC] L1LC_IratSendCdmaMeasReqInConnGap : deltaRtg(%d)
CDMA Gap Start time(CONN): systemTime in chip high(0x%x) low(0x%x)
CDMA Gap duration time(CONN): systemTime in chip high(0x%x) low(0x%x)
L2D measurement has been already stopped.
Delete MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
[L1LC][CDMA] Num Freq ==0 : Send RrmMesureCnf and Return with FAILED measResult
Support num freq is 1
pMeasList[i].numNeighCellInfo(%d) > MMC_MAX_CDMA_MEAS_CELL
[IRAT] CDMA Measure result : arfcn(%d), cell_id(%d), rsrp(%d), pnPhase(%d)
[L1LC] L1LC_IratSendNrResumeSusPendReq : abnormal type(%d)
IRAT NR RESUME/SUSPEND REQ: Type(%d), (LTE Current Time : SFN(%d), TTI(%d), OFFSET(%d))
IRAT LATCH(NR): latchTime(%d), sfn(%d), subframe(%d), offset(%d)
[L1LC] L1LC_IratProcNrResumeSuspendCnf: type(%d)/*0:suspend, 1:resume, 2:L2N meas config release*/, result(%d)
[L1LC] Delete MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
[L1LC] L1LC_IratProcNrResumeSuspendCnf: skip ResumeCnf procedure in gL1LC_IratNrMeasState(%d)
[L1LC] MeasStopCnf was pended because it was waiting for L2N suspend cnf. gL1LC_MeasStopCnfPending(%d)
[L1LC] L1LC_IratProcNrResumeSuspendCnf: skip SuspendCnf procedure in gL1LC_IratNrMeasState(%d)
[L1LC] L1LC_IratSendNrSrchMeasPbchReq: measMode(%d)
[NRDS] L1LC_IratSendNrSrchMeasPbchReq: Remove DR BAND!
LTERRM_MEASMODE_NR_SYNC: Timer length=%d
[L1LC] L1LC_IratSendNrSrchMeasPbchReq : unexpected measMode(%d)
[L1LC] L1LC_IratSendNrSrchMeasPbchReq : L2N GAP search/measure was triggered
[L1LC] L1LC_IratSendNrSrchMeasPbchReq : L2N Scell search/measure was triggered
[L2N] RF not support, L2N gap
[L2N] LTE is holding NR dedicated RF path as 4rx diversity path, so 4RX release is available for L2N scell measure
[L2N] MIXER not support, L2N gap
LTEL1_MMC_LEGACY_MEASURE_REQ(arfcn: %d)
[L1LC] L1LC_IratLegacyUmtsMeasureDone Called: Arfcn(%d)
pMeasList->NumOfCell(%d) > L1LC_RRM_MAX_MEAS_CNT
Max Neighbour cell number is over (%d)
[IRAT] UMTS Measure result : Arfcn(%d), Cell id(%d), ECNO:%d(%d), RSCP:%d(%d), RSSI:%d(%d)
Delete MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
LTEL1_MMC_LEGACY_MEASURE_REQ(arfcn: %d)
[L1LC] L1LC_IratLegacyGsmMeasureDone Called: Arfcn(%d)
pMeasList->NumOfCell(%d) > L1LC_RRM_MAX_MEAS_CNT
Max Neighbour cell number is over (%d)
[IRAT] GSM Measure result : arfcn(%d), rssi(%d dBm)(level: %d)
Delete MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
Not supported source RAT
[L1LC] L1LC_IratProcHedgeModeInd Invalid LTE MODE(%d)
L1LC_IratProcLteL1StartDrxInfoShareInd ====> pHALDRX_Db->gDrx_BplmnSrchStartLteActive = TRUE-> SrchOnRat == %s;
L1LC_IratProcHedgeLteL1BplmnSrchStartInd
BPLMN Start (Don't Sleep)
Invalid UMTS meas_state(%d)
Invalid gL1LC_DualRat(%d)
Invalid UMTS meas_state(%d)
Invalid gL1LC_DualRat(%d)
Invalid GSM curMeasIdx(%d)
Invalid GSM meas_state(%d)
Invalid gL1LC_DualRat(%d)
GsmPauseProcedure for other IRAT measurement
Invalid GSM curMeasIdx(%d)
GsmPauseProcedure for other IRAT measurement
GsmPauseProcedure for other IRAT measurement
Invalid GSM meas_state(%d)
Invalid gL1LC_DualRat(%d)
Invalid GSM curMeasIdx(%d)
Invalid GSM meas_state(%d)gL1LC_MeasInfo.prevMode(%d)gL1LC_MeasInfo.curIratMode(%d)
Invalid gL1LC_DualRat(%d)
GsmPauseProcedure_IRAT_L1LC_StartMeas
GsmResumeProcedure for FB/SB identity
GsmPauseProcedure for other IRAT measurement
Invalid GSM curMeasIdx(%d)
Invalid GSM meas_state(%d)
Invalid gL1LC_DualRat(%d)
Invalid CDMA meas_state(%d)
Invalid gL1LC_DualRat(%d)
L1LC_IratProcNrMeas: gL1LC_IratNrMeasState(%d)
Invalid NR meas_state(%d)
L1LC_IratProcIratSrchMeas(curMode:%d, curIratMode:%d, SearchConfiguredflag:0x%x, MeasureConfiguredflag:0x%x)
L1LC_IratProcIratSrchMeas( Invalid curIratMode:%d)
L1LC_IratProcIratSrchMeas( Invalid curIratMode:%d)
Do not select UMTS measurement object since the previous UMTS activity is not completed
Do not select GSM measurement object since the latch confirmation is pending from GSM
Default handler Mode (%d)
Do not start IratGsmMeas due to PauseFlag
[LTE_DSDS] Set FchAcqTryNum as 0
Do not start IratGsmMeas since latch confirmation is pending from GSM
Do not start IratGsmMeas due to PauseFlag
Do not start IratGsmMeas since latch confirmation is pending from GSM
Do not start IratGsmMeas since latch confirmation is pending from GSM
Do not start IratCdmaMeas due to PauseFlag
Do not start IratNrMeas due to PauseFlag
meas_mode is invalid(%d)
Do not start IratUmtsMeas since latch confirmation is pending from UMTS
Do not start IratUmtsMeas due to PauseFlag
[LTE_DSDS] Do not select UMTS measurement object since the previous UMTS activity is not completed
L1LC_IratProcIratSrchMeas( Invalid curIratMode:%d)
Dont release RF due to Page or Signaling mask set: %d
Previous UMTS activity is not completed, do not release RF
[LTE L1LC] Pause will be performed as part of EPT expiry handling
L1LC_IratProcIratSrchMeas(curMode:%d, curIratMode:%d, SearchConfiguredflag:0x%x, MeasureConfiguredflag:0x%x)
remain time to other stack WakeupIntrTimer (%d)
remain time to other stack PagingReqTimer (%d)
[LTE L1LC DSL1RC] [4G_DRDS] Remain time to other stack's paging timing (%d)
[LTE_DSDS] Set FchAcqTryNum as 0
[LTE_DSDS] %s(max_irat_meas_time %d)
meas_mode is invalid(%d)
meas_mode is invalid(%d)
[L2N_GAP] Gap time was updated cause GAP SFN TTI was past value. CurSFN/TTI(%d), GapSFN/TTI(%d)
function : %s : Mode (%d)
[IRAT] L1LC_IratSetNrMeasPara: mode(%d)
[IRAT] L1LC_IratSetNrMeasPara: mode(%d)
numOfCell is NULL
IratSetGsmMeas(Arfcn:%d, BSIC:%d, NetFrameNum:%d, RefFrameNum:%d, timingOffset:%d, GsmCellState:%d)
numOfCell is NULL
IratSetGsmVerify(Arfcn:%d, BSIC:%d, NetFrameNum:%d, RefFrameNum:%d, timingOffset:%d, GsmCellState:%d)
[LTE_DSDS] Do not start IRAT Meas mode: (%d) due to nearby e.p.t or nearby paging
L1LC_IratCheckGsmMeasFeasibility (meas_mode : %d)
Send GSM_MEAS_CNF as nothing is pending
Send GSM_MEAS_CNF as nothing is pending
Send GSM_MEAS_CNF as nothing is pending
gL1LC_IratGsmMeasState is invalid(%d)
L1LC_IratCheckGsmVerifyFeasibility (meas_mode : %d)
Send GSM_MEAS_CNF as nothing is pending
Send GSM_MEAS_CNF as nothing is pending
gL1LC_IratGsmMeasState is invalid(%d)
[LTE_DSDS] IratUmtsMeasState: %d, RAT_type: %d, MinRequiredTime: %d
[LTE_DSDS] IratGsmMeasState: %d, MinRequiredTime: %d
[L1LC] L1LC_ReturnToLtePartialSearchDone
Signalling grant required for other stack when current stack 2G measurements ongoing under signalling cause
[LTE_DSDS] Set FchAcqTryNum as 0
[DRX] Need to delay time for DSP power down (IRAT on/off time diff:%d(MicroSec)
[L1LC] L1LC_IratProcLteSrchReq
[L1LC] L1LC_IratProcLteEvaluation
Reselection cell info: earfcn:(%d), cell id(%d), rsrp(%d)> (%d)(resel Threshold)
