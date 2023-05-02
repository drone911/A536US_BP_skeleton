[OSS]: Attempting to Read SsInvokeId Using Invalid CallSessionNumber(%d) in SsInvokeId
[OSS]: Attempting to Read SsLocalCode Using Invalid CallSessionNumber(%d) in cc_SetSsLocalCode
------------------------- CC TASK ----------------------------
[OSS]: Oss Init Success
[OSS]: Oss Init Failed
------------------------- CC TASK ----------------------------
pal_MsgReceiveMbx Retruned Un-Supported Class - %d
pal_MsgReceiveMbx Retruned %d instead of PAL_SUCCESS
cc_UpdStackId :CcCurrentStackId: %d
cc_ParseMsg aborted - cc_PtrMsgRec is NULL
cc_ParseMsg - Msg received before CC_INIT_REQ message
cc_ParseMsg in Unknown Msg Received :MsgGroup = 0x%x, MsgNum = 0x%x
cc_ParseMsg in Unknown group : 0x%x
[CurrentStackId] %d
cc_ParseMsg - short - cc_Header.Length = %i < cc_PtrDscMsgRec->BodySize = %i
cc_ParseMsg - cc_PtrBodyRecBase->CcVariable.Length = %d
%s
cc_ParseMsg - Wrong TI Value received OR CC_INIT_REQ not received OR Wrong MsgType Received
Displaying Received Message Contents
cc_DetermineMmBaseMsgType - Wrong Ti Received and ignor the message
cc_DetermineMmBaseMsgType - CC_MESSAGE_TYPE_NOT_IMPLEMENTED
Initialising CC ...in cc_Initialise.
CSVT_FEATURE(Enable=1/Disable=0) = %d
[CC_INIT]CBST Defaults = { %d,%d,%d }
BearerType %d
Unable to Allocate Memory to Send %s Message in cc_Initialise
Re-Initialising CC ....
cc_DecodeCcStopReqMsg : [StackNo] %d
Entering cc_DecodeCcSysInfoUpdateReqMsg - Received GAPI message
AocSupportedIndication -> %s
AoC not supported by UE, not processing cc_SysInfoUpdateReq
No data in cc_DecodeCcSysInfoUpdateReqMsg!!!
cc_DecodeCcHDVoiceSettingReqMsg : HDVoiceCallSetting = %d
cc_DecodeCcHDVoiceSettingReqMsg : INVALID HDVoiceCallSetting = %d
MtCallBlockStatus = %d
CC Message Count -> %d
Processing CC Saved Message....
Msg not expected in this direction: ERROR -> Msg %d cc_DetermineErrorDecodeRadioMsg - cc_CodecResult[CcCurrentStackId] = %d !!!
Storage table too short: ERROR -> Msg %d cc_DetermineErrorDecodeRadioMsg - cc_CodecResult[CcCurrentStackId] = %d !!!
When a message is received that is too short to contain a complete message type information element, that message shall be ignored,
Mandatory param Absent: ERROR -> Msg %d[%d] cc_DetermineErrorDecodeRadioMsg - cc_CodecResult[CcCurrentStackId] = %d !!!
TLV param not expected: ERROR -> Msg %d cc_DetermineErrorDecodeRadioMsg - cc_CodecResult[CcCurrentStackId] = %d !!!
TLV Parameter out of sequence: ERROR -> Msg %d cc_DetermineErrorDecodeRadioMsg - cc_CodecResult[CcCurrentStackId] = %d !!!
IE unknown in msg: ERROR -> Msg %d cc_DetermineErrorDecodeRadioMsg - cc_CodecResult[CcCurrentStackId] = %d !!!
When a message is received that IE unknown element, that message shall be ignored,
cc_DetermineErrorDecodeRadioMsg - cc_CodecResult[CcCurrentStackId] = %d !!!
TLV parameter unknown in msg: ERROR -> Msg %d cc_DetermineErrorDecodeRadioMsg - cc_CodecResult[CcCurrentStackId] = %d !!!
Unable to Save READ ALL MMCC_DATA_IND(Connect_Ind) Msg in cc_SaveConnectIndMsg, cc_PtrMsgRec NULL Or cc_PtrConnectIndCopy Non-Zero
Unable to Save READ ALL MM_SYNC_IND Msg in cc_SaveMmSyncIndMsg, cc_PtrMsgRec NULL Or cc_PtrMmSyncIndCopy Non-Zero
saved after discard....cc_SaveMmSyncIndMsg
INVALID session umber = %d
INVALID session umber = %d
Msg saved in MMCC_SRVCC_HO_CNF in cc_SaveMmSrvccHoCnfMsg
Unable to Save Msg MMCC_SRVCC_HO_CNF in cc_SaveMmSrvccHoCnfMsg, cc_PtrMsgRec NULL Or cc_PtrMmSrvccHoCnfCopy Non-Zero
Unable to Save READ ALL MMCC_DATA_IND(Facility) Msg in cc_SaveFacilityIndMsg, cc_PtrMsgRec NULL Or cc_PtrCcFacilityIndCopy Non-Zero
Unable to Save READ ALL MMCC_DATA_REQ(Disconnect) Msg in cc_SaveDiscReqMsg, cc_PtrMsgRec NULL Or cc_PtrDisconnectReqCopy Non-Zero
cc_SendNsDmEventToNS.....SessionNumber= %d, Timer=%d , Event =%d
Sending Message ......
Attempting to Read State Using Invalid CallSessionNumber(%d) in cc_SetState
Suported Codec List ->.....
Suported Codec List Not Available
StreamId -> 0x%02X
------- Displaying DTMF Data - Session Number (%d) -------
Current Dtmf Index -> %d
Last Dtmf Index -> %d
Error: Dtmf Index = %d
Data For Dtmf Index -> %d
Timer Duration -> %d ms
Stop Req -> %s
Resetting MT Call Data
cc_SetAutoRedial: SessionNumber = %d Autoredial =0x%x
cc_GetAutoRedial: SessionNumber = %d, Autoredial =0x%x
cc_SetNetworkIssueRedialAttempts: SessionNumber = %d NumOfAutoRedialAttempt = 0x%02X
cc_GetNetworkIssueRedialAttempts: SessionNumber = %d, NumOfAutoRedAttempt =0x%02X
cc_SetMmIssueRedialAttempts: SessionNumber = %d NumOfAutoRedialAttempt = 0x%02X
cc_GetMmIssueRedialAttempts: SessionNumber = %d, NumOfAutoRedialAttempt =0x%02X
Resetting Call Data
Attempting To Read Cuurent Dtmf Using Invalid CallSessionNumber(%d) in cc_GetCurrentDtmfIndex
Attempting to Set CurrentDtmf Using Invalid DtmfIndex(%d) in cc_SetCurrentDtmfIndex
Attempting to Set CurrentDtmf Using Invalid CallSessionNumber(%d) in cc_SetCurrentDtmfIndex
cc_SessionData[%d].AuxState -> %s
Invalid SessionNumber (0x%02X) in cc_DisplaySessionAuxState
cc_SessionData[%d].MultiPartyState -> %s
Invalid SessionNumber (0x%02X) in cc_DisplaySessionMultiPartyState
Attempting to Read State Using Invalid CallSessionNumber(%d) in cc_GetState
Attempting to Read State Using Invalid CallSessionNumber(%d) in cc_API_GetState
Attempting to Read RabId Using Invalid CallSessionNumber(%d) in cc_GetRabId
Attempting to Write to RabId Using Invalid CallSessionNumber(%d) in cc_SetRabId
Attempting to Read Flags Using Invalid CallSessionNumber(%d) in cc_ClearFlag
Attempting to Read Flags Using Invalid CallSessionNumber(%d) in cc_SetFlag
Attempting to Read SessionData using Invalid CallSessionNumber (%d) in cc_GetFlag
No Active Calls Found !!!!
-------------- Displaying Session Data For CC Session Number -> %d ---------------------
Transaction Id -> %d
StreamId -> %d
RabId -> %d
PriorityLevel -> %d
CcbsRequest -> %d
CallType1 -> %s
CallType2 -> %s
AuxState -> %s
MultiPartyState -> %s
CcbsState -> %s
CfxIndex -> %d
ReleaseMsgCount -> %d


Session[%d]: Ti -> %d, State -> %s, Call Type 1 -> %s, AuxState -> %s, M.Party State -> %s, Dtmf State -> %s
No Active Calls Found !!!!

CC_MT_CALL_VCG_ACT_NEEDED = %d
No Flags are Set !
------------------------- CC Global Flags ----------------------------
------------------------- CC Redial Global Flags ----------------------------
CC_SESSION_ASSIGNED_FLAG -> %s
CC_PROGRESS_DESCRIPTION_1_OR_2_OR_64_FLAG -> %s
CC_MM_CONECTION_ESTABLISHED_FLAG -> %s
CC_CALL_WAITING_TONE_ON_FLAG -> %s
CC_INTERNAL_ALERT_FLAG -> %s
CC_PROGRESS_INDICATION_FLAG -> %s
CC_MM_REST_CONF_FLAG -> %s
CC_ECT_REQ_FLAG -> %s
CC_MPTY_ACTIVE_FLAG -> %s
CC_EARLY_USER_CONNECTION_FLAG -> %s
CC_CC_REL_IND_SENT_FLAG -> %s
CC Initialisation State -> CC_NOT_INITIALISED -> All Messages except CC_INIT_REQ will be Ignored.in cc_CheckInitialisationState.
Entering cc_CheckEarlyUserConnectionStatus()
Early Connection Requested -> TRUE
This is a Voice Call -> TRUE
VCG has not been activated -> Begin VCG activation...
Early User Connection Check Aborted -> VCG has been activated
Early User Connection Check Aborted -> This is not a Voice Call
Early User Connection Check Aborted -> Early User Connection NOT requested
Transaction Id -> %d
------------- Active Sessions are -----------
Session (%d), Ti -> %d
Bearer 1 Capability ->.....
Bearer 1 Capability Not Available
Bearer 2 Capability ->.....
Bearer 2 Capability Not Available
Backup Bearer Capability ->.....
Backup Bearer Capability Not Available
Connected Party Number Length -> %d
Connected Party Number -> ....
Connected Sub Address Length -> %d
Connected Sub Address -> ....
Network Transfer Capability -> %s
CUG Index[0] -> 0x%02X
CUG Index[1] -> 0x%02X
Network Priroity -> %s
GAPI Priroity -> %s
Call Divert Indication -> %s
cc_SessionData[%d].State -> %s
Attempting to Read State using Invalid SessionNumber (%d) in cc_DisplaySessionState

%d. %s
%d. %s
CalledPartyNumber-->
State=%d,LoopCount=%d
[cc_CheckPossibleAction]No.of Call=%d,Result=%d
Unable to Save READ ALL MMCC_DATA_REQ(Setup) Msg in cc_SaveSetupReqMsg, cc_PtrMsgRec NULL Or cc_PtrCcSetupReqCopy Non-Zero
cc_DecodeCcCallBlockSetReqMsg : Call Block Status = TRUE
cc_DecodeCcCallBlockSetReqMsg : Call Block Status = FALSE
CHINA : matched for ONESKU
DOCOMO : matched for ONESKU
CANADA : matched for ONESKU
CMCC : matched for ONESKU
INDIA : matched for ONESKU
ATT : matched for ONESKU
cc_SetOptCarrier : cc_CurrentOptCarrier(%d)
cc_CheckOptCarrier : Stack ID(%d) OptCarrier(0x%x)
cc_CheckOptColorForONESKU : Stack ID(%d) OptColor(0x%x)
cc_API_CheckIndiaCarrier : CC_OP_INDIA
cc_API_CheckAttCarrier : CC_OP_ATT
PRIVACY! MT message : SETUP
PRIVACY! MT message : CC-ESTABLISHMENT
PRIVACY! MT message : START DTMF ACKNOWLEDGE
Displaying Received Message Contents
Displaying Received Message Contents
