RrmSubBlkSib1::RrmSubBlkSib1()
RrmSubBlkSib1::~RrmSubBlkSib1()
DecodeSib1 - PresentBitmask:0x%08x %08x
>>currRrmState:%s(%d)
>>PCELL:NULL
>>CellSelectionInfo:ABSENT
>>ServingCellConfigCommonSIB:ABSENT
DecodeSib1_CellSelectionInfo - PresentBitmask:0x%08x %08x
>>QrxLevMin:%d(%d[/100dBm])
>>QrxLevMin:ABSENT,DEFAULT(%d[/100dBm])
>>QrxLevMinOffset:%d(%d[/100dB])
>>QrxLevMinOffset:ABSENT,DEFAULT(%d[/100dB])
>>QrxLevMinSUL:%d(%d[/100dBm])
>>QrxLevMinSUL:ABSENT((bool)%d)
>>QqualMin:%d(%d[/100dB])
>>QqualMin:ABSENT,DEFAULT(%d[/100dB])
>>QqualMinOffset:%d(%d[/100dB])
>>QqualMinOffset:ABSENT,DEFAULT(%d[/100dB])
DecodeSib1_ServingCellConfigCommonSIB - PresentBitmask:0x%08x %08x
>>ssbPeriodicityServingCell:(enum)%d(%d[ms])
>>ssbPeriodicityServingCell:ABSENT,DEFAULT(%d[ms])
>>highSpeedMeasFlagR16:(bool)%d
DecodeSib1_sub_Pmax
>>FrequencyInfoULSIBPresentBitmask:0x%08x %08x
::Pmax:%d(%d[/100dBm])
>>FrequencyInfoULSIBPresentBitmask:0x%08x %08x
>>NrNsPmaxValuePresentBitmask:0x%08x %08x
::AdditionalPmax:%d(%d[/100dBm])
>>rIE.uplinkConfigCommon.frequencyInfoUL.MultiFrequencyBandList.frequencyBandList[0]:NULL
::Pmax:ABSENT,DEFAULT(%d[/100dBm])
::AdditionalPmax:ABSENT((bool)%d)
DecodeSib1_sub_ssbPositionsInBurst
SsbPositionsInBurstPresentBitmask:0x%08x %08x
>>inOneGroup:0x%02x(0x%02x)
>>inOneGroup:ABSENT,DEFAULT(0x%02x)
>>groupPresence:0x%02x(0x%02x)
>>groupPresence:ABSENT,DEFAULT(0x%02x)
>>ssbPositionsInBurst:ABSENT(inOneGroup:0x%02x groupPresence:0x%02x)
DecodeSib1_sub_freqBandIndicatorNR
>>FrequencyInfoDlSibPresentBitmask:0x%08x %08x
::frequencyInfoDL.SelectedBand)%d
freqBandIndicatorNR:%d is present in frequencyInfoDL.SelectedBand in DownlinkConfigCommonSIB
freqBandIndicatorNR:%d is not present in frequencyInfoDL.SelectedBand in DownlinkConfigCommonSIB
>>FrequencyInfoULSIBPresentBitmask:0x%08x %08x
>>NrMultiBandInfoPresentBitmask:0x%08x %08x
::freqBandIndicatorNR:%d
>>rIE.uplinkConfigCommon.frequencyInfoUL.MultiFrequencyBandList.frequencyBandList[0]:NULL
freqBandIndicatorNR:%d is present in frequencyInfoUL-SIB in UplinkConfigCommonSIB
freqBandIndicatorNR:%d is not present in frequencyInfoUL-SIB in UplinkConfigCommonSIB
>>FrequencyInfoDlSibPresentBitmask:0x%08x %08x
>>NrMultiBandInfoPresentBitmask:0x%08x %08x
::freqBandIndicatorNR:%d
>>rIE.downlinkConfigCommon.frequencyInfoDL.MultiFrequencyBandList.frequencyBandList[0]:NULL
freqBandIndicatorNR:%d is present in frequencyInfoDL-SIB in DownlinkConfigCommonSIB
freqBandIndicatorNR:%d is not present in frequencyInfoDL-SIB in DownlinkConfigCommonSIB
DecodeSib1_sub_defaultPagingCycle
PCCHConfigPresentBitmask:0x%08x %08x
>>defaultPagingCycle:(enum)%d(DefaultDrxCycle:%d[ms])
>>defaultPagingCycle:ABSENT
>>downlinkConfigCommon:ABSENT
>>defaultPagingCycle:ABSENT,DEFAULT(DefaultDrxCycle:0x%d[ms])
DecodeSIB1_CellSelectionCriterion - PresentBitmask:0x%08x %08x
>>CellSelectionInfo:ABSENT
>>ServingCellConfigCommonSIB:ABSENT
DecodeSib1_SsbPositionsInBurst - PresentBitmask:0x%08x %08x
pServingCell is nullptr
>>bPresentSsbPositionsInBurst:(bool)%d rNumSsbToMeasure:%d rSsbToMeasure:0x%08X%08X
>>ServingCellConfigCommonSIB:ABSENT
