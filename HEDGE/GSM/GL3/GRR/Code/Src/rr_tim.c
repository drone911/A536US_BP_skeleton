Start NcellReadTimer (5 sec)
!!!Invalid ReselAlgo!!!(%d)
rr_BPlmnReadReqToL1WatchDogTimerExp: %d
BPLMN: Stop RXLEV
BPLMN:Error: Unexpected
rr_CellSrchBcchReadReqToL1WatchDogTimerExp: %d
rr_StartCellSrchBcchReadReqToL1WatchDogTimer: %d
rr_StopCellSrchBcchReadReqToL1WatchDogTimer: %d
rr_StartCellSearchOnDurationTimer: rr_CellSrchOnDurationTimer(%d)
rr_StartCellSearchOffDurationTimer: rr_CellSrchOffDurationTimer(%d), rr_State(%d)
Start Timer to trigger SCELL BCCH READ REQ again (500 ms)
Error # BCCH READ REQ timer already started
rr_StopTriggerBcchReadReqTimer
rr_TriggerBcchReadReqTimerExp Trigger BCCH READ REQ
rr_StartTriggerCellSrchBcchAgainTimer to resend BCCH
rr_StopTriggerCellSrchBcchAgainTimer
rr_TriggerCellSrchBcchAgainTimerExp resend BCCH
Start Timer to trigger IDLE REQ again (300 ms), rr_IdleReqRejectCount(%d)
ERROR RR_IDLE_REQ_REJ_MAX_COUNT_REACHED
Error # Ilde Req timer already started
rr_StopTriggerIdleReqTimer
rr_TriggerIdleReqTimerExp Trigger IDLE REQ
Error # No IDLE REQ Pending rr_IdleReqPending %d rr_IdleReqState %d
Other Stack is busy, Start IDLE REQ Timer Again
Start Timer to trigger RXLEV REQ again (%d ms)
Error # Rxlev Req timer already started
rr_StartDiscreteCellSearchOnReq: RxLevRetryTime (%d us)
Error # rr_StartDiscreteCellSearchOnReq already started
Start Timer to trigger BPLMN RXLEV REQ again (%d microSeconds)
Error # Rxlev Req timer already started
rr_StopTriggerRxlevReqTimer
rr_StopTriggerRxlevReqTimer
rr_TriggerRxlevReqTimerExp: Trigger RXLEV REQ
rr_TriggerBplmnRxlevReqTimerExp: Trigger RXLEV REQ
rr_StopTriggerRxlevReqTimer
rr_TriggerDiscCellSrchOnTimerExp: Trigger DISC CELL SRCH IND to GL1
Start Timer to trigger RESUME RAT REQ again (300 ms)
Error # RESUME RAT Req timer already started
rr_StopTriggerResumeRatReqTimer
rr_TriggerResumeRatReqTimerExp Trigger RESUME RAT REQ
Start Timer to trigger PG REORG REQ again (300 ms)
Error # PG REORG REQ timer already started
rr_TriggerPgReorgReqTimerExp: Trigger PG REORG RAT REQ
DTM: T3148 Started
DTM: T3148 Stopped
DTM: T3148 has expired
[CandSrch] rr_StartCandRplmnGuardTimer
[CandSrch] rr_StopCandRplmnGuardTimer
[CandSrch] rr_StartCandRplmnPeriodicTimer
[CandSrch] rr_StopCandRplmnPeriodicTimer
(CIQ)## in rr_StartCIQREPORTTimer on Transfermode %d ms
(CIQ)## Transfer mode State %d, BsPaMfrms : %d, Bsic : 0x%x, Arfcn : %d, Rxlev : %d, curband : 0x%x
Start SuitableCellTimer for (%ds)
SuitableCellTimer Alreday running
Stop SuitCellTimer
Stop CallReestabTimer
BPLMN: NumSIReadBuffered %d: rr_StopBPlmnDrxGuardTimer -> ProcessSIRead
BPLMN: rr_StartBPlmnDbTimer(%d)
BPLMN: rr_StartBPlmnlistValidTimer
BPLMN: rr_StopBPlmnlistValidTimer
BPLMN:Error: Already rr_BplmnDrxTimer Stopped But timer exp!
BPLMN:Error:!Invalid BPLMN State
BPLMN: TimerExp - State transition
BPLMN: TimerExp - State transition
BPLMN:Error:!Invalid BPLMN State
rr_CheckForNcellsToRead -> Elem %d
NCellReadWatchDogCounter:%d
rr_CellSearchOnDurationTimer Stopped
rr_CellSearchOffDurationTimer Stopped
Non drx 0 --> Go Camped State
No IDLE REQ to GL1, NAS SIG is ongoing
Non drx 0 --> Go Camped State
Cell sync T/O during U-G HO
Cell sync T/O during G-G HO
Cell sync T/O during CCO
CCO TimerExp - During IDLE REQ
Cell Change Order timeout IdleReqState(%d) PktTransferState (%d) ACCESS (%d) NccoStatus (%d)
T309 Expired
T304 Expired
T3134 Expired
T3174 Expired
T3176 Expired
Result(%d) New NccoStatus (%d)
Release TBF : NccoStatus (%d)
IDLE REQ in Progress:NccoStatus (%d)
Start T3206
Stop T3206
Start T3210
Stop T3210
Start RR_TIM_BPLMN_PAUSE_DURATION_MONITOR_TIMER
Start Uarfcn Reselection Scan timer
Stop Uarfcn Reselection Scan timer
Start SuspTBFUarfcnScan Timer
Stop SuspTBFUarfcnScan Timer
Start RECOVERY_FROM_WAIT_FOR_IDLE_CNF Timer
Stop RECOVERY_FROM_WAIT_FOR_IDLE_CNF timer
RECOVERY_FROM_WAIT_FOR_IDLE_CNF timer expired!!! IdleReqState:%d
GRR_MM_UNRECOVERED_IND: FROM_WAIT_FOR_IDLE_CNF
ERROR RECOVERY_FROM_WAIT_FOR_IDLE_CNF
Start RR_TIM_RECOVERY_FROM_WAIT_FOR_RXLEV_CON Timer
Stop RR_TIM_RECOVERY_FROM_WAIT_FOR_RXLEV_CON timer
RR_TIM_RECOVERY_FROM_WAIT_FOR_RXLEV_CON timer expired!!! IdleReqState:%d
GRR_MM_UNRECOVERED_IND: FROM_WAIT_FOR_RXLEV_CON
ERROR DS_RR_TIM_RECOVERY_FROM_WAIT_FOR_RXLEV_CON
Start RR_TIM_RECOVERY_FROM_WAIT_FOR_SUSPEND_CON Timer
Stop RR_TIM_RECOVERY_FROM_WAIT_FOR_SUSPEND_CON timer
RR_TIM_RECOVERY_FROM_WAIT_FOR_SUSPEND_CON timer expired!!! IdleReqState:%d
GRR_MM_UNRECOVERED_IND: FROM_WAIT_FOR_SUSPEND_CON
ERROR RR_TIM_RECOVERY_FROM_WAIT_FOR_SUSPEND_CON
Start RR_TIM_NO_CELL_IND Timer
Stop RR_TIM_NO_CELL_IND timer
Start RR_TIM_RECOVERY_FROM_WAIT_FOR_RESUME_CON Timer
Stop RR_TIM_RECOVERY_FROM_WAIT_FOR_RESUME_CON timer
RR_TIM_RECOVERY_FROM_WAIT_FOR_RESUME_CON timer expired!!! IdleReqState:%d
GRR_MM_UNRECOVERED_IND: FROM_WAIT_FOR_RESUME_CON
ERROR DS_RR_TIM_RECOVERY_FROM_WAIT_FOR_RESUME_CON
START 3G Wait Timer For Redirection from 3G to 2G %d rr_WaitTimerfromURRC %d
3G Wait Timer For Redirection from 3G to 2G expiry %d
Restart Cell Selection as not able to camp on Cell Provided
[GRR][FAKE] Start Fake Cell Ind 10 Min timer
[GRR][FAKE] Stop Fake Cell Ind 10 Min timer
[GRR][FAKE] Fake Cell Ind 10 Min timer Expiry
ANR: Start AnrSleeptimer (%d)
ANR:Error: Already AnrSleeptimer Running but attempting to start
ANR: Stop AnrSleeptimer
Handle AnrSleeptimer Expiry
ANR:Error: Already rr_AnrSleeptimer: Already rr_BplmnDrxTimer Stopped But timer exp!
ANR:Error:!Invalid BPLMN State
Start Disable RxlevHack timer for 30 sec
Stop Disable RxlevHack timer
DisableRxlevHackTimerExp So Enable RxlevHack
QRB: rr_QrbGuardTimerExp
QRB: rr_StartQrbGuardTimer
QRB: rr_StopQrbGuardTimer
T3124 expired in state RR_WPHYSINFO
RR_BCCH_SCELL_READ has expired
During BPLMN->Ignore ScellReadExp
Resume CellSelec %d %d
LTE_Meas Ongoing at GL1, Pend SCELL BCCH READ for %d Seconds
IdleStatic:Count:%d Skip RR_BCCH_SCELL_READ
IdleStatic:Count:%d Allow RR_BCCH_SCELL_READ
RR_BCCH_SCELL_READ 30s has expired GRR ## NeedSI(0x%x)
#### Do not append SI 13
RR_BCCH_SCELL_READ 30s has expired
RR_NCELL_BCCH_READ has expired
QRB: Start! QRB was pending due to IRAT measurement in L1
Value is not updated
Value is not updated
rr_CellSearchOnDurationExp Entered
rr_CellSearchOffDurationTimerExp Entered
Suitable Cell Timer expiry, rr_State[StackId](%d)
Non-DRX timer expired
Wait for end of CS non-DRX period
Go Camped State
No action
T3206 Expired
T3208 Expired
T3210 Expired
Uarfcn Reselection Scan timer expired
Timer is already stopped. No action is required
NbUtranReselUarfcnsToScan(%d), ScanNeeded(%d)
SuspTBFUarfcnScan Expiry
BPLMN: rr_BPlmnlistValidTimerExp
BPLMN: NumSIReadBuffered %d: rr_BPlmnDrxGuardTimerExp -> ProcessSIRead
BPLMN: rr_BPlmnDbTimerExp
RR_TIM_NO_CELL_IND timer expired!!!
GRR_MM_UNRECOVERED_IND: FROM_WAIT_FOR_NO_CELL_IND
ERROR RR_TIM_RECOVERY_FROM_WAIT_FOR_NO_CELL_IND
[CandSrch] rr_CandRplmnGuardTimer
[CandSrch] rr_CandRplmnPeriodicTimer
[CandSrch] rr_CandRplmnPeriodicTimer: error case....
(CIQ)## CIQ_REPORT in IDLE MODE State : %d , ARFCN :%d, CIQ_BSIC : %d, REAL_BSIC : 0x%x, BandIND : 0x%x
(CIQ)## EXPIRED THE TIMER 480ms for PTM CIQ REPORT
(CIQ)## Transfer mode State %d, BsPaMfrms : %d, Bsic : 0x%x, Arfcn : %d, Rxlev : %d, curband : 0x%x
CIQ[53-PTM] ucNumGsmMeas(%d) ucNumInterRatMeas(%d) ucBandInd(%d)
CIQ[53-GSMmeas] wArfcn(%d) ucBsic(%x) ucRxlev(%d)
CIQ[53-InterRatmeas] wUarfcn(%d) wScramblingCode(%d) ucRssi(%d) ucEcN0(%d) ucRscp(%d)
DTM Supported during DTM
