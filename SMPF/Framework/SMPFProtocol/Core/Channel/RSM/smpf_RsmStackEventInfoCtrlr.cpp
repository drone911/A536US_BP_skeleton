[RSM(SEIC),%s] : RegisterRat. SubReic[%s]
[RSM(SEIC),%s] : UpdateMsdHold, GrantState[%s], HoldCause[%s], PrevHoldCause[%s], bIsMsdHold[%u]
[RSM(SEIC),%s] : (I) CheckResourceSched in PauseDoneWithRelease(%u)/HoldCause(%s) Trigger Hold, Request RAT(%s), Event(%s), GrantState(%s)
[RSM(SEIC),%s] : CheckResourceSched. GrantState[%s] m_GrantState[%s]
[RSM(SEIC),%s] : (I)(S) RequestRatResume. Resume skip by wakeup(paging), RemainWakeupTime(%u) is lesser than Margin(%u)
[RSM(SEIC),%s] : RequestStackHold[%s]
[RSM(SEIC),%s] : Update PrevHoldCause, GrantState[%s], CurHoldCause[%s], PrevHoldCause[%s], ReqHoldCause[%s]
[RSM(SEIC),%s] : HoldOrSleepDone. GrantState[%s], HoldCause[%s]
[RSM(SEIC),%s] : (I) Request EarlyWakeup/Resume
[RSM(SEIC),%s] : AllRat no init but can't resume
[RSM(SEIC),%s] : GrantState Error[%u].
[RSM(SEIC),%s] : Not registered!!!
[RSM(SEIC),%s] : SendPauseAckToRcif. HoldCause[%s]. MainReicRatState[%s]
[RSM(SEIC),%s] : bIsAllRatSleep[%s], PauseAckReason[%u], Main[%s]
[RSM(SEIC),%s] : (F) HoldCause[%u] Error.
[RSM(SEIC),%s] : (I) CONN-CONN. RSM release not pauseDone.
[RSM(SEIC),%s] : PauseDoneWithRelease. PauseAckReason[%u], MainReic[%u], SubReic[%u]
[RSM(SEIC),%s] : Grant request after PauseDoneWithRelease. StartRejectRetry. MainReic[%u, %u], SubReic[%u, %u]
[RSM(SEIC),%s] : (I)(S) RequestRatResume. Resume skip by wakeup(paging), RemainWakeupTime(%u) is lesser than Margin(%u)
[RSM(SEIC),%s] : (I)(S) RequestRatResume. Resume skip by HoldTmr
[RSM(SEIC),%s] : (I)(S) Resume Fail. GrantState change to RESOURCE_DENIED
[RSM(SEIC),%s] : (I)(S) RequestRatResume. there is no ResumeReic Rat:%s
[RSM(SEIC),%s] : (F) m_pMainReic is nullptr
[RSM(SEIC),%s] : Skip, already Early Pause.
[RSM(SEIC),%s] : pause time is already passed. skip early pause. currentTime[%u] pauseTime[%u]
[RSM(RCIF)] : Skip StartPauseTmr
[RSM(SEIC),%s] : (F) Pause Timer is not created.
[RSM(SEIC),%s] : StartPauseTmr CurTime:%u, DurationUs:%u
[RSM(SEIC),%s] : Do Early Pause. DurationUs:%u
[RSM(SEIC),%s] : Stop Early Pause
[RSM(SEIC),%s] : LTE already auto pause done, need to resume LTE
[RSM(SEIC),%s] : CancelEarlyPause, OpMode[%u], GrantState[%s], HoldCause[%s], PrevHoldCause[%s], ModemState[%s]
[RSM(SEIC),%s] : Only LTE(MainReic) support CancelEarlyPause
[RSM(SEIC),%s] : Main Reic's ModemState[%s] is no need cancel early pause
[RSM(SEIC),%s] : CancelEarlyPause, There is SRL1RC pause request. request rat hold again
[RSM(SEIC),%s] : SavedAutoPauseDone is skip. skip early pause timer CB and clear SavedAutoPauseDone
[RSM(SEIC),%s] : (I)(S) paging is remaining %ums, ignored early pause.
[RSM(SEIC),%s] : (F) Reject Retry Timer is not created.
[RSM(SEIC),%s] : Reject Retry can not start in FeDV
[RSM(SEIC),%s] : already running reject retry timer
[RSM(SEIC),%s] : Reject Retry is only supported SA mode.
[RSM(SEIC),%s] : (I)(S) RejectRetryTmrCb Expired
[RSM(SEIC),%s] : (I) no event is hold. no more reject retry
[RSM(SEIC),%s] : Reject Retry get grant.
[RSM(SEIC),%s] : RejectRetry granted is error. %s
[RSM(SEIC),%s] : SEIC <=== REIC[%s], %s
[RSM(SEIC),%s] : (I)(S) Resume skip by HoldTmr
[RSM(SEIC),%s] : (I)(S) Resume skip by HoldTmr
[RSM(SEIC),%s] : Main REIC is deregistered.
[RSM(SEIC),%s] : Hold Delay is running. Do not UpdateReason
[RSM(SEIC),%s] : GrantState is pause pending. no need update
[RSM(SEIC),%s] : HighestPriority[%u]
[RSM(SEIC),%s] : Main REIC is deregistered.
[RSM(SEIC),%s] : Hold Delay is running. Do not UpdateReason
[RSM(SEIC),%s] : GrantState is pause pending. no need update
[RSM(SEIC),%s] : (I) UpdateReason Rat(%s) Highest(%s) Trigger(%s)
[RSM(SEIC),%s] : (I)(F) not registered. StId[%u], CurDomainType[%u]
[RSM(SEIC),%s] : (I)(F) no pSrif. MainRatType[%s]
[RSM(SEIC),%s] : (I) GetDrSimInfo. srif[0x%x] Rat[%s] SimInfo[%u](0:none, 1:main, 2:sub)
[RSM(SEIC),%s] : GetFedvStatus[%u]
[RSM(SEIC),%s] : IsFedvOosResume[%u]
