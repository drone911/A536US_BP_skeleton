[IDLEMEAS] TriggerIntraFreqReq pServingCellInfo or pFreqInfo is NULL
>>[InitMeas] Initiate request(SRCH) for INTRA-FREQUENCY. Final(SERV+INTRA-F) MeasType (enum)%d
>>[InitMeas] Initiate request(MEASURE) for INTRA-FREQUENCY. Final(SERV+INTRA-F) MeasType (enum)%d
>>[TimerExpired] Initiate request for INTRA-FREQUENCY. MeasType (enum)%d
[IDLEMEAS] The conditions were not met(Serving and IntraFreq). SKIP Scheduling
[SLOTINFO] ScheduleOngoing of SERV set False because Result of Measurement include INTRA and SERV.
[SLOTINFO] Not proper meas type between MeasScheduleInfo.LastMeasType (%d) CNF Meastype (%d)
>>[SLOTINFO] IntraSrch ObjectId %d removed
[SLOTINFO] Not proper meas type between MeasScheduleInfo.LastMeasType (%d) CNF Meastype (%d)
[SLOTINFO] ScheduleOngoing of SERV set False because Result of Measurement include INTRA and SERV.
>>[SLOTINFO] IntraMeas ObjectId %d removed
>>[SLOTINFO] IntraMeas ObjectId %d removed
[SLOTINFO] Not proper meas type between MeasScheduleInfo.LastMeasType (%d) CNF Meastype (%d)
[IDLEEVAL] ServingCell is not perform Initial Srch/Meas.
[IDLEEVAL] ServingFreq(%d) is not perform Initial Srch/Meas.
[IDLEEVAL] Do eval. ServingFreq(%d) is not considering because SIB2 is not decoding validly
>>Validation of INTRA-FREQ is FAIL due to NULL
>>Validation of INTRA-FREQ is FAIL because SIB is not received yet so Invalid ObjectID is applied
>>Validation of INTRA-FREQ is FAIL because SIB2 is not decoding validly
>>Validation of INTRA-FREQ is FAIL because INTRA-FREQ measurement is ongoing
>>Validation of INTRA-FREQ is FAIL because SERVINGCEll measurement is ongoing
>>Validation of INTRA-FREQ is FAIL. SibFrequency %d, EarlyMeasFrequency %d, IsPerformEarlyMeas %d
[IDLEMEAS] Skip request for INTRA-FREQUENCY because there is no candidate Cell for MEASUREMENT. Go to next Slot
[IDLEMEAS] Change from BOTH to SRCH for INTRA-FREQUENCY because there is no candidate Cell for MEASUREMENT.
>>IsSkipIntraSrchMeas FALSE. pServingCellInfo or pIntraFreqInfo is NULL
>>IsSkipIntraSrchMeas FALSE. ACTIVE EARLY MEAS
>>IsSkipIntraSrchMeas FALSE. Sib1present or SibIntraFreqCellReselectionInfo is NULL
>>Skip INTRA SRCH/MEAS and RemoveCell. Srxlev %d, Squal %d SintraSearchP %d, SintraSearchQ %d ModemStatus:%d
>>Skip INTRA SRCH/MEAS. Srxlev %d, Squal %d SintraSearchP %d, SintraSearchQ %d ModemStatus:%d
>>DO INTRA SRCH/MEAS Srxlev %d, Squal %d SintraSearchP %d, SintraSearchQ %d ModemStatus:%d
>>DO INTRA SRCH/MEAS Srxlev %d, Squal %d SintraSearchP %d, SintraSearchQ %d ModemStatus:%d
::RrmSubBlkIdleIntraMeas::UpdateSsbConfigInIntraFreq IsServingCellTry %d, IsIntraFreqTry %d
::Periodicity of INTRA %d(ms), Periodicity of SERV %d(ms)
::Periodicity of SERV is invalid value. Set 20ms
::USE SsbConfig of INTRA-FREQ due to Periodicity %d
::USE SsbConfig of SERVING-CELL due to Periodicity %d
::ServSsbToMeasure[0] %08x, ServSsbToMeasure[1] %08x, IntraSsbToMeasure[0] %08x, IntraSsbToMeasure[1] %08x , ReqSsbToMeasure[0] %08x, ReqSsbToMeasure[1] %08x
::Setup SsbConfig info of SERVING-CELL without INTRA
::ServSsbToMeasure[0] %08x, ServSsbToMeasure[1] %08x, ReqSsbToMeasure[0] %08x, ReqSsbToMeasure[1] %08x
::Setup SsbConfig info of INTRA without SERVING-CELL
::IntraSsbToMeasure[0] %08x, IntraSsbToMeasure[1] %08x, ReqSsbToMeasure[0] %08x, ReqSsbToMeasure[1] %08x
::Unexpected status. IsServingCellTry %d, IsIntraFreqTry %d
>>UpdateServMeasReqMessage CellId %d, BeamIndex %d, BeamTimingOffset 0x%x, RxBeamIndex %d, pConfigureMeasReq->ObjectId %d
ServingCellClsPtr is NULL
IntraFreqClsPtr is NULL
>>Validation of Serv is FAIL because INTRA-FREQ measurement is ongoing
>>Validation of Serv is FAIL because SERVINGCEll measurement is ongoing
>>[MockMeas] Initiate request for SERVING-CELL measurement.
>>[MockMeas] meas is ongoing skip ServingMeas
>>[InitMeas] Initiate request for SERVING-CELL measurement. SrchMeasFlag %d, AllMeas %d
>>[TimerExpired] Initiate request for SERVING-CELL measurement.
>>Skip request for SERVING-CELL because Timer is not expired
::AddNCellT amount (%d)
