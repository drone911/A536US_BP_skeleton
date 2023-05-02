>>Wrong type of Reschedule need to check MeasScheduleInfo.LastMeasType
>>ReviseDiffTimeForReSchedule Prev TimeDiff:%d(ms) New TimeDiff:%d(ms) MeasScheduleInfo.LastMeasType:%d(enum)
GetFreqInfoForConn MeasType(%d), MeasObjectId(%d)
RrmBlkConnMeasNr::GetFreqInfo - pServCellGroupInfoNr is invalid
RrmBlkConnMeasNr::GetFreqInfo - Unexpected MeasType(%d)
RrmBlkConnMeasNr::GetFreqInfo - MeasObjectId(%d) is not found
>>Abnormal PeriodicityAndOffsetChoice
>>SmtcPeriod:%d[ms] IsSearch:(bool)%d Selected margin:%d[ms]
>>Valid MeasCycleScell found(%d)ms
>>MeasCycleScell not found! Set to default value (%d)ms
>>M_pss_sss_sync_wo_gaps set to %d for Power Class(%d) of SCell Freq(%d)
>>SCell Srch Requirement:%d[ms] exclude Margin:%d[ms] - FR2, MeasCycleScell(%d ms)
>>Under320 Srch Requirement:%d[ms] exclude Margin:%d[ms] - FR2 Exceptional case
>>Over 320 Srch Requirement:%d[ms] exclude Margin:%d[ms] - FR2 Exceptional case
>>Valid MeasCycleScell found(%d)
>>MeasCycleScell not found! Set to default value (%d)
>>SCell Srch Requirement:%d[ms] exclude Margin:%d[ms] - FR1, MeasCycleScell(%d ms)
RrmSubBlkCommon::GetSrchRequirement - freqType:(enum)%d CdrxCycle:%d[ms] ModemStatus:%d
>>No SMTC information, set periodicity as SF5
>>Exceptional CdrxCycle:%d[ms] set CdrxRequirement as CdrxCycle
>>Srch requirement FR2:%d FreqType:(enum)%d Requirement:%d[ms] exclude Margin:%d[ms] ModemStatus:%d CssfSrch:%d
>>Valid MeasCycleScell found(%d)ms
>>MeasCycleScell not found! Set to default value (%d)ms
>>M_meas_period_wo_gaps set to %d for Power Class(%d) of SCell Freq(%d)
>>SCell Meas Requirement:%d[ms] exclude Margin:%d[ms] - FR2, MeasCycleScell(%d ms)
>>Valid MeasCycleScell found(%d)
>>MeasCycleScell not found! Set to default value (%d)
>>SCell Meas Requirement:%d[ms] exclude Margin:%d[ms] - FR1, MeasCycleScell(%d ms)
>>Under320 Meas Requirement:%d[ms] exclude Margin:%d[ms] - FR1 Exceptional case
>>Over 320 Meas Requirement:%d[ms] exclude Margin:%d[ms] - FR1 Exceptional case
RrmSubBlkCommon::GetMeasRequirement - freqType:(enum)%d CdrxCycle:%d[ms] ModemStatus:%d
>>No SMTC information, set periodicity as SF5
>>Exceptional CdrxCycle:%d[ms] set CdrxRequirement as CdrxCycle
>>Meas requirement FR2:%d FreqType:(enum)%d Requirement:%d[ms] exclude Margin:%d[ms] ModemStatus:%d CssfMeas:%d
RrmSubBlkCommon::CheckMoIntegrity SlotObjectId(%d)
RrmSubBlkCommon::UpdateLastSrchTime
>>Reschedule Srch for ObjectId:%d ( No update )
RrmSubBlkCommon::UpdateLastMeasTime
>>Reschedule Meas for ObjectId:%d ( No update )
RrmBlkConnMeasNr::UpdateSsbConfigNrForConn
>>ServingPeriod:%d[ms] SmtcPeriod:%d[ms]
>>Change Periodicity from %d[ms] to %d[ms]
>>InRequestSsbToMeasure:[1]0x%08x[0]0x%08x SsbPositionInburst:[1]0x%08x[0]0x%08x
>>BandId:%d SsbFrequency:%d SubcarrierSpacing:(enum)%d Periodicity:%d[ms]
>>NumSsbToMeasure:%d SsbToMeasure:[1]0x%08x[0]0x%08x
>>SmtcIncluded:(bool)%d Smtc.Offset:%d[ms] Smtc.Duration:%d[ms] SsRssiMeasurementIncluded:(bool)%d
>>SsbMeasInput is FULL(MAX_NUM_MEAS_CELL:%d)
RrmBlkConnMeasNr::AddAsetToMo amount (%d)
>>SsbMeasInputList - CellId:%d SetType:%s(%d) SsbRsrp:%d
>>SsbMeasInput[%d] - CellId:%d SetType:%s(%d) SsbRsrp:%d
>>AddNCellToMo amount:%d
>>AddNCellToMo(SMTC2) amount:%d
RrmBlkConnMeasNr::CheckCdrxTimeDiff SrchRequirement:%d[ms] MeasRequirement:%d[ms] SrchTimeDiff:%d[ms] MeasTimeDiff:%d[ms] checkSrch:(bool)%d checkMeas:(bool)%d
::Srch Requirement Okay
::Srch Requirement not Okay
::Meas Requirement Okay
::Meas Requirement not Okay
CheckMeasReservedFlag SrchRequirement:%d[ms] MeasRequirement:%d[ms] SrchTimeDiff:%d[ms] MeasTimeDiff:%d[ms] checkSrch:(bool)%d checkMeas:(bool)%d
::MeasReserved TRUE by SRCH
::MeasReserved TRUE by MEAS
RrmBlkConnMeasNr::CheckMeasCycle
>>CheckMeasCycle curTimeInMs:%d[ms] MeasCycle:%d[ms] LastMeasTime:%d[ms] IsSmtc2:(bool)%d
>>CheckMeasCycle TimeDiff:%d[ms] Result:(bool)%d
>>CheckSrchCycle curTimeInMs:%d[ms] SrchCycle:%d[ms] LastSrchTime:%d[ms]
>>CheckSrchCycle TimeDiff:%d[ms] Result:(bool)%d
RrmSubBlkIntraMeas::CheckNewCellToSchedule
>>BD/First measure TargetCell:%d is in CandiListed cell set Freq:%d ObjectId:%d
>>BD/First measure TargetCell:%d is in CandiDetected cell set Freq:%d ObjectId:%d
