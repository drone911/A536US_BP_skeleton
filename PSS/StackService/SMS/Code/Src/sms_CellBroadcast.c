sms_SendForcedCbListUpdReqMsg in %s state
ETWS Activated along with CBS
GAPI Requesting to Activate All or Some Cell Broadcast Messages in sms_DecodeSmsCbListUpdReqMsg
CBS is disabled based on registry value
ETWS Activated along with CBS
Need to keep CBS as enabled
Need to keep CBS as disabled
Need to keep CBS as disabled
DecodeSmsCbListUpdReqMsg : sms_CbOperator : %d
SMS is not-initialised. Update internal SMS CB Database alone
DecodeSmsCbListUpdReqMsg in %s state, ListReqType->0x%x, Cell Broadcast List Size -> %d
Cell Broadcast List Data -> ...
Cell Broadcast Range List Data -> ...
Unknown ListReqType: %d
Rejecting GAPI's MO Req in sms_DecodeSmsCbListUpdReqMsg ! RAT Change in progress !!
ListPtr is freed
RangeListPtr is freed
CBS is enabled in non-commerial plmn
CB disabled from AP,don't activate for EF_CBMID
CBS is enabled in NO SIM state
sms_CbRegVals: %d
hfcn result: %d
There is no pending activation request
sms_HandleEtwsConfigReq ENTRY nReqType =%d nRatmode = %d
sms_EtwsUserEnable =%d sms_EtwsActiveMode = %d sms_EtwsActivateAll = %d
nRatmode = %d
nRatmode = %d
sms_EtwsActiveMode = %d
nReqType = %d
sms_EtwsUserEnable = %d
sms_SendSmsCbListUpdRspMsg in state %s, SmsCbListUpdRsp.Result -> %02x
sms_PtrBodySnd->SmsCbListUpdRsp.CBListSize -> %d, sms_PtrBodySnd->SmsCbListUpdRsp.CBServiceState -> %d
Ignore CB list trigger in Not-Init State
Displaying Message Contents: %s Activate Status -> %s
Ignore CB list trigger in Not-Init State
Displaying Message Contents: %s Activate Status -> %s
Ignore CB list trigger in Not-Init State
Displaying Message Contents: %s Activate Status -> %s
sms_DecodePhDataIndBlockMsg in %s state
sms_DecodePhDataIndBlockMsg LteDataActiveStatus %d, SMS_CB_DYNAMIC_DISABLR_FLAG = %d
LastBlock indicator = %d,BlockType = %d
Received FILL block, which means NULL message. Discarding CBS message
Incorrect Channel Number. IT should be CHN_CBCH
sms_DecodeGrrETWSDataIndMsg sms_EtwsActiveMode = %d GrrSmsEtwsInd = %d
sms_DecodeGrrETWSDataIndMsg nMsgID = %d
sms_DecodeGrrETWSDataIndMsg ETWS Message without Security
sms_DecodeGrrETWSDataIndMsg SerialNumber = %d warningType = %d
sms_DecodeRrcETWSDataIndMsg sms_EtwsActiveMode = %d
sms_DecodeRrcETWSDataIndMsg nMsgID = %d
UrrcSmsEtwsInd.Payload.etwsInfo.warningType
UrrcSmsEtwsInd.Payload.etwsInfo.slNo
UrrcSmsEtwsInd.etwsSecurityInfo
sms_DecodeRrcETWSDataIndMsg ETWS Message without Security
sms_DecodeRrcETWSDataIndMsg SerialNumber = %d sms_DecodeRrcETWSDataIndMsg warningType = %d

sms_DecodePhDataIndMsgBlock1Msg in %s state
All zeros received in First block
Memory of scheduled MsgId is FREED
New Message ID %d Not Matched with schedule message
First Block Received, Correct Language and Msg Identifier
First Block Does Not indicate that it is Block 1, Ignoring Message
sms_DecodePhDataIndSchedBlock1Msg in %s state
Msg Received in Wrong State in sms_DecodePhDataIndSchedBlock1Msg
sms_DecodePhDataIndBlock2Msg in %s state
Time elapsed: %d
Receiving Block 2 in sms_DecodePhDataIndSchedBlock2Msg
Receiving Block 2 in Incorrect State in sms_DecodePhDataIndSchedBlock2Msg...Requesting L1 to Stop Sending Any More Data on this Channel till Next Time Round....
sms_DecodePhDataIndBlock3Msg in %s state
Time elapsed: %d
Receiving Block 3 in sms_DecodePhDataIndSchedBlock3Msg
Receiving Block 3 in Incorrect State in sms_DecodePhDataIndSchedBlock3Msg...Requesting L1 to Stop Sending Any More Data on this Channel till Next Time Round....
Duplicate CBS received, returning, sms_CbBlock1Type %d
New CBS is received..Add to DB and send CB_IND
Length Error,can't send CB Msg
Duplicate CBS received, returning
New CBS is received..Add to DB and send CB_IND
Length = %d
New CBS is received..Add to DB and sed CB_IND
Data Type -> SMS_CB_UBMC_DATA_MODE
MessageIdentifer -> %04d, SerialNumber -> %02d, DataCodingScheme -> %02d
sms_ProcessUbmcDataIndMsg in %s state, CbStr ->
Wrong RAT in sms_SendCbInd
sms_ProcessPhDataIndLastBlockMsg in %s state
Time elapsed: %d
CBS reception time Elapsed. Discarding CBS msg
Receiving last block in sms_ProcessPhDataIndLastBlockMsg
PageNumber =TotalPages,Re-Seting the TotalPages
CB: Schedule (%d,%d)
Receiving Block 3 in Incorrect State in sms_ProcessPhDataIndLastBlockMsg...Requesting L1 to Stop Sending Any More Data on this Channel till Next Time Round....
Bad Block Received in sms_DecodePhDataIndBadBlockMsg in %s state
Receiving Bad Block in Incorrect State in sms_ProcessPhDataIndBadBlockMsg...Requesting L1 to Stop Sending Any More Data on this Channel till Next Time Round....
Receiving Bad Block in sms_ProcessPhDataIndBadBlockMsg...Requesting L1 to Stop Sending Any More Data on this Channel till Next Time Round....
sms_SendGsmSmsCbInd in %s state
Length of Broadcast Data Sent : %d
Memory allocation fails for sms_PtrBodySnd->SmsLcsmAsstdata.buf_ptr
- MsgRatMode -> %02x
- MsgCode -> %02x
- MsgId -> %02x
- GeographicalArea -> %02x
- UpdateNumber -> %02x
- DataCodingScheme -> %02x
- TotalPages -> %02x
- PageNumber -> %02x
- CbStrLength -> %02x
- Language -> %02x
- CbMsgType -> %02x
sms_ProcessSmsCbLangReqMsg in %s state, ReqType -> %d, List Size -> %d
Language list -> ...
sms_ProcessSmsCbLangReqMsg - Language Out of Bounds
Language ID (%x) not found in List sms_ProcessSmsCbLangReqMsg - Language Out of Bounds
Rejecting GAPI's MO Req in sms_ProcessSmsCbLangReqMsg ! RAT Change in progress !!
CB: SetB %d
CB: SetE %d
CB: SetNew %d, %d
CB: SetRepeatReadingAdv %d
CB: Skip InvalidSlot %d
CB: Set for ATT %d
CB: Skip OptionalFreeSlot %d
CB: Skip UndefinedFreeSlot %d
SendL1cPhCbChStopReq in %s state, Displaying Message Contents: %s STOP Status -> %s

Ignore CB list trigger in Not-Init State
smsCbMsgLen=%d, smsCmasMsgLen=%d, smsCbmsdIdMsgLen=%d, smsCbmiIdMsgLen=%d, smsEtwsMsgLen=%d smsCbRangeMsgLen=%d
smsCbmiRangeMsgLen=%d, SmsAllCbMsgLen=%d
Either ETWS Msg Ids are configured or All CBS Msgs are activated
Cell Broadcast List Size -> %d
Cell Broadcast List Data -> ...
Cell Broadcast List Size -> %d
Cell Broadcast List Data -> ...
pCbsData=%x, CbsTotalPages=%d
MessageIdentifer=%d, SerialNumber=%d, DataCodingScheme=%d, DataSize=%d, Data addr=%d NotiType=%d
Number Of Page is Zero. Making it One.
Unexpected Number Of Pages received.
expectedPages=%d does not match with CbsTotalPages=%d
Memory Allocation Failure
Warning Area Co-Ordinates Not Recevied
CbsDataSize is %d
Message NOT found in List or Incorrect Language/MsgId, Ignoring Message.
FOR KDDI Operator in PLMN ID 440 50/51, always forward all broadcast messages to AP
Unknown OperatorType: %d
Non-requested ETWS will be discarded for UQM / JCO Operator as per Operator's requirement
Not found MsgId in single DB!!
Not found MsgId in Range DB!!
Find Message ID from SMS_DB_CBMI
DecodeSmsCbListUpdReqMsg : sms_CbOperator : %d
For UQM/JCO Operator, do not apply KDDI Specific CB Requirements
DecodeSmsCbListUpdReqMsg : sms_CbOperator : %d
FOR Czech in PLMN ID 230 03/99, ignore all broadcast messages
ApMsgType = %d, UsatMsgType = %d
DecodeUbmcData41IndMsg in %s state, Cell Broadcast Address ->....
Data Type -> SMS_CB_UBMC_DATA_MODE
MessageIdentifer -> %04d
SerialNumber -> %02d
DataCodingScheme -> %02d
DataSize -> %d
CbStr -> .....
sms_SendUmtsSmsCbInd in %s state
Data Type -> SMS_CB_UBMC_DATA_MODE
MessageIdentifer -> %04d, SerialNumber -> %02d, DataCodingScheme -> %02d, GeographicalArea -> %d
TotalPages -> %d, PageNumber -> %d, DataSize -> %d WACLen -> %d
CbStr -> .....
WACInfo -> .....
CbStr -> .....
CbStr -> .....
BroadcastAddress Size -> %d
DataSize -> %d
BroadcastAddress -> .....
CB: sched messageID = %d
CB: scheduled item stored at location = %d
Page Number->%d, TotalPages->%d, Message ID->%d, Coding Scheme->%d
SerialNumber->%d, Message Code->%d, Update Number->%d, Message Class->%d
Invalid BlockNumber (%02x) in sms_SaveCbMsgBlock.
Cell Broadcast Msg Block (%02x) ->
Array index exceed in sms_DisplayCbMsgBlockTable
sms_CellBroadcast InitType:%d
Need to keep CBS as disabled
Unknown Initialisation Type (%x) in sms_InitialiseCellBroadcast
sms_CellBroadcast InitType:%d ActiveMode: %d
Unknown Initialisation Type (%x) in sms_InitialiseEtws
Geaographical Area Info -> %s
Network Language -> %s
Saved info: PLMN ID=%x:%x:%x, TAC = %x:%x, CELL ID=0x%x
new PLMN ID=%x:%x:%x, TAC = %x:%x, CELL ID=0x%x
WarningMsgLen=%d WACLen=%d
SMS MsgId: 0x%x is ignored
EMM CMAS list update Rx counter = %d
Ignore CB list trigger in Not-Init State
No change in LTE CBS Activation state. Ignore CBS list trigger
MsgId not found in List or Incorrect MsgId. Ignoring Message.
Duplicate CBS received, returning
sms_DecodeEtwsPrimaryInd MsgID = 0x%04X
sms_DecodeEtwsPrimaryInd ETWS Message without Security
sms_DecodeEtwsPrimaryInd SerialNumber = %d warningType = %d
sms_DecodeEtwsSecondaryInd MsgID = 0x%04X
Saved info: PLMN ID=%x:%x:%x, TACNR = %x:%x:%x, CELL ID=0x%x
new PLMN ID=%x:%x:%x, TAC = %x:%x:%x, CELL ID=0x%x
CB SMS MsgId: 0x%x is ignored
Ignore CB list trigger in Not-Init State
Duplicate CBS received, returning
sms_DecodeNrmmEtwsPrimaryInd MsgID = 0x%04X
sms_DecodeEtwsPrimaryInd ETWS Message without Security
sms_DecodeEtwsPrimaryInd SerialNumber = %d warningType = %d
sms_DecodeNrmmEtwsSecondaryInd MsgID = 0x%04X
ETWS SMS MsgId: 0x%x is ignored
TimerId %d is expired

SMS_RR_ACT_MODE_FLAG -> TRUE
SMS_CB_ACT_ALL_FLAG -> TRUE
SMS_CB_ANY_LANG_FLAG -> TRUE
SMS_CMAS_ACT_ALL_FLAG -> TRUE
SMS_CB_USER_ENABLE_FLAG -> TRUE
SMS_ETWS_USER_ENABLE_FLAG -> TRUE
SMS_ETWS_ACT_ALL_FLAG -> TRUE
SMS_CB_DYNAMIC_ENABLE_FLAG -> TRUE
SMS_CB_DYNAMIC_DISABLR_FLAG -> TRUE
SMS_UBMC_ACTIVE_FLAG -> TRUE
SMS_EMM_ACT_MODE_FLAG -> TRUE
sms_HandleGmmCbsConfigInd: CbConfigType = %s
Don't send Activation/Deactivation due to the state is same with previous one.
ETWS Activated along with CBS
Improper CbConfigType, Ignoring Msg
Rejecting Req from MM in sms_HandleGmmCbsConfigInd ! RAT Change in progress !!
sms_DecodeGmmCbsConfigInd: CbConfigType = %s
sms_PlmnTripletToString sms_MccMnc : from (0x%X 0x%X 0x%X)
sms_PlmnTripletToString sms_MccMnc : from (0x%X 0x%X 0x%X)
sms_PlmnTripletToString sms_MccMnc : from (0x%X)
sms_PlmnTripletToString : Invaild PLMN
sms_PlmnTripletToString sms_MccMnc : to (0x%X 0x%X 0x%X)
sms_PlmnTripletToString sms_MccMnc : to (0x%X 0x%X 0x%X)
sms_PlmnTripletToString sms_MccMnc : to (0x%X)
