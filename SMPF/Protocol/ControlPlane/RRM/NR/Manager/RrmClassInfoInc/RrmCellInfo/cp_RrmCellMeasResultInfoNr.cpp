RrmCellMeasResultInfoNr::RrmCellMeasResultInfoNr()
RrmCellMeasResultInfoNr::~RrmCellMeasResultInfoNr()
RrmCellMeasResultInfoNr::InitAllExceptNwParam - RsType:%s(%d)
Unknown type of rsTYpe(%d)! return RSTYPE_SSB result as default
Unknown type of rsTYpe(%d)! return RSTYPE_SSB result as default
RrmCellMeasResultInfoNr::UpdateCellMeasResult - pMeasResultNr is NULL!
RrmCellMeasResultInfoNr::UpdateCellMeasResult - Unknown type of rsType(%d)!
RrmCellMeasResultInfoNr::UpdateCellMeasResult - Unknown type of rsType(%d)!
RrmCellMeasResultInfoNr::SetCellMeasResultServSinr(%d) prev(%d)
RrmCellMeasResultInfoNr::GetBestRsIndex - MeasurementQuantity(%d)
>> BestRsIndex(%d) returned
>> BestRsIndex(0x%x) returned
RrmCellMeasResultInfoNr::DropMeasResultPerRSIndexForSsb Cell[%d,%d] - isDerive(%d)
>> bestRsIndex is changed, Drop rsindex:%d rssinr:%d (< %d)
>> skip ssb prunning for rs-index(%d)
>> Current bestRsIndex is RRM_INVALID_RS_INDEX(0x%x). Drop rsindex:%d rssinr:%d (< %d)
>> Current bestRsIndex is %d, Drop rsindex:%d rssinr:%d (< %d)
RrmCellInfoNr::DropMeasResultPerRSIndexForSsb - cell ID :%d best rsindex:%d rssinr:%d
>> Current bestRsIndex[%d] RSSINR:%d , Drop rsindex[%d] RSSINR:%d (RELATIVE %d)
UpdateL1measuredBeamForSsb - numBeamResult:%d NumSsbIndex:%d MAX_NUM_SSB_MEAS:%d SsbBitmap:0x%08x %08x
::SKIP SsbIndex[%d]:%d - maxNrOfRsIndex:%d
::SKIP SsbIndex[%d]:%d - out of SsbBitmap:0x%08x %08x
>>CLEAR L1Measured for fast tracking - DIFF(L1measured.Rsrp:%d, L1Filtered.Rsrp:%d) > RSRP_OFFSET:%d
L1Measured beam - SSB RxAnt:%d CellId:%-3d RsIndex:%d Rsrp:%d[/100dBm] Rsrq:%d[/100dB] RsSinr:%d[/100dB] Rssi:%d[/100dBm]
UpdateL1measuredBeamForCsiRs - numBeamResult:%d CsiRsIndexCnt:%d MAX_NUM_CSIRS_MEAS:%d
>>rCsiMeasResult.CsiRsIndex[%d]:%d
::SKIP CsiRsIndex[%d]:%d - maxNrOfRsIndex:%d
>>CLEAR L1Measured for fast tracking - DIFF(L1measured.Rsrp:%d, L1Filtered.Rsrp:%d) > RSRP_OFFSET:%d
L1Measured beam - CSI-RS RxAnt:%d CellId:%-3d RsIndex:%d Rsrp:%d[/100dBm] Rsrq:%d[/100dB] RsSinr:%d[/100dB] Rssi:%d[/100dBm]
RrmCellMeasResultInfoNr::StoreSsbMeasResult
RrmCellMeasResultInfoNr::StoreCsiMeasResult - Arfcn:%d CellId:%d bUpdateL3:(bool)%d
>>Mismatching m_CellId:%d rCsiMeasResult.CellId:%d
