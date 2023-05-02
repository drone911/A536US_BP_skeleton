RrmBlkConnUpdateHandler::UpdateMeasResult - MsgGrpId(%d)
RrmBlkConnUpdateHandler::UpdateMeasResult - MeasType:%s(%d) MeasObjectId:%d NumResult:%d
>>pFreqInfo is not found
Skip UpdateAgcGain in MEAS. AgcGain[0] : %d, AgcGain[1] : %d.
numCellResult:%d - Msg.NR.NumResult:%d MAX_NUM_MEAS_CELL:%d
SsbMeasResult[%d] - Find CellId:%d from DB
>>FOUND - PCELL
>>NumSsbIndex:%d SsbBitmap:0x%08x %08x
>>NOT FOUND - PCELL
>> Update SCell Meas Result
>>Update SCell MeasResults for [SsbAbsFreq %d SCS %d CellId(%d)] of SsbMeasResult(%d) is found in SCell with MeasObj(%d)
>>NumSsbIndex:%d SsbBitmapFromServ:0x%08x %08x
::StoreSsbMeasResult - SCell
::Initial SCell Meas Result Updated!!!!
>> pServCellGroupInfoNr is invalid!!!!
>> CellId(%d) of SsbMeasResult(%d) is not found in Aset, SCellset. Find cell set also
>>NOT FOUND - NEIGHBOUR SetType:%s(%d) ObjectId:%d
>>FOUND - NEIGHBOUR SetType:%s(%d) ObjectId:%d
RrmBlkConnUpdateHandler::UpdateMeasSlotInfo
>>ObjectId:%d
::MeasScheduleInfo.LastMeasType (enum)%d CNF Meastype (enum)%d
>>Abnormal ObjectId %d removed
>>rMsg.Msg.Nr.ObjectId:%d ObjectId:%d
>>Loop Break Warning rMsg.Msg.Nr.ObjectId:%d is not matched with ObjectId:%d
UpdateMeasResultNeighbour - Arfcn:%d CellId:%d SetType:%s(%d) ObjectId:%d
BLIND DETECTION RESULT - SsbIndex:%d
[DeriveSsbIndexFromCell] MEAS RESULT(ARFCN:%d PCID:%d) Failed verify SsbIndex
[DeriveSsbIndexFromCell] MEAS RESULT(ARFCN:%d PCID:%d) - ssbIndexDerived:%d
>>Invalid SsbIndex:%d maxNrOfRsIndex:%d
>> PBCH Needed, Trigger PBCH DECODE REQ
>>No Cell found to PBCH DECODE REQ
>> Freq:%d ObjectId:%d PBBCH ONGOING from %d
>> Fr2 Freq:%d ObjectId:%d PBBCH ONGOING from %d but status is not initialized.
MEASUREMENT RESULT - numSsbIndex:%d
>>MOVE CELL - current_set_type:%s(%d) target_set_type:%s(enum)%d
::FAILED
>>current_set_type:%s(%d)
INVALID CASE
StoreSsbMeasResult - NEIGHBOUR
>>SSB ncell(ARFCN:%d PCID:%d SetType:%s(%d)) - sizeOfMeasResultList:%d
RrmBlkConnUpdateHandler::UpdateNrObjectCheckCnf - NrMeasType(%d)
SendMsg is NULL
RrmBlkConnUpdateHandler::UpdateNrObjectCheckCnf - [%d] CellId(%d) SsbTimeingOffset(%d) SsbCnt(%d) RSRP(%d) RSRQ(%d) SINR(%d)
RrmBlkConnUpdateHandler::UpdateNrObjectCheckCnf - beamIndex(%d) RSRP(%d) RSRQ(%d) SINR(%d)
RrmBlkConnUpdateHandler::UpdateSrchResult
pFreqInfo is not found
Skip UpdateAgcGain in SRCH. AgcGain[0] : %d, AgcGain[1] : %d.
>>SsbSrchResult[%d] - Find CellId:%d from DB
>>NOT FOUND - PCELL
[DeriveSsbIndexFromCell] SRCH RESULT(ARFCN:%d PCID:%d) Failed derive SsbIndex
[DeriveSsbIndexFromCell] SRCH RESULT(ARFCN:%d PCID:%d) - ssbIndexDerived:%d
RrmBlkConnMeasNr::UpdateSrchResult
pFreqInfo is not found
>>SsbSrchResult[%d] - Find CellId:%d from DB
>> Update SCell SRCH Result
>>NOT FOUND - SCELL
[DeriveSsbIndexFromSCell] SRCH RESULT(ARFCN:%d PCID:%d) Failed derive SsbIndex
[DeriveSsbIndexFromCell] SRCH RESULT(ARFCN:%d PCID:%d) - ssbIndexDerived:%d
>> InitSrchMeasFlag.Srch = TRUE
RrmBlkConnMeasNr::DeriveSsbIndexUsingSrchResult - SrchResultSsbTimingOffset:%d
>> Invalid Ptr Received pServCellGroupInfoNr(0x%x)
>> Invalid Ptr Received pSCellInfo(0x%x)
>>tolerence:%d - twoSsbSymbolLength:%d(SCS:(enum)%d) onePdschSymbolLength:%d(SCS:(enum)%d)
>>(enum)FreqPeriodic %d, (enum)CellPeriodic %d, (enum)SelectedPeriodicity %d
>>NOT FOUND - NEIGHBOUR SetType:%s(%d) ObjectId:%d
>>FOUND - NEIGHBOUR SetType:%s(%d) ObjectId:%d
>>UPDATE TIMING OFFSET DELTA with BEST
>>SMTC2 Case - Change TargetSmtcPeriod from (enum):%d to (enum)%d
JUMP SsbSrchResult[%d] to SsbSrchResult[%d]
RrmBlkConnUpdateHandler::GetTODiffCause
>> Error : pTargetCellInfoPtr or pPCellInfo is NULL
>> PCell-BandId : %d, TargetCell-BandId : %d
>> PCell-SCS : %d, TargetCell-SCS : %d
>> retTODiffCause : %d
RrmBlkConnUpdateHandler::UpdateSrchResultForScell
>> Invalid Ptr Received pSCellFreqInfo(0x%x) pServCellGroupInfoNr(0x%x)
>> JUMP SsbSrchResult[%d] to SsbSrchResult[%d]
>> Update MeasObjId %d SCell CellId %d - SsbTimingOffset %d CellCorrEngery %d SetType %d
>> No SCell available on this freq(SsbAbsFreq %d, Scs %d)
>> No SCell available on this freq(SsbAbsFreq %d, Scs %d)
>>NEW CELL - NEIGHBOUR
Fail to allocate pCellInfo
JUMP SsbSrchResult[%d] to SsbSrchResult[%d]
>>ADD CELL BandId:%d SsbAbsFreq:%d SCS:%d CellId:%d - target_set_type:%s ObjectId:%d
::ADDED
::FAILED
>>FOUND - NEIGHBOUR SetType:%s(%d) ObjectId:%d
JUMP SsbSrchResult[%d] to SsbSrchResult[%d]
>>MOVE CELL - target_set_type:%s(%d) ObjectId:%d
::FAILED
>>NEW CELL - NEIGHBOUR
Fail to allocate pCellInfo
>>SMTC2 Case - Change period to (enum)%d and samplemax:%d OriTO:%d NewTO:%d
JUMP SsbSrchResult[%d] to SsbSrchResult[%d]
>>ADD CELL BandId:%d SsbAbsFreq:%d SCS:%d CellId:%d - target_set_type:%s ObjectId:%d
::FAILED
>>FOUND - NEIGHBOUR SetType:%s(%d) ObjectId:%d
>>SMTC2 Case - Change period to (enum)%d and samplemax:%d OriTO:%d NewTO:%d
JUMP SsbSrchResult[%d] to SsbSrchResult[%d]
>>MOVE CELL - target_set_type:%s(%d) ObjectId:%d
::FAILED
>>FOUND - PCELL
JUMP SsbSrchResult[%d] to SsbSrchResult[%d]
RrmBlkConnUpdateHandler::MakePbchDecodeReq
>> No cell for PBCH DECODE REQ
RrmBlkConnUpdateHandler::DeriveSsbIndexUsingSrchResult - SrchResultSsbTimingOffset:%d
>>pTargetCell is NULL or pServingCell is NULL
>>tolerence:%d - twoSsbSymbolLength:%d(SCS:(enum)%d) onePdschSymbolLength:%d(SCS:(enum)%d)
>>(enum)FreqPeriodic %d, (enum)CellPeriodic %d, (enum)SelectedPeriodicity %d
RrmBlkConnUpdateHandler::DeriveSsbIndexUsingBdResult - ARFCN:%d PCID:%d BdResultSsbIndex:%d
>>VERIFY ssbIndexDerived:%d(3bit:%d) with BdResultSsbIndex:%d(3bit:%d)
>>VERIFIED - set ssbIndexDerived:%d
>>NOT MATCHED - set RRM_UNKNOWN_RSINDEX:%d
>>UNKNOWN - set BdResultSsbIndex:%d
RrmBlkConnUpdateHandler::PrintSrchResult
pFreqInfo is not found
>>MeasType:%s(%d) SsbFreq:%d ObjectId:%d NumResult:%d
>>[DEBUG-SRCH] SSBIDX(%d) TimingOffsetFromPCell(%d)
RrmBlkConnUpdateHandler::FindSameCellCnt - StartIdx:%d
