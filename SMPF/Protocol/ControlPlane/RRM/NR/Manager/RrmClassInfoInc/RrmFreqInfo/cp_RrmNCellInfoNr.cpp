RrmNCellInfoNr::RrmNCellInfoNr()
RrmNCellInfoNr::~RrmNCellInfoNr()
>>Initialize SsbNeighborCellSet and CsiNeighborCellSet
>>cell is NULL - SsbSetType:%s(%d)
>>CELL FOUND - CellId:%d SsbSetType:%s(%d) CellPtr:0x%08x
>>cell is NULL - CsiSetType:%s(%d)
>>CELL FOUND - CellId:%d CsiSetType:%s(%d) CellPtr:0x%08x
>>CELL NOT FOUND
>>cell is NULL - SsbSetType:%s(%d)
>>CELL FOUND - CellId:%d SsbSetType:%s(%d) CellPtr:0x%08x
>>cell is NULL - CsiSetType:%s(%d)
>>CELL FOUND - CellId:%d CsiSetType:%s(%d) CellPtr:0x%08x
>>CELL NOT FOUND
RrmNCellInfoNr::DeleteCellInfoFromNCI - pCellDelete is NULL
RrmNCellInfoNr::DeleteCellInfoFromNCI - CellId:%d Ptr:0x%08x RsType:%s(%d)
>>DELETE Cell - not found
>>PRESERVE Cell - found and matched CellPtr:0x%08x
>>DELETE Cell - found but not matched CellPtr:0x%08x
>>DELETE CellPtr:0x%08x - CellId:%d RsType:%s(%d)
RrmNCellInfoNr::GetNextCellForSsbFromNCI - Given SetType:%s(%d) is invalid
RrmNCellInfoNr::GetNextCellForSsbFromNCI - SsbNeighborCellSet[%d] management error
RrmNCellInfoNr::GetNextCellForSsbFromNCI - Next CellID(%d) of given CellId(%d) found
RrmNCellInfoNr::GetNextCellForSsbFromNCI - given CellId(%d) found but no next CellInfoClsPtr found
RrmNCellInfoNr::GetNextCellForSsbFromNCI - Current CellId(%d) is last Cell of SsbNeighborCellSet[%d]
RrmNCellInfoNr::GetNextCellForSsbFromNCI - pMeasObject->SsbNeighborCellSet[SetType] is empty !!!!
RrmNCellInfoNr::GetNextCellForCsiRsFromNCI - Given SetType:%s(%d) is invalid
RrmNCellInfoNr::GetNextCellForCsiRsFromNCI - SsbNeighborCellSet[%d] management error
RrmNCellInfoNr::GetNextCellForCsiRsFromNCI - Next CellID(%d) of given CellId(%d) found
RrmNCellInfoNr::GetNextCellForCsiRsFromNCI - given CellId(%d) found but no next CellInfoClsPtr found
RrmNCellInfoNr::GetNextCellForCsiRsFromNCI - Current CellId(%d) is last Cell of CsiNeighborCellSet[%d]
RrmNCellInfoNr::GetNextCellForCsiRsFromNCI - pMeasObject->CsiNeighborCellSet[SetType] is empty !!!!
RrmNCellInfoNr::AddCellToCandiDetectedCellSetForSsb(size:%d) - Arfcn:%d CellId:%d CorrEnergy:%d
>>SORT - CANDIDETECTED cellset with AscendingCompareCellCorrEnergy
>>COMPARE - LEAST(CellId:%d CorrEnergy:%d) and TARGET(CellId:%d CorrEnergy:%d)
>>REMOVE LEAST cell and PUSH TARGET cell
>>DO NOT ADD TARGET - LEAST cell is better than TARGET
>>REMOVE LEAST cell and PUSH TARGET cell - LEAST cell is NULL
RrmNCellInfoNr::AddCellToCandiDetectedCellSetForCsiRs(size:%d) - Arfcn:%d CellId:%d CorrEnergy:%d
>>SORT - CANDIDETECTED cellset with AscendingCompareCellCorrEnergy
>>COMPARE - LEAST(CellId:%d CorrEnergy:%d) and TARGET(CellId:%d CorrEnergy:%d)
>>REMOVE LEAST cell and PUSH TARGET cell
>>DO NOT ADD TARGET - LEAST cell is better than TARGET
>>REMOVE LEAST cell and PUSH TARGET cell - LEAST cell is NULL
RrmNCellInfoNr::ResizeIdDetectedCellSetForSsbFromNCI
::No cell to remove
::REMOVE cell in ID DETECTED
RrmNCellInfoNr::ResizeIdDetectedCellSetForCsiRsFromNCI
::No cell to remove
::REMOVE cell in ID DETECTED
RrmNCellInfoNr::RemoveCellFromNeighborCellSetForSsbNCI - this CellInfoClsPtr in NULL or SetType:%s(%d) is invalid
RrmNCellInfoNr::RemoveCellFromNeighborCellSetForSsbNCI - SetType:%s(%d) Arfcn:%d CellId:%d
RrmNCellInfoNr::RemoveCellFromNeighborCellSetForSsbNCI - NeighborCellSet for SetType:%s(%d) is empty
>>Delete Cell(Arfcn:%d CellId:%d) from SSB CellSet(SetType:%s(%d) Size:%d)
>>Remove Cell(Arfcn:%d CellId:%d) from SSB CellSet(SetType:%s(%d) Size:%d)
RrmNCellInfoNr::RemoveCellFromNeighborCellSetForCsiRsNCI - this CellInfoClsPtr in NULL or SetType:%s(%d) is invalid
RrmNCellInfoNr::RemoveCellFromNeighborCellSetForCsiRsNCI - SetType:%s(%d) Arfcn:%d CellId:%d
RrmNCellInfoNr::RemoveCellFromNeighborCellSetForCsiRsNCI - NeighborCellSet for SetType:%s(%d) is empty
>>Delete Cell(Arfcn:%d CellId:%d) from CSI-RS CellSet(SetType:%s(%d) Size:%d)
>>Remove Cell(Arfcn:%d CellId:%d) from CSI-RS CellSet(SetType:%s(%d) Size:%d)
RrmNCellInfoNr::RemoveDetectedOrMoveToUnidListedForNcellFromNCI - RsType:%s(%d) Arfcn:%d CellId:%d
>>REMOVE CELL - CurSetType:%s(%d)
::FAILED
>>MOVE CELL - CurSetType:%s(%d) target_set_type:%s(%d)
::FAILED
>>unexpected CurSetType:%s(%d)
RrmNCellInfoNr::RemoveDetectedOrMoveToUnidListedForAllNcellsFromNCI - RsType:%s(%d)
RrmNCellInfoNr::MoveCellToOtherNeighborCellSetForSsbFromNCI - this pCellInfoCls in NULL
RrmNCellInfoNr::AddCellToNeighborCellSetForSsbFromNCI - this CellInfoClsPtr in NULL or SetType:%s(%d) is invalid
RrmNCellInfoNr::AddCellToNeighborCellSetForSsbFromNCI - SetType:%s(%d), Arfcn(%d), SubCarrierSpacing(%d), CellId(%d)
>> Cell(Arfcn %d, CellId %d) Added to SetType:%s(%d) NeighborCellSetList
RrmNCellInfoNr::MoveCellToOtherNeighborCellSetForCsiRsFromNCI - this pCellInfoCls in NULL
RrmMeasObjectInfoNr::AddCellToNeighborCellSetForCsiRsFromNCI - this CellInfoClsPtr in NULL or SetType:%s(%d) is invalid
RrmNCellInfoNr::AddCellToNeighborCellSetForCsiRsFromNCI - SetType:%s(%d), Arfcn(%d), SubCarrierSpacing(%d), CellId(%d)
>> Cell(Arfcn %d, CellId %d) Added to SetType:%s(%d) NeighborCellSetList
RrmNCellInfoNr::GetNroNeighborCellSetForSsbFromNCI - MeasObjectId(%d) or SetType:%s(%d) is invalid
RrmNCellInfoNr::GetNroNeighborCellSetForSsbFromNCI - NeighborCellSet of SetType:%s(%d) is empty
RrmNCellInfoNr::GetNroNeighborCellSetForSsbFromNCI - The number of NeighborCellSet for SetType:%s(%d) is %d
RrmNCellInfoNr::GetNroNeighborCellSetForCsiRsFromNCI - SetType:%s(%d) is invalid
RrmNCellInfoNr::GetNroNeighborCellSetForCsiRsFromNCI - NeighborCellSet of SetType:%s(%d) is empty
RrmNCellInfoNr::GetNroNeighborCellSetForCsiRsFromNCI - The number of NeighborCellSet for SetType:%s(%d) is %d
RrmNCellInfoNr::GetFirstCellInfoClsPtrFromNeighborCellSetForSsbFromNCI - SetType:%s(%d) is invalid
RrmNCellInfoNr::GetFirstCellInfoClsPtrFromNeighborCellSetForCsiRsFromNCI - SetType:%s(%d) is invalid
RrmNCellInfoNr::GetFirstCellInfoClsPtrFromNeighborCellSetForCsiRsFromNCI - SetType:%s(%d) is empty
RrmNCellInfoNr::GetCellInfoClsPtrFromNeighborCellSetForSsbFromNCI - SetType:%s(%d) is invalid
RrmNCellInfoNr::GetCellInfoClsPtrFromNeighborCellSetForSsbFromNCI - SetType:%s(%d) is empty
RrmNCellInfoNr::GetCellInfoClsPtrFromNeighborCellSetForSsbFromNCI - NeighborCellSet for SetType:%s(%d) Management Error
RrmNCellInfoNr::GetCellInfoClsPtrFromNeighborCellSetForCsiRsFromNCI - SetType:%s(%d) is invalid
RrmNCellInfoNr::GetCellInfoClsPtrFromNeighborCellSetForCsiRsFromNCI - SetType:%s(%d) is empty
RrmNCellInfoNr::GetCellInfoClsPtrFromNeighborCellSetForCsiRsFromNCI - NeighborCellSet for SetType:%s(%d) Management Error
RrmNCellInfoNr::GetCellInfoClsPtrFromAllNeighborCellSetForSsbFromNCI - NeighborCellSet for SetType:%s(%d) Management Error
RrmNCellInfoNr::GetCellInfoClsPtrFromAllNeighborCellSetForCsiRsFromNCI - NeighborCellSet for SetType:%s(%d) Management Error
DestroyRrmCellInfoList(bDelete:%d) - (pcid:%d arfcn:%d MO:%d) in cellset(rsType:%d setType:%d size:%d)
RrmNCellInfoNr::GetBestIdentifiedCellPtrFromNCI
>>SORT - IDLISTED IDDETECTED cellset with DescendingCompareCellSsbRSRP
>>Best cell found in IDLISTED - IDLISTED.Rsrp:%d >= IDDETECTED.Rsrp:%d
>>Best cell found in IDDETECTED - IDLISTED.Rsrp:%d < IDDETECTED.Rsrp:%d
>>Best cell found in IDLISTED
>>Best cell found in IDDETECTED
>>No Cell found
RrmNCellInfoNr::GetBestIdentifiedCellPtrFromNCI
>>SORT - CANDILISTED CANDIDETECTED cellset with AscendingCompareCellCorrEnergy
>>Best cell found in CANDILISTED - CANDILISTED.Corr:%d >= CANDIDETECTED.Corr:%d
>>Best cell found in CANDIDETECTED - CANDILISTED.Corr:%d < CANDIDETECTED.Corr:%d
>>Best cell found in CANDILISTED
>>Best cell found in CANDIDETECTED
>>No Cell found
RrmNCellInfoNr::PrintAllCellSetCellsFromNCI
>>SSB - SetType:%s(%d) is empty
>>SSB - SetType:%s CellId:%d CellPtr:0x%08x RSRP:%d CorrEnergy:%d SsbIndex:%d SsbTimingOffset:%d
>>CSI - SetType:%s(%d) is empty
>>CSI - SetType:%s CellId:%d CellPtr:0x%08x RSRP:%d
