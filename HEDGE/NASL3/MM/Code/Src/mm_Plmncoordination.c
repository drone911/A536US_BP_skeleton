Automatic Plmn Selction Mode Activated in mm_InitialisePlmnManagement
Manual Plmn Selction Mode Activated in mm_InitialisePlmnManagement
EmerCallPendingDuringNormalSearch (%d)
Reset mm_RetryPlmn
MM will send dummy FAIL_IND because WE SHOULD NOT SEARCH 2G RAT

Ignoring PLMN Search Request. PLMN search is received when Reselection is ongoing
Sending Internal PLMN search fail as both CS and PS are disabled
MM_EMER_CALL_PENDING_DURING_NORMAL_SEARCH_FLAG is enabled.
Omc5GCapaFlag = %d
mm_GsmCapDisableFlag = %d, IsThisUserSelected = %d,EplmnHasSelectedPlmn= %d
mm_SelectedPLMN 0x%02x 0x%02x 0x%02x
mm_RetryPlmn 0x%02x 0x%02x 0x%02x
mm_RetryPlmn.RetryOnSamePlmn = %d
User Selected PLMN so Update FLAI List to RRC as zero to find the cell
Reset all attempt counters for retry LAU and PS attach on abnormal failed PLMN as per SoR requirement
RetryOnSamePlmn = FALSE

IsThisAutoToAutoResel = %d








Save The Message and Process After REL Cnf

Received ActHplmn from PLMN
EF_ActHPLMN is not received from PLMN

Updating RR(C) ActHPLMN -> 0x%02X 0x%02X 0x%02X
Triggering Priority PLMN Search
Priority PLMN Search not needed
SearchCause =%d, 0: normal, 1: EM

Discarding Saved Cell Ind
Requesting RR(C) to Try This PLMN -> 0x%02X 0x%02X 0x%02X
Auto Selection -> %s
Setting mm_PlmnSearchCellIndFlag to PLMN_REQUESTED_SEARCH AbortIfNewCountry : %d
Auto Selection -> %s
mm_BplmnSearchRatMode -> %s
mm_GetBPLMNEnabled -> %d
ListReq for RAT Mode MM_UMTS_RAT_MODE
ListReqBandNum = %d, BandList->
ReqChannelNum = %d, Channel list->
PlmnReqForOldList -> %d
LteRrcDetectFreqInfo.detectFreqNum = %d
ListReq for RAT Mode MM_GSM_RAT_MODE
ListReqBandNum = %d, BandList->
ReqChannelNum = %d, Channel list->
PlmnReqForOldList -> %d

Requesting (U)RRC to Send Available Plmn List ...
MmListPtr->FastHplmnScanRequested = %d
FastHplmnScanRequested -> %d
Back Gnd SearchType -> %s
PlmnReqForOldList -> %d
ServingPlmn ->
LteRrcDetectFreqInfo.detectFreqNum = %d
ListReqBandNum = %d, BandList->
network_scan request = %d
ReqChannelNum = %d, Channel list->
FreqSearchMode = %d
Back Gnd SearchType -> %s
SingleRatSearch -> %s
FastHplmnScanRequested -> %d
PlmnReqForOldList -> %d
LteRrcDetectFreqInfo.detectFreqNum = %d
ListReqBandNum = %d, BandList->
network_scan request = %d
ReqChannelNum = %d, Channel list->
BplmnListCause = %d
FreqSearchMode = %d
Back Gnd SearchType -> %s
PlmnReqForOldList -> %d
SingleRatSearch -> %s
ListSize -> %d
List ->
ListReqBandNum = %d, BandList->
BplmnListCause = %d
ReqChannelNum = %d, Channel list->
FreqSearchMode = %d

Requesting RRC to Try PLMN Search For CSCallResume..Try This PLMN -> 0x%02X 0x%02X 0x%02X
mm_GetServiceState = %d
PLMN SEARCH FAIL IND failCause = %d



mm_GetServiceState = %d
Normal PLMN Search Fail Ind


NumberArfcn = %d,ArfcnLength =%d
ArfcnInfo
PLMN LIST IND failCause = %d
NumberArfcn = %d
ArfcnInfo
NumberArfcn = %d,ArfcnLength =%d
ArfcnInfo
NumberArfcn = %d
ArfcnInfo
GRR sent Network scan indication
URRC sent Network scan indication for FDD
URRC sent Network scan indication for TDD
mm_SendMmPlmnLteRplmnEarfcnScanAbortInd
PLMN action delayed until GMM procedure completion in %s....
We have to Perfomr PLMN action Because we are in Idle Mode or Received No Service from RRC
PLMN action delayed until PS signaling connection release... except OOS Case
PLMN action delayed until RR connection release in %s
GMM states are ready for list request processing
PLMN action delayed until GMM procedure completion in %s
UpdateInfo.Lai = %02X %02X %02X %02X %02X
Indicating as CLASS_C_PS always for PS only type devices, ex: VZW TAB 2
If cell data RAI and SIM RAI are different, indicate DEREGISTERED for GMC
Plmn State = %s
HPlmn Search In Progress...
HPLMN search not initiated so proceed
Attempting to Add More than Allowed to mm_EquivalentPlmnList (%d) in mm_AddToEquivalentPlmnList
Deleting Equivalent Plmn List
Equivalent Plmn List (%d)
%d> 0x%02X 0x%02X 0x%02X
%d> %02X -%02X
Equivalent Plmn List is Empty !
Copy EPLMN List : Count=%d
EPLMN List is not changed.. No update in Registry..
Deleting Forbidden LAI Lists...[24.008]-4.4.1
%d Hours Left to (Periodically) Delete the Forbidden LAI Lists...[24.008]-4.4.1



mm_SimProvider = %d
Forbidden Plmn List (%d)
%d -> 0x%02x 0x%02x 0x%02x
ForbiddenPlmnList is Empty !
Forbidden GMM Plmn List (%d)
%d > 0x%02X 0x%02X 0x%02X
ForbiddenGmmPlmnList is Empty !
Manual Forbidden Regional Lai List (%d)
%d > 0x%02X 0x%02X 0x%02X 0x%02X 0x%02X
Manual ForbiddenRegLaiList is Empty !
Forbidden Roaming Lai List (%d)
%d > 0x%02X 0x%02X 0x%02X 0x%02X 0x%02X
ForbiddenRoamingLaiList is Empty !
Forbidden Regional Lai List (%d)
%d > 0x%02X 0x%02X 0x%02X 0x%02X 0x%02X
ForbiddenRegLaiList is Empty !
Removing Plmn 0x%02X 0x%02X 0x%02X From Equivalent Plmn List
PLMN Present in EHPLMN List. Not adding to FPLMN List
Removing Plmn 0x%02X 0x%02X 0x%02X From Forbidden Plmn List
Index is out of bounds, Index: %d, mm_ForbiddenPlmnCount: %d
Removing Lai 0x%02X 0x%02X From Manual Forbidden Regional Lai List
mm_PlmnState(Manual Mode) = %s
Removing Lai 0x%02X 0x%02X From Forbidden Regional Lai List
mm_PlmnState = %s
Removing Plmn 0x%02X 0x%02X 0x%02X From Forbidden Gmm Plmn List
PLMN Present in EHPLMN List. Not adding to FPLMN List
Removing Lai 0x%02X 0x%02X From Forbidden Lai List
Unable to Remove Lai from mm_PlmnCoordinationDb[MmStackId].mm_ForbiddenRoamingLaiList, Invalid Index (0x%02X)
We're in HPLMN
Invalid PlmnIndex used in mm_GetEquivalentPlmnListPlmn !
During manual mode we shall send Manual FLAI list to AS
During Auto mode we shall send Auto FLAI list to AS

Send FLAI list in manual mode.
NeighborBandNumber = %d
In Perform Cell indication actions for PLMN_REQUESTED_SEARCH, Resetting mm_PlmnSearchCellIndFlag to PLMN_AUTONOMOUS_SEARCH
In Perform Cell Indication actions for PLMN_AUTONOMOUS_SEARCH %d
FTaiLaiListFlag %d (0:FALSE, 1:TRUE)
NeighborBandNumber = %d
CS call is not released yet. Ask PLMN to search current RAT
PLMN perform actions: PLMN list size -> %d, PLMN list pointer -> %d


mm_PerformPlmnActions with Actions %s, Cause: %d
SAME LA: CCO/Reselection in PS COnnected is ongoing, dont trigger LOC_UPD perform action, LOC_UPD will be triggered on receiving RATMode change complete
Power off detach is pending, Further PLMN selection is not expected from PLMN
Waiting for PS release cnf to take LOC_UPD_FAIL action
Resetting HOLD PLMN RSP for MM_NOT_AUTHORISED_FOR_CSG REJECT Cause
Resetting values in mm_HandlePlmnSelNeededSameSimRejCause
Resetting values in mm_HandlePlmnSelNeededSameSimRejCause

Entered to mm_DecodePlmnActionsRsp %d ,%d
mm_CheckAndPerformPsRegActionsOnRelease: Attach not done now!!
mm_PerformPlmnActionsRsp::Cause = %d
mm_PerformPlmnActionsRsp:: PLMN module tried search on both RATs Release the Emergency call if Pending
mm_PerformPlmnActionsRsp:: Tried on both Rats no Suitable PLMN found and Release the call
PerformPlmnActions for EMERGENCY CALL has failed (or) emergency call attempt already cleared. Release CSCALL grant..
mm_PerformPlmnActionsRsp:: No Action Taken by GMC so send RESEL OK to GRR
mm_PerformPlmnActionsRsp:: Case %d , No Actions to be performed
PLMN mismatch occured, Requesting URRC to hold Cell Selection and Reselection, Since PLMN Search will come from GMC
PLMN mismatch occured, Requesting GRR to hold Cell Selection and Reselection, Since PLMN Search will come from GMC
Entered to mm_DecodePlmnSelectRsp %d ,%d
[23.122]-4.4.3.1 says that << At switch on, or following recovery from lack of coverage,
the MS selects the registered PLMN or equivalent PLMN...>>
We are NOT in the Registered Plmn Area -> Must go back to Reg. Plmn.... Please Wait
No Action Taken in Recovery From Loss of Coverage
mm_ProcessPlmnSelectRsp :: UNKNOWN CASE %d ,%d
Plmn State = %s in mm_PerformCellIndGenPlmnActions
Checking The selected PLMN/EqPLmn and CELL DATA LAI Are Not Matched
If UE is redirected under UTRAN control any limitation shall be removed...
In manual PLMN selection redirection failure will be informed...
Set PLMN State Recover Is Needed from PLMN Task
Checking to See if MM / GMM PRocedures are in Progress - MM_CheckMmGmmProcsInPlmnSelModeChange
Breaking GMM Connections in order to do Manual Plmn Selection...
Initiating RR Connection Release Due to Manual Plmn Selection By User. Selected Plmn Will be Sent to (U)RRC when MM is back in IDLE !!....
RR REL REQ already sent so wait till we get confirm
[GSM REDIRECTION INFO] ====> ARFCN(%d) BandInd(%d) NumOfArfcn(%d)
Foll Arfcn Info also Set
L2G CellInfoList Copied..
CellInfoList : NumCellInfoList=%d
ReSet MMC Redirect to 2G3G Info
mm_SendRrRedirectReqMsg Redirect To -> %s
Auto Selection-> %s
Plmn = 0x%02X 0x%02X 0x%02X in mm_SendRrRedirectReqMsg.
[3G Redirection]Requesting UArfcn -> %d
[DT Requirement for FastSearch For L2U CSFB is applied.
2G neighbor cell exist in redirection info so 3G cell search time is within 5 seconds.
IsFastSearchForCSFB = %d
L2G CellInfoList Sending to RR..
CellInfoList : NumCellInfoList=%d
[2G Redirection]Requesting Arfcn -> %d , Band Ind - %d

Requesting RR(C) to Rediret to this PLMN -> 0x%02X 0x%02X 0x%02X
Rat Mode Change state %s, MM Rat : %s, GMC Rat : %s, Rat Mismatch Count : %d
RAT Mismatch Identified for Maximum times MM Rat : %s, GMC Rat : %s
Is2GDisabled: %d and Is3GDisabled: %d
UpdateInfo.GsmCapaDisableState: %d and UpdateInfo.UmtsCapaDisableState: %d
mm_UmtsMode: %d and mm_UmtsMode received from GMC: %d
isCommercialPlmnId? (%d), mm_SimProvider? (%d), Iot? (%d)
PLMN_RECOVERY_TIMER Started So send Indication to CM
UpdateInfo.EutraCapbDisableState %d, UpdateInfo.NrEutraUpdatedCause: %d, UpdateInfo.NrCapbDisableState: %d
Eutra enabling actions are pending, discard Eutra disable actions as enable is not done
Added New Received EF_ActHPLMN to HPLMN List
Displaying the New Act HPLMN
ENS Acting Plmn = 0x%02X 0x%02X 0x%02X

IsThisAutoToAutoResel = %d, BplmnSearchRat: %d, BPlmnListCause: %d





BplmnListCause = %d
BplmnListCause = %d

set mm_BplmnSearchRatMode: %d (0-NO_RAT; 1-2G; 2-3G)
Processing pending suspension which was received from GMC, as BPLMN is completed
BPLMN_STOP_CNF: Process the saved PLMN_MM_RAT_CHANGE_REQ
Current mm_BackGrndSearchFlag value: %d
Updated mm_BackGrndSearchFlag value: %d (0:NO_BPLMN, 1: DRX_ONGOING, 2: LIST_ONGOING, 3: DRX+LIST_ONGOING)
set mm_PendingRatResumeAfterBplmn %d....
mm_PendingRatResumeAfterBplmn %d....
This is Re-try cause until 4 times
Reg status is saved.
Saved state : %d, %d, PLMN matching : %d
On the previous registering PLMN again, GMM reg status is retrieved now!!!
mm_CheckIfSkipGSM => Result =%d




CSG List Update Request sent ...
CSG Select Request mm_GsmCapDisableFlag = %d, IsThisUserSelected = %d
User Selected PLMN SoDelete and Update FLAI List to RRC to find the cell



GSM current RAT... CSG List Req not able send ...
GSM current RAT... CSG List Req not able send ...
mm_BplmnSearchRatMode -> %s
mm_GetBPLMNEnabled -> %d
Back Gnd SearchType -> %s
Back Gnd SearchType -> %s
MULTI_ BPLMN_SUPPORT CSG ListReq in MM_GSM_RAT_MODE
ListReq for RAT Mode MM_UMTS_RAT_MODE
No Multimode background CSG ListReq in MM_GSM_RAT_MODE

Requesting (U)RRC to Send Available Plmn List ...
CsgListCount -> %d, UiccCsgAwareness -> %d



mm_CsgRegistrationNeeded is %d


Requesting RR(C) to Try This PLMN -> 0x%02X 0x%02X 0x%02X
Setting mm_PlmnSearchCellIndFlag to PLMN_REQUESTED_SEARCH
GSM current RAT... CSG Search Req not able send ...
Memory Allocation failed
Visited CSG List byte size 0...
Wrong MSG type in mm_SendMmPlmnAbortCsgListCnf...
Memory Allocation failed

GSM current RAT... CSG List Req not able send ...
GSM current RAT... CSG Visisted List Ind not able send ...
GMC triggered PLMN search request on LTE RAT Omc5GCapaFlag %d...
MmSignalPendingInd.Cause: %d
unexpected received during != PMM CONNECTED state
Prev Rrc State: %d, Rrc_State: %d, in mm_UpdateGmmRrcState()
State was changed to PCH
RRC State was not changed.
State was changed from PCH


Triggering saved PLMN list request after GRR_MM_RESEL_HOLD_CNF
SameSimOperatorStatus = %d
SameSimOperatorStatus = %d
For US product Disabling A5_4
EncodedSizeinBits -> %d
MCC- - 0x%x
mm_SendPlmnLteRplmnEarfcnScanReq : Guardtimer-> %d s, SrcRat = %d, isFastScan = %d, RatToScan = %d
DetectFreqNum - %d
Result - %d
SrcRat - %d
arfcn - %d,rxlev - %d
arfcn - %d,rxlev - %d
Wrong Src Rat - %d, No Action
mm_CheckSilentResetCondition ConditionDomain - %d, Cause - %d, Operator - %d
mm_CheckSilentResetCondition Unwanted REJ cause
mm_GprsNotAllowedInHPlmn = %d
Attempting to Add More than Allowed to mm_EHPLMNList (%d) in mm_AddToEHPLMNList
GPRS NOT ALLOWED IN HPLMN restriction to the PLMN: 0x%02X 0x%02X 0x%02X , New Status: %d
EHPLMN Plmn List (%d)
%d -> 0x%02x 0x%02x 0x%02x, GPRS restriction: %d
EHPLMN is Empty !
EHPLMN is Empty !
Wrong Action =%d
RPLMN_QRB_CONTROL feature is enabled
G2L QRB enabled in this RPLMN
U2L QRB enabled in this RPLMN
After RAU accpet during CSFB, Registered PLMN was changed Need to clear QRB flag.
RPLMN_QRB_CONTROL feature is disabled
VzWCommercialSimCard(%d)
MmForcedHigherRatSearchReq.status is 0 (STOP).
Qrb is ignored.
PS registration not possible as current cell in GMM FPLMN list
Cause received =%d
StackID received:%2x
Default registry is enabled so new logic of A5/4 Plmn list is disabled
For US product Disabling A5_4
Camped PLMN is TEST NW ,So enable A5_4
PlmnId:%2x is present at Index:%d in A5_4_PLMN_LIST,So enable A5_4
Camped PLMN is TEST NW ,So enable GEA_2
PlmnId:%2x is present at Index:%d in mm_Gea2EnablePlmnList, So Enable GEA_2
StackID received:%2x
Default registry is enabled so new logic of enabling Gea4 based on operator list is not needed
Camped PLMN is TEST NW ,So enable GEA_4
PlmnId:%2x is present at Index:%d in mm_Gea4EnablePlmnList,So enable GEA_4
StackID received:%2x
StackID received:%2x
PlmnId received as NULL
QRB is triggered due to PS enabled in Global mode.
After Rel Cnf QRB will be triggered due to PS enabled in Global mode.
QRB is triggered due to PS enabled in Global mode and 2G RAT.
GSM RatMode, MM not in Idle, QRB will be initiated after moving to Idle
Hplmn MCC:0x%02x
While manual plmn selection is in progress, skip to sync up Plmn Attribute
After combined Attach reject for PS disable LAU is pended..
QRB state:%s.
FORCED_HIGHER_RAT_SEARCH will come and QRB will strat.
Normal PLMN Search Fail Ind

PlmnSelNeeded is %d, TriggerGmmRelReq %d
Request 2G to stop IRAT reselection if it is on going
Requesting URRC to hold Cell Selection and Reselection, Since PLMN Search will come from GMC
SoR Feature Status in registry == TRUE, SoR #17 reject action will be performed
Toggle RetryOnSamePlmn F -> T
Toggle RetryOnSamePlmn T -> F
Reset mm_RetryPlmn
PlmnSelNeeded is %d
Request 2G to stop IRAT reselection if it is on going
Set MM state to limted service to block triggering LAU before CELL_IND/PLMN selection
SoR Feature Status in registry == TRUE, SoR #17 reject action will be performed
Toggle RetryOnSamePlmn F -> T
Toggle RetryOnSamePlmn T -> F
PlmnSelNeeded is %d
Reset mm_RetryPlmn
Blocking PLMN selection for ATT requirement
Requesting URRC to hold Cell Selection and Reselection, Since PLMN Search will come from GMC
AttCommercialSimCard(%d)
TmoCommercialSimCard(%d)
CmccCommercialSimCard(%d)
NttCommercialSimCard(%d)
CtcCommercialSimCard(%d)
CuCommercialSimCard(%d)
CommercialSimCard(%d)
Is CMCC PLMN %d, is User Selected PLMN %d
Is CMCC PLMN Selected by User %d
Arfcn_number = %d
Updated values -> ListBuffIndex = %d, ArfcnBuffIndex = %d
MmListPtr->RatToSearch==>MM_UMTS_RAT_MODE
ListSize -> %d
List ->
BPlmnGsmCellDesc
ListSize -> %d
List ->
Waiting for PS release cnf to take LOC_UPD_FAIL action
Optional plmn selection for verizon PS only devices after max attempts
Optional plmn selection for verizon PS only devices after max attempts
EMERGENCY CALL, Making DSNC State to CS CALL Direcltly before sending PerformPlmnActions
Incorrect PLMN action %d
Reset mm_RetryPlmn
PlmnSelNeeded is %d
ReleaseWithRedirection : %d
