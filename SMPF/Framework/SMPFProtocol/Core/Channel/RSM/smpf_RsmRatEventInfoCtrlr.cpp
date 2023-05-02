[RSM(REIC),%s] : (I) Change exception RSM_TRIGGER_HOLD to RSM_STOP for FeDV
[RSM(REIC),%s] : CheckResourceSched[%s]. ModemState[%s], Result[%s]
[RSM(REIC),%s] : REIC ===> L1C, Request %s: %s
[RSM(REIC),%s] : EndOfWaiting. m_EsitPending[%u], m_ModemPending[%u]
[RSM(REIC),%s] : (F) Error !!!!!SendExeptionCauseToCtrler ID:%u, result:%u !!!!!!
[RSM(ESIC),%s] : no running hold/trigger hold and rat state is not %s.
[RSM(REIC),%s] : Invalid State Transition from %s -> %s
[RSM(REIC),%s] : SetModemState(%s, %s): %s -> %s
[RSM(REIC),%s] : (I) Send exception RSM_STOP to trigger hold event for FeDV
[RSM(REIC),%s] : RequestRatHold skip. IRAT BPLMN will be RAT_SUSPEND
[RSM(REIC),%s] : ForceRelease Fail. Resume Trigger Hold Event.
[RSM(REIC),%s] : (I) Change exception RSM_RUNNING_HOLD to RSM_STOP for FeDV
[RSM(REIC),%s] : Already started Hold Procedure. HoldCause:%s
[RSM(REIC),%s] : Skip Hold delay. HoldCause:%s
[RSM(REIC),%s] : Start HoldDelayTimerStart(20ms). HoldCause:%s
[RSM(REIC),%s] : Already started Hold Delay timer. HoldCause:%s
[RSM(REIC),%s] : Stop HoldDelayTimer Rat
[RSM(REIC),%s] : Already stopped Hold Delay timer Rat
[RSM(REIC),%s] : Stop HoldDelayTimer Rat
[RSM(REIC),%s] : HoldDelayStop. HoldCause is differ. m_HoldCauseDuringDelay:%s, HoldCause:%s
[RSM(REIC),%s] : Already stopped Hold Delay timer Rat
[RSM(REIC),%s] : Start EsicEmptyEventGuardTimer
[RSM(REIC),%s] : Already started Esic Empty Event Guard timer
[RSM(REIC),%s] : Stop EsicEmptyEventGuardTimer
[RSM(REIC),%s] : Start ModemStateWatchDogTimer. ModemState[%s] Duration[%ums]
[RSM(REIC),%s] : Stop ModemStateWatchDogTimer. ModemState[%s] UsedTime[%ums] RemainTime[%ums]
[RSM(REIC),%s] : RequestRatResume. ModemState[%s]
[RSM(REIC),%s] : (F) Any RunningHold event exist in MODEM_ACTIVE
[RSM(REIC),%s] : ModemState[%s] can not resume RAT
[RSM(REIC),%s] : (I) HoldDelayCbFunc[%s] is called by timer.
[RSM(REIC),%s] : (I) EsicEmptyEventGuardCbFunc is called by timer. Prev Highest Event ID:%s, RatState:%s
[RSM(REIC),%s] : %s L1 %s is not finished for %ums
