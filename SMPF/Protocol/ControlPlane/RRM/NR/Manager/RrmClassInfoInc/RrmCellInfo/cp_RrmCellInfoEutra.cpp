RrmCellInfoEutra::RrmCellInfoEutra()
RrmCellInfoEutra::~RrmCellInfoEutra()
>>IGNORE INVALID - MEAS FAIL case
>>Delete m_SibCellInfo.pNeighCellInfo:0x%08x
>>Delete m_SibCellInfo.pTreselCount:0x%08x
RrmCellInfoEutra::SetSibNeighCellInfo - Arfcn:%d CellId:%d
OLD SibNeighCellInfo
>>pNeighCellInfo is allocated - ptr:0x%08x
NEW SibNeighCellInfo
RrmCellInfoEutra::SetSibTreselCount - Arfcn:%d CellId:%d
>>pTreselCount is allocated - ptr:0x%08x
>>QoffsetCell:%d QrxLevMinOffsetCell:%d QqualMinOffsetCell:%d
>>l1measuredResult.Rsrp:%d is invalid
L1Measured cell - LTE Arfcn:%d CellId:%-3d Rsrp:%d[/100dBm] Rsrq:%d[/100dB] RsSinr:%d[/100dB]
>>l1measuredResult.Rsrp:%d is invalid
RrmCellInfoNr::StoreSsbMeasResultPerBeam - Arfcn:%d CellId:%d
>>CLEAR L1Measured for fast tracking - DIFF(L1measured.Rsrp:%d, L1Filtered.Rsrp:%d) > RSRP_OFFSET:%d
L1Filtered cell - LTE Arfcn:%d CellId:%-3d Rsrp:%d[/100dBm] Rsrq:%d[/100dB] RsSinr:%d[/100dB]
RrmCellInfoNr::UpdateCellMeasResult - pMeasResultNr is nullptr!
