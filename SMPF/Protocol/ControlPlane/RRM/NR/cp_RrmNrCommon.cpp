ReverseBitOrderSsbBitmap : LenSsbBitmap (%d), SsbBitmap (0x%08X %08X), ReversedSsbBitmap (0x%08X %08X)
GetMaxNrOfSsbForArfcn : invalid ARFCN (%d)
>>NotPresent SsbBitmap:0x%08x %08x
>>ShortBitmap SsbBitmap:0x%08x %08x
>>MediumBitmap SsbBitmap:0x%08x %08x
>>LongBitmap SsbBitmap:0x%08x %08x
Convert_struct_SsbToMeasure - invalid Choice:(enum)%d
>>Reversed SsbBitmap:0x%08x %08x
GetL1FilteredVal: Abort L1 filtering, There is no proper Min value in source array, return array[0] value(%d)
GetL1FilteredVal: LinearAvg[%d] --> Wrong value detected set LinearAvg as 0
GetL1FilteredVal: Abnormal data FirstStoredAvg %d FirstStep %d SecondStep %d
EventTriggerResult: %s (MeasId:%d CellId:%d Arfcn:%d Rat:%d Status:%d EventId:%d)
TimeToTriggerResult: %s (MeasId:%d CellId:%d Arfcn:%d Rat:%d Status:%d)
>>MeasScheduleInfo - ObjectId:%d LastMeas[0]:%d(ms) LastMeas[1]:%d(ms) LastSrch:%d(ms) MeasCycle[0]:%d(ms) MeasCycle[1]:%d(ms)
>>MeasScheduleInfo -SrchCycle:%d(ms) MeasRequirement0:%d(ms) MeasRequirement1:%d(ms) SrchRequirement:%d(ms) ScheduleOngoing:%d LastMeasType:%d SlotNum:%d
Unexpected BandId:%d
GetDuplexModeForBandId - BandId:%d duplexMode:%s((enum)%d)
GetSymbolLength - SCS:(enum)%d
>>Unexpected TargetSubCarrierSpacing:%d(enum) Set SymbolLength:%d
GetDefaultSsbToMeasure - NumSsbToMeasure:%d
>>Invalid NumSsbToMeasure:%d
GetDefaultSsbToMeasure - NumSsbToMeasure:%d SsbToMeasure:0x%08x %08x
ConvertSsbPositionsInBurst - InOneGroup:%d GroupPresence:%d NumSsbToMeasure:%d
>>reversedInOneGroup:%d reversedGroupPresence:%d
>>SSB_SHORT - SsbBitmap:0x%02X
>>SSB_MEDIUM - SsbBitmap:0x%02X
>>SSB_LONG - SsbBitmap:0x%08x %08x
>>Invalid NumSsbToMeasure:%d
>>converted ssbToMeasure:0x%08x %08x
ConvertSsbPositionsInBurst - invalid Choice:(enum)%d
ConvertSsbPositionsInBurst::bitmapLength:%d, SsbBitmap:0x%08x%08x, ConvertedSsbBitmap:0x%08x%08x
ConvertSmtc1 - invalid PeriodicityAndOffsetChoice:(enum)%d
ConvertSmtc1 - invalid Duration:(enum)%d
>>BandId:%d SsbFrequency:%d SubcarrierSpacing:(enum)%d Periodicity:%d[ms]
>>NumSsbToMeasure:%d SsbToMeasure:[1]0x%08x[0]0x%08x
>>SmtcIncluded:(bool)%d Smtc.Offset:%d[ms] Smtc.Duration:%d[ms] SsRssiMeasurementIncluded:(bool)%d
>>periodicityInMs:%d ePeriod:(NrRrcDb_PeriodicityAndOffset_Choice_e)%d
>>periodicityInMs:%d ePeriod:(NrRrcDb_ServingCellConfigCommonSsbPeriodicityServingCell_e)%d
>>periodicityInMs:%d ePeriod:(enum)%d
>>ePeriod:(enum)%d => ePeriodServingCell:(enum)%d
GetTimeDiff - CurTime:%d[ms] Target Time:%d[ms] TimeDiff:%d[ms] + AddExtra:%d[ms]
Invalid Access. Set Default Periodicity 80(ms)
L1Searched beam - SSB ARFCN:%d CellId:%d Corr:%d BeamTimingOffset:%d RxBeamIdx:%d SortedIndex:%d
L3Filtered beam - SSB Arfcn:%d CellId:%-3d RsIndex:%d Rsrp:%d[/100dBm] Rsrq:%d[/100dB] RsSinr:%d[/100dB] Rssi:%d[/100dBm]
L3Filtered beam - CSI-RS MO:%d CellId:%-3d RsIndex:%d Rsrp:%d[/100dBm] Rsrq:%d[/100dB] RsSinr:%d[/100dB] Rssi:%d[/100dBm]
L3Filtered cell - SSB Arfcn:%d CellId:%-3d Rsrp:%d[/100dBm] Rsrq:%d[/100dB] RsSinr:%d[/100dB] Rssi:%d[/100dBm]
L3Filtered cell - CSI-RS MO:%d CellId:%-3d Rsrp:%d[/100dBm] Rsrq:%d[/100dB] RsSinr:%d[/100dB] Rssi:%d[/100dBm]
L3Filtered cell - SSB RxAnt:%d Arfcn:%d CellId:%-3d Rsrp:%d[/100dBm] Rsrq:%d[/100dB] RsSinr:%d[/100dB] Rssi:%d[/100dBm]
L3Filtered cell - CSI-RS RxAnt:%d MO:%d CellId:%-3d Rsrp:%d[/100dBm] Rsrq:%d[/100dB] RsSinr:%d[/100dB] Rssi:%d[/100dBm]
L3Filtered cell - LTE Arfcn:%d CellId:%-3d Rsrp:%d[/100dBm] Rsrq:%d[/100dB] RsSinr:%d[/100dB]
Invalid Periodicity %d. Set default sf20.
>>MeasCycleSCellInMs:%d MeasCycleSCellEnum:(NrRrcDb_MeasCycleSCellV1530_e)%d
>>SMTC2 periodicityInMs:%d ePeriod:(NrRrcDb_SsbMtc2_Periodicity_e)%d
>>Unexpected SsbPeriod:%d(enum) Set Default SsbSampleMax
GetSsbSampleMax (enum to sample) SsbPeriod:%d(enum) SelectedSsbSampleMax:%d
>>Unexpected SsbPeriod:%d[ms] Set Default SsbSampleMax
GetSsbSampleMax (ms to sample) - SsbPeriod:%d[ms] SelectedSsbSampleMax:%d
GetEutraRescheduleType - LastSrchTime:%d SrchDiff:%d LastMeasTime:%d MeasDiff:%d
>>Check LastMeasType:%d SrchDiff:%d MeasDiff:%d
Wrong Enum value detected in ConvertEnumToValueForTTT function:%d(enum) set TTT ms as 320 to make default value
NrCellSrchPbdDb_t::InitHypoFo
NrCellSrchPbdDb_t::GetSelectedHypoFoIndex(%d) - HypoFoListNum:%d, SelectedHypoFoIndex:%d, SelectedHypoFO:%d
NrCellSrchPbdDb_t::SetSelectedHypoFO - HypoFO:%d
NrCellSrchPbdDb_t::AddHypoFO - HypoFO:%d, SelectedHypoFO:%d, HypoFoListNum:%d
>>HypoFoList[%d] exists
>>Add HypoFoList[%d] - HypoFO:%d, HypoFoListNum:%d
NrCellSrchPbdDb_t::SetNextSelectedHypoFO
>>HypoFoListIndex(%d) is the last - HypoFoListNum:%d
ResultsSsbIndex[%d]
MeasResultServingCell.MeasResult.RsIndexResults.ResultsSsbIndex.SsbResultsPresent:%d, SsbIndex:%d
MeasResultServingCell.MeasResult.RsIndexResults.ResultsSsbIndex.SsbResults.RsrpPresent:%d, RsrqPresent:%d, SinrPresent:%d
MeasResultServingCell.MeasResult.RsIndexResults.ResultsSsbIndex.SsbResults.Rsrp:%d, Rsrq:%d, Sinr:%d
ResultsCsiRsIndex[%d]
MeasResultServingCell.MeasResult.RsIndexResults.ResultsCsiRsIndex.CsiRsResultsPresent:%d, CsiRsIndex:%d
MeasResultServingCell.MeasResult.RsIndexResults.ResultsCsiRsIndex.CsiRsResults.RsrpPresent:%d, RsrqPresent:%d, SinrPresent:%d
MeasResultServingCell.MeasResult.RsIndexResults.ResultsCsiRsIndex.CsiRsResults.Rsrp:%d, Rsrq:%d, Sinr:%d
ResultsSsbIndex[%d]
MeasResultBestNeighCell.MeasResult.RsIndexResults.ResultsSsbIndex.SsbResultsPresent:%d, SsbIndex:%d
MeasResultBestNeighCell.MeasResult.RsIndexResults.ResultsSsbIndex.SsbResults.RsrpPresent:%d, RsrqPresent:%d, SinrPresent:%d
MeasResultBestNeighCell.MeasResult.RsIndexResults.ResultsSsbIndex.SsbResults.Rsrp:%d, Rsrq:%d, Sinr:%d
ResultsCsiRsIndex[%d]
MeasResultBestNeighCell.MeasResult.RsIndexResults.ResultsCsiRsIndex.CsiRsResultsPresent:%d, CsiRsIndex:%d
MeasResultBestNeighCell.MeasResult.RsIndexResults.ResultsCsiRsIndex.CsiRsResults.RsrpPresent:%d, RsrqPresent:%d, SinrPresent:%d
MeasResultBestNeighCell.MeasResult.RsIndexResults.ResultsCsiRsIndex.CsiRsResults.Rsrp:%d, Rsrq:%d, Sinr:%d
ResultsSsbIndex[%d]
MeasResultNeighCells.MeasResult.RsIndexResults.ResultsSsbIndex.SsbResultsPresent:%d, SsbIndex:%d
MeasResultNeighCells.MeasResult.RsIndexResults.ResultsSsbIndex.SsbResults.RsrpPresent:%d, RsrqPresent:%d, SinrPresent:%d
MeasResultNeighCells.MeasResult.RsIndexResults.ResultsSsbIndex.SsbResults.Rsrp:%d, Rsrq:%d, Sinr:%d
ResultsCsiRsIndex[%d]
MeasResultNeighCells.MeasResult.RsIndexResults.ResultsCsiRsIndex.CsiRsResultsPresent:%d, CsiRsIndex:%d
MeasResultNeighCells.MeasResult.RsIndexResults.ResultsCsiRsIndex.CsiRsResults.RsrpPresent:%d, RsrqPresent:%d, SinrPresent:%d
MeasResultNeighCells.MeasResult.RsIndexResults.ResultsCsiRsIndex.CsiRsResults.Rsrp:%d, Rsrq:%d, Sinr:%d
