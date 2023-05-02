ERROR creating RetestUsedFreq Timer
No Memory allocated for rrc_FddNetwork_init
ERROR deleting RetestUsedFreqTimer timer
couldn't de-register Notification functions in CellReselecter for FddNetwork
[FddNetwork] SetScanRequest: uarfcn %d, uarfcnSrchReqd %d
Populating FddNetwork instance from Sib11/12 neighbour info
SetScanRequiredBasedOn2GBplmnSearchInfo %d,
FddNetwork_p is NULL
Detected Earfcn Info is NULL
Detected Earfcn Info is %d
LTE Band %d, BandWidth %d, CenterFreq %d
LTE Band %d, BandWidth %d, CenterFreq %d, MappedUarfcn %d (isAdditional %d)
%d <= Uarfcn <= %d is overlapped with a earfcn on which ue camped.
Detected Uarfcn %d is stored at %d
DetectFreqNum >= MAX_STORED_FREQ
Detected Uarfcn count (%d)
%d <= Uarfcn <= %d is overlapped with a uarfcn on which ue camped.
rrc_FddNetwork_SetScanRequiredBasedOnStoredSearchInfo %d,
PLMN [0x%x][0x%x][0x%x] is not updated to BPLMN Handler
Network_Scan PSC : %i Uarfcn: %i Rscp: %i dBm, EcN0: %i dB
Network_Scan MCC : %d MNC : %x
Adding Freq %d at index [%d]
Freq %d already present at index [%d]
Cannot have more than 30 freq in StoredNwPtr
StoredNetworkPointer is NULL
FddNetwork_AddFreqToIfSupportedFreq : MaxBandCnt:%d, Added DlUarfcn: %d, DetermindedBand: %d, SupportedBand : %d
DlUarfcn(%d) is not supported! SupportedBand(%d)
rrc_FddNetwork_IsSupportedBand : MaxBandCnt:%d, GivenBand: %d, SupportedBand : %d
BandId(%d) is not supported!
rrc_FddNetwork_AddCellTo failed. Invalid InterFreqCell frequency value (%i)
rrc_FddNetwork_AddCellTo failed. Invalid InterFreqCell frequency value (%i)
Invalid Cpich: %i for Uarfcn: %i - no entry added to stored network instance
rrc_FddNetwork_SetvariableAsPerBand: Unsupported BandId(%i)
isFirstBestCellTry %i
CellTypeFound %i
>>> StoredCells in FddNetwork <<<
StoredCell[%d] %d
No Freq in FddNetwork
Started creating a stored network instance from USIM data
Invalid Freq(%d)/Cpich(%d) Info transfered from USIM EF_NETPAR
Invalid Freq(%d)/Cpich(%d) Info transfered from USIM EF_NETPAR
Finished creating a stored network instance from USIM data
Invalid Continent Info (%d)
MccContinentBasedExcusiveBand: Continent (%d), ExclusiveBandBitMask (0x%x)
Uarfcn %d at Target Band %d Frequency %d
Uarfcn %d at Target Band %d Frequency %d Additional %d
Wrong uarfcn. Or UE Currently Does not support this BAND
pal_ERegId_FixedCpich: %d
Added Overrided Frequency: %i, Rssi: %i dBm to FddNetwork at index: %i
start BlindFreqScan
ERROR Illegal State
ERROR Illegal State
BlindFreqScanRequired is set but no Freq available to scan
UsedFreqId is NULL
FreqId is NULL
Shared PLMN is not selectable
Shared PLMN is Selectable, Hence Frequency can be camped on
CellSelectionDone: FddNetwork_p->Sir_NumCells (%d), FddNetwork_p->EcNo_NumCells (%d)
Update Best RSCP - ServingFreq %d, Cpich %d, Rscp %d (%d dBm)
Update Best RSCP - InterFreq %d, Cpich %d, Rscp %d (%d dBm)
Update Best RSCP - ServingFreq %d, Cpich %d, Rscp %d (%d dBm)
Update Best RSCP - InterFreq %d, Cpich %d, Rscp %d (%d dBm)
CellSelectionDone: ERROR FddNetwork_p->Sir_NumCells (%d) > MAXCELLS
CellSelectionDone: ERROR FddNetwork_p->EcNo_NumCells (%d) > MAXCELLS
CellSelectionDone: BlindFreqScanUsed
FinishCellSelection: BlindFreqScan Not Used
CellSelectionDone: IsNotSelectable is not needed by Abort_Scan
CellSelectionDone: IsNotSelectable is not needed by Abort_Scan
ERROR Illegal State
End Retest Used Freq Cell
[StartBlindRSSIScan] rrc_Features.SuppTxFailParam %d, remove all barred cell with cause BaredRachFailure
[BPLMN]Start Scan for Band Id %d
ERROR Illegal State
ERROR unable to register for Cell Reselection Notification
start BlindFreqScan for Fetching MCC
ERROR Illegal State
ERROR unable to register for Cell Reselection Notification
Backgnd Search : PlmnId Detection starting - %i Frequencies to examine
Backgnd Search : Blind Frequency Search initaited
Retry freq after resume
Removing frequency: %i from detected list
FreqId is NULL
Ptr: CurrentCell == NULL
Reading MCC Success
ERROR Illegal State
[FddNetwork] DetectedFreqIx %d, NumFreqs %d
ERROR Illegal State
FddNetwork_p->DetectedFreqIx %d
FddNetwork_p->NumFreqs %d
ERROR Illegal State
All frequencies in Band scanned.. exhausted
ERROR Illegal State
ERROR Illegal State
uarfcn %d, SearchRequired %d
[URRC_ANR]: SibSubscriptionType set to %d Because rrc_FddNetwork UtraSiAcqForHoMode(%d) and si_requestForHO(%d)
[URRC_ANR]: rrc_FddNetwork NotActive_SubscribeSysInfoForAnr
[URRC_ANR]: ERROR Adding (%i,%i) to rrc_Frequency_AddCellTo
[URRC_ANR]: Adding (%i,%i) to Network in NotActive_SubscribeSysInfoForAnr
[URRC_ANR]: ERROR Illegal State in NotActive_SubscribeSysInfoForAnr
[URRC_ANR]: GenAnrInfoRead SUCCESS received
[URRC_ANR]: GenAnrInfoRead FAIL received
[URRC_ANR]: GenAnrInfoRead ABORTED received
[URRC_ANR]: GenAnrInfoRead NOT EXPECTED msg received
Foregnd Search : PlmnId Detection starting - %i Frequencies to examine
Serious Error: InitiateForegroundNwScanOn No Freqeuncies
Foregnd Search : PlmnId Detection starting - %i Frequencies to examine
Serious Error: InitiateForegroundNwScanOn No Freqeuncies
Backgnd Search : Blind Frequency Search initaited
start BlindFreqScan for UsedFreq
retest Next Used Freq
Used Freq Exhausted, Picking Next Freq
retest a barred cell freq (%d)
next RetestBarredCellFreq (%d)
next RetestBarredCellFreq (%d)
Cannot find same RNC Cell anymore from SirCellList, Just select next best cell
Try to select next Same RNC cell from EcNoCellList : isSameRNCCellFound(%i)
Cannot find same RNC Cell anymore from EcNoCellList, Just select best cell
Normal CellSelection : FddNetwork try to get next candidate cell
Fatal Error : Unknown CurrentSelectionType(%d)!!!!!
FirstBestCellTry From EcNo_CellListPtr after exausting SirCellListPtr
[BlindFreqScan FastRecovery] Fast Recovery from BlindFreqScan Established
RetestUsedFreqTimer :UsedFreqScanInterval[%d]=%d MaxScanInterval[%d]
RetestUsedFreqTimer : CurNumberOfRepeat[%d] UsedFreqScanRepeatCnt[%d]
ERROR starting RetestUsedFreqTimer
RetestUsedFreqTimer started (TmId=%d)
Schedule Retest Used Freq for +%d
Time to Retest Used Frequency
Add LastUsedFreq
No Used Frequency Available
Shared PLMN is not selectable
Shared PLMN is Selectable, Hence Frequency can be camped on
FindBestSameLAICellWithSCellFromFddCellList : EcN0 Threshold %i
Error: Cannot find SIB1 from SCellSysInfoIdx(%i)
Sir_CellList[%i](UARFCN%i/PSC%i) has low HcsPriority(%d) than LastConnecteModeCell HcsPriority (%d), skip this cell list
Same LAI & RAI found at SirCellListPtr[%i](ARFCN%i/PSC%i)(SirCandidate LAC 0x%x, Current LAC 0x%x) (SirCandidate RAC 0x%x, Current RAC 0x%x)
Same LAI found at SirCellListPtr[%i](ARFCN%i/PSC%i)(SirCandidate LAC 0x%x, Current LAC 0x%x)
LAI / RAI Not matched at SirCellListPtr[%i](ARFCN%i/PSC%i)(SirCandidate LAC 0x%x, Current LAC 0x%x) (SirCandidate RAC 0x%x, Current RAC 0x%x)
LAI Not matched at SirCellListPtr[%i](ARFCN%i/PSC%i)(SirCandidate LAC 0x%x, Current LAC 0x%x)
SirCellListPtr[%i] EcN0[%i](%i dBm) < SameLAI_EcN0_Threshold_Value(%d)
SirCellListPtr[%i] EcN0[%i](%i dBm) Barred(%i)
SirCellListPtr[%i](UARFCN%d PSC%d) is not found from SysInfoCache
Error: Cannot find SIB1 from SCellSysInfoIdx(%i)
EcNoCellListPtr[%i](UARFCN%i/PSC%i) has low HcsPriority(%d) than LastConnectedModeCell HcsPriority (%d), skip this cell list
Same LAI & RAI found at EcNoCellListPtr[%i](ARFCN%i/PSC%i)(EcioCandidate LAC 0x%x, Current LAC 0x%x) (EcioCandidate RAC 0x%x, Current RAC 0x%x)
Same LAI found at EcNoCellListPtr[%i](ARFCN%i/PSC%i)(EcioCandidate LAC 0x%x, Current LAC 0x%x)
LAI / RAI Not matched at SirCellListPtr[%i](ARFCN%i/PSC%i)(EcioCandidate LAC 0x%x, Current LAC 0x%x) (EcioCandidate RAC 0x%x, Current RAC 0x%x)
LAI Not matched at CellListPtr[%i](ARFCN%i/PSC%i)(EcioCandidate LAC 0x%x, Current LAC 0x%x)
EcNoCellListPtr[%i] EcN0[%i](%i dBm) < SameLAI_EcN0_Threshold_Value(%d)
EcNoCellListPtr[%i] EcN0[%i](%i dBm) Barred(%i)
EcNoCellListPtr[%i](UARFCN%d PSC%d) is not found from SysInfoCache
isDcPreferredCellSelection is disabled for CS Only Stack
Sir_CellList[%i](UARFCN%i/PSC%i) already tested, skip this cell list
Sir_CellList[%i](UARFCN%i/PSC%i) has low HcsPriority(%d) than LastConnecteModeCell(UARFCN%i/PSC%i) HcsPriority (%d), skip this cell list
CurrentCellListIx %i (Sir_NumCells %i)
CurrentCellListIx %i (Sir_NumCells %i)
EcNo_CellList[%i](UARFCN%i/PSC%i) already tested, skip this cell list
EcNo_CellList[%i](UARFCN%i/PSC%i) has low HcsPriority(%d) than LastConnecteModeCell(UARFCN%i/PSC%i) HcsPriority (%d), skip this cell list
CurrentCellListIx %i (EcNo_NumCells %i)
CurrentCellListIx %i (EcNo_NumCells %i)
NO Selectable Cell Found in CellListPtr(Sir_NumCells %i, EcNo_NumCells %i)
Sir_CellList[%i](UARFCN%i/PSC%i) already tested, skip this cell list
Sir_CellList[%i](UARFCN%i/PSC%i) has low HcsPriority(%d) than LastConnecteModeCell(UARFCN%i/PSC%i) HcsPriority (%d), skip this cell list
[BlackList] Found DC FREQ but UARFCN%d is in BlackListed Frequency
Found DC SIR Cell @Index %i (Sir_NumCells %i)
First Non-DC SIR Cell @Index %i (Sir_NumCells %i)
CurrentCellListIx %i (Sir_NumCells %i)
EcNo_CellList[%i](UARFCN%i/PSC%i) already tested, skip this cell list
EcNo_CellList[%i](UARFCN%i/PSC%i) has low HcsPriority(%d) than LastConnecteModeCell(UARFCN%i/PSC%i) HcsPriority (%d), skip this cell list
[BlackList] Found DC FREQ but UARFCN%d is in BlackListed Frequency
EcNo Cell @CurrentCellListIx %i , EcNoDb [%d]
Found DC EcNo Cell @Index %i
First Non-DC EcNo Cell @Index %i
urrentCellListIx %i (EcNo_NumCells %i)
NO Selectable Cell Found in CellListPtr(Sir_NumCells %i, EcNo_NumCells %i)
rrc_FddNetwork_FindBestSameRNCCellWithSCellFromFddCellList : EcN0 Threshold %i
Sir_CellList[%i](UARFCN%i/PSC%i) already tested, skip this cell list
RNCID matched at SirCellListPtr[%i](ARFCN%i/PSC%i)
SirCellListPtr[%i] EcN0[%i](%i dBm) < EcN0_Threshold_Value(%d)
SirCellListPtr[%i] EcN0[%i](%i dBm) Barred(%i)
This is not a SameRNCCell
Sir_CellList[%i](UARFCN%i/PSC%i) already tested, skip this cell list
Same RNCID found at EcNoCellListPtr[%i](ARFCN%i/PSC%i)
EcNoCellListPtr[%i] EcN0[%i](%i dBm) < EcN0_Threshold_Value(%d)
EcNoCellListPtr[%i] EcN0[%i](%i dBm) Barred(%i)
This is not a SameRNCCell
numDisFreqtosearch is ZERO
UsedFreqId is NULL
FreqId is NULL
Current Discrete Count = [%d]
ERROR [BlindFreqScan FastRecovery] the Uarfcn %d can not be found!
[BlindFreqScan FastRecovery] Found Uarfcn %d with %d Aset Cells regardless BlindFreqScan result
[BlindFreqScan FastRecovery] Add Aset Cells PSC: %d
[BlindFreqScan FastRecovery] Add Serving Cells PSC: %d
Waiting For BlindFreqScanInd
ERROR Illegal State
ERROR Illegal State
Any Freq Instance and BlindFreqScan Instance exist
Retest Barred Cell on %d
RetestBarredCellFreq array is full
wrong Uarfcn (%d)
FirstBestCellTry From SirCellListPtr During EnterIdleFromConnected
FirstBestCellTry From EcNoCellListPtr During EnterIdleFromConnected
FirstBestCellTry From SirCellListPtr During EnteringToFachPchFromDch
FirstBestCellTry From EcNoCellListPtr During EnteringToFachPchFromDch
FirstBestCellTry From SirCellListPtr During Normal CellSelection
FirstBestCellTry From EcNoCellListPtr During Normal CellSelection
Blind Freq Scan - Full ACQ = FALSE
Retest Ongoing
Blind Used Freq Sacn for UsedFreq failed - ignoring results
Blind Freq Sacn for UsedFreq - Full ACQ : numOfFreq %d EcNoThreshold %d
>> Blind Freq Scan - Full ACQ : UARFCN %d, numOfCells %d
Blind Freq Scan - Full ACQ : ARFCN %d PSC %d EcN0 %d (%d dB) Rscp %d (%d dBm)
BlindFreqScan (SirBased) - UARFCN %d: BestEcNo %d (%d dB), BestRscp %d (%d dBm)
Blind Freq Scan error - no freq in FddNetwork's FreqList
>> NOTE: No Candidate Found on this Network
> Candidate Found on this Network (Sir_NumCells = %d, EcNo_NumCells = %d)
Retest - Blind Freq Scan - Full ACQ = FALSE: numOfFreq %d
[MRU Freq %d] RSSI Adjustment:: %d -> %d
updated Frequency: %i, Rssi: %i dBm to FddNetwork at index: %i DualCarriePresent(%d)
updated Frequency: %i, Rssi: %i dBm to FddNetwork at index: %i
Blind Freq Scan Ind error - no freq in FddNetwork's FreqList
isDcPreferredCellSelection is disabled for CS Only Stack
BuildFddCellListFromBlindFreqScanInd for UARFCN %i, numOfCells %i (IsSirBased %d)
AddGoodRscpToSirCellList & Sort_CellListSir :: Check Triggering Conditions for Sir-based Cell Selection
- Rejecting (Uarfcn %d, Psc %d) as SIR cell selection cause of BlackListed Cell
:: Sir %d (>%d), Rscp %d (>%d), EcNo %d (>%d)
- Cell Rejected (Uarfcn %d, Psc %d) cause of BlackListed Cell
- Add this Cell to EcN0CellListPtr
- Accepting (Uarfcn %d, Psc %d) as SIR cell selection conditions met
:: Sir %d (>%d), Rscp %d (>%d), EcNo %d (>%d)
- PSC %d: Band %d, DcStatus %d, give the same BandPrio as Band2
- Band %d: BandPrioritySir %d vs Sir %d
- Accepting (Uarfcn %d, Psc %d) as SIR cell selection conditions met
:: Sir %d (>%d), EcNo %d (>%d)
- Band %d: DcStatus %d, give the same BandPrio as Band2
- Band %d: BandPrioritySir %d vs Sir %d
- Rejecting (Uarfcn %d, Psc %d) as SIR cell selection conditions not met
:: Sir %d (>%d), Rscp %d (>%d), EcNo %d (>%d)
- Add this Cell to EcN0CellListPtr
>>> No Sir Candidate Found on Uarfcn %d
>>> Sort BandPrioSir
>>> Sort BandPrio
WARNING FddNetwork_p->Sir_NumCells(%d) > 32
>>> No EcN0 Candidate Found on Uarfcn %d
WARNING FddNetwork_p->EcNo_NumCells(%d) > 32
BuildFddCellListFromBlindFreqScanInd for UARFCN %i, numOfCells %i (IsSirBased %d)
AddGoodRscpToSirCellList & Sort_CellListSir :: Check Triggering Conditions for Sir-based Cell Selection
- Rejecting (Uarfcn %d, Psc %d) as SIR cause of BlackListedCell
:: Sir %d (>%d), Rscp %d (>%d), EcNo %d (>%d)
- Cell Rejected (Uarfcn %d, Psc %d) cause of BlackListed Cell
- Add this Cell to EcN0CellListPtr
- Accepting (Uarfcn %d, Psc %d): DcStatus[%d] as SIR cell selection conditions met or DC was configured
:: Sir %d (SirTh %d), Rscp %d (BestRscpTh %d), EcNo %d (EcNoDbTh %d)
At least One Cell has satisfied SIR Criteria
- PSC %d: Band %d, DcStatus %d, give the same BandPrio as Band2
- Band %d: BandPrioritySir %d vs Sir %d
- Accepting (Uarfcn %d, Psc %d) as SIR cell selection conditions met
:: Sir %d (>%d), EcNo %d (>%d)
At least One Cell has satisfied SIR Criteria
- Band %d: DcStatus %d, give the same BandPrio as Band2
- Band %d: BandPrioritySir %d vs Sir %d
- Rejecting (Uarfcn %d, Psc %d) as SIR cell selection conditions not met
:: Sir %d (>%d), Rscp %d (>%d), EcNo %d (>%d)
- Add this Cell to EcN0CellListPtr
>>> No Sir Candidate Found on Uarfcn %d
>>> Sort BandPrioSir
At least One Cell has satisfied SIR Criteria
>>> Sort BandPrio
WARNING FddNetwork_p->Sir_NumCells(%d) > 32
>>> No EcN0 Candidate Found on Uarfcn %d
WARNING FddNetwork_p->EcNo_NumCells(%d) > 32
RNC ID: 0x%X (UC-ID : 0x%X)
Same RNCID matched (ARFCN%i/PSC%i RncId 0x%x) with TargetRncId 0x%x
Same RNCID not matched (ARFCN%i/PSC%i RncId 0x%x) with TargetRncId 0x%x
Error: Cannot find SIB3 from SCellSysInfoIdx(%i)
SysInfoCache for (ARFCN%i/PSC%i) is not available
Same RNCID returned for (ARFCN%i/PSC%i) which was active set
+ Adding (Uarfcn %i, Psc %i) to Temporal CellList: Rscp %i dBm, EcNo %i dB, FreqSir %i dB, BandSelMetric %i dB
:: BandPrioSir %i dB, BandPrio %i, isSameRNCIDCell %i, PConflictPrio %i
AddGoodRscpToEcNoCellList - Rejected (Uarfcn %i, Psc %i) as a cell selection candidate due to low Cpich Rscp: %i dBm, isSameRNCIDCell %i
Overwriting existing cell entry
CapFreqSir: Uarfcn %d, FreqSir %d, SirCap %d
>> Capping FreqSir(%d) to %d
+ Adding (Uarfcn %i, Psc %i) to SirCellList: Rscp %i dBm, EcNo %i dB, FreqSir %i dB, BandSelMetric %i dB
:: BandPrioSir %i dB, BandPrio %i, isSameRNCIDCell %i, PConflictPrio %i
- Rejected (Uarfcn %i, Psc %i) as a cell selection candidate due to low Cpich Rscp: %i dBm, isSameRNCIDCell %i
Overwriting existing cell entry
Sort_CellListSir: Rscp cmp_b(%d) > cmp_a(%d)
Sort_CellListSir: Rscp cmp_b(%d) < cmp_a(%d)
Sort_CellListSir: Rscp cmp_b(%d) == cmp_a(%d)
isDcPreferredCellSelection is disabled for CS Only Stack
>>> Sort BandPrio
No Cell Satisfied SIR Criteria, So, moving all DcPreferred Cells into ECNO Cell list
All DcPreferred Cells can not be placed into ECNO Cell list
>> FddNetwork Sir_CellList[%i] (Uarfcn %i, Psc %i) EcNo %i, Rscp %i, CappedFreqSir %i, BandSelMetric %i
>>>>>> BandPrioSir %i, BandPrio %i
>>>>>> PagingConflictPrio %i
>> FddNetwork EcNo_CellList[%i] (Uarfcn %i, Psc %i) EcNo %i, Rscp %i, CappedFreqSir %i, BandSelMetric %i
>>>>>> BandPrioSir %i, BandPrio %i
>>>>>> PagingConflictPrio %i
Blind Freq Sacn failed - ignoring results
Blind Freq Scan - Full ACQ : numOfFreq %d EcNoThreshold %d
>> Blind Freq Scan - Full ACQ : UARFCN %d, numOfCells %d
Blind Freq Scan - Full ACQ : ARFCN %d PSC %d EcN0 %d (%d dB) Rscp %d (%d dBm)
BlindFreqScan (SirBased) - UARFCN %d: BestEcNo %d (%d dB), BestRscp %d (%d dBm)
Blind Freq Scan error - no freq in FddNetwork's FreqList
>> NOTE: No Candidate Found on this Network
> Candidate Found on this Network (Sir_NumCells = %d, EcNo_NumCells = %d)
Blind Freq Scan - Full ACQ = FALSE: numOfFreq %d
[MRU Freq %d] RSSI Adjustment:: %d -> %d
updated Frequency: %i, Rssi: %i dBm to FddNetwork at index: %i DualCarriePresent(%d)
updated Frequency: %i, Rssi: %i dBm to FddNetwork at index: %i
Blind Freq Scan Ind error - no freq in FddNetwork's FreqList
[CheckingCellSuitability_CuphyBlindFreqScanCnf - Negative confirmation
CheckingCellSuitability_CuphyBlindFreqScanCnf - Positive confirmation
[URRC SR_IF DSDS]Sending Abort Req to Uphy
ERROR Illegal State
ERROR Illegal State
Blind Cell Search failed - ignoring results
[MRU Freq %d] RSSI Adjustment:: %d -> %d
Frequency: %i, Rssi: %i dBm is increased due to Neighbour or Detected Freq.
Added Frequency: %i, Rssi: %i dBm to FddNetwork top of the Freqlist with NumFreqs = %i
BlindRssiScan: Negative Cnf
BlindRssiScan: Positive Cnf
ERROR Illegal State
[URRC SR_IF DSDS]Sending Abort Req to Uphy
ERROR Illegal State
For Serving Uarfcn = %d
ERROR Illegal State
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
[BPLMN] No time for Cell serch, scheduled for next DRX time
ERROR Illegal State
ERROR Illegal State
[URRC SR_IF DSDS]Sending Abort Req to Uphy
ERROR Illegal State
ERROR Illegal State
[BPLMN] Wrong Band Id %d
[BPLMN] Frequencies scanned : %i Scanned till now PerBand : %i Total Scanned till now : %i
[BPLMN] Frequencies scanned %d are less than the total for FddNetwork_p band %d
[BPLMN] PlmnId Detection starting - Frequencies to search for Cells/Total freq detected = %i / %i
[BPLMN] starting the stored cell search after Blind Scan
[BPLMN] Not enough time now, hence shifting the stored cell search for the next cycle
[BPLMN] Starting Next Band Scan
[PLMN_LIST] Starting Next Band Scan
PlmnId Detection starting - %i Frequencies to examine
PlmnId Detection failed - no frequencies detected!
PlmnId Detection not possible as Cell Reselection is in progress
[BPLMN] Wrong Band Id %d
ERROR Illegal State
ERROR Illegal State
PlmnId Detection starting - %i Frequencies detected
PlmnId Detection failed - no Stored frequencies detected!
Blind Freq Sacn failed - ignoring results
Blind Freq Scan - MCC Detection : numOfFreq %d
[DetectionFreqSearch] CuphyBlindFreqScanCnf - Negative confirmation
[DetectionFreqSearch] CuphyBlindFreqScanCnf - Positive confirmation
ERROR Illegal State
[URRC SR_IF DSDS]Sending Abort Req to Uphy
ERROR Illegal State
ERROR Illegal State
ERROR Illegal State
[BPLMN] BPLMN search under progress
[BPLMN] HPLMN id found
ERROR Illegal State
[BPLMN] HPLMN id NOT found, checking Next Cell on same Frequency
ERROR Illegal State
[BPLMN] No time for BCCH read on Cell, scheduled for next DRX time
ERROR Illegal State
[BPLMN] No cells found on Frequency: %i
[BPLMN] Cell Pointer should not be NULL here
[BPLMN] NO BPLMN search under progress
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
ERROR Illegal State
ERROR Illegal State
ERROR Illegal State
BlindRssiScan: Negative Cnf
BlindRssiScan: Positive Cnf
ERROR Illegal State
BlindFreqScan: Negative Cnf
BlindFreqSearch: Positive Cnf
ERROR Illegal State
[DS_CELL_SEL] Ignore BlindCellSearchInd. CellDetection PAUSED by DSRC
[BPLMN] Frequencies scanned : %i Total Scanned till now : %i
BlindRssiScan: Negative Cnf
BlindRssiScan: Positive Cnf
[BPLMN] FddNetwork_p == NULL
[BPLMN] Blind Scan earlier had failed. Remove the TIDs and Continue with Scan
BPLMN ERROR : Wrong Band Id %d
[BPLMN] Frequencies scanned %d are less than the total for FddNetwork_p band %d
Background : Frequencies scanned are less than the total for FddNetwork_p band %i
[BPLMN] PlmnId Detection starting - Frequencies to search for Cells/Total freq detected = %i / %i
[BPLMN] starting the stored cell search after Blind Scan
[BPLMN] Not enough time now, hence shifting the stored cell search for the next cycle
[BPLMN] Starting Next Band Scan
[BPLMN] Frequency Search Already Paused!!!
[BPLMN] FddNetwork_p == NULL
[BPLMN] Blind Scan earlier had failed. Remove the TIDs and Continue with Scan
restart Fresh BlindFreqScan for Fetching MCC
ERROR Illegal State
PlmnId Detection failed - no Stored frequencies detected!
BPLMN ERROR : Wrong Band Id %d
[BPLMN]Frequencies scanned %d are less than the total for FddNetwork_p band %d
Background : Frequencies scanned are less than the total for FddNetwork_p band %i
[BPLMN] PlmnId Detection starting - Frequencies to search for Cells/Total freq detected = %i / %i
[BPLMN] starting the stored cell search after Blind Scan
[BPLMN] Not enough time now, hence shifting the stored cell search for the next cycle
[BPLMN] Starting Next Band Scan
[PLMN_LIST] Starting Next Band Scan
PlmnId Detection starting - %i Frequencies to examine
PlmnId Detection failed - no frequencies detected!
PlmnId Detection not possible as Cell Reselection is in progress
[BPLMN] FddNetwork_p == NULL
BPLMN : Blind Search earlier had failed. Remove the TIDs and Continue with Scan
[DS_CELL_SEL] ERROR : Wrong Band Id %d
[DS_CELL_SEL] : Frequencies scanned %d are less than the total for FddNetwork_p band %d
[DS_CELL_SEL] : Frequencies scanned are less than the total for FddNetwork_p band %i
PlmnId Detection starting - %i Frequencies to examine
PlmnId Detection failed - no frequencies detected!
PlmnId Detection not possible as Cell Reselection is in progress
ERROR Illegal State
Aborted processed
ERROR Illegal State
ERROR Illegal State
ERROR Illegal State
[BPLMN] MIB Read requested on Cell %i
[BPLMN] ERROR Illegal State
[BPLMN] No More cells found on Frequency: %i
[BPLMN] No Time to complete Cell search on next strong Freq. Will be done in the next DRX
[BPLMN] No Time to complete the BCCH read. Will be done in the next DRX
[BPLMN] No Time to complete Cell search on next strong Freq. Will be done in the next DRX
[BPLMN] Cell Detection Already Paused!!!
ERROR Illegal State
ERROR Illegal State
ERROR Illegal State
[BPLMN] MIB Read requested on Cell %i
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
[URRC_ANR]: PausedReadingAnrInfo_Aborted called
[URRC_ANR]: ERROR Illegal State in PausedReadingAnrInfo_Aborted
[URRC_ANR]:ReadingAnrInfoOnCell_AnrInfoReadSuccess
ERROR Illegal State
[URRC_ANR]:ReadingAnrInfoOnCell_AnrInfoReadFailure
[URRC_ANR]: rrc_FddNetwork ReadingAnrInfoOnCell_AnrPause
[URRC_ANR]: Message Generation Error in ReadingAnrInfoOnCell_AnrPause
[URRC_ANR]: ERROR Illegal State in ReadingAnrInfoOnCell_AnrPause
[URRC_ANR]: rrc_FddNetwork ReadingAnrInfoOnCell_AnrAbort
[URRC_ANR]: Message Generation Error in ReadingAnrInfoOnCell_AnrAbort
[URRC_ANR]: ERROR Illegal State in ReadingAnrInfoOnCell_AnrAbort
[URRC_ANR]: PausedReadingAnrInfo_Aborted called
[URRC_ANR]: ERROR Illegal State in PausedReadingAnrInfo_Aborted
[URRC_ANR]:ERROR!! AnrHandlerPtr cannot be NULL
[URRC_ANR]: SibSubscriptionType set to %d Because rrc_FddNetwork UtraSiAcqForHoMode(%d) and si_requestForHO(%d)
[URRC_ANR]: PausedReadingAnrInfo_AnrResume called
[URRC_ANR]:ERROR!! ANR Resumed but DetectedCellPtr or AnrHandlerPtr cannot be NULL as this is the FddCellSelReselInfo Instance
[URRC_ANR]: ERROR!! PausedReadingAnrInfo_AnrResume anr_Uarfcn:%d, fddCell_Uarfcn:%d, anr_Cpich:%d, fddCell_Cpich:%d
[URRC_ANR]: ANR Resumed successfully PausedReadingAnrInfo_AnrResume
Message Generation Error
ERROR Illegal State
[URRC_ANR]: AbortingReadingAnrInfo_Aborted called
[URRC_ANR]: ERROR Illegal State in AbortingReadingAnrInfo_Aborted
[URRC_ANR]: AbortingReadingAnrInfo_Aborted called
[URRC_ANR]: ERROR Illegal State in AbortingReadingAnrInfo_Aborted
ERROR Illegal State
ERROR Illegal State
[BPLMN] BPLMN search under progress
[BPLMN] WhiteListed Csg id (%d) found
Backgnd Csg Search: checking Next Cell on same Frequency
ERROR Illegal State
[BPLMN] No time for BCCH read on Cell, scheduled for next DRX time
ERROR Illegal State
No cells found on Frequency: %i
[BPLMN] Cell Pointer should not be NULL here
[BPLMN] NO BPLMN search under progress
[BPLMN] No time for Cell serch, scheduled for next DRX time
ERROR Illegal State
[BPLMN] SIB reading Error on Cell : %i
[BPLMN] checking Next Cell %i on same Frequency
ERROR Illegal State
[BPLMN] No time for BCCH read on Cell, scheduled for next DRX time
ERROR Illegal State
[BPLMN] MIB reading Error , No cells found on Frequency: %i
[BPLMN] SIB reading Error on Cell : %i
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
ERROR Illegal State
PausedReadingPLMNIdonCell_Aborted called
[BPLMN] CSG SIB Read Already Paused!!!
[BPLMN] No Time to complete Cell search on next strong Freq. Will be done in the next DRX
Message Generation Error
ERROR Illegal State
ERROR Illegal State
[BPLMN] No More cells found on Frequency: %i
[BPLMN] No Time to complete Cell search on next strong Freq. Will be done in the next DRX
ERROR Illegal State
ERROR Illegal State
[BPLMN] BPLMN search under progress
[BPLMN] HPLMN updated
[BPLMN] HPLMN updated
[BPLMN] HPLMN id NOT found, checking Next Cell on same Frequency
ERROR Illegal State
[BPLMN] No time for BCCH read on Cell, scheduled for next DRX time
ERROR Illegal State
[BPLMN] No cells found on Frequency: %i
[BPLMN] Cell Pointer should not be NULL here
[BPLMN] NO BPLMN search under progress
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
ERROR Illegal State
Message Generation Error
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
Message Generation Error
ERROR Illegal State
ERROR Illegal State
[BPLMN] No More cells found on Frequency: %i
[BPLMN] No Time to complete Cell search on next strong Freq. Will be done in the next DRX
[DS_CELL_SEL] BPLMN: MIB Read Already Paused!!!
[BPLMN] No Time to complete Cell search on next strong Freq. Will be done in the next DRX
Message Generation Error
ERROR Illegal State
ERROR Illegal State
[BPLMN] No More cells found on Frequency: %i
[BPLMN] No Time to complete Cell search on next strong Freq. Will be done in the next DRX
ERROR Illegal State
ERROR Illegal State
ERROR Illegal State
Improper state information
CellSelection Aborted
ERROR Illegal State
ERROR Illegal State
[DS_CELL_SEL] Serious Coding Error : BlindFreqScan (%d), NumFreqs (%d)
ERROR Illegal State
ERROR Illegal State
BCH is open, no action taken
ERROR Illegal State
ERROR Illegal State
ERROR Illegal State
BlindFreqSearch: Negative Cnf
ERROR Illegal State
ERROR Illegal State
ERROR Illegal State
BlindFreqSearch: Positive Cnf
CellSelection Aborted
ERROR Illegal State
ERROR Illegal State
ERROR Illegal State
ERROR Illegal State
ERROR Illegal State
ERROR Illegal State
FirstBestCellTry From SirCellListPtr
FirstBestCellTry From EcNoCellListPtr
FirstBestCellTry From SirCellListPtr During EnteringToFachPchFromDch
FirstBestCellTry From EcNoCellListPtr During EnteringToFachPchFromDch
FirstBestCellTry From SirCellListPtr During Normal CellSelection
FirstBestCellTry From EcNoCellListPtr During Normal CellSelection
Blind Freq Scan - Full ACQ = FALSE
Retest Ongoing
Before pausing Discrete Count = [%d]
After pausing Discrete Count = [%d]
ERROR Illegal State
[PausingCellSelection_CuphyBlindFreqScanCnf - Negative confirmation
ERROR Illegal State
ERROR Illegal State
Before pausing Discrete Count = [%d]
After pausing Discrete Count = [%d]
ERROR Illegal State
CheckingCellSuitability_CuphyBlindFreqScanCnf - Positive confirmation
FddNetwork: ResetFddCellList(SirCellListPtr,EcNoCellListPtr)
[BPLMN] BCH read Will Pause Now. Same Cell will be tried for BCH read on RESUME
[BPLMN] BCH read Will Pause Now. Will be reread when RESUME
[BPLMN] Cell Search will be initiated in the next DRX Cycle on RESUME
Adding Frequency: %i to head of the list
Removing Frequency: %i from tail of the list
LastFreqId is NULL
Adding Used Frequency: %i to head of the list
Removing Used Frequency: %i from tail of the list
LastUsedFreqId is NULL
rrc_FddNetwork_Priv_AddCellTo failed. Invalid InterFreqCell frequency value (%i)
rrc_FddNetwork_Priv_AddCellTo failed. Invalid InterFreqCell frequency value (%i)
Invalid Cpich: %i for Uarfcn: %i - no entry added to stored network instance
>> Adding Cell(%i,%i) to Frequency
rrc_FddNetwork_Priv_AddCellTo failed. Invalid InterFreqCell frequency value (%i)
rrc_FddNetwork_Priv_AddCellTo failed. Invalid InterFreqCell frequency value (%i)
Invalid Cpich: %i for Uarfcn: %i - no entry added to stored network instance
rrc_FddNetwork_update_uarfcn_search_details:uarfcn updated is %d,
rrc_FddNetwork_update_uarfcn_search_details:Skipped As Additional Freq: UARFCN is %d, Total Freq %d
GetMaxFreqForBand:In valid band
