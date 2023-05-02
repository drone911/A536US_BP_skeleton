LPP_ProcessEmmStateNotiMsg()
# Receive EMM STATE ##### SAEMM_LBS_NON_AVAILABLE
# EMM STATE # LPP_EMM_NULL
# Receive EMM STATE # SAEMM_LBS_TMP_NOT_READY
# EMM STATE # LPP_EMM_NOT_CONNECTED
# Receive EMM STATE # SAEMM_LBS_READY
# EMM STATE # LPP_EMM_CONNECTED
All queued EMM_Wait Msgs are sent
Non Available EMM DATA State Noti !!!
LPP_ProcessEmmDataCnfMsg() - sessionId(0x%02x %02x %02x %02x) transactionId(%d)
[%d] sessionTableIndex(%d) qSessionId(0x%02x %02x %02x %02x) etransactionId(%d)
Find requested DATA_REQ in QueuingEmmConnMsglist[%d], index[%d]
===== SAEMM_LBS_DATA_SENDING_FAIL =====
MAX RETRY - Remove from EMM Connected Queue
===== SAEMM_LBS_DATA_EST_FAILURE =====
# EMM STATE # LPP_WAITING_FOR_EMM_CON
===== SAEMM_LBS_DATA_SUCCESS =====
Remove from EMM Connected Queue
Non Available EMM DATA CNF!!!
EUTRAN_LCS_ProcessEmmDataCnfMsg() - transactionId(%d)
[%d] sessionTableIndex(%d) etransactionId(%d)
Find requested LCS_EMM_DATA_REQ in QueuingEmmConnMsglist[%d], index[%d]
===== SAEMM_LBS_DATA_SENDING_FAIL =====
MAX RETRY - Remove from EMM Connected Queue
===== SAEMM_LBS_DATA_EST_FAILURE =====
# EMM STATE # LPP_WAITING_FOR_EMM_CON
===== SAEMM_LBS_DATA_SUCCESS =====
Remove from EMM Connected Queue
Non Available EMM DATA CNF!!!
LPP_GetEmmSessionState() - current Stack ID : %d
# [GET] EMM STATE : LPP_EMM_NULL #
# [GET] EMM STATE : LPP_WAITING_FOR_EMM_CON #
# [GET] EMM STATE : LPP_EMM_CONNECTED #
# [GET] EMM STATE : LPP_EMM_NOT_CONNECTED #
# [GET] EMM STATE : ??? #
LPP_SaveEmmConnMsg() - sessionTableIndex(%d) eTransactionId(%d)
LPP_SaveEmmConnMsg() - pMsg is NULL!!!
LPP_SaveEmmConnMsg() - i(%d) trial(%d)
LPP_SaveEmmConnMsg() - MALLOC FAIL!!!
LPP_SaveEmmConnMsg() - MALLOC FAIL!!!
LPP_SaveEmmConnMsg() - MALLOC FAIL!!!
LPP_SaveEmmConnMsg() - MALLOC FAIL!!!
LPP_SaveEmmConnMsg() - LPP_EMMConnMsg saved!!!, index : %d n_queuingEmmConnMsg[%d] : (%d)
LPP_SaveEmmConnMsg() - EmmWaitMsg Queue is FULL!!!
LPP_SaveEmmWaitMsg() - sessionTableIndex(%d) eTransactionId(%d)
LPP_SaveEmmWaitMsg() - pRevMsg(0x%x) already exists!!!
LPP_SaveEmmWaitMsg() - LPP_EmmWaitMsg saved!!!, n_queuingEmmWaitMsg[%d] : (%d)
LPP_SaveEmmWaitMsg() - EmmWaitMsg Queue is FULL!!!
LBS_ProcessNrmmDataCnfMsg() - sessionId(0x%02x %02x %02x %02x) transactionId(%d)
[%d] sessionTableIndex(%d) qSessionId(0x%02x %02x %02x %02x) etransactionId(%d)
Find requested DATA_REQ in QueuingNrmmConnMsglist[%d], index[%d]
===== NRMM_LBS_DATA_SUCCESS =====
Remove from NRMM Connected Queue
===== SAEMM_LBS_DATA_SENDING_FAIL =====
MAX RETRY - Remove from NRMM Connected Queue
LBS_GetNrmmSessionState() - current Stack ID : %d
# [GET] NRMM STATE : LBS_NRMM_WAITING_FOR_EST #
# [GET] NRMM STATE : LBS_NRMM_CONNECTED #
# [GET] NRMM STATE : LBS_NRMM_NOT_CONNECTED #
# [GET] NRMM STATE : ??? #
LBS_SaveNrmmWaitMsg() - sessionTableIndex(%d) eTransactionId(%d)
LBS_SaveNrmmWaitMsg() - pRevMsg(0x%x) already exists!!!
LBS_SaveNrmmWaitMsg() - NrmmWaitMsg saved!!!, n_queuingNrmmWaitMsg[%d] : (%d)
LBS_SaveNrmmWaitMsg() - NrmmWaitMsg Queue is FULL!!!
LBS_SaveNrmmConnMsg() - sessionTableIndex(%d) eTransactionId(%d)
LBS_SaveNrmmConnMsg() - pMsg is NULL!!!
LBS_SaveNrmmConnMsg() - i(%d) trial(%d)
LBS_SaveNrmmConnMsg() - MALLOC FAIL!!!
LBS_SaveNrmmConnMsg() - MALLOC FAIL!!!
LBS_SaveNrmmConnMsg() - MALLOC FAIL!!!
LBS_SaveNrmmConnMsg() - MALLOC FAIL!!!
LBS_SaveNrmmConnMsg() - NRMMConnMsg saved!!!, index : %d n_queuingNrmmConnMsg[%d] : (%d)
LBS_SaveNrmmConnMsg() - NrmmWaitMsg Queue is FULL!!!
LBS_ProcessNrmmEstCnfMsg()
##### NRMM STATE ##### LBS_NRMM_CONNECTED
All queued NRMM_Wait Msgs are sent
NrMM State is Mismatched!!!
LBS_ProcessNrmmEstErrMsg() - CANNOT deliver DATA_REQ to NW caused by MM establish error, cause(%d)
LPP_InitEmmConnMsg() - stackId : %d
LPP_InitEmmWaitMsg() - stackId : %d
LPP_RemoveEmmWaitMsg() - pMsg(0x%x)
LPP_RemoveEmmWaitMsg()- i(%d), n_queuingEmmWaitMsg[%d] : (%u)
LBS_InitNrmmWaitMsg() - stackId : %d
LBS_InitNrmmConnMsg() - stackId : %d
LBS_RemoveNrmmWaitMsg() - pMsg(0x%x)
LBS_RemoveNrmmWaitMsg()- i(%d), n_queuingNrmmWaitMsg[%d] : (%u)
