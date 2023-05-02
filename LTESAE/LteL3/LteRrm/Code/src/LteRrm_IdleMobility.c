pFreqInfo is NULL
UpdateReselPriority(Preserved): earfcn(%d) priority(%d).(%d)
UpdateReselPriority(CSG): earfcn(%d) priority(%d)
UpdateReselPriority(de_priority): earfcn(%d) priority(%d)
UpdateReselPriority(mbms): earfcn(%d) priority(%d)
UpdateReselPriority(Dedicated): earfcn(%d) priority(%d).(%d)
UpdateReselPriority(sib): earfcn(%d) priority(%d).(%d)
- ReselPriority changed: %d -> %d
LteRrmIdle_UpdateReselPriorityForAllFreq
Priority state error(%d)
freq_timer(T320):%d
Setting Dedicate priority is not acceptable in any cell state.
return LteRrmIdle_SetDedicatedPriority(num_freq:%d)
LteRrmIdle_SetDedicatedPriority(num_freq:%d)
> RAT(%d), earfcn(%d)
Invalid rat_type = %d
dedi_priority:earfcn(%d), priority(%d).(%d)
intra no_priority:earfcn(%d), priority(%d)
LteRrmIdle_DeleteDedicatedPriority
LteRrmIdle_AddToDePriorityList(earfcn:%d, freq_timer:%d)
same earfcn is already in the MbmsPriorityList
DePriorityList.num_freq:%d) >= LTERRM_DEPRIORITY_LIST_SIZE
DePriorityList.num_freq:%d All(E:%d, N:%d)
freq_timer(T325):%d
Setting Depriority is not acceptable in any cell state.
LteRrmIdle_SetDePriority(num_freq:%d, E:%d, N:%d)
de_priority:earfcn(%d), priority(%d)
DePriorityList->num_freq(%d) is overflow
LteRrmIdle_DeleteDePriority
LteRrmIdle_AddToMbmsPriorityList(earfcn:%d)
same earfcn is already in the MbmsPriorityList
MbmsPriorityList.num_freq:%d) >= LTERRM_MBMS_PRIORITY_LIST_SIZE
MbmsPriorityList.num_freq:%d)
Setting MBMS priority is not acceptable in any cell state.
LteRrmIdle_SetMbmsPriority(num_freq:%d)
return MbmsPriorityList(num_freq:%d)
mbms_priority:earfcn(%d), priority(%d)
MbmsPriorityList->num_freq(%d) is overflow
LteRrmIdle_DeleteMbmsPriority(earfcn:%d)
MbmsPriorityList.num_freq(%d) is zero
MbmsPriorityList.num_freq(%d) is overflow
mbms_priority:earfcn(%d), priority(%d)
Init Mobility Controller
LteRrm_AllocCellInfoBuf:LteRrm_FreeCellInfoBuf
LteRrm_AllocCellInfoBuf: TargetCell
TargetCell is NULL as a result of LteRrm_AllocCellInfoBuf()
ListSearchEnable disable(%d)
BplmnMruList.listNum(%d)
[%d] EARFCN: %d, value: %d, peak rate: %d, pow_val:%d, psch_max_sum:%d
MRU EARFCN: %d, value: %d, peak rate: %d, pow_val:%d, psch_max_sum:%d
Remove EARFCN: %d, value: %d, peak rate: %d, pow_val:%d, psch_max_sum:%d
[%d] EARFCN: %d, value: %d, peak rate: %d, pow_val:%d, psch_max_sum:%d
removeCnt(%d)
New Detected Earfcn:%d (index:%d)
New Detected Earfcn:%d (index:%d)
New Detected Earfcn:%d (index:%d)
Max PSCH Energy Detected, FreqScanEnergyLevel = %d
energy_window_cnt = %d, FreqScanEnergyLevel = %d
Remove Detected Earfcn:%d (index:%d)
Remove Detected Earfcn:%d (index:%d)
(DETECT)EARFCN: %d (Max: %d, PeakRate: %d, PowVal: %d, max_sum_value:%d), EnergyLevel = %d, WindowCnt = %d
(DROP)EARFCN: %d (Max: %d, PeakRate: %d, PowVal: %d, max_sum_value:%d) EnergyLevel = %d, WindowCnt = %d
Reset Energy window
ACC_2 Scan Result(%d)
(ACC_2 DETECT)EARFCN: %d, max_energy: %d, peak rate: %d, pow_val:%d, psch_max_sum:%d
[%d](ACC_2 DETECT)EARFCN: %d, value: %d, peak rate: %d, pow_val:%d, psch_max_sum:%d
Remove EARFCN: %d, value: %d, peak rate: %d, pow_val:%d, psch_max_sum:%d
[%d](ACC_2 DETECT)EARFCN: %d, value: %d, peak rate: %d, pow_val:%d, psch_max_sum:%d
Invalid gLteRrmDB_FreqScanState (%d)
FreqScanState ERROR (%d)
FreqScan.Cnt ERROR (FreqScan.Cnt = %d)
Remove EARFCN: %d, value: %d, peak rate: %d, pow_val:%d, psch_max_sum:%d
LteRrm_SendMsgToRrc(LTE_CPHY_FREQ_SCAN_CNF)
[%d] EARFCN: %d, value: %d, peak rate: %d, pow_val:%d, psch_max_sum:%d
LteRrmIdle_ProcOneFreqScanResult, PSS invalid, peak_rate : %d
Too short remain time (%d), Just wait and Try at next time
Enough remain time (%d), Try cell change now
Start LTERRM_SRCHMODE_BPLMN_SRCH(earfcn:%d)
LteRrm_AllocCellInfoBuf: TargetCell
TargetCell is NULL as a result of LteRrm_AllocCellInfoBuf()
Invalid Bplmn State(%d)
ERROR: Invalid LteRrm idleproc(%s)
ERROR: Unexpected IdleProc(%d) in LteRrmIdle_EvalCarrierPschEnergy
CheckRcvdPwr success (Psch_max_energy = %d, peak_rate = %d)
LteRrm_AllocCellInfoBuf: TargetCell
TargetCell is NULL as a result of LteRrm_AllocCellInfoBuf()
CheckRcvdPwr failure (Psch_max_energy = %d, Peak_rate = %d)
MTM 8960 - RSRP measure start
[MTM] MtmDelayTimer <Timer Start !!> - FA_SEL Delay : 100 ms
CheckRcvdPwr success
LteRrm_AllocCellInfoBuf: TargetCell
TargetCell is NULL as a result of LteRrm_AllocCellInfoBuf()
LteRrmIdle_EvalCarrierRSSI - invalid IdleProc(%d)
LteRrmIdle_BackupBplmnState
LteRrmIdle_ReStoreBplmnState
BPLMN RESTART!! (%d)
abnormal(SavedBplmnTargetEarfcn == NULL) BPLMN continue -> new
BplmnMruList.listNum:%d, BplmnScanType:%d
CSG Freq Scan Mode : %d
Freq Scan Mode : %d
Receive LTE_CPHY_FREQ_SCAN_REQ Req (blind scan from %d)(mode:%d)
Send LTE_CPHY_FREQ_SCAN_CNF (Discrete Scan Failure)
Changed FreqScan mode from LTE_FPLMN_SCAN to LTE_FPLMN_SCAN_IRAT for discrete scan mode (%d+20ms)
abnormal(LTE_RRC_STORED_SCAN) BPLMN continue -> Stop
Send LTE_CPHY_FREQ_SCAN_CNF (NOT support blind scan)
LTERRM_INIT_STATE(from %s)
Send LTE_CPHY_FREQ_SCAN_CNF (NOT support this frequency)
Send LTE_CPHY_FREQ_SCAN_CNF (BPLMN disable)
Invalid Scan mode (%d)
BplmnMruList.listNum is 0
Send LTE_CPHY_FREQ_SCAN_CNF (BPLMN disable)
BPLMN SCAN REQ, BplmnTargetEarfcn = %d
Invalid Scan mode (%d)
total black cell num [%d]
LteRrmIdle_ProcCellSelectReqInIdle - List should have been removed via reset_forbidden_list when ANY CS
Received EARFCN in CellSelReq [%d]
Added EARFCN in CellSelReq [%d]
LteRrmIdle_ProcCellSelectReqInIdle - Unsuitable category(%d)
No freq list in CS REQ !!
Received EARFCN in CellSelReq [%d]
Added EARFCN in CellSelReq [%d]
ERROR: BPLMN scan is not avail in CONN
Received EARFCN in CellSelReq [%d]
Added EARFCN in CellSelReq [%d]
[OsloPatch] debug print for CellSelReq with Acceptable
Received EARFCN in CellSelReq [%d]
Added EARFCN in CellSelReq [%d]
Redirection : No freq list in CS REQ !!!
Received EARFCN in CellSelReq [%d]
Added EARFCN in CellSelReq [%d]
ERROR: Invalid category(%d)
ENDC capa Freq : %d
ENDC capa Freq : %d - removed
Power On Cell Selection Mode On(init:%d, oos:%d, Endc:%d->%d, th:%d, %d)
Receive LTE_CPHY_CELL_SEL_REQ (category: %d)
is_redirect_scan: TRUE
Unsuitable/Barred Freq(%d) Exist!
Unsuitable and Barred List Removed!
Reset forbidden list [%d]
Unsuitable category (%d)
Invalid LteRrm state(%s)
cell (%d) in earfcn (%d) is NOT barred (time:%d)
LteRrmIdle_CheckInfCellFromBarredList(earfcn:%d)-> exists
cell (%d) in earfcn (%d) is barred (time:%d)
BarredCell is listed already(cell ID %d, earfcn %d)
WARNING!! (duration == 0) in LteRrmIdle_AddCellToBarredList(cell ID %d, earfcn %d)
pNewElem->time_offset:%d)
ERROR: Elem of cellbarred list is not linked
Cell ID in CellBarredList(%d, %d) in LteRrmIdle_ProcCellSelectReq()
- time_offset(%d)
ERROR in CellBarredList
LteRrmIdle_AddInfCellFromBarredList - cellList NULL
Error!! NumSrchWithBarredCellCanx(%d)
Trial[%d] Perform normal cell search
Trial[%d].[%d] IC cell: Earfcn(%d) pci(%d) time_offset(%d)
Trial[%d]. Barred cell with earfcn(%d) is not found in barred-list!!
- Perform normal search
LteRrmIdle_DeleteCellFromBarredList Started: RAT Type(%d), Cell_ID(%d), EARFCN(%d)
CellBarredList is Empty!!
The 1st cell deleted: BarredTimerUpdate!!
LteRrmIdle_DeleteCellFromBarredList Finished
LteRrmIdle_DeleteAllFromBarredList Started
CellBarredList / FreqBarredList / UnsuitableList are Empty!!
CellBarredList deleted
FreqBarredList deleted
UnsuitableList deleted
TCellBarrdDiff(%d), TCellBarredDurationDiff(%d), IsReverted(%d)
New element added from Cell barred list
pNewElem becomes the first element among the CellBarredList
BarredFreq is already listed (earfcn %d)
WARNING!! (duration == 0) in LteRrmIdle_AddFreqToBarredList(earfcn %d)
ERROR: Elem of Freqbarred list is not linked
EARFCN in FreqBarredList(%d) in LteRrmIdle_ProcCellSelectReq()
ERROR in FreqBarredList
TFreqBarrdDiff(%d), TFreqBarredDurationDiff(%d), IsReverted(%d)
New element added from Freq barred list
pNewElem becomes the first element among the FreqBarredList
This Freq is unsuitable already(earfcn %d)
WARNING!! (duration == 0) in LteRrmIdle_AddFreqToUnsuitableList(earfcn %d)
ERROR: Elem of Unsuitable list is not linked
EARFCN in UnsuitableList(%d) in LteRrmIdle_ProcCellSelectReq()
ERROR in UnsuitableList
TUnsuitableDiff(%d), TUnsuitableDurationDiff(%d), IsReverted(%d)
New element added from Unsuitable list
pNewElem becomes the first element among the UnsuitableList
Barred Cell[%d]: Earfcn(%d), Cell Id(%d)
Barred Freq[%d]: Earfcn(%d)
Unsuitable Freq[%d]: Earfcn(%d)
LteRrmIdle_GetPdm_step_value(step&value)carrier_freq:%d dl_earfcn:%d
LteRrmIdle_GetPdm_step_value(step&value)pdm_control_value:%d
LteRrmIdle_GetPdm_step_value(step&value)one_side_pdm_value:%d
LteRrmIdle_GetPdm_step_value(step&value)pdm_step_cnt:%d
NEXT FREQ SELECT : CellSelInfo.Idx = %d, CellSelInfo.NumFreq = %d
BlindCellSel(%d) SearchRepeatMode(%d) CellSelInfo.Idx(%d)
SearchRepeatMode(%d) CellSelInfo.Idx(%d)
SearchRepeatMode(%d) CellSelInfo.Idx(%d)
LteRrmIdle_ProcCellSelectionNextFreq(FH mode)SearchRepeatMode(%d) CellSelInfo.Idx(%d)
LteRrm_AllocCellInfoBuf:LteRrm_FreeCellInfoBuf
LteRrm_AllocCellInfoBuf: TargetCell
TargetCell is NULL as a result of LteRrm_AllocCellInfoBuf()
All Freq is Barred
CellSelInfo.Idx(%d) >= CellSelInfo.NumFreq(%d)
Sorting frequency based on measurement (ENDC:%d, TH:%d, %d)
[Pre_Result_%2d][Earfcn(%d) = %5d_%3d][RSRP=%d, RSRQ=%d]
[Result_%2d][Earfcn=%5d_%3d][RSRP=%d]
== complete Freq. Selection based on measurement(FreqNum:%d->%d)
LteRrm_AllocCellInfoBuf: TargetCell
TargetCell is NULL as a result of LteRrm_AllocCellInfoBuf()
NEXT CELL SELECT : CellSelInfo.CellIdx = %d, CellSelInfo.NumCell = %d
Try Cell selection to next hypo(idx:%d, earfcn:%d)
LTERRM_LAST_CELL_SELECT
LteRrm_AllocCellInfoBuf: TargetCell
TargetCell is NULL as a result of LteRrm_AllocCellInfoBuf()
please check: PrimaryCell is NULL!!
LteRrm_AllocCellInfoBuf:LteRrm_FreeCellInfoBuf
LteRrm_AllocCellInfoBuf:LteRrm_FreeCellInfoBuf
LteRrm_AllocCellInfoBuf: TargetCell
TargetCell is NULL as a result of LteRrm_AllocCellInfoBuf()
LteRrm_AllocCellInfoBuf:LteRrm_FreeCellInfoBuf
LTERRM_SPECIFIC_CELL_SELECT: TargetCell->earfcn=%d, TargetCell->cell_ID=%d
LteRrmIdle_ProcCellSelection(NextCandidate=(%d))
ERROR: Unsuitable IdleProc (%d)
LteRrmIdle_ProcCellSelection - invalid candidate(%d)
[OsloKPI] CellReselSuccess(%d) / CellReselFail(%d)
Receive LTE_CPHY_CELL_RESEL_REQ Msg
LteRrmIdle_ProcCellReselection from RRC
LteRrmIdle_ProcCellReselection - Invalid IdleProc(%d)
pSelectedCell is NULL
Try Reselection(next Ncell)
LteRrm_AllocCellInfoBuf: TargetCell
TargetCell is NULL as a result of LteRrm_AllocCellInfoBuf()
please check: PrimaryCell is NULL!!
Failure of returning back to the old serving cell
LteRrm_AllocCellInfoBuf: TargetCell
TargetCell is NULL as a result of LteRrm_AllocCellInfoBuf()
please check: ServingCell is NULL!!
Try Reselection(Return to Pcell)
Stop Reselection
LTE_CPHY_CELL_RESEL_CNF with FAIL to RRC
NO REMAINING CANDIDATE CELL !!!
LteRrm_AllocCellInfoBuf:LteRrm_FreeCellInfoBuf
Repeat reselection for IRAT( CellSelInfo.Idx :%d)
ConnToIdleLastCell: TRUE to FALSE
LteRrm_AllocCellInfoBuf:LteRrm_FreeCellInfoBuf
InitSrchCanx fails
Try Cell selection to next cell (idx:%d)
LteRrmIdle_ProcCellSrchCnfInCellSelection - Invalid fali cause(%d)
ProcCellSrchCnf: IdleProc(%s), PCID(%d), earfcn(%d)
LteRrmIdle_ProcCellSrchCnf - Invalid State(%d)
bBackupCellStatusNtf
LteRrmIdle_ProcCellSrchCnf - Invalid fail cause(%d)
LteRrmIdle_ProcCellSrchCnf - Invalid IdleProc(%d)
ERROR: Invalid case
Simulate sending LTE_CPHY_ACQ_IND to RRC(MTM)
LteRrmIdle_ProcPbchDecDone - Invalid IdleProc(%d)
LteRrmIdle_EvalCellSelection - band7(manual): Srxlev=%d.%ddB, qRxLevMin=%ddBm
SrxLev = %d.%ddB, Squal = %d.%ddB, q_QualMin = %ddB
SrxLev <= 0 or Squal <= 0, S criteria fail.
rat(%d), arfcn(%d), Pmax(SIB)(%d), Pmax(PowerClass)(%d), Pcompansation(%d)
CellID(%d):Srxlev Calculation: min_RSRP(%d)- qRxLevMin(%d)-PCompensation(%d) = Srxlev(%d)
CellID(%d):Srxlev Calculation: RSRP(%d)- qRxLevMin(%d)-PCompensation(%d) = Srxlev(%d)
Cell_ID(%d):Squal Calculation: min_RSRQ(%d)- qQualMin(%d)= Squal(%d)
Cell_ID(%d):Squal Calculation: RSRQ(%d)- qQualMin(%d)= Squal(%d)
LteRrmIdle_CheckThreshHigherInterFreq is called
CSG : RAT:%d, CellID:%d, RSRP:%d, q_RxlevMin:%d, q_QualMin:%d
CSG : Success reselection condition
CSG : Fail reselection condition(neighbor)
CSG : RAT:%d, CellID:%d, RSRP:%d, q_RxlevMin:%d
CSG : Success reselection condition : UTRA FDD
CSG : Fail reselection condition : UTRA FDD
CSG : Success reselection condition : EUTRA
CSG : Fail reselection condition(neighbor)
RAT:%d, RSRP:%d, q_RxlevMin:%d, thresh_X_high_P:%d, thresh_X_high_Q:%d, treselection(margin):%d
Success reselection condition : RAT type(%d), Freq(%d), PCI(%d)
Fail reselection condition(neighbor): RAT type(%d), Freq(%d), PCI(%d)
Success reselection condition : UTRA FDD
Fail reselection condition : UTRA FDD
Success reselection condition : RAT type(%d), Freq(%d), PCI(%d)
Fail reselection condition(neighbor): RAT type(%d), Freq(%d), PCI(%d)
CSG : Reselection is not supported for GERAN
RAT:%d, RSRP:%d, q_RxlevMin:%d, thresh_X_high:%d
RSRQ:%d, q_QualMin:%d
Success reselection condition : GSM(%d)
Fail reselection condition(neighbor) : GSM(%d)
CSG : Reselection is not supported for CDMA2000
RAT:%d, RSRP:%d, thresh_X_high:%d
Success reselection condition : CDMA(%d), Freq(%d)
Fail reselection condition(neighbor) : CDMA(%d), Freq(%d)
ERROR: Invalid RAT_type(%d)
CSG : Success reselection condition: RAT type(%d)
CSG : Fail reselection condition(neighbor)
CSG : RAT:%d, RSRP:%d, q_RxlevMin:%d, thresh_X_low_P:%d
CSG : Success reselection condition : UTRA FDD
CSG : Fail reselection condition : UTRA FDD
CSG : Success reselection condition : EUTRA
CSG : Fail reselection condition(neighbor)
Success reselection condition : RAT type(%d), Freq(%d), PCI(%d)
Fail reselection condition(neighbor): RAT type(%d), Freq(%d), PCI(%d)
RAT:%d, RSRP:%d, SIBx.q_RxlevMin:%d, SIBx.thresh_X_low_P:%d
Success reselection condition : UTRA FDD(%d)
Fail reselection condition : UTRA FDD(%d)
Success reselection condition : RAT type(%d), Freq(%d), PCI(%d)
Fail reselection condition(neighbor): RAT type(%d), Freq(%d), PCI(%d)
LteRrmIdle_CheckThreshLowerInterFreq(CSG Srxlev_Serv:%d, RAT_Type:%d, ThreshServLow_P:%ddB, ThreshServLow_Q:%ddB)
LteRrmIdle_CheckThreshLowerInterFreq(Srxlev_Serv:%d, RAT_Type:%d, SIB3.ThreshServLow_P:%ddB, SIB3.ThreshServLow_Q:%ddB)
CSG : RSRQ:%d, q_QualMin:%d, thresh_X_low_Q:%d
RSRQ:%d, SIBx.q_QualMin:%d, SIBx.thresh_X_low_Q:%d, treselection(margin):%d
CSG : Reselection is not supported for GERAN
RAT:%d, RSRP:%d, q_RxlevMin:%d, thresh_X_low_P:%d
Success reselection condition : GSM(%d)
Fail reselection condition(neighbor) : GSM(%d)
CSG : Reselection is not supported for CDMA2000
RAT:%d, RSRP:%d, thresh_X_low:%d
Success reselection condition : CDMA(%d), Freq(%d)
Fail reselection condition(neighbor) : CDMA(%d), Freq(%d)
ERROR: Invalid RAT_type
Fail reselection condition(serving)
BARRED FREQ
[HF] S value of Cell(%d)(Freq:%d) > threshold and Treselection Zero
[HF] S value of Cell(%d)(Freq:%d) > threshold, Treselection started, Eval Results:%d, TReselectionStart:%d
HigherPrioCRTriggered++(%d)
Error: IsTreselectionTrig(%d) HigherPrioCRTriggered(%d)
[HF] S value of Cell(%d)(Freq:%d) > threshold and Treselection passed (CurrentTime:%d)
[HF] S value of Cell(%d)(Freq:%d) > threshold But Treselection failed (CellID(%d) != StrongestNcellID(%d))
[HF] S value of Cell(%d)(Freq:%d) > threshold but Treselection not passed yet (CurrentTime:%d)
[HF] S value of Cell(%d)(Freq:%d) <= threshold
q_RxlevMin(%d), thresh_X_high(%d)
HigherPrioCRTriggered--(%d)
[HF] NumCandidateCell:%d, ElapsedTimeInPCell:%d
[HF] Add new CellResel.ppCCellList[%d] Earfcn:%d, Cell id:%d, priority:%d
CellReselInfo.ppCCellList NULL
PrimaryCell is gpHighestRankCell
PrimaryCell is NULL
Highest Ranked Cell is changed => Remove Cell/FreqBarredList
[NR DRDS OPT] TpClk(%d, %d) Qhyst = %d
[IF] NumCandidateCell:%d, ElapsedTimeInPCell:%d
CellReselInfo.ppCCellList NULL
PrimaryCell is NULL
BARRED FREQ
RValueDiff(%d) = nRsrp(%d) - Qoffset(%d) - sRsrp(%d) - Qhyst(%d), RValueDiffMax(%d)
RsrqDiff(%d) = nRsrq(%d) - Qoffset(%d) - sRsrq(%d) - Qhyst(%d), ReturnRValueDiff(%d)
[IF] R value of Cell(%d) > 0 and Treselection Zero
Fast Reselection(cinr:%d, RValueDiffMax:%d), Treselection(%d)
[IF] R value of Cell(%d)(Freq:%d) > 0, Treselection started (TReselectionStart:%d)
IntraFreqCRTriggered++(%d)
Error: IsTreselectionTrig(%d) IntraFreqCRTriggered(%d)
[IF] R value of Cell(%d)(Freq:%d) > 0 and Treselection passed (CurrentTime:%d)
[IF] S value of Cell(%d)(Freq:%d) > 0 But Treselection failed (CellID(%d) != StrongestNcellID(%d))
[IF] R value of Cell(%d)(Freq:%d) > 0 but Treselection failed (CurrentTime:%d)
[IF] R value of Cell(%d)(Freq:%d) <= 0
IntraFreqCRTriggered--(%d)
LTERRM->Set.pHighestRankCell is NULL
PrimaryCell is NULL
Highest Ranked Cell is changed => Remove Cell/FreqBarredList
[EF] NumCandidateCell:%d, ElapsedTimeInPCell:%d
[EF] Add New CellResel.ppCCellList[%d] Earfcn:%d, Cell id:%d
CellReselInfo.ppCCellList NULL
BARRED FREQ
[R value] Rs(%d) Rn(%d) Qhyst(%d) Qoffset(%d)
[R value_Inst] Rs(%d) Rn(%d) Qhyst(%d) Qoffset(%d)
[EF] R value of Cell(%d)(Freq:%d) > 0 and Treselection Zero
[EF] R value of Cell(%d)(Freq:%d) > 0, Treselection started (TReselectionStart:%d)
EqualPrioCRTriggered++(%d)
Error: IsTreselectionTrig(%d) EqualPrioCRTriggered(%d)
[EF] R value of Cell(%d)(Freq:%d) > 0 and Treselection passed (CurrentTime:%d)
[EF] R value of Cell(%d)(Freq:%d) > 0 But Treselection failed (CellID(%d) != StrongestNcellID(%d))
[EF] R value of Cell(%d)(Freq:%d) > 0 but Treselection failed (CurrentTime:%d)
[EF] R value of Cell(%d)(Freq:%d) <= 0
EqualPrioCRTriggered--(%d)
BARRED FREQ
LteRrmIdle_EvalLowerInterFreq: PrimaryCell is NULL
(RAT:%d, Earfcn:%d, PCI:%d) time_diff_meas(%d), time_diff_nonintra(%d)
No reselection candidate(RAT:%d, earfcn:%d, id:%d). Measurement and Evaluation didn't happen at the same DRX cycle
Fast Reselection(cinr:%d), Treselection(%d)
[LF] S value of Cell(%d)(Freq:%d) and Treselection Zero
[LF] S value of Cell(%d)(Freq:%d) and Treselection Zero
But Cell Reselection to IRAT lower-priority cell is suspended (other priority cell is waiting for CR).
- HigherPrioCRTriggered(%d) EqualPrioCRTriggered(%d) IntraFreqCRTriggered(%d)
- other low prio. cell (but higher than serv) triggered:(%d)
Earfcn(%d), CellID(%d), Set IsTreselectionTrig(%d)
Error: IsTreselectionTrig(%d)
[LF] S value of Cell(%d)(Freq:%d) > threshold, Treselection started (TReselectionStart:%d)
[LF] S value of Cell(%d)(Freq:%d) > threshold and Treselection passed (CurrentTime:%d)
[LF] S value of Cell(%d)(Freq:%d) > 0 But Treselection failed (CellID(%d) != StrongestNcellID(%d))
[LF] S value of Cell(%d)(Freq:%d) > threshold but Treselection passed (CurrentTime:%d)
But Cell Reselection to IRAT lower-priority cell is suspended (other priority cell is waiting for CR).
- HigherPrioCRTriggered(%d) EqualPrioCRTriggered(%d) IntraFreqCRTriggered(%d)
- other low prio. cell (but higher than serv) triggered:(%d)
[LF] S value of Cell(%d)(Freq:%d) > threshold but Treselection failed (CurrentTime:%d)
[LF] S value of Cell(%d)(Freq:%d) <= threshold
Srxlev_Serv(%d), ThreshServLow(%ddB), q_RxlevMin(%ddB), thresh_X_low(%ddB)
[LF] NumCandidateCell:%d, ElapsedTimeInPCell:%d
[LF] Add new CellResel.ppCCellList[%d] Earfcn:%d, Cell id:%d
CellReselInfo.ppCCellList NULL
Resel Ranking List::
[%d] Earfcn:%d, Cell id:%d, PRIORITY:%d, RSRP:%d
[%d] Earfcn:%d, Cell id:%d, RSRP:%d
[Eval] freq (%d) Higher (%d).(%d)>(%d).(%d) or isCsgCell(%d)/CsgMeasReq(%d)
[Eval] freq (%d) Equal (%d).(%d)=(%d).(%d) or isCsgCell(%d)/CsgMeasReq(%d)
Equal Priorities for IRAT are not SUPPORTED!-> Low Priority Evaluation
[Eval] freq (%d) Lower (%d).(%d)<(%d).(%d) or isCsgCell(%d)/CsgMeasReq(%d)
Proc CELL_RESELECTION_EVALUATION
UtraMeasCnt(%d) reset to 0
UtraMeasCnt(%d)
CellStatusNtf cell is selected
Simulate sending LTE_CPHY_CELL_SEL_CNF to RRC(MTM)
Camp-on success.
LteRrm_AllocCellInfoBuf:LteRrm_FreeCellInfoBuf
InitSrchCanx fails
Try cell selection to next cell (idx:%d)
Try Cell selection to next cell (idx:%d)
ERROR: Invalid category
(CellReselInfo.ppCCellList == NULL) or CellReselInfo.NumCCell == 0
BARRED FREQ: No Cell to Reselect !!!
CellBarred CANCEL (%d, %d) in low RSRP(%d)
TargetCell is NULL
Csr_Inf: LTE_CELL_BARRED
LTE_SELECT_NEW_SUIT_CELL
Unsuitable category !!!
LTE_SCAN_NEXT_FREQ with Category: %d
Unsuitable category !!!
LTE_STOP_SCAN with Category %d
q_RxLevmin=(%d), q_QualPresent=(%d), q_QualMin=(%d), q_Qualminoffset=(%d), q_QualMinWBPresent=(%d), q_QualMinAllSymbolPresent=(%d)
EARFCN(%d), isCsgCell(%d)
LteRrmIdle_EvalCellSelection FAIL!!(%d, %d)
ERROR: different category cell selection/reselection(%d, %d)
ERROR: Invalid category(%d)
CellStatusNtf cell is not selected
InitSrchCanx condition satisfied: RSRP(%d)>(%d), RSRQ(%d)>(%d)
InitSrchCanx condition not satisfied. RSRP(%d)<=(%d), RSRQ(%d)<=(%d)
out of range: num_cell is larger than 3. (%d)
Camp-on fails and no interference detected.
ERROR: invalid idlemode proc(%d)
LteRrm_AllocCellInfoBuf: TargetCell
TargetCell is NULL as a result of LteRrm_AllocCellInfoBuf()
Copy TargetCell(%d), PrimaryCell is NULL
please check: PrimaryCell is NULL!!
INVALID TargetCell!!!!!!
EARFCN(%d), isCsgCell(%d)
SIB1: q_QualPresent=(%d), q_QualMin=(%d), q_Qualminoffset=(%d), q_QualMinWBPresent=(%d), q_QualMinAllSymbolPresent=(%d)
SI update error: S-criteria fail
[OsloPatch] debug print for Category change to suitable cell
Category change Acceptable to Suitable cell (%s State)
NULL ServCell when SI update or ConnRel or Category change to suitable cell(Please check primitive from other layer)
SameCellSelect:%d
BARRED FREQ: No Cell to Reselect !!!
SI update error: Invalid Category(%d)
LTE_CELL_BARRED or FREQ_BARRED: Stop measurement and Wait CellSelectReq from RRC
Cell selection to CMCC PLMN
LTE_CPHY_CELL_STATUS_NTF Msg is NULL(%s State)
MFBI Enabled(earfcn:%d)
PrimaryCell is NULL
please check: PrimaryCell is already NULL!!
IntraFreq is NULL
please check: IntraFreq is already NULL!!
Receive LTE_CPHY_CELL_STATUS_NTF Msg(categoty=%d in %s State)
GCID:%8x, TAC:%4x, MCC:%6d, MNC:%6d
GCID:%8x, TAC:%4x, MCC:%6d, MNC:%6d
LTE_CPHY_CELL_STATUS_NTF Msg for PMAX (%d)
No cell for barring cell of LTE_SELECT_NEW_SUIT_CELL
EARFCN(%d), isCsgCell(%d)
BPLMN target Camp On Complete !
ERROR: Invalid IdleProc(%d)
LTE_CONT_CURRENT_FREQ will be started at next sleep time
LteRrm_AllocCellInfoBuf: TargetCell
TargetCell is NULL as a result of LteRrm_AllocCellInfoBuf()
LTE_CONT_CURRENT_FREQ will be started at next sleep time
Earfcn is last(%d)
MRU FreqScan Completed, Start FullBand Scan, FreqScanMode(%d)
Invalid Scan mode (%d)
LTE_STOP_BPLMN_SCAN: DrxSpareTmr is NOT running
Sending LTE_CPHY_FREQ_SCAN_CNF to RRC (num_freq_in_list = %d)
Sending LTE_CPHY_FREQ_SCAN_CNF to RRC (num_freq_in_list = %d)
LteRrmIdle_UpdateScanModeStopBplmn - INIT State
LTE_STOP_BPLMN_SCAN: DrxSpareTmr is NOT running
LteRrmIdle_UpdateScanModeStopBplmn - pPrimaryCell NULL (State : %d)
LteRrm_AllocCellInfoBuf: TargetCell
TargetCell is NULL as a result of LteRrm_AllocCellInfoBuf()
please check: PrimaryCell is NULL!!
LteRrm_SendMsgToRrc(LTE_CPHY_FREQ_SCAN_CNF)
Invalid LTE_STOP_SCANNING (%s State)
[%d] sibEarfcn[%d] sibBw[%d->%d]
[%d] sibEarfcn[%d] sibBw[%d]
LTE_SIB1_READ_FAIL & Spare timer expired: CellSel.CellIdx(%d)
skip LTE_CPHY_FREQ_SCAN_DONE_NTF(%d) in PLMN_SCAN_STOP state
LteRrmIdle_UpdateScanMode - Invalid mode(%d)
LteRrmIdle_ProcFreqScanDoneNtf(scan_update = %d, %d)
LteRrmIdle_ProcFreqScanDoneNtf(scan_update = %d)
Invalid gLteRrmDB_BplmnState = %d
[%d] EARFCN: %d, value: %d, peak rate: %d, pow_val:%d, psch_max_sum:%d
Earfcn is last(%d)
Invalid Scan mode (%d)
LTE_STOP_BPLMN_SCAN: DrxSpareTmr is NOT running
Sending LTE_CPHY_FREQ_SCAN_CNF to RRC (num_freq_in_list = %d)
Sending LTE_CPHY_FREQ_SCAN_CNF to RRC (num_freq_in_list = %d)
BPLMN start (BplmnTargetEarfcn=%d)
Invalid BPLMN state (%d)
pFreqInfo==NULL in LteRrmIdle_ResetCrTrigFlag
- earfcn(%d) cell_id(%d): reset IsTreselectionTrig(%d)
- earfcn(%d) cell_id(%d): reset IsTReselStarted(%d), TReselectionStart(%d), MeasureRetriedBeforeReselection(%d)
pFreqList==NULL in LteRrmIdle_ResetFreqCrTrigFlag
LteRrmIdle_ResetHighEqualFreqCrTrigFlag
InitSrchCanx: (%d)Update cell: cp_type(%d), cell_id(%d), time_offset(%d)
- RSRP(%d), ant_num(%d), dl_bw(%d)
TargetCell is NULL. No update for InitSrchCanx
Reset csr Inf_cell set for InitSrchCanx
sorting inf cells with rsrp
Cells larger than (%d)-th place deleted
Mode change to LTERRM_INF1TOL1LC. Not overlapped. Timing diff(%d)
Mode change to LTERRM_INF2TOL1LC. Overlapped. Timing diff(%d)
Try InitSrchCanx -> Mode change to LTERRM_INF1TOL1LC
num_cell == out of range
Save Prev INF Info and Init InfCellset
InitSrchCanx: InfMode == LTERRM_INFDEFAULT
InitSrchCanx: InfMode == LTERRM_INF1TOL1LC
InitSrchCanx: Sync Ncell detected once again
InitSrchCanx: InfMode == LTERRM_INF2TOL1LC
InitSrchCanx: Wrong LTERRM->Set.InfMode
InitSrchCanx: No INF-suspected cell exists
LteRrmIdle_ResetTempQoffsetList
LteRrmIdle_StartTempQoffsetTimer
- No cells to run temp Qoffset timer
temporary Qoffset Tmr START(%d ms)
No running timer found for temp Qoffset -> Need to check
Temp Qoffset exist(%d)
- Temp Qoffset number error. pList == NULL -> Not applied
- %d. duration is too large(%d) -> Not applied
- LTE:rat(%d) earfcn(%d) pci(%d) qtemp_offset(%d) timestamp(%d ms) duration(%d s) -> expireTime(%d us)
- UMTS:rat(%d) arfcn(%d) pci(%d) qtemp_offset(%d) timestamp(%d ms) duration(%d s) -> expireTime(%d us)
- GSM:rat(%d) arfcn(%d) BSIC(%d) qtemp_offset(%d) timestamp(%d ms) duration(%d s) -> expireTime(%d us)
- rat(%d) out of range
Warning!! Temp Qoffset OffsetNum(%d) out of range -> Not applied
Applying temp Qoffset to earfcn(%d) pci(%d)
- TempQoffset(%d): Srxlev or RSRP (%d->%d)
- TempQoffset(%d): Squal or RSRQ (%d->%d)
- Dropped cell was in T_reselection
- HigherPrioCRTriggered-- (%d -> %d)
- IntraFreqCRTriggered-- (%d -> %d)
- EqualPrioCRTriggered-- (%d -> %d)
ERROR: pTargetFreq == NULL
- Check Compared Freq (Earfcn(%d),Pci(%d) priority(%d), IsTreselectionTrig(%d)
- Check Target Freq (RAT Type:(%d), Earfcn(%d), priority(%d)
- Reselection to lower-prio. suspended (Earfcn(%d),Pci(%d) has higher priority(%d)>(%d))
ERROR: pTargetFreq == NULL
Monitor any cells under reselection (higher priority than earfcn:%d)
[PPP] Test SIM: Don't check PPP
[PPP] visitedCellList is NULL or empty
[PPP] intra-freq case - no PPP
[PPP] no 2nd candidated info - no PPP
[PPP] there is no Freq(%d) in SIB5 - no PPP
[PPP] Compare (%d-%d)(%d-%d)
[PPP] Hit (target freq=%d, ori-priority(%d), fake-priority(%d), interval(%d_%d), PPThreshold(%d)
[PPP] non-Hit (target freq=%d, interval(%d_%d), PPThreshold(%d)
[PPP_restore] no matched (%d)
[PPP_restore] Freq(%d), ori priority(%d), fake priority(%d)
Warning!! earfcn of pFreqInfo(%u), pCellInfo(%d) different in LteRrmIdle_IsSuitableCellFound
- Suitable Ncell (%u/%d) found
