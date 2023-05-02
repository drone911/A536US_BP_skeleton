RrmSubBlkIdleEarlyMeas::Init
DecodeNrIdleMeas
::INTER FREQ:NULL
>>CREATE NEW [%d]FREQ %d FOR EARLY MEASURE MeasID %d. START UPDATE
::Invalid FREQ MeasIdleCarrierNrBitMask %d, SSB_MEAS_CONFIG_MASK %d - NO SSB_MEAS, NO SIB4 INFO
>>ADD NEW [%d]FREQ %d FOR EARLY MEASURE MeasID %d. START UPDATE
>>END UPDATE NR EARLY MEASURE
::IsPerformEarlyMeas %d, ReportQuantities %d, EarlyMeasFrequency %d, SibFrequency %d)
::nrofSS_BlocksToAverage:%d(NroSsBlocksToAvgPresent:(bool)%d NroSsBlocksToAvg:%d)
::AbsThreshSsBlocksConsolidationPresent:(bool)%d
::ThresholdRsrp:%d(TOP:%d[/100dBm])
::ThresholdRsrp:ABSENT((bool)%d)
::ThresholdRsrq:%d(TOP:%d[/100dB])
::ThresholdRsrq:ABSENT((bool)%d)
::ThresholdSinr:%d(TOP:%d[/100dB])
::ThresholdSinr:ABSENT((bool)%d)
::AbsThreshSsBlocksConsolidationPresent:ABSENT(bool)%d
::SMTC - Periodicity:%d[sf] Offset:%d[sf] Duration:%d[sf]
::SsbToMeasure:present(SsbToMeasure:0x%08x %08x)
::IdleRsrpThresholdNr:%d(%d[/100dBm])
::IdleRsrpThresholdNr:ABSENT((bool)%d)
::IdleRsrqThresholdNr:%d(%d[/100dBm])
::IdleRsrqThresholdNr:ABSENT((bool)%d)
::nrofSS_BlocksToAverage:%d(NroSsBlocksToAvgPresent:(bool)%d NroSsBlocksToAvg:%d)
::nrofSS_BlocksToAverage:ABSENT(NroSsBlocksToAvgPresent:(bool)%d NroSsBlocksToAvg:%d)
::AbsThreshSsBlocksConsolidationPresent:(bool)%d
::ThresholdRsrp:%d(%d[/100dBm])
::ThresholdRsrp:ABSENT((bool)%d)
::ThresholdRsrq:%d(%d[/100dB])
::ThresholdRsrq:ABSENT((bool)%d)
::ThresholdSinr:%d(%d[/100dB])
::ThresholdSinr:ABSENT((bool)%d)
::AbsThreshSsBlocksConsolidationPresent:ABSENT(bool)%d
::ss_RSSI_Measurement:present((bool)%d)
DecodeSsbToMeasure
::SMTC - Periodicity:(enum)%d(%d[sf]) Offset:(%d[sf]) Duration:(enum)%d(%d[sf])
::freqBandIndicatorNR:%d
::rMsg.FrequencyBandList[0]:NULL
::[idnex] PCI RANGE Start %d, Range %d
>>EUTRA FREQ:NULL
>>CREATE NEW [%d]EUTRA-F %d FOR EARLY MEASURE MeasID %d. START UPDATE
>>ADD NEW [%d]EUTRA-F %d FOR EARLY MEASURE MeasID %d. START UPDATE
>>END UPDATE NR EARLY MEASURE
DecodeSib5_CarrierFreqEUTRA - MeasObjectId:%d
::[idnex] PCI RANGE Start %d, Range %d
::IdleRsrpThresholdNr:%d(%d[/100dBm])
::IdleRsrpThresholdNr:ABSENT((bool)%d)
::IdleRsrqThresholdNr:%d(%d[/100dBm])
::IdleRsrqThresholdNr:ABSENT((bool)%d)
>>REMOVE InvalidFreq. NR Arfcn %d
>>REMOVE InvalidFreq. EUTRA Arfcn %d
>>SAVE EarlyMeasResult. NR Arfcn %d, CellId %d
>>SAVE EarlyMeasResult. EUTRA Arfcn %d, CellId %d
>>Found NR In EarlyMeasResult Arfcn:%d CellId:%d - GetEarlyMeasResult RSRP %d RSRQ %d SINR %d TimingOffset %d
>>Not Found In EarlyMeasResult
>>CheckDiffWithSIB4Info MeasConfig nroSsb %d, IdleNroSsblock %d)
>>CheckDiffWithSIB4Info MeasConfig rsrp %d rsrq %d sinr %d, SIB rsrp %d, rsrq %d, sinr %d)
>>CheckDiffWithSIB4Info MeasConfig Periodicity %d Offset %d Duration %d, SIB Periodicity %d, Offset %d, Duration %d)
>>CheckDiffWithSIB4Info MeasConfig ssbToMeasure[0] %d ssbToMeasure[1] %d DeriveSsbIndexFromCell %d, SIB CarrierFreqInfo.SsbToMeasure[0] %d, SsbToMeasure[1] %d, DeriveSsbIndexFromCell %d)
