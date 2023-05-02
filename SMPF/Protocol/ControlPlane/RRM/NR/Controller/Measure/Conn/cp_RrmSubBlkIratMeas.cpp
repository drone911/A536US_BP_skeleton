RrmSubBlkIratMeas::Init() - MsgGrpId(%d)
RrmSubBlkIratMeas::GetEutraFreq
pEutraFreqInfo is not found
RrmSubBlkIratMeas::GetEutraFreqIByArfcn
pEutraFreqInfo is not found
RrmSubBlkIratMeas::GetUtraFreq
pEutraFreqInfo is not found
>>CheckMeasCycle curTimeInMs (%d) Cur MeasCycle [%d] LastMeasTime [%d] ReScheduleMeas [%d]
>>CheckMeasCycle TimeDiff 1 Result 1 ReScheduleMeas
>>CheckMeasCycle TimeDiff %d Result %d
>>CheckMeasCycle curTimeInMs (%d) Cur MeasCycle [%d] LastMeasTime [%d] ReScheduleMeas [%d]
>>CheckMeasCycleUtra ReSchedule is TRUE
>>CheckMeasCycle TimeDiff %d Result %d
>>CheckMeasCycle curTimeInMs (%d) Cur SrchCycle [%d] LastSrchTime [%d] ReScheduleSrch [%d]
>>CheckMeasCycle TimeDiff 1 Result 1 ReScheduleSrch
>>CheckSrchCycle TimeDiff %d Result %d
>>CheckSrchCycleUtra curTimeInMs (%d) Cur SrchCycle [%d] LastSrchTime [%d] ReScheduleSrch [%d]
>>CheckSrchCycleUtra ReSchedule is TRUE
>>CheckSrchCycleUtra TimeDiff %d Result %d
RrmSubBlkIratMeas::ConfigureMeasReqEutra
Skip EUTRA MEASUREMENT
[N2L][CONN] Find Initial EUTRA FREQ %d, PrevObj %d, MeasObj %d
>>[INITSM_C] Initiate request for EUTRA FREQ measurement.
::AddNCellT amount (%d)
::Expired MeasCycle. IsEutraSrchMeas %d
::Changed Eutra Frequency %d
::Skip EUTRA MEASUREMENT. There is no candidate EUTRA FREQ (Check 1 cycle)
>>(TimerExpired) Initiate request for EUTRA FREQ measurement.
::AddNCellT amount (%d)
EutraFreq %d MeasScheduleInfo.LastMeasType %d. Try to next FREQ for Measurement.
::Changed Eutra Frequency %d
::Skip measurement for Eutra Frequency %d, recover MeasTime %d because no cell for measure
::Skip update MEASTYPE because SrchOngoing
::Changed Eutra Frequency %d
:: Skip EUTRA MEASUREMENT. There is no candidate EUTRA FREQ (Check 1 cycle)
>>IRAT Frequency %d is already ONGOING to Meas.
::Changed Eutra Frequency %d
::Skip EUTRA MEASUREMENT. There is no candidate EUTRA FREQ (Check 1 cycle)
::Skip EUTRA MEASUREMENT. There is no candidate EUTRA FREQ
RrmSubBlkIratMeas::ConfigureSrchReqEutra
Skip EUTRA MEASUREMENT
[N2L][CONN] Find Initial EUTRA FREQ %d, PrevObj %d, MeasObj %d
>>[INITSM_C] Initiate request for IRAT Search
::Expired SrchCycle. IsEutraSrchMeas %d
>>(TimerExpired) Initiate request for IRAT FREQ Search.
::Changed Eutra Frequency %d
::Skip EUTRA MEASUREMENT. There is no candidate EUTRA FREQ (Check 1 cycle)
>>IRAT Frequency %d is already ONGOING to Search. Try next Freq.
::Changed Eutra Frequency %d
::Skip EUTRA MEASUREMENT. There is no candidate EUTRA FREQ (Check 1 cycle)
RrmSubBlkIratMeas::ConfigureSrchReqUtra
Skip UTRA SRCH
[N2U][CONN] Find Initial UTRA FREQ %d, PrevObj %d, MeasObj %d
::InitSrchMeasFlag for arfcn %d is FALSE
::Expired SrchCycle
::Other InitSrch except for %d is not yet finished
>>IRAT Frequency %d is already ONGOING. Try next Freq.
::Changed Utra Frequency %d
::Skip UTRA SRCH. There is no candidate UTRA FREQ
>> Configure IRAT UTRA Search
RrmSubBlkIratMeas::ConfigureMeasReqUtra
Skip UTRA MEAS
[N2U][CONN] Find Initial UTRA FREQ %d, PrevObj %d, MeasObj %d
::InitSrchMeasFlag for arfcn %d is FALSE
::Expired MeasCycle
::Other InitMeas except for %d is not yet finished
::No cell in ID_LISTED_CELLSET on Utra Frequency %d
>>IRAT Frequency %d is already ONGOING. Try next Freq.
::Changed Utra Frequency %d
::Skip UTRA MEAS. There is no candidate UTRA FREQ
>> Configure IRAT UTRA Meas
RrmSubBlkIratMeas::ConfigurePbchDecodeReqEutraForNedc
>>Unexpected conidtion for NE-DC SFTD.(%d)
RrmSubBlkIratMeas::UpdateEutraMeasResult
pEutraFreqInfo is not found
MeasType(%d), SsbFreq(%d), MeasObjectId(%d), NumEutraMeasResult(%d)
>>NOT FOUND - NEIGHBOUR SetType:%s(%d) ObjectId:%d
>>FOUND - NEIGHBOUR SetType:%s(%d) ObjectId:%d
>>REMOVE LTE CELL - current_set_type:%s(%d) due to invalid Result
>>MOVE CELL - current_set_type:%s(%d) target_set_type:%s(enum)%d
Succeeded to move CellId(%d) of MeasResultEutra(%d) from set(%d) to set(%d) of measobject(%d)
Failed to move CellId(%d) of MeasResultEutra(%d) from set(%d) to set(%d) of measobject(%d)
RrmSubBlkIratMeas::UpdateEutraSrchResult numcell %d
pEutraFreqInfo is not found
>>CellId(%d) is not found in this set (enum)(%d) of measobject(%d)
>>CellId(%d) is found in set (enum)(%d) of measobject(%d)
Update timing offset %d
New cell and not in UNID set, add new CellId(%d) into set(enum)(%d) of measobject(%d)
Fail to allocate pCellInfo
Candidate Cell Info : earfcn %d, bandId %d, CellId %d, TimingOffset %d
Succeeded to add CellId(%d) of SsbSrchResult(%d) into CANDI_DETECTED_CELLSET of measobject(%d)
Failed to add CellId(%d) of SsbSrchResult(%d) into CANDI_DETECTED_CELLSET of measobject(%d)
Found in UNID set, move CellId(%d) of SsbSrchResult(%d) from set(%d) to set(%d) of measobject(%d)
Succeeded to move CellId(%d) of SsbSrchResult(%d) from set(%d) to set(%d) of measobject(%d)
Failed to move CellId(%d) of SsbSrchResult(%d) from set(%d) to set(%d) of measobject(%d)
RrmSubBlkIratMeas::UpdateUtraSrchResult NumResult %d
pUtraFreqInfo is not found
UpdateUtraSrchResult:: Update timing offset %d of CellId %d in ID LISTED
UpdateUtraSrchResult:: CellId %d result is not valid
UpdateUtraSrchResult:: Update timing offset %d of CellId %d in UNID LISTED
Succeeded to move CellId(%d) from UNID LISTED to ID LISTED of measobject(%d)
Failed to move CellId(%d) from UNID LISTED to ID LISTED of measobject(%d)
CellId %d result is not valid
CellId %d is not in the Cell List
RrmSubBlkIratMeas::UpdateUtraMeasResult
pUtraFreqInfo is not found
MeasType(%d), Freq(%d), MeasObjectId(%d), NumUtraMeasResult(%d)
>>FOUND -CellId:%d ObjectId:%d is in ID LISTED
>>MOVE UTRA CELL(%d) to UNID LISTED SET due to invalid Result
>>FAIL to MOVE UTRA CELL(%d) to UNID LISTED SET due to invalid Result
UpdateUtraMeasResult:: CellId %d, Rscp %d, EcNo %d, Rssi %d, TimingOffset %d
CellId %d is not in the Cell List
[SLOTINFO][EUTRA]There is no EUTRA FREQ INFO. Skip Slot info
[SLOTINFO][EUTRA] ObjectId %d removed
[SLOTINFO][EUTRA] Not proper meas type between MeasScheduleInfo.LastMeasType (enum)%d CNF Meastype (enum)%d
[SLOTINFO][EUTRA] ObjectId %d removed
[SLOTINFO][EUTRA] Not proper meas type between MeasScheduleInfo.LastMeasType (enum)%d CNF Meastype (enum)%d
[SLOTINFO][UTRA]There is no UTRA FREQ INFO. Skip Slot info
[SLOTINFO][UTRA] ObjectId %d removed
[SLOTINFO][UTRA] Not proper meas type between MeasScheduleInfo.LastMeasType (enum)%d CNF Meastype (enum)%d
RrmSubBlkIratMeas::UpdateInitialSrchMeasEutra
[INITSM_C] UpdateInitialSrchMeas EUTRA %d srch %d, Meas %d, AvailEval %d
RrmSubBlkIratMeas::UpdateInitialSrchMeasUtra
[INITSM_C] UpdateInitialSrchMeas UTRA %d Srch %d, Meas %d, AvailEval %d
RrmSubBlkIratMeas::CheckConditionOfInitSrchEutra
[INITSM_C] Free InitSrchMeasFlag for EUTRA FREQ %d
RrmSubBlkIratMeas::CheckConditionOfInitSrchUtra
[INITSM_C] Free InitSrchMeasFlag for UTRA FREQ %d
RrmSubBlkIratMeas::AddNeighbourCell Received FreqInfo is NULL
::NumSsbMeasInput is excced MAX num of Cell (%d)
RrmSubBlkIratMeas::AddNeighbourCellUtra Received FreqInfo is NULL
%d invalid MeasType
SetTypeIdx(%d) cellId(%d) CellIndex(%d) NumUtraMeasInput(%d)
::NumSsbMeasInput is excced MAX num of Cell (%d)
SetTypeIdx %d NumUtraMeasInput %d
Unexpected NextFreqInfo. Need to Check
Unexpected NextFreqInfo. Need to Check
Unexpected NextFreqInfo. Need to Check
Unexpected NextFreqInfo. Need to Check
RrmSubBlkIratMeas::GetInitialEutraFreq TargetObj %d
Fail to Find Matched FreqInfo with Previous EutraObjMeas Try to Set First FreqInfo
Fail to Find Matched FreqInfo with Previous EutraObjMeas
RrmSubBlkIratMeas::GetInitialUtraFreq TargetObj %d
Fail to Find Matched FreqInfo with Previous UtraObjMeas Try to Set First FreqInfo
There is no Last Srch/Meas Info
Fail to Find Matched FreqInfo with Previous UtraObjMeas
Fisrt Srch/Meas
EUTRA FREQInfo List is Empty
GetFirstUtraFreq %d
UTRA FREQ Info List is Empty
RrmSubBlkIratMeas::UpdateEutraSCGList
Fatal Error : Cannot Create RrmFreqInfoEutra Object
Fail to allocate pCellInfo
Succeeded to add index(%d) serving CellId(%d) of Arfcn(%d) into ID_LISTED_CELLSET
Failed to add index(%d) serving CellId(%d) of Arfcn(%d) into ID_DETECTED_CELLSET
Fail to allocate pCellInfo
Succeeded to add best neighbor CellId(%d) of Arfcn(%d) into ID_DETECTED_CELLSET
Failed to add best neighbor CellId(%d) of Arfcn(%d) into ID_DETECTED_CELLSET
No best neighbor cell in index(%d) Arfcn(%d)
RrmSubBlkIratMeas::UpdateEutraMOCheckResult
pEutraFreqInfo is not found
>>FOUND - NEIGHBOUR SetType:%s(%d)
>>MOVE CELL - current_set_type:%s(%d) target_set_type:%s(enum)%d
Succeeded to move CellId(%d) of MeasResultEutra(%d) from set(%d) to set(%d) of measobject(%d)
Failed to move CellId(%d) of MeasResultEutra(%d) from set(%d) to set(%d) of measobject(%d)
L3Filtered cell - LTE Arfcn:%d CellId:%-3d Rsrp:%d[/100dBm] Rsrq:%d[/100dB] RsSinr:%d[/100dB]
New cell and not in all cell set, add new CellId(%d) into set(enum)(%d) of measobject(%d)
Fail to allocate pEutraCellInfo
L3Filtered cell - LTE Arfcn:%d CellId:%-3d Rsrp:%d[/100dBm] Rsrq:%d[/100dB] RsSinr:%d[/100dB]
Failed to add CellId(%d) of MeasResult(%d) into ID_DETECTED_CELLSET of measobject(%d)
