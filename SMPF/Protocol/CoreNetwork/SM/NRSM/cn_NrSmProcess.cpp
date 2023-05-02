[N :NR,%d] (fn) %s
[D :NR,%d] PreProcessMsg: SMT_MM_STATUS_IND
[W :NR,%d] %%@EM PreProcessMsg: SMT_L2HPDCPTX_UPDATE_INFORMATION_IND
[D :NR,%d] SMT_MM_DATA_IND w/ AirMsg(%s)
[W :NR,%d] %%@EM No need for the following procedure due to AirMsg(%s)
[W :NR,%d] %%@EM pSession == nullptr
[N :NR,%d] (fn) %s
[W :NR,%d] %%@EM Abnormal state and msg, so ignore %s/%s
[W :NR,%d] %%@EM SMT_QM_CMD_INFO_IND||rMsg.MsgId== SMT_PM_DISCONNECT_REQ
[W :NR,%d] %%@EM (DISC_TRIGGERED_BY_PM|DISC_TRIGGERED_BY_QM)
[W :NR,%d] %%@EM PreProcessMsg:NRSM_NEED_TO_CHECK_EST_CNF:(m_pSession == nullptr) [RX][DISCARD] %s
[D :NR,%d] OpCode=0x%X State(%s) in %s
[D :NR,%d] This PM_CONNECT_REQ needs to send CNF directly
[D :NR,%d] This PM_DISCONNECT_REQ needs to ignore without process
[D :NR,%d] This PM_CONNECT_REQ needs to send CNF directly
[D :NR,%d] This PM_CONNECT_REQ needs to ignore without process
[D :NR,%d] This PM_DISCONNECT_REQ : remove msg with the same sessionID on pending Q
[D :NR,%d] This PM_DISCONNECT_REQ needs to ignore without process
[D :NR,%d] This PM_DISCONNECT_REQ needs to abort previous procedure
[D :NR,%d] This PM_DISCONNECT_REQ needs to send CNF directly
[D :NR,%d] This PM_CONNECT_REQ needs to ignore without process
[D :NR,%d] This PM_DISCONNECT_REQ : remove msg with the same sessionID on pending Q
[D :NR,%d] Result(%s) in %s
[D :NR,%d] GetSessionFromExtMsg:SMT_MM_DATA_REJ
[D :NR,%d] GetSessionFromExtMsg:SMT_MM_NW_SESSION_INFO_IND
[W :NR,%d] %%@EM pSession == nullptr
[D :NR,%d] SessionId(%d) SDAP_Available(%d)
[D :NR,%d] already released session(%d)
[W :NR,%d] %%@EM This Msg(%s) is not handled. SessionId=%d
[D :NR,%d] This Msg(%s) is handled. SessionId=%d pFindSession=0x%X
[N :NR,%d] (fn) smt_GetSessionFromExtMsg_DataInd : DATA_IND SessionId %d
[W :NR,%d] %%@EM pFindSession=NULL, So make temparary pStatusSession
[ME:NR,%d] %%@ME UE sends a STATUS due to invalid PDU session identity from %s
[W :NR,%d] %%@EM If SessionId(%d) is a reserved or unassigned value, the UE shall ignore the message
[D :NR,%d] UE got a PTI 0xFF from NW
[W :NR,%d] %%@EM pFindSession != nullptr
[D :NR,%d] return NULL due to smt_CheckCommandMatchToState=true
[N :NR,%d] (fn) %s
[D :NR,%d] SessionID %d Conn->sessionID(%d)
[D :NR,%d] If it is Handover case SM state will be change to INACTIVE
[N :NR,%d] (fn) %s
[D :NR,%d] Session has already been deleted from NW
[N :NR,%d] (fn) %s
[D :NR,%d] Available SessionId %d
[W :NR,%d] %%@EM Unexpected SmState(%d)..
[N :NR,%d] (fn) smt_CreateSession Available SessionId=%d
[W :NR,%d] %%@EM return %s = nullptr in %s
[W :NR,%d] %%@EM return %s = nullptr in %s
[W :NR,%d] %%@EM return %s = nullptr in %s
[N :NR,%d] (fn) %s
[N :NR,%d] (fn) %s
[W :NR,%d] %%@EM Unknown Air message received MsgId %d
[N :NR,%d] (fn) smt_SaveCurrQFIlistToSavedQFIlist requestedOp=0x%X (%s)
[A :NR,%d] %%@EM NeedToSend RELESAE_REQ
[SM|%d,CP] NeedToSend RELESAE_REQ
[A :NR,%d] %%@EM NeedToSend MOD COMMAND REJECT
[SM|%d,CP] NeedToSend MOD COMMAND REJECT
[A :NR,%d] %%@EM NeedToSend RELEASE COMPLETE
[SM|%d,CP] NeedToSend RELEASE COMPLETE
[N :NR,%d] (fn) %s
[W :NR,%d] %%@EM return (void) %s = nullptr in %s
[N :NR,%d] (fn) %s
[W :NR,%d] %%@EM - Qos Iter Null ptr
[N :NR,%d] (fn) smt_CreateQosFlowDesc EBId %d / IwkN26 %d
[W :NR,%d] %%@EM Error %s alloc failed in %s
[E :NR,%d] (_new_) %s=0x%X in %s
[W :NR,%d] %%@EM return %s(%d) due to %s = nullptr in %s
[N :NR,%d] (fn) smt_CreateMappedEps EBId %d / IsMappingDone %d
[W :NR,%d] %%@EM Error %s alloc failed in %s
[E :NR,%d] (_new_) %s=0x%X in %s
[W :NR,%d] %%@EM return (void) %s = nullptr in %s
[N :NR,%d] (fn) %s
[E :NR,%d] (_delete_arr_) %s=0x%X in %s
[N :NR,%d] (fn) smt_RemoveQosFlowAndMappedEps EBId %d
[W :NR,%d] %%@EM return (void) %s = nullptr in %s
[W :NR,%d] %%@EM return (void) %s = nullptr in %s
[N :NR,%d] (fn) %s
[W :NR,%d] %%@EM return %s(%d) due to %s = nullptr in %s
[N :NR,%d] (set) %s = %d(0x%X)->%d(0x%X) (Changed) in %s
[N :NR,%d] (set) %s = %d(0x%X) (Already) in %s
[W :NR,%d] %%@EM return %s(%d) due to %s = nullptr in %s
[N :NR,%d] (fn) smt_SessionCreateWithPmSesssionId Available SessionId %d
[N :NR,%d] (fn) %s
[N :NR,%d] (fn) %s
[N :NR,%d] AirMsg=0x%X(%s) Result=%d in %s
[N :NR,%d] (fn) ControlSscMode : requestedOp=0x%X (%s)
[D :NR,%d] ControlSscMode Type = %d
[D :NR,%d] Cause => %d
[N :NR,%d] If SSC 3 is supported, needs adding procedure
[W :NR,%d] %%@EM pSmContext==nullptr
[D :NR,%d] (fn) smt_FindEstReqTypeCallTypeReqType CallType(%s) ReqType(%s)
[N :NR,%d] (fn) smt_CheckRegAndCallType : CallType (%d) EmerREG (%d) NormalREG (%d) MsgType (%d)
[N :NR,%d] (fn) %s
[W :NR,%d] %%@EM return %s(%d) due to %s = nullptr in %s
[N :NR,%d] (fn) %s
[E :NR,%d] (_delete_) %s=0x%X in %s
[N :NR,%d] (set) %s = %d(0x%X)->%d(0x%X) (Changed) in %s
[N :NR,%d] (set) %s = %d(0x%X) (Already) in %s
[N :NR,%d] (fn) %s
[W :NR,%d] %%@EM NRSM_AIR_MSG_SESSION_REL_CMD && NRSM_PDU_ACTIVE_PENDING [%d]
[W :NR,%d] %%@EM NRSM_AIR_MSG_SESSION_AUTH_CMD && NRSM_PDU_INACTIVE_PENDING [%d]
[W :NR,%d] %%@EM NRSM_AIR_MSG_SESSION_MOD_CMD && !NRSM_PDU_ACTIVE [%d]
[N :NR,%d] (fn) %s
[N :NR,%d] (fn) %s
[W :NR,%d] %%@EM return (void) %s = nullptr in %s
[D :NR,%d] PM_SMT_CONNECT_REJ case will be removed sessionId (%d)
[ME:NR,%d] %%@ME UE no need to sends a STATUS for NW msg 0x%X
