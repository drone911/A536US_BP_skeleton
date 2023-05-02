CbchState:ON=>REQUIRED due to removing serv cell
MPH_INIT_REQ : rr_PurgeSyncRequired(%d)
invalid FreqPosition + rr_FreqPos_offset : %d
Parallel ARFCN: %d, SYNC_REQ_SENT
ARFCN: %d, sync_status(%d)!=SYNC_REQ_PENDING, max_arfcn_try:%d
Parallel ARFCN: %d, CELL_NOT_SUITABLE_FOR_SYNC_REQ
Pause cell selection. rr_State(%d)
ERROR RtkGetMemory returned NULL
CellSelec: Warning Memory Leak: rr_PowerMsg:%x
ERROR RtkGetMemory returned NULL
Idx %d: Arfcn %d, RxLev %d, LowPrio %d
BPLMN: Foreground BCCH made as not ongoing for ARFCN %d
BPLMN: in SUSPEND_NULL state, after BPLMN DRX timer expiry waiting for response of MPH_STOP_RXLEV_REQ and received MPH_RXLEV_CON
Skip ARFCN(%d) after Immediate Reselection
Resume CellSelection from last cell position mode(%d)
Wrong FreqPos in CellSelection %d
Last Serv Cell %d, rr_LastServArfcn.Cnt %d, rr_TryCampingToLastServCell %d
Cell available (%d), Rxlev cell (%d)
Last Serv Cell is in best cell %d
Best Cell available (%d), RxlevLast best cell (%d)> CellSrchThresholdRssi (%d)
Last registered Serv Cell (%d), Rxlev (%d)
Last Reg Serv Cell rxlev is very less compared to best cell available
Last Serv Cell is in best cell %d
Last Serv Cell weak cell %d, rxlev %d
Total %d ARFCNs tried, MaxAllowed %d
BAND Not Supported by Operator : ARFCN(%d)
Arfcn %d not tried, Total (%d) ARFCNs , RxlevOk(%d), LowPrio (%d),InBA (%d), HC (%d)
Wait timer is still active : Restart Selection (%d)
L2G Redir Failed
CellSelec:ERROR: Invalid State Change %s => %s
CellSelec:Warning: OngoingBand %s, but rr_BandInd %d changed! Restart
CellSelec: Wait for Suspend Cnf
rr_QuickSearch %d: PlmnSearchReq again with Full scan
rr_CellSelection: Mode %d
Avoid SRRC check in cell Sel
Cell Selection can not be proceed
---> START CELL SELECTION <---
RR_SAVED_FREQ: CellSelec: SRCH CMPLTD
CellSelec: SRCH CMPLTD
Trigger MCC SRCH Fail to MM
CellSelec: SRCH CMPLTD
CellSelec: SRCH CMPLTD
CellSelec: SRCH CMPLTD
PLMN re-selection
CellSelec:ERROR: Invalid request
CellLocking: rr_BandInd %d
CellLocking: %d %d
CellSelec: Band switched
rr_BandInd is changed to %d at 2nd stage
CellSelec: Try to select a low priority cell
CellSelec: No low priority cell to search
CellSelec:ERROR: Invalid state
TMOUSA: Make 900 Band Low Priority than 1900, 850
CellLocking: Add BA for %d
rr_FullBa
MRU: Add MRU[0]: %d
MRU: rr_LastServArfcn Fce(%d)
MRU: Stored Cell Search Error, rr_LastServArfcn.Cnt is %d
STORED_CELL_SEARCH: There's no Stored Ba for both stage
STORED_CELL_SEARCH: There's no Stored Ba for 1st stage
STORED_CELL_SEARCH: There's no Stored Ba for 2nd stage
STORED_CELL_SEARCH: There's no Stored Ba
FULL_SCAN_EXCLUDING_STORED_CELL_SEARCH: There's no stored Ba to inverse
FULL_SCAN_EXCLUDING_STORED_CELL_SEARCH: Inversing Stored BA mode
Take Last Registered BA list:
Take SIM BA list(USIM):
MRU: Add MRU[0]: %d
MRU: rr_LastServArfcn Fce(%d)
MRU: Stored Cell Search Error, rr_LastServArfcn.Cnt is %d
MRU: rr_UpdateLastServArfcn
MRU: rr_UpdateLastServArfcn Remove it from the list
MRU: rr_LastServArfcn.Cnt = %d
MRU: rr_UpdateLastServArfcnForHplmn
MRU: rr_UpdateLastServArfcn Remove it from the list
MRU: rr_LastServArfcn.Cnt = %d
CellSelec:ERROR: Invalid request
CellSelec:ERROR: Invalid TryCellPriority %d
CellSelec:ERROR: Invalid NbLowCell %d
CellSelec:ERROR: Invalid Index %d
CellSelec:rr_State %s rr_CellSelState %s Mode %d
CellSelec: InverseBa(%d) PlmnListReq(%d)
CellSelec: OngoingBand(%s) SwitchBand(%s) BandInd(%d)
AddLowPrioCell:%d
LowPrioCell:%d
EqPlmn --> LowPriority !!
BPLMN: RR_BPLMN_DRX_TIMER rem_time (%d)micro s
BPLMN: Sleep Time %d less than MIN_BPLMN_SLEEP_TIME_REQUIRED_FOR_BCCH %d
BPLMN: reset: FrgrndBcchOngoing ARFCN %d
BPLMN: ServCell SI 2Q read later, to allow BPLMN
BPLMN: rr_BPlmnNextBcchReq: ret: FrgrndBcchOngoing ARFCN %d
ResumeFromLastArfcnIndex: %d
Retry Same Band Again for missed BCCH: AttemptNum(%d)
ResumeFromLastArfcnIndex: %d
BPLMN: RR_BPLMN_MAX_ARFCN_TRY %d tried!
BPLMN: CurrentIndex:%d > NbFreq:%d !
BPLMN: Try Arfcn %d Rxlev %d, total tried:%d
BPLMN: Ignored because not in Search List: ARFCN %d!
BPLMN: Ignore Arfcn %d Rxlev %d
PLMN ID:%x %x %x Missing! Add ARFCN:%d in band:%d into List
BPLMN: FB-SB Failed in ARFCN %d with sleep time %d ms
BPLMN: ARFCN %d SYNC NOT acquired: %d
BPLMN: ARFCN %d SYNC ACQUIRED: %d
BPLMN: ARFCN SYNC FOUND. Retry to maximum 2 times. %d has been stopped %d times
BPLMN: SYNC ARFCN %d has been stopped %d times, attmepting next
Function: rr_FilteringNon2GCell num Cells %d
CELL(ARFCN %d, %ddBm) => isValid2G(%d), isValid3G(%d)
CELL(ARFCN %d, %ddBm) => Non 2G signal
CELL(ARFCN %d, %ddBm) => Non 2G signal
Filtered cell is exist. Sorting again!!
FilteringAdjacentArfcnSideLobe num Cells %d
CELL(ARFCN %d, %ddBm) => SideLobe of CELL(ARFCN %d, %ddBm)
CELL(ARFCN %d, %ddBm) => SideLobe of CELL(ARFCN %d, %ddBm)
CELL(ARFCN %d, %ddBm) => SideLobe of CELL(ARFCN %d, %ddBm)
CELL(ARFCN %d, %ddBm) => SideLobe of CELL(ARFCN %d, %ddBm)
Avoiding filtering Adjacent ARFCNs Side Lobe during STORED_CELL_SEARCH
Function: rr_UseBandModeGsm900
Function:rr_UseBandModeGsm850
Function:rr_UseBandModeDcs1800
Function:rr_UseBandModePcs1900
Function:rr_UseBandModeGsm900_1800
Function:rr_UseBandModeGsm900_850
Function:rr_UseBandModeGsm900_1900
Function:rr_UseBandModeGsm850_1800
Function:rr_UseBandModeGsm850_1900
Function:rr_UseBandModeGsm900_850_1800
Function:rr_UseBandModeGsm900_850_1900
TMOUSA: Make 900 Band Low Priority than 1900, 850
3G filtering Index(%d ~ %d) ARFCN(%d ~ %d): ARFCNs are not consecutive, exit filtering process
3G filtering Index(%d ~ %d) ARFCN(%d ~ %d): mean %d , exit filtering process
3G filtering Index(%d ~ %d) ARFCN(%d ~ %d): mean %d, variance %d
Idx %d: Arfcn %d, RxLev %d
rr_PlmnState %d
Mark 3G filtering result for BPLMN searching
BPLMN: Try Same ARFCN: with index:%d cause:%d
BPLMN: CurrentIndex:%d, MinWindowIndex:%d MaxWindowIndex:%d IsDirectionForward:%d
rr_ReArrangePowerScanResults: Arfcn (%d)
rr_ReArrangePowerScanResults: Re-arrange RSSI SCAN results not required
Abort PLMN List Req Done: Received Power Rsp
New Plmn Search Handle: Received Power Rsp
DSDS busy Stop CELL SEL:Exit
Received Power Rsp (%d) in Paused State ...
rr_TriggerRxlevReqCounter(%d)
rr_MaxPlmnSearchFailCounter(%d)
Trigger rr_NoCellToMM
RxLevRetryTime (%d), IsConitnuousSearch (%d)
Start Trigger RXLEV REQ AGAIN timer
DSDS BUSY: During Discrete Cell Search
rr_band_type_local=%s
CellSelec:ERROR: Invalid rr_band_type_local
BPLMN: MPH_RXLEV_CON came for Background: rr_band_type_local %s
BPLMN:Error: Invalid rr_band_type_local
BPLMN RSSI SCAN Reject, RssiRetryTime(%d), rem_time(%d)
(rem_time < (MIN_BPLMN_SLEEP_TIME_REQUIRED_FOR_POWER + MIN_GRR_GL1_ILM_DELAY))
BPLMN:Error: Rxd MPH_RXLEV_CON in wrong BPLMN state
BPLMN:Error: MPH_RXLEV_CON in Unexpected State
Matched Arfcn (%d) has the best Rxlev
Index(%d): Matched Arfcn (%d) Rxlev (%d) within %d of BestRxLev
Index(%d): Matched Arfcn (%d) Rxlev (%d) ignored since more than %ddB less than BestRxLev
cell_idx:%d ARFCN:%d RxLev:%d
Try Arfcn %d
CellSelec: SRCH CMPLTD
CellSelec: Try ImmReselCell Camp
rr_FullBa, rr_FirstPLMNSelection %d rr_SimPresent[StackId] %d
Take SIM BA list(USIM):
Take SIM BA list:(SIM)
Take Last Registered BA list:
Take full BA list
Take stored PLMN BA list:
rr_FirstPLMNSelection %d rr_SimPresent %d
Take SIM BA list(USIM):
Add SIM BA list:
Take Last Registered BA list:
Adding to BA list :- (%d)
Nothing to add
ResumeFromLastArfcnIndex: %d->Reset CurrentIndex:%d
BPLMN: Delete Arfcn %d from rr_BPlmnCurrentBaList[StackId]
Idx %d: Arfcn %d, RxLev %d, rr_IsFceInBa %d
BPLMN: Trying all Failed Cells in current Band Again
BPLMN: CurrentIndex%d, Sorted %d frequencies using ARFCN
