RrmServCellInfoNr::RrmServCellInfoNr()
RrmServCellInfoNr::~RrmServCellInfoNr()
RrmServCellInfoNr::Initialize()
RrmServCellInfoNr::SetCellType - m_CellType set to %d
RrmServCellInfoNr::SetPresentServingCellConfigCommon(Arfcn:%d CellId:%d) - bPresent:(bool)%d
RrmServCellInfoNr::SetSsbPeriodicity - SsbPeriodicity set to %d
RrmServCellInfoNr::SetSsbPositionsInBurst - shortBitmap(0x%X)
RrmServCellInfoNr::SetSsbPositionsInBurst - mediumBitmap(0x%X)
RrmServCellInfoNr::SetSsbPositionsInBurst - longBitmap(0x%X)
RrmServCellInfoNr::SetSsbPositionsInBurst - invalid ssbPositionsInBurst.ssbPositionsInBurst.choice(%d)
RrmServCellInfoNr::GetFirstValidScsSpecificCarrierList - Valid ScsSpecificCarrier found at %d
RrmServCellInfoNr::GetFirstValidScsSpecificCarrierList - Valid ScsSpecificCarrier not found!!!!
RrmServCellInfoNr::SetCellSpecificInfo
RrmServCellInfoNr::SetCellSpecificInfo - pScellConfig is invalid
>>SCELL_INDEX_MASK(0x%08x) ScellConfigPresentBitmask(0x%08x %08x)
>> ScellIndex set to %d
RrmServCellInfoNr::SetCellSpecificInfo - SCELL_INDEX_MASK not present
>>SCELL_CONFIG_DEDI(0x%08x) ScellConfigPresentBitmask(0x%08x %08x)
>> m_firstActiveDownlinkBwpId %d
RrmServCellInfoNr::SetCellSpecificInfo - SCELL_CONFIG_DEDI not present
>>SCELL_CONFIG_COMMON_MASK(0x%08x) ScellConfigPresentBitmask(0x%08x %08x)
>>SCELL_CONFIG_DEDI(0x%08x) ScellConfigPresentBitmask(0x%08x %08x)
>>SERVINGCELLMO_MASK(0x%08x) ServingCellConfigPresentBitMask(0x%08x %08x)
>> pScellConfig->ScellConfigDedi.servingCellMo(%d)
>>[SET] RSRP:(bool)%d RSRQ:(bool)%d SINR:(bool)%d
>>[GET] RSRP:(bool)%d RSRQ:(bool)%d SINR:(bool)%d
>>InitSrchDoneCnt(m_SrchDoneCnt:0)
>>IncSrchDoneCnt(m_SrchDoneCnt:%d)
RrmServCellInfoNr::DeleteSibServCellInfo
>>Delete m_SibServCellInfo.pCellSelectionInfo
>>Delete m_SibServCellInfo.pServingCellConfigCommonSIB
pCellSelectionInfo:nullptr - Arfcn:%d CellId:%d
SetSibCellSelectionInfo - Arfcn:%d CellId:%d
TraceCellSelectionInfo - OLD
pCellSelectionInfo:nullptr - mem alloc
TraceCellSelectionInfo - NEW
pServingCellConfigCommonSIB:nullptr - Arfcn:%d CellId:%d
SetSibServingCellConfigCommonSIB - Arfcn:%d CellId:%d
TraceServingCellConfigCommonSIB - OLD
pServingCellConfigCommonSIB:nullptr - mem alloc
TraceServingCellConfigCommonSIB - NEW
>>ServingCellConfigCommon/SIB is absent - set default for Periodicity and SsbToMeasure
>>Arfcn:%d CellId:%d ServCellIndex:%d antenna:%d - #%d SsbIndex:%d SsbRsrp:%d
>>CellSelectionInfo - QrxLevMin:%d[/100dBm] QrxLevMinSULPresent:(bool)%d QrxLevMinSUL:%d QrxLevMinOffset:%d[/100dB] QqualMin:%d[/100dB] QqualMinOffset:%d[/100dB]
>>ServingCellConfigCommonSIB - Pmax:%d[/100dBm] AdditionalPmaxPresent:(bool)%d AdditionalPmax:%d[/100dBm] DefaultDrxCycle:%d[ms]
>>PHYS_CELL_ID_MASK(0x%08x) ServingCellConfigCommonPresentBitmask(0x%08x %08x)
>> PhyCellId(%d)
RrmServCellInfoNr::SetCellSpecificInfo - PHYS_CELL_ID_MASK is not present
>>DOWNLINK_CONFIG_COMMON_MASK(0x%08x) ServingCellConfigCommonPresentBitmask(0x%08x %08x)
>>ABSOLUTE_FREQUENCY_SSB_MASK(0x%08x) FrequencyInfoDlPresentBitmask(0x%08x %08x)
>> Arfcn(%d), SsbAbsFreq(%d)
RrmServCellInfoNr::SetCellSpecificInfo - ABSOLUTE_FREQUENCY_SSB_MASK is not present
>>FREQUENCY_BAND_LIST_MASK(0x%08x) FrequencyInfoDlPresentBitmask(0x%08x %08x)
>> BandId(%d)
RrmServCellInfoNr::SetCellSpecificInfo - FREQUENCY_BAND_LIST_MASK is not present
RrmServCellInfoNr::SetCellSpecificInfo - DOWNLINK_CONFIG_COMMON_MASK is not present
>>FREQUENCY_INFO_UL_MASK(0x%08x) UplinkConfigCommonPresentBitmask(0x%08x %08x)
>>SCS_SPECIFIC_CARRIER_LIST_MASK(0x%08x) UplinkConfigCommonPresentBitmask(0x%08x %08x)
>> scsSpecificCarrierList[%d] isValid(%d), offsetToCarrier(%d), subCarrierSpacing(%d), carrierBandwidth(%d)
RrmServCellInfoNr::SetCellSpecificInfo - SCS_SPECIFIC_CARRIER_LIST_MASK is not present
RrmServCellInfoNr::SetCellSpecificInfo - FREQUENCY_INFO_UL_MASK is not present
>>SSBSUBCARRIER_SPACING_MASK(0x%08x) ServingCellConfigCommonPresentBitmask(0x%08x %08x)
>> ssbSubcarrierSpacing(%d)
RrmServCellInfoNr::SetCellSpecificInfo - SSBSUBCARRIER_SPACING_MASK is not present
>>SSB_PERIODICITY_SERVINGCELL_MASK(0x%08x) ServingCellConfigCommonPresentBitmask(0x%08x %08x)
>> SsbPeriodicity(%d)
RrmServCellInfoNr::SetCellSpecificInfo - SSB_PERIODICITY_SERVINGCELL_MASK is not present
>>SSB_POSITION_IN_BURST_MASK(0x%08x) ServingCellConfigCommonPresentBitmask(0x%08x %08x)
>> ssbPositionsInBurst.choice(%d)
RrmServCellInfoNr::SetCellSpecificInfo - SSB_POSITION_IN_BURST_MASK is not present
RrmServCellInfoNr::SetCellSpecificInfo - SCELL_CONFIG_COMMON_MASK not present
