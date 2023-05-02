RrmFreqInfoNr::RrmFreqInfoNr()
RrmFreqInfoNr::~RrmFreqInfoNr()
RrmFreqInfoNr::AddMeasObject - Add MeasObjectId(%d) To MeasObjectList
>>UePowerClass:%d
>>UePowerClassPresent:absent(Default UePowerClass set to NRRRCDB_UePowerClass_pc2)
RrmFreqInfoNr::ReconfigMeasObjectNr
>> Error: given MeasObjectNrConfig(0X%x) is invalid
>> Error: Cannot find any MeasObject to Reconfigure!!!
>> Error: Cannot find same RefSignal MeasObject from Object List!!!
RrmFreqInfoNr::DeactMeasObjectFromFreqInfo
>> Deactivated(Converted) MeasObjectId: %d
RrmFreqInfoNr::ReArrangeCellListFromActivateToDeactivate
>> given MeasObjectId(%d) cannot be found!
>> Succeeded to Move from IDLISTEDCELLSET to IDDETECTEDCELLSET!
>>MeasObjectId:%d CsiRsResourceConfigMobilityChoice:(enum)%d CsiRsResourceConfigMobilityPresent:(bool)%d
RrmMeasObjectInfoNr::DisplayCsiRsResourceConfigMobility - MeasObjectId:%d
>>RefServCellIndexPresent:%d RefServCellIndex:%d SubcarrierSpacing:%d CsiRsCellListMobilityCnt:%d
>>CsiRsCell[%d] - CellId:%d CsiRsMeasBw.StartPRB:%d CsiRsMeasBw.NrOfPRBs:(enum)%d DensityPresent:(bool)%d Density:%d CsiRsResourceListMobilityCnt:%d
::CsiRsResource[%d] - CsiRsIndex:%d AssociatedSsbPresent:(bool)%d AssociatedSsbIndex:%d FreqDomain:(enum)%d FirstOfdmSymbol:%d Sequence:%d
UpdateCsiRsResourceConfigMobility - pMeasObjectNrConfig is NULL
>>FreqBandIndicatorNRV1530Present:(bool)%d
>>CsiRsResourceConfigMobility present but RefFreqCsiRs is absent, ignoring CsiRsResourceConfigMobility
BEFORE INIT CSI-RS CELLSET MO:%d
AFTER INIT CSI-RS CELLSET MO:%d
>>ADD cell to CSI UNIDLISTED cellset - CellId:%d MeasObjectId:%d BandId:%d
::FAILED
>>CsiRsCellListMobility is NULL
AFTER UPDATE CSI-RS CELLSET MO:%d
RrmFreqInfoNr::SetAgcGain - Arfcn:%d [0]%d[1]%d prev:[0]%d[1]%d
IsAllowedDeriveSsbIndex - bAllowed:(bool)%d ARFCN:%d MeasObjectId:%d duplexMode:%s((enum)%d) bDeriveSsbIndexFromCell:%d
>>[SET] RSRP:(bool)%d RSRQ:(bool)%d SINR:(bool)%d
RrmFreqInfoNr::GetSibCarrierFreqInfo:NULL - Arfcn:%d
RrmFreqInfoNr::SetSibCarrierFreqInfo - Arfcn:%d
>>pCarrierFreqInfo is allocated - ptr:0x%08x
CheckSibBlackCellList - FOUND, CellId:%d Start:%d Range:%d
CheckSibBlackCellList - isBlackCell:(bool)%d Arfcn:%d CellId:%d
SetSibBlackCellList - Arfcn:%d NumBlackCellList:%d
>>NumBlackCellList:%d exceed NRRRCDB_MAX_CELL_BLACK:%d
SetSibReselectionPriority - Arfcn:%d ReselectionPriority:%d
>>[GET] RSRP:(bool)%d RSRQ:(bool)%d SINR:(bool)%d
GetSibsfMedium - Arfcn:%d sfMedium:%d
GetSibsfHigh - Arfcn:%d sfHigh:%d
SetSibTreselection - Arfcn:%d Treselection:%d
SetSibSpeedStateScaleFactors - Arfcn:%d sfMedium:%d sfHigh:%d
>>ssbConfigMobility - bPresentSsbConfigMobility:(bool)%d SsbToMeasurePresent:(bool)%d SsbToMeasureChoice:(enum)%d SsRssiMeasurementPresent:(bool)%d
>>pCarrierFreqInfo:NULL - set default Periodicity Smtc SsRssiMeasurement
>>Delete m_SibFreqInfo.pCarrierFreqInfo:0x%08x
RrmFreqInfoNr::GetCsiRsFreqInfo - m_pCsiRsFreqInfo is NULL!
RrmFreqInfoNr::UpdateCsiRsFreqInfo - fail to alloc m_pCsiRsFreqInfo
RrmFreqInfoNr::UpdateCsiRsFreqInfo - RefServCellIndex not present, set to 0
RrmFreqInfoNr::GetMeasScheduleInfoForCsiRs - m_pCsiRsFreqInfo is NULL
RrmFreqInfoNr::SetMeasScheduleInfoForCsiRs - m_pCsiRsFreqInfo is NULL
RrmFreqInfoNr::SetSsbPeriod - ARFCN:%d SsbPeriodicity(enum)(NEW:%d OLD:%d)
>>SetSibNCellPciList:%d exceed NRRRCDB_MAX_CELL_BLACK:%d
>>SetSibNCellPciList - Arfcn:%d rNumNCellList:%d, start %d, Range %d
::CheckIdleMeasPciRange - FOUND, CellId:%d Start:%d Range:%d
::CheckToBeDeletedFreq Arfcn %d, SibFrequency %d, IsPerformEarlyMeas %d (EARLY MEASURE)
RrmMeasObjectInfoNr::ChangeSCellMeasCycle - this object is not an SCellFreq! cannot change meas cycle for this freq!
RrmFreqInfoNr::ChangeToMockMeasObject
RrmFreqInfoNr::ChangeFromMockMeasObject
>> MeasObjId set to %d from %d!
>> Cannot find MOCK_MEAS_OBJECT from this frequency!
