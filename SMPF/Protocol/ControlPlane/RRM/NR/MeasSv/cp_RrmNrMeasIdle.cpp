RrmNrMeasIdle::entry
RrmNrMeasIdle::exit
RrmNrMeasIdle::IsHigherPriorityMode There is no IntraFreq ptr
>>[OFF] Higher-Prirority-Mode, INVALID ReselectionServingFreqInfo
>>[ON] Higher-Prirority-Mode Srxlev %d, Squal %d, SnonIntraSearchP %d, SnonIntraSearchQ %d ModemStatus:%d
>>[OFF] Higher-Prirority-Mode Srxlev %d, Squal %d, SnonIntraSearchP %d, SnonIntraSearchQ %d ModemStatus:%d
RrmNrMeasIdle::ProcReSchedule
>>Re-scheduled MO:%d
>>Not Re-scheduled MO:%d
>>Re-scheduled MO:%d
>>Not Re-scheduled MO:%d
>>Eutra Srch Re-scheduled MO:%d
>>Eutra Srch not Re-scheduled MO:%d
RrmNrMeasIdle::ProcSchedule
UE has not found any new suitable cell during 10 sec. Send OOS Message to change PLMN.
Fail to send OOS message. SMPF NEW is failed for RRC_RRM_OOS_IND
========================<Start setup for Idle Scheduling>========================
========================<End setup for Idle Scheduling>========================
RrmNrMeasIdle::ProcIdleEval
>>There is NO candidate one for RESELECTON. Send DrxStatusIND with TRUE
>>There is NO candidate one for RESELECTON. Send DrxStatusIND with TRUE
RrmNrMeasIdle::RRM_L1C_MEAS_CNF_Handler
>>Result:(enum)%d ObjectId:%d RsType:%s(%d) MeasType:%s(%d) NumResult:%d
>>[IDLEEVAL] All Measurement is resolved. Do Evaluation.
RrmNrMeasIdle::RRM_L1C_MEAS_SCHEDULE_IND_Handler - SfnSubFrame:%d ModemStatus:%d
>>Ignore SCHEDULE_IND due to All stop running :%d
>>SfnSubFrame (%d), ModemStatus:%d
RrmNrMeasIdle::RRM_L1C_WAKEUP_DONE_IND_Handler - Result:%d
>>Update timing offset diff:%d for INTRA
>>Update timing offset diff:%d for INTER
>> Need to check L1 side why WakeUp Done is failutre
>>Reselection is not avaliable. Send DRX STATUS_IND with TRUE
RrmNrMeasIdle::RRM_RRM_DS_MEAS_STATE_REQ_Handler
RrmNrMeasIdle::SendMeasState Result(%d) State(%d) bDS(%d)
RrmNrMeasIdle::ManageMeasState bDS(%d)
RrmNrMeasIdle::RRM_RRM_MEAS_STATE_REQ_Handler::Delete All MeasSchedule
RrmNrMeasIdle::RRM_RRM_MEAS_STATE_REQ_Handler::Delete All MeasSchedule
RecvMsg.State(%d) is invalid
NR_MEAS state change : from IDLE to %s (for MsgGrpId %d)
RrmNrMeasIdle::RRM_RRM_MEAS_STATE_REQ_Handler
RrmNrMeasIdle::RRM_TIMER_MEAS_EVAL_IND_Handler
RrmNrMeasIdle::RRM_TIMER_MEAS_SCHEDULE_IND_Handler
>>PBCH Decoding fail
>>NOT FOUND - FreqInfoptr with %d
>>NOT FOUND - pCellInfo is nullptr. NEIGHBOUR SetType:(%d) ObjectId:%d
>>FOUND - NEIGHBOUR SetType:(%d) ObjectId:%d
>>ScheduleAgainPerPriority:: AvailCountInter %d, CaseInter %d, CaseIratLte %d
>>TRY SCHEDULING AGAIN(PRIORITY NR)ObjectId %d
>>TRY SCHEDULING AGAIN(PRIORITY EUTRA) ObjectId %d
>>TRY SCHEDULING AGAIN(NEW DETECTED) ObjectId %d
