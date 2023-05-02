Serious Problem , could not do state initialisation
rrc_CnxMgrMobility_TransitToIdleForExceptionalHandling
UpdateCause: %d -> %d; Est Cause: %d -> %d
SecurityMgr is NULL
Establishment Cause = %d
rrc_CnxMgrMobility: Update process initiated
Establishment Cause = %d
Cell Update: TVI set
Cell Update: TVI Not set
Cell Update Cause != UL data Tx
Create and Send CellUpdate, wait for CompleteToBuildMsg
rrc_CnxMgrMobility_CreateAndSendUraUpdate
Fatal Error: Messsage Freed abnormally @ [State : %d] [Event : %d]
RecvMsgCellUpdateCnf in unexpected state !!!
RecvMsgCellUpdateCnf in unexpected state !!!
RecvMsgUraUpdateCnf in unexpected state !!!
RecvMsgUraUpdateCnf in unexpected state !!!
Default_T307Expiry in %d state
[Mobility >> waitForSib7] In Progress => wait for ReadSib7AbortedDone
[Mobility >> Reselection] In Progress => wait for ReselectionAbortedDone
EvaluatingInterFreqCell received while In Not Active State
Cell-selection occurred while waiting for the Confirm message
RadioLinkFailure Scenario , Both T314&315 have expired, Wait for ResMgr event AllRabsReleased
V302check failed , preparing to Enter Idle
V302 check passed , Another Update Possible
V302 check failed , no-more update possible
T302ExpiryOrCellReselection Occurred
RadioLinkFailure Scenario, Both T314&315 have expired, Wait for ResMgr event AllRabsReleased
V302check failed, preparing to Enter Idle
Remove ServingCellCacheInfo for this cell(UARFCN%d,PSC%d) because N300 exceed and SIB5 need to be read again
[Mobility >> waitForSib7] In Progress => wait for ReadSib7AbortedDone
[Mobility >> Reselection] In Progress => wait for ReselectionAbortedDone
[WaitingForUpdateConfirm] ASN.1 Encode Fail => T302 restarted. waiting for a next trial
Connection release received on DCCH , send Release Complete
Connection release on CCCH , no response needed
[Mobility >> waitForSib7] In Progress => wait for ReadSib7AbortedDone
[Mobility >> Reselection] In Progress => wait for ReselectionAbortedDone
Tx-CURLC_REDIRECTION_STATUS_IND
FatalError : RedirectionType is unknown(%d)
ConnectionRelease Process failure
Protocol Error %d detected in connectionrelease
Hit a Default case which is not currently handled
Serious Problem, Error Occurance, Error Resolution Failure
RRC ConnectionReleasecomplete sent in the uplink , waiting for L2-ACK
RrcConnectionEstablishment Succeed on Uarfcn(%d) Cpich(%d) which TxFailParam Validity Timer is running!
[TxFailParam]rrc_Features.SuppTxFailParam(%d) is disabled
CellUpdateConfirm, Transition to CELL_DCH
CellUpdateConfirm, HHO, Transition to CELL_FACH
Due to second cellupdate ,only configure RBs
Happy-CellUpdateConfirm.
[Mobility >> waitForSib7] In Progress => wait for ReadSib7AbortedDone
[Mobility >> Reselection] In Progress => wait for ReselectionAbortedDone
CellUpdateConfirm to CellPch
CellUpdateConfirm to UraPch
T302ExpiryOrCellReselection
Happy CellUpdateConfirm
unsupported RrcState Enum
vp_state returned from rrc_DlMsgInitialProcess_getRrcState is NULL
Errorneous CellUpdateConfirm Recived with %d Prot-Error
[Mobility >> waitForSib7] In Progress => wait for ReadSib7AbortedDone
[Mobility >> Reselection] In Progress => wait for ReselectionAbortedDone
Erroneous CellUpdateConfirm, with FailureCause %d
[Mobility >> waitForSib7] In Progress => wait for ReadSib7AbortedDone
[Mobility >> Reselection] In Progress => wait for ReselectionAbortedDone
Failuer due to Physical Channel information missing
[Mobility >> waitForSib7] In Progress => wait for ReadSib7AbortedDone
[Mobility >> Reselection] In Progress => wait for ReselectionAbortedDone
Serious Problem CnxMgrMobility_p error %i is not handled
CellUpdateConfirm needs a response in the uplink
[Mobility >> waitForSib7] In Progress => wait for ReadSib7AbortedDone
[Mobility >> Reselection] In Progress => wait for ReselectionAbortedDone
[Mobility >> Reselection] No Progress => start to configure DCH from FACH
Failure sending msg to CnxMgr
C-rnti check failed , there can be another update
vl_rrcState returned from rrc_DlMsgInitialProcess_getRrcState is NULL
NextUpdate Message sent, wait for CompleteToBuildMsg
UraUpdateCofirm Received , Trasnsition to CellPch
UraUpdateCofirm Received , Trasnsition to UraPch
Another UraUpdate Needed, may be due to Confirmation Error
Another UraUpdate due to Confirmation Error
[Mobility >> waitForSib7] In Progress => wait for ReadSib7AbortedDone
[Mobility >> Reselection] In Progress => wait for ReselectionAbortedDone
CellDch Transition specified in UraUpdateConfirm
[Mobility >> waitForSib7] In Progress => wait for ReadSib7AbortedDone
[Mobility >> Reselection] In Progress => wait for ReselectionAbortedDone
UraUpdateCofirm Received, Trasnsition to Cell FACH
UraUpdateCofirm Received , Sending Response Message
UraUpdateCofirm Received , No Response Needed
Not able to resolve the RRC state Specified
vp_state returned from rrc_DlMsgInitialProcess_getRrcState is NULL
Protocol Errror %d in UraUpdateConfirm
[Mobility >> waitForSib7] In Progress => wait for ReadSib7AbortedDone
[Mobility >> Reselection] In Progress => wait for ReselectionAbortedDone
InvalidConfiguration in UraUpdateConfirm Received
[Mobility >> waitForSib7] In Progress => wait for ReadSib7AbortedDone
[Mobility >> Reselection] In Progress => wait for ReselectionAbortedDone
Should not end up here because Just specifying transition to Cell-DCH in a Ura Update cnf message leads to CnxMgrMobility_p error, discuss with dl-msg
This Error cannot happen in UraUpdateCnf message refer 8.3.1.9a of 25.331 , but occurs
Configuration Unsupported cannot happen in UraUpdateCnf message , Read the comment in the code for more info
Serious Problem CnxMgrMobility_p error %i is not handled
Received UraUpdateconfirm needs a response in uplink
Response Message sent in the Uplink.
Serious Problem, Couldnt create resonse message
isSrns=%d
isPdcpEmpty=%d
isCipherMode=%d
Need to wait for L2-ack for the uplink message
No Need to wait for the L2-ack for the uplink message
Terminate RRC Connection from NAS received while waiting for CUConfirm
ALL RABS Released
[Mobility >> waitForSib7] In Progress => wait for ReadSib7AbortedDone
[Mobility >> Reselection] In Progress => wait for ReselectionAbortedDone
Default_Sib7Expiry in %d state
Default_OutOfService in %d state
WaitingForUpdateConfirm_PreSuspendReq
WaitingForUpdateConfirm_SuspendReqOnGsmDoneInd
WaitingForUpdateConfirm_NonUmtsRatCnf
GenMsg is NULL
GenMsg is NULL in WaitingForUpdateConfirm_NonUmtsRatCnf
UnrecoverableReset Scenario, Transition to Idle
[Mobility >> waitForSib7] In Progress => wait for ReadSib7AbortedDone
[Mobility >> Reselection] In Progress => wait for ReselectionAbortedDone
EvaluatingInterFreqCell received while waiting for CUConfirm
CellReselectionToGsmInProgress received while waiting for CUConfirm
CellReselectionToEutraInProgress received while waiting for CUConfirm
TerminateRRCCnx Received
OutOfService when Selecting a Cell in CnxMgrMobility
SelectingCell_PreSuspendReq
SelectingCell_SuspendReqOnGsmDoneInd
SelectingCell_NonUmtsRatCnf
GenMsg is NULL
GenMsg returned from rrc_Class_CnxMgr_GenerateSuspendFromPreSuspend is NULL
This stack is made to work even if it could not configure common resources
Default_TerminateRrcCnx in %d state
Default_OutOfService in %d state
Default_RrcCnxRelease msg in %d state
Could not roll back to the original status Cell-fach
Failure in configuration of RBs
Serious Problem, ResMgr will not send any security related IEs to Security Manager in CnxMgrMobility_p scenario, but still the security reconfiguration occurs ?
Default case ,not handled
CellReselectionToGsmInProgressreceived while waiting for SendingRelCompleteAmMode
CellReselectionToEutraInProgressreceived while waiting for SendingRelCompleteAmMode
Could not configure common resources
Cellupdate/UraUpdate confirm message is NULL
Default_Sib7Expiry in %d state
SIB7 Timer Restarted
Failure to get SIB7Timer value Freq
Re-starting sib7 timer
msg = NULL
ConfiguringDchLayers_ConfigDchLayersCnf[NON FATAL ERROR] CnxMgrMobility_p->CellUpdateCnfMsg = NULL
Cellupdate confirm message is NULL
msg = NULL
%d Failure while Configuring DchLayers due to CellUpdateConfirm
Serious disorder in the stack , assuming dch-connected instead of fach
Wrong return value ,not handled
Default_OutOfService in %d state
ignore ReselectionAbortedDone
[ReselectionAbortedDone] wait for ReadSib7CancelledDone
Failure sending msg to CnxMgr
ignore ReselectionAbortedDone
ignore ReadSib7AbortedDone
[ReadSib7AbortedDone] wait for reselectionAbortedDone
Failure sending msg to CnxMgr
ignore ReadSib7AbortedDone
RLC UnrecoverableReset while Configuring DchLayers due to CellUpdateConfirm
Could not roll back to the original status Cell-fach
New Cfg Layer Fail when configuring Pch Layers
Serious Problem, ResMgr will not send any security related IEs to Security Manager in CnxMgrMobility_p scenario, but still the security reconfiguration occurs ?
Default case ,not handled
Common configuration in Ura Pch failed, Nothing implemented for CnxMgrMobility_p case as of now
vl_asnstate returned from rrc_DlMsgInitialProcess_getRrcState is NULL
Could not roll back to the original status Cell-fach
CNX_NEW_CFG_LAYER_FAIL returned .
Security Reconfiguration in Process
Default case ,not handled
HHO Cell-selected
TerminateRrcCnx received
T307 which is MD, value is NULL
HHO CellSelectionOn Specified freq failed , wait for any cell to be selected
SelectingHHOCell_PreSuspendReq
SelectingHHOCell_SuspendReqOnGsmDoneInd
SelectingHHOCell_NonUmtsRatCnf
GenMsg is NULL
GenMsg returned from rrc_Class_CnxMgr_GenerateSuspendFromPreSuspend is NULL
Negative-Acknowledgement for the Uplink-ResponseMessage in Cell-Dch
Serious Error, Inconsistency , ResMgr doesnt send ilms to Security until complete config confirm message is sent by cnxmgr , transit to idle mode
Cellupdate confirm message is NULL
Cellupdate confirm message is NULL
RadioLinkFailure Occurred while waiting for the L2-ack
RLC Unrecoverable Error: Update-response in CellDch state
Serious Error, Inconsistency , ResMgr doesnt send ilms to Security until complete config confirm message is sent by cnxmgr , transit to idle mode
Negative acknowledgement for Update-response in CellFach state
Security Reconfiguration in Process
[Mobility >> waitForSib7] In Progress => wait for ReadSib7AbortedDone
[Mobility >> Reselection] In Progress => wait for ReselectionAbortedDone
[Mobility >> waitForSib7] In Progress => wait for ReadSib7AbortedDone
[Mobility >> Reselection] In Progress => wait for ReselectionAbortedDone
TerminateRRCCnx Received
RLC Unrecoverable Error: Update-response in CellFach state
vl_activeInstance is null
EvaluatingInterFreqCell received while waiting for CUConfirm
Negative Acknowledgement for Update-response before transitioning to cellPch
Security Reconfiguration in Process
[Mobility >> waitForSib7] In Progress => wait for ReadSib7AbortedDone
[Mobility >> Reselection] In Progress => wait for ReselectionAbortedDone
[Mobility >> waitForSib7] In Progress => wait for ReadSib7AbortedDone
[Mobility >> Reselection] In Progress => wait for ReselectionAbortedDone
vl_asnstate returned from rrc_DlMsgInitialProcess_getRrcState is NULL
SendingCellUpdateResponsePch_CompleteConfigCnf[NON FATAL ERROR] vl_state = NULL
RLC Unrecoverable Error: Update-response in CellPch state
Negative acknowledgement received for ura-update response
Security Reconfiguration in Process
[Mobility >> waitForSib7] In Progress => wait for ReadSib7AbortedDone
[Mobility >> Reselection] In Progress => wait for ReselectionAbortedDone
[Mobility >> waitForSib7] In Progress => wait for ReadSib7AbortedDone
[Mobility >> Reselection] In Progress => wait for ReselectionAbortedDone
[Mobility >> waitForSib7] In Progress => wait for ReadSib7AbortedDone
[Mobility >> Reselection] In Progress => wait for ReselectionAbortedDone
RLC Unrecoverable Error: URA pdate-response state
Assumption is Ura-update doesnt put UE in CellFach state, CnxMgrMobility_p might change in Future.
Re-entering service area from FachOutOfService state
use the previous cell update cause(%d) instead of Asn_re_enteredServiceArea
FachOutOfService_TerminateRrcCnx in %d state
T307 has expired in Fachoutofservice, will enter idle mode henceforth
FachOutOfService_PreSuspendReq
FachOutOfService_SuspendReqOnGsmDoneInd
FachOutOfService_NonUmtsRatCnf
GenMsg is NULL
GenMsg returned from rrc_Class_CnxMgr_GenerateSuspendFromPreSuspend is NULL
Transition To Idle From Connected-Mobility-State Initiated
[ReselectionAbortedDone] wait for ReadSib7AbortedDone
[ReselectionAbortedDone] Release ConnectedModeResourcesFromFach
ignore ReselectionAbortedDone
[ReadSib7AbortedDone] wait for reselectionAbortedDone
[ReadSib7AbortedDone] Release ConnectedModeResourcesFromFach
ignore ReadSib7AbortedDone
Err: No Saved suspend request
[Mobility >> waitForSib7] In Progress => wait for ReadSib7AbortedDone
[Mobility >> Reselection] In Progress => wait for ReselectionAbortedDone
SendingRrcCnxRelCompleteUMMode_RecvRrcCnxRelMsg Handling CnxMgrMobility_p message and Freed Dl Msg and Ignored
[Mobility >> waitForSib7] In Progress => wait for ReadSib7AbortedDone
[Mobility >> Reselection] In Progress => wait for ReselectionAbortedDone
[Mobility >> waitForSib7] In Progress => wait for ReadSib7AbortedDone
[Mobility >> Reselection] In Progress => wait for ReselectionAbortedDone
[Mobility >> waitForSib7] In Progress => wait for ReadSib7AbortedDone
[Mobility >> Reselection] In Progress => wait for ReselectionAbortedDone
T307 value is NULL
Err: No Saved suspend request
[ReselectionAbortedDone] wait for ReadSib7AbortedDone
[ReselectionAbortedDone] start to Release SharedResources
ignore ReselectionAbortedDone
[ReadSib7AbortedDone] wait for reselectionAbortedDone
[ReadSib7AbortedDone] start to Release SharedResources
ignore ReadSib7AbortedDone
CompleteToBuildMsg : Transit to the saved state (%d)
[ReselectionAbortedDone] wait for ReadSib7CancelledDone
[ReselectionAbortedDone] start to Release ConnectedModeResFromFACH
ignore ReselectionAbortedDone
[ReadSib7AbortedDone] wait for reselectionAbortedDone
[ReadSib7AbortedDone] start to Release ConnectedModeResFromFACH
ignore ReadSib7AbortedDone
RadioLinkFailure Scenario , Both T314&315 have expired, Wait for ResMgr event AllRabsReleased
V302check failed , preparing to Enter Idle
Terminate RRC Connection from NAS received while waiting for SIB7
[Mobility >> waitForSib7] In Progress => wait for ReadSib7AbortedDone
[Mobility >> Reselection] In Progress => wait for ReselectionAbortedDone
[Mobility >> waitForSib7] In Progress => wait for ReadSib7AbortedDone
[Mobility >> Reselection] In Progress => wait for ReselectionAbortedDone
Default_OutOfService in %d state
WaitingForUpdateConfirm_PreSuspendReq
Msg creation error
SIB7 read error - Null SIB7
[Mobility >> waitForSib7] In Progress => wait for ReadSib7AbortedDone
[Mobility >> Reselection] In Progress => wait for ReselectionAbortedDone
SIB7 read error
[Mobility >> waitForSib7] In Progress => wait for ReadSib7AbortedDone
[Mobility >> Reselection] In Progress => wait for ReselectionAbortedDone
SIB7-ReadError %d: ignored
AwaitingSib7_NonUmtsRatCnf
AwaitingDeactivateServingCell_Deactivated
