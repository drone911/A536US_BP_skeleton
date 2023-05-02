RrmSubBlkCdrxMeas::Init - MsgGrpId(%d)
RrmSubBlkCdrxMeas::ManageTimerMrInterval - Start(%d) Duration(%d)
T_MR_INTERVAL is running with [%d]ms duration. [%d]ms remain until expired
RrmSubBlkCdrxMeas::ConfigureCdrxMsg
>>curTimeInMs:%d[ms] cdrxTimeStamp:%d[ms] RemaincdrxDuration:%d[ms] OriginalRemaincdrxDuration:%d[ms]
>>NO CDRX - Prepare irat change runnging(%d)
>>CDRX -> measurement requirement okay
>>CDRX -> MR is okay ( no pending MR at this moment)
>>CDRX -> TTT is okay
>>CDRX -> pending MR is okay (CDRX TRUE)
>>CDRX - CDRX_MR_PENDING (CDRX TRUE) - remainTime:%d
>>NO CDRX - CDRX_TIMER_PENDING (TTT is not okay)
>>NO CDRX - MR sent (MR need to sent now)
>>NO CDRX - Measurement pending(Edge of Measurement requirement)
>>NO CDRX - IsOtherPendingForCdrx
RrmSubBlkCdrxMeas::UpdateTimingOffsetAfterCdrx - TimingOffset:%d
pFreqInfo is not found
>>ServingCell TO updating
>>ServingCell is NULL
>>FOUND - SetType:%s(%d) ObjectId:%d
>>SMTC2 Case - Change TargetSmtcPeriod from (enum):%d to (enum)%d
>>Unexcepted behavior detection.
>>Unexcepted behavior detection.
RrmSubBlkCdrxMeas::CheckMeasSchedule - sleepDurationinMs:%d[ms], curTimeInMs:%d[ms]
>>pFreqInfo is NULL
>>SCell(arfcn:%d, SCS:(enum)%d) is NULL
>>skip checking SCell Schedule(scellStatus:(enum)%d, isMeasInfoEmpty:(bool)%d)
>>Before sorting remainTimeInMsForFreq[Intra]:%d [Inter]:%d [Scell]:%d [Eutra]:%d [Utra]:%d
>>After sorting remainTimeInMsForFreq[0]:%d [1]:%d [2]:%d [3]:%d [4]:%d
RrmSubBlkCdrxMeas::CheckEvalReportForCdrx
>>Entering SMeasureCondition.
>>No filtering and evaluation required
>>MR need to send now.
>>No MR required this time
::PeriodicalReportInterval::reportTriggered is True::MeasID(%d), numberOfReportsSent(0)::_eval_
::First send::MeasID(%d), PeriodicalReportInterval(%d)::_eval_
::PeriodicalReportInterval::reportTriggered is True::MeasID(%d), TimeDiff(%d)::_eval_
::PeriodicalReportInterval::reportTriggered is false::MeasID(%d), TimeDiff(%d)::_eval_
>>RemainTime(%d)::_eval_
::ProcConnEvalReportForDrxCondition::MeasID(%d), Periodical_ReportAmount(%d)::_eval_
::[N2L] ProcConnEvalReportForDrxCondition MeasID(%d), Periodical_ReportAmount(%d)
>>ProcConnEvalReportForDrxCondition::ReportMode(%d)::_eval_[N2L]
RrmSubBlkCdrxMeas::ProcConnEvalReportForDrxCondition
>>ProcConnEvalReportForDrxCondition - MeasID(%d) VarMeasReportList.reportTriggered(%d)
>>TimerMr will stop. because minRemainTime is not setting::_eval_
>>minRemainTime(%d)::_eval_
RrmSubBlkCdrxMeas::IsOtherPendingForCdrx
>>Need first srch/meas for Eutra EvalStatus:(enum)%d
RrmSubBlkCdrxMeas::CheckCdrxRequirementForIntra - CdrxCycle:%d[ms] sleepDurationinMs:%d[ms] curTimeInMs:%d[ms]
>>Unexceptional measState:(bool)%d type:(enum)%d
>>No scheduled srch/meas for intra freq:%d
RrmSubBlkCdrxMeas::CheckCdrxRequirementForInter - CdrxCycle:%d[ms] sleepDurationinMs:%d[ms] curTimeInMs:%d[ms]
>>Unexceptional type:%d(enum)
>>No scheduled srch/meas for inter freq:%d
RrmSubBlkCdrxMeas::CheckCdrxRequirementForScell - CdrxCycle:%d[ms] sleepDurationinMs:%d[ms] curTimeInMs:%d[ms]
>>Unexceptional type:%d(enum)
>>No scheduled srch/meas for SCELL freq:%d
RrmSubBlkCdrxMeas::CheckCdrxRequirementForEutra - CdrxCycle:%d[ms] sleepDurationinMs:%d[ms] curTimeInMs:%d[ms] ModemStatus:%d
>>No scheduled srch/meas for EUTRA ARFCN:%d
RrmSubBlkCdrxMeas::CheckCdrxRequirementForUtra - CdrxCycle:%d[ms] sleepDurationinMs:%d[ms] curTimeInMs:%d[ms] ModemStatus: %d
>>Unexceptional type:%d(enum)
>>No scheduled srch/meas for UTRA ARFCN:%d
>> EUTRA CdrxRequriement Srch %d, Meas %d, GapPeriod %d, CdrxCycle %d, CSSF_S %d, CSSF_M %d,
>> UTRA CdrxRequriement Srch %d, Meas %d, GapPeriod %d, CdrxCycle %d, CSSF_S %d, CSSF_M %d,
