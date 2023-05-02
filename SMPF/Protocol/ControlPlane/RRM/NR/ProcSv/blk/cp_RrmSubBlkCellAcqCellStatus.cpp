m_RrmSubBlkCellAcqCellStatus::MakeCellAcqReq
Fail. It is empty NrCellResultInfo
RrmSubBlkCellAcqCellStatus::SetServingInfo
m_pSelectedCellInfo is NULL:Before
ServCellInfo is NULL
m_pSelectedCellInfo is NULL:After
RrmSubBlkCellAcqCellStatus::UpdateIntraFreq()
>>Fail. It is empty SelectedCellIdInfo
>>Fail. It is empty SsbMeasResultInfo
>>pIntraFreqInfo is nullptr and fail to allocate
>>pCellInfoNr is nullptr and fail to allocate
>>Cannot Create MeasObjectNR
>>ADDED - previous intra neighbor cell(objid: %d, pcid:%d)
>>FAILED - previous intra neighbor cell(objid: %d, pcid:%d)
>>pCellInfoNr is nullptr and fail to allocate
>>pPrevServingCellInfoNr - CellPtr:0x%08x
>>Previous ServingCellInfo - BandId:%d Arfcn:%d CellId:%d SsbRsIndex:%d SsbTimingOffset:%d SubCarrierSpacing:%d MeasObjectId:%d
>>ADDED : previous serving cell to ID DETECTED CELL SET.
>>FAILED : previous serving cell to ID DETECTED CELL SET.
>>FAILED : new serving cell is not in CELL SET.
>>ADDED : previous serving cell to ID DETECTED CELL SET.
>>FAILED : previous serving cell to ID DETECTED CELL SET.
>>FAILED : new serving cell is not in CELL SET.
>>ADDED - previous inter neighbor cell(objid: %d, pcid:%d)
>>FAILED - previous inter neighbor cell(objid: %d, pcid:%d)
>>DestroyRrmCellInfoList(objid: %d)
>>IntraFreqInfo - BandId:%d Arfcn:%d SsbAbsFreq:%d SubCarrierSpacing:%d objId:%d
>>pServingCellInfo is nullptr and fail to allocate
>>ServingCellInfo - BandId:%d Arfcn:%d CellId:%d SsbRsIndex:%d SsbTimingOffset:%d
>>ServingCellInfo - SubCarrierSpacing:%d RxBeamIndex:%d NumHF:%d(MibInfo.halfFrameIndex:%d)
ssbPositionsInBurstPresent(%d) value_L(%d) ssbPositionsInBurst(0x%08X%08X)
In Sib1, ssbPositionsInBurstPresent(%d) value_L(%d) ssbPositionsInBurst(0x%08X%08X)
RecvMsg is null
>>Freq_Range(%d)
>> only one numBeamMeasResult
>>[%d]BeamIndex(%d)
>>NumHF:%d SsbIndex:%d RxBeamIdx:%d TimingOffset:%d
::antenna_index(%d) Rsrp(%d) Rsrq(%d) Sinr(%d) Rssi(%d)
Fail. It is empty SsbMeasResult
>>[%d]BeamIndex(%d)
>>NumHF:%d SsbIndex:%d RxBeamIdx:%d TimingOffset:%d
::antenna_index(%d) Rsrp(%d) Rsrq(%d) Sinr(%d) Rssi(%d)
Fail. It is empty SsbMeasResult
Lvalue(%d)
EvalCellSelection - QoffsetTemp:%d PPowerClass:%d
m_NrCellSrchPbdDb BestRsrp(%d) BestRsrq(%d)
ServingMeas is not valid
SelectedCellInfo BestRsrp(%d) BestRsrq(%d)
>>GET Cell Selection Criterion from SIB1
::SIB1:NULL
>>For FR2, Pcompensation is set to 0
::Srxlev:%d Squal:%d IsSFulfilled:(bool)%d QoffsetTemp:%d
::BestRsrp:%d[/100dBm] QrxLevMin:%d[/100dB] QrxLevMinOffset:%d[/100dB] Pcompensation:%d[/100dB]=MAX((Pmax:%d - PPowerClass:%d),0)
::BestRsrq:%d[/100dBm] QqualMin:%d[/100dB] QqualMinOffset:%d[/100dB]
