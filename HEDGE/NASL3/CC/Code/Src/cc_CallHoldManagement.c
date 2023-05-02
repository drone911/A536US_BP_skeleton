Entering cc_DecodeCcHoldReqMsg....
TransactionId -> %d
Call is not active....!!!
CC State Must be CC_ACTIVE in order to Hold the Call. But CC State %s and Ignored in cc_DecodeCcHoldReqMsg
CallSession %d is NOT Active in cc_DecodeCcHoldReqMsg
No Session Found to contain the given TI in cc_DecodeCcHoldReqMsg, Message Ignored.
Rejecting User's Req in cc_DecodeCcHoldReqMsg ! RAT Change in progress !!
Unable to Allocate Memory to Send %s Message in cc_SendHoldReqMsg
Entering cc_DecodeHoldAckIndMsg....Network Accepting to Hold This Call.....[24.083]-2.1.2
TransactionId -> %d
AudioHoldOn()
Aux state mismatch happened for CallSession %d So trigger Status Msg to NW
CallSession %d is NOT Active Send ReleaseComplete in cc_DecodeHoldAckIndMsg
No Session Found to contain the given TI in cc_DecodeHoldAckIndMsg, Message Ignored.
Entering cc_DecodeHoldRejIndMsg....Network Refusing to Hold This Call.....[24.083]-2.1.2
TransactionId = %d in cc_DecodeHoldRejIndMsg
Message received in incorrect %s state in cc_DecodeHoldRejIndMsg
CallSession %d is NOT Active Send ReleaseComplete in cc_DecodeHoldRejIndMsg
No Session Found to contain the given TI in cc_DecodeHoldRejIndMsg, Message Ignored.
Displaying Message Contents: %s
Result -> %d
Cause.DataPresent -> %s
Unable to Allocate Memory to Send %s Message in cc_SendCcHoldRspMsg
Entering cc_DecodeCcRetrieveReqMsg.., User Requesting to Retrieve the Held Call...[24.083]-2.1.3
TransactionId -> %d
cc_CheckPossibleAction...!!!
Message received in incorrect %s state in cc_DecodeCcRetrieveReqMsg
CallSession %d is NOT Active, Send ReleaseComplete in cc_DecodeCcRetrieveReqMsg
No Session Found to contain the given TI in cc_DecodeCcRetrieveReqMsg, Message Ignored.
Rejecting User's Req in cc_DecodeCcRetrieveReqMsg ! RAT Change in progress !!
Displaying Retrieve Req Message Contents: %s
Unable to Allocate Memory to Send %s Message in cc_SendRetrieveReqMsg
Entering cc_DecodeRetrieveAckIndMsg...Network Accepting to Retrieve the User's Held Call....[24.083]-2.1.3
TransactionId -> %d
AudioHoldOn()
Aux state mismatch happened for CallSession %d So trigger Status Msg to NW
CallSession %d is NOT Active, Send ReleaseComplete in cc_DecodeRetrieveAckIndMsg
No Session Found to contain the given TI in cc_DecodeRetrieveAckIndMsg, Message Ignored.
Entering cc_DecodeRetrieveRejIndMsg...Network Refusing to Retrieve the User's Held Call....[24.083]-2.1.3
Received in Invalid State, Releasing the Call Altogether.... in cc_DecodeRetrieveRejIndMsg
CallSession %d is NOT Active, Send ReleaseComplete in cc_DecodeRetrieveRejIndMsg
No Session Found to contain the given TI in cc_DecodeRetrieveRejIndMsg, Message Ignored.
Displaying Retrieve Rsp Message Contents: %s
Result -> %d
Cause.DataPresent -> %s
Unable to Allocate Memory to Send %s Message in cc_SendCcRetrieveRspMsg
NORMAL Initialisation of <Call Hold Management>
GSM to UMTS Initialisation of <Call Hold Management>
UMTS to GSM Initialisation of <Call Hold Management>
Unknown Initialisation Type (%d) in cc_InitialiseCallHoldManagement
