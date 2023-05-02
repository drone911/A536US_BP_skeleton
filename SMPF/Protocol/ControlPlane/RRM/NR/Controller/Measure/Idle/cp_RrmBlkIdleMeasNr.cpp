RrmBlkIdleMeasNr::GetFreqInfo MeasType(%d), MeasObjectId(%d)
>>Found ServingCell freqMeasObjectId %d return IntraFreqInfo
>>Found FreqInfo %d freqMeasObjectId %d
>>Found FreqInfo %d freqMeasObjectId %d in INTER-FREQ LIST
Unexpected MeasType(%d)
>>Not Found MeasType (%d) MeasObjectId(%d) in INTER-FREQ LIST
[IDLEMEAS] MEAS_Result MeasType:%s(%d) MeasObjectId:%d NumResult:%d
>>pFreqInfo is not found
Skip UpdateAgcGain in MEAS. AgcGain[0] : %d, AgcGain[1] : %d.
numCellResult:%d - Msg.NR.NumResult:%d MAX_NUM_MEAS_CELL:%d
SsbMeasResult[%d] - Find CellId:%d from DB
>>FOUND - SERVING
>>StoreSsbMeasResult - SERVING
NumSsbIndex:%d SsbBitmap:0x%08x %08x
>>NOT FOUND - SERVING
>>NOT FOUND - pCellInfo is NULL. NEIGHBOUR SetType:%s(%d) ObjectId:%d
>>FOUND - NEIGHBOUR SetType:%s(%d) ObjectId:%d
UpdateMeasResultNeighbour - Arfcn:%d CellId:%d SetType:%s(%d) ObjectId:%d
BLIND DETECTION RESULT - SsbIndex:%d
[DeriveSsbIndexFromCell] MEAS RESULT(ARFCN:%d PCID:%d) Failed verify SsbIndex
[DeriveSsbIndexFromCell] MEAS RESULT(ARFCN:%d PCID:%d) - ssbIndexDerived:%d
>>Invalid SsbIndex:%d maxNrOfRsIndex:%d
MEASUREMENT RESULT - numSsbIndex:%d
>>MOVE CELL - current_set_type:%s(%d) target_set_type:%s(enum)%d
::MOVED
::FAILED
>>current_set_type:%s(%d)
INVALID CASE
StoreSsbMeasResult - NEIGHBOUR
NumSsbIndex:%d SsbBitmap:0x%08x %08x
>>SSB ncell(ARFCN:%d PCID:%d SetType:%s(%d)) - sizeOfMeasResultList:%d
pFreqInfo is not found
[IDLEMEAS] SRCH_Result MeasType:%s(%d) SsbFreq:%d ObjectId:%d NumResult:%d
Skip UpdateAgcGain in SRCH. AgcGain[0] : %d, AgcGain[1] : %d.
SsbSrchResult[%d] - Find CellId:%d from DB
>>FOUND - SERVING
JUMP SsbSrchResult[%d] to SsbSrchResult[%d]
>>NOT FOUND - SERVING
>>FOUND - INVALID NEIGHBOUR(BLACKCELL) ObjectId:%d
JUMP SsbSrchResult[%d] to SsbSrchResult[%d]
>>NOT FOUND - NEIGHBOUR SetType:%s(%d) ObjectId:%d
>>FOUND - NEIGHBOUR SetType:%s(%d) ObjectId:%d
>>UPDATE TIMING OFFSET DELTA with BEST
JUMP SsbSrchResult[%d] to SsbSrchResult[%d]
[DeriveSsbIndexFromCell] SRCH RESULT(ARFCN:%d PCID:%d) Failed derive SsbIndex
[DeriveSsbIndexFromCell] SRCH RESULT(ARFCN:%d PCID:%d) - ssbIndexDerived:%d
>>NEW CELL - NEIGHBOUR
Fail to allocate pCellInfo
JUMP SsbSrchResult[%d] to SsbSrchResult[%d]
>>ADD CELL BandId:%d SsbAbsFreq:%d SCS:%d CellId:%d - target_set_type:%s ObjectId:%d
::FAILED
>>FOUND - NEIGHBOUR SetType:%s(%d) ObjectId:%d
JUMP SsbSrchResult[%d] to SsbSrchResult[%d]
>>MOVE CELL - target_set_type:%s(%d) ObjectId:%d
::FAILED
RrmBlkIdleMeasNr::UpdateMeasSlotInfo
>>ObjectId:%d
[SLOTINFO] Update MeaslostInfo for ServingCell Only
>>Abnormal ObjectId %d removed
[SLOTINFO] Need to Check. There is no matched FreqInfo with result
>>Loop Break Warning rMsg.Msg.Nr.ObjectId:%d is not matched with ObjectId:%d
RrmBlkIdleMeasNr::ConfigureMeasReq
>>Fatal Error: pMeasReq or pConfigureMeasReq is NULL
INVALID SelectedMeasFreq %d
[IDLEMEAS] IRAT REQUEST INFO MeasType:%s(%d), SsbFreq(%d), MeasObjectId(%d), NumLteMeasInput(%d)
[IDLEMEAS] REQUEST INFO RatType : %d, MeasType:%s(%d), SsbFreq(%d), MeasObjectId(%d), NumSsbMeasInput(%d)
RrmBlkIdleMeasNr::StoreMeasResult MeasType: %s(%d) rMsg.Result:(enum)%d
>>Skip UpdateMeasResult - rMsg.Result:(enum)%d
[IDLEEVAL] ServingCell measurement is ongoing. Skip Evaluation.
[IDLEEVAL] INTRA FREQUENCY measurement is ongoing. Skip Evaluation.
[IDLEEVAL] INTER FREQUENCY measurement is ongoing. Skip Evaluation.
[IDLEEVAL] IRAT FREQUENCY measurement is ongoing. Skip Evaluation.
[IDLEEVAL] RESEL is Triggered. Do not enter the SLEEP state
RrmBlkIdleMeasNr::DeriveSsbIndexUsingBdResult - ARFCN:%d PCID:%d BdResultSsbIndex:%d
>>VERIFY ssbIndexDerived:%d(3bit:%d) with BdResultSsbIndex:%d(3bit:%d)
>>VERIFIED - set ssbIndexDerived:%d
>>NOT MATCHED - set RRM_UNKNOWN_RSINDEX:%d
>>UNKNOWN - set BdResultSsbIndex:%d
RrmBlkIdleMeasNr::DeriveSsbIndexUsingSrchResult - SrchResultSsbTimingOffset:%d
>>pTargetCell is NULL or pServingCell is NULL
>>tolerence:%d - twoSsbSymbolLength:%d(SCS:(enum)%d) onePdschSymbolLength:%d(SCS:(enum)%d)
>>FreqPeriodic %d, CellPeriodic %d, (enum)SelectedPeriodicity %d
RrmBlkIdleMeasNr::UpdateTimingOffsetAfterdrx - TimingOffset:%d
pFreqInfo is not found
>>ServingCell TO updating
>>ServingCell is NULL
>>FOUND - SetType:%s(%d) ObjectId:%d
>>Unexcepted behavior detection.
>>Unexcepted behavior detection.
>>End of UpdateTimingOffsetAfterCdrx
RrmBlkIdleMeasNr::MakePbchDecodeReq
[INITSM] PcellPtr / IntraFreqPtr is not exist
[INITSM] Free InitSrchMeasFlag for FREQ %d
[IDLEEVAL] INTER FREQUENCY %d Priority %d AvailEval FALSE.
[IDLEEVAL] EUTRA FREQUENCY %d Priority %d AvailEval FALSE.
>>[IDLEEVAL] Condition of INTRA FREQ %d
>>[IDLEEVAL] Condition of NR INTER FREQ HighP %d, EqualP %d, LowerP %d
>>[IDLEEVAL] Condition of EUTRA FREQ HighP %d, EqualP %d, LowerP %d
>>pIntraFreqInfo::0x%08x or pServCellInfo::0x%08x is NULL
>> VALID NR CELL FOR EARLY MEASURE. CellId %d
>>SetDoSrchLowSinrFlag TRUE
RrmSubBlkIratMeas::GetEutraFreq
pEutraFreqInfo is not found
>>NRRRM.NR_IDLE_SLEEP_ENABLE %d Skip Sleep operation
Idle-LocalMeasScheduleList#1: %d -> %d -> %d -> %d -> %d -> %d -> %d
Idle-LocalMeasScheduleList#2: %d -> %d -> %d -> %d -> %d -> %d -> %d
RrmBlkIdleMeasNr::ScheduleAgainForIntraDetectedCell()
>>STOP SCHEDULING AGAIN(INTRA) DUE TO SintraSearchP/Q
>>TRY SCHEDULING AGAIN(INTRA - NEW DETECTED) ObjectId %d
RrmBlkIdleMeasNr::GetObjIDIntraFreqHasNewCell()
RrmBlkIdleMeasNr::GetObjIDIntraFreqHasNewCell() CheckMeasSchedule.MeasureOngoing %d
RrmBlkIdleMeasNr::GetObjIDIntraFreqHasNewCell(), PCELL is not vaild
