SecuCh : Init done
SecuCh : KEY PROVISION REQ
SecuCh : READ REQ
SecuCh : WRITE REQ
SecuCh : SBOX REQ
SecuCh : ForcedSecuChTimerForAti enabled
SecuChProcessRfsLogging : FILE CREATE FAIL
Init Semaphore (%d)
Send Semaphore (id:%d)
No Waiting Semaphores (id:%d)
Invalid Semaphore Send Req (id:%d)
Wait Semaphore (id:%d)
Too many Waiting Semaphores (id:%d)
Invalid Semaphore Wait Req (id:%d)
SECUCH SBOX:
Non provisioning device
Token is not updated due to EM Not Ready
Initialize SecuCh Task
Provisioning status :(DEV:%d, FAC:%d, PROV:%d, ROOT:%d)
Start SecuCh Task
pal_MsgRtkReceive failure
pal_MsgRtkReceive : Unsupported TypeOfObj(0x%X)
pal_MsgRtkReceive failure
pal_MsgRtkReceive : Unsupported TypeOfObj(0x%X)
SecuChTimerInit
SecuChTimerInit : pal_TmCreateTimer failed
SecuChParseReqMsg : pSecuChRxMsg is NULL
SecuChParseReqMsg : mbxSrc(0x%04X), ReqType(%d), ReqSize(%d), Offset(0x%X), ReqData(0x%08X)
SecuChParseReqMsg : Already Key Provisioned
SecuChParseReqMsg : Not Provisioning Device (fusing=%d, provcass=%d)
SecuChParseReqMsg : Invalid Read ReqSize(%d) from 0x%04X
SecuChParseReqMsg : Not Provisioning Device (fusing=%d, provcass=%d)
SecuChParseReqMsg : Invalid Write ReqSize(%d) from 0x%04X
SecuCh : Handle SBOX REQ (Sensitive Type:0x%x)
SecuChParseReqMsg : Not Provisioning Device (fusing=%d, provcass=%d)
SecuChParseReqMsg : Invalid Read ReqSize(%d) from 0x%04X
SecuChParseReqMsg : EM Not Ready(%d)
SecuChParseReqMsg : REQ_SBOX_PREPARING
SecuChParseReqMsg : Invalid msgType(=0x%04X)
SecuChParseReqMsg : Fail
SecuCh:ReqFail
SecuChTimerStart(ReqType:%d, isFirstReadReq:%d, ForcedSecuChTimerForAti:%d, %d sec)
SecuChSendReqMsg : pal_MemAlloc failed
SECUCH REQ: Body.hmac :
SECUCH REQ: Body.command : 0x%08X
SECUCH REQ: Body.nonceCP :
SecuChSendReqMsg : pal_MemAlloc failed
SECUCH REQ: Body.command : 0x%08X
SECUCH REQ: Body.nonceCP :
SECUCH REQ: Body.nonceVK :
SECUCH REQ: Body.type : 0x%08X
SECUCH REQ: Body.size : 0x%08X
SECUCH REQ: Body.offset : 0x%08X
SECUCH REQ: Body.data :
SecuChSendReqMsg : pal_MemAlloc failed
SECUCH REQ: Body.iv :
SECUCH REQ: Body.tag :
SecuChSendReqMsg : pal_MemAlloc failed
SECUCH REQ: Body.tag :
SecuChSendReqMsg : Already Key Provisioned
SecuChSendReqMsg : pal_MemAlloc failed
SECUCH REQ: Header.payload_no : 0x%08X
SECUCH REQ: Header.ret : 0x%08X
SECUCH REQ: Header.command_type : 0x%08X
SECUCH REQ: Header.data_length : 0x%08X
SECUCH REQ: Header.version : 0x%08X
SECUCH REQ: Length : 0x%08X
SecuChSendReqMsg : SecuChSendMsg failed
SecuChSendReqMsg : %d > SECUCH_MAX_BYTE
SecuChSendMsg : usLength(%d), FrameCount(%d), Modulo_Size(%d)
SecuChSendMsg : memAllocMem failed
SECUCH TX:
SecuChSendMsg : hostifSendDataPacket failed (ret=%d)
SecuChTimerStop
READ WB (%d)
Factory AP Binary
Non-Factory AP Binary
Provisioning status :(DEV:%d, FAC:%d, PROV:%d, ROOT:%d)
DEVELOPMENT Device
MARKET Device
Provisioning status :(DEV:%d, FAC:%d, PROV:%d, ROOT:%d)
SecuChParseAckMsg : pSecuChRxMsg is NULL
SecuChParseAckMsg : HOSTIF_INIT_COMPLETE
SecuChParseAckMsg : Invalid msgType(0x%04X)
SecuChParseAckMsg : pAckMsg is NULL
SECUCH RX:
SecuChParseAckMsg : SECUCH_RETRY(cmd:0x%08X, retry:%d)
SecuChParseAckMsg : Retry Timeout(cmd:0x%08X)
SecuChParseAckMsg : SECUCH_NEXT(current cmd:0x%08X, next cmd:0x%08X)
SecuChParseAckMsg : Unhandled source message box(=0x%X)
SecuChParseAckMsg Fail
SecuCh:AckFail-R:%02d,%08X,No:0x%08X
SecuChParseAckMsg : SECUCH_FAIL_RETURN(cmd:0x%08X)
SecuChParseAckMsg : SECUCH_COMPLETE(cmd:0x%08X)
SecuChParseAckMsg : SECUCH_IGNORE_ACK(cmd:0x%08X)
SECUCH ACK: Header.payload_no : 0x%08X
SECUCH ACK: Header.ret : 0x%08X
SECUCH ACK: Header.command_type : 0x%08X
SECUCH ACK: Header.version : 0x%08X
SECUCH ACK: Header.data_length : 0x%08X
SECUCH ACK: Length : 0x%08X
SecuChAckHandler : Invalid payload_no(0x%08X, ReqNo: 0x%08X)
SecuChAckHandler : Invalid return(0x%08X)
SecuChAckHandler : Invalid Length(0x%08X)
SecuChAckHandler : pal_MemAlloc failed
SECUCH ACK: Body.iv :
SECUCH ACK: Body.tag :
SECUCH ACK: Body.tag :
SecuCh:ssa_gcm_Decrypt failed(ret = %d)
SECUCH ACK: Body.command : 0x%08X
SECUCH ACK: Body.result : 0x%08X
SecuChAckHandler : Unexpected command type (received:0x%08X, expected:0x%08X)
SecuChAckHandler : Already Key Provisioned
SecuChAckHandler : Empty RPMB data
SecuChAckHandler : Update read req size from %d to %d
SecuChAckHandler : Invalid read ack size(%d) >= req size(%d)
SecuChAckHandler : Unexpected result (received:0x%08X, expected:0x%08X)
SecuChAckHandler : Unexpected result (received:0x%08X, expected:0x%08X)
SECUCH ACK: Body.nonce :
SecuChAckHandler : ssa_gcm_GetNonceCP compare failed
SECUCH ACK: Body.size : 0x%08X
SECUCH ACK: Body.data :
SecuChAckHandler : Invalid read size (Requested read size : %d)
SECUCH ACK: Body.size : 0x%08X
SECUCH ACK: Body.data :
SECUCH ACK: Body.size : 0x%08X
SecuChAckHandler : Invalid write size (Requested write size : %d)
SecuChAckHandler : Save Nonce VK
SecuChTimerExpiry : %dms Timeout(cmd:0x%08X, retry cnt:%d)
SecuChTimerExpiry : SECUCH_RETRY(cmd:0x%08X, retry:%d)
SecuCh:TimeOut-R:%02d,%08X,No:0x%08X
SecuChTimerExpiry : SecuChSendReqMsg fail
