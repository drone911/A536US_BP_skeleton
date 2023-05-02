RrmBeamMeasResultInfoNr::RrmBeamMeasResultInfoNr()
RrmBeamMeasResultInfoNr::RrmBeamMeasResultInfoNr()
>>m_SsbMeasResultList.size:%d
>>m_CsiMeasResultList.size:%d
>>m_SsbMeasResultList_PerRx[%d].size:%d
>>m_CsiMeasResultList_PerRx[%d].size:%d
RrmBeamMeasResultInfoNr::GetSsbMeasResultList - AntIndex:%d SsbMeasResultList(cell).size:%d
RrmBeamMeasResultInfoNr::SetSsbMeasResultList - AntIndex:%d SsbMeasResultList(param).size:%d
%s - RxAnt:%d CellId:%d MO:%d MeasQuantity:(enum)%d eFilterType:(enum)%d
RrmBeamMeasResultInfoNr::UpdateMeasResultPerRSIndexForSsb RxAnt:%d Cell[%d,%d] - RsIndex(%d) is invalid. maxNrOfRsIndex(%d)
RrmBeamMeasResultInfoNr::UpdateMeasResultPerRSIndexForSsb RxAnt:%d Cell[%d,%d] - Copy RsIndex(%d) to rMeasResultNr.RSIndex(%d)
RrmBeamMeasResultInfoNr::UpdateMeasResultPerRSIndexForCsiRs RxAnt:%d Cell:%d - RsIndex(%d) is invalid. MAX_NROF_CSI_RS_RESOURCES_RRM(%d)
RrmBeamMeasResultInfoNr::UpdateMeasResultPerRSIndexForCsiRs RxAnt:%d Cell:%d - Copy RsIndex(%d) to rMeasResultNr.RSIndex(%d)
RrmBeamMeasResultInfoNr::GetMeasResultPerRSIndexForSsb RxAnt:%d Cell[%d,%d] - RsIndex(%d) is invalid. maxNrOfRsIndex(%d)
RrmBeamMeasResultInfoNr::GetMeasResultPerRSIndexForCsiRs RxAnt:%d Cell:%d - RsIndex(%d) is invalid. MAX_NROF_CSI_RS_RESOURCES_RRM(%d)
RrmBeamMeasResultInfoNr::GetFirstMeasResultPerRSIndex eRsType:%d RxAnt:%d Cell[%d,%d] - List is empty
RrmBeamMeasResultInfoNr::GetFirstMeasResultPerRSIndex eRsType:%d RxAnt:%d Cell[%d,%d] - FIRST RsIndex:%d
RrmBeamMeasResultInfoNr::GetNextMeasResultPerRSIndex eRsType:%d RxAnt:%d Cell[%d,%d] - end of list
RrmBeamMeasResultInfoNr::GetNextMeasResultPerRSIndex eRsType:%d RxAnt:%d Cell[%d,%d] - NEXT RsIndex:%d
RemoveMeasResultPerRSIndexForSsb - RxAnt:%d RsIndex(%d) is invalid. maxNrOfRsIndex(%d)
RemoveMeasResultPerRSIndexForCsiRs - RxAnt:%d RsIndex(%d) is invalid. MAX_NROF_CSI_RS_RESOURCES_RRM(%d)
>>REMOVE MeasResultPerRSIndexForCsiRs(RxAnt:%d RSIndex:%d CellId:%d MO:%d)
>>REMOVE MeasResultPerRSIndex(RSIndex:%d) - Out of SsbBitmap:0x%08x %08x
>>REMOVE MeasResultPerRSIndex(RxAnt:%d RSIndex:%d CellId:%d MO:%d) - Out of SsbBitmap:0x%08x %08x
RrmBeamMeasResultInfoNr::UpdateInvalidCountOfAllMeasResult Cell - bIncrease:(bool)%d
RrmBeamMeasResultInfoNr::ArrangeMeasResultList Cell[%d,%d]
L1Filtered beam - SSB RxAnt:%d CellId:%-3d RsIndex:%d Rsrp:%d[/100dBm] Rsrq:%d[/100dB] RsSinr:%d[/100dB] Rssi:%d[/100dBm]
>>REMOVE SsbMeasResultList_PerRx[%d](RSIndex:%d CellId:%d) - InvalidCount:%d numElement:%d SsbBitmap:0x%08x %08x
RrmBeamMeasResultInfoNr::ArrangeMeasResultListRepresentative Cell[%d,%d]
L1Filtered beam - SSB Arfcn:%d CellId:%-3d RsIndex:%d Rsrp:%d[/100dBm] Rsrq:%d[/100dB] RsSinr:%d[/100dB] Rssi:%d[/100dBm]
>>REMOVE SsbMeasResultList(RSIndex:%d CellId:%d) - InvalidCount:%d SsbBitmap:0x%08x %08x
RrmBeamMeasResultInfoNr::UpdateInvalidCountOfAllMeasResultForCsiRs Cell:%d - bIncrease:(bool)%d
RrmBeamMeasResultInfoNr::ArrangeMeasResultListForCsiRs Arfcn: %d Cell:%d
L1Filtered beam - CSI-RS RxAnt:%d CellId:%-3d RsIndex:%d Rsrp:%d[/100dBm] Rsrq:%d[/100dB] RsSinr:%d[/100dB] Rssi:%d[/100dBm]
>>REMOVE CsiMeasResultList_PerRx[%d](RSIndex:%d CellId:%d) - InvalidCount:%d numElement:%d
RrmBeamMeasResultInfoNr::ArrangeMeasResultListRepresentativeForCsiRs Cell:%d
L1Filtered beam - CSI-RS MO:%d CellId:%-3d RsIndex:%d Rsrp:%d[/100dBm] Rsrq:%d[/100dB] RsSinr:%d[/100dB] Rssi:%d[/100dBm]
>>REMOVE CsiMeasResultList(RSIndex:%d CellId:%d) - InvalidCount:%d
