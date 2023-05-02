RrmSubBlkSib2::RrmSubBlkSib2()
RrmSubBlkSib2::~RrmSubBlkSib2()
DecodeSib2 - PresentBitmask:0x%08x %08x
>>INTRA FREQ:NULL
>>CellReselectionInfoCommon:ABSENT
>>CellReselectionServingFreqInfo:ABSENT
>>IntraFreqCellReselectionInfo:ABSENT
>>UPDATE INTRA FREQ - reselectionPriority:%d(ReselectionPrioritySIB:%d ReselectionSubPrioritySIB:%d)
>>UPDATE INTRA FREQ - Treselection:%d
>>TreselectionSfPresent is vaild
>>TreselectionSfPresent is not vaild
>>UPDATE INTRA FREQ - sfMedium(%d) sfHigh(%d)
DecodeSib2_CellReselectionInfoCommon - PresentBitmask:0x%08x %08x
>>RangeToBestCell:(enum)%d(%d[/100dB])
>>RangeToBestCell:ABSENT((bool)%d)
>>QhystSIB(enum)%d(%d[/100dB])
DecodeSib2_CellReselectionServingFreqInfo - PresentBitmask:0x%08x %08x
DecodeSib2_IntraFreqCellReselectionInfo - PresentBitmask:0x%08x %08x
>>TreselectionSIB:%d(%d[s])
>>TreselectionSIB:ABSENT,DEFAULT(%d[s])
>>TreselectionSf:PRESENT,(bool)%d High:(enum)%d(%d[%]) Medium:(enum)%d(%d[%])
>>TreselectionSf:ABSENT,(bool)%d
>>deriveSSB_IndexFromCell:(bool)%d((bool)%d)
>>deriveSSB_IndexFromCell:ABSENT((bool)%d)
DecodeSib2_sub_SsBlocksParameter
>>NrOfSsbToAverage:%d(%d)
>>NrOfSsbToAverage:ABSENT((bool)%d)
>>AbsThreshSsbConsolidationPresent:(bool)%d
::ThresholdRsrp:%d(%d[/100dBm])
::ThresholdRsrp:ABSENT((bool)%d)
::ThresholdRsrq:%d(%d[/100dB])
::ThresholdRsrq:ABSENT((bool)%d)
::ThresholdSinr:%d(%d[/100dB])
::ThresholdSinr:ABSENT((bool)%d)
>>AbsThreshSsbConsolidationPresent:ABSENT(bool)%d
DecodeSib2_sub_SpeedStateReselectionPars
>>SpeedStateReselectionParsPresent:(bool)%d
::QhystSf.SfMedium:%d(%d)
::QhystSf.SfHigh:%d(%d)
>>SpeedStateReselectionParsPresent:ABSENT(bool)%d
DecodeSib2_sub_MobilityStateParameters
>>Tevaluation:(enum)%d(%d[s])
>>Tevaluation:ABSENT(%d[s])
>>ThystNormal:(enum)%d(%d[s])
>>ThystNormal:ABSENT,DEFAULT(%d[s])
>>NcellChangeMedium:%d(%d)
>>NcellChangeMedium:ABSENT(%d)
>>NCellChangeHigh:%d(%d)
>>NCellChangeHigh:ABSENT,DEFAULT(%d)
DecodeSib2_sub_ReselectionPriority
>>ReselectionPrioritySIB:%d(%d)
>>ReselectionPrioritySIB:ABSENT,DEFAULT(%d)
>>ReselectionSubPrioritySIB:(enum)%d(%d)
>>ReselectionSubPrioritySIB:ABSENT,DEFAULT(%d)
DecodeSib2_sub_SnonIntraSearch
>>SnonIntraSearchP:%d(%d[/100dBm])
>>SnonIntraSearchP:ABSENT,DEFAULT(%d[/100dBm])
>>SnonIntraSearchQ:%d(%d[/100dB])
>>SnonIntraSearchQ:ABSENT,DEFAULT(%d[/100dB])
DecodeSib2_sub_ThreshServingLow
>>ThreshServingLowP:%d(%d[/100dBm])
>>ThreshServingLowP:ABSENT,DEFAULT(%d[/100dBm])
>>ThreshServingLowQ:%d(%d[/100dB]) ThreshServingLowQPresent:(bool)%d
>>ThreshServingLowQ:ABSENT(bool)%d
DecodeSib2_sub_Qparameter
>>QrxLevMin:%d(%d[/100dBm])
>>QrxLevMin:%d(%d[/100dBm])
>>QrxLevMinSUL:%d((bool)%d %d[/100dBm])
>>QrxLevMinSUL:ABSENT((bool)%d)
>>QqualMin:%d(%d[/100dBm])
>>QqualMin:ABSENT,DEFAULT(%d[/100dBm])
DecodeSib2_sub_SintraSearch
>>SintraSearchP:%d(%d[/100dBm])
>>SintraSearchP:ABSENT,DEFAULT(%d[/100dBm])
>>SintraSearchQ:%d(%d[/100dBm])
>>SintraSearchQ:ABSENT,DEFAULT(%d[/100dBm])
DecodeSib2_sub_Pmax
>>Pmax:%d(%d[/100dBm])
>>Pmax:ABSENT,DEFAULT(%d[/100dBm])
DecodeSib2_sub_Smtc
>>SMTC - Periodicity:(enum)%d(%d[sf]) Offset:(enum)%d(%d[sf]) Duration:(enum)%d(%d[sf])
>>SMTC - ABSENT((bool)%d Periodicity:%d[sf])
DecodeSib2_sub_SsRssiMeasurement
>>ss_RSSI_Measurement:present((bool)%d)
>>ss_RSSI_Measurement:ABSENT((bool)%d)
DecodeSib2_sub_SsbToMeasure
>>SsbToMeasure:present(SsbToMeasure:0x%08x %08x)
>>SsbToMeasure:ABSENT,DEFAULT(SsbToMeasure:0x%08x %08x)
DecodeSib2_RelaxedMeasurement - PresentBitmask:0x%08x %08x
>>ssearchDeltaPR16:(enum)%d(%d[/100dB] tsearchDeltaPR16:(enum)%d(%d[/1000Sec])
>>ssearchThresholdPR16:(enum)%d(%d[/100dB]) ssearchThresholdQR16:(enum)%d(%d[/100dB])
>>relaxedMeasConditionR16:(enum)%d relaxedMeasAndCondition:(bool)%d)
