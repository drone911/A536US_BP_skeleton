RrmSubBlkTimeToTrigger::RrmSubBlkTimeToTrigger()
RrmSubBlkTimeToTrigger::~RrmSubBlkTimeToTrigger()
RrmSubBlkTimeToTrigger::Init() - MsgGrpId(%d)
CheckTimeToTrigger - pMeas or pTargetCell NULL
>>CheckTimeToTrigger(MeasId:%d CellId:%d)
>>unexpected EventStatus:%s(%d)
CheckTimeToTriggerEutra - pMeas or pTargetCell NULL
>>CheckTimeToTriggerEutra(MeasId:%d CellId:%d), CurTime %d
>>unexpected EventStatus:%s(%d)
CheckTimeToTriggerUtra - pMeas or pTargetCell NULL
>>CheckTimeToTriggerUtra(MeasId:%d CellId:%d), CurTime %d
>>unexpected EventStatus:%s(%d)
>>FOUND MeasId:%d TttList[%d](Arfcn:%d CellId:%d TimeFromEnter:%d StatePrev:%s(%d))
TimeToTrigger START %s(%d) (MeasId:%d CellId:%d) TimeFrom:%d
>>ADDED MeasId:%d TttList[%d](CellId:%d TimeFromEnter:%d StatePrev:%s(%d)) NumCell:%d
>>FAILED ADD (MeasId:%d CellId:%d) (numOfCellListTimeToTrigger:%d >= MAX_CELL:%d)
>>FAILED ADD (MeasId:%d CellId:%d) (unexpected Status:%s(%d) for StatePrev)
>>REMOVE MeasId:%d TttList[%d](CellId:%d TimeFromEnter:%d StatePrev:%s(%d)) NumCell:%d
>>FAILED REMOVE (MeasId:%d Cellid:%d) (unexpected index:%d numOfCellList:%d)
RrmSubBlkTimeToTrigger::GetTimeToTriggerMs::TimeToTriggerMs[CondEventA3] (%d), contEventA3.TimeToTrigger enum (%d)::_eval_
RrmSubBlkTimeToTrigger::GetTimeToTriggerMs::TimeToTriggerMs[contEventA5] (%d), contEventA5.TimeToTrigger enum (%d)::_eval_
>>EventA1 TimeToTrigger:%d[ms](enum)%d
>>EventA2 TimeToTrigger:%d[ms](enum)%d
>>EventA3 TimeToTrigger:%d[ms](enum)%d
>>EventA4 TimeToTrigger:%d[ms](enum)%d
>>EventA5 TimeToTrigger:%d[ms](enum)%d
>>EventA6 TimeToTrigger:%d[ms](enum)%d
>>Unexpected EventId:(enum)%d on GetTimeToTriggerMs(MeasId:%d MoId:%d RcId:%d)
>>EventB1 TimeToTrigger:%d[ms](enum)%d
>>EventB2 TimeToTrigger:%d[ms](enum)%d
>>EventB1_Utra TimeToTrigger:%d[ms](enum)%d
>>EventB2_Utra TimeToTrigger:%d[ms](enum)%d
>>Unexpected EventIdInterRat:(enum)%d on GetTimeToTriggerMs(MeasId:%d MoId:%d RcId:%d)
>>Unexpected ReportConfig:(enum)%d on GetTimeToTriggerMs(MeasId:%d MoId:%d RcId:%d)
RrmSubBlkTimeToTrigger::TimeToTriggerState
>>MeasID:%d numOfCellListTimeToTrigger:%d
::CellId(%d) - TimeToTrigger ongoing and not expired yet
>>entry to enter - keep entry (MeasId:%d CellId:%d)
>>leaving to enter - stop leaving and start entry (MeasId:%d CellId:%d)
>>unexpected:%s(%d) to enter - remove and start entry (MeasId:%d CellId:%d)
>>none to enter - start entry (MeasId:%d CellId:%d)
>>entry to stay - keep entry (MeasId:%d CellId:%d)
>>leaving to stay - stop leaving (MeasId:%d CellId:%d)
>>unexpected:%s(%d) to stay - remove (MeasId:%d CellId:%d)
>>none to stay - none (MeasId:%d CellId:%d)
DELAY_A3 ABORT (MeasId:%d CellId:%d) due to EVENT_A3 leaving
>>entry(ongoing) to leaving - stop entry (MeasId:%d CellId:%d)
>>entry(expired) to leaving - stop entry and start leaving (MeasId:%d CellId:%d)
>>leaving to leaving - keep leaving (MeasId:%d CellId:%d)
>>unexpected:%s(%d) to leaving - remove (MeasId:%d CellId:%d)
>>none to leaving - none (MeasId:%d CellId:%d)
>>expired on leaving - remove (MeasId:%d CellId:%d)
TimeToTrigger already expired %s(%d) (MeasId:%d CellId:%d) (TimeFrom:%d TTT:%d offset:%d)
TimeToTrigger EXPIRED %s(%d) (MeasId:%d CellId:%d) (TimeFrom:%d TTT:%d offset:%d)
TimeToTrigger CurTime:%d, RealTimeDiff %d)
TimeToTrigger EXPIRED for MODEM_STATUS_EXTREME %s(%d) (MeasId:%d CellId:%d) (TimeFrom:%d TTT:%d offset:%d)
TimeToTrigger CurTime:%d, RealTimeDiff %d)
TimeToTrigger not expired %s(%d) (MeasId:%d CellId:%d) (TimeFrom:%d TTT:%d offset:%d)
TimeToTrigger CurTime:%d, RealTimeDiff %d)
>>DELAY_A3 condition:%s(%d) (MeasId:%d CellId:%d)
>>serving(rsrp:%d sinr:%d) ncell(rsrp:%d sinr:%d) rsrp_offset:%d sinr_thresh:%d
DELAY_A3 START (MeasId:%d CellId:%d) TimeDiff:%d extendedTTT:%d(original:%d)
DELAY_A3 EXPIRED (MeasId:%d CellId:%d) TimeDiff:%d extendedTTT:%d
DELAY_A3 STOP (MeasId:%d CellId:%d) TimeDiff:%d not expired but DELAY_A3 leaving
