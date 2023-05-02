ERROR creating RetestUsedFreq Timer
No Memory allocated for rrc_TddNetwork_init
ERROR deleting RetestUsedFreqTimer timer
rrc_TddNetwork_SetScanRequestIn_TotalFreqList:uarfcn updated is %d, uarfcnSrchReqd is %d
Populating FddNetwork instance from Sib11/12 neighbour info
SetScanRequiredBasedOnLTEBplmnSearchInfo %d, BW %d
FddNetwork_AddFreqToIfSupportedFreq : MaxBandCnt:%d, Added DlUarfcn: %d, DetermindedBand: %d, SupportedBand : %d
DlUarfcn(%d) is not supported! SupportedBand(%d)
rrc_TddNetwork_IsSupportedBand : MaxBandCnt:%d, GivenBand: %d SupportedBand : %d
BandId(%d) is not supported!
rrc_TddNetwork_AddCellTo failed. Invalid InterFreqCell frequency value (%i)
rrc_TddNetwork_AddCellTo failed. Invalid InterFreqCell frequency value (%i)
Invalid Cpich: %i for Uarfcn: %i - no entry added to stored network instance
INVALID BAND !!!!! (%d)
isFirstBestCellTryForEnteringIdle %i
>>> StoredCells in TddNetwork <<<
StoredCell[%d] %d
No Freq in TddNetwork
Unknown Message from L1 !!
ERROR Illegal rrc_FddNetwork_MapExtMsgIdToIntMsgId
Started creating a stored network instance from USIM data
Finished creating a stored network instance from USIM data
FreqId is Present For RSSI Scan
FreqId is NULL
[FreqRssiScan] NumFreqs > Max. Num (%d > %d)
FreqId is NULL
Adding Freq %d at index [%d]
Freq %d already present at index [%d]
Cannot have more than 30 freq in StoredNwPtr
SyncDlEngDiff = %d, BestFreqRssi = %d
Uarfcn %i, SyncDlEngDiff %d, SyncDl %i, RSSI %d
CellParamId %i is in LAI list
Wrong uarfcn. Or UE Currently Does not support this BAND
pal_ERegId_FixedCpich: %d
Added Overrided Frequency: %i to TddNetwork at index: %i
ERROR Illegal State
ERROR Illegal State
CellSelectionDone: TddNetwork_p->NumCells (%d)
Update Best RSCP - ServingFreq %d, Cell Param Id %d PccpchRscp %d (%d dBm)
Update Best RSCP - InterFreq %d, Cell Param Id %d, PccpchRscp %d (%d dBm)
CellSelectionDone: ERROR TddNetwork_p->NumCells (%d) > MAXCELLS
RetestUsedFreq:After Restore Freq,NumFreq=%d,CurrentFreqIx=%d
Restore Current Freq[%d]: %i
ERROR Illegal State
End Retest Used Freq Cell
ERROR unable to register for Cell Reselection Notification
start StoredFreqScan for Fetching MCC
ERROR Illegal State
ERROR unable to register for Cell Reselection Notification
Backgnd Search : PlmnId Detection starting - %i Frequencies to examine
Backgnd Search : Blind Frequency Search initaited
Removing frequency: %i from detected list
FreqId is NULL
Ptr: StrongestCell == NULL
Reading MCC Success
ERROR Illegal State
[TddNetwork] DetectedFreqIx %d, NumFreqs %d
ERROR Illegal State
TddNetwork_p->DetectedFreqIx %d
TddNetwork_p->NumFreqs %d
ERROR Illegal State
All frequencies in Band scanned.. exhausted
ERROR Illegal State
ERROR Illegal State
uarfcn %d, SearchRequired %d
[URRC_ANR]: SibSubscriptionType set to %d Because rrc_TddNetwork UtraSiAcqForHoMode(%d) and si_requestForHO(%d)
[URRC_ANR]: rrc_TddNetwork NotActive_SubscribeSysInfoForAnr
[URRC_ANR]: ERROR Adding (%i,%i) to rrc_TddFrequency_AddCellTo
[URRC_ANR]: Adding (%i,%i) to Network in NotActive_SubscribeSysInfoForAnr
[URRC_ANR]: ERROR Illegal State in NotActive_SubscribeSysInfoForAnr
[URRC_ANR]: GenAnrInfoRead SUCCESS received
[URRC_ANR]: GenAnrInfoRead FAIL received
[URRC_ANR]: GenAnrInfoRead ABORTED received
[URRC_ANR]: GenAnrInfoRead NOT EXPECTED msg received
Foregnd Search : PlmnId Detection starting - %i Frequencies to examine
Serious Error: InitiateForegroundNwScanOn No Freqeuncies
Backgnd Search : Blind Frequency Search initaited
Not Selectable! RetestUsedFreq in progress: %d
FreqId is NULL
CheckingCellSuitability_IsNotSelectable
Time to retest Used Freq
retest a barred cell freq (%d)
next RetestBarredCellFreq (%d)
next RetestBarredCellFreq (%d)
FirstBestCellTry From EcNoCellListPtr During EnterIdleFromConnected
Normal CellSelection : TddNetwork try to get next candidate cell
Unknown CurrentSelectionType(%d)!!!!!
FreqId is NULL
RetestUsedFreqTimer :UsedFreqScanInterval[%d]=%d MaxScanInterval[%d]
RetestUsedFreqTimer : CurNumberOfRepeat[%d] UsedFreqScanRepeatCnt[%d]
ERROR starting RetestUsedFreqTimer
RetestUsedFreqTimer started (TmId=%d)
Schedule Retest Used Freq for +%d
Time to Retest Used Frequency
RetestUsedFreq:Backkup Freq,NumFreq=%d,CurrentFreqIx=%d
Backup Current Freq[%d]: %i
Add TddLastUsedFreq
No Used Frequency Available
RetestUsedFreq:Restore Freq,NumFreq=%d,CurrentFreqIx=%d
[LMH] Rscp threshold for LAI checking = %d
Error: Cannot find SIB1 from SCellSysInfoIdx(%i)
Same LAI found at RscpCellListPtr[%i](ARFCN%i/CellParamId%i)(Serving LAC 0x%x, Current LAC 0x%x)
LAI Not matched at RscpCellListPtr[%i](ARFCN%i/CellParamId%i)(Serving LAC 0x%x, Current LAC 0x%x)
RscpCellListPtr[%i] PccpchRscp(%i dBm) Barred(%i)
Error: Cannot find SIB1 from SCellSysInfoIdx(%i)
Same LAI found at SnrCellListPtr[%i](ARFCN%i/CellParamId%i)(Serving LAC 0x%x, Current LAC 0x%x)
LAI Not matched at SnrCellListPtr[%i](ARFCN%i/CellParamId%i)(Serving LAC 0x%x, Current LAC 0x%x)
SnrCellListPtr[%i] PccpchRscp(%i dBm) Barred(%i)
RscpCellList[%i](UARFCN%i/CellParamId%i) already tested, skip this cell list
Rscp_CellList[%i](UARFCN%i/PSC%i) has low HcsPriority(%d) than LastConnecteModeCell(UARFCN%i/PSC%i) HcsPriority (%d), skip this cell list
Rscp_CurrentCellListIx %i (Rscp_NumCells %i)
Rscp_CurrentCellListIx %i (Rscp_NumCells %i)
Snr_CellList[%i](UARFCN%i/CellParamId%i) already tested, skip this cell list
EcNo_CellList[%i](UARFCN%i/CellParamId%i) has low HcsPriority(%d) than LastConnecteModeCell(UARFCN%i/CellParamId%i) HcsPriority (%d), skip this cell list
Snr_CurrentCellListIx %i (Snr_NumCells %i)
Snr_CurrentCellListIx %i (Snr_NumCells %i)
NO Selectable Cell Found in CellListPtr(Rscp_NumCells %i, Snr_NumCells %i)
isRemainingNotTestedFrequency NumFreqs : %d
isRemainingNotTestedFrequency : True
isRemainingNotTestedFrequency : False
Sending Abort Req to Tphy
ERROR Illegal State
ERROR Illegal State
Any Freq Instance and BlindFreqScan Instance exist
Retest Barred Cell on %d
RetestBarredCellFreq array is full
wrong Uarfcn (%d)
Best Frequency searach in Progress
FreqId is NULL
Used Freq Rssi Scan for UsedFreq failed - ignoring results
Added Frequency: %i, Rssi: %i dBm to FddNetwork
Freq Rssi Scan for UsedFreq error - no freq in TddNetwork's FreqList
NumUsedFreqs= %d
NumUsedFreqs= %d
UARFCN %d Rssi%d vs UARFCN %d Rssi%d
FreqRssiScanCnf: Negative Cnf
FreqRssiScanCnf: Positive Cnf
FirstBestCellTry From RSCPCellListPtr During EnterIdleFromConnected
FirstBestCellTry From SNRCellListPtr During EnterIdleFromConnected
FirstBestCellTry From RSCPCellListPtr During Normal CellSelection
FirstBestCellTry From SNRCellListPtr During Normal CellSelection
Detected Freq Scan failed - ignoring results
>> Detected Freq Scan : UARFCN %d, numOfCells %d
Rscp_NumCells= %d
Snr_NumCells= %d
Snrlowthreshold = %d, Snrhighthreshold = %d
AddGoodRscpToRscpCellList & Sort_CellList :: Check Triggering Conditions for RSCP-based Cell Selection
- Rejecting (Uarfcn %d, cellParamId %d) Rscp %d Snr %d cause of BlackList Cell)
- Accepting (Uarfcn %d, cellParamId %d) Rscp %d Snr %d to RscpCellList( > SnrTh(%d))
- Accepting (Uarfcn %d, CellParamId %d) Rscp %d Snr %d to SnrCellList( > %d)
>>> No Rscp Candidate Found on Uarfcn %d
WARNING TddNetwork_p->Rscp_NumCells(%d) > 32*3
>>> No Snr Candidate Found on Uarfcn %d
WARNING TddNetwork_p->Snr_NumCells(%d) > 32*3
+ AddHighSnrToRscpCellList (Uarfcn %i, cellParamId %i) to Temporal CellList: Rscp %i dBm,Snr %d dB
Overwriting existing cell entry
+ AddLowSnrToSnrCellList (Uarfcn %i, cellParamId %i) to Temporal CellList: Rscp %i dBm,Snr %d dB
Overwriting existing cell entry
DetectedFreqScanCnf: Negative Cnf
DetectedFreqScanCnf: Positive Cnf
[URRC SR_IF DSDS]Sending Abort Req to Tphy
ERROR Illegal State
ICS Proc Ongoing Flag is %s
TddNetwork_p->BplmnHandlerptr intance not activated
ERROR Illegal State
Blind Cell Search failed - ignoring results
[MRU Freq %d] RSSI Adjustment:: %d -> %d
Added Frequency: %i, Rssi: %i dBm to FddNetwork at index: %i
BlindFreqSearch: Negative Cnf
BlindFreqSearch: Positive Cnf
Sending Abort Req to Tphy
ERROR Illegal State
[URRC SR_IF DSDS]Sending Abort Req to Tphy
ERROR Illegal State
ERROR Illegal State
ERROR Illegal State
[BPLMN] No Time to complete the BCCH read. Will be done in the next DRX
[BPLMN] No More cells found on Frequency: %i
[BPLMN] No Time to complete Cell search on next strong Freq. Will be done in the next DRX
ERROR Illegal State
ERROR Illegal State
No cells found on Frequency: %i
[BPLMN] remaining Expiry Time: %dms
BPLMN ERROR : Wrong Request
[BPLMN] Error Querying the Timer for remaining time - Pal failure
[BPLMN] Error mapping the timer Handle at PAL and Timer ID at RRC
ERROR Illegal State
Cell detection on the Freq %i failed
ERROR Illegal State
ERROR Illegal State
ICS Proc Ongoing Flag is %s
TddNetwork_p->BplmnHandlerptr intance not activated
[BPLMN] Freq scanned %i, Total Scanned till now %i
[BPLMN] Wrong Band Id %d
[BPLMN] band %d (Freq scanned %d < Total Freq %d)
[BPLMN] band %d: PlmnId Detection starting - Freq to search for Cells/Total freq detected = %i / %i
[BPLMN] starting the stored cell search after Blind Scan
[BPLMN] Not enough time -> shifting the stored cell search for the next cycle
PlmnId Detection starting - NumFreq to examine = %d
PlmnId Detection failed - no freq detected!
PlmnId Detection not possible as Cell Reselection is in progress
[BPLMN] Wrong Band Id %d
ERROR Illegal State
Sending Abort Req to Tphy
ERROR Illegal State
PlmnId Detection starting - %i Frequencies detected
PlmnId Detection failed - no Stored frequencies detected!
Used Freq Rssi Scan for UsedFreq failed - ignoring results
Added Frequency: %i, Rssi: %i dBm to TddNetwork
Freq Rssi Scan for UsedFreq error - no freq in TddNetwork's FreqList
NumUsedFreqs= %d
NumUsedFreqs Valid= %d
[DetectionFreqSearch] CtphyFreqRssiScanCnf - Negative confirmation
[DetectionFreqSearch] CtphyFreqRssiScanCnf - Positive confirmation
ERROR Illegal State
ERROR Illegal State
[BPLMN] BPLMN search under progress
[BPLMN] HPLMN id found
ERROR Illegal State
[BPLMN] Found 1 PLMN
ERROR Illegal State
[BPLMN] HPLMN id NOT found, checking Next Cell on same Frequency
ERROR Illegal State
[BPLMN] No time for BCCH read on Cell, scheduled for next DRX time
ERROR Illegal State
[BPLMN] No cells found on Frequency: %i
[BPLMN] No time for Cell serch, scheduled for next DRX time
ERROR Illegal State
[BPLMN] MIB reading Error on Cell : %i
[BPLMN] checking Next Cell %i on same Frequency
ERROR Illegal State
[BPLMN] No time for BCCH read on Cell, scheduled for next DRX time
ERROR Illegal State
[BPLMN] MIB reading Error , No cells found on Frequency: %i
[BPLMN] No time for Cell serch, scheduled for next DRX time
ERROR Illegal State
ERROR Illegal State
ERROR Illegal State
Message Generation Error
ERROR Illegal State
Message Generation Error
ERROR Illegal State
UARFCN %d Rscp%d vs UARFCN %d Rscp%d
ERROR Illegal State
BlindFreqSearch: Negative Cnf
BlindFreqSearch: Positive Cnf
FreqRssiScanCnf: Negative Cnf
FreqRssiScanCnf: Positive Cnf
DetectedFreqScanCnf: Negative Cnf
DetectedFreqScanCnf: Positive Cnf
[DS_CELL_SEL] Ignore BlindCellSearchInd. CellDetection PAUSED by DSRC
[BPLMN] Frequencies scanned : %i Total Scanned till now : %i
BlindRssiScan: Negative Cnf
BlindRssiScan: Positive Cnf
[DS_CELL_SEL] Ignore BlindCellSearchInd. CellDetection PAUSED by DSRC
[BPLMN] Frequencies scanned : %i Total Scanned till now : %i
BlindRssiScan: Negative Cnf
BlindRssiScan: Positive Cnf
[BPLMN] Blind Scan earlier had failed. Remove the TIDs and Continue with Scan
BPLMN ERROR : Wrong Band Id %d
[BPLMN] Frequencies scanned %d are less than the total for TddNetwork_p band %d
Background : Frequencies scanned are less than the total for TddNetwork_p band %i
[BPLMN] PlmnId Detection starting - Frequencies to search for Cells/Total freq detected = %i / %i
[BPLMN] starting the stored cell search after Blind Scan
[BPLMN] Not enough time now, hence shifting the stored cell search for the next cycle
[BPLMN] Frequency Search Already Paused!!!
[BPLMN] Blind Scan earlier had failed. Remove the TIDs and Continue with Scan
BPLMN ERROR : Wrong Band Id %d
[BPLMN] band %d (Freq scanned %d < Total Freq %d)
[BPLMN] band %d: PlmnId Detection starting - Freq to search for Cells/Total freq detected = %i / %i
[BPLMN] starting the stored cell search after Blind Scan
[BPLMN] Not enough time -> shifting the stored cell search for the next cycle
PlmnId Detection starting - %i Freq to examine
PlmnId Detection failed - no freq detected!
PlmnId Detection not possible as Cell Reselection is in progress
[BPLMN] Frequency Search Already Paused!!!
BPLMN : Blind Search earlier had failed. Remove the TIDs and Continue with Scan
restart Fresh BlindFreqScan for Fetching MCC
ERROR Illegal State
Error Scenario. Cannot Happen
BPLMN ERROR : Wrong Band Id %d
[DS_CELL_SEL] : Frequencies scanned %d are less than the total for FddNetwork_p band %d
[DS_CELL_SEL] : Frequencies scanned are less than the total for FddNetwork_p band %i
PlmnId Detection starting - %i Frequencies to examine
PlmnId Detection failed - no frequencies detected!
PlmnId Detection not possible as Cell Reselection is in progress
ERROR Illegal State
Aborted processed
[BPLMN] MIB Read requested on Cell %i
[BPLMN] ERROR Illegal State
[BPLMN] ERROR Illegal State
[BPLMN] No More cells found on Frequency: %i
[BPLMN] No Time to complete Cell search on next strong Freq. Will be done in the next DRX
[BPLMN] No Time to complete the BCCH read. Will be done in the next DRX
[BPLMN] No Time to complete Cell search on next strong Freq. Will be done in the next DRX
[BPLMN] Cell Detection Already Paused!!!
[BPLMN] MIB Read requested on Cell %i
ERROR Illegal State
ERROR Illegal State
[BPLMN] No More cells found on Frequency: %i
[BPLMN] No Time to complete Cell search on next strong Freq. Will be done in the next DRX
[BPLMN] No Time to complete the BCCH read. Will be done in the next DRX
[BPLMN] No Time to complete Cell search on next strong Freq. Will be done in the next DRX
[DS_CELL_SEL] BPLMN: Cell Detection Already Paused !!!
[DS_CELL_SEL] Frequency: %d re-tried
ERROR Illegal State
ERROR Illegal State
PausedReadingPLMNIdonCell_Aborted called
[BPLMN] No Time to complete Cell search on next strong Freq. Will be done in the next DRX
ERROR Illegal State
[BPLMN] No More cells found on Frequency: %i
[BPLMN] No Time to complete Cell search on next strong Freq. Will be done in the next DRX
[BPLMN] MIB Read Already Paused!!!
[BPLMN] No Time to complete Cell search on next strong Freq. Will be done in the next DRX
ERROR Illegal State
[BPLMN] No More cells found on Frequency: %i
[BPLMN] No Time to complete Cell search on next strong Freq. Will be done in the next DRX
[DS_CELL_SEL] BPLMN: MIB Read Already Paused!!!
[DS_CELL_SEL] No Time to complete Cell search on next strong Freq. Will be done in the next DRX
ERROR Illegal State
[DS_CELL_SEL] No cells found on Frequency: %i
[URRC_ANR]:ReadingAnrInfoOnCell_AnrInfoReadSuccess
ERROR Illegal State
[URRC_ANR]:ReadingAnrInfoOnCell_AnrInfoReadFailure
[URRC_ANR]: rrc_TddNetwork ReadingAnrInfoOnCell_AnrAbort
[URRC_ANR]: Message Generation Error in ReadingAnrInfoOnCell_AnrAbort
[URRC_ANR]: ERROR Illegal State in ReadingAnrInfoOnCell_AnrAbort
[URRC_ANR]: AbortingReadingAnrInfo_Aborted called
[URRC_ANR]: ERROR Illegal State in AbortingReadingAnrInfo_Aborted
[BPLMN] BPLMN search under progress
[BPLMN] HPLMN updated
[BPLMN] HPLMN updated
[BPLMN] HPLMN id NOT found, checking Next Cell on same Frequency
ERROR Illegal State
[BPLMN] No time for BCCH read on Cell, scheduled for next DRX time
ERROR Illegal State
[BPLMN] No cells found on Frequency: %i
[BPLMN] No time for Cell serch, scheduled for next DRX time
ERROR Illegal State
[BPLMN] NW Scan SIB reading Error on Cell : %i
[BPLMN] checking Next Cell %i on same Frequency
ERROR Illegal State
[BPLMN] No time for BCCH read on Cell, scheduled for next DRX time
ERROR Illegal State
[BPLMN] MIB reading Error , No cells found on Frequency: %i
[BPLMN] No time for Cell serch, scheduled for next DRX time
ERROR Illegal State
ERROR Illegal State
ERROR Illegal State
Message Generation Error
ERROR Illegal State
PausedReadingPLMNIdonCell_Aborted called
[BPLMN] No Time to complete Cell search on next strong Freq. Will be done in the next DRX
ERROR Illegal State
[BPLMN] No More cells found on Frequency: %i
[BPLMN] No Time to complete Cell search on next strong Freq. Will be done in the next DRX
[BPLMN] CSG SIB Read Already Paused!!!
[BPLMN] No Time to complete Cell search on next strong Freq. Will be done in the next DRX
ERROR Illegal State
[BPLMN] No More cells found on Frequency: %i
[BPLMN] No Time to complete Cell search on next strong Freq. Will be done in the next DRX
[DS_CELL_SEL] BPLMN: MIB Read Already Paused!!!
[DS_CELL_SEL] No Time to complete Cell search on next strong Freq. Will be done in the next DRX
ERROR Illegal State
[DS_CELL_SEL] No cells found on Frequency: %i
CellSelection Aborted
ERROR Illegal State
[DS_CELL_SEL] Serious Coding Error : BlindFreqScan (%d), NumFreqs (%d)
ERROR Illegal State
FreqId is NULL
ERROR Illegal State
ERROR Illegal State
BCH is open, no action taken
ERROR Illegal State
BlindFreqSearch: Negative Cnf
ERROR Illegal State
BlindFreqSearch: Positive Cnf
CellSelection Aborted
ERROR Illegal State
ERROR Illegal State
FreqRssiScanCnf: Negative Cnf
ERROR Illegal State
FreqRssiScanCnf: Positive Cnf
FirstBestCellTry From RSCPCellListPtr During EnterIdleFromConnected
FirstBestCellTry From SNRCellListPtr During EnterIdleFromConnected
FirstBestCellTry From RSCPCellListPtr During Normal CellSelection
FirstBestCellTry From SNRCellListPtr During Normal CellSelection
ERROR Illegal State
DetectedFreqScanCnf: Negative Cnf
ERROR Illegal State
DetectedFreqScanCnf: Positive Cnf
TddNetwork: ResetTddCellList
[BPLMN] BCH read Will Pause Now. New Cell will be tried for BCH read on RESUME
[BPLMN] BCH read Will Pause Now. Will be reread when RESUME
[BPLMN] Cell Search will be initiated in the next DRX Cycle on RESUME
Adding Frequency: %i to head of the list
Removing Frequency: %i from tail of the list
LastFreqId is NULL
rrc_FddNetwork_Priv_AddCellTo failed. Invalid InterFreqCell frequency value (%i)
rrc_FddNetwork_Priv_AddCellTo failed. Invalid InterFreqCell frequency value (%i)
Invalid cellParamID: %i for Uarfcn: %i - no entry added to stored network instance
rrc_TddNetwork_Priv_AddCellTo failed. Invalid InterFreqCell frequency value (%i)
rrc_TddNetwork_Priv_AddCellTo failed. Invalid InterFreqCell frequency value (%i)
Invalid cellParamId: %i for Uarfcn: %i - no entry added to stored network instance
Adding frequency (%i), cellParamId (%i) to Network
[StartCarrierFreqSearch] rrc_Features.SuppTxFailParam %d, remove all barred cell with cause BaredRachFailure
[BPLMN]Start Scan for Band Id %d
ERROR Illegal State
rrc_TddNetwork_update_uarfcn_search_details:uarfcn updated is %d,
