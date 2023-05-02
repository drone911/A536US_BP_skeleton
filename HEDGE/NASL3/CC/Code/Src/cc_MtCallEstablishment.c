No Bearer 2 Capabilities in cc_DecodeSetupIndMsg
Network Supports Multi Calll -> %s
Cause of No CLI -> %d
No Valid Facility Message sent in cc_DecodeSetupIndMsg
cc_ProcessSetupIndMsg.: Error. Gapi Data is NULL
Entering cc_DecodeSetupIndMsg....[24.008] - 5.2.2...
TransactionId -> %d
Ti -> %d
Insufficient resource , Aborting Operations in cc_DecodeSetupIndMsg !
TransactionId already in use !
Invalid TransactionId Flag received from Network !
Unable to Allocate Memory to Send %s Message in cc_SendCcCallConfirmRspMsg
Entering cc_DecodeCallConfirmReqMsg....
Wrong State in cc_DecodeCallConfirmReqMsg !!!.
No Session is Assigned in cc_DecodeCallConfirmReqMsg, Message Ignored.
No Session Found to contain the given TI in cc_DecodeCallConfirmReqMsg, Message Ignored.
Unable to Allocate Memory to Send %s Message in cc_SendCallListUpdateMsg
Facility : TotalLen %d
CompoCnt is larger than max
CompoCnt(%d) : FacilityPtr[%d] 0x%x is not expected value
LoopCount(%d) : Length Sum %d, CurrentLen[%d] %d
The sum of length (%d) is larger than total length (%d)
Memory Allocation Failed
Facility : LoopCount %d CurrentStartPos %d CurrLen %d
Facility : SS Code = %d, SS Notification = %d, CUG ind = %d, CNAP = %d
[OSS]: Invalid SscodeIE received
SS notification (0x%02X) and CallForwardingIndication (0x%02X) in cc_HandleFacilityIEInSetupInd
[CNAP]%d
Memory Free : LoopCount %d
Entering cc_CheckBearerCompatibility function
pal_MemAllocWithCaller() failure
Invalid RAT Mode
CcRatMode = %d
Received InfoTransferCapabilty = %d
Updated InfoTransferCapabilty = %d
cc_CheckBearerCompatibility: Bearer capability 1 is not filled
CUG Data Not Available in cc_SendCcSetupIndMsg
WbAmrEnabled = %d
Unable to Allocate Memory to Send %s Message in cc_SendCcSetupIndMsg
cc_PerformBearerNegotiation
Unable to Allocate Memory
RetValue = %d
Received Null Bearer cap1 params
BC Reading Failed
BC1 Length -> %d
Session Not assigned
Bearer Capability 1 -->
Bearer Capability 2 -->
Invalid Rat Mode selcted to extract Sup Codec List from Regis: %d
Suported Codec List Not Available
Network Does Not Support Multi Call
Voice Call Already Present
Displaying Message Contents: %s
Unable to Allocate Memory to Send %s Message in cc_SendCallConfReqMsg
Session not assigned
Entering cc_DecodeCcRejReqMsg, GAPI Rejecting the MT Call......
TransactionId -> %d
No need to send CC_REJECT_IND(Above layers doesn't have MT call ctxt)
No need to send CC_REJECT_IND(Above layers doesn't have MT call ctxt)
Message not expected OR Ignored in cc_DecodeCcRejReqMsg
CallSession %d is NOT Active in cc_DecodeCcRejReqMsg
No Session Found to contain the given TI in cc_DecodeCcRejReqMsg, Message Ignored.
Entering cc_SendAlertReqMsg
TransactionId -> %d
Unable to Allocate Memory to Send %s Message in cc_SendAlertReqMsg
Message not expected OR Ignored in cc_SendAlertReqMsg
Session Not Assigned in cc_SendAlertReqMsg, Message Ignored
Entering cc_DecodeCcConnectReqMsg....
TransactionId -> %d
RatMode: %d, callType1: %d
Determining VCG action for Early User Connection
CONN_CNF for CSVT
Early User Connection invalid for non voice calls
Message not expected OR Ignored in cc_DecodeCcConnectReqMsg
CallSession %d is NOT Active in cc_DecodeCcConnectReqMsg
No Session Found to contain the given TI in cc_DecodeCcConnectReqMsg, Message Ignored.
CugReqDataPresent = %d in cc_SendConnectReqMsg
Displaying Message Contents: %s
Unable to Allocate Memory to Send %s Message in cc_SendConnectReqMsg
Entering cc_DecodeConnAckIndMsg....
TransactionId -> %d
VCG need to activated. Saved MM Sync Ind should be processed
VCG need to activate for Voice call only
Connect_Ack_Ind received in unexpected State %d
CallSession %d is NOT Active in cc_DecodeConnAckIndMsg
No Session Found to contain the given TI in cc_DecodeConnAckIndMsg, Message Ignored.
Displaying Message Contents: %s
Ti -> %d
RabId -> 0x%02X
Unable to Allocate Memory to Send %s Message in cc_SendCcConnectCnfMsg
Network Transfer Capability Before -> %d
Updated Network Transfer Capability to -> %d
Network Transfer Capability After -> %d
cc_GetNsCallTypefromNtwkCallType(): Cannot bc_create_bearer
cc_GetNsCallTypefromNtwkCallType(): bc_put_bearer, BcStatus -> %d
cc_GetNsCallTypefromNtwkCallType(): Cannot bc_get_bearer_element
cc_GetNsCallTypefromNtwkCallType(): Cannot bc_get_bearer_element
NORMAL Initialisation of <MT Call Establishment>
GSM to UMTS Initialisation of <MT Call Establishment>
UMTS to GSM Initialisation of <MT Call Establishment>
Unknown Initialisation Type (%d) in cc_InitialiseMtCallEstablishment
MT call released because CS call is blocked
MT call released with cause User busy. Reason: CSVT call is in progress
MT call released with cause User busy. Reason: cc_MtCallBlockStatus(%d)
cc_CsvtCallSupport = %d, GapiData.CallType1 = %d
MT VT call released with cause User busy. Reason: CS call is in progress
MT call released with cause User busy. Reason: CS call is in progress
2nd MT call is disconnected with cause User busy. Reason: Call waiting is disabled in AP IMS
Terminal Based Call Waiting Enabled is %d
MT call released with cause User busy. Reason: MO call establishment is in progress
Release previous MO call with cause Normal Clearing. Reason: MT call establishment is in progress and still MM connection is not established for MO call
Accept MT call, Call Session Number -> %d
Video Call is Allowed
Low Layer Compatibility 1->
No Low Layer Compatibility 1 in cc_DecodeSetupIndMsg
Low Layer Compatibility 2->
No Low Layer Compatibility 2 in cc_DecodeSetupIndMsg
High Layer Compatibility 1->
No High Layer Compatibility 1 in cc_DecodeSetupIndMsg
High Layer Compatibility 2->
No High Layer Compatibility 2 in cc_DecodeSetupIndMsg
Signal Ind Present -> %s
Calling Party Number ....->
Calling Party Sub Address ....->
No Valid Calling Party Sub address Given in cc_DecodeSetupIndMsg
No Valid Calling Party Number in cc_DecodeSetupIndMsg
Called Party Number ....->
No Valid Called Party Number in cc_DecodeSetupIndMsg
Called Party Sub Address ....->
No Valid Called Party Sub address Given in cc_DecodeSetupIndMsg
Number PLUS recieved from NW
Redirecting Party Number ....->
Redirecting Party Sub Address ....->
No Valid Redirecting Party Sub Address Given in cc_SendCcSetupIndMsg
No Valid Redirecting Party Number In cc_DecodeSetupIndMsg
No Priority Given in cc_DecodeSetupIndMsg
Progress Indicator ....->
No Progress Indicator Given in cc_DecodeSetupIndMsg
Alerting Pattern -> %d
Unable to Allocate Memory to Send %s Message in cc_SendCcSetupIndMsg
Unable to Allocate Memory to Send %s Message in cc_SendCcSetupIndMsg
No Valid Calling Party Number in cc_SendCcSetupIndMsg
Unable to Allocate Memory to Send %s Message in cc_SendCcSetupIndMsg
CalledPartyNumber is absent!!
Unable to Allocate Memory to Send %s Message in cc_SendCcSetupIndMsg
Unable to Allocate Memory to Send %s Message in cc_SendCcSetupIndMsg
Unable to Allocate Memory to Send %s Message in cc_SendCcSetupIndMsg
Unable to Allocate Memory to Send %s Message in cc_SendCcSetupIndMsg
Unable to Allocate Memory for ProgressIndicator in %s Message in cc_SendCcSetupIndMsg
Bearer ID is negative
pal_MemAllocWithCaller() failure
Bearer Capability Error
Bearer ID is negative
