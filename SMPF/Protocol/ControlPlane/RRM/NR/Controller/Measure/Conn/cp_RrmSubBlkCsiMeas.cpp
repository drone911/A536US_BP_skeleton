RrmSubBlkCsiMeas::Init() - MsgGrpId(%d)
RrmSubBlkCsiMeas::UpdateCsiConfig - MeasObjectId:%d
>>Failed to GetCsiRsFreqInfo for MeasObjectId:%d
>>BandId:%d RefFreqCsiRs:%d SubCarrierSpacingCsiRs:(enum)%d RefServCellIndex:%d
>>pServCell is nullptr
RrmSubBlkCsiMeas::UpdateMeasSlotInfoForCsiRs - ObjectId:%d
>>SlotInfo[%d] - ObjectId:%d
>>Failed to GetMeasScheduleInfoForCsiRs
>>pFreq is nullptr
RrmSubBlkCsiMeas::UpdateMeasResultForCsiRs - MeasType:%s(%d) MeasObjectId:%d NumResult:%d
>>pFreqInfo is not found or result is failed
numCellResult:%d - Msg.NR.NumResult:%d MAX_NUM_MEAS_CELL:%d
CsiMeasResult[%d] - Find CellId:%d from DB
>>FOUND - PCELL
>>NOT FOUND - PCELL
>>FOUND - SCELL (CellId:%d MeasObjectId:%d)
>>Failed to GetServCellGroupInfoNr
>>NOT FOUND - SCELL
>>NOT FOUND - NEIGHBOUR CSI-RS SetType:%s(%d) ObjectId:%d
>>FOUND - NEIGHBOUR CSI-RS SetType:%s(%d) ObjectId:%d
>>MOVE CELL - CSI-RS set_type_index:%s(%d) target:%s(enum)%d
::MOVED
::FAILED
>>CSI-RS ncell(ObjectId:%d PCID:%d SetType:%s(%d)) - sizeOfMeasResultList:%d
RrmSubBlkCsiMeas::CheckMeasRequiredForCsiRs - ScheduleOngoing:(bool)%d MeasCycle:%d LastMeasTimeInMs:%d CurTimeInMs:%d
>>bMeasRequired:(bool)%d - ScheduleOngoing:(bool)%d timeDiff:%d[ms]
RrmSubBlkCsiMeas::UpdateCsiMeasInput - CellId:%d MeasObjectId:%d
>>Failed to GetCsiRsCellInfo for CellId:%d
>>CellInfo.CsiRsResource[%d] - CsiRsIndex:%d AssociatedSsbIndex:%d - AssociatedSsb found, update CsiMeasInput.CsiRsResource[%d]
>>CellInfo.CsiRsResource[%d] - CsiRsIndex:%d AssociatedSsbIndex:%d - AssociatedSsb not found
>>bValid:(bool)%d - CsiMeasInput.CsiRsResourceListMobilityCnt:%d
RrmSubBlkCsiMeas::UpdateCsiMeasReq - ObjectId:%d
>>pFreq is nullptr - measObjectId:%d
>>CsiConfig - BandId:%d RefFreqCsiRs:%d SubcarrierSpacing:%d
>>CsiConfig - AssociatedSsbFrequency:%d AssociatedSsbSubcarrierSpacing:%d AssociatedSsbPeriodicity:%d
>>CsiConfig - RefServCellSsbFrequency:%d RefServCellSsbSubcarrierSpacing:%d RefServCellSsbPeriodicity:%d
>>Failed to UpdateCsiConfig
>>CsiMeasInput[%d] - CellId:%d CsiRsResourceListMobilityCnt:%d
>>Failed to AllocMsgBodyElem
>>Failed to UpdateCsiMeasInput
>>bValid:(bool)%d NumCsiMeasInput:%d
