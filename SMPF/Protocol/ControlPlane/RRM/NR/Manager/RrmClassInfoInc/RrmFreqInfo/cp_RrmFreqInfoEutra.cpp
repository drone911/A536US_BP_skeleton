RrmFreqInfoEutra::RrmFreqInfoEutra()
RrmFreqInfoEutra::~RrmFreqInfoEutra()
RrmFreqInfoNr::DestroyRrmCellInfoList - NeighborCellSet management error
RrmFreqInfoNr::DestroyRrmCellInfoList - Delete Cell[%d,%d] in CellSet[SET:%d/SIZE:%d]
RrmFreqInfoEutra::SetAgcGain - Arfcn:%d [0]%d[1]%d prev:[0]%d[1]%d
RrmFreqInfoEutra::ConfigMeasObjectEutra
>>Push Cell to OBJECT[%d] : SetCellId %d CellIndividualOffset %d
RrmFreqInfoEutra::CopyMeasObjectEutra
>>CarrierFreq %d, AllowedMeasBandwidth (enum)%d EutraQOffsetRangePresent %d, EutraQOffsetRange %d, CellListEutraIdx %d
>>CellListEutra[%d] : PhysCellId %d, CellIndexEutra %d CellIndividualOffset %d,
>>BlackCellList[%d] : CellIndexEutra %d, RangePresent %d Start %d, Range %d
>>pMeasObjectEutra->EutraPresenceAntennaPort1 %d, pMeasObjectEutra->WideBandRsrqMeas %d
RrmFreqInfoNr::GetFirstCellInfoClsPtrFromNeighborCellSet - SetType(%d) is empty
RrmFreqInfoNr::GetNextCell - Given SetType(%d) is invalid
RrmFreqInfoNr::GetNextCell - NeighborCellSet[%d] management error
RrmFreqInfoNr::GetNextCell - Next CellID(%d) of given CellId(%d) found
RrmFreqInfoNr::GetNextCell - given CellId(%d) found but no next CellInfoClsPtr found
RrmFreqInfoNr::GetNextCell - Current CellId(%d) is last Cell of NeighborCellSet[%d]
RrmFreqInfoNr::GetNextCell - pMeasObject->NeighborCellSet[SetType] is empty !!!!
RrmFreqInfoNr::GetCellInfoClsPtrFromNeighborCellSet - SetType(%d) is empty
RrmFreqInfoNr::GetCellInfoClsPtrFromNeighborCellSet - NeighborCellSet for SetType(%d) Management Error
RrmFreqInfoEutra::GetCellInfoClsPtrFromAllNeighborCellSet - NeighborCellSet for SetType:%s(%d) Management Error
>>PushCellToNeighborCellSet - Cell(Arfcn %d, CellId %d) Added to SetType(%d) NeighborCellSetList
>>PushCellToNeighborCellSet - MeasObjectList management error
>>Delete Cell(Arfcn:%d CellId:%d) from CellSet(SetType:%d Size:%d)
>>Remove Cell(Arfcn:%d CellId:%d) from CellSet(SetType:%d Size:%d)
RrmFreqInfoEutra::AddCellToNeighborCellSet - this CellInfoClsPtr in nullptr or SetType(%d) is invalid
RrmFreqInfoEutra::AddCellToNeighborCellSet - MeasObjectId(%d), SetType(%d), Arfcn(%d), CellId(%d)
RrmFreqInfoNr::MoveCellToOtherNeighborCellSet - this pCellInfoCls in nullptr
RrmFreqInfoEutra::RemoveCellFromNeighborCellSet - this CellInfoClsPtr in nullptr or SetType(%d) is invalid
RrmFreqInfoEutra::RemoveCellFromNeighborCellSet - MeasObjectId(%d), SetType(%d), Arfcn(%d), CellId(%d)
RrmFreqInfoEutra::RemoveDetectedOrMoveToUnidListedForNcell - MeasObjectId:%d Arfcn:%d CellId:%d
>>REMOVE CELL - CurSetType:%s(%d)
::FAILED
>>MOVE CELL - CurSetType:%s(%d) target_set_type:%s(%d)
::FAILED
>>unexpected CurSetType:%s(%d)
RrmFreqInfoEutra::RemoveDetectedOrMoveToUnidListedForAllNcells
RrmFreqInfoNr::DeleteNeighborCellSet - this freq is nullptr
RrmFreqInfoNr::DestroyRrmCellInfoList - NeighborCellSet management error
RrmFreqInfoNr::DestroyRrmCellInfoList - Delete Cell[%d,%d] in CellSet[SET:%d/SIZE:%d]
RrmFreqInfoNr::DestroyRrmCellInfoList - NeighborCellSet management error
RrmFreqInfoNr::DestroyRrmCellInfoList - Delete Cell[%d,%d] in CellSet[SET:%d/SIZE:%d]
RrmFreqInfoEutra::GetNroNeighborCellSetForSsb - SetType:%s(%d) is invalid
RrmFreqInfoEutra::GetNroNeighborCellSetForSsb - NeighborCellSet of SetType:%s(%d) is empty
RrmFreqInfoEutra::GetNroNeighborCellSetForSsb - The number of NeighborCellSet for SetType:%s(%d) is %d
>>Delete m_SibFreqInfo.pCarrierFreqInfo:0x%08x
RrmFreqInfoEutra::GetSibCarrierFreqInfo:nullptr - Arfcn:%d
RrmFreqInfoEutra::SetSibCarrierFreqInfo - Arfcn:%d
>>pCarrierFreqInfo is allocated - ptr:0x%08x
CheckSibBlackCellList - FOUND, CellId:%d Start:%d Range:%d
CheckSibBlackCellList - isBlackCell:(bool)%d Arfcn:%d CellId:%d
SetSibBlackCellList - Arfcn:%d NumBlackCellList:%d
>>NumBlackCellList:%d exceed NRRRCDB_MAX_EUTRA_CELL_BLACK:%d
SetSibReselectionPriority - Arfcn:%d ReselectionPriority:%d
SetSibTreselection - Arfcn:%d Treselection:%d
RrmFreqInfoEutra::ReArrangeCellListFromActivateToDeactivate
RrmFreqInfoEutra::ReArrangeCellListFromActivateToDeactivate - Moving fails
RrmFreqInfoEutra::DeactMeasObjectFromFreqInfo
>> Deactivated(Converted) Eutra MeasObjectId: %d
SetSibNCellPciList - Arfcn:%d NumNCellList:%d
>>NumNCellList:%d exceed NRRRCDB_MAX_CELL_MEAS_IDLE:%d
CheckIdleMeasEutraPciRange - FOUND, CellId:%d Start:%d Range:%d
::CheckToBeDeletedFreq Arfcn %d, SibFrequency %d, IsPerformEarlyMeas %d (EARLY MEASURE)
