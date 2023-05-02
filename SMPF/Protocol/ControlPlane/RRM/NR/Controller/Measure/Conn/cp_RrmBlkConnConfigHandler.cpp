RrmBlkConnConfigHandler::ConfigureMeasReq SelectedFreqType:(enum)%d, ObjectId:%d , Reschedule:(bool)%d
>>pMeasReq is NULL
>>Intra Scheduling is skipped.
>>Intra-F scheduled
>>Inter-F Meas Scheduling is skipped.
>>Inter-F Meas scheduled
>>SCell Scheduling is skipped.
>>SCell scheduled
>>SelectedFreqType:%d is full count:%d
>>MesaReq configured MeasType(%d), MeasObjectId(%d), NumSsbMeasInput(%d)
RrmBlkConnConfigHandler::ConfigureMeasReqForEutra measType:%d
>>pMeasReq is NULL
RrmBlkConnConfigHandler::ConfigureMeasReqForUtra
>>pMeasReq is NULL
RrmBlkConnConfigHandler::ConfigureMeasReqForCsiRs - CsiMeasSlotIndex:%d
>>csiMeasSlotInfo - CsiMeasSlotIndex:%d MeasType:%s(%d) ObjectId:%d
>>csiMeasSlotInfo is occupied
>>Check CSI-RS meas - INTRA MeasObjectId:%d CsiMeasSlotIndex:%d
>>CSI-RS meas not configured - Failed to UpdateMeasReqForCsiRs
>>CSI-RS meas not configured - meas not required
>>CSI-RS meas not configured - CSI-RS MeasScheduleInfo is absent
>>CSI-RS meas not configured - Failed to GetPCellFreqPtr
>>Check CSI-RS meas - INTER MeasObjectId:%d CsiMeasSlotIndex:%d
>>CSI-RS meas not configured - Failed to UpdateMeasReqForCsiRs
>>CSI-RS meas not configured - meas not required
>>CSI-RS meas not configured - CSI-RS MeasScheduleInfo is absent
>>UPDATE csiMeasSlotInfo(CsiMeasSlotIndex:%d) and csiMeasScheduleInfo(MeasObjectId:%d)
>>CsiMeasSlotIndex:%d - bConfigured:(bool)%d
RrmBlkConnMeasNr::ConfigureMeasResultInd (LTERRM_RRM_NR_MEAS_RESULT_IND_T)
pMeasResultInd is NULL
pServingCellInfo is NULL
>> Cannot allocate memory for pMeasResultInd->req.measresult_ind.NumServingFreq(%d)
pServingCellInfo is NULL
MeasResultCell[%d] pServingCell[%d,%d] servCellIndex(%d)
MeasResultCell[%d] pIdListedCell[%d,%d] servCellIndex(%d)
MeasResultCell[%d] pIdDetectedCell[%d,%d] servCellIndex(%d)
pServCellGroupInfoNr is NULL or NumServingFreq:%d is 0 or 1
>> no SCell found at Arfcn %d SCS %d
MeasResultCell[%d] SCell[%d,%d] servCellIndex(%d)
MeasResultCell[%d] pIdListedCell[%d,%d] servCellIndex(%d)
MeasResultCell[%d] pIdDetectedCell[%d,%d] servCellIndex(%d)
RrmBlkConnConfigHandler::ConfigureMeasResultCell (Lterrm_MeasResultCell_t)
RrmBlkConnConfigHandler::ConfigureMeasResultCell PcellFreq ptr is NULL
>>MeasConfig is absent(measObjectId:%d) - Update RSRP and RSRQ only
