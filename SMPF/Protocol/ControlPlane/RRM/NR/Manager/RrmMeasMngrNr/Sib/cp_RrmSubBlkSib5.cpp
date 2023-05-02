RrmSubBlkSib5::RrmSubBlkSib5()
RrmSubBlkSib5::~RrmSubBlkSib5()
DecodeSib5 - PresentBitmask:0x%08x %08x
>>carrierFreqListEUTRA[%d] - PresentBitmask:0x%08x %08x
>>carrierFreq:%d
>>carrierFreq:ABSENT
>>carrierFreqListEUTRA[%d] - MeasObjectId:CR_IRAT_LTE(%d) is assigned
>>EUTRA FREQ:NULL
DecodeSib5_CarrierFreqEUTRA - MeasObjectId:%d
>>carrierFreq:%d
>>carrierFreq:ABSENT
>>EUTRA FREQ(MeasObjectId:%d) - BAND:%d ARFCN:%d
>>Pmax:%d(%d[/100dBm])
>>Pmax:ABSENT,DEFAULT(%d[/100dBm])
>>AllowedMeasBandwidth:(enum)%d(%d[MBW]), EarlyMeasFrequencyEutra %d, EarlyMeasAllowedMeasBandwidth %d
>>AllowedMeasBandwidth:ABSENT,DEFAULT(%d[MBW])
>>PresenceAntennaPort1:(bool)%d
>>PresenceAntennaPort1:ABSENT,DEFAULT((bool)%d)
>>UPDATE EUTRA FREQ(MeasObjectId:%d) - carrierFreqInfo
>>UPDATE EUTRA FREQ(MeasObjectId:%d) - reselectionPriority:%d(ReselectionPrioritySIB:%d ReselectionSubPrioritySIB:%d)
>>HighSpeedEUTRACarrierR16:(bool)%d
DecodeSib5_Eutra_FreqBlackCellList
DecodeSib5_Eutra_FreqNeighCellList
>>EUTRA_freqNeighCellInfo[%d] - PresentBitmask:0x%08x %08x
>>physCellId:%d
>>physCellId:ABSENT
>>pCell:NULL
>>ADD CELL to EUTRA Freq - ObjectId:CR_IRAT_LTE(%d) SetType:UNIDLISTED(%d)
::ADDED
::FAILED
>>MOVE CELL to CANDILISTEDCELLSET - ObjectId:%d, CellId:%d
::FAILED
>>MOVE CELL to IDLISTEDCELLSET - ObjectId:%d, CellId:%d
::FAILED
>>eutra_FreqNeighCellList:ABSENT
DecodeSib5_sub_Eutra_FreqNeighCellInfo
>>physCellId:%d
>>physCellId:ABSENT
>>QoffsetCell:(enum)%d(%d[/100dB])
>>QoffsetCell:ABSENT,DEFAULT(%d[/100dB])
>>QoffsetCell:%d[/100dB] - This field is not used in the specification.
>>QrxLevMinOffsetCell:%d(%d[/100dB])
>>QrxLevMinOffsetCell:ABSENT,DEFAULT(%d[/100dB])
>>QqualMinOffsetCell:%d(%d[/100dB])
>>QrxLevMinOffsetCell:ABSENT,DEFAULT(%d[/100dB])
DecodeSib5_sub_Eutra_freqBandIndicator
>>EUTRAMultiBandInfoPresentBitmask:0x%08x %08x
::EUTRA_freqBandIndicator:%d
EUTRA_freqBandIndicator:%d is present in SIB5
EUTRA_freqBandIndicator:%d is not present in SIB5
DecodeSib5_sub_ReselectionPriority
>>ReselectionPrioritySIB:%d(%d)
>>ReselectionPrioritySIB:ABSENT,DEFAULT(%d)
>>ReselectionSubPrioritySIB:(enum)%d(%d)
>>ReselectionSubPrioritySIB:ABSENT,DEFAULT(%d)
DecodeSib5_sub_ThreshX
>>ThreshX_HighP:%d(%d[/100dBm])
>>ThreshX_HighP:ABSENT,DEFAULT(%d[/100dBm])
>>threshX_LowP:%d(%d[/100dBm])
>>ThreshX_LowP:ABSENT(%d[/100dBm])
>>ThreshX_HighQ:%d(%d[/100dB]) threshX_LowQ:%d(%d[/100dB])
>>ThreshX_HighQ:ABSENT((bool)%d) threshX_LowQ:ABSENT((bool)%d)
DecodeSib5_sub_Qparameter
>>QrxLevMin:%d(%d[/100dBm])
>>QrxLevMin:%d(%d[/100dBm])
>>QqualMin:%d(%d[/100dBm])
>>QqualMin:ABSENT,DEFAULT(%d[/100dBm])
DecodeSib5_sub_TreselectionEutra
>>TreselectionSIB:%d(%d[s])
>>TreselectionSIB:ABSENT,DEFAULT(%d[s])
>>TreselectionSf:PRESENT,(bool)%d High:(enum)%d(%d[%]) Medium:(enum)%d(%d[%])
>>TreselectionSf:ABSENT,(bool)%d
>>UPDATE EUTRA FREQ - Treselection:%d
