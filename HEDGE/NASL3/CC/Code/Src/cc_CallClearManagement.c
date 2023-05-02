Entering cc_DecodeCcDisconnectReqMsg....[24.008]-5.4.3
TransactionId -> %d
User triggers disconnection. CallDropType should be reset(old value Type=%d, Cause=%d
Disc Req Received in CC_RELEASE_REQUESTED...!!!
Disc Req Received in CC_DISCON_REQUESTED...!!!
Message not expectecd in cc_DecodeCcDisconnectReqMsg. Send Response to upper layers for state Sync
CallSession %d is NOT Active in cc_DecodeCcDisconnectReqMsg. Response to Upper layers for state Sync.
DataPresent (Must be TRUE) -> %s
No Session Found to contain the given TI in cc_DecodeCcDisconnectReqMsg, Response to upper layer for state Sync.
Dummy CallSessionNumber in cc_DecodeCcDisconnectReqMsg -> %d
Message not expectecd in cc_DecodeCcDisconnectReqMsg. Send Response to upper layers for state Sync
Unable to Allocate Memory to Send %s Message in cc_SendDisconnectReqMsg
Unable to Allocate Memory for FacilityForwardCugInfoPtr in cc_SendSetupReqMsg
[OSS]: Oss Encoding Failed
[OSS]: Oss Encoding Failed
Entering cc_DecodeReleaseIndMsg....[24.008]-5.4.3
TransactionId -> %d
ERROR: CauseIePtrLen (%d)is greater than CC_CAUSE_LEN
CauseIe not available in cc_DecodeRelCompleteIndMsg, Fetched from Disconnect_Ind message
ERROR: CauseIePtrLen (%d)is greater than CC_CAUSE_LEN
FacilityIe not available in cc_DecodeReleaseIndMsg
CallSession %d is NOT Active Send ReleaseComplete in cc_DecodeReleaseIndMsg
[OSS]: MPTY active in cc_DecodeReleaseIndMsg
Unable to Allocate Memory to Send %s Message in cc_SendReleaseCompleteReqMsg
Unable to Find CallSession %d in cc_SendCcReleaseIndMsg
2nd release_ind for session %d is discared in cc_SendCcReleaseIndMsg
This call is rejected so stop retry timer if it is running.
Unexpected SS code -> 0x%x
Displaying Message Contents: %s
Cause.DataPresent -> %s
CcbsRsp.DataPresent -> %s
CcbsRsp.CcbsIndex -> %d
CcbsRsp.Result -> %d
CcbsRsp.ErrorCode -> %d
CcbsRsp.BasicServiceCode -> %d
CcbsRsp.CalledPartyNumberLength -> %d
CcbsRsp.CalledPartyNumberPtr ->
CcbsRsp.CalledPartyNumberLength -> %d
CcbsRsp.DataPresent -> %s
CallBarringInd.DataPresent -> %s
Unable to Allocate Memory to Send %s Message in cc_SendCcReleaseIndMsg
Entering cc_DecodeDisconnectIndMsg....[24.008]-5.4.3
TransactionId -> %d
CauseIe not available in cc_DecodeDisconnectIndMsg
ERROR: CauseIePtrLen (%d)is greater than CC_CAUSE_LEN
CcbsActionsIe = %d
CC_CCBS_ACTION_POSSIBLE
CcbsActionsIe not available in cc_DecodeDisconnectIndMsg
CallSession %d is NOT Active Send ReleaseComplete in cc_DecodeDisconnectIndMsg
[OSS]: MPTY active in cc_DecodeDisconnectIndMsg
Unable to Allocate Memory for FacilityForwardCugInfoPtr in cc_SendSetupReqMsg
[OSS]: Failed to encode Facility IE message
[OSS]: Failed to encode Facility IE message
Unable to Allocate Memory to Send %s Message in cc_SendReleaseReqMsg
Entering cc_DecodeCcRelReqMsg [24.008]-5.4.4.2.2.1
TransactionId -> %d
CC_RELEASE_REQUESTED: Message ignored in cc_DecodeCcRelReqMsg
Message ignored in cc_DecodeCcRelReqMsg
CallSession %d is NOT Active in cc_DecodeCcRelReqMsg
No Session Found to contain the given TI in cc_DecodeCcRelReqMsg, Message Ignored.
Entering cc_DecodeRelCompleteIndMsg
TransactionId -> %d
No Session Found to contain the given TI in cc_DecodeRelCompleteIndMsg, Message Ignored.
Memory Allocation Failed
CauseIe not available in cc_DecodeRelCompleteIndMsg, Fetched from Disconnect_Ind message
[OSS]: Oss Decoding got Failed
FacilityIe not available in cc_DecodeRelCompleteIndMsg
CallSession %d is NOT Active, in cc_DecodeRelCompleteIndMsg
[OSS]: MPTY active in cc_DecodeRelCompleteIndMsg
Ignoring cc_DecodeRelCompleteIndMsg received in CC_MM_CON_PEND_WAIT_MM_CMRQ or CC_MM_CONNECTION_PENDING state
DecodeRelCompleteIndMsg in CallState : %s
Unable to Allocate Memory for ProgressIndicator in %s Message in cc_SendCcDisconnectIndMsg
Displaying Message Contents: %s
Cause.DataPresent -> %s
Cause.CallDropCause -> %d
Cause.CallDropType -> %d
CallBarringInd.DataPresent -> %s
CcbsPossibleInd.DataPresent -> %s
Unable to Allocate Memory to Send %s Message in cc_SendCcDisconnectIndMsg
This call is rejected so stop retry timer if it is running.
Displaying Message Contents: %s
Cause.DataPresent -> %s
Unable to Allocate Memory to Send %s Message in cc_SendCcRejectIndMsg
CC Cause Location -> %s
CC Cause -> %s 0x%x
CC Cause Diagnostics -> %s
NORMAL Initialisation of <Call Clear Management>
GSM to UMTS Initialisation of <Call Clear Management>
UMTS to GSM Initialisation of <Call Clear Management>
Unknown Initialisation Type (%d) in cc_InitialiseCallClear
Unable to Allocate Memory to Send %s Message in cc_SendCcReleaseIndMsg
Function - cc_DecodeCcStopNetworkReq Active call clearing as a result of Flight mode ON
New CallSessionNumber %d
[OSS]: MPTY active in cc_DecodeCcStopNetworkReq
StopNetworkReq received in CC_NULL state after SETUP REQ is received, sending REL_IND to upper layers
StopNetworkReq received in CC_NULL state
STOP Network due to SIM error or Power down
STOP Network due to SIM error or Power down
No need to send CC_RELEASE_IND(Above layers doesn't have MT call ctxt)
Message not expectecd or ignored in cc_DecodeCcStopNetworkReq
CallSession %d is NOT Active, in cc_DecodeCcStopNetworkReq
Rejecting User's Call Clear Req in cc_DecodeCcStopNetworkReq ! RAT Change in progress !!
RegVal l=%d, cc_CallDiscInMoCallProcState = %d
No Session Found to contain the given TI, send RELEASE COMPLETE to network
Dummy CallSessionNumber -> %d
No Unassigned Session Found
Don't Release VCG: Number of call sessions = %d
Retrying call establishment
Performing normal call clearing, and Auto Re-Dial may be aborted
due to either AP triggered Call clearing or NW cause may not be matched to Auto redial cause list or Num of auto-redial attempts >1
Ect not Active in cc_DecodeReleaseIndMsg
Releasing Data Call Type in cc_DecodeReleaseIndMsg
No need to send CC_RELEASE_IND(Above layers doesn't have MT call ctxt)
Detected a Collision. Network releasing a Call at the same time as User in cc_DecodeReleaseIndMsg
No need to send CC_RELEASE_IND(Above layers doesn't have MT call ctxt)
Reset MPTY state session No.%d State %d
ProgressIndicatorIe not available in cc_DecodeDisconnectIndMsg
[OSS]: OSS Decodign Failed
FacilityIe not available in cc_DecodeDisconnectIndMsg
MO call establishment fail because of Network Issue: UE will try Redial without notifying to User
No need to send CC_DISCONNECT_IND(Above layers doesn't have MT call ctxt)
Preparing for Redialing
Ect not Active in cc_DecodeRelCompleteIndMsg
Releasing Data Call Type in cc_DecodeRelCompleteIndMsg
Retrying call establishment
Performing normal call clearing, and Auto Re-Dial may be aborted
due to either AP triggered Call clearing or NW cause may not be matched to Auto redial cause list or Num of auto-redial attempts >1
No need to send CC_RELEASE_IND(Above layers doesn't have MT call ctxt)
No need to send CC_RELEASE_IND(Above layers doesn't have MT call ctxt)
Configure CallDrop. Saved: Type=%d, Cause=%d, Recv: Type=%d, Cause=%d
REESTABLISHMENT fail=%d
Unable to Allocate Memory for CalledPartyNumberPtr in %s Message in cc_SendCcReleaseIndMsg
Unable to Allocate Memory for CalledPartySubAddPtr in %s Message in cc_SendCcReleaseIndMsg
