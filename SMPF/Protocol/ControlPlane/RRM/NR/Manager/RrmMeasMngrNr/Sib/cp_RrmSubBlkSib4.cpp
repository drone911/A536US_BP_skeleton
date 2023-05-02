RrmSubBlkSib4::RrmSubBlkSib4()
RrmSubBlkSib4::~RrmSubBlkSib4()
DecodeSib4
>>interFreqCarrierFreqList[%d] - PresentBitmask:0x%08x %08x
>>dl_CarrierFreq:%d
>>dl_CarrierFreq:ABSENT
>>ssbSubcarrierSpacing:(enum)%d
>>ssbSubcarrierSpacing:ABSENT
>>Skip interFreq - duplicated with intraFreq
>>interFreqCarrierFreqList[%d] - MeasObjectId:CR_INTER(%d) is assigned
>>INTER FREQ:NULL
DecodeSib4_sub_InterFreqCarrierFreqInfo - MeasObjectId:%d
>>dl_CarrierFreq:%d
>>dl_CarrierFreq:ABSENT
>>ssbSubcarrierSpacing:(enum)%d
>>ssbSubcarrierSpacing:ABSENT
>>INTER FREQ(MeasObjectId:%d) - BAND:%d ARFCN:%d SCS:(enum)%d
>>INTER FREQ(MeasObjectId:%d) - sibInterFreqInfo
>>DeriveSsbIndexFromCell:(bool)%d
>>DeriveSsbIndexFromCell:ABSENT((bool)%d)
>>INTER FREQ(MeasObjectId:%d) - CELL LIST
>>UPDATE INTER FREQ(MeasObjectId:%d) - carrierFreqInfo
>>UPDATE INTER FREQ(MeasObjectId:%d) - reselectionPriority:%d(ReselectionPrioritySIB:%d ReselectionSubPrioritySIB:%d)
>>UPDATE INTER FREQ - Treselection:%d
>>TreselectionSfPresent is vaild
>>TreselectionSfPresent is not vaild
>>UPDATE INTER FREQ - sfMedium(%d) sfHigh(%d)
DecodeSib4_InterFreqBlackCellList
DecodeSib4_InterFreqNeighCellList - MeasObjectId:%d
>>InterFreqNeighCellInfo[%d] - PresentBitmask:0x%08x %08x
>>physCellId:%d
>>physCellId:ABSENT
>>pCell:NULL
>>ADD CELL to INTER FREQ - ObjectId:%d SetType:UNIDLISTED((enum)%d) SCS:(enum)%d BAND:%d
::ADDED
::FAILED
>>MOVE CELL to CANDILISTEDCELLSET - ObjectId:%d, PhyCellId:%d
::FAILED
>>MOVE CELL to IDLISTEDCELLSET - ObjectId:%d, PhyCellId:%d
::FAILED
>>interFreqNeighCellList:ABSENT
DecodeSib4_sub_InterFreqNeighCellInfo
>>physCellId:%d
>>physCellId:ABSENT
>>QoffsetCell:(enum)%d(%d[/100dB])
>>QoffsetCell:ABSENT,DEFAULT(%d[/100dB])
>>QrxLevMinOffsetCell:%d(%d[/100dB])
>>QrxLevMinOffsetCell:ABSENT,DEFAULT(%d[/100dB])
>>QrxLevMinOffsetCellSUL:%d(%d[/100dB])
>>QrxLevMinOffsetCellSUL:ABSENT,DEFAULT(%d[/100dB])
>>QqualMinOffsetCell:%d(%d[/100dB])
>>QrxLevMinOffsetCell:ABSENT,DEFAULT(%d[/100dB])
>>UPDATE INTER NCELL - neighCellInfo
DecodeSib4_sub_freqBandIndicatorNR
>>NrMultiBandInfoPresentBitmask:0x%08x %08x
::freqBandIndicatorNR:%d
>>rIE.frequencyBandList.frequencyBandList[0]:NULL
freqBandIndicatorNR:%d is present in SIB4
freqBandIndicatorNR:%d is not present in SIB4
DecodeSib4_sub_SsBlocksParameter
>>nrofSS_BlocksToAverage:%d(NroSsBlocksToAvgPresent:(bool)%d NroSsBlocksToAvg:%d)
>>nrofSS_BlocksToAverage:ABSENT(NroSsBlocksToAvgPresent:(bool)%d NroSsBlocksToAvg:%d)
>>AbsThreshSsBlocksConsolidationPresent:(bool)%d
::ThresholdRsrp:%d(%d[/100dBm])
::ThresholdRsrp:ABSENT((bool)%d)
::ThresholdRsrq:%d(%d[/100dB])
::ThresholdRsrq:ABSENT((bool)%d)
::ThresholdSinr:%d(%d[/100dB])
::ThresholdSinr:ABSENT((bool)%d)
>>AbsThreshSsBlocksConsolidationPresent:ABSENT(bool)%d
DecodeSib4_sub_Smtc
>>SMTC - Periodicity:(enum)%d(%d[sf]) Offset:(enum)%d(%d[sf]) Duration:(enum)%d(%d[sf])
>>SMTC - ABSENT((bool)%d) Periodicity:%d[sf]
DecodeSib4_sub_SsbToMeasure
>>SsbToMeasure:present(SsbToMeasure:0x%08x %08x)
>>SsbToMeasure:ABSENT,DEFAULT(SsbToMeasure:0x%08x %08x)
DecodeSib4_sub_SsRssiMeasurement
>>ss_RSSI_Measurement:present((bool)%d)
>>ss_RSSI_Measurement:ABSENT((bool)%d)
DecodeSib4_sub_Pmax
>>Pmax:%d(%d[/100dBm])
>>Pmax:ABSENT,DEFAULT(%d[/100dBm])
DecodeSib4_sub_ThreshX
>>ThreshX_HighP:%d(%d[/100dBm])
>>ThreshX_HighP:ABSENT,DEFAULT(%d[/100dBm])
>>threshX_LowP:%d(%d[/100dBm])
>>ThreshX_LowP:ABSENT(%d[/100dBm])
>>ThreshX_HighQ:%d(%d[/100dB]) threshX_LowQ:%d(%d[/100dB])
>>ThreshX_HighQ:ABSENT((bool)%d) threshX_LowQ:ABSENT((bool)%d)
DecodeSib4_sub_Qparameter
>>QrxLevMin:%d(%d[/100dBm])
>>QrxLevMin:%d(%d[/100dBm])
>>QrxLevMinSUL:%d((bool)%d %d[/100dBm])
>>QrxLevMinSUL:ABSENT((bool)%d)
>>QqualMin:%d(%d[/100dBm])
>>QqualMin:ABSENT,DEFAULT(%d[/100dBm])
>>QoffsetFreq:%d(%d[/100dB])
>>QoffsetFreq:ABSENT,DEFAULT(%d[/100dB])
DecodeSib4_sub_ReselectionPriority
>>ReselectionPrioritySIB:%d(%d)
>>ReselectionPrioritySIB:ABSENT,DEFAULT(%d)
>>ReselectionSubPrioritySIB:(enum)%d(%d)
>>ReselectionSubPrioritySIB:ABSENT,DEFAULT(%d)
DecodeSib4_sub_TreselectionNR
>>TreselectionSIB:%d(%d[s])
>>TreselectionSIB:ABSENT,DEFAULT(%d[s])
>>TreselectionSf:PRESENT,(bool)%d High:(enum)%d(%d[%]) Medium:(enum)%d(%d[%])
>>TreselectionSf:ABSENT,(bool)%d
>>Freq %d Disable EARLY MEASURE
