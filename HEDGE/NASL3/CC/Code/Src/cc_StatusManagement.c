Displaying Send Status Req Message Contents: %s
Unable to Allocate Memory to Send %s Message in cc_SendStatusReqMsg
Entering cc_SendStatusEnqReqMsg
Unable to Allocate Memory to Send %s Message in cc_SendStatusEnqReqMsg
Entering cc_DecodeStatusEnqIndMsg
TransactionId -> %d
No Session Found to contain the given TI in cc_DecodeStatusEnqIndMsg, Message Ignored.
NW cc state=%d
For Data Calls, CC does not need to inform VCG or RABM
Start CONNECT_IND_WAIT_TIMER again(%d)
VCG need to activated. Saved MM Sync Ind should be processed
VCG need to activate for Voice call only
No need to send CC_DISCONNECT_IND(Above layers doesn't have MT call ctxt)
Save CallDrop: Type=%d, Cause=%d
UE state already moved to another state!!
Status state or CauseIe not found in cc_DecodeStatusIndMsg
Entering cc_DecodeStatusIndMsg.... Network Detected an Error
TransactionId -> %d
CauseIe Length = %d in cc_DecodeStatusIndMsg
Response to status enquiry. UE cc state=%d
Not a Response to status enquiry
cc_DecodeStatusIndMsg - invaild CcCauseLen = %d received
cc_DecodeStatusIndMsg - msg ignored
No need to send CC_DISCONNECT_IND(Above layers doesn't have MT call ctxt)
Save CallDrop: Type=%d, Cause=%d
No Session Found to contain the given TI in cc_DecodeStatusIndMsg, Message Ignored.
cc_DetermineAction - status : send Release Complete
cc_DetermineAction - status: ignored
cc_DetermineAction - status : incompatible state
cc_DetermineAction - status: compatible state
cc_DetermineAction - status: cause => disconnect
cc_DetermineAction - status: cause OK
Not GSM state in cc_ReadReceivedNetworkState
CallStateIe not found in cc_ReadReceivedNetworkState
Non GSM cause in cc_ReadCause
CauseIe not found in cc_ReadCause
Found Compatible State in cc_CheckEtsiStateCompatibility
Unable to Find NetworkState in cc_EtsiCompatibleStatesList, in cc_CheckEtsiStateCompatibility !!
Current State = %s, Equivalent Etsi State = %s in cc_ConvertToEtsiState
Attempting to Read cc_EtsiStateConversionList Using an Invalid State (0x%x) in cc_ConvertToEtsiState
NORMAL Initialisation of <Status Management>
GSM to UMTS Initialisation of <Status Management>
UMTS to GSM Initialisation of <Status Management>
Unknown Initialisation Type (%x) in cc_InitialiseStatusManagement
