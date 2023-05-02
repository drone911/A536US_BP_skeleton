rr_NbNear(%d) rr_NbFar(%d)
SERV_CELL
RRsync
--------------------------------
NcellRxLevInd : No samples for NearCell(%d)
Trigger PickNextBestCell after NCELL_RXLEV_IND Processing
SoftSumVal(%d) Improved! Avoid ImmResel
Resel in Progress (%d) || PostResel(%d): Cannot rr_CheckFor Resel due to softsum,
Target Cell Bcch Read Already Ongoing on %d BcchReadCauseImmResel %d
1. SoftSum Bad in NON-DRX mode Go for Resel
NON-DRX mode in BAD channel, No SuitableCell with RxLev>10
1.1 SoftSum in Danger Zone (less than 850) Check for BCCH read on Suitable Cell (%d) (%d)
1.2 SoftSum in Danger Zone (less than 850) :No Cell with Valid C1 C2 so Find one
1.3 Found N Cell ,Add rr_TargetCellForBcchRead CellToSIQHead (%d) Rxlev (%d)
SoftSum is Bad (%d) (less than 900 but bigger than 850) Tick (%d)
2 NON-DRX mode in BAD channel Go for Resel
NON-DRX mode in BAD channel, No SuitableCell with RxLev>10
Two times SoftSum in Danger Zone:Trigger Resel (less than 900 but bigger than 850)
2.1 Check for BCCH read on Suitable Cell (%d) (%d)
SoftSum in Danger Zone:Trigger Resel (less than 900 but bigger than 850) : No C1 C2 availableCells
Check If there is N Cell with Valid BSIC : BcchReadCause(%d)
2.3 Found N Cell ,Add rr_TargetCellForBcchRead CellToSIQHead (%d) Rxlev (%d)
PCH BLER (%d) Improved! Avoid ImmResel
Resel in Progress: Cannot rr_CheckForImmediateResel
NON-DRX mode in BAD channel
NON-DRX mode in BAD channel, No SuitableCell with RxLev>10
PCH BLER in Danger Zone
PCH BLER in Danger Zone: No avialble C1 C2 Cells
Try to find valid BSIC cells
AddCellToSIQHead Try BCCH_READ for (%d) Rxlev (%d)
Resel in Progress: Cannot rr_CheckForImmediateResel
SoftSum in Danger Zone (less than 850)
SoftSum in Danger Zone (less than 850) : No C1 C2 availableCells
Try to find valid BSIC cells
AddCellToSIQHead Try BCCH_READ for (%d) Rxlev (%d)
Resel in Progress: Cannot rr_CheckForImmediateResel
PCH BLER in Danger Zone
PCH BLER in Danger Zone: No avialble C1 C2 Cells
Try to find valid BSIC cells
AddCellToSIQHead Try BCCH_READ for (%d) Rxlev (%d)
rr_DetectAbnormalRRState: RR_RAT_RESUME_NULL and got SCELL_RXLEV_IND
State mismatch btw GRR and other stack
MPH_SCELL_RXLEV_IND
rr_ServCell is NULL! Ignore MPH_SCELL_RXLEV_IND
[G2U][PRIO] rr_ScellRxlevInd: IgnoreLowPriority:%d is changed(prev:%d) and NumLowPrioUarfcn:%d, Update3GScanAndMonitorList
(CIQ)## CIQ_REPORT in IDLE MODE State : %d , ARFCN :%d, CIQ_BSIC : %d, REAL_BSIC : 0x%x, BandIND : 0x%x
UpdatePccnMeas: Subst for NCell(%d)
SCell(%d) is out of band
rr_ServCell is NULL! Ignore MPH_NCELL_RXLEV_IND
MPH_NCELL_RXLEV_IND -> NoOfMeas(%d)
No measurement samples for ARFCN(%d)
CIQ[53-Idle] ucNumGsmMeas(%d) ucNumInterRatMeas(%d) ucBandInd(%d)
CIQ[53-GSMmeas] wArfcn(%d) ucBsic(%x) ucRxlev(%d)
CIQ[53-InterRatmeas] wUarfcn(%d) wScramblingCode(%d) ucRssi(%d) ucEcN0(%d) ucRscp(%d)
IdleStatic: NCellAvg: Arfcn:%d RxLev:%d
IdleStatic: NCellRxLevChange:%d Avg:Arfcn:%d RxLev:%d Current:Arfcn:%d RxLev:%d
Keep RR_FULLY_STATIONARY, RxLev (%d) during LTE TP
IdleStatic:%d Stationary:%d TopNCell:(%d) (%d)
IdleStatic: Decide FULLY_STATIONARY according to peer stack (3G : %d, 4G : %d) condition
LteDataOngoing
IdleStatic: Reset
SCell RxL(%d) Bsic(0x%x) SoftSum (%d) PCH BLER (%d)
SOFTSUM (%d) is low on Scell (%d) Check for Imm Resel
Immedieate Resel trigger option : PCH BLER
NoOfIdleMeas(%d)
N->F:%d
F->N:%d
N->F:%d
F->N:%d
CtxCount val(%d) > 65 , ERROR:%d
CtxCnt(%d)
PendedArfcnByLteMeas:%d
Avoid SI read BCCH Read of NCell after Resel Failure in Progress
Best Far Cell(%d), RxL(%d)
