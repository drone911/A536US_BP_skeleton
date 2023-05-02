Freq(%d):Bsic Not allowed
Freq(%d):CCO:Bsic Not allowed
CCO:Bsic allowed with no cause
Freq(%d): Bsic (0xFF) Not allowed
Delay Servng Cell To Reselect
N Cell suitable IF(%d) rr_RegRes (%d): Forbidden LA for roaming: But LAI same as SCell
N Cell is NOT suitable: Forbidden LA for roaming
C1(%d)CellPrio(%d)IF(%d)
Arfcn(%d)
PBCCH:Cell Not Suitable
BCCH PMO:PCCO:Cell Not Suitable
BCCH:Cell Not Suitable
RecSysInfo(%d)
!CellNotSuitable C1(%d)
NumCellWithC31GreaterThanOrEqualToZero %d
Error Possible with no_of_elements :%d
NumElemWithHighPrio(%d)
All NCell(%d)
No PSI : All NCell(%d)
Index %d: Arfcn(%d), PrioClass(%d), C31(%d), C32(%d), TriedForResel(%d)
ERROR: rr_SortForReselection: Invalid ReselAlgorithm(%d)
SCELL(%d) RxLev(%d) Bsic(%x) C2(%d) RA(%d) Lai[3,4](%x,%x)
NCELL(%d) RxLev(%d) Bsic(%x) C2(%d) RA(%d) Lai[3,4](%x,%x)
ERROR: rr_SortForReselection: Invalid ReselAlgorithm(%d)
Cell Count With Same LA RA(%d)
Candidate for re-establishment: Arfcn(%d), RxLev(%d)
Re-establishment target cell Arfcn(%d), RxLev(%d)
No target cell found for re-establishment
ReselectionMode C31_C32
Non-PBCCH,ReselectionMode C31_C32
ReselectionMode C2
ReselectionMode C2
Convert GSM to GPRS resel param
GSM to GPRS Convert Cell %d (0x%x) Valid Params %d
Update Serving Cell GPRSParams NOT in BA list
GPC(%d),HcsThr(%d)
Update Serving Cell GPRSParams in BA list
GPC(%d),HcsThr(%d)
Skip NegC1
### C2 changed to RXLEV for Cell(%d) Rxlev(%d) C2Org(%d)
### C2 changed by linear equation for Cell(%d) C2(%d) C2Org(%d) RxLev(%d), S-RxLev(%d)
Arfcn(%d) C2GtrThanSrv(%d), attempt reading BCCH
Avoid BCCH read for resel candidate cell(%d) during PS Data
Cannot try BCCH read as the read for immediate reselection is going on
ERROR: Invalid Resel Algo(%d)
### Store Resel Parameter for band(%d) from Cell(%d)
### Copy Resel Parameter for Cell(%d) from band(%d)
### Copy Resel Parameter for Cell(%d) from ServCell
Arfcn(%d) : C1(%d) : A = (RLA_C(%d) - RXLEV_ACCESS_MIN (%d) : CurBand(%d),MxTxpwr(%d)
Recalculated: Arfcn(%d) : C1_dBm(%d) : A_dBm = (RLA_C_dBm(%d) - RXLEV_ACCESS_MIN_dBm (%d)
CRO adjustment: org(%d), mod(%d) for ARFCN(%d)
ERROR: !!!Invalid reselection algorithm %d
GSM:rr_NbC1(%d)
C1value C1 value %d Threshold %d
GSM:AUTO_RESEL_REASON(%d)
GPRS:rr_NbC1(%d)
Error Possible with no_of_elements :%d
RESEL Cell(%d) SCell_C32(%d) NCell_C32(%d)
RESEL Cell(%d) SCell_C32(%d) NCell_C32(%d)
GPRS:AUTO_RESEL C1_LESS_THAN_ZERO
GPRS:AUTO_RESEL BETTER_NEIGHBOUR
GetValidCellAfterReselFailure :rr_NbC1(%d)
Check for Cell (%d) BSIC (%x) ReselTried (%d) Rxlev (%d) BarCount (%d) Handiacp(%d) Susp(%d)
GSM:Cell with BSIC (%d) wo Bsic (%d) Nbidle (%d)
Sorted Cell (%d) BSIC (%x) Rxlev (%d)
Total Cells to be evaluated (%d) SyncCellWithoutBsicOnly (%d)
Sorted Cell (%d) BSIC (%x) Rxlev (%d)
rr_NbIdleIndex (%d) ARFCN (%d)
rr_EvaluateCellBeforeSelection: SyncCellWithoutBsic (%d) NbIdle (%d) Try Sync for rr_NbIdleIndex (%d) ARFCN (%d)
[PRIO] rr_ProcessPriorityReselect: EutranResel[Type(%d) prio(%d) S(%d)] VS. UtranPrioResel[Type(%d) prio(%d) S(%d)]
[PRIO] IRAT resel already started, rr_InterRatStatus(%d)
[PRIO] GeranPriorityParam(%d) or 3GPriorityParam(%d) is not present
[G2U][PRIO] -----> SELECT 3G Cell <------
[G2L][PRIO] -----> SELECT 4G Cell <------
No target cell exist, skip Priority Based Reselection
Resel Reason not set! Setting to (%d)
Resel Failure : Evaluate cells before Cell Sel rr_NbIdleIndex (%d)
No reselection - rr_PostCsNonDrxPeriod TRUE
RR_WIMASS RESEL PENDING
RESEL ALREADY PROGRESS
BCCH Read of NCell after Resel Failure in Progress
NC2 MODE ACTIVE
CCN MODE ACTIVE
U2G CCO is in progress
U2G RESEL is in progress
L2G RESEL is in progress
L2G Redir is in progress
L2G CCO is in progress
L2G Redir Cell Selec is in progress
Resel Hold Req from MM is in progress
BPLMN: Filtered Reselection as Manual Ongoing & C1:%d compared with %d, Softsum:%d compared with %d
Resel Cause: %d
rr_RegRes_WaitPLMNSearch is TRUE !! Do not trigger reseletion. Wait for PLMN LIST/SEARCH REQ event from NAS
MMS is oning !! Do not trigger Better Neighbor reseletion
rr_MmRxvdPowerOffInd or rr_MmSuspendRatCnfPending is TRUE !! Do not trigger reseletion.
QRB is running. Abort Resel to Better Cell
CellLocking: Abort Resel to Better Cell
rr_ProcessReselection
GMM signalling is in progress: Filtering Reselection
Peer Stack on data serv cell rxlev(%d) softsum (%d), avoid Better Ncell Resel to avoid TP issue
ACCESS_IN_PROGRESS, Set rr_ReselHoldforIdleCnf
Chn NW, Ignore reselection for C1< 0
Check SRRC state to know if Resel is possible
Wait for SRRC grant
EST msg is pended. Abort Resel to Better Cell
#STARTED RESELECTION#
CCO IN PROGRESS NccoStatus(%d)
Immediate Reselection in Cell(%d)
PostCsNonDrxPeriod: %d -> %d
QRB is running. Abort IMMEDIATE RESELECTION
CellLocking: IMMEDIATE RESELECTION
Check SRRC state to know if Resel is possible
Wait for SRRC grant, reselection_reason(%d)
ACCESS_IN_PROGRESS, Set rr_ReselHoldforIdleCnf
IMMEDIATE RESELECTION
RACH Failure
Simflag %d
Reselect Imm - CCO failed
RACH Failure after IRAT procedure %d
StopBetterNeighborReselection(%d)
BestNeigh:rr_NbC1(%d)
Suspended Cell with ARFCN %d not chosen for resel, try intermediate resel
SELECT BEST NEIGHBOUR (%d)
Reselection reason is (%d)
!!!Reselection Cell(%d) is out of band
START RESELECTION ON Arfcn:%d
ABNORMAL RESELECTION ON Arfcn:%d
NORMAL RESELECTION ON Arfcn:%d
Error!!!rr_ReselectionCell == NULL
!!! Reselection Cell NULL !!!
RR_NO_RESELECTION_STATE
RR_RESEL_READ_ALL_SI3478_STATE
RR_RESEL_WAIT_IDLE_CNF_STATE
RR_RESEL_STOP_TBF_STATE
RR_RESEL_READ_SI3_4_STATE
RR_RESEL_READ_SI1_13_STATE
RR_RESEL_CAMP_ON_STATE
!!! Wrong cell in CAMP_ON_STATE !!!
Wrong ReselectionState
StopCellResel: Cell(%d) ReselReason:%d
CCO fail going to target cell
NCCO Fail - NccoStatus(%d) Cause (%d)
Packet Access Reject
Access failed
Re-RACH
PCCO fail going back to OLD cell
Resume RLC after fail to camp back to old cell post PCCO fail
Cell Change from UTRAN failed
T309_EXPIRY: CCO: rr_SimFlag(%d) rr_State(%d)
UL_ASS_CROSSOVER, Do not trigger IDLE REQ
Cell Change from EUTRAN failed
UL_ASS_CROSSOVER, Do not trigger IDLE REQ
Cell Reselection from UTRAN failed
Cell Reselection from LTE failed
#Pick Next Best Cell#
RR_RESEL_READ_ALL_SI3478_STATE
RR_RESEL_READ_SI3_4_STATE
Reselection state %d
Pick Next Best:Resel Reason(%d)
No GSM Cell Left rr_NbIdleIndex (%d)
Cell Reselection to Different LAI STOPPED to answer paging
Cell Reselection STOPPED to answer paging, Different LAI
SCELL LAI (%x %x %x %x %x) RA color %d
NCELL LAI (%x %x %x %x %x) RA color %d
Ignore NCell(%d) CCN is Allowed, Not suitable for Delay EST_REQ
SCELL LAI (%x %x) RA color (%d) RxL (%d) C2 (%d)
NCELL(%d) LAI (%x %x) RA color (%d) RxL (%d) C2 (%d) C2GrServing (%d)
No Suitable NCell With Good C2 Greater Than Serving Present
EstReqCause:%d, Wait for Resel before handling EST_REQ
EstReqCause:%d, Wait for Resel to cell with same LAI, before handling EST_REQ
EstReqCause:%d, Dont Wait for Resel to cell with DIFF LAI, before handling EST_REQ
EstReqCause:%d, Wait for Resel to cell with same LAI, before handling EST_REQ
EstReqCause:%d, Dont Wait for Resel to cell with DIFF LAI, before handling EST_REQ
Start EST_REQ waiting for Resel
Found a Suitable Cell for Resel: Cell(%d) RxLev(%d)
Didn't Find a Suitable Cell for Resel
Didn't Find a Suitable Cell for Resel
rr_ResetImmCellStatusInSyncList
ERROR!!!!!!!!!!! SuitableCell=NULL!
Resel in Progress: Cannot Try rr_TargetCellForBcchRead:%d
Dont try TargetCellForBcchRead as C2GreaterThanServing:%d
Add rr_TargetCellForBcchRead CellToSIQHead %d
Not add rr_TargetCellForBcchRead ToSIQHead - %d %d %d
Schedule BCCH read on rr_TargetCellForBcchRead(%d)
!!! Wrong GPC !!!
IdleStatic: SCell C2 (%d)
Skip increments for C1 lessthanzero counter
TriedForReselection(%d) - !!!Freq(%d):Not Suitable!!!
!!!Freq(%d):Not Suitable!!!
Freq(%d):Not Suitable for IMM RESEL=> status (%d)
BPLMN: Reselection criteria allowed for %d with same RA_Color
BPLMN: Reselection NOT allowed for %d with same RA_Color: Not suitable
BPLMN: Reselection criteria allowed for %d with same RA_Color: Found in List
BPLMN: Reselection not allowed for %d with different RA_Color: Found in List
BPLMN: Reselection criteria allowed for %d with different RA_Color: No Suitable in List
BPLMN: Reselection criteria during HPLMN
!!InValid NCell Param Arfcn(%d)
!!!Buffer overflow, array index of 'MaximumRFoutputPower_Table[]' may be out of bound ms_power_class is %d !!!
C1 Calc: B(%d)=(PCL(%d)-P(%d)) : P class %d
!!!Wrong Power Class(%d)!!!
!!!GSM:Wrong PowerClass(%d)!!!
Freq(%d):ReselSusTimerActive
UNSUCCESSFUL RESELECTION
Try re-establishment on the SCell
Cell unsuitable for re-establishment C1:%d, RE:0x%x
Cell unsuitable for re-establishment C1:%d, RE:0x%x
Cell Is Not Suitable
Bsic Not Allowed
Idle Confirm from L1 pening in ReselCampon
rr_WaitSiAfterResel %d
