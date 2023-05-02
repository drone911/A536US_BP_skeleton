RrmCellGrpSemiStaticDbNr::RrmCellGrpSemiStaticDbNr()
RrmCellGrpSemiStaticDbNr::~RrmCellGrpSemiStaticDbNr()
RrmCellGrpSemiStaticDbNr::Init()
RrmCellGrpSemiStaticDbNr::clearMibBarredList()
RrmMngrSemiStaticDbNr::clearRrcBarredList() - eRatType:(enum)%d
MIB Barred - Band:%d Arfcn:%d CellId:%d
RRC Barred - Band:%d Arfcn:%d CellId:%d
RrmCellGrpSemiStaticDbNr::isCellBarred - Arfcn(%d) CellId(%d) barred
RrmCellGrpSemiStaticDbNr::isFreqBarred - Arfcn(%d) barred
Update MibCellBarred - Band:%d Arfcn:%d CellId:%d - StartMs:%d[ms] DurationMs:%d[ms]
Add MibCellBarred - Band:%d Arfcn:%d CellId:%d - StartMs:%d[ms] DurationMs:%d[ms]
Update MibFreqBarred - Band:%d Arfcn:%d - StartMs:%d[ms] DurationMs:%d[ms]
Add MibFreqBarred - Band:%d Arfcn:%d - StartMs:%d[ms] DurationMs:%d[ms]
>>Found but expired, Erase MIB Freq Barred - Band:%d Arfcn:%d
Found MIB Freq Barred - Band:%d Arfcn:%d
>>Found but expired, Erase MIB Cell Barred - Band:%d Arfcn:%d CellId:%d
Found MIB Cell Barred - Band:%d Arfcn:%d CellId:%d
>>Found but expired, Erase MIB Freq Barred - Band:%d Arfcn:%d
Found MIB Freq Barred - Band:%d Arfcn:%d
>>Found but expired, Erase MIB Cell Barred - Band:%d Arfcn:%d CellId:%d
Found MIB Cell Barred - Band:%d Arfcn:%d CellId:%d
>>Found but expired, Erase NR Freq Barred - Band:%d Arfcn:%d bReselOnly:(bool)%d
Found NR Freq Barred - Band:%d Arfcn:%d bReselOnly:(bool)%d
>>Found but expired, Erase NR Barred - Band:%d Arfcn:%d CellId:%d bReselOnly:(bool)%d
Found NR Cell Barred - Band:%d Arfcn:%d CellId:%d bReselOnly:(bool)%d
Update NR BarredList - NumFreq:%d NumCell:%d
Clear m_NrBarredCellList, m_NrBarredFreqList
Add NR BarredFreqList - NumFreq:%d MAX_BARREDFREQ_NUM:%d
>>NR FreqList[%d] - Band:%d Arfcn:%d CellId:%d bReselOnly:(bool)%d TimeStamp(StartMs:%d[ms] DurationMs:%d[ms])
Add NR BarredCellList - NumCell:%d MAX_BARREDCELL_NUM:%d
Add NR Barred[%d] - Band:%d Arfcn:%d CellId:%d bReselOnly:(bool)%d TimeStamp(StartMs:%d[ms] DurationMs:%d[ms])
NR Barred List updated m_NrBarredCellList(%d), m_NrBarredFreqList(%d)
Update LTE BarredList - NumFreq:%d NumCell:%d
Clear m_LteBarredCellList, m_LteBarredFreqList
Add LTE BarredFreqList - NumFreq:%d MAX_BARREDFREQ_NUM:%d
>>LTE FreqList[%d] - Band:%d Arfcn:%d CellId:%d bReselOnly:(bool)%d TimeStamp(StartMs:%d[ms] DurationMs:%d[ms])
Add LTE BarredCellList - NumCell:%d MAX_BARREDCELL_NUM:%d
Add LTE Barred[%d] - Band:%d Arfcn:%d CellId:%d bReselOnly:(bool)%d TimeStamp(StartMs:%d[ms] DurationMs:%d[ms])
LTE Barred List updated m_LteBarredCellList(%d), m_LteBarredFreqList(%d)
>>Found but expired, Erase LTE Freq Barred - Band:%d Arfcn:%d bReselOnly:(bool)%d
Found LTE Freq Barred - Band:%d Arfcn:%d bReselOnly:(bool)%d
>>Found but expired, Erase LTE Barred - Band:%d Arfcn:%d CellId:%d bReselOnly:(bool)%d
Found LTE Cell Barred - Band:%d Arfcn:%d CellId:%d bReselOnly:(bool)%d
RrmCellGrpSemiStaticDbNr::SetisValidHighestIntraNCellRsrp - isValidHighestIntraNCellRsrp(%d)
RrmCellGrpSemiStaticDbNr::GetisValidHighestIntraNCellRsrp - m_isValidHighestIntraNCellRsrp(%d)
RrmCellGrpSemiStaticDbNr::SetbLowPwrMode - IdleTempCtrl(%d) ConnTempCtrl(%d)
RrmCellGrpSemiStaticDbNr::GetAllbLowPwrModeInfo - m_IdleTempCtrl(%d) m_ConnTempCtrl(%d)
RrmCellGrpSemiStaticDbNr::GetbIdleLowPwrMode - m_IdleTempCtrl(%d)
RrmCellGrpSemiStaticDbNr::GetbLowPwrMode - m_ConnTempCtrl(%d)
RrmCellGrpSemiStaticDbNr::SetFakeMeasured - FakeMeasuredRSRP(%d) FakeMeasuredRSRQ(%d) FakeMeasuredSINR(%d)
RrmCellGrpSemiStaticDbNr::GetFakeMeasured - m_FakeMeasuredRSRP(%d) m_FakeMeasuredRSRQ(%d) m_FakeMeasuredSINR(%d)
