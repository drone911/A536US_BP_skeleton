Initialisation of <Cell Indication>, InitType=%d
DSAC State = %d in mm_SendGapiDsacStateInd()
mm_UpdateUMTSBarringInfo ChangedBarringInfo [%d], u32 GlobalCellID [%d]
CS_Barred [%d], PS_Barred [%d], EMEMGENCY_Barred [%d]
Unit data Indication received after PSHO, releasing CS CALL Grant
CS CALL grant will be taken soon anyway. No need to release it.
CS procedure is not CS CALL, not expected
Putting MM DATA REQ message in Queue in order to process %s
TempPtrBodyRec->mm_UrrcUnitDataInd.CellId(UMTS) %0x
Setting mm_SendRegInd True
Since DSAC is signalled, Access class is set to not barred
mm_NwModeChangeDueToAccessBarred == %d
CSFB MO/MT Call still pending So Making NMO as NMO2 again.. (NAS sysinfo PsDomainNasInfo[1] : %d
URRC_MM_CELL_IND Received : should ignore in PMM_CONNECTED state...
Discarded Cell Data LAI -> 0x%02X 0x%02X 0x%02X 0x%02X 0x%02X
PagingRestriction %d, AccessClassBarred %d, DSAC_Signalled %d
LocationRegistrationRestriction %d, AccessClassBarred %d, DSAC_Signalled %d
PACKET SERVICE TYPE : [ %d ]
CellChange is set to FALSE.
CellChange is set to TRUE.
RrCellInd.CellId -> [0] :%d , RrCellInd.CellId -> [1]:%d
RrCellInd.Arfcn :%d
RR Cell Ind Rel Version of MSC : [ %d ]
RR Cell Ind Rel Version of SGSN : [ %d ]
Cell belongs to forbidden LAI list. So, not suitable for search!!
ANY PLMN search case. CellNotSuitableForSearch [ %d ]
mm_UrrcCellInd.BandId = %d
mm_UrrcCellInd.IsGSMRatListIncluded = %d, mm_GsmCapDisableFlag = %d
NasSysInfo.CsDomainNasInfoLen = %d
NasSysInfo.PsDomainNasInfoLen = %d
RAU needed flag is %d
Since DSAC is signalled, Access class is set to not barred
mm_NwModeChangeDueToAccessBarred == %d
mm_UrrcCellInd.CellId : 0x%08X
Cell belongs to forbidden LAI list. So, not suitable for search!!
GsmCapaDisableState: %d and UmtsCapaDisableState received from GMC: %d
EncodedSizeinBits -> %d
Is2GDisabled: %d and Is3GDisabled: %d

Putting MM DATA REQ message in Queue in order to process %s

Quick rollback is in progress, so processing MM cell ind further, if Quick rollback is failed

DSDS: MM_DS_PERFORM_PROCEED_STACK_RESUMPTION
Mesage Cross Over detected, Cell Ind Ignored in mm_DecodeRrCellIndMsg
Received CELL IND After OOS So Reset All PLMN States In Connected Mode no Need to handle
CnCommonNasInfo Absent !!!! PLMN Changed without LAC changing?! Msg ignored in mm_DecodeRrCellIndMsg
PS Domain Info Also Present So Fill RAI and Nor For ANYPLMN
PsDomainNasInfoLen Absent !!!!
ExitMmCellInd After mm_PerformCellIndGenPlmnActions %s
ExitMmCellInd After mm_CheckRecoveryFromLossOfCoverage %s
Urrc Unit Data Ind received during Call in progress
No New LAI. Do nothing
Moved to New LAI. Start Location Update. Paging Abandoned
Cell Does not Support CS Domain, Terminating RR Connection.
Set MM service state to NORMAL on CELL_IND after AUTH failure
No New LAI. Do nothing
Moved to New LAI. Start Location Update. MO call was Abandoned
Copying Cell Data Flags Only Since MM_RR_NO_SERVICE_CELL_FLG is TRUE
Access Class is Barred in mm_ProcessMmCellIndMsg
SameRrConnexFailAction = %d
Quick rollback is in progress, so processing MM cell ind further, if Quick rollback is failed
SameRrConnexFailAction = %d
GMM_FORBIDDEN_PLMN_GPRS_FLG
NO SERVICE in mm_CheckRrCellIndNoServiceState
Ignoring No cell ind -> Message Crossover
LOSS_CVG: All contexts other than CC should be released
CallDropCauseForDBGSCR = %d, CallDropTypeForDBGSCR = %d
SameRrConnexFailAction = %d
Location update failed and PLMN PERFORM ACTIONS not sent before due to PS procedure on same RR connection and got NO_CELL_IND..Sending now..
Cell Does Not Support Voice Calls in mm_CheckRrCellIndNoServiceState
Emergency Call Attempted, Must find a Cell Which supports CS & Emergency Calls...
Emergency Call Was Attempted....
SameRrConnexFailAction = %d
Cell Supports Voice Calls in mm_CheckRrCellIndNoServiceState
LGU device has EPS only mode in LTE side. So when UE camps on Hedge cell, it needs to enable CS/PS
PS only mode in LTE side. If we dont set here, RAU will be sent first
SIM Absent, Ignore the message!!!!!
In PS only support case, MM should send RESUME done indication to URRC
On ANY PLMN in mm_CheckRrCellIndEmergCase....
In this case, BackGND PLMN_LIST will come when OOS timer expired
If UE is redirected under UTRAN control any limitation shall be removed...
RR sent a Plmn MM did not ask for and it's not in the Equivalent Plmn List Either....!
MM is in MM_IDLE/NULL during Emerg
Implicitly Detaching
Moved to Emergency Cell Only
Different LAI, releasing RR connection
Same LAI but not emergency call so releasing RR connection
Emeregency Cell Change in Dedicated Mode Not Possibe, FATAL ERROR
LU Running Moved to Emergency Cell Wait for Coverage
Received a Cell Ind in connected Mode Not Allowed
SameRrConnexFailAction = %d
Service Available -> Update T3212 (Loc. Upd Period)
T3212 is 0 -> Do Not Run Location Update
T3212 > 0 -> Location Update Shall be Run
Setting MsOperationMode to MM_MOBILE_CLASS_C on user's request-> %d
GSM only, Mobile Class C_CS under DSDS configuration, LAU should be performed on NMO I
GprsServiceAllowed -> %s
Set GprsServiceAllowed to TRUE
GprsServiceAllowed -> %s, PS is BARRED
Changing Network Mode for CS Domain in mm_CheckRrCellIndNetwkMode....
Stopping Location Update Timers in Network Mode 1 in mm_CheckRrCellIndNetwkMode....
RR connection for CS only Registration is pending and NMO 1
SameRrConnexFailAction = %d
Resetting Loc UPd Attempt Count -> Entering New Cell while in MM_ATTEMPTING_TO_UPDATE....[24.008]-4.4.4.5
mm_lastCsRegRatMode = %d ,mm_lte_Tin = %d
RESEL_HOLD_REQ Sent to GRR, So not processing GMM Cell Data
SameRrConnexFailAction = %d
User Has Not Requested To Attach to CS Domain in mm_CheckCellIndCsEnabled...
User Has Already Requested To Attach to CS Domain in mm_CheckCellIndCsEnabled...
But Mobile is Not Attached to CS Domain Yet in mm_CheckCellIndCsEnabled...
Unit Data Ind received, In Attempting to update state when UE is waiting for Cell Ind
Proceed with other functions because here the available CELL LAI is different than Prev Cell and CS is Allowed
After TAU reject (12,13,15) or (16,17 5times) cell LAI = sim LAI = prev LAI. LAU will be initiated in mm_ProcessMmCellIndMsgAreaReg.
And Mobile is Already Attached to CS Domain in mm_CheckCellIndCsEnabled...
Coverage Had Been Lost
We are on Any PLMN So need to Wait for PLMN Search Req Again
We are Back in the Registered Plmn Area
SIM RAI == Cell Data RAI -> ON_PLMN
SIM RAI != Cell Data RAI -> NOT ON_PLMN
SIM LAI == Cell Data LAI -> ON_PLMN
SIM LAI != Cell Data LAI -> NOT ON_PLMN
We are NOT Back in the Registered Plmn Area
We are in an Equivalent Plmn...Must Perform Registration
CELL_IND came and Service State should be normal service state..
We Are in the Registered Area, i.e. Sim Lai == New Cell Data Lai in mm_ProcessMmCellIndMsgAreaReg
T3212 Timeout detected
T3211 expired on unexpected condition and we are back in REG AREA
Registered Area NOT detected, i.e. Sim Lai != New Cell Data Lai in mm_ProcessMmCellIndMsgAreaNotReg
New cell Detected, Sim Lai != New Cell Lai, != Cell Lai or first HEDGE cell (IsFromLte : %d)
LAI Mimatch and after that there is a change of LA or UE was in LTE before, resetting LAI Mismatch Counter
Start Normal Location Update
New cell ind with change in parameters received during PS detach, invoke local detach
Do not stop T3311 timer for CU
No New Cell Detected...Sim Lai != New Cell Lai = Cell Lai
T3212 Timeout detected
Authentication Failed or Entered New Area. Iniitate Location Update...
Waiting for RRC EST CNF But cell change Occured,CELL Changed and Moved Back to Prev Cell SIM LAI == CELL LAI
Authentication Failed. RR Connection Already Released, Start Location Update Procedure
RR will throw away the EST REQ, MM Must send location update again
Loc Update After RR Rel Cnf
Authentication Failed. RR Connection Already Released. Nothing to do
Release RR Connection.
mm_GetRrMmRelReqSentFlag - FALSE
mm_GetDsDelayCsIdleEntry = %d
No Change of LAI but authentication failed on same LAI.
No Change of LAI
New Cell Does not support Loc Upd IMSI Attach -> Abort Procedure
Boom: LAI Not changed .....
Even though LAI did not Change, RR will throw away the EST REQ, MM Must send it again
UE had initiated a combined attach procedure to update CS registration in network...and new cell does not operate in network operation mode I
UE had initiated a combined RAU procedure to update CS registration in network...and new cell does not operate in network operation mode I
...IMSI attach required for registration in the CS domain
...UE implicitly registered in the CS domain
...normal LAU required for registration in the CS domain
MSG Contents: %s
LocUp -> %s
Requesting to NS to raise NTF
mm_MmServiceInd.PlmnAttribute -> %d
mm_GmmNwDetReqFlag = %d
PSDisableInHedgeReq = %d
MM in MM_PLMN_SEARCH service state, MM_NORMAL_SERVICE indicated to NS because of CSFB call PLMN Search
PLMN ID= %x %x %x, PsType= %x in CellInfo, GsmDtmSupported = %d
Plmn Id -> 0x%02X 0x%02X 0x%02X
mm_ps_service_type %d
mm_RegistrationStatusInd.CellId(GSM) %0x
mm_RegistrationStatusInd.CellId(UMTS) %0x
PS DETACH is done Locally
At this time, MM could not send RAU message to NW. Thus MM will set VOPS as FALSE
At this time, MM could not send RAU message to NW. Thus MM will set VOPS as FALSE
previous Sent Reg info & current Reginfo are same.Not sending info to NS
MM/GMM attach status = %d / %d
Current RAT = %d, Network mode =%d
Cell Data LAI -> 0x%02X 0x%02X 0x%02X 0x%02X 0x%02X
mm_ps_service_type %d
At this time, MM could not send RAU message to NW. Thus MM will set VOPS as FALSE
At this time, MM could not send RAU message to NW. Thus MM will set VOPS as FALSE
MM/GMM attach status = %d / %d
Current RAT = %d, Network mode =%d
RejType /RejCause = %d / %d
Attempt count = %d
Cell Data LAI -> 0x%02X 0x%02X 0x%02X 0x%02X 0x%02X

MSG contents: %s
No Cell Indication received after PSHO, releasing CS CALL Grant
CS procedure is not CS CALL, not expected
Operating Mode change is going.. No cell ind shall be ignored!!!
UMTS MODE was mismatched so NO CELL happened !!
PLMN List Size in NO CELL IND = %d
MM Registration Status Cause -> %s
GMM Registration Status Cause -> %s
Cell Data Access Class -> %s
Cell Data Access Class -> 1. Previous: %s, 2. New: %s
Cell Data LAI -> 0x%02X 0x%02X 0x%02X 0x%02X 0x%02X
New Cell Data LAI -> 0x%02X 0x%02X 0x%02X 0x%02X 0x%02X
Previous Cell Data LAI -> 0x%02X 0x%02X 0x%02X 0x%02X 0x%02X
Cell Data LAI For Emergency Camping -> 0x%02X 0x%02X 0x%02X 0x%02X 0x%02X
Previous Cell Data LAI For Emergency Camping-> 0x%02X 0x%02X 0x%02X 0x%02X 0x%02X
Cell Data MM_ATT_ALLOWED_CELL_FLG -> %s
Cell Data MM_EMERG_CALL_BARRED_FLG -> %s
Cell Data MM_CELL_CHANGE_CELL_FLG -> %s
Cell Data MM_RR_NO_SERVICE_CELL_FLG -> %s
Cell Data MM_DCS_BAND_BIT -> %s
Cell Data MM_NECI_CELL_FLG -> %s
Cell Data MM_CELL_SUPPORT_CS_CELL_FLG -> %s
Cell Data MM_CELL_SUPPORT_PS_CELL_FLG -> %s
Cell Data MM_PPAC_ALLOW_CS_PAGING -> %s
Cell Data MM_PPAC_ALLOW_PS_PAGING -> %s
Cell Data MM_ALLOW_CS_REGISTRATION -> %s
Cell Data MM_ALLOW_PS_REGISTRATION -> %s
Cell Data MM_CELL_INFO_VALID_FLG -> %s
Cell Data MM_CELL_DTM_SUPPORTED_FLG -> %s
Request to Display an Inavlid Flag -> 0x%02X in mm_DisplayCellDataFlag
--------------------- Displaying Cell Data Info. --------------
mm_CellData.T3212 = %d, mm_GetT3212TimedOutFlg() : %x
----------------------------------

New Cell Data Plmn is NOT in any Forbidden Plmn Lists.
New Cell Data Plmn is Part of Forbidden Plmn List !!
New Cell Data Plmn is Part of GMM Forbidden Plmn List !!
New Cell Data Plmn is Part of Forbidden Lai List !!
New Cell Data Plmn is Part of Forbidden Regional Lai List !!
Plmn Selection Started
RejCause = %s
Network Release version: M.S.C -> %s, S.G.S.N -> %s
LAI/RAI Changed so need to perform RAU then send CM SERV REQ
Cell Does not Support Voice, Terminating RR Connection.
Not Supported in this Case/It Can process RAU MM State is Fine
mm_CheckMmStatesForNmo1CellInd in State = %s
CS Dedicated Mode Not Expected CELL IND in this Case
IN case of ATTACH REJECT #2 or TAU REJECT #2, MmCause should be considered as NETWORK FAILURE.

Cause value received from LTE : Cause -- NETWORK FAILURE / GmmProcedure :
Set TIN to P-TMIS when ATTACH/TAU REJECT other than cause #18
mm_AddToForbiddenGmmPlmnList : 0x%x 0x%x 0x%x
Sync Plmn State to MM_ON_ANY_PLMN as per LTE reject #11/13
Sync Plmn State to MM_ON_ANY_PLMN as per LTE reject #11/13
mm_DecodeCellInfoReqMsg
MSG Contents: %s
Restore MM CellData for recovery
Setting MM CellData for recovery
Cell Band is changed
Cell Band is changed
The latest CELL MM received is not 2G.
prev Band: %d, Current band: %d
mm_RrDediCellInd.Arfcn :%d
mm_RrDediCellInd.CellId -> [0] :%d , mm_RrDediCellInd.CellId -> [1]:%d
Putting MM DATA REQ message in Queue in order to process %s
2G DediCellInd.Lai -> 0x%02X 0x%02X 0x%02X 0x%02X 0x%02X
Keep in-service display during abnormal LAU failure
GPRS reg status set to FALSE to prevent unexpected Roaming icon issue
Set GprsStatus to TRUE during temp RAU failure (<=2)
Set GprsStatus to TRUE before triggering attach when LastRegRat is NR
mm_GetCsCallResumeInd = %d
GS46 Metric queried
PrevStatus =%d, CurrentStatus =%d
Reset data
Information didn't be changed.
ucFieldValidity = 0x%02X
ucRAC = 0x%02X
ucAccessTech = 0x%02X
ucFreqBand =0x%02X
MCC = 0x%04d, MNC =0x%04d, LAC=0x%04X
CellId = 0x%04X, RNCId =0x%04X
Not supported Band
Not supported Band
URRC_MM_UNIT_DATA_IND was processed.. It doesn't need to change it..
URRC_MM_CELL_IND was changed into URRC_MM_UNIT_DATA_IND..
Resetting Sent Reg Status
%d, %d
%d, %d
CSFB MO/MT Call pending So Making NMO as NMO2 Till we release the CS CALL
GRR Traffic band ind received, CS connected: %d / PS connected: %d
Wrong Action =%d
CELL DB FLAG: %s -> TRUE
T323Availability = %d
LAU triggered because of CSFB call release
Periodic Location Update is triggered since 3312 was already expired
CSFB Emergency call is triggered: Orignial network mode is NMO1, Set combined RAU with IMSI flag
CSFB Emergency call is triggered on same LAI, mm_SetLauAfterCsFallbackFlag()
LAU has to be performed after Combined RAU rej #7,14 while manual PLMN selection is in progress
Forbidden Plmn Detected in mm_CheckRrCellIndEmergCase....
Forbidden LAI Detected in mm_CheckRrCellIndEmergCase....
Forbidden LAI Detected in << Forbidden Location Areas for Roaming >> Requesting RR(C) to Select Another Cell...
Forbidden LAI Detected in << Forbidden Location Areas for Roaming >>, We Are in an Area With Limited Service, No Cell Selection Necessary, Just Wait Until RR(C) Finds another Cell....
SameRrConnexFailAction = %d
Emergency Call Waiting...
No New LAI..
MM_REL_REQ is already received so don't retry CM SERVICE REQ again
Moved to New LAI. Start Location Update Procedure After RR Rel Cnf.
Cell Does not Support Voice, Terminating RR Connection.
No New LAI. Do nothing
Moved to New LAI. Start Location Update. Paging Abandoned
Cell Does not Support Voice, Terminating RR Connection.
IMSI detach request will now be processed by MM....
Moved to a New LAI, or ATT Actions Not Allowed...-> Implicitly Detaching
Moved to a New Cell, While Attempting to Detach. Proceed with Detach ...
Waiting For MM Connections to be Re-Established
Cell Does not Support Voice, Terminating RR Connection.
LastRegRatMode[%d], LastCsRegRatMode[%d]
mm_GetNeedLocalDetach [%d]
If Last Reg rat is NR, we should send LAU/ATTACH request in stead of RAU
Is2GDisabled: %d and Is3GDisabled: %d
Is2GDisabled: %d
Is3GDisabled: %d
CN Common SI (i.e. LAC) not present - using stored value
CnCommonNasInfo Absent !!!! PLMN Changed without LAC changing?! Msg ignored in mm_DecodeRrCellIndMsg
isCommercialCell =%d
PsDomainAccess PrevPSDA = %d, CurrentPSDA = %d
CsDomainAccess PrevCSDA = %d, CurrentCSDA = %d, last_update_is_not_combined is = %d
CS domain specific SI (i.e. T3212 and ATT) not present - using stored values
NetMode = %d
Clear MM_NETWORK_MODE_CHANG_FLG
Access Class is barred or not NMO1
Previous Network mode is = %s
Current Network mode is = %s
CSFB MO/MT Call pending So Making NMO as NMO2 Till we release the CS CALL
RAU Needed Flag is Not set
RAU Needed Not set - NMO/Access barred not suitable
DSAC for CS and PS are not barred
Previous update is not combined
RAU Needed Flag is set
Clear Cell Congestion flag, since there is a change of Cell in the GSM RAT
prev Band: %d, Current band: %d
Band is changed
Change duplex mode
SGSN Version updated (Pre99 ->R99+)... Encoding MSRAC!!!!!
EncodedSizeinBits -> %d
Cell Indication received after PSHO, releasing CS CALL Grant
CS CALL grant will be taken soon anyway. No need to release it.
CS procedure is not CS CALL, not expected
Operating Mode change is going.. New cell ind shall be ignored!!!
New cell ind shall be ignored, as there is a pending action from GMC for previous update reject and grant is with other stack!!!
CsCall is resumed when URRC_MM_CELL_IND comes
%s in Processing Cell indication message as UNIT DATA indication message since it is received in PMM Connected mode
Found in the ForbiddenRoamingLaiList
Found in the ForbiddenRegLaiList
Found the Cell for Given Redirect Message
CELL IND comes in IDLE state, so abandon quick rollback procedure.
Copying Cell Data Flags Only Since NO_IMSI or Forbidden Plmn, etc.
Copying All of Cell Data Information
In roaming case, set CS VOICE Only for KDDI requirement
In roaming case, set CS_VOICE_PREF_IMS_VOICE_SEC
If CCO, RESUME_DONE_IND will be sent after getting Result from RR
UE camped on another PLMN in previous, Need to update DCNR bit for camping plmn
RAT Change Detected in mm_ProcessMmCellIndMsg
EST REJ TRY OTHER RAT Cause Detected. Changing MM State to %s in mm_ProcessMmCellIndMsg
Entered here because there was a LAI change after EST_REJ reselection during an ongoing call, Call will be done after LAU procedure
Resetting MM_RE_START_PROC_ON_OTHER_RAT_FLG as MM_LOC_UPD_REQ_1ST_MM_CON_FLG-> %d (or) mm_CallWasAttempted -> %d
If T3213 is stopped due to NO_CELL_IND set LAU needed flag
Discarding MM DATA REQ message due to NO SERVICE
Triggering silent redial ...
MM Connection Lost due to No service
Emergency Call Was Attempted....
But Cell Does NOT Support Voice or Emergency Call!!!!!
Loc Upd Attempt Count > 0 & T3211 is Running. Wait Until it Expires
Sim Lai == NewCellData Lai = CellData Lai, We have NOT Moved from the Registered Area, T3213 Running -> Random Access Failure -> Must enter a new LAI before doing Loc Upd [24.008]-4.4.4.9 Clause (c)
(SimData == NewCellData) != CellData, We Have Moved Back into the Registered Area
LocUpd Done after T3211 -> %s
Either NOT UPDATED or T3213 Expired without doing Loc Upd, i.e. we have re-gained Coverage -> Perform Loc Upd.
MM regain coverage on the cell of registered LAI. [24.008]-4.4.4.9 (c)
Update status is PLMN_NOT_ALLOWED or LAI_NOT_ALLOWED
MO/MT Call is Pending
Cell Congestion flag is SET, Do not Send Paging Response
We Camp to the Same LA Cell Received From LTE , Proceed with Paging Responce
UE is on HongKong Network
We Camp to the Same LA Cell Received From LTE ,Mo Call is Pending Wait for MM EST REQ
T3211 RUNNING, Loc Upd Done After T3211 Expiry
AttemptCount > 0, LowerLayerFailCount > 0
Access Enabled in Same LAI, Do LAU/3122 Not Running
MM_CELL_CONG_WAIT_3122_EXP_FLG == TRUE
No LocUpd Done Until A differnt Cell is Entered or T3212 Expires !
Don't send LOC_UPD_FAIL to GMC during IRAT
Need to exit cell indication Processing, as RESEL_HOLD is triggered
First Cell Change Detected before T3213 Expiry Refer [1]-4.4.4.9 (c)
Access Enabled in Same LAI, Do LAU/3122 Not Running
MM_CELL_CONG_WAIT_3122_EXP_FLG == TRUE

Cell Data MM_ATT_ALLOWED_CELL_FLG -> 1. Previous: %s, 2. New: %s
Cell Data MM_EMERG_CALL_BARRED_FLG -> 1. Previous: %s, 2. New: %s
Cell Data MM_CELL_CHANGE_CELL_FLG -> 1. Previous: %s, 2. New: %s
Cell Data MM_RR_NO_SERVICE_CELL_FLG -> 1. Previous: %s, 2. New: %s
Cell Data MM_DCS_BAND_BIT -> 1. Previous: %s, 2. New: %s
Cell Data MM_NECI_CELL_FLG -> 1. Previous: %s, 2. New: %s
Cell Data MM_CELL_SUPPORT_CS_CELL_FLG -> 1. Previous: %s, 2. New: %s
Cell Data MM_CELL_SUPPORT_PS_CELL_FLG -> 1. Previous: %s, 2. New: %s
Cell Data MM_CELL_DTM_SUPPORTED_FLG -> 1. Previous: %s, 2. New: %s
Cell Data MM_PPAC_ALLOW_CS_PAGING -> 1. Previous: %s, 2. New: %s
Cell Data MM_PPAC_ALLOW_PS_PAGING -> 1. Previous: %s, 2. New: %s
Cell Data MM_ALLOW_PS_REGISTRATION -> 1. Previous: %s, 2. New: %s
Cell Data MM_ALLOW_CS_REGISTRATION -> 1. Previous: %s, 2. New: %s
Cell Data MM_CELL_INFO_VALID_FLG -> 1. Previous: %s, 2. New: %s
Keep previous mm_ps_service_type, mm_ps_service_type = %d
RR_DEDICELL_IND, DTM supported on new cell = %d, ps type = %d, CellUpdateRequired:%d
RR_DEDICELL_IND, RAU will be initiated..
DEDICELL_IND after IRAT HO, RAI -> %02X %02X %02X %02X %02X %02X
Gmm Service State = %d
Resetting TBF Release Actions
Delay to send REG_STATUS_IND after LAU completed
NS will trigger ATTACH_REQ later.
Warning : Power-off detach is on-going, so not sending REG_STATUS_IND to NS
Delay to send REG_STATUS_IND after LAU completed
