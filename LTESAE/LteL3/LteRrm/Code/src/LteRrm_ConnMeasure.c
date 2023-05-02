LteRrmConn_InitMeasConfigList
LteRrmConn_FreeMeasConfigList
LteRrmConn_InitReportStatus pMeas is NULL
LteRrmConn_InitReportStatus(measId:%d)
LteRrmConn_InitAllReportStatus
LteRrmConn_InitAllOngoingFlag
LteRrmConn_InitMeasScheduler(keepSCellSchedOrder:%d)
LteRrmConn_SetNrScheduleInfoBU(%s)
LteRrmConn_ForcedInterFreqSchedule - already done
LteRrmConn_ForcedInterFreqSchedule - no Inter-Freq
LteRrmConn_ForcedUtraFreqSchedule - no Utra-Freq
LteRrmConn_ForcedUtraFreqSchedule
- utraFreqSrchCycle(%d) utraFreqMeasCycle(%d) intraFreqSrchCycle(%d)
- interFreqSrchCycle(%d) interFreqMeasCycle(%d)
- ScellFreqSrchCycle(%d) ScellFreqMeasCycle(%d)
- geranFreqMeasCycle(%d) geranFreqIdentifyCycle(%d) geranFreqVerifyCycle(%d)
- cdmaFreqMeasCycle(%d)
- nrFreq(%d) FreqSrchCycle(%d) FreqMeasCycle(%d)
LteRrmConn_RestoreMeasSchedule (bnewInterFreqFlag:%d bUtraForcedMeas:%d)
LteRrmConn_InitSCellMeasScheduler
InitSCellMeasScheduler - search(%d), meas(%d)
LteRrmConn_StartMeas(basicCycleCnt:%d)(isFirst:%d_%d)
Skip short measure cycle
Skip measure cycle due to Restore
ConnMeasSuspendForTx(%d), PBCH mode(%d), Stationary(%d). Only IntraF Meas can be started
Only IntraF Meas can be started after C-DRX wakeup
Skip all IRAT scheduling for ENDC(%d), DL(%d), UL(%d)
Do not skip IRAT scheduling for ENDC(%d), DL(%d), UL(%d)
Inter-RAT Measurement is skipped due to utra_SI_AcquisitionForHO(CgiState:%d, CgiMeasType:%d)
Skip NR search/measure due to bTempCtrl(%d)
MeasID(%d), ObjectID(%d), ReportId(%d), Choice(%d), Purpose(%d), ReportAmount(%d), Removed this periodic meas(%d)
Intra freq, LTERRM_REPORT_EUTRA_STRONGEST_CELLS meas. config found
MeasID(%d), ObjectID(%d), ReportId(%d), Choice(%d), Purpose(%d), ReportAmount(%d), Removed this periodic meas(%d)
LTERRM_REPORT_NR_STRONGEST_CELLS meas. config found
Normal Inter Freq Handover Update Meas List(%d, %d, %d, %d)
Blind Inter Freq Handover Update Meas List(%d, %d, %d, %d)
(No Intra Object) Inter Freq Handover Update Meas List(%d, %d, %d, %d)
Do Not change Meas List(%d, %d, %d, %d)
remove IRAT(%d) MID(%d)
object(arfcn:%d) is modified
remove Intra_MID(%d)
EUTRA object(earfcn:%d) is modified
Initialized Pcell IndOff (%d -> 0)
remove SCell_MID(%d)
SCell(ID:%d, earfcn=%d is added in ScellmeasList
remove InterMeas_MID(%d)
EUTRA object(earfcn:%d) is modified
Initialized Pcell IndOff (%d -> 0)
Remove exhausted MID(%d)
IntraFreq NULL
Initialized Pcell IndOff (%d -> 0)
SCell cycle : Srch(%d), Meas(%d)
Warning! eICIC bitsize(%d) not compatible with spec (20/40/60/70)
measSubframePatternNeigh(intRA): eICIC mode(%d), bitsize(%d)
Warning! measSubframeCellList is not configured
Update meas pattern Neigh in IntraFreq
index(%d), earfcn:%d, mID:%d
Remove MeasList(mID:%d, earfcn:%d)
pTempElem is NULL
not matched MeasList(mID:%d, earfcn:%d)
Cannot Allocate FreqInfo buffer(%d)
SCell cycle : Srch(%d), Meas(%d)
Warning! eICIC bitsize(%d) not compatible with spec (20/40/60/70)
measSubframePatternNeigh(SCell): eICIC mode(%d), bitsize(%d)
Warning! measSubframeCellList is not configured
Update meas pattern Neigh in pFreqInfo for SCell
pFreqInfo NULL
Cannot Allocate FreqInfo buffer(%d)
SCell cycle : Srch(%d), Meas(%d)
Warning! eICIC bitsize(%d) not compatible with spec (20/40/60/70)
measSubframePatternNeigh(intER): eICIC mode(%d), bitsize(%d)
Warning! measSubframeCellList is not configured
pFreqInfo NULL
Cannot Allocate FreqInfo buffer(%d)
pFreqInfo NULL
Cannot Allocate FreqInfo buffer(%d)
pCellInfo is NULL as a result of LteRrm_AllocCellInfoBuf()
pFreqInfo NULL
Cannot Allocate FreqInfo buffer(%d)
object->num_of_neigh_cells(%d)
cdma2000_cell_id(%d)
Cannot Allocate FreqInfo buffer(%d)
LteRrmConn_SetNrFreqObject : subcarrier_spacing %d meas_timing_present %d periodicity %d offset %d ssb_duration %d
sftd_num(%d) is more than LTE_MAX_CELL_SFTD(3)!!!
LteRrmConn_SetNrFreqObject : sftd_num %d cellsForWhichToReportSFTD %d
>>SsbToMeasurePresent is present - NumSsbToMeasure:%d SsbToMeasure:[1]0x%08x[0]0x%08x
>>SsbToMeasurePresent is not present - NumSsbToMeasure:%d SsbToMeasure:[1]0x%08x[0]0x%08x
LTE_MEAS_EUTRA_OBJECT (MeasId :%d Obj ID: %d Obj type: %d freq: %d RSRQ-WB:(%d) Sfreq: %d)
in LTERRM->Set.pSCellMeasList(%d)(earfcn=%d)
LTE_MEAS_UTRA_OBJECT (MeasId :%d Obj ID: %d Obj type: %d(%d) freq: %d Sfreq: %d)
LTE_MEAS_GERAN_OBJECT (MeasId :%d Obj ID: %d Obj type: %d freq: %d Sfreq: %d)
LTE_MEAS_CDMA_OBJECT (MeasId :%d Obj ID: %d Obj type: %d(%d) freq: %d Sfreq: %d)
LTE_MEAS_NR_OBJECT (MeasId :%d Obj ID: %d Obj type: %d freq: %d Sfreq: %d)
pCurElem(%d) or obj(%d) is NULL
LteRrmConn_CastEventTriggerType rpt is NULL
UnKnown Cast Type(%d)
LteRrmConn_CastIratEventTriggerType rpt is NULL
UnKnown Cast Type(%d)
LteRrmConn_CastTriggerQuantity rpt is NULL
UnKnown Cast Type(%d)
LteRrmConn_CastReportQuantity rpt is NULL
UnKnown Cast Type(%d)
LteRrmConn_CastReportPurpose rpt is NULL
UnKnown Cast Type(%d)
LteRrmConn_CastReportPurposeV1430 rpt is NULL
UnKnown Cast Type(%d)
LteRrmConn_CastIratReportPurpose rpt is NULL
UnKnown Cast Type(%d)
pCurElem(%d), rpt(%d) is NULL
add earfcn(%d_%d) report_add_neigh_meas(%d) TxDiff(%d) Rpt Config
- alt_time_to_trigger_setup(%d) alt_time_to_trigger(%d)
add SCell(%d) Rpt Config
maxReportCells:%d, reportInterval:%d, reportAmount:%d, triggerQuantity:%d, reportQuantity:%d
rpt_id:%d, eventId:%d, hysteresis:%d, timeToTrigger:%d
report_sstd_meas:1
eNB error! report_sstd_meas:1 but need to check belows
- report_amount(%d), trigger_choice(%d), purpose(%d)
MeasRSSI-ReportConfig: channelOccupancyThresh(%d)
LTERRM_EVENT_A1: threshold_type(%d) is invalid
A1 threshold type:%d, A1 threshold value:%d
LTERRM_EVENT_A2: threshold_type(%d) is invalid
A2 threshold type:%d, A2 threshold value:%d
A3 offset:%d*0.5, OnLeave(%d), usePSCell:%d
[HST_Event A3] change Hyst as 1dB, Offset as 3dB
purpose_v1430_setup:%d purpose_v1430:%d maxReportRS_Index:%d
LTERRM_EVENT_A4: threshold_type(%d) is invalid
A4 threshold type:%d, A4 threshold value:%d
purpose_v1430_setup:%d purpose_v1430:%d maxReportRS_Index:%d
LTERRM_EVENT_A5: threshold_type(%d) is invalid
LTE_MEAS_UTRA: threshold_type(%d) is invalid
A5 threshold type1:%d, A5 threshold value1:%d, A5 threshold type2:%d, A5 threshold value2:%d, usePSCell:%d
purpose_v1430_setup:%d purpose_v1430:%d maxReportRS_Index:%d
A6 offset:%d*0.5 OnLeave(%d)
periodical report purpose:%d
LTE_MEAS_UTRA: B1 threshold_type(%d) is invalid
LTE_MEAS_UTRA: B1 rat_type:%d, threshold type:%d, B1 threshold value:%d
LTE_MEAS_GERAN: B1 threshold type:%d, B1 threshold value:%d
LTE_MEAS_CDMA2000: B1 threshold value:%d
LTE_MEAS_NR: B1 threshold_type(%d) is invalid
LTE_MEAS_NR: B1 rat_type:%d, threshold type:%d, B1 threshold value:%d
LTERRM_EVENT_B2: threshold_type(%d) is invalid
B2 threshold1 type:%d, B2 threshold1 value:%d
LTE_MEAS_UTRA: B2 threshold_type(%d) is invalid
LTE_MEAS_UTRA: B2 rat_type:%d, threshold2 type:%d, B2 threshold2 value:%d
LTE_MEAS_GERAN: B2 threshold2 type:%d, B2 threshold2 value:%d
LTE_MEAS_CDMA2000: B2 threshold2 value:%d
LTERRM_EVENT_B2NR: threshold1_type(%d) is invalid
LTERRM_EVENT_B2NR: threshold2_type(%d) is invalid
LTE_MEAS_NR: B2 threshold1 type:%d, B2 threshold1 value:%d, B2 rat_type:%d, threshold2 type:%d, B2 threshold2 value:%d
pCurElem(%d), rpt(%d) is NULL
maxReportCells:%d, reportInterval:%d, reportAmount:%d
report_qty_cell_present:%d, report_rs_index_resultNr:%d, report_qty_rs_index_present:%d, report_sftd_meas_present:%d
reportQuantityCellNR RSRP:%d, RSRQ:%d, SINR:%d
reportQuantityRS-IndexNR RSRP:%d, RSRQ:%d, SINR:%d max_rs_index_report:%d
report_sftd_meas:(%d)
eNB error! report_sftd_meas is valid but need to check belows
- report_amount(%d), trigger_choice(%d), purpose(%d)
rpt_id:%d, eventId:%d, hysteresis:%d, timeToTrigger:%d
IRAT periodical report purpose:%d
pCurElem(%d) or rpt(%d) is NULL
Cannot Allocate MeasList buffer
LteRrmConn_AddMeasList obj(%d) or rpt(%d) is NULL
LteRrmConn_RemoveMeasList pMeasList is NULL
- Timing info not sufficient --> SSTD report is pending
- Timing info not sufficient --> SSTD report is pending
- Timing info not sufficient --> SSTD report is pending
LteRrmConn_UpdateSstdState: Init reportSstd
invalid GAP pattern :%d
Invalid Gap Pattern(%d)
LteRrmConn_UpdateMeasScheduleVariable(DrxEnable:%d, DrxCycle:%d, N_freq:%d)
N_freq info. - ScellFreqNum:%d, InterFreqNum:%d, UtraFreqNum:%d, CdmaFreqNum:%d, NrFreqNum:%d, M_gsm:%d)
Conn DRX ignored : invalid DRX cycle (%d ms)
MeasListSftd is invalid!!!
LteRrmConn_CheckSftdCond - sftdMode:%d, EndcActiveFlag:%d, sftd_num:%d, earfcn:%d, subcarrier_spacing:%d, periodicity:%d)
LteRrmConn_CheckSftdCond(SFTD_PSCELL) : pFreqInfo is NULL
LteRrmConn_CheckSftdCond(SFTD_PSCELL) : pCellInfo is NULL
LteRrmConn_CheckSftdCond(SFTD_NEIGHBOR) : pFreqInfo is NULL
LteRrmConn_CheckPendingForSftd - sftdMode:%d, EndcActiveFlag:%d, sftd_num:%d, numOfCellsInRportList:%d)
>> CellsInRportList[%d] - arfcn:%d, cell_id:%d, isUpdateSftdResult:%d
>> CellsInRportList[%d] - arfcn:%d, cell_id:%d, isUpdateSftdResult:%d
>> CellsInRportList[%d] - arfcn:%d, cell_id:%d, isUpdateSftdResult:%d
LteRrmConn_UpdateSftdState - report_sftd_meas(%d)
LteRrmConn_UpdateSftdState: Init reportSftd
LteRrmConn_UpdateMeasConfig msg is NULL
[MEAS CONFIG 1st] Remove MeasId
[MEAS CONFIG 2nd] Arrange MeasId
[MEAS CONFIG 3rd] Add MeasId
IntraFreq NULL
num_start_meas_ids is zero!!
Number of carriers other than GSM: %d
Number of carriers other than GSM is not required!!!(%d -> 5)
rsrqOnAllSymbols-r12 enable
quantityConfigEUTRA - fc_rsrp:%d, fc_rsrq:%d, fc_rssinr:%d
quantityConfigUTRA - measQuantity:%d, fc:%d
quantityConfigGERAN - measQuantity:%d, fc:%d
quantityConfigCDMA - measQuantity:%d
measQuantityCellINR - FC_Rsrp:%d, FC_Rsrq:%d, FC_Sinr:%d
measQuantityRS-IndexNR - FC_Rsrp:%d, FC_Rsrq:%d, FC_Sinr:%d
speedDepParam received
- t_eval(%d) t_hyst(%d), nMed(%d), nHigh(%d)
ConnMeasConfig.sMeasure:%d, fc_rsrp:%d, filter_alpha_rsrp:%d
LteRrmConn_ProcMeasConfigReq msg is NULL
Receive LTE_CPHY_MEAS_CONF_REQ Msg(removeMID num:%d, addMID num:%d)
LteRrmConn_ProcCsgProximityMeasConfigReq msg is NULL
Receive LTE_CPHY_CSG_PROXIMITY_MEAS_REQ Msg
Mid:%d, ObjId:%d (RAT:%d, earfcn:%d), RptId:%d
Skip fast search
measTrig[%d] LastMeasTime:%d, curTimeInMs:%d, interval:%d, cycle:%d
IntraMeasList(%d) is Empty
LteRrmConn_CheckIntraFreqMeas: CONN_ONLY_SERV(IntraFreq is NULL)
LteRrmConn_CheckIntraFreqMeas: PrimaryCell is NULL
Intra Freq Measure is already exist!!!
LteRrmConn_CheckIntraFreqMeas: CONN_ONLY_SERV(sMeasure:%d, rsrp:%d)
- DMTC not occurred -> Trigger Serving Meas Only
SIM CHECKED : Don't Change Srch Cycle
srchCycle set to MIN_INTRA_SRCH_CYCLE(%d) (LteRrmConn_CheckPeriodicStrongestIntraFreqListInMeasConf is TRUE)
srchCycle set to MIN_INTRA_SRCH_CYCLE(%d) (max cinr:%d)
VoLTE ACTIVE: Intrafrequency measCycle set from %dms to %dms (cinr:%d)
VoLTE ACTIVE: Intrafrequency measCycle is %dms (cinr:%d)
VoLTE ACTIVE: Intrafrequency srchCycle set from %dms to %dms (cinr:%d)
VoLTE ACTIVE: Intrafrequency srchCycle is %dms (cinr:%d)
CheckMeasCycle: IntraFreq Search
CheckMeasCycle: IntraFreq Measure
Triggered SRCH(%d) and MEAS(%d) due to ECID
Inter(%d)/SCell(%d) Freq Search is already exist!!!
Intra Freq Search is already exist!!!
Intra Freq Measure is already exist!!!
IC srchCycle set to MIN_INTRA_SRCH_CYCLE(%d) (LteRrmConn_CheckPeriodicStrongestIntraFreqListInMeasConf is TRUE)
srchCycle set to MIN_INTRA_SRCH_CYCLE(%d) (max cinr:%d)
CheckMeasCycle: IntraFreq IC-Search
Intra(%d)/Inter(%d)/SCell(%d) Freq Search is already exist!!!
LteRrmConn_CheckSCellMeas 1: CONN_NONE
LteRrmConn_CheckSCellMeas - no SCellMeasList but SCellFreqSet
LteRrmConn_CheckSCellMeas 2: CONN_NONE
LteRrmConn_CheckSCellMeas - SCellMeasList but no SCellFreqSet
LteRrmConn_CheckSCellMeas 4: CONN_NONE
LteRrmConn_CheckSCellMeas 3: CONN_NONE
LteRrmConn_CheckSCellMeas : Scell is not configured
CheckMeasCycle: Secondary Cell Freq Search
SCell search skip - Intra(%d)/Inter(%d)/Scell(%d) Freq Search already scheduled!!!
CheckMeasCycle: Secondary Cell Freq Measure
Secondary Cell Freq Measure is already exist!!!
LteRrmConn_CheckInterFreqMeas 1: noGAP & ScellScheduled
LteRrmConn_CheckInterFreqMeas 1: noGAP & ScellScheduled
LteRrmConn_CheckInterFreqMeas : noGAP & noScellScheduled
LteRrmConn_CheckInterFreqMeas 2: noGAP & InterFreqScheduled
LteRrmConn_CheckInterFreqMeas : noGAP & noInterFreqScheduled
DMTC meas scheduled -> Gap meas for inter-freq suspended
LteRrmConn_CheckInterFreqMeas : GAP & noScellScheduled
LteRrmConn_CheckInterFreqMeas 3: CONN_NONE
CheckMeasCycle: InterFreq Search
InterFreq Search is already scheduled!!!
LteRrmConn_CheckInterFreqMeas : IntraFreq Search is already scheduled
CheckMeasCycle: InterFreq Measure
InterFreq Measure is already exist!!!
All SCC activated - Skip LAA inter meas
Scell srch(%d) meas(%d) already scheduled!!! - Skip LAA inter meas
Inter with SCC srch(%d) meas(%d) already scheduled!!! - Skip LAA inter meas
Intra(%d)/Inter(%d)/Scell(%d) Search already scheduled!!! - Skip LAA inter meas
CONN_NONE: gap(%d), conn drx(%d)
CheckMeasCycle: Utra Search
CheckMeasCycle: Utra Measure
Utra Search/Measure is already exist!!!
CONN_NONE: gap(%d), conn drx(%d)
CheckMeasCycle: Geran Identify
CheckMeasCycle: Geran Measure(cycle:%d, M_gsm:%d)
CheckMeasCycle: Geran Verify
Geran Measure is already exist!!!
Geran Verify is already exist!!!
CdmaSystemTimeFlag(%d) is not valid, Not schedule CDMA meas.
CONN_NONE: gap(%d), conn drx(%d)
CheckMeasCycle: Cdma Measure
Cdma Measure is already exist!!!
LteRrmConn_CheckNrFreqMeas : pNrMeasList
LteRrmConn_CheckNrFreqMeas : pNrFreq
CheckMeasCycle: NR(%d) Search(current total count : %d)
CheckMeasCycle: NR(%d) Measure(current total count : %d)
>>newCellDetectedState:%d
Conn Intra-SelectedMode(%d), SrchCycle(%d), MeasCycle(%d)
Conn Intra(earfcn:%d) IC search starts
[SCELL]invalid MeasType(%d)
[SCELL]invalid MeasType(%d)
Conn Scell-SelectedMode(%d), SrchCycle(%d), MeasCycle(%d)
LteRrmConn_StartScellMeasOperation : Scell is NULL
LteRrmConn_StartScellMeasOperation : Scell(%d) has correct timing info(%d, CINR=%d)
LteRrmConn_MeasListFindEarfcn : ScellMeasList is NULL, pTempMeasFreq->earfcn(%d)
WARNING: NOT Supported DL_EARFCN %d!!!
Block Meas for U-band deactivated SCell (earfcn:%d, measDS_setup:0)
ConnSchedule.pCurSrchSCellFreq NULL
WARNING: NOT Supported DL_EARFCN %d!!!
WARNING: NO SCell found on EARFCN:%d
SCell Timing Not acquired yet(EARFCN:%d) -> Meas skip
Offer SCC meas opportunity to LAA scheduler
Block Meas for U-band deactivated SCell (earfcn:%d, measDS_setup:0)
ConnSchedule.pCurMeasSCellFreq NULL
Start Measurement: Scell Frequency (earfcn:%d, mode:%d)
SCell(earfcn=%d) is activated then use SCC RF path (suspendforTx:%d)
SCell(earfcn=%d) is configured
ScellInitSrchCnt(%d)
Warning!! SCellMeasList(0x%X) NULL or empty - LteRrmConn_StartLaaScellMeasOperation
Warning!! - no SCellMeasList but SCellFreqSet
Warning!! SCellFreqSet(0x%X) NULL or empty - LteRrmConn_StartLaaScellMeasOperation
Warning!! - no SCellFreqSet but SCellMeasList
no gap and ongoingSrchInterFlag(%d) or ongoingMeasInterFlag(%d)
Warning!! Scell is not configured
LAA SCell meas skip - Intra(%d)/Inter(%d)/Scell(%d) Search or SCell Meas(%d) already scheduled!!!
gLteRrm_ConnSchedule.laaScellFreqLastMeasTime:%d
CheckMeasCycle: LAA SCell Freq Search/Measure
Conn LAA Scell-SelectedMode(%d), Srch/Meas Cycle(%d)
WARNING: NOT Supported DL_EARFCN %d!!!
Warning!! DMTC is not set up for LAA SCell(%d)
ConnSchedule.pCurMeasLaaSCellFreq NULL
Start Measurement: LAA Scell Frequency (earfcn:%d, mode:%d)
SCell(earfcn=%d) is activated then use SCC RF path (suspendforTx:%d)
SCell(earfcn=%d) is configured
LAA SCell MeasType(%d)
ConnSchedule.laaScellFreqLastMeasTime:%d
[SCELL]invalid MeasType(%d)
Conn Inter-SelectedMode(%d), SrchCycle(%d), MeasCycle(%d)
WARNING: NOT Supported DL_EARFCN %d!!!
ConnSchedule.pCurSrchInterFreq NULL
WARNING: NOT Supported DL_EARFCN %d!!!
ConnSchedule.pCurMeasInterFreq NULL
this freq(earfcn:%d_%d) need GAP(%d) to search/meas. - skip
this freq(earfcn:%d_%d) need SCC path(%d) to search/meas. - skip
this freq(earfcn:%d_%d) need GAP to search/meas. - change MeasType(%d)
this freq(earfcn:%d_%d) need GAP(%d) to search/meas. - change
Start Measurement: Inter Frequency (earfcn:%d, measmode:%d)
[INTER] invalid MeasType(%d)
Warning!! DMTC is not set up for B46 LAA inter-freq(%d)
ConnSchedule.pCurMeasLaaInterFreq NULL
CheckMeasCycle: LAA InterFreq Search
Start Measurement: LAA Inter Frequency (earfcn:%d, measmode:%d)
ConnSchedule.laaInterFreqLastMeasTime:%d
Warning! invalid measMode(%d)
Conn Utra-SelectedMode(%d), SrchCycle(%d), MeasCycle(%d)
warring: ConnSchedule.pCurSrchUtraFreq NULL
ConnSchedule.pCurMeasUtraFreq NULL
warring: ConnSchedule.pCurSrchUtraFreq NULL
Start Measurement: Utra Frequency (earfcn:%d, mode:%d) - SrchCnt(%d)
Conn Geran-SelectedMode(%d), SrchCycle(%d), MeasCycle(%d)
warring: ConnSchedule.pCurIdentifyGeranFreq NULL
ConnSchedule.pCurMeasGeranFreq NULL
ConnSchedule.pCurVerifyGeranFreq NULL
Start Measurement: Geran Frequency (earfcn:%d, mode:%d)
Conn CDMA-SelectedMode(%d), MeasCycle(%d)
ConnSchedule.pCurMeasCdmaFreq NULL
MeasMode is invalid(%d)
Start Measurement: Cdma Frequency (earfcn:%d, mode:%d)
subcarrier_spacing is invalid.
subcarrier_spacing is invalid.
periodicity is invalid.
smtc duration is invalid.
NR srch/meas scheduling count is full(cnt:%d)
pNrFreq is Empty(%d | %d)
Skip FR1(arfcn:%d) measurement due to FR2 measurement
Conn NR-SelectedMode(%d), SrchCycle(%d), MeasCycle(%d)
NR Search/Measurement (earfcn:%d) is already in progress(srch|meas ongoing:%d|%d)
Start Measurement: NR Frequency (earfcn:%d, measmode:%d)
[EN-DC] NR Config(%d) arfcn(%d)
Start Measurement: NR Object Checking (SCS:%d ,PeriodicityAndOffsetChoice:%d, offset:%d, duration:%d)
NR MeasType is invalid(%d)
[EN-DC] NR Config(%d) MeasType(%d)
LteRrm_ProcNrObjectCheckCnf: pFreqFromNr is NULL
NR Search/Measurement (earfcn:%d) is already in progress
NR srch/meas scheduling count is full(cnt:%d)
NR MeasType is invalid(%d)
LteRrmConn_ongoingSrchIntraFlag(%d -> %d)
LteRrmConn_ongoingMeasIntraFlag(%d -> %d)
LteRrmConn_ongoingSrchIntraFlag(%d -> %d)
LteRrmConn_ongoingMeasIntraFlag(%d -> %d)
LteRrmConn_ongoingSrchInterFlag(%d -> %d)
LteRrmConn_ongoingMeasInterFlag(%d -> %d)
LteRrmConn_ongoingSrchInterFlag(%d -> %d)
LteRrmConn_ongoingMeasInterFlag(%d -> %d)
LteRrmConn_ongoingMeasGeranFlag(%d -> %d)
LteRrmConn_ongoingVerifyGeranFlag(%d -> %d)
LteRrmConn_ongoingMeasGeranFlag(%d -> %d)
LteRrmConn_ongoingVerifyGeranFlag(%d -> %d)
LteRrmConn_ongoingSrchMeasUtraFlag(%d -> %d)
LteRrmConn_ongoingMeasCdmaFlag(%d -> %d)
LteRrmConn_ongoingSrchSCellFlag(%d -> %d)
LteRrmConn_ongoingMeasScellFlag(%d -> %d)
LteRrmConn_ongoingSrchSCellFlag(%d -> %d)
LteRrmConn_ongoingMeasScellFlag(%d -> %d)
LteRrmConn_ongoingNoGapSCellFlag(%d -> %d)
LteRrmConn_SetOnUsingSccFlag(%d -> %d)
LteRrmConn_SetOnUsingSccFlag(%d -> %d)
LteRrmConn_GetTimeToTriggerListIndex pMeas(0x%X)/pCell(0x%X) is NULL
nCell(arfcn:%d, cell_id:%d) is not found in TimeToTriggerList(mID:%d).
LteRrmConn_AddTimeToTriggerList pMeas(0x%X)/pCell(0x%X) is NULL
TimeToTrigger Set(mID(%d), rID(%d), Arfcn(%d), Cell(%d)) start(%d)
Report status index is FULL!!!
LteRrmConn_RemoveTimeToTriggerList pMeas(0x%X)/pCell(0x%X) is NULL
alt_time_to_trigger(%d) is applied
Invalid mobility state(%d)
LteRrmConn_CheckTriggerTimerExpired pMeas is NULL
LteRrmConn_CheckTriggerTimerExpired: PrimaryCell is NULL
TimeToTrigger Expired(time_to_trigger:0)(mID(%d), rID(%d))
Fast MR(%d):Rsrq diff:%d(mID(%d), rID(%d))
Fast MR(%d):Rsrq:%d(mID(%d), rID(%d))
Fast MR(%d):Rsrq:%d_%d, CINR:%d, siAdvancedTimeToTrigger:(%d), siAdvancedTimeToTrigger_Inst:(%d), (mID(%d))
TimeToTrigger status(mID(%d), rID(%d)) start(%d) current(%d), timeDiff(%d), ScaledTTT(%d)
TimeToTrigger Expired(mID(%d), rID(%d)) start(%d) stop(%d) offset(%d)
LteRrmConn_CheckLeaveTimerExpired pMeas is NULL
LeaveTime Expired(mID(%d), rID(%d)) start(%d) stop(%d) offset(%d) scaledTTT(%d)
LteRrmConn_RemoveCellInReportList(measId:%d)
LteRrmConn_RemoveCellInReportList(). pMeas is NULL
LteRrmConn_RemoveCellInTriggeredList FreqInfo(%d) or CellInfo(%d) is NULL
LteRrmConn_RemoveCellInTriggeredList -SCellMeasList
Invalid RAT Type(%d)
LteRrmConn_RemoveCellInTriggeredList(earfcn:%d, cell_id:%d)
Removed cell(earfcn:%d, id:%d) is in reportList[%d](numOfCellsInRportList:%d)
pCurMeas is NULL
[%d] SCell(earfcn:%d, PCID:%d) is involved
SCell Result[%d] - ID(%d), PCID(%d), RSRP(%d), RSRQ(%d), RSSNR(%d)
SCell Result[%d] - ID(%d), PCID(%d), RSRP(%d), RSRQ(%d)
SCell Result[%d] - ID(%d), PCID(%d), RSRP(%d), RSRQ(%d)
report_add_neigh_meas is started
report_add_neigh_meas is involved
SCell's Ncell Result[%d] - ID(%d), PCID(%d), RSRP(%d), RSRQ(%d), RSSNR(%d)
SCell's Ncell Result[%d] - ID(%d), PCID(%d), RSRP(%d), RSRQ(%d)
report_add_neigh_meas is not involved
report_add_neigh_meas is not involved
[%d] SCell(earfcn:%d, PCID:%d) is involved
SCell Result[%d] - ID(%d), PCID(%d), RSRP(%d), RSRQ(%d)
[%d] SCell(earfcn:%d, PCID:%d) is involved - ID(%d), PCID(%d), RSRP(%d), RSRQ(%d)
[%d] SCell(earfcn:%d, PCID:%d) is involved - ID(%d), PCID(%d), RSRP(%d), RSRQ(%d)
[EN-DC] NR Config(%d) Purpos_v1430(%d)
TempCellInfo->nr_meas_rslt : NULL
[%d] EN-DC NR Serving Cell(earfcn:%d, PCID:%d) is involved
Result[%d] - PCID(%d), RSRP(%d), RSRQ(%d), RSSINR(%d)
rs_index Result[%d/%d]- RSRP(%d), RSRQ(%d), RSSINR(%d)
report_add_neigh_meas is started
report_add_neigh_meas is involved
NR ServingCell's Ncell Result[%d] - PCID(%d), RSRP(%d), RSRQ(%d) RSSINR(%d)
rs_index Result[%d/%d]- RSRP(%d), RSRQ(%d), RSSINR(%d)
report_add_neigh_meas is not involved
report_add_neigh_meas is not involved
LteRrmConn_MakeEutraReportMsg pMeas is NULL
Serving Cell(%d) == LockPci(%d), No LTE measurement report sent to network
RSSNR configured (reportQuantity:%d, triggerQuantity:%d)
NCell_ID(%d) RSRP(%d) is discarded
Pcell(%d) is discarded
Scell(%d) is discarded
LteRrmConn_MakeEutraReportMsg: MeasID(%d) objID(%d) rptID(%d) Event ID(A%d) FastMR(%d) removePeriodicMeas(%d) NumCell(%d)
PCell : RSRP(%d) RSRQ(%d) RSSINR(%d, %d) TxDiff(%d) Sent(%d) leave(%d)
Idx(%d) NCell_ID(%d) RSRP(%d) RSRQ(%d) RSSINR(%d, %d)
[%2d] SCell : ID(%d) RSRP(%d) RSRQ(%d) RSSINR(%d, %d)
[%2d] SCell's Ncell : Cell ID(%d) RSRP(%d) RSRQ(%d) RSSINR(%d, %d)
report_sstd_meas(1) sfnOffset(%d) frameBoundaryOffset(%d) subframeBoundaryOffset(%d)
[%2d] NR Serving Cell : PCID(%d) RSRP(%d) RSRQ(%d) RSSINR(%d)
[%2d] NR Serving Cell's Ncell : Cell ID(%d) RSRP(%d) RSRQ(%d) RSSINR(%d)
LteRrmConn_MakeUtraReportMsg pMeas is NULL
Serving Cell(%d) == LockPci(%d), No UMTS measurement report sent to network
fdd trigger(%d) - LTE_MEAS_UTRA_FDD_CPICH_BOTH
fdd trigger(%d), quantityUtra(%d)
Make UTRAN Meas. Report_Trigger type(%d)
Trigger value is strange
rat_type(%d), measured_rscp(%d), filtered_rsrp(%d), measured_EcNO(%d), filtered_rsrq(%d)
LteRrmConn_MakeUtraReportMsg: MeasID(%d) objID(%d) rptID(%d) removePeriodicMeas(%d)
Event ID(B%d) PCell_ID(%d) RSRP(%d) NumCell(%d) Sent(%d)
Idx(%d) NCell_ID(%d) fdd_trigger(%d), measured_rscp(%d), measured_EcNO(%d), measured_tdd_rscp(%d)
LteRrmConn_MakeGeranReportMsg pMeas is NULL
Serving Cell(%d) == LockPci(%d), No GSM measurement report sent to network
[RRM] Forced Event B2 MR
LteRrmConn_MakeGeranReportMsg: MeasID(%d) objID(%d) rptID(%d) removePeriodicMeas(%d)
Event ID(B%d) PCell_ID(%d) RSRP(%d) NumCell(%d) Sent(%d)
Idx(%d) geran_arfcn_value(%d) bandIndicator(%d), network_colour_code(%d), base_station_colour_code(%d), rssi(%d)
LteRrmConn_MakeCdmaReportMsg pMeas is NULL
Serving Cell(%d) == LockPci(%d), No CDMA measurement report sent to network
LteRrmConn_MakeCdmaReportMsg: MeasID(%d) objID(%d) rptID(%d) removePeriodicMeas(%d)
Event ID(B%d) PCell_ID(%d) RSRP(%d) NumCell(%d) Sent(%d)
Idx(%d) NCell_ID(%d) pilot_Strength(%d), pilotPnPhase(%d)
[%d] SCell(earfcn:%d, PCID:%d) is involved
SCell Result[%d] - ID(%d), PCID(%d), RSRP(%d), RSRQ(%d)
cellsToReportList[i]->nr_meas_rslt : NULL
Make NR Meas. Cell Report_Trigger type(RSRP:%d, RSRQ :%d, SINR:%d)
Make NR Meas. Beam Report_Trigger type(report_rs_index_resultNr:%d, max_rs_index_report:%d, RSRP:%d, RSRQ :%d, SINR:%d)
>>threshRS-Index present - rsrp:%d, rsrq:%d, sinr:%d
NR measured_rsrp(%d) measured_rsrq(%d) measured_sinr(%d)
NR filtered_rsrp(%d) filtered_rsrq(%d) filtered_sinr(%d)
SSB index(%d|%d) measured_rsrp(%d) measured_rsrq(%d) measured_sinr(%d)
LteRrmConn_MakeNrReportMsg pMeas is NULL
LteRrmConn_MakeNRReportMsg: MeasID(%d) objID(%d) rptID(%d) removePeriodicMeas(%d)
Event ID(%s) PCell_ID(%d) PCell_RSRP(%d) NumCell(%d) Sent(%d) leave(%d)
Idx(%d) NCell_ID(%d) measured_rsrp(%d) measured_rsrq(%d) measured_rssinr(%d)
SFTD report num:%d
>>[%d] pci:%d, sfn_offset_result:%d, frame_boundary_offset_result:%d, is_rsrp_present:%d, rsrp_result:%d
LteRrmConn_CheckServingCellEventTrigger pMeas(%d) or pSCell(%d) is NULL or NOT FILTERED(%d)
block Event A1(mID:%d) for Scell(earfcn:%d, rsrp=%d, rsrq=%d) due to non-search result
LteRrmConn_CheckNCellEventTrigger pMeas(%d) or pNCell(%d) is NULL
Event=SCell_Config(mID:%d, earfcn:%d)
block Event(%d, mID:%d) for Scell(earfcn:%d, rsrp=%d, rsrq=%d) due to non-search result
Event(%d) SCell(%d) would not be considered as Ncell
usePSCell(%d) -> use PSCell(%d,%d) instead of PCell
SCell(earfcn:%d, PCID:%d) could not found
EVENT_A6(SCell_ID:%d, RSRP:%d, RSRQ:%d RSSINR:%d )(NCell_ID:%d)
Enter : NRsrp(%d) NRsrq(%d) NRssinr(%d) NFreqOff(%d) NIndOff(%d)
MnPlusOffset(%d) - Hys(%d)/2 > Ms(%d) + FreqOff(%d) + IndOff(%d) + A3Off(%d)/2
Leave : NRsrp(%d) NRsrq(%d) NRssinr(%d) NFreqOff(%d) NIndOff(%d)
MnPlusOffset(%d) + Hys(%d)/2 < Ms(%d) + FreqOff(%d) + IndOff(%d) + A3Off(%d)/2
EVENT_A6 : MnPlusOffset(%d), Ms(%d), Mn(%d)
Enter : NRsrp(%d) NRsrq(%d) NRssinr(%d) NFreqOff(%d) NIndOff(%d)
MnPlusOffset(%d) - Hys(%d)/2 > Ms(%d) + NFreqoff(%d) + IndOff(%d) + A6Off(%d)/2
Leave : NRsrp(%d) NRsrq(%d) NRssinr(%d) NFreqOff(%d) NIndOff(%d)
MnPlusOffset(%d) + Hys(%d)/2 < Ms(%d) + NFreqOff(%d) + IndOff(%d) + A6Off(%d)/2
Stay
NCell_ID(%d) RSRP(%d) is discarded
[RRM] Forced Event B2 Enter
CDMA_EventB1: Mn(%d), offsetFreq(%d), hysteresis(%d),threshold_cdma(%d)
CDMA_EventB2: Ms(%d), hysteresis(%d), b2_threshold1(%d), Mn(%d), offsetFreq(%d), b2_threshold2_cdma(%d)
NR_EventB1: Mn(%d), offsetFreq(%d), hysteresis(%d),threshold_nr(%d)
NR_EventB2: Ms(%d), hysteresis(%d), b2_threshold1(%d), Mn(%d), offsetFreq(%d), b2_threshold2_nr(%d)
LteRrmConn_CheckIratCellEventTrigger pMeas(%d) or pNCell(%d) is NULL
Warning! invalid RAT_type(%d)
LteRrmConn_CheckTimeToTrigger pMeas(0x%X)/pCell(0x%X) is NULL
(MID:%d, EARFCN:%d, PCID:%d) EVENT_A%d entering condition
LteRrmConn_CheckTimeToTrigger: Report status index is FULL!!!
(MID:%d, EARFCN:%d, PCID:%d) EVENT_A%d stay condition
(MID:%d, EARFCN:%d, PCID:%d) EVENT_A%d leaving condition
(MID:%d, EARFCN:%d, PCID:%d) PERIODIC REPORT entering condition
LteRrmConn_CheckTimeToTrigger: Report status index is FULL!!!
error in LteRrm_ProcServingMeasResult
(MID:%d, ARFCN:%d, PCID:%d) EVENT_%s entering condition
LteRrmConn_CheckIratTimeToTrigger(%d): Report status index is FULL!!!
(MID:%d, ARFCN:%d, PCID:%d) EVENT_%s stay condition
(MID:%d, ARFCN:%d, PCID:%d) EVENT_%s leaving condition
(MID:%d, ARFCN:%d, PCID:%d) IRAT PERIODIC REPORT entering condition
LteRrmConn_CheckIratTimeToTrigger(%d): Report status index is FULL!!!
LteRrmConn_CheckIratTimeToTrigger pMeas(0x%X)/pCell(0x%X) is NULL
[NR_FIXED_ARFCN] NrFixedArfcn:%d
[NR_FIXED_PCID] NrFixedPcid:%d
[NR_FIXED] EventTriggered of Cell(arfcn:%d, pcid:%d) is set to %d!
error in LteRrm_ProcIterRatMeasResult
Invalid RAT Type(%d)
Until the satisfaction of leaving condition, Cell Drop is skipped!!! (RAT_type:%d, Arfcn:%d, CellID:%d)
pCurMeas is NULL
LteRrmConn_UpdateVarMeasurementReports pMeas is NULL
pMeas->varMeasurementReports.numOfCellsInRportList ERROR (numOfCellsInRportList = %d)
EVENT_A%d entering (mID:%d) (Cell ID:%d)
LTERRM_PERIODIC_EUTRA entering (mID:%d) (Cell ID:%d)
EVENT_A%d leaving (mID:%d) (Cell ID:%d)
LteRrmConn_UpdateIratVarMeasurementReports pMeas is NULL
pMeas->varMeasurementReports.numOfCellsInRportList ERROR (numOfCellsInRportList = %d)
EVENT_%s entering (mID:%d) (Cell ID:%d)
EVENT_%s leaving (mID:%d) (Cell ID:%d)
LteRrmConn_ProcServingMeasResult pMeas is NULL
RRC Security disabled(%d) - LteRrmConn_ProcServingMeasResult
LteRrmConn_ProcServingMeasResult(%d)
SCell(earfcn:%d, PCID:%d) could not found
unknown CC(%d)
Illegal Modem Access on POWER OFF
LteRrmConn_ProcEutraMeasResult pMeas is NULL
RRC Security disabled(%d) - LteRrmConn_ProcEutraMeasResult(freq:%d)
Illegal Modem Access on POWER OFF
LteRrmConn_ProcInterRatMeasResult pMeas is NULL
RRC Security disabled(%d) - LteRrmConn_ProcInterRatMeasResult(RAT:%d, freq:%d)
Event%s - Status:%d, Triggered:%d (0:None, 1:Enter, 2:Stay, 3:Leave, 4:Periodic)
timeToTriggered(MID:%d, arfcn:%d, cell_id:%d, timeDiff:%d, scaled TTT:%d)
timeToTriggered(MID:%d, arfcn:%d, cell_id:%d, timeDiff:%d, scaled TTT:%d)
Forced measTrig[TRUE] due to TimeToTrigger - RAT_type(%d), mID(%d), cell_id(%d), ScaledTTT(%d), timeDiff(%d), offset(%d)
Forced measTrig[TRUE] due to LeaveTime - RAT_type(%d), mID(%d), cell_id(%d), TTT(%d), timeDiff(%d), offset(%d)
Forced measTrig[TRUE] due to TimeToTrigger - RAT_type(%d), mID(%d), cell_id(%d), ScaledTTT(%d), timeDiff(%d), offset(%d)
Forced measTrig[TRUE] due to LeaveTime - RAT_type(%d), mID(%d), cell_id(%d), TTT(%d), timeDiff(%d), offset(%d)
LteRrmConn_CheckReportAndStartConnDrx: PrimaryCell is NULL
NCell_RSRP(%d) > PCell_RSRP(%d) or NCell_L3_RSRP(%d) > PCell_L3_RSRP(%d) or NCell_L3_RSRQ(%d)> PCell_L3_RSRQ(%d)
isStrongNcell Conn DRX will stop(a3_offset_for_cdrx_skip:%d), CINR(%d)
CINR low(%d) Conn DRX will stop
AvgMeasureTimeDuringConnDrx(%d ms)
MeasureTimeDuringConnDrx(%d ms)(%d, %d)
Conn Drx Skip(isLastMeas:%d, reportTriggered:%d, ConnDrxCycle:%d, CgiState:%d)
>>newCellDetectedState:%d
LteRrmConn_ProcProximityIntraMeasResult()
CSG Proximity Check ==> EARFCN:%d, CellID:%d, RSRP:%d, THRESHOLD:%d
CSG Proximity EventTriggered ==> EARFCN:%d, CellID:%d, RSRP:%d, THRESHOLD:%d
CSG Proximity Check ==> EARFCN:%d, CellID:%d, RSRQ:%d, THRESHOLD:%d
CSG Proximity EventTriggered ==> EARFCN:%d, CellID:%d, RSRQ:%d, THRESHOLD:%d
LteRrmConn_ProcProximtiyInterMeasResult()
CSG Proximity Check ==> EARFCN:%d, CellID:%d, RSRP:%d, THRESHOLD:%d
CSG Proximity EventTriggered ==> EARFCN:%d, CellID:%d, RSRP:%d, THRESHOLD:%d
CSG Proximity Check ==> EARFCN:%d, CellID:%d, RSRQ:%d, THRESHOLD:%d
CSG Proximity EventTriggered ==> EARFCN:%d, CellID:%d, RSRQ:%d, THRESHOLD:%d
LteRrmConn_ProcProximityUtraMeasResult()
CSG Proximity Utra Check ==> UARFCN:%d, CellID:%d, RSCP:%d, THRESHOLD:%d
CSG Proximity Utra EventTriggered ==> UARFCN:%d, CellID:%d, RSCP:%d, THRESHOLD:%d
CSG Proximity Utra Check ==> UARFCN:%d, CellID:%d, EcNO:%d, THRESHOLD:%d
CSG Proximity Utra EventTriggered ==> UARFCN:%d, CellID:%d, EcNO:%d, THRESHOLD:%d
Illegal search result : earfcn(%d), cell ID(%d), time_offset(%d), search_frame_position(%d)
No update search result : earfcn(%d), cell_id(%d) is already triggered in list
No update search result : abnormal search frame position (earfcn(%d), cell_id(%d), timeoffset(%d), index(%d), search_position(%d))
pCellInfo or pCellInfo->nr_meas_rslt : NULL
Update search result : earfcn(%d), cell ID(%d), new_offset(%d), delta(%d), search_position(%d), old_offset(%d)
No update search result(delta:%d) : earfcn(%d), cell ID(%d), time_offset(%d), search_frame_position(%d)
LteRrmConn_ProcInterRatMeasResult(RAT:%d)
LTERRM->Set.pIntraMeasList is empty(meas mode:%d)
Set intraFreqLastIcSrchTime(%d) firstIntraSrchDone(1)
measmode(%d)-InterFreq Srch
measmode(%d)-Scell Srch
measmode(%d)-InterFreq Meas
measmode(%d)-Scell Meas
[CHECK] LteRrmConn_ProcMeasResult_Scell is NULL(earfcn=%d, index:%d)
measmode(%d)-InterFreq Srch
measmode(%d)-Scell Srch
measmode(%d)-InterFreq Meas
measmode(%d)-Scell Meas
earfcn(%d) measmode(%d)-invalid result
pCurMeasList is NULL
NR pCurFreqInfo is NULL!!!
LteRrmConn_ProcMeasResult pMsg is NULL
LteRrmConn_ProcMeasResult:IsCellOnly(%d), IsLastMeas(%d)
LteRrmConn_ProcMeasResult is FAIL
CDMA Measure Result
DoSrchForCgi - Intra
DoSrchForCgi - Inter
DoSrchForCgi - Scell
LTERRM_SRCHMODE_CGI_CHANGE
LTERRM_SRCHMODE_CGI_SRCH
Cannot find freq, freq_found(%d), earfcn (%d)
DoSrchForCgi - from IRAT
CGI srch start (CGI Earfcn=%d)
saved serving BW(%d)
Invalid CgiMeasType(%d)
LteRrmConn_StopCgiSrch - pPrimaryCell NULL
LteRrm_AllocCellInfoBuf: TargetCell
TargetCell is NULL as a result of LteRrm_AllocCellInfoBuf()
please check: PrimaryCell is NULL!!
CGI stop, Return ! (earfcn=%d, cell id=%d, CGI Earfcn=%d)
CGI change State(%d -> LTERRM_CGI_RETURN)
CGI MeasResult Mid(%d) S_Rsrp(%d) S_Rsrq(%d) C_Rsrp(%d) C_Rsrq(%d)
LteRrmConn_UpdateMeasCgiConfig cgi_req is NULL
UMTS SI_AcquisitionForHO(MID:%d)
UMTS IRAT CGI is configured(MID:%d)
GSM IRAT CGI is configured(MID:%d)
CDMA IRAT CGI is configured(MID:%d)
NR autonomous gaps(MID:%d)
L2N CGI with EN-DC(MID:%d)
NR IRAT CGI is configured(MID:%d)
IRAT CGI MeasList NULL
CGI change State(%d -> LTERRM_CGI_SUSPENDED)
CGI change State(%d -> LTERRM_CGI_SUSPENDED)
CGI pCurElem NULL
LTE CGI is configured(MID:%d, CgiMeasType:%d)
CGI object match fail (L1:%d,RRC:%d)
CGI To report object configured(%d,%d)
CGI change State(%d -> LTERRM_CGI_SUSPENDED)
CGI pCurElem->obj NULL (0x%x)
LteRrmConn_ProcMeasCgiReq msg is NULL
Receive LTE_CPHY_MEAS_CGI_CONF_REQ Msg
CGI change State(%d -> LTERRM_CGI_UMTS_AGAP_SEARCHING)
CGI change State(%d -> LTERRM_CGI_DEACTIVE)
CGI from IRAT(CgiMeasType:%d) HOLD! change the state(%d -> LTERRM_CGI_RETRY)
remove CGI SCell_MID(%d)
SCell(ID:%d, earfcn=%d is added in ScellmeasList
remove Utra_MID(%d)
remove Geran_MID(%d)
remove NR_MID(%d)
CGI change State(%d -> LTERRM_CGI_DEACTIVE)
LteRrmConn_ProcStopMeasCgiReq msg is NULL
Receive LTE_CPHY_MEAS_CGI_STOP_REQ Msg
IRAT CGI(CgiMeasType:%d) SUCCESS! change the state(%d -> LTERRM_CGI_REPORT)
IRAT CGI(CgiMeasType:%d) FAIL! change the state(%d -> LTERRM_CGI_REPORT)
CGI change State(%d -> LTERRM_CGI_REPORT)
CGI change State(%d -> LTERRM_CGI_STOP)
IRAT CGI(CgiMeasType:%d) HOLD! change the state(%d -> LTERRM_CGI_RETRY)
UTRA CGI using AGAP(CgiMeasType:%d) SUCCESS! change the state(%d -> LTERRM_CGI_REPORT)
UTRA CGI using AGAP(CgiMeasType:%d) FAIL! change the state(%d -> LTERRM_CGI_REPORT)
CGI change State(%d -> LTERRM_CGI_REPORT)
CGI change State(%d -> LTERRM_CGI_STOP)
Invalid irat_cgi_meas_result_state:%d, change the state(%d -> LTERRM_CGI_REPORT)
CGI change State(%d -> LTERRM_CGI_REPORT)
CGI change State(%d -> LTERRM_CGI_STOP)
CGI change State(%d -> LTERRM_CGI_REPORT)
CGI change State(%d -> LTERRM_CGI_STOP)
CGI change State(%d -> LTERRM_CGI_DEACTIVE)
CGI change State(%d -> LTERRM_CGI_WAITSIB1)
Invalid CGI State(%d -> LTERRM_CGI_DEACTIVE)
CGI change State(%d -> LTERRM_CGI_SEARCHING) - CgiMeasType:%d
Invalid CgiMeasType(%d)
CGI change State(%d ->LTERRM_CGI_DEACTIVE)
CgiFreqInfo is NULL
Start the procedure for utran CGI cell(Arfcn:%d, scrCode:%d) timing search
CGI change State(LTERRM_CGI_UMTS_AGAP_SEARCHING -> LTERRM_CGI_UMTS_AGAP_SFN_MIB)
CGI change State(LTERRM_CGI_UMTS_AGAP_SFN_MIB -> LTERRM_CGI_UMTS_AGAP_SIB)
Invalid CGI State(%d)
Invalid CGI Parameters(CgiMeasType:%d)
pFreqInfo is NULL
pFreqInfo is NULL
pMeasResult is NULL
Ncell (Cell ID:%d, RSRP=%d, RSRQ=%d RSSINR=%d)
pFreqInfo is NULL
pMeasResult is NULL
Ncell (Cell ID:%d, RSRP=%d, RSRQ=%d RSSINR=%d)
SSB index(%d|%d) measured_rsrp(%d) measured_rsrq(%d) measured_sinr(%d)
pFreqInfo is NULL
pMeasResult is NULL
UTRAN RAT(LTERRM_ID_LISTED) enter!
RAT(UTRAN FDD. %d), Quantity(%d) is invalid
RAT(UTRAN TDD)
RAT(%d) is invalid
UTRAN Ncell(Candi List) (Cell ID:%d, RSCP=%d, EcNo=%d)
UTRAN RAT(LTERRM_CANDI_LISTED) enter!
RAT(UTRAN FDD. %d), Quantity(%d) is invalid
RAT(UTRAN TDD)
RAT(%d) is invalid
UTRAN Ncell(Candi List) (Cell ID:%d, RSCP=%d, EcNo=%d)
UTRAN RAT(LTERRM_UNID_LISTED) enter!
RAT(UTRAN FDD. %d), Quantity(%d) is invalid
RAT(UTRAN TDD)
RAT(%d) is invalid
UTRAN Ncell(UnID list) (Cell ID:%d, RSCP=%d, EcNo=%d)
UTRAN RAT(LTERRM_ID_DETECTED) enter!
RAT(UTRAN FDD. %d), Quantity(%d) is invalid
RAT(UTRAN TDD)
RAT(%d) is invalid
UTRAN Ncell(Detected list) (Cell ID:%d, RSCP=%d, EcNo=%d)
pFreqInfo is NULL
pMeasResult is NULL
GSM RAT(LTERRM_ID_LISTED) enter!
GERAN Ncell(ID List) arfcn:%d, RSSI=%d)
GSM RAT(LTERRM_CANDI_LISTED) enter!
GERAN Ncell(Candi List) arfcn:%d, RSSI=%d)
GSM RAT(LTERRM_UNID_LISTED) enter!
GERAN Ncell(UnID List) arfcn:%d, RSSI=%d)
GSM RAT(LTERRM_ID_DETECTED) enter!
GERAN Ncell(Detected List) arfcn:%d, RSSI=%d)
pFreqInfo is NULL
pMeasResult is NULL
UTRAN(%d) NumOfCell(%d)
GERAN NumOfCell(%d)
EHRPD NumOfCell(%d)
LteRrm_SetNCellAllFreqSortedList pResult is NULL
pNCellList is NULL
UTRA NCELL[%d] arfcn:%d, cell_id:%d, time_offset:%d
GERAN NCELL[%d] band_indicator:%d, arfcn:%d, bsic:%d frameNumber:%d, Qb:%d, net_frameNumber:%d
ucNrFreqNum[%d] arfcn:%d
NR NCELL[%d] arfcn:%d periodicity:%d cell_id:%d
#ssb_index:%d, ssb_timing_offset:%d #ssb_index:%d, ssb_timing_offset:%d
NOT support the handover using cell change corresponding to RAT type(%d)
LteRrmConn_ProcAgapMeasReq msg is NULL
newCGIstate(%d) is not NONE for AGAP
FreqInfo is not existed for AGAP
cellInfo is not existed for AGAP
LteRrmConn_ProcCgiRepStopReq msg is NULL
Receive LTE_CPHY_MEAS_CGI_STOP_REQ Msg
Scell(%d) is deactivated from timer
Warning!! no matched pFreqInfo
SCellFreq -> PSCellFreq
InterFreq -> PSCellFreq
meas Object(ID:%d, earfcn=%d) is moved to PScell
meas Object(ID:%d, earfcn=%d) is moved from Inter freq to Scell
meas Object(ID:%d, earfcn=%d) is removed
meas Object(ID:%d, earfcn=%d) is moved from Scell to Inter freq
change Scell cycle SRCH(%d), MEAS(%d)
measmode(%d)-LAA InterFreq Srch
measmode(%d)-InterFreq Srch
measmode(%d)-Scell Srch
measmode(%d)-LAA InterFreq Meas
measmode(%d)-InterFreq Meas
measmode(%d)-Scell Meas
invalid measmode(%d)
LteRrm_RemoveMeasNeighPatternList NeighPatternList is NULL
LteRrm_RemoveNrPbchCandiList pNrPbchCandiList is NULL
- requested meas_csi_rs_id(%d) is out of range: skip this id
- remove meas_csi_rs_id(%d)
- need to check num_csi_rs_list(%d)<0 --> change to 0
- not found csi_rs_id(%d)
- LteRrmConn_CsiRsListRemoveElem pFreqInfo(%d) or pMeasCsiRsList is empty
LteRrmConn_CsiRsListRemoveList - pFreqInfo(%d) or object(%d) is NULL
LteRrmConn_CsiRsListAddList - pFreqInfo(%d) or object(%d) is NULL
LteRrmConn_CsiRsListAddList - num_start_csi_rs_list(%d) < 1
Cannot Allocate pMeasCsiRsList buffer
LteRrmConn_CsiRsListAddList wrong number num_start_csi_rs_list(%d) > (%d)
- Num of csi_rs_list element(%d): ADD is not possible
- csi-rs target cell is same as PCell(pcid:%d) Skip it
Cannot Allocate LteRrm_Meas_CsiRs_t buffer
pFreqInfo(%d) or object(%d) - need to check
measDS_config(%d): setup
1. dmtc_period_offset(%d) ds_occasion_duration_duplex(%d) ds_occasion_duration(%d)
2. Remove meas_csi_rs_list (num:%d)
- No csi_rs_list to remove: Requested num_stop_csi_rs_list(%d) but num_csi_rs_list(%d < 1)
3. Add meas_csi_rs_list (num:%d)
measDS_config(%d): released
Warning! pFreqInfo->measDS_setup == FALSE in LteRrmConn_IsDmtcOccurThisCycle
Warning!PcellCurSfnTti(0xFFFF) is not updated - Need to check in L1LC_RRM_MEAS_SCHEDULE_IND message
dmtc occur after %d[TTI] (curSfnTti:%d norm_curr_tti:%d dmtc_period_tti:%d dmtc_offset:%d)
Warning! pFreqInfo is NULL (in LteRrmConn_IsMeasTrigInDmtcConfig)
Dmtc is expected this cycle(earfcn:%d)
Dmtc configured but not expected this cycle(earfcn:%d)
Ref DMTC info - IntRA (earfcn:%d, measDS_setup:%d)
- dmtc_period:%d, dmtc_period_offset:%d, ds_occasion_duration:%d, ds_occasion_duration_duplex:%d
Ref DMTC info - IntER (earfcn:%d, measDS_setup:%d)
- dmtc_period:%d, dmtc_period_offset:%d, ds_occasion_duration:%d, ds_occasion_duration_duplex:%d
Ref DMTC info - SCell (earfcn:%d, measDS_setup:%d)
- dmtc_period:%d, dmtc_period_offset:%d, ds_occasion_duration:%d, ds_occasion_duration_duplex:%d
[%d]Update Scell(%d) measDS_setup
[%d]No obj found for Scell(%d) -> measDS_setup:0
pFreqInfo(%d) or object(%d) - need to check
rmtc_config(%d): setup
1. rmtc_period(%d) rmtc_subframe_offset(%d) measDuration(%d)
rmtc_config(%d): released
Warning! LteRrmConn_ProcSstdCompute: LTERRM->Meas.ConnMeasConfig.pMeasListSstd NULL
Warning! LteRrmConn_ProcSstdCompute: report_sstd_meas:FALSE
Warning! LteRrmConn_ProcSstdCompute: pPrimaryCell(%d) or pPSCell(%d) is NULL
Warning! LteRrmConn_ProcSstdCompute: invalid time_offset PCell(%d),PSCell(%d)
Warning! unexpected frame difference (diff1:%d)
[MCD] Check RF imbalance(mode:%d) (m:%d, s:%d)
Cannot Allocate Message buffer
[RRM-VoLTE Status(%d), fRSRP(%d), RSRP(%d),RSSI(%d)]
[ENDC_LOCAL_BARRED] >> SET Idx[%d] Arfcn:%d, Pcid:%d, Duration[sec]:%d, SetTime:%d
[ENDC_LOCAL_BARRED] >> INIT
[ENDC_LOCAL_BARRED] >> CHECK NRCELL BARRED (Arfcn:%d, Pcid:%d, interval(ms):%d, duration(sec):%d)
[ENDC_LOCAL_BARRED] >> CHECK NRCELL BARRED EXPIRE (Arfcn:%d, Pcid:%d, interval(ms):%d, duration(sec):%d)
Receive LteRrmConn_UpdateCsgProximityMeasConfig()
LteRrmConn_UpdateCsgProximityMeasConfig - eutra_meas_list NULL
LteRrmConn_UpdateCsgProximityMeasConfig - utra_meas_list NULL
Receive LteRrmConn_AddCsgProximityMeasList(), eutra_list_size:%d
EARFCN:%d, AntNum:%d, MeasBw:%d, CSG Cell Num:%d
num of IntraFreq(earfcn:%d) CSG Cell: %d
num of IntraFreq(earfcn:%d) CSG Cell: %d
num of InterFreq(earfcn:%d) CSG Cell: %d
num of InterFreq(earfcn:%d) CSG Cell: %d
pFreqInfo NULL
num of InterFreq(earfcn:%d) CSG Cell: %d
num of InterFreq(earfcn:%d) CSG Cell: %d
Receive LteRrmConn_AddCsgProximityUtraMeasList(), utra_list_size:%d
UARFCN:%d, CSG Cell Num:%d
num of Utra Freq(uarfcn:%d) CSG Cell: %d
num of Utra Freq(uarfcn:%d) CSG Cell: %d
Cannot Allocate FreqInfo buffer
num of Utra Freq(uarfcn:%d) CSG Cell: %d
num of Utra Freq(uarfcn:%d) CSG Cell: %d
LteRrmConn_CheckSMeasure: PrimaryCell is NULL
Skip s-Measure check <- bUtraForcedMeas(1)
LteRrmConn_CheckSMeasure: cinr(%d) < 0
LteRrmConn_CheckSMeasure: cinr(%d) < 5, rsrp < smeasure+10
LteRrmConn_CheckCSGProximityTimeToTrigger pFreqInfo is NULL
LteRrmConn_CheckCSGProximityTimeToTrigger(), EARFCN:%d, status:%d, eventTriggered:%d,
LteRrmConn_CheckCSGProximityTimeToTrigger - invalid(%d)
LteRrmConn_CheckCSGProximityTimeToTrigger - invalid(%d)
LteRrmConn_UpdateCsgProximityMeasurementReports pFreqInfo is NULL
LteRrmConn_UpdateCsgProximityMeasurementReports(), RAT:%d, EARFCN:%d, proximity_ind:%d
LteRrmConn_UpdateCsgProximityMeasurementReports - NULL Msg
ONLY CSG Proximity Measurement Report in LTE and UTRA. RAT:%d
