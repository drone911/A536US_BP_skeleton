RrmMngrConfigIdleNr::Initialize
RrmMngrConfigIdleNr::Reset
RrmMngrConfigIdleNr::DecodeCellStatusReq
>>RRM_RRC_CELL_STATUS_REQ - DECODE SIB1
>>pSib1 is nullptr
>>RRM_RRC_CELL_STATUS_REQ - DECODE RRC BARRED LIST
RrmMngrConfigIdleNr::DecodeReselInfoInd - (bool)(Deprioritisation:%d DedicatedPriority:%d Qoffsettemp:%d NrBarredInfo:%d LteBarredInfo:%d)
CLEAR LIST - DeprioritisationList DedicatedPriorityList QoffsetTempList RrcBarredList
UPDATE DeprioritisationList for NR and LTE
UPDATE DedicatedPriorityList
UPDATE QoffsetTempList
UPDATE NR BarredList
UPDATE LTE BarredList
RrmMngrConfigIdleNr::DecodeSibUpdateReq - PresentSibTypeBitMask:0x%08x %08x NewPresentSibTypeBitMask:0x%08x %08x PPowerClass:%d
>>currRrmState:%s(%d)
>>pSib1 is NULL
>>pSib2 is NULL
>>pSib3 is NULL
>>pSib4 is NULL
>>pSib5 is NULL
========================<Start setup for Idle Scheduling>========================
========================<End setup for Idle Scheduling>========================
>>DeprioritisationType_nr:(enum)%d
>>NR DeprioritisationInfo[%d] - type:(enum)%d Arfcn:%d TimeStamp:%d Duration:%d
>>NR DeprioritisationInfo is not present - type:(enum)%d
>>NRRRCDB_DeprioritisationType_lte:(enum)%d
>>LTE DeprioritisationInfo[%d] - type:(enum)%d Arfcn:%d TimeStamp:%d Duration:%d
>>LTE DeprioritisationInfo is not present - type:(enum)%d
IsNrDeprioritisation - Found but expired, Erase elem - type:(enum)%d Arfcn:%d
IsNrDeprioritisation - Found, type:(enum)%d Arfcn:%d
IsLteDeprioritisation - Found but expired, Erase elem - type:(enum)%d Arfcn:%d
IsLteDeprioritisation - Found, type:(enum)%d Arfcn:%d
RrmMngrConfigIdleNr::UpdateDedicatedPriorityList - NrFreqPriorityInfoIncluded:(bool)%d EutraFreqPriorityInfoIncluded:(bool)%d
>>NR DedicatedPriorityInfo[%d] - arfcnNr:%d priority:%d subPriority:(enum)%d NrT320Included:(bool)%d Timestamp:%d Duration:%d
>>EUTRA DedicatedPriorityInfo[%d] - arfcnEutra:%d priority:%d subPriority:%d NrT320Included:(bool)%d Timestamp:%d Duration:%d
GetNrDedicatedPriority - Found but expired, Erase elem - Arfcn:%d
GetNrDedicatedPriority - Found NR Arfcn:%d - Dedicated ReselectionPriority:%d
GetEutraDedicatedPriority - Found but expired, Erase elem - Arfcn:%d
GetEutraDedicatedPriority - Found LTE Arfcn:%d - Dedicated ReselectionPriority:%d
CheckDedicatedPriorityProvided - ERASE expired elem - NR Arfcn:%d
CheckDedicatedPriorityProvided - Found, NR Arfcn:%d ReselectionPriority:%d
CheckDedicatedPriorityProvided - ERASE expired elem - LTE Arfcn:%d
CheckDedicatedPriorityProvided - Found, LTE Arfcn:%d ReselectionPriority:%d
>>QoffsetTempInfo[%d] - Arfcn:%d CellId:%d Qoffsettemp:%d TimeStamp:%d Duration:%d
GetQoffsetTemp - Found but expired, Erase elem - Arfcn:%d CellId:%d
Arfcn:%d CellId:%d - QoffsetTemp:%d
Freq %d is belong to FR2 (BAND 261).
Freq %d is belong to FR2 (BAND 257).
Freq %d is belong to FR2 (BAND 258).
Freq %d is belong to FR2 (BAND 260).
>>Invalid Access. drxCycle is unexpected value(%d)
>>Invalid Access. drxCycle is unexpected value(%d)
>>Invalid Access. pServingCellInfo or PCellFreqPtr is nullptr or failed GetSibServingCellConfigCommonSIB
>>Start to setup SERVING-CELL Cycle. AllMeasValue %d
>>Setup is done. SERVING-CELL MeasCycle %d to ObjectId %d. Drxcycle(%d) * N1(%d) * M1(%d). Servingcell Periodicity %d
>>Start to setup INTRA-FREQ Cycle. AllMeasValue %d
>>Setup is done. HST INTRA-FREQ:%d - DrxCycle:%d[ms] SMTC:%d[ms] M2(1) M3(1)
>>Setup is done. HST INTRA-FREQ:%d - DrxCycle:%d[ms] SMTC:%d[ms] M2(1.5) M3(2)
>>Setup is done. HST INTRA-FREQ:%d - DrxCycle:%d[ms]
::SrchCycle %d MeasCycle %d to ObjectId %d
>>Setup is done. INTRA-FREQ %d : Drxcycle(%d) * N1(%d) * M2(1.5). Periodicity %d
::SrchCycle %d MeasCycle %d to ObjectId %d
>>Setup is done. INTRA-FREQ %d : Drxcycle(%d) * N1(%d) * M2(1). Periodicity %d
::SrchCycle %d MeasCycle %d to ObjectId %d
>>Setup is done. INTRA-FREQ %d : Drxcycle(%d) * N1(%d) * M2(1). Periodicity %d
::SrchCycle %d MeasCycle %d to ObjectId %d
>>Start to setup INTER-FREQ %d Cycle AllMeasValue %d
>>Setup is done. INTER-FREQ %d : Drxcycle(%d) * N1(%d) * M2(1.5). Periodicity %d
>>Setup is done. INTER-FREQ %d : Drxcycle(%d) * N1(%d) * M2(1). Periodicity %d
::INTER SrchCycle %d (%d) MeasCycle %d (%d) to ObjectId %d, NumberOfInterSrchMo %d, NumberOfInterMeasMo %d
>>Start to setup EUTRA-FREQ %d Cycle
>>Setup is done. HST EUTRA-FREQ:%d - DrxCycle:%d[ms]
>>Setup is done. EUTRA-FREQ %d : Drxcycle(%d) * N1(%d) * M2(1.5)
>>Setup is done. EUTRA-FREQ %d : Drxcycle(%d) * N1(%d) * M2(1)
::EUTRA SrchCycle %d (%d) MeasCycle %d (%d) to ObjectId %d, NumberOfInterSrchMo %d, NumberOfInterMeasMo %d
RrmMngrConfigIdleNr::CheckAndUpdateCycleForRelaxMeas
>>RelaxMeasMode is not available or PCellFreqPtr is nullptr
>>RelaxMeasMode:%d RelaxMeasIntraFactor:%d RelaxMeasInterFactor:%d StartIdx:%d EndIdx:%d
>>Get ARFCN %d in HIGHER_PRIORITY List.
>>There is no element in HIGHER_PRIORITY List.
>>Get ARFCN %d in EQUAL_PRIORITY List
>>There is no element in EQUAL_PRIORITY List.
>>Get ARFCN %d in LOWER_PRIORITY List
>>There is no element in LOWER_PRIORITY List.
>>Unexpected Priority Mode (%d)
>>End of HIGHER_PRIORITY LIST
>>GET %d in HIGHER_PRIORITY LIST
>>End of EQUAL_PRIORITY LIST
>>GET %d in EQUAL_PRIORITY LIST
>>End of LOWER_PRIORITY LIST
>>GET %d in LOWER_PRIORITY LIST
Invalid freqPriority (%d) return nullptr
RrmMngrConfigIdleNr::SetFreqListPerPriority
>>Return False due to ServCellClsPtr is null
>>Add Freq to LIST with HIGHER_PRIORITY. Freq %d Priority %d, Serving-Cell priority %d
>>Add Freq to LIST with EQUAL_PRIORITY. Freq %d Priority %d, Serving-Cell priority %d
>>Add Freq to LIST with LOWER_PRIORITY. Freq %d Priority %d, Serving-Cell priority %d
>>Add Freq to LIST with HIGHER_PRIORITY. Freq %d Priority %d, Serving-Cell priority %d
>>Add Freq to LIST with EQUAL_PRIORITY. Freq %d Priority %d, Serving-Cell priority %d
>>Add Freq to LIST with LOWER_PRIORITY. Freq %d Priority %d, Serving-Cell priority %d
::FreqClsPtr is null in AddFreqToListPriority
::AddFreqTo HIGHER_PRIORITY NumInList:%d
::AddFreqTo EQUAL_PRIORITY NumInList:%d
::AddFreqTo LOWER_PRIORITY NumInList:%d
RrmMngrSetUpdateNr::AddFreqToListPriority - Wrong Freq Type(%d)
::Added FreqInfo (Arfcn : %d, SubCarrierOffset : %d) NumInList:%d
::FreqClsPtr is null in AddFreqToListPriority
::AddFreqTo HIGHER_PRIORITY Eutra NumInList:%d
::AddFreqTo EQUAL_PRIORITY Eutra NumInList:%d
::AddFreqTo LOWER_PRIORITY Eutra NumInList:%d
RrmMngrSetUpdateNr::AddFreqToListPriority - Wrong Freq Type(%d)
::Added FreqInfo Arfcn : %d NumInList:%d
RrmMngrConfigIdleNr::SetHigherPriorityMode - (RatType : %d, bool : %d)
>>Unexceptional RatType (%d)
RrmMngrConfigIdleNr::GetHigherPriorityMode - (RatType : %d)
>>Unexceptional RatType (%d)
::RrmMngrConfigIdleNr::ClearPriorityList)
RrmMngrConfigIdleNr::IsIratAvailable
>>Get ARFCN %d in HIGHER_PRIORITY List.
>>There is no element in HIGHER_PRIORITY List.
>>Get ARFCN %d in EQUAL_PRIORITY List
>>There is no element in EQUAL_PRIORITY List.
>>Get ARFCN %d in LOWER_PRIORITY List
>>There is no element in LOWER_PRIORITY List.
>>Unexpected Priority Mode (%d)
>>End of HIGHER_PRIORITY LIST
>>GET %d in HIGHER_PRIORITY LIST
>>End of EQUAL_PRIORITY LIST
>>GET %d in EQUAL_PRIORITY LIST
>>End of LOWER_PRIORITY LIST
>>GET %d in LOWER_PRIORITY LIST
Invalid freqPriority (%d) return nullptr
>>CheckTimerExpired curTimeInMs (%d) Cur TargetTime [%d] LastCheckedTime [%d]
>>CheckTimerExpired TimeDiff %d Result %d
RrmMngrConfigIdleNr::TimerExpiredFor10Sec
>>(Expired 10sec timer)TimerExpiredFor10Sec is Expired. _oos_
>>(Waiting 10sec timer)TimerExpiredFor10Sec is Ongoing _oos_
>>Keep state untill TimerExpired
>>(Start 10sec timer)TimerExpiredFor10Sec is initiated _oos_
>>Set current OOC Time %d(ms)
NO IDLE MEASCONFIG
>>Logged measure enabled EventL1:%d(boolean)
RrmMngrConfigIdleNr::DecodeLoggedMeasEventL1 L1ThresholdChoice:%d(enum) Value:%d(mapping) Hys:%d TTT:%d
Wrong choice value enum:%d
GetLoggedMeasureInfo Status:%d(enum) L1ThresholdChoice:%d(enum) Value:%d Hys:%d TTT:%d
numberOfResult:%d numberOfInterMO:%d, bMeas:(bool)%d nrOfInterFreqNr:%d nrOfInterRatEutra:%d
