RrmSubBlkNrMeasConnMsgHdlrOthers::RrmSubBlkNrMeasConnMsgHdlrOthers()
RrmSubBlkNrMeasConnMsgHdlrOthers::~RrmSubBlkNrMeasConnMsgHdlrOthers()
RrmSubBlkNrMeasConnMsgHdlrOthers::RRM_L1C_MEAS_CNF_Handler
[N2U] IsValid %d CellId %d, Rscp %d, EcNo %d, Rssi %d, TimingOffset %d
>>Result:(enum)%d ObjectId:%d RsType:%s(%d) MeasType:%s(%d) NumResult:%d
>>Need check CDRX duration
RrmSubBlkNrMeasConnMsgHdlrOthers::RRM_L1C_MEAS_SCHEDULE_IND_Handler- ModemStatus:%d
>>Ignore SCHEDULE_IND (C-DRX running && CdrxAvilableStatus TRUE) or All stop running :%d
RrmSubBlkNrMeasConnMsgHdlrOthers::RRM_L1C_WAKEUP_DONE_IND_Handler - Result:%d
>>Update timing offset diff:%d for INTRA
>>Update timing offset diff:%d for INTER
>> Need to check L1 side why WakeUp Done is failutre
>>Start Eval/MR timer
>>Without Sleep, WAKEUP MSG is came
RrmSubBlkNrMeasConnMsgHdlrOthers::RRM_L1C_PBCH_DECODE_CNF_Handler: Result:%d RatType:%d
>>No freq found
>>PCID(%d) SUCCESS result in RRM_L1C_PBCH_DECODE_CNF_Handler
BeamIndexLSB(%d), BeamIndex(%d)
>>No cellptr
>>PCID(%d) RecvMsg.Result == FAILURE
>>PCID(%d) Wrong result:%d for FR2 PBCH decode cnf
>>MeasId(%d) ObjId(%d) for reportSFTD Found at MeasInfoList!!!!
RrmSubBlkNrMeasConnMsgHdlrOthers::RRM_TIMER_MEAS_EVAL_IND_Handler
RrmSubBlkNrMeasConnMsgHdlrOthers::RRM_TIMER_MEAS_SCHEDULE_IND_Handler
RrmSubBlkNrMeasConnMsgHdlrOthers::RRM_TIMER_MR_INTERVAL_IND_Handler
RrmNrMeasConn::RRM_LTERRM_LTE_MEAS_RESULT_IND_Handler(%d)
arfcn(%d) serving CellId(%d) Rsrp(%d) Rsrq(%d) Sinr(%d)
arfcn(%d) best neighbor CellId(%d) Rsrp(%d) Rsrq(%d) Sinr(%d)
RrmNrMeasConn::RRM_LTERRM_LTE_OBJECT_CHECK_CNF_Handler(Earfcn:%d NumCell:%d)
>>N2L Scheduling is skipped.
>>N2L Scheduling is skipped.
MeasType error [%d]
RrmSubBlkNrMeasConnMsgHdlrOthers::RRM_RRC_DELAY_REPORT_IND_Handler
RrmSubBlkNrMeasConnMsgHdlrOthers::ProcConnMeasure
>>csiMeasSlotIndex:%d - MeasReq is not configured
RrmSubBlkNrMeasConnMsgHdlrOthers::CheckRemainTime
PeriodicalReportInterval::reportTriggered is True::MeasID(%d), numberOfReportsSent(0)::_eval_[N2L]
First send::MeasID(%d), PeriodicalReportInterval(%d)::_eval_
PeriodicalReportInterval::reportTriggered is True::MeasID(%d), TimeDiff(%d)::_eval_
PeriodicalReportInterval::reportTriggered is FALSE::MeasID(%d), TimeDiff(%d)::_eval_
RemainTime(%d)::_eval_
RrmSubBlkNrMeasConnMsgHdlrOthers::CheckReportMode
>>UlDelayMR set report mode as SERVINGCELL ReportAmount:%d(enum)
Invalid Periodical ReportAmount
RrmSubBlkNrMeasConnMsgHdlrOthers::ProcConnEvalReport::MeasID(%d), Periodical_ReportAmount(%d)::_eval_
Invalid Periodical ReportAmount
[N2L] ProcConnEvalReport MeasID(%d), Periodical_ReportAmount(%d)
RrmSubBlkNrMeasConnMsgHdlrOthers::ProcConnEvalReport::ReportMode(%d)::_eval_[N2L]
RrmSubBlkNrMeasConnMsgHdlrOthers::ProcConnEvalReport
RrmSubBlkNrMeasConnMsgHdlrOthers::ProcConnEvalReport - ERROR) MeasID(%d)'s Varlist is abnormal state. So MR cannot be transmitted.
RrmSubBlkNrMeasConnMsgHdlrOthers::ProcConnEvalReport - MeasID(%d) is for UlDelayMR, Skip until RRC trigger UlDelayMR
RrmSubBlkNrMeasConnMsgHdlrOthers::ProcConnEvalReport - MeasID(%d) VarMeasReportList.reportTriggered(%d)[N2L]
RrmSubBlkNrMeasConnMsgHdlrOthers::ProcConnEvalReport - ReportAmount is exhausted. Sent all quantities::MeasID(%d) numberOfReportsSent(%D)::_eval_
[A2 optimize]A2MR will be tried. Send forced eventA2 MR-::_eval_
CanNot AllocMsg about RRM_RRC_LOW_PWR_MODE_IND
RrmSubBlkNrMeasConnMsgHdlrOthers::ProcConnEvalReport - pRrcRrmMeasReportInd is NULL::_eval_
TimerMr will stop. because minRemainTime is not setting::_eval_
minRemainTime(%d)::_eval_
RrmSubBlkNrMeasConnMsgHdlrOthers::ProcReSchedule
>>Re-scheduled MO:%d
>>Not Re-scheduled MO:%d
>>Eutra Srch Re-scheduled MO:%d
>>Eutra Srch not Re-scheduled MO:%d
>>Eutra Meas Re-scheduled MO:%d
>>Eutra Meas not Re-scheduled MO:%d
>>Utra Re-scheduled MO:%d
>>Not Utra Re-scheduled MO:%d
RrmSubBlkNrMeasConnMsgHdlrOthers::ProcSchedule
RrmSubBlkNrMeasConnMsgHdlrOthers::ProcMeasEval
>>Entering SMeasureCondition.
RrmSubBlkIratMeas::SendLteObjectCheckReq(earfcn:%d)
