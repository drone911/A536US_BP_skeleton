RrmCellGrpScheduleInfoNr::RrmCellGrpScheduleInfoNr
RrmCellGrpScheduleInfoNr::~RrmCellGrpScheduleInfoNr
RrmCellGrpScheduleInfoNr::Init MsgGrpId %d
#### DeleteAllMeasSchedule
RrmCellGrpScheduleInfoNr::DeleteEutraMeasSchedule SlotIndex:%d
RrmCellGrpScheduleInfoNr::DeleteEutraMeasScheduleUsingObjectId :%d
Found and change Eutra schedule data for ObjectId (%d)
RrmMngrScheduleInfoNr::DeleteUtraMeasScheduleUsingObjectId :%d
Found and change Utra schedule data for ObjectId (%d)
RrmCellGrpScheduleInfoNr::DeleteNrMeasSchedule Index:%d
Found and change schedule data for ObjectId (%d)
RrmCellGrpScheduleInfoNr::DeleteMeasSchedule
Invalid DrxConfig (%d). Setup Search / Measure cycle forcibily.
>>Before coefficient: (ServingCell MeasCycle %d[ms]), (Intra Srch %d[ms], Meas %d[ms]), (Inter Srch %d[ms], Meas %d[ms]) (Higher Priority Mode Srch %d[ms], Meas %d[ms])
>>Apply coefficient : (ServingCell MeasCycle %d[ms]), (Intra Srch %d[ms], Meas %d[ms]), (Inter Srch %d[ms], Meas %d[ms]) (Higher Priority Mode Srch %d[ms], Meas %d[ms])
RrmNrIdle_DRXUpdateForHst - Invalid DrxCycleLength:%d[ms] - Set default(320ms)
>>DrxCycle:%d[ms]/COEF(2) - HstIntra Srch(%d):%d[ms] Meas(%d):%d[ms] Eval(%d):%d[ms]
>>DrxCycle:%d[ms]/COEF(2) - HstEutra Srch(%d):%d[ms] Meas(%d):%d[ms] Eval(%d):%d[ms]
GetMeasSlotInfoForCsiRs - unexpected MeasSlot:%d MAX_MEAS_SLOT_INFO_CSI:%d
SetMeasSlotInfoForCsiRs - unexpected MeasSlot:%d MAX_MEAS_SLOT_INFO_CSI:%d
RrmCellGrpScheduleInfoNr::CheckifMeasurePerformed ListStucture:(bool)%d
>>Reschedule is FALSE in List ObjectId:%d MeasFreqType:(enum)%d
>>Measurement is in operation. SlotInfo(%d) ObjectId(%d)
RrmCellGrpScheduleInfoNr::CheckQuickCdrx
>>FALSE for quick CDRX cause m_SetEvalDone :%d(bool) or null for Serving or intrafreq
>>QuickCdrx result:%d(bool)
RrmCellGrpScheduleInfoNr::SetEvalDone %d -> %d
>>QuickCdrx disabled by CellId:%d
RrmCellGrpScheduleInfoNr::AddMeasScheduleList:FreqType:(enum)%d ObjectId:%d
RrmCellGrpScheduleInfoNr::RemoveMeasScheduleList ObjectId:%d
>>Removed in List ObjectId:%d MeasFreqType:(enum)%d
RrmCellGrpScheduleInfoNr::SetReScheduleForAll enable:%d
>> Reschedule for SERV
>> Reschedule for MO:%d
>> Reschedule for MO:%d, ReScheduleSrch %d, ReScheduleMeas %d
>> Reschedule for UTRA MO:%d
RrmCellGrpScheduleInfoNr::CopyMeasScheduleList
PrintMeasScheduleList#1: %d -> %d -> %d -> %d -> %d -> %d -> %d
PrintMeasScheduleList#2: %d -> %d -> %d -> %d -> %d -> %d -> %d
RrmCellGrpScheduleInfoNr::CheckAvailableMeasSchedule Freq:(enum)%d
>>Error case for TargetMeasFreq:(enum)%d
>>Error case for TargetMeasFreq:(enum)%d
>>RetValue:%d Intracnt:%d Intercnt:%d Scellcnt:%d Eutracnt:%d Utracnt:%d
>>GetAllStopRunning retValue:%d m_AllStopRunning:%d OriValue:%d
RrmCellGrpScheduleInfoNr::SetAllStopRunning SetAsNum:%d(bool)
SetRelaxMeasMode Prev:%d -> New:%d
CheckNewCellToSchedule
>>BD/First measure TargetCell:%d is in CandiListed cell set Freq:%d ObjectId:%d
>>BD/First measure TargetCell:%d is in CandiDetected cell set Freq:%d ObjectId:%d
CheckNewCellToScheduleForEutra
>>Need measure TargetCell:%d is in CandiListed cell set Freq:%d
>>Need measure TargetCell:%d is in CandiDetected cell set Freq:%d ObjectId:%d
Eutra ObjectId:%d ScheduleOngoing:%d LastMeasType:%d
CheckRunningEutraSrchMeas retValue:%d SrchSchedule:%d MeasSchedule:%d
RrmCellGrpScheduleInfoNr::AddMeasScheduleListFront:FreqType:(enum)%d ObjectId:%d
RrmCellGrpScheduleInfoNr::DisableReScheduleForIdleEutra
RrmCellGrpScheduleInfoNr::ResetAgcIfNoVaildEutraCell
RrmCellGrpScheduleInfoNr::CheckEutraCellExist
RrmMngrScheduleInfoNr::AddListPosMeasConfig - transactionNumber:%d, reportingAmount:%d reportingInterval:%d TimeEarlyFix:%d
RrmMngrScheduleInfoNr::GetPosMeasConfig - transactionNumber:%d
>>Found in List transactionNumber:%d ecidPresent:(enum)%d
>>Not Found in List transactionNumber:%d
RrmMngrScheduleInfoNr::GetPosMeasConfig - transactionNumber:%d
>>Found and change transactionNumber:%d ecidPresent:(enum)%d ReportAmount:%d
RrmMngrScheduleInfoNr::RemovePosMeasConfigList transactionNumber:%d or deleteAll:(bool)%d
>>Removed in List transactionNumber:%d ecidPresent:(enum)%d
