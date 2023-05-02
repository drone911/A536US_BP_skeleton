Failed to create BchConfigGuardTimer
Failed to create RachFachConfigGuardTimer
Failed to create CnxModeSibReadGuardTimer
Serious Failure
[State : %d] release the saved EstRrcCnx Request
[rrc_CnxMgrIdle_free] ERROR - unable to delete Bch Config Guard Timer
[rrc_CnxMgrIdle_free] ERROR - unable to delete RachFach Config Guard Timer
[rrc_CnxMgrIdle_free] ERROR - unable to delete CnxModeSibReadGuardTimer
[rrc_CnxMgrIdle_free] ERROR - unable to delete T_3134
RedirectionTypeToOtherRat : MSGRRCCNXREJ_REDIR_GSM_IRAT
RedirectionTypeToOtherRat : MSGRRCCNXREJ_REDIR_EUTRA_IRAT
RedirectionTypeToOtherRat : Unknown
RedirectionTypeToOtherRat : MSGRRCCNXREL_REDIR_GSM_IRAT
RedirectionTypeToOtherRat : MSGRRCCNXREL_REDIR_EUTRA_IRAT
RedirectionTypeToOtherRat : Unknown
CnxMgrIdle_p->RecdDlMsg is Unknown Message (not RrcCnxRelease/RrcCnxRej)
Error : CnxMgrIdle_p->RecdDlMsg is NULL
IsMOInProgress: CnxMgrInstId is NULL
IsRegistrationInProgress: CnxMgrInstId is NULL
GeneratePageInd: RetMsg is NULL
IsFirstAttemptForServingCell: %d
isConnectingOos: %d
setConnectingOos: %d
UE camped on the Cell
[State : %d] re-post the saved EstRrcCnx Request
[State : %d] There is already an EstRrcCnx Request: replace it
[State : %d] save an EstRrcCnx Request
Fatal Error: Messsage Freed abnormally @ [State : %d] [Event : %d]
[State : %d] release the saved EstRrcCnx Request
Handover to Utran Command received from %s
Handover to Utran Command received from GSM
HoTypeIndMsg = NULL
SecMgrInst = NULL
Serious Problem this protocol error %i is not handled
HOToUtran with %d Failure
Serious Problem this FailureCausse %i is not handled
Protocol failure in HO msg with %d Failure
Serious Problem this protocol error %i is not handled
HOToUtran with %d Failure
Serious Problem this FailureCausse %i is not handled
CellChangeOrder to Utran Received
T3134 started (TmId=%d)
Cell-Selection Failed on teh specifed CellFor CCO
[State : %d] release the saved EstRrcCnx Request
Bch Resource is requested in default state %d
ERROR stopping BchConfigGuardTimer Timer
ERROR starting BchConfigGuardTimer timer
[State : %d] release the saved DL Message for RRC CNX REQ
Receive unexpected Cell selection from CellReselecter, skip.
Camped on a new Cell
InterFreqCellSelection trigger when waiting for Normal CellSelection
Request to SelectCellFailed, Trigger Plmn-Search
IsFirstAttemptforServingCell %d, isEnterIdleFromConnected %d
PCH now configured in UE Idle Mode
Attempt again to configure Paging on the new cell in Idle
Serious Failure to configure Pch , Change the cell & Retry
BPLMN:Failure to configure Pch, Aborting BPLMN and then Change cell
Cell-reselection occurred in Idle Mode
Out of service in Idle , cannot receive paging anymore
MIB multiple PLMN is NOT present
Selected PLMN matches with PLMN in MIB
MIB multiple PLMN is present
Selected PLMN matches with PLMN in MIB with mult List present
Selected PLMN matches with PLMN in MULTI_PLMN_LIST
Establish Request Received for Emergency Call
Establish Request Received for Emergency Call and IsEmergencyCallBarred = %d
DSAC param is signalled in SIB
DSAC param is signalled, so even if vl_AccBarred is barred, ignore it
PPAC param is signalled in SIB
PPAC param is signalled, so even if vl_AccBarred is barred, ignore it
Establish Request Received for RRC Connection Establishment
Connection cannot be established when Access Class is Barred
Serious Error, Failed to encode CnxReq Msg
New RRC CNX REQUEST created successfully
No UeId in the system, Serious Failure
SIBs have changed , Paging will be re-configured in Idle
Request Trigger for InterFrequency Cell-Reselection
CellReselection to GSM is being attempted
CellReselection to EUTRA is being attempted
Failure to Establish RRC Connection notification to SCNX
Received EstablishCnxRequest in non-idle state
Sib7 Received status: %d while in WaitingForSib7State Proceed further
Failure to get SIB7Timer value Freq
BchReadError in WaitingForSib7 state,
SIB7-ReadError %d: ignored
WaitingForUtranCnxSetup : Msg Ptr is NULL
WaitingForUtranCnxSetup : Msg Ptr is NULL
WaitingForUtranCnxSetup : Msg Ptr is NULL
RachResourceSetup_NewCellSelected : NewCellSelected msg saved
BCH Read Error happened earlier, so Shared channel release is on going we will skip rest of the operation
Initial access resources configured in Idle
[State : %d] re-post the saved NewCellSelected Request
Failure Could not configure Initial access resources Wait reselection...
[State : %d] free saved NewCellSelected request
Serious Failure: cannot send the cnxrequest with out one
CnxMgrInst is NULL
ProcessPageInd: NumberOfScnxClients = %d
ProcessPageInd: ResourceMgrMsgPtr is NULL
ProcessPageInd: Sending ReleaseConnectedModeResourcesFromFACH to ResourceMgr successfuly
ProcessPageInd: Failure sending ReleaseConnectedModeResourcesFromFACH to ResourceMgr
Sib7 Received status: %d while in RachResourceSetup Proceed further
Failure to get SIB7Timer value Freq
Failure to create msg
BchReadError in RachResourceSetup state
[State : %d] free saved NewCellSelected request
SIB7-ReadError %d: ignored
EarlySelectingCell is triggered: ignore SIB7Received
SIB7 Expiry Received in state %d
EarlySelectingCell is triggered: ignore SIB7Expiry
RRC Connection Request shall be sent on uplink RACH
[State : %d] re-post the saved NewCellSelected Request
[State : %d] free saved NewCellSelected request
fail to send RRC Connection Request
[State : %d] free saved NewCellSelected request
[State : %d] free saved NewCellSelected request
RachResourceSetup_PageInd: MsgPayload is NULL
Cell-reselection ocurred while waiting for Utran connection setup
Failure to get SIB7Timer value Freq
WaitingForUtranCnxSetup_OutOfService
Ignore OOS -> Wait for ReleaseShareResCnf during IF Cell Reselection
Ignore T300Expiry -> Wait for ReleaseShareResCnf during IF Cell Reselection
CmnChnlChangedInWaitforSetup[%d]
T300Expiry during new SIB reception -> Wait for SIB7Received event
[DM Update] EventType(RLF_OR_WEAK_SIGNAL %d), Cause(RandomAccessProblem %d)
Remove ServingCellCacheInfo for this cell(UARFCN%d,PSC%d) because N300 exceed and SIB5 need to be read again
Ignore RecvRrcCnxSetupInd -> Wait for ReleaseShareResCnf during IF Cell Reselection
RRC-Connection Setup received
Failure to get SIB7Timer value Freq
[Idle >> Reselection] In Progress => wait for ReselectionAbortedDone
[Idle >> Reselection] No Progress => start to configure DCH from Idle
RRC-Connection-setup with %d protocol failure
RRC-Connection setup with % failure cause
All N300 attempts in vain , shall remain in idle only.
Successfully started CnxModeSibReadGuardTimer(%d msec)
CnxModeSibReadGuardTimer is not started
Ignore RecvRrcCnxRejectInd -> Wait for ReleaseShareResCnf during IF Cell Reselection
Cnx-reject is received
Removed the freq - %d from barred list as it is given by NW for redirection
Wait time 0 so Return to Idle
FixedUarfcn (%d) Set, so Return to Idle
Wrong Re Direction Type received
Wait time 0 so Return to Idle
Cnxreject with %d protocol error received
This protocol errror %d is to be ignored
U2L Redirection => EUTRA Disabled: Normal Reject procedure
Invaild RAT Info
Network has re-directed UE to Gsm-RAT
All N300 attempts in vain or no more attempts for connection request
Ignore SIB7Received (RetCode %d) -> Wait for ReleaseShareResCnf during IF Cell Reselection
Sib7 Received status: %d while in WaitingForUtranCnxSetup_SIB7Received
Failure to get SIB7Timer value Freq
Failure to create msg
BchReadError in WaitingForUtranCnxSetup state,
SIB7-ReadError %d: ignored
[WaitingForUtranCnxSetup] InterFrequency Cell-Reselection
SIB7 Expiry Received
Ignore TSIB7Expiry -> Wait for ReleaseShareResCnf during IF Cell Reselection
EarlySelectingCell is triggered: ignore SIB7Expiry
ReleaseInitialAccessResources_ReleaseSharedResCnf: msg is NULL
WaitingForUtranCnxSetup_PageInd: MsgPayload is NULL
Ignore RachFachInfoChangeInd -> Wait for ReleaseShareResCnf during IF Cell Reselection
RachFachInfoChanged -> Wait for SIB7Received event
Ignore MacRachTmDataStatus -> Wait for ReleaseShareResCnf during IF Cell Reselection
CnxMgrInst is NULL
CnxMgrIdle is waiting for ConfigDchLayersCnf from ResourceMgr
Transition to DCH failed due to %d status
Failed to configure common resources
Cnxmgr now entering Connected state from Idle
RrcConnectionEstablishment Succeed on Uarfcn(%d) Cpich(%d) which TxFailParam Validity Timer is running!
[rrc_CnxMgrIdle_EnteringConnected] Failed to get Expiry Time from SIB7.
SendUrrcMmScellAsInfoInd : BandId(%d), Uarfcn(%d), RrcState(%d)
Wrong UARFCN(%d), BandId(%d) were detected so it won't be updated to SIPC
ReselectionAbortedDone => start to configure DCH from Idle
ignore ReselectionAbortedDone
Cell-reselection while waiting for connected mode sibs
ERROR stopping CnxModeSibReadGuardTimer
out of service while waiting for connected mode sibs to be read
ERROR stopping CnxModeSibReadGuardTimer
all the connected mode sibs have been read
ERROR stopping CnxModeSibReadGuardTimer
[Idle >> SIB reading] In Progress => wait for CnxModeSibRead
[Idle >> Reselection] In Progress => wait for ReselectionAbortedDone
[Idle >> Reselection] No Progress => start to configure DCH from Idle
SIB7 - Do nothing, just waiting for the CnxModeSibs
BchReadError in WaitingForCnxModeSibsRead state,
ERROR stopping CnxModeSibReadGuardTimer
SIB7-ReadError %d: ignored
ERROR stopping CnxModeSibReadGuardTimer
ERROR stopping CnxModeSibReadGuardTimer
WaitingForCnxModeSibsRead_PageInd: MsgPayload is NULL
[State : %d] There is already an EstRrcCnx Request: replace it
[State : %d] save an EstRrcCnx Request
Received EstablishCnxRequest in SelectingCell state
out of service while selecting the cell
out of service while selecting the cell
Fach layers configured due to RRC-Connection-setup
Not completely successful CnxEstablishment due to cell-reselection
Serious Failure :Couldn't configure Fach Resources ,retry
Transition from connected mode to Idle
Generate indication FAILED!
Removed the freq - %d from barred list as it is given by NW for redirection
FixedUarfcn (%d) Set, so Normal Released
U2G Redirection => blocked(RAT mode %d)
U2L Redirection => EUTRA Disabled: Normal Release procedure
Wrong Re Direction Type received
[vl_retToIdle]CurRrcState %d, Cause %d, isUtranCommercialPlmnId %d is_HHOLabTestCell %d
No Cell Search Req to CellSelecter dueto Cell Search Ongoing
Paging with CN Identity was received in Connected mode
[CNX to IDLE] Msg is Null!!
[DCH to IDLE] Previous Serving UARFCN %d, FreqInDch %d
[DCH to IDLE]Select UARFCN(%d) CPICH(%d)
[DCH to IDLE]rrc_CellSelecter_GetNumCpichInDch has %d CPICH
[DCH to IDLE]Select UARFCN(%d) CPICH(%d)
isHHOLTCell(TRUE) : This is TestPlmnId(001-01)
isHHOLTCell(TRUE) PLMN Id MCC(%d%d%d) MNC(%d%d)
isHHOLTCell(TRUE) : LAC 0x%x, RAC 0x%x)
isHHOLTCell(FALSE) : PLMN Id MCC(%d%d%d) MNC(%d%d)
isHHOLTCell(FALSE) : LAC 0x%x, RAC 0x%x)
Connected_ReleaseCnx(): MsgNotSent to CnxMgr
L2Ack for Rrc Connection Complete received.
PagingType_1 with CN Identity in Connected mode, so locally release RRC Cnx
[FSM_CANNOTHAPPEN] PagingType_1 with CN Identity in Connected mode
cell-reselection while waitng for the T-Wait Expiry
WaitTime_NewCellSelected: Wrong Msg Type %d
Invalid TWaitStatus %d
Attempt again to configure Paging on the new cell in Idle
Msg is NULL
WaitTime_CnxModeSibsRead: msg is NULL
WaitTime_CnxModeSibsRead: msg is NULL
T-Wait expiry, can initiate connection establishment again
[TWAIT_FREQSEARCH] Wait for FreqSearch Result
Request Trigger for InterFrequency Cell-Reselection While waiting For Wait Timer Expiry
[TWAIT_FREQSEARCH] Wait for FreqSearch Result
ReleaseInitialAccessResources_ReleaseSharedResCnf: msg is NULL
ReleaseInitialAccessResources_ReleaseSharedResCnf: Either Fptr (%d) or ClientInst (%d) is NULL
ReleaseInitialAccessResources_ReleaseSharedResCnf: msg is NULL
Invalid TWaitStatus %d
msg is NULL
Redirected Freq is invalid
Invalid TWaitStatus %d
cell-specified in connection reject has been selected
out of service when waiting to select the cell specified in cnx-reject
Redirected Freq is invalid
ReleaseInitialAccessResources_CnxModeSibsRead: msg is NULL
ReleaseInitialAccessResources_CnxModeSibsRead: msg is NULL
ReleaseInitialAccessResources_ReleaseConnectedModeResourcesCnf: PageIndRecord != NULL
initial access resources released , due to connection-reject
ReleaseInitialAccessResources_ReleaseSharedResCnf: msg is NULL
ReleaseInitialAccessResources_ReleaseSharedResCnf: Either Fptr (%d) or ClientInst (%d) is NULL
ReleaseInitialAccessResources_ReleaseSharedResCnf: msg is NULL
ReleaseInitialAccessResources_ReleaseSharedResCnf: PageIndRecord != NULL
NAS should not request Cnx Establishment during Inter-RAT Transition to UMTS
Successful for Handover from LTE to UMTS
Successful for Handover from GSM to UMTS
Failure to establish DCH resources due to %d
wrong return code %d which is not handled by cnxmgr received
CCO specified cell , selected
NAS should not request Cnx Establishment during Inter-RAT Transition to UMTS
T3134 expired in default state %d
[State : %d] release the saved DL Message for RRC CNX REQ
could not select the CCO specified cell
NAS should not request Cnx Establishment during Inter-RAT Transition to UMTS
[State : %d] There is already a repsonse to RRC CONNECTION REQ : replace it
[State : %d] save the reponse DL message for RRC CONNECTION REQ
Failure to get SIB7Timer value Freq
ErrorCode:%d while sib7 acquisition, abort InterRatCCO
[State : %d] re-post the saved DL resp for RRC CNX REQ
NAS should not request Cnx Establishment during Inter-RAT Transition to UMTS
Initial access resources configured for CCO
Failure to get SIB7Timer value Freq
SIB7 Received in default state %d
SIB7 BCH-READ-ERROR Received in default state %d
sib-7 timer is restarted
Connection establishment shall be sent on uplink rach for CCO
t300 expiry when establishing connection for CCO
NAS should not request Cnx Establishment during Inter-RAT Transition to UMTS
CCO scenario , received connection reject
hand over to another cell specified in cnx reject
wait time specified in cnx reject
protocol error in the received cnx reject
This protocol errror %d is to be ignored
all attemtps to establish cnx for CCO in vain
Lower Layers suspended due to CellReselectionToGsm
Lower Layers suspended due to CellReselectionTo Eutra
Lower Layers suspended due to InterRatCellChangeOrder Failure
Lower Layers suspended due to InterRatHandover to umts Failure
No ongoig procedure, unexpected path
ERROR deleting BchConfigGuardTimer
ERROR deleting RachFachConfigGuardTimer
ERROR deleting CnxModeSibReadGuardTimer
Pch configuration resume complete
configuration of pch resources failed
Cell-reselection to GSM failed , resume pch configuration
Cell-reselection to GSM failed and reversion to Serving Cell failed
Transition to GSM , cell-reselection complete
Again Out of service , not able to camp on a cell , transitioning to Idle.
Bch Resource is confirmed in default state %d
ERROR stopping BchConfigGuardTimer Timer
CnxMgrIdle_p->BchConfigGuardTimer is stopped
CnxMgrIdle_p->BchConfigGuardTimer status = %d
msg->AuxData.RetCode = %d
Cell-reselection occurred in RachResourceSetupFailedForCnxEstablish state
ERROR stopping RachFachConfigGuardTimer Timer
ERROR stopping RachFachConfigGuardTimer Timer
Request Trigger for InterFrequency Cell-Reselection
ERROR stopping RachFachConfigGuardTimer Timer
Rach/Fach Guard timer expired. Send Rej to NAS and initialise all to idle
Serving cell enters in service range. Try Rach/Fach setup again
ERROR stopping RachFachConfigGuardTimer Timer
BchReadError in WaitingForBchReleasedForReleaseCnx state,
WaitingForUtranCnxSetup : Msg Ptr is NULL
SIB7- SUCCESS %d: ignored
WaitingForUtranCnxSetup : Msg Ptr is NULL
ERROR deleting BchConfigGuardTimer
ERROR deleting RachFachConfigGuardTimer
ERROR deleting CnxModeSibReadGuardTimer
ERROR deleting BchConfigGuardTimer
ERROR deleting RachFachConfigGuardTimer
ERROR deleting CnxModeSibReadGuardTimer
RedirectionInProgress_ReleaseSharedResCnf: CnxMgrState is NOTACTIVE (suspending)
WaitingForRedirectionResult_ReleaseSharedResCnf : sending URRC_MM_RAT_REDIRECTION_TO_GSM_IND to MM
WaitingForRedirectionResult_ReleaseSharedResCnf : Sending Eutra Redirection Info to MM
[rrc_msgRrcCnxRej_getRedirectionTypeToEutraOrGsm] IE not present as the default case
RedirectionInProgress_ReleaseSharedResCnf : sending URRC_MM_RAT_REDIRECTION_TO_GSM_IND to MM
RedirectionInProgress_ReleaseSharedResCnf : Sending Eutra Redirection Info to MM
[rrc_msgRrcCnxRej_getRedirectionTypeToEutraOrGsm] IE not present as the default case
RedirectionInProgress_ReleaseSharedResCnf : Sending NR Redirection to MM
RedirectionInProgress_ReleaseSharedResCnf: CnxMgrState is NOTACTIVE (suspending)
WaitingForRedirectionToGSMResult_MmRatRedirectionToGsmRsp : Received URRC_MM_RAT_REDIRECTION_TO_GSM_RSP from MM
RedirectionInProgress_ReleaseSharedResCnf: CnxMgrState is NOTACTIVE (suspending)
RecdDlMsg is NULL
RecdDlMsg is NULL
RedirectionInProgress_MmRatRedirectionToGsmRsp: RedirectionFailCause is %d
RedirectionInProgress_ReleaseSharedResCnf: CnxMgrState is NOTACTIVE (suspending)
RedirectionInProgress_MmRatRedirectToEutraFailed: RedirectionFailCause is %d
RedirectionInProgress_MmRatRedirectToEutraFailed: RedirectionFailCause is %d
out of service while selecting the cell
Cell-reselection to GSM failed , resume pch configuration
Cell-reselection to GSM failed and reversion to Serving Cell failed
Transition to Eutra , cell-reselection complete
