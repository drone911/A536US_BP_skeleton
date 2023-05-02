Error: Null Pointer
SCAddr: ton = %d npi = %d
SCAddr:
DestAddr: ton = %d npi = %d
DestAddr:
Rcvd Rsp from SYNC MBX
MO SMS Control by USIM enabled. Result : %d
Changed SCAddr:
Changed DestAddr:
Error: Null Pointer
Error: Null Pointer
Error: Null Pointer
Call control result modified by USAT
Serialized SC Address:
Serialized Destination Address:
Received RPUserdata : %d, mtibit: %d, TP-MR: %d, DestAddrLen: %d
Received TP-Pid : %d, TPDcs: %d, TPUserDataLen: %d newAddrLen :%d
Error: Null Pointer
Generated tppid : %d, tpdcs: %d, tpUserdatalen: %d
Generated TPDU:
Error: Null Pointer
SmsUpdated usatReq:
SMS not allowed by USAT
Call allowed without any modification
Stack not initialised!Rejecting the USAT SMS request
Rx SMS:
Packing Reqd: %d
Recevied TPDU:
Packing Reqd changed to : %d
Recevied TPDU:
Stored Usat SID = 0x%02x PackingRequired : %d
Failed to allocate SMS TID resources for ns_UsatSmsAllocateMoReqTidResources
BuildMoSmsReq Failed to Build MO SMS Message encoding failed: result = %d
Free Tid Failed
ns_MoSmsPreHandler: NsStackState=%d, KeepLinkOpenTid=%d
Stack not initialised!
ns_KeepLinkOpenTid(%d) is valid one. Stop Timer
SId not found for TId %d
Operator requirement ! Dont Check FDN
TCO requirement ! Dont Check FDN
FDN check Passed for calledPartyNum
FDN check Failed for calledPartyNum
FDN check Passed for serviceCenterNum
FDN check Failed for serviceCenterNum
MO SMS Rejected by UICC!
Failed to allocate TID resources: result %d
Build SMS_MO_REQ Error!
Failed to store SMS_MO_REQ!
[NS_SMS_SEND_REQ] MsgType=%d, SendMode=%d, Status Report=%d, optMask=0x%02x, KeepLinkOpen=%d,
+ PresentFlag (MsgRef=%d, DestAddr=%d, SCAddr=%d, PID=%d, DCS=%d, VP=%d)
Failed to load default SMS parameters from SIM!
Send SMS_MO_REQ (Ti=%d, SmsType=%d, DataLength=%d)
Error: Null Pointer
[NS_MEM_STATUS_REQ] MemStatus = %d
MO SMS Control by USIM enabled. Result : %d
Changed SCAddr:
Changed DestAddr:
Error: Null Pointer
SCAddr: ton = %d npi = %d
SCAddr:
DestAddr: ton = %d npi = %d
DestAddr:
Rcvd Rsp from SYNC MBX
Error: Null Pointer
TID is out of range (%d)
TID=%d, Previous info was not set
TID is out of range (%d)
TID=%d, Previous info was not cleared (MsgRef:%d, KeepLinkOpen:%d)
Error: Null Pointer
Error: Null Pointer
Built SMS_ABORT_REQ Ti = %d
Error: Null Pointer
Unknown ReqType: %d
Error: Null Pointer
Error: Null Pointer
CbmidListCount is too many %d
Error: Null Pointer
Error: Null Pointer
CbmiListCount is too many %d
Error: Null Pointer
[SMS_SERV_RSP] Ti=%d, Cause=%d, DiagInfo=%d, Result=%d, ReqType=%d, ns_KeepLinkOpenTid= %d
ns_SmsBuildSmsShpMemStatusRsp = %d
BuildMoSmsReq Failed to Build MO SMS Message encoding failed: result = %d
Free Tid Failed
Info in SMS_MO_REQ -> Ref=%d, LinkOpen=%d
Fail to find SIdFromTid - TID=%d
Error: Null Pointer
Tx Data to SIM SAP :
Expired: Keep Link Open Timer - KeepLinkOpenTid(%d)
SId not found for TId %d
Error: Null Pointer
SmsPpEnabled = %d
SmsPpEnabled = %d
offset1= %d TpOaLen = %d mtSMS_ptr[offset] = %d
offset= %d Pid = %d Class = %d
MemAlloc Fail
[SMS_SAP] SMS_MT_IND: PID=%d, SId=%d (Ti=%d), MsgRef = %d
WAP-PUSH port 8 / port 16 ID found
WAP-PUSH port 8 : 0x%X
WAP-PUSH port 16 : 0x%X%X
MsgDataPdu : 0x%X 0x%X 0x%X 0x%X 0x%X 0x%X 0x%X
MsgDataPdu is NULL!!
MsgDataPdu : 0x%X 0x%X 0x%X 0x%X 0x%X 0x%X 0x%X
MsgData is NULL!!
NI-SUPL MT_SMS case for google
NI-SUPL WAP_PUSH case for google
WAP-PUSH Port IEI is wrong
Skipping Message Storage to SIM As port 8/16 addressing found
Concatenated Supl SMS comes
Error: Null Pointer
[SMS_MT_IND] Ti %d, DataLength %d
AT&T Requirement,Not saving in SIM
Error: Null Pointer
Error: Null Pointer
ns_SendSmsMtRspforSupl
Error: Null Pointer
ns_DecodeSuplSMS
ns_isSingleSulp
ns_ProcessSuplMsg
MessageIdentifer %d
MessageIdentifer %d
found same MessageId. do not clear DB
duplicated LMS comes. so, ignore it
ns_combineSuplMsg
MessageIdentifier %d's index is invalid. it should be less or equal than 2
copy msg 1-->
copy msg 2-->
ns_checkValidSuplMsg
ns_SuplDB[taskId][index].MessageIdentifier %d
countPart %d
Error: Null Pointer
ns_SuplSendTo
pNsSmsGpsSuplNiMsgInd->sizeOfMsg %d
pNsSmsGpsSuplNiMsgInd->suplMsg-->
ns_SuplHeader_handler
Remove Supl Header for NS_SUPL_MT_SMS
Nothing for Supl Header
pNsSmsGpsSuplNiMsgCnf->Result is %d
supl_init has done successfully
ns_SuplDb_Find
ns_SuplDb_Add
MessageIdentifier %d, MessageParts %d, MessagePartNumber %d, MsgLen %d, ns_SuplDBIndex %d
SuplData-->
ns_SuplDb_Clear
Error: Null Pointer
USIM scalen %d ton npi 0x%x , ns_SmsPpEnabled Npi = 0x%x Ton = 0x%x NoLen = 0x%x TpduLen = 0x%x pRxSmsMsg->Ti = 0x%x
SCA NUM
TPDU
Invalid DCS received. Ignore the CBS Message
Error: Null Pointer
Error: Null Pointer
Error: Null Pointer
Error: Null Pointer
Error: Null Pointer
RSP by CBMID & CBMI update. Don't send forward it to HIU..
Error: Null Pointer
Error: Null Pointer
Error: Null Pointer
Stop network Request:ns_KeepLinkOpenTid(%d) != NS_SMS_INVALID_TID, Stop Timer
SId not found for TId %d
SmsSAP_ServiceLockTable [Status(%d), Tid(%d)]
MsgDataPdu : 0x%X 0x%X 0x%X 0x%X 0x%X 0x%X 0x%X
WSP_PDU_Header[0] : 0x%X 0x%X 0x%X 0x%X 0x%X 0x%X 0x%X
WSP_PDU_Header[0] : 0x%X 0x%X 0x%X 0x%X 0x%X 0x%X 0x%X
Failed to allocate TID resources: result %d
Error: Null Pointer
[DialNumPresent] TP-MR : %x
TP-MR : %x
Usat-Send-Sms -> Tid = 0x%02x
TPDU-->
ns_SmsFreeMoSMSReq
FREEING memory for MO SMS REQ
Error: Null Pointer
Built NS_SMS_SEND_REQ_REJ: Cause %d, SubCause %d, MsgRef %d
Error: Null Pointer
Build SMS_REL_REQ (Ti=%d, MoreMessagesToFollow=%d)
More SMS to be sent /PS DET not needed
Previous [ConcatMsgRef %d, ConcatMsgSeq %d, ConcatTotMsg %d, ConcatType %d ]
[SMS_SAP] SMS Transaction type: Concatenated, [Page: %d/%d, KeepLinkOpen: %d], New concatenated SMS
[SMS_SAP] SMS Transaction type: Concatenated, [Page: %d/%d, KeepLinkOpen: %d], part of previous concatenated SMS
Current- [ConcatMsgRef %d, ConcatMsgSeq %d, ConcatTotMsg %d, ConcatType %d ]
SmsTransactionInfo: TransactionType=Normal, KeepLinkOpen=%d
Error: Null Pointer
Test Sim card is used. Do not modify DataBearer received from AP
DataBearer %d
Built SMS_MO_REQ: Ti = %d DataBearer %d
Result(%d), MO SMS encoding failed for message type %d
Result(%d), MO SMS PDU preparation failed
SMS MO REQ[TPDU]:
Message encoding failed: result = %d
Error: Null Pointer
SendMode=%d SR=%d
Length too long for memcpy: %d
Length too long for memcpy: %d
Length too long for memcpy
No Status Report
Error: Null Pointer
NS_SMS_SEND_RSP(Tid %d): Result=%x, Cause=0x%x, SimRecord=%d, MsgRef=%d, SId=%d, DiagInfo=%d
Send Mode %d
Failed to allocate TID resources: result %d
buffer length error[%d]
Error: Null Pointer
NS_SMS_SHP_MEM_STATUS_RSP: Result=%x
