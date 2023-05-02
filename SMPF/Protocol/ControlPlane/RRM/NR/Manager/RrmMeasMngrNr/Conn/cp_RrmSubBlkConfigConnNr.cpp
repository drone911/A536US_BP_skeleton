RrmSubBlkConfigConnNr()
~RrmSubBlkConfigConnNr()
RrmSubBlkConfigConnNr::Init
[N2L][CONNEVAL] InitTriggeredListEventEutra - MeasId %d
RrmSubBlkConfigConnNr::UpdateSrchMeasCycle - SrchMeasType:(enum)%d Period:(enum)%d IsFr2:(bool)%d freqtype:(enum)%d, CssfSrch:%d CssfMeas:%d
>>Wrong Period:%d(enum) detection, set as 2
>>Wrong Period:%d(enum) detection, set as 2
RrmMngrConfigConnNr::UpdateSrchMeasCycle - SrchMeasType:(enum)%d Period:(enum)%d IsFr2:(bool)%d CssfSrch:%d CssfMeas:%d MeasSCyclePresent:%d
>>Wrong Period:%d(enum) detection, set as 2
RrmSubBlkConfigConnNr::UpdateIntraFreqMeasObjectForSsb
>> FatalError: Invalid pointer received
>>SsbFreq:%d is FR2 area
ObjectId info - MeasObjectId(%d) Smtc1Present(%d) Smtc2Present(%d) smtc1.PeriodicityAndOffsetChoice(%d) Smtc2.Periodicity(%d)
>>Error! pServingCellInfo is NULL
RrmSubBlkConfigConnNr::UpdateInterFreqMeasObjectForSsb
>> FatalError: Invalid pointer received
>>Inter-F SsbFreq:%d is FR2 area set PbchStatus as needed
ObjectId info - MeasObjectId(%d) Smtc1Present(%d) Smtc2Present(%d) smtc1.PeriodicityAndOffsetChoice(%d) Smtc2.Periodicity(%d)
RrmSubBlkConfigConnNr::isMeasIdConfigForIntraF
:: FatalError - pVarMeasConfig is nullptr
RrmSubBlkConfigConnNr::isQualifiedMeasConfig
>> Invalid pVarMeasConfig ptr (0x%x)
>>MeasId(%d) has valid MeasObjId(%d) & ReportConfigId(%d)
>>Fatal Error - MeasId(%d) has invalid MeasObjId(%d) & ReportConfigId(%d)
:: pVarMeasConfig->MeasObjListIdx(0x%x) pVarMeasConfig->ReportConfigListIdx(0x%x)
RrmSubBlkConfigConnNr::UpdateInterMeasObjectForCsiRs - MeasObjectId:%d
>>RefFreqCsiRs is not present
>>Cannot Create RrmFreqInfoNr
>>Cannot Create MeasObjectNR
RrmSubBlkConfigConnNr::UpdateSCellFreqMeasObjectForSsb
>> FatalError: Invalid pointer received
>>SCell SsbFreq:%d is FR2 area set PbchStatus as needed
ObjectId info - MeasObjectId(%d) Smtc1Present(%d) Smtc2Present(%d) smtc1.PeriodicityAndOffsetChoice(%d) Smtc2.Periodicity(%d)
UpdateSCellFreqMeasObjectForSsb - SCellFreq Smtc1 MeasCycle(%d), SrchCycle(%d), MeasRequriement(%d), SrchRequirement(%d)
UpdateSCellFreqMeasObjectForSsb - SCellFreq Smtc2 MeasCycle1(%d), MeasRequriement1(%d)
UpdateSCellFreqMeasObjectForSsb - SCellFreq Smtc1 MeasCycle(%d), SrchCycle(%d), MeasRequriement(%d), SrchRequirement(%d)
UpdateSCellFreqMeasObjectForSsb - SCellFreq Smtc2 MeasCycle1(%d), MeasRequriement1(%d)
>> MeasObjId(%d) of SCell CellId %d at (SsbAbsFreq %d SCS %d) set to %d
>>FR1 Inter SrchMeasType:%d(enum) info updated
>>Exceptional case, set intra default -> FR1 Inter SrchMeasType:%d(enum) info updated
>>FR2 Intra SrchMeasType:%d(enum) info updated
>> Exceptional case Inter has no SMTC2 -> %d(enum) info updated
>>FR2 Inter SrchMeasType:%d(enum) info updated
>>Exceptional case, set intra default -> FR2 Intra SrchMeasType:%d(enum) info updated
