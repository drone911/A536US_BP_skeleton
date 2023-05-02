cc_CheckEmergenyNum
Emergency Number!!! -> %x%x
cc_ProcessUsatUsatCcCallCtrlCfmMsg
USAT (Call Control) - Rejected the call
USAT Call Control request is success- No change in params
Rejecting User's Req in cc_CheckSetUpReqCanBeProcessed ! cc_FlightMode is On!!
Rejecting User's Req in cc_CheckSetUpReqCanBeProcessed ! RAT Change in progress !!
Invalid CallType
CalledPartyNumberLength -> %d
Called Party Number Ptr is NULL or Length is Invalid!!, Call Rejected in cc_CheckSetUpReqCanBeProcessed !
Already call is in progess with this TID, Call Rejected in cc_CheckSetUpReqCanBeProcessed !
AudioHoldOff()
All Voice Calls are Held .....
This is NOT a Multi Media Call .....
This is a Multi Media Call .....
Voice Calls are NOT Held...
Entering cc_DecodeCcSetupReqMsg....[24.008] - 5.2.1...
Setup Req is saved ,Shall be retrieved after Redial timer expiry!
This is the First Call ....
Discarding Saved MmSyncIndMsg
Call Accepted....
New Allocated CallSessionNumber in cc_DecodeCcSetupReqMsg -> %d
USAT Call control not enabled
Insufficient resource , Call Rejected in cc_DecodeCcSetupReqMsg !
Entering cc_DecodeCcBearerCapSetReqMsg function
Handle CBST command
Encode CBST success
Encode CBST command fail
Handle CTM command
Invalid command received
CBST Bearer Cap DataPresent -> %s
CBST Bearer Cap Length -> %d
CBST Bearer Cap Ptr ->
CBST Bearer Cap param are not set
cc_PerformBearerService:CcCallType = %d
CC RAT = %d
pal_MemAllocWithCaller() failure
CC Call type = CC_VOICE_CALL_TYPE or CC_EMERG_CALL_TYPE
CC Call type = CC_VIDEO_CALL_TYPE
CC Call type = CC_DATA_CALL_TYPE
MO Call: Set Bearer Capabilities recieved through AT+CBST cmd
MO Call: Set Default Bearer Capabilities
Invalid call type received. So bearer capabilities IE is not filled
Not able to retrieve Bearer Capability params
Invalid Session
CallType1 -> %s
CallType2 -> %s
Restriction Indicator -> %s
Calling Party Sub Address ....->
No Calling Party Sub Address Sent
User To User Data ....->
No User To User Data Sent
Priority -> %d
Entering cc_DecodeMmCmrqIndMsg Indicating that RR Connection is Established....
TransactionId -> %d
Message not expected in cc_DecodeMmCmrqIndMsg
CallSession %d is NOT Active, in cc_DecodeMmCmrqIndMsg
No Session Found to contain the given TI in cc_DecodeMmCmrqIndMsg, Message Ignored.
Entering cc_DecodeMmEstCnfMsg Indicating that MM Connection is Established....
TransactionId -> %d
CC_RETRY_DELAY_TIMER stop timer
Message not expected in cc_DecodeMmEstCnfMsg
CallSession %d is NOT Active, in cc_DecodeMmEstCnfMsg
No Session Found to contain the given TI in cc_DecodeMmEstCnfMsg, Message Ignored.
Invalid Rat Mode selcted to extract Sup Codec List from Regis: %d

Fail to Encode the message and Call Rejected....
Invalid Rat Mode selcted to extract Sup Codec List from Regis: %d
CugReqDataPresent = %d in cc_SendSetupReqMsg
Entering cc_SendSetupReqMsg....
Unable to Allocate Memory to Send %s Message in cc_SendSetupReqMsg
Unable to Allocate Memory for FacilityForwardCugInfoPtr in cc_HandleCugData
[OSS]: Oss Encoding Failed
[OSS]: Oss Encoding Failed
Bearer1CapabilitiesLength -> %d
Bearer1CapabilitiesPtr ->
Bearer1CapabilitiesLength -> %d
SupportedCodecListLength -> %d
SupportedCodecListPtr ->
SupportedCodecListLength -> %d
CLIdPresentationDataPresent -> %s
CallingPartySubAddressLength -> %d
CallingPartySubAddressPtr ->
CLIdPresentationDataPresent -> %s
CalledPartyNumberDataPresent -> %s
CalledPartyNumberLength -> %d
CalledPartyNumberPtr ->
CalledPartySubAddressLength -> %d
CalledPartySubAddressPtr ->
CalledPartyNumberDataPresent -> %s
EmlppReqDataPresent -> %s
EmlppPriorityLevel -> %d
EmlppReqDataPresent -> %s
CugReqDataPresent -> %s
SuppressPreferentialIndicator -> %d
CugIndex1 -> %d
CugIndex2 -> %d
SuppressOaIndicator -> %d
CugReqDataPresent -> %s
RestrictionIndicator -> %d
Entering cc_DecodeProgressIndMsg [24.008] - 5.2.1.4.2....
TransactionId -> %d
Message not expected in cc_DecodeProgressIndMsg
CallSession %d is NOT Active, in cc_DecodeProgressIndMsg
No Session Found to contain the given TI in cc_DecodeProgressIndMsg, Message Ignored.
Unable to Allocate Memory for ProgressIndicator in %s Message in cc_SendCcProgressIndMsg
Displaying Message Contents: %s
Progress Indicator Byte 0 -> 0x%02X
No Progress Indicator Sent
Unable to Allocate Memory to Send %s Message in cc_SendCcProgressIndMsg
Entering cc_DecodeCallProceedingIndMsg....[24.008]-5.2.1.3
TransactionId -> %d
Network Supports Multi Call -> %s
No Bearer 1 Capabilities in cc_DecodeCallProceedingIndMsg
No Bearer 2 Capabilities in cc_DecodeCallProceedingIndMsg
No Repeat Indicator Available in cc_DecodeCallProceedingIndMsg
[OSS]: Oss Decoding Failed
CUG Data Not Available in cc_DecodeCallProceedingIndMsg
No Priority Given in cc_DecodeCallProceedingIndMsg
Ignoring cc_DecodeCallProceedingInd message received in CC_Disconnect_requested State: call will be released
Message not expected in cc_DecodeCallProceedingIndMsg
SessionStatus is NOT active for this CallSessionNumber !! in cc_DecodeCallProceedingIndMsg
No Session Found to contain the given TI in cc_DecodeCallProceedingIndMsg, Message Ignored.
Unable to Allocate Memory for ProgressIndicator in %s Message in cc_SendCcCallProcIndMsg
CUG Data Not Available in cc_SendCcCallProcIndMsg
WbAmrEnabled = %d
Unable to Allocate Memory to Send %s Message in cc_SendCcCallProcIndMsg
Entering cc_DecodeAlertIndMsg....[24.008]-5.2.1.5
TransactionId -> %d
Nothing needs to be done here
For Data Calls, CC does not need to inform VCG or RABM
Internal Alerting -> %s
Session State is NOT valid for this message !! in cc_DecodeAlertIndMsg
Message not expected in cc_DecodeAlertIndMsg
SessionStatus is NOT active for this CallSessionNumber !! in cc_DecodeAlertIndMsg
No Session Found to contain the given TI in cc_DecodeAlertIndMsg, Message Ignored.
Internal Alerting -> %s
Unable to Allocate Memory for ProgressIndicator in %s Message in cc_SendCcCallProcIndMsg
Call Waiting Indication-> %s
CallForwardingStatus == %d
Call Divert Indication-> %s
Unable to Allocate Memory to Send %s Message in cc_SendCcAlertIndMsg
Session State is NOT valid for this message !! in cc_DecodeConnectIndMsg
Entering cc_DecodeConnectIndMsg....[24.008]-5.2.1.6
TransactionId -> %d
Message ignored in cc_DecodeConnectIndMsg
SessionStatus is NOT active for this CallSessionNumber !! in cc_DecodeConnectIndMsg
No Session Found to contain the given TI in cc_DecodeConnectIndMsg, Message Ignored.
[OSS]: Oss Decoding got faield
TransactionId -> %d
Internal Alerting -> %s
RabId -> 0x%02X
Unable to Allocate Memory for ProgressIndicator in %s Message in cc_SendCcSetupCnfMsg
Error In cc_AllocateMemoryForSeparateBuffer for ConnectedSubAddressPtr in cc_SendCcSetupCnfMsg
Unable to Allocate Memory for ConnectedLineIdPresentation in %s Message in cc_SendCcSetupCnfMsg
Unable to Allocate Memory to Send %s Message in cc_SendCcSetupCnfMsg
Entering cc_SendCcBearerCapSetRspMsg
BearerCommandType: %d
BearerType: %d
Result: %d
Unable to Allocate Memory to Send %s Message in cc_SendCcBearerCapSetRspMsg
Unable to Allocate Memory to Send %s Message in cc_SendConnAckReqMsg
Entering cc_DecodeCcModifyReqMsg....[24.008]-5.2.1.6
TransactionId -> %d
Unable to Allocate Memory to Send %s Message in cc_SendModifyReqMsg
Entering cc_DecodeModifyCompIndMsg Indicating that MM Connection is Established....
TransactionId -> %d
No Session Found to contain the given TI in cc_DecodeModifyCompIndMsg, Message Ignored.
Displaying Message Contents: %s
Unable to Allocate Memory to Send %s Message in cc_SendCcModifyCnfIndMsg
Entering cc_DecodeModifyRejIndMsg Indicating that MM Connection is Established....
TransactionId -> %d
CauseIe not available in cc_DecodeModifyRejIndMsg
No Session Found to contain the given TI in cc_DecodeModifyRejIndMsg, Message Ignored.
Displaying Modify Rej Ind Message Contents: %s
Unable to Allocate Memory to Send %s Message in cc_SendCcModifyRejIndMsg
Entering cc_DecodeModifyIndMsg Indicating that MM Connection is Established....
TransactionId -> %d
No Session Found to contain the given TI in cc_DecodeModifyIndMsg, Message Ignored.
Displaying Modify Ind Message Contents: %s
Unable to Allocate Memory to Send %s Message in cc_SendCcModifyIndMsg
Entering cc_DecodeCcModifyCompReqMsg....[24.008]-5.2.1.6
TransactionId -> %d
Unable to Allocate Memory to Send %s Message in cc_SendModifyCompReqMsg
Entering cc_DecodeCcModifyRejReqMsg....[24.008]-5.2.1.6
TransactionId -> %d
Unable to Allocate Memory to Send %s Message in cc_SendModifyRejReqMsg
Entering cc_DecodeCcNotifyReqMsg [24.008] - 5.2.1.4.2....
TransactionId -> %d
Notify lost in re-establish in cc_DecodeCcNotifyReqMsg
Message ignored in cc_DecodeCcNotifyReqMsg
No Session Found to contain the given TI in cc_DecodeCcNotifyReqMsg, Message Ignored.
cc_MapNsToCcCallState INVALID SRVCC NscallState =%d
Entering cc_DecodeCcSrvccHoCallSetupReqMsg
Number of Active Call Sessions =%d
Already call is in progess with this TID, Call Rejected in cc_DecodeCcSrvccHoCallSetupReqMsg !
Invalid CallType
Call Accepted....
Call Rejected....
Insufficient resource , Call Rejected in cc_DecodeCcSrvccHoCallSetupReqMsg !
cc_SrvccCallCntxtSetupFinished ==%d
Entering cc_DecodeCcRetrieveSrvccHoCnfReqMsg
cc_SrvccCallCntxtSetupFinished ==%d,Number of Active Call Sessions =%d
cc_CheckMmSrvccHoCnfMsgSaveStatus is TRUE in cc_DecodeCcRetrieveSrvccHoCnfReqMsg !
Unable to Allocate Memory to Send %s Message in cc_SendNotifyReqMsg
Other Calls Already Acitve
User Requests Multi Call
Mobile Supports Multi Call
Network Supports Multi Call
Unable To Find an Available Stream Identifier
Network Does NOT Supports Multi Call
Mobile Does NOT Supports Multi Call
User Does NOT Request Multi Call
cc_GetSetupReqSend: cc_SetupReqSend[CcCurrentStackId] =0x%x
cc_SetSetupReqSend: SetupReqSend =0x%x
Emergency Call Category -> %s
Progress Indicator -> %s
NORMAL Initialisation of <MO Call Establishment>
GSM to UMTS Initialisation of <MO Call Establishment>
UMTS to GSM Initialisation of <MO Call Establishment>
Unknown Initialisation Type (%d) in cc_InitialiseMoCallEstablishment

Fail to Encode the message and Call Rejected....
MultiCallUsed -> TRUE
This is a Voice Call
VCG Cnf already received -> Accept Connect Ind Msg
Must Wait For VCG Cnf. This Msg is Saved Until then...
This is a Data Call
Sync Ind has arrived -> Accept Connect Ind Msg
In Multi Call, Every Call Must Have a Sync Ind. Wait Until Sync Ind Arrives. This Msg is Saved Until then...
MultiCallUsed -> FALSE
This is a Voice Call
Either Sync Ind has arrived or this is a second voice call and VCG already activated. VCG CNF already received -> Accept Connect Ind Msg
GCF test USAT 27.22.4.27.2
Must Wait Until Sync Ind &/or VCG Cnf Arrives. This Msg is Saved Until then...
This is a Data Call
Either Sync Ind has arrived or this is a second call. For a single bearer, no more Sync Ind will arrive -> Accept Connect Ind Msg
Must Wait Until Sync Ind Arrives. This Msg is Saved Until then...
Nothing needs to be done here
For Data Calls, CC does not need to inform VCG or RABM
CMCC : Ignore Connected Number in cc_DecodeConnectIndMsg
No Valid Connected Sub Address in cc_DecodeConnectIndMsg
No Valid Connected Sub Address in cc_DecodeConnectIndMsg
No Valid Connected Number in cc_DecodeConnectIndMsg
No Valid Connected Number in cc_DecodeConnectIndMsg
