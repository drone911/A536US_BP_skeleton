Msg Name: %s(%d) SetCurObj: 0x%x, Domain:%d
PbdPcc::ProcessMsg
Null MsgInfo
ProcessInnerMsgOfCurPrcd Result : %s
PBD Defer Msg by Lock.
ProcessInnerMsg Result : %s
ProcessArbitraryMsg Result : %s
ProcessTriggerMsg Result : %s
PBD Defer Msg
PbdPcc::ProcessInnerMsgOfCurPrcd
PbdPcc::ProcessInnerMsg
TriggerFail. %s is inner message of holdProcedure(%s)
void PbdPcc::ProcUserAct : UserAct Type %d
pProcdure is nullptr !!!
pProcdure is nullptr !!!
PbdPcc::ProcUserAct__
WRONG UserActType : %d
pProcdure is nullptr !!!
PbdPcc::HoldProcedure
Prcd %s is already Hold CurState(%s)
PbdPcc::ResumeProcedure
Prcd %s is not HOLD state, state(%s)
Abort : %s ---> Already ABORTING !!!!
Abort : %s ---> State is %s can't abort!!!!
Abort Procedure(%s)
TerminateProcedure: %s
TerminateProcedure: %s ---> Already Terminated
PbdPcc::PreTraceNode
PbdPcc::PostTraceNode
Procedure Hold Sate!! Not excute Trace
ABITRARY PRCD COMPLETE
PbdPcc::ResolveAllDeferMsg
GetFt is null
Resolve DeferMsg %s(ID:0x%x)
PbdPcc::ResolveDeferMsg (Id : %d)
GetFt is null
Resolve DeferMsg %s(ID:0x%x)
PbdPcc::RemoveAllDeferMsg
GetFt is null
Remove DeferMsg %s(ID:0x%x)
PbdPcc::RemoveDeferMsg
GetFt is null
Remove DeferMsg %s(ID:0x%x)
PbdPcc::RemoveDeferMsg
GetFt is null
Remove DeferMsg %s(ID:0x%x)
PbdPcc::RemoveDeferMsg
GetFt is null
Remove DeferMsg %s(ID:0x%x)
===RUN PROCRDURES====
No run procedure
run procedure is nullptr
%s(ID:0x%x, State:%s) -> CurNode (%s_%d)
%s(ID:0x%x, State:%s) -> CurNode is nullptr
==-PBD DEFER MSGS===
%s(ID:0x%x)
%s NO Dependency :: PBD_PROCEDURE_TRIGGER
[PBD Prevent] Same %s Prcd Not IDLE!! Defer New Prcd!!
[PBD Conflict] Ignored by %s
[PBD Conflict] Deferd by %s
[PBD Conflict] Defer. %s already running !!!
PbdPcc::InsertLockFreeMsg (MsgId:0x%x)
Same Msg Exist!! return
PbdPcc::ResolveLockFreeMsg
%s COMPLETE
PbdPcc::LockFreeIfAvailable (MsgId:0x%x)
Same Lock Free Msg Exist!! LockFree
PbdPcc::ProcessArbitraryMsg
PbdPcc::ProcessTriggerMsg
[PBD Conflict] %s %s
[PBD Conflict] %s %s
[PBD Conflict] Hold. %s holding.
PbdPcc::AbortOtherProcedure
Abort Complete
%s Abort Continue
PbdPcc::TerminateOtherProcedure
TerminateProcedur(Group %d TriggerPid %d RunPid %d)
