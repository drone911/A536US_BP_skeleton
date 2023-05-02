Invalid Regi state : %d
Registration success
Registration fail
Abnormal state - : grant_State : %d, req_proc: %d
Grant not Received -> other RAT is SRNC_CSCALL state
Grant not Received -> pending
[SRNC] Proc(%d): Grant Received
[SRNC] Abnormal state (state:%d,req_proc:%d,msg_proc:%d)
[SRNC] Recv grant release ind : ReqProc(%d)
[SRNC] Abnormal state (state:%d,req_proc:%d)
[SRNC] Cease Sync Request
[SRNC] suspend message (cur_proc:%d, state:%d) -> send to GSS
[SRNC] resume message (cur_proc:%d, state:%d) -> send to GSS
[SRNC] SRNC state : %d
Ignore standby request Not in Regi_done state
[%s] MSD ===> SRIF_MSD_SRNC_STANDBY_REQ [Proc : %d][Cause : %d][isQuery : %d]
Fail to send standby request, Message alloc fail
[SRNC] GrantByProc (0), Release Reject Proc(%d) : Initialize Srnc DB
[SRNC] GrantByProc (0) : Initialize Srnc DB
Ignore Resume request Not in Regi_done state
[%s] MSD ===> SRIF_MSD_SRNC_RESUME_REQ [Proc : %d]
Fail to send resume request, Message alloc fail
Ignore Pending procedure update request, Not in Regi_done state
[%s] MSD ===> SRIF_MSD_SRNC_PENDING_PROC_UPDATE_REQ [Proc : %d][Status : %d]
Fail to send pending proc update request, Message alloc fail
[%s] MSD ===> SRIF_MSD_SRNC_REGISTER_REQ
Fail to send SRNC registration request, Message alloc fail
Ignore deregister request in Regi_none state
[%s] MSD ===> SRIF_MSD_SRNC_DEREGISTER_REQ
Fail to send SRNC De-Registration request, Message alloc fail
[SRNC] ReleaseProc(%d) is granted by Srnc
[SRNC] Trigger ReleaseReq in GrantState(%d)
[SRNC] Invalid proc for release : CurProc(%d), ReqProc(%d)
[SRNC] Ignore start procedure : SrncProcedure(%d) is already ongoing procedure
[SRNC] Grant Rejected Proc(%d) is exist), Send Resume first
[SRNC] CurSrncState (%d) : Do Nothing
[SRNC] Start procedure (proc:%d, cause:%d)
SendMessage : Fail -> Nullptr Message Body
[SRNC] SRNC DB init(%d)
