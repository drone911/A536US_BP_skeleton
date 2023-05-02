ERROR Illegal State
Failed to create TimerSCellMeasResultValid
Failed to create T322
Failed to create T325
ERROR deleting TimerSCellMeasResultValid
ERROR deleting T_322 timer
ERROR deleting T_325 timer
Poweron Add StoredFreqDb entry at Index[%d]: Freq[%d] from SIM2
Poweron Add StoredFreqDb entry at Index[%d]: Freq[%d]
Poweron Add StoredFreqDb entry at Index[%d]: Freq[%d] PLMN[0x%X] from SIM2
Poweron Add StoredFreqDb entry at Index[%d]: Freq[%d] PLMN[0x%X]
NULL PLMN ID Passed: Freq[%d] not Added to Full Scan Freq DB
SAVED_FRQN::Duplicate Entry[%d] for PLMN(%d)
SAVED_FRQN::FullScanFreqDb[%d] added for PLMN(%d),Total Stored Freqs:(%d)
NULL PLMN ID Passed: Freq[%d] not Added
Freq[%d] not Supported BandId(%d)
Old Stored freq: Sort
Old Stored freq: Skip
New Stored freq
First Stored freq
StoredFreq[%d] found for PLMN 0x%X, 0x%X, 0x%X
Add TddLastUsedFreq from other stack
Umts_access_mode %d is different from peer stack
current stack %d peer stack %d
Target PLMN is HPLMN or in EPLMN list
Equivalent PlmnId 0x%X, 0x%X, 0x%X
Target PLMN is NULL
CellSelecter of Stack %d is NULL
add FastHplmnFreq (freq %d)
Old freq: Sort
Old freq: Skip
New freq
First freq
Get TddLastUsedFreq Band A freq %d)
Get TddLastUsedFreq Band F freq %d)
Input Band (%d) is greater than TDD_MAX_BAND (%d)
Input Band (%d) is invalid
Input Frequency(%d) is not supported
Old freq: Sort :: (band %d, freq %d)
Old freq: Skip
New freq:: (band %d, freq %d)
First freq
Input Band (%d) is greater than TDD_MAX_BAND (%d)
Input Band (%d) is invalid
Old freq: Sort :: (band %d, freq %d)
Old freq: Skip
New Manual Scanned freq:: (band %d, freq %d)
First freq
BestRscpOnInterFreq is set to %d (%d dBm)
ERROR stopping TimerSCellMeasResultValid
Keep current CellParamIdInDCH & MeasResult(Cell Param Id %d)
Add CellParamIdInDCH (Idx 0, Cell Param Id %d)
ERROR stopping TimerSCellMeasResultValid
[Last SCell Meas Result] Update :: Freq %d, CPI %d (rscp %ddBm, ts0Sinr %ddB, dpchSir %ddB)
ERROR stopping TimerSCellMeasResultValid
ERROR starting TimerSCellMeasResultValid
TimerSCellMeasResultValid Started (TmId=%d) : %i msec
[Last SCell Meas Result] Wrong CPI Info :: CellSelecter(Freq %d, CPI %d) vs New(Freq %d, CPI %d)
[Last SCell Meas Result] reusable :: Rscp %ddBm (> -70) & Ts0Sinr %ddB (> 4), DpchSir %ddB (don't care)
[Last SCell Meas Result] reusable :: Rscp %ddBm (-70 ~ -80) & DpchSir %ddB (> 20) & Ts0Sinr %ddB (> 4)
[Last SCell Meas Result] reusable :: Rscp %ddBm (-80 ~ -90) & DpchSir %ddB (> 18) & Ts0Sinr %ddB (> 4)
[Last SCell Meas Result] reusable :: Rscp %ddBm (> -90) & DpchSir %ddB (> 8) & Ts0Sinr %ddB (> 2)
[Last SCell Meas Result] Not reusable :: Low RSCP or SIR (Rscp %ddBm, DpchSir %ddB, Ts0Sinr %ddB)
[Last SCell Meas Result] Not reusable :: Freq %d, NumCpi %d, Cpi %d
TddCellSelecter_p == NULL
Remove CellParamIdInDCH (Idx %d, Cell Param Id %d)
NumCellParamIdInDch is already zero
CellParamId is not in CellParamIdInDCH
[rrc_TddCellSelecter_RemoveCellInDch] TddCellSelecter_p->NumCellParamIdInDch(%d) > Asn_maxDPCH_DLchan(%d)
Could not start T322(%d ms)
Could not start T322(%d ms)
rrc_TddCellSelecter_ClearPriorityInfoList:: CLEARED
rrc_TddCellSelecter_SetPriorityInfo_Utra:: Priority(%d) - UARFCN(%d)
rrc_TddCellSelecter_SetPriorityInfo_Utra:: Priority(%d) - UARFCN(%d)
rrc_TddCellSelecter_SetPriorityInfo_Utra:: Priority(%d) or numFreqCount(%d) - Out of bound
TddCellSelecter_p->PriorityInfoList[Priority].choice_RAT = %d and priority = %d
UtraPriorityInfo.UtraFreqList[freqIdx] = %d, UtraFreq = %d
rrc_TddCellSelecter_SetPriorityInfo_Eutra:: Priority(%d) - EARFCN(%d)
rrc_TddCellSelecter_SetPriorityInfo_Eutra:: Priority(%d) or numFreqCount(%d) - Out of bound
Timer T325 stopped
Error in stopping timer T325
rrc_TddCellSelecter_StartT325 : start T325(%d min)
Could not start T325(%d min)
Could not start T325(%d min)
rrc_TddCellSelecter_IsDePrioritisedFreq: Current DeprioType is URRC_DEPRIO_TYPE_EUTRA(%d), return TRUE
rrc_TddCellSelecter_IsDePrioritisedFreq: Given Freq(%d) found at DePrioritiseInfoList[%d], return TRUE
FATAL_ERROR: Current DeprioType is URRC_DEPRIO_TYPE_EUTRA(%d) eventhough TddCellSelecter_p->DePrioritiseStatus is DEPRIORITY_ACTIVE, return FALSE
TddCellSelecter_p->PriorityInfoList[Priority].choice_RAT = %d and priority = %d
EutraPriorityInfo.UtraFreqList[freqIdx] = %d, UtraFreq = %d
[URRC_FREQ_AID]LcsFreqAidCnf status = %d (0:Unlocked 1:Locked 2:Aborted 3:Faied)
ERROR Illegal State
ERROR Illegal State
ERROR Illegal State
[DS_CELL_SEL] ScanOperation : PAUSE
[DS_CELL_SEL] ScanOperation : ABORT
rrc_TddCellSelecter_MapExtMsgIdToIntMsgId:
RecvCheckCellSuitableReq: UARFCN %d PSC %d IsCellBarred(%d) RemainingBarredTime = %d sec
[SyncInfoAvailable] %d -> %d
[SyncInfoAvailable] %d
rrc_Class_TddPlmnSelecter_GetInstanceId:
Equivalent PlmnId 0x%X, 0x%X, 0x%X added to list
Target PlmnId 0x%X, 0x%X, 0x%X added to list
Target PlmnId is NULL or Target PlmnId is same as Selected PlmnId
First MRU Frequency %d
UL3.Etc.tdd max_band = %d
UL3.Etc.Storing tdd Last Camped Bands = {%d, %d, %d, %d, %d}
TddCellSelecter_p->TddMaxBand = %d
TddCellSelecter_p->TddStoredBands = {%d, %d, %d, %d, %d}
ERROR Illegal State
ERROR registering for State Change notificationwith CnxMgr
ERROR creating TPlmnSearchBackOff Timer
Failed to create TimerKeepBplmnOp
ERROR creating TimerOurOfService Timer
[DS_CELL_SEL] Failed to create T_SearchOn
[DS_CELL_SEL] Failed to create T_SearchOff
ERROR Unexpected State Change Notification
CnxMgr indicates active state transition to Cell_Fach - reenabling interFrequency Cell Reselection
ERROR Unexpected State Change Notification
Plmn Selection Complete received - no action taken
[Dedicated Priority Info received from other RAT] PLMN ID(0x%X, 0x%X, 0x%X), Start Time(%d ms), Duration(%d min)
UMTS TDD(%d) - Not supported
GERAN(%d) - Not supported
T322 validity check failed, so URRC ignores all the Dedicated Priority Info
DePrioritise Info is present
DeprioType: %d, T325_duration : %d
DePrioritise : CellSelecter_p->DePrioritiseStatus set to %d
DePrioritise : Fails to start T325
DePrioritiseInfoList[%d]: EARFCN %d
DePrioritise : CellSelecter_p->DePrioritiseStatus set to %d
DePrioritise : Fails to start T325
Unknown DeprioType(%d) NumDeprioFreq(%d) !!!
Start time(%d ms), Duration(%d min), Current time(%d ms)
No proper T322 duration, so Clear the Dedicated Priority Info
T322 Duration is 0, so Dedicated Priority Info is valid until the next Update
No proper T322 information, it can't be started
rrc_TddCellSelecter_DePrioReset!!
No proper T322 information, it can't be started
LCSFREQAIDREQ to TddCellSelecter
UrrcMruReset for [SIMID %d]
Entering Upation of Forbidden LA (URRC_FLAI_LIST %d, NAS_FLAI_LIST %d)
URRC_FLAI_LIST[%d] -> LAI %d
NAS_FLAI_LIST[%d] -> LAI %d
Asking all cells to be deleted for LAI %d
Default_ReDirectToUtranReqFromLte : RedirectToUtranReqFromLte cannot be handled at current status!!!
NumSysInfoContainer is not 0
[URRC_FREQ_AID][Default_NasLCSFreqAidReq] FreqAidRequest start(%d) rat(%d) tcxo_type(%d)
[URRC_FREQ_AID][Default_NasLCSFreqAidReq]TddCellSelecter Status is not available for Frequency Aiding
[URRC_FREQ_AID][Default_NasLCSFreqAidCnf] TriggeringMsg->AuxData.RetCode = %d
[URRC_FREQ_AID][Default_NasLCSFreqAidCnf] Payload->status(%d)
[URRC_FREQ_AID][Default_NasLCSFreqAidCnf] FreqAidCnf->status : FREQ_AID_STATUS_FAILED
[URRC_FREQ_AID][Default_NasLCSFreqAidCnf] FreqAidCnf->status : FREQ_AID_STATUS_LOCKED
[URRC_FREQ_AID][Default_NasLCSFreqAidCnf] FreqAidCnf->status : FREQ_AID_STATUS_UNLOCKED
TDD :AwaitingInitialRequest_NasPlmnSearchReq
SearchReq rcvd for any Plmn nastrigerredanyplmnsearch is true
AwaitingNasRequest_NasPlmnSearchReq: PlmnSearchReq rcvd for different plmn in connected mode
AwaitingNasRequest_NasPlmnSearchReq()-ReleaseCnx MsgNotSent
[AbortIfNewCountry] (%d)
Updating the Manual Scanned Freqs and Clear It
Stored Info network parameters read - doing a Stored Search
No USIM network parameters read - doing a Stored Search
No USIM network parameters read - doing a Blind Search
No Stored Freq available
[DS_CELL_SEL] Failed to Stop T_SearchOn
[DS_CELL_SEL] Failed to Stop T_SearchOff
ERROR Illegal State
ERROR Illegal State
SetSelectionCriteria: Wrong PLMN_SEARCH type!!! Setting to FULL SCAN
SetSelectionCriteria: PLMN_SEARCH_REQ - Search Type(%d)
Add TddLastManualScannedFreqs
SAVED_FRQN::Add All of FullScanDbFrequencies to CellSelecter_p->StoredNetworkPtr based on target PLMN ID
SAVED_FRQN::AddFullScanDbFrequencies : FullScanFreqDb->Uarfcn[%i] %i,, FullScanFreqDb->Plmn[%i] 0x%X
Add InitialFreq
Add TddLastUsedFreq
Add LastUsedNeighborFreq
Add SCellCachedFreq
SIM %d supports PS, do not reuse serving of peer SIM
Peer SIM (%d) access mode is different
Peer SIM's(%d) rrc_CnxMgr_p OR ServingCell_p OR PeerSelectedPlmnInstId OR TddServingCellSelReselInfo_p is NULL
Peer SIM (%d) is not in right state to reuse serving cell
Peer SIM (%d)Rscp < -80
Peer SIM (%d) is not suitably camped
Peer SIM Cell's LAI(%x) found in Forbidden list
Peer SIM (%d) PLMN is not equivalent to target PLMN
Peer SIM (%d) serving cell is in barred list (%d, %d)
Peer SIM (%d) serving cell is in black list (%d, %d)
Trying Same Cell Selection (%d, %d) from SIM(%d) [0x%x]
CellInfoPtr is NULL
G2U_resel:%d, G2U_redir:%d, G2U_resel_fail:%d, G2U_redir_fail:%d
Redirection from GSM
TddCellSelecter_p->TddDetectedNetworkPtr is NULL
Not Suported Band %d
Not Suported Band %d
Frequency %d is barred
Cell Freq %d PSC %d is barred
Redirection Candidate: Cell Freq %d PSC %d
Redirection Candidate: Cell Freq %d
ERROR Illegal State
ERROR Illegal State
ERROR Illegal State
QFR Resel from GSM. 2g has not measured any 3g cells
TddCellSelecter_p->TddDetectedNetworkPtr is NULL
Not Suported Band %d
Not Suported Band %d
Frequency %d is barred
Redirection Candidate: Cell Freq %d
ERROR Illegal State
ERROR Illegal State
ERROR Illegal State
Waiting for DSRC response for IRATResel
FrequencyIsValid is FALSE
Update Fdd Network Cache with the Serving Cell Retested Band SelectedBandId = %d
Received QFR Cell Reselection Req
Classname:TddCellSelecter: ERROR Illegal State
Received RemainingBarredTime = %d sec
ERROR Illegal State
Classname:TddCellSelecter: ERROR Illegal State
Classname:TddCellSelecter: ERROR Illegal State
----- BackGround PLMN search is not handled in this state -----
ERROR stopping TimerKeepBplmnOp
Automatic search requested
ERROR Illegal State
ERROR Illegal ManualAutomatic value: %i
rrc_CellSelecter_SetNWScanSpecifiedInfo entered
continued.. NumOfBand : %d, NumOfFreq : %d
Requested SpecifiedFreq[%d] : %d
Input Band (%d) is invalid
SpecifiedFreq[%d] = %d added
Requested SpecifiedBand[%d] : %d
Freqeuncy(%d) of Band(%d) is present. Ignore Band
SpecifiedBand[%d] = %d added
rrc_UnRegister_CnxMgr_StateChange FAILED
ERROR Illegal State
AwaitingInitialRequest_NasInitialPlmnSearchReq Trigger a Stored Search
ERROR Illegal State
NasInitialPlmnSearchReq: No TDD Stored Frequencies
[DS_CELL_SEL] Failed to Stop T_SearchOn
[DS_CELL_SEL] Failed to Stop T_SearchOff
AwaitingInitialRequest_NasInitialPlmnSearchReq Trigger a Blind Search
ERROR Illegal State
ERROR Illegal State
Waiting for DSRC response for IRATResel
AwaitingInitialRequest_CellReselToUtranReqFromLte
Received UARFCN = %d
Received PSC = %d
NumberOfCells = %d
Classname:TddCellSelecter: ERROR Illegal State
NumberOfCells = %d
AwaitingInitialRequest_ReDirectToUtranReqFromLte
Wrong Redirection Frequency from LTE
Overwrite the redirection freq ( 0 -> %d)
MRU not available
FrequencyIsValid is FALSE
Update Fdd Network Cache with the Serving Cell Retested Band SelectedBandId = %d
CSFB is Triggered: Set ForcedSib11Sib12Skipping
Set ForcedSib11Sib12Skipping in case of SI tunneling
ServingCellInst == NULL
Rel9 is not supported
ERROR Illegal State
Removed all the BlackList Entry On the Frequency - %d with Cause - BlackListRachFailure from black list as it is given by NW for redirection
ERROR Illegal State
ERROR Illegal State
TDD NasSelectingPlmn_NasPlmnSearchReq
Nirmala: SearchReq rcvd for any Plmn nastrigerredanyplmnsearch is true
ERROR Illegal State
Classname:TddCellSelecter: ERROR Illegal State
Classname:TddCellSelecter: ERROR Illegal State
NasSelectingPlmn_SelectableCellFound:PendingState %d
Update Tdd Network Cache with the Serving Cell Retested Band SelectedBandId = %d,selected uarfcn = %d
Update Fdd Network Cache with the Serving Cell Retested Band SelectedBandId = %d, SelectedUarfcn = %d
[DS_CELL_SEL] Failed to Stop T_SearchOn
[DS_CELL_SEL] Failed to Stop T_SearchOff
No USIM network parameters read - doing a Blind Search
No Stored Freq available
[DS_CELL_SEL] Failed to Stop T_SearchOn
[DS_CELL_SEL] Failed to Stop T_SearchOff
ERROR Illegal State
Band is %d, RXlev is %d,index is %d
Num Unique PLMN Id's is: %d and it is > 64
Band is %d, RXlev is %d,index is %d
Num Unique PLMN Id's is: %d and it is > 64
Num Unique PLMN Id's is: %d and it is > 64
Num Unique PLMN Id's is: %d and it is > 64
PlmnSearchFail Ind built - %d unique PlmnIds found
Num Unique PLMN Id's is: %d and it is > 64
PlmnSearchFail_IND cannot be created
[DS_CELL_SEL] Failed to Stop T_SearchOn
[DS_CELL_SEL] Failed to Stop T_SearchOff
ERROR Illegal State
TDD Stored search (USIM)done, Going for BLIND SEARCH
Detected Network Pointer Present and Band Search Status is TRUE for Band %d
Band is %d, RXlev is %d,index is %d
Num Unique PLMN Id's is: %d and it is > 64
Num Unique PLMN Id's is: %d and it is > 64
Band is %d, RXlev is %d,index is %d
Num Unique PLMN Id's is: %d and it is > 64
checking band search status and Maxband: Band %d. Max band=%d
Ignore RetestBarredCellFreq (Freq %d) : No CheckingCellSuitabilityInProgress
Ignore RetestBarredCellFreq (Freq %d) : No DetectedNetwork
[DS_CELL_SEL] ERROR Illegal State in RrcSelectingCell_PauseSearchReq
[DS_CELL_SEL] ERROR Illegal State in RrcSelectingCell_PauseSearchReq
[DS_CELL_SEL] %s
[DS_CELL_SEL] ERROR Illegal State in SelectingPlmn_PauseSearchReq
[DS_CELL_SEL] T_SearchOff Started
[DS_CELL_SEL] Failed to Start T_SearchOff
[DS_CELL_SEL] T_SearchOn Started
[DS_CELL_SEL] Failed to Start T_SearchOn
[DS_CELL_SEL] Time sliced search is aleady ongoing
[DS_CELL_SEL] Ignore TimeSlicedSearchOn is non Discrete CellSearch (%d)
[DS_CELL_SEL] Failed to Stop T_SearchOn
[DS_CELL_SEL] Failed to Stop T_SearchOff
Classname:TddCellSelecter: ERROR Illegal State
Classname:TddCellSelecter: ERROR Illegal State
Invalid CnxMgr Pending state: CellDch - using CellFach as the pending state instead
GenMsg is NULL
checking band search status and Maxband: Band %d. Max band=%d
ERROR Illegal State
CELL REJECT CAUSE = %d
ERROR Illegal State
Serving Cell Rejected. Cause=%d
SIB1 or MIB is NULL
----- ForeGround PLMN LIST REQ reposted to TddCellSelecter -----
Band is %d, RXlev is %d,index is %d
Num Unique PLMN Id's is: %d and it is > 64
Band is %d, RXlev is %d,index is %d
Num Unique PLMN Id's is: %d and it is > 64
Band is %d, RXlev is %d,index is %d
Num Unique PLMN Id's is: %d and it is > 64
Num Unique PLMN Id's is: %d and it is > 64
Num Unique PLMN Id's is: %d and it is > 64
PlmnList Ind built - %d unique PlmnIds found
Num Unique PLMN Id's is: %d and it is > 64
PlmnListIndPtr cannot be created
NoCell built - %d unique PlmnIds found
Num Unique PLMN Id's is: %d and it is > 64
NoCellIndPtr cannot be created
[DS_CELL_SEL] Failed to Stop T_SearchOn
[DS_CELL_SEL] Failed to Stop T_SearchOff
ERROR Illegal State
SearchReq rcvd for any Plmn nastrigerredanyplmnsearch is true
ERROR Illegal State
Saved Foreground Search
Classname:TddCellSelecter: ERROR Illegal State
[DS_CELL_SEL] Failed to Stop T_SearchOn
[DS_CELL_SEL] Failed to Stop T_SearchOff
CELL REJECT CAUSE = %d
ERROR Illegal State
[DS_CELL_SEL] ERROR Illegal State in RrcSelectingCell_PauseSearchReq
[DS_CELL_SEL] ERROR Illegal State in RrcSelectingCell_PauseSearchReq
[DS_CELL_SEL] T_SearchOff Started
[DS_CELL_SEL] Failed to Start T_SearchOff
SearchReq rcvd for any Plmn nastrigerredanyplmnsearch is true
ERROR Illegal State
CELL REJECT CAUSE = %d
ERROR Illegal State
[DS_CELL_SEL] T_SearchOff Started
[DS_CELL_SEL] Failed to Start T_SearchOff
[DS_CELL_SEL] ERROR Illegal State in RrcSelectingCell_PauseSearchReq
[DS_CELL_SEL] Failed to Stop T_SearchOn
[DS_CELL_SEL] Failed to Stop T_SearchOff
Classname:TddCellSelecter: ERROR Illegal State
[DS_CELL_SEL] Failed to Stop T_SearchOn
[DS_CELL_SEL] Failed to Stop T_SearchOff
ERROR Illegal State
Could not camp on to cells on Redirection freq
ERROR Illegal State
InterRatReselectingCell_SelectableCellNotFound: sending rrc_URRC_GRR_CellReselectionToUtranFailed
ERROR unexpected return code: %i from cell suitability check
ERROR Illegal State
G2U_resel:%d, G2U_redir:%d, G2U_resel_fail:%d, G2U_redir_fail:%d
[DS_CELL_SEL] Failed to Stop T_SearchOn
[DS_CELL_SEL] Failed to Stop T_SearchOff
NoCellIndPtr cannot be created
ERROR Illegal State
InterRatReselectingCell_DetectiON-ABORTed: sending rrc_URRC_GRR_CellReselectionToUtranFailed
ERROR unexpected return code: %i from cell suitability check
ERROR Illegal State
G2U_resel:%d, G2U_redir:%d, G2U_resel_fail:%d, G2U_redir_fail:%d
CandidateCellPtr is NULL
SearchReq rcvd for any Plmn nastrigerredanyplmnsearch is true
ERROR Illegal State
ERROR Illegal State
ERROR Illegal State
AwaitingRrcRequest_RrcSelectPlmn
ERROR Illegal State
ERROR Illegal State
ERROR Illegal State
HandoverFreq(%d) is not supported in this manual band selection mode
ERROR Illegal State
ERROR TddHandoverFreqPtr is NULL
Classname:TddCellSelecter: ERROR Illegal State
Debug Print: UE stuck Issue Reproduced
Checking BarredList for Cell(UARFCN %d/ CellParamID %d)
Cell/Freq is barred!!! Cannot Select this Cell(UARFCN %d/ CellParamID %d)
Classname:CellSelecter: ERROR Illegal State
Cell(UARFCN %d/ CellParamID %d) is not barred!!! go for checking suitability
ERROR Illegal State
[BPLMN] We already have a BPLMN Handler. Reuse it
----- BackGround PLMN search is not handled in CnxMgr_IsInMobilityState(%d) CnxMgr_IsConnectedState(%d) CnxMgrConn_GetCurrentState(%d) -----
[BPLMN] BPLMN Handler created (Single Rat Search Requested %d)
[BPLMN] Updating the DetecteNetworkPointer
[BPLMN] No detectedNetworkPointer
ERROR Illegal State
[BPLMN] Usim is not accessible, Initiating BPLMN search Request.
ERROR Illegal State
ERROR Illegal State
NumFastHplmnFreq is Zero
[BPLMN] Initiating the BPLMN search for FastHplmnFreq
[BPLMN] ERROR Illegal State
[BPLMN] Initiating the BPLMN search for Manual request
[BPLMN] ERROR Illegal State
----- BPLMN request rejected from DSRC, sending Fail_ind to NAS-----
[DSDS] BPLMN Waiting for Resource Response
Unable to action PlmnList request since Cell Reselection is in progress
----- ForeGround PLMN search is being handled -----
ERROR Illegal State
ERROR Illegal ManualAutomatic value: %i
ERROR stopping TimerKeepBplmnOp
AllBandSearchValue- %d
Building PlmnList Ind
Num Unique PLMN Id's is: %d and it is > 64
Num Unique PLMN Id's is: %d and it is > 64
Num Unique PLMN Id's is: %d and it is > 64
Added currently selected PlmnId: 0x%02X, 0x%02X, 0x%02X with RxLev: %d to head of list
PlmnList Ind built - %d unique PlmnIds found
Num Unique PLMN Id's is: %d and it is > 64
Failed to move to AwaitingNasRequest state
Num Unique PLMN Id's is: %d and it is > 64
Num Unique PLMN Id's is: %d and it is > 64
Num Unique PLMN Id's is: %d and it is > 64
ERROR Illegal State
CELL REJECT CAUSE = %d
ERROR Illegal State
ERROR stopping TimerKeepBplmnOp
GenMsg is NULL. Cannot Signal AbortDetection to Bplmn
ERROR Illegal State
----- BackGround PLMN search is not handled in CnxMgr_IsInMobilityState(%d) CnxMgr_IsConnectedState(%d) CnxMgrConn_GetCurrentState(%d) -----
ERROR stopping TimerKeepBplmnOp
ERROR stopping TimerKeepBplmnOp
[BPLMN] BPLMN Handler created
[BPLMN] ERROR Illegal State
[DSRC REJECT]----- BackGround PLMN search is not handled in this state -----
[DSDS] BPLMN Waiting for Resource Response
----- PCH not configured. BackGround PLMN search is not handled in this state -----
HandoverFreq(%d) is not supported in this manual band selection mode
ERROR Illegal State
ERROR TddHandoverFreqPtr is NULL
Classname:TddCellSelecter: ERROR Illegal State
Nirmala: SearchReq rcvd for any Plmn nastrigerredanyplmnsearch is true
AwaitingRrcRequest_NasSearchReq()-ReleaseCnx MsgNotSent
ERROR Illegal State
ERROR Illegal State
Frequency %d, Redirected %d
ERROR Illegal State
ERROR StoredNetworkPtr is NULL
ERROR TddHandoverFreqPtr is NULL
HandoverFreq(%d) is not supported in this manual band selection mode
ERROR TddStoredNetworkPtr is NULL
ERROR TddHandoverFreqPtr is NULL
ERROR Illegal State
Add TddLastUsedFreq
[NW_SCAN] NwScanMode %x: Fresh BPLMN Req Received
ERROR stopping TimerKeepBplmnOp
ERROR stopping TimerKeepBplmnOp
[BPLMN] We already have a BPLMN Handler. Reuse it
AwaitingRrcRequest_NasPlmnListReq: INTERNALAMRELREQ MsgNotSent
----- BackGround PLMN search is not handled in CnxMgr_IsConnectedState(%d) send SCRI first in Manual Search Case -----
----- BackGround PLMN search is not handled in CnxMgr_IsInMobilityState(%d) CnxMgr_IsConnectedState(%d) CnxMgrConn_GetCurrentState(%d) -----
[BPLMN] BPLMN Handler created (Single Rat Search Requested %d)
[BPLMN] Updating the DetecteNetworkPointer
[BPLMN] No detectedNetworkPointer
ERROR Illegal State
[BPLMN] Usim is not accessible, Initiating BPLMN search Request.
ERROR Illegal State
ERROR Illegal State
NumFastHplmnFreq is Zero
[BPLMN] Initiating the BPLMN search for FastHplmnFreq
[BPLMN] ERROR Illegal State
[BPLMN] Initiating the BPLMN search for Manual request
[BPLMN] ERROR Illegal State
----- BPLMN request rejected from DSRC, sending Fail_ind to NAS-----
[DSDS] BPLMN Waiting for Resource Response
----- ForeGround PLMN search is being handled -----
ERROR Illegal State
AwaitingRrcRequest_NasPlmnListReq()-ReleaseCnx MsgNotSent
ERROR Illegal State
ERROR stopping TimerKeepBplmnOp
CELL REJECT CAUSE = %d
ERROR Illegal State
ERROR stopping TimerKeepBplmnOp
ERROR stopping TimerKeepBplmnOp
[BPLMN] BPLMN Handler created
[BPLMN] ERROR Illegal State
[DSRC Reject]----- BackGround PLMN search is not handled in this state -----
----- DrxUpdateReq is not handled in CnxMgr_IsInMobilityState(%d) CnxMgr_IsConnectedState(%d) CnxMgrConn_GetCurrentState(%d) -----
[DSDS] BPLMN Waiting for Resource Response
----- BackGround PLMN search is not handled in this state -----
----- DrxUpdateReq is not handled in CnxMgr_IsInMobilityState(%d) CnxMgr_IsConnectedState(%d) CnxMgrConn_GetCurrentState(%d) -----
ERROR Illegal State
HandoverFreq(%d) is not supported in this manual band selection mode
ERROR TddStoredNetworkPtr is NULL
ERROR TddHandoverFreqPtr is NULL
ERROR Illegal State
ERROR Illegal State
[DS_CELL_SEL] T_SearchOff Started
[DS_CELL_SEL] Failed to Start T_SearchOff
[DS_CELL_SEL] ERROR Illegal State in DetectingPlmnIds_PauseSearchReq
[DS_CELL_SEL] ERROR Illegal State in DetectingPlmnIds_PauseSearchReq
ERROR Illegal State
ERROR unexpected return code So CellReselToUtranFailMsgPtr = NULL
Classname:TddCellSelecter: ERROR Illegal State
ERROR stopping TimerKeepBplmnOpIRAT
ERROR stopping TimerKeepBplmnOp
Nirmala: SearchReq rcvd for any Plmn nastrigerredanyplmnsearch is true
No USIM network parameters read - doing a Stored Search
No Saved Freq available
ERROR Illegal State
No Stored Freq available
ERROR Illegal State
ERROR Illegal State
Nirmala: SearchReq rcvd for any Plmn nastrigerredanyplmnsearch is true
Classname:CellSelecter: ERROR Illegal State
Classname:CellSelecter: ERROR Illegal State
ReadingUsimNetPar_NetworkParameterReadDone[NON FATAL ERROR] ReadRspIlmId = NULL
[BPLMN] Freqs found in SIM = %d
[BPLMN] Freqs to be scanned = %d
[BPLMN] No network data in USIM.
[BPLMN] Initiating BPLMN search Request.
ERROR Illegal State
ERROR Illegal State
ERROR Illegal State
ERROR Illegal State
ERROR Illegal State
No network data in USIM - stored TddNetwork instance not created
ERROR Illegal State
Classname:TddCellSelecter: ERROR Illegal State
Add TddLastUsedFreq
ERROR Illegal State
----- BackGround PLMN search is not handled in this state -----
PlmnSearchFail Ind built - %d unique PlmnIds found
Num Unique PLMN Id's is: %d and it is > 64
[DS_CELL_SEL] Failed to Stop T_SearchOn
[DS_CELL_SEL] Failed to Stop T_SearchOff
GenMsg is NULL. Cannot Signal AbortDetection to Bplmn
ERROR Illegal State
----- BackGround PLMN search is not handled in CnxMgr_IsInMobilityState(%d) CnxMgr_IsConnectedState(%d) CnxMgrConn_GetCurrentState(%d) -----
re-post the saved RrcSelectPlmn Request (%d)
ERROR stopping TPlmnSearchBackOff Timer
----- ForeGround PLMN LIST REQ reposted to TddCellSelecter -----
Classname:TddCellSelecter: ERROR Illegal State
Classname:TddCellSelecter: ERROR Illegal State
No network data in USIM - stored TddNetwork instance not created
[ConnectedOOSSelectingPlmn_SelectableCellNotFound] rrc_Class_TddBplmnHandler_GenerateAbort is NULL Returned
checking band search status and Maxband: Band %d. Max band=%d
----- BackGround PLMN search is not handled in this state -----
ERROR stopping TimerKeepBplmnOp
----- ForeGround PLMN search is handled in ConnectedOOSSelectingPlmn state -----
Msg is NULL. Cannot Signal AbortDetection to Bplmn
CELL REJECT CAUSE = %d
ERROR Illegal State
Unsupported Reject Cause
Pending State is not Idle, ignoring Cell Reject Cause = %d
SearchReq rcvd for any Plmn nastrigerredanyplmnsearch is true
ERROR stopping TPlmnSearchBackOff Timer
ERROR stopping TPlmnSearchBackOff Timer
ERROR stopping TPlmnSearchBackOff Timer
ERROR stopping TPlmnSearchBackOff Timer
ERROR stopping TPlmnSearchBackOff Timer
ERROR Illegal State
ERROR stopping TPlmnSearchBackOff Timer
Add TddLastUsedFreq
ERROR Illegal State
save RrcSelectPlmn Request (%d)
GenMsg is NULL. Cannot Signal AbortDetection to Bplmn
ERROR Illegal State
----- BackGround PLMN search is not handled in CnxMgr_IsInMobilityState(%d) CnxMgr_IsConnectedState(%d) CnxMgrConn_GetCurrentState(%d) -----
ERROR stopping TimerKeepBplmnOp
ERROR stopping TimerKeepBplmnOp
[BPLMN] BPLMN Handler created
[DSRC Reject]----- BackGround PLMN search is not handled in this state -----
[DSDS] BPLMN Waiting for Resource Response
----- PCH not configured. BackGround PLMN search is not handled in this state -----
re-post the saved RrcSelectPlmn Request (%d)
ERROR stopping TimerKeepBplmnOp
Classname:TddCellSelecter: ERROR Illegal State
Classname:TddCellSelecter: ERROR Illegal State
[BPLMN] ERROR Illegal State
Classname:TddCellSelecter: ERROR Illegal State
No network data in USIM - stored TddNetwork instance not created
[IdleOOSSelectingPlmn_SelectableCellNotFound] rrc_Class_TddBplmnHandler_GenerateAbort is NULL Returned
[DS_CELL_SEL] Failed to Stop T_SearchOn
[DS_CELL_SEL] Failed to Stop T_SearchOff
checking band search status and Maxband: Band %d. Max band=%d
Band is %d, RXlev is %d,index is %d
Num Unique PLMN Id's is: %d and it is > 64
Band is %d, RXlev is %d,index is %d
Num Unique PLMN Id's is: %d and it is > 64
Num Unique PLMN Id's is: %d and it is > 64
Num Unique PLMN Id's is: %d and it is > 64
PlmnList Ind built - %d unique PlmnIds found
Num Unique PLMN Id's is: %d and it is > 64
PlmnListIndPtr cannot be created
NoCell built - %d unique PlmnIds found
Num Unique PLMN Id's is: %d and it is > 64
NoCellIndPtr cannot be created
ERROR Illegal State
[IdleOOSSelectingPlmn_SelectableCellNotFound] rrc_Class_Scnx_GenerateamEstReject is NULL Returned
----- BackGround PLMN search is not handled in this state -----
ERROR stopping TimerKeepBplmnOp
GenMsg is NULL. Cannot Signal AbortDetection to Bplmn
ERROR Illegal State
----- BackGround PLMN search is not handled in CnxMgr_IsInMobilityState(%d) CnxMgr_IsConnectedState(%d) CnxMgrConn_GetCurrentState(%d) -----
ERROR stopping TimerKeepBplmnOp
ERROR stopping TimerKeepBplmnOp
[BPLMN] BPLMN Handler created
[DSRC Reject]----- BackGround PLMN search is not handled in this state -----
[DSDS] BPLMN Waiting for Resource Response
----- PCH not configured. BackGround PLMN search is not handled in this state -----
ERROR Illegal State
TddCellSelecter: ERROR Illegal State: %d
TddCellSelecter: ERROR Illegal State: %d
Nirmala: SearchReq rcvd for any Plmn nastrigerredanyplmnsearch is true
ERROR Illegal State
No Stored Freq available
[DS_CELL_SEL] Failed to Stop T_SearchOn
[DS_CELL_SEL] Failed to Stop T_SearchOff
ERROR Illegal State
ERROR Illegal State
[DS_CELL_SEL] T_SearchOff Started
[DS_CELL_SEL] Failed to Start T_SearchOff
[DS_CELL_SEL] T_SearchOn Started
[DS_CELL_SEL] Failed to Start T_SearchOn
ERROR Illegal State
[DS_CELL_SEL] Failed to Stop T_SearchOn
[DS_CELL_SEL] Failed to Stop T_SearchOff
ERROR Illegal State
SearchReq rcvd for any Plmn nastrigerredanyplmnsearch is true
No USIM network parameters read - doing a Stored Search
No USIM network parameters read - doing a Blind Search
No Stored Freq available
ERROR Illegal State
ERROR Illegal State
----- BackGround PLMN search is not handled in this state -----
ERROR stopping TimerKeepBplmnOp
----- ForeGround PLMN search is being handled -----
Automatic search requested
ERROR Illegal State
ERROR Illegal ManualAutomatic value: %i
ERROR Illegal State
ERROR Illegal State
Msg is NULL. Cannot Signal AbortDetection to Bplmn
ERROR Illegal State
No BPLMN Handler
ERROR Illegal State
ERROR Illegal State
ERROR Illegal State
GenMsg is NULL
Msg is NULL. Cannot Signal AbortDetection to Bplmn
ERROR Illegal State
----- BackGround PLMN search is not handled in this state -----
[DSDS] BPLMN Waiting for Resource Response
ERROR Illegal State
Msg is NULL. Cannot Signal AbortDetection to Bplmn
ERROR Illegal State
ERROR Illegal State
ERROR Illegal State
ERROR Illegal State
GenMsg is NULL
Msg is NULL. Cannot Signal AbortDetection to Bplmn
ERROR Illegal State
----- BackGround PLMN search is not handled in this state -----
[DSDS] BPLMN Waiting for Resource Response
Msg is NULL. Cannot Signal AbortDetection to Bplmn
ERROR stopping TimerKeepBplmnOp
CellSelecter: ERROR Illegal State: %d
ERROR Illegal State
ERROR stopping TimerKeepBplmnOp
CellSelecter: ERROR Illegal State: %d
ERROR Illegal State
CellSelecter: ERROR Illegal State: %d
ERROR Illegal State
ERROR stopping TimerKeepBplmnOp
Msg is NULL. Cannot Signal AbortDetection to Bplmn
Successfully started TimerKeepBplmnOp(%d sec)
Could not start TimerKeepBplmnOp(%d sec)
No BPLMN Handler
CellSelecter: ERROR Illegal State: %d
ERROR Illegal State
NasTriggeredMCCDetection_PlmnIdReadSuccess: UniquePLMN's is 0.. something wrong
ERROR Illegal State
[DS_CELL_SEL] Failed to Stop T_SearchOn
[DS_CELL_SEL] Failed to Stop T_SearchOff
AllBandSearchValue- %d
ERROR Illegal State
[DS_CELL_SEL] Failed to Stop T_SearchOn
[DS_CELL_SEL] Failed to Stop T_SearchOff
ERROR Illegal State
Classname:TddCellSelecter: ERROR Illegal State
InterLteRatReselectingCell_SelectableCellNotFound : RetCode(%d)
InterLteRatReselectingCell_SelectableCellNotFound : MONITOREDCELL_WRONG_CSGID(%d)
ERROR unexpected return code: %i from cell suitability check
ERROR Illegal State
ERROR unexpected return code: %i from cell suitability check
ERROR Illegal State
CandidateCellPtr is NULL
ERROR unexpected return code So CellReselToUtranCnfFromLteMsgPtr = NULL
Classname:TddCellSelecter: ERROR Illegal State
RedirectBandId received invalid BandId(%d) from LTE so last stored Band(%d) will be replaced
Not Registered with Srif, Ignoring further cellselection operation
failed to find a cell in the redirection freq => start Blind Cell Search
ERROR Illegal State
[DS_CELL_SEL] ERROR Illegal State in PausingSearch_CellSearchPaused
[DS_CELL_SEL] SelectableCellFound in unexpected state: (%s)
[DS_CELL_SEL] ERROR Illegal State in PausingSearch_CellSearchPaused
[DS_CELL_SEL] SelectableCellNotFound in unexpected state: (%s)
[DS_CELL_SEL] ERROR Illegal State in PausingSearch_CellSearchPaused
[DS_CELL_SEL] ERROR Illegal State in PausingSearch_CellSearchPaused
[DS_CELL_SEL] T_SearchOff Started
[DS_CELL_SEL] Failed to Start T_SearchOff
[DS_CELL_SEL] ERROR Illegal State in PausingSearch_CellSearchPaused
[DS_CELL_SEL] ERROR Illegal State in PausingSearch_CellSearchPaused
[DS_CELL_SEL] T_SearchOn Started
[DS_CELL_SEL] Failed to Start T_SearchOn
[DS_CELL_SEL] T_SearchOff Started
[DS_CELL_SEL] Failed to Start T_SearchOff
[DS_CELL_SEL] Time sliced search is aleady ongoing
[DS_CELL_SEL] ignore TimeSlicedSearchOn is non Discrete CellSearch (%d)
GenMsg is NULL
PlmnSearchReq rcvd for ANY_PLMN, nastrigerredanyplmnsearch is true
PlmnSearchReq rcvd for ANY_PLMN, nastrigerredanyplmnsearch is true
ERROR Illegal State
[DS_CELL_SEL] SelectableCellFound in unexpected state: (%s)
[DS_CELL_SEL] SelectableCellNotFound in unexpected state: (%s)
[DS_CELL_SEL] ERROR Illegal State in Ready_PauseSearchReq
[DS_CELL_SEL] ERROR Illegal - CandidateCellPtr is NULL
[DS_CELL_SEL] ERROR Illegal State in Ready_PauseSearchReq
[DS_CELL_SEL] BCH was open when paused
ERROR Illegal State
[DS_CELL_SEL] Serious Coding Error
[DS_CELL_SEL] Serious Coding Error : PausedScanProc (%d)
[DS_CELL_SEL] T_SearchOn Started
[DS_CELL_SEL] Failed to Start T_SearchOn
[DS_CELL_SEL] Serious Coding Error : CellSelecter's State (%d)
[DS_CELL_SEL] Serious Coding Error : CellSelecter's State (%d)
[DS_CELL_SEL] Abort Cell detection processed
[DS_CELL_SEL] Serious Coding Error : CellSelecter's State (%d)
[DS_CELL_SEL] ERROR Illegal State in Ready_PauseSearchReq
[DS_CELL_SEL] T_SearchOff Started
[DS_CELL_SEL] Failed to Start T_SearchOff
[DS_CELL_SEL] Time sliced search is aleady ongoing
[DS_CELL_SEL] Ignore TimeSlicedSearchOn is non Discrete CellSearch (%d)
GenMsg is NULL
Clearing the InitialiseFullScanFreqDb
TddMaxBand %d
TddStoredBands[%d] %d
FastHplmnFreq %d
ERROR deleting TPlmnSearchBackOff timer
ERROR deleting TimerKeepBplmnOp
ERROR deleting TimerOurOfService timer
ERROR deleting T_SearchOn timer
ERROR deleting T_SearchOff timer
rrc_TddCellSelecter_T325Expiry : CurrentRule = %d
rrc_TddCellSelecter_T325Expiry : Cannot refresh current EutraMeas(NOTACTIVE)
rrc_TddCellSelecter_T325Expiry : Cannot referesh current EutraMeas(Not Support or Reselecter is NOTACTIVE
