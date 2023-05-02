RrmSubNrConfigCellInfo::CheckFixedCell - CellId(%d) Arfcn(%d)
RrmSubNrConfigCellInfo::CheckFixedCell - rArfcn(%d) Arfcn(%d)
RrmSubNrConfigCellInfo::CheckFixedCell - RegFIXEDCellId(%d) ConfigCellId(%d)
RrmSubNrConfigCellInfo::CheckFixedCell - fail because different CellId
RrmSubNrConfigCellInfo::CheckFixedCell - success same CellId
RrmSubNrConfigCellInfo::CheckFixedCell - unused CellId
RrmSubNrConfigCellInfo::CheckFixedCell - fail because different Arfcn rArfcn(%d) Arfcn(%d)
RrmSubNrConfigCellInfo::CheckFixedCell - RegFIXEDCellId(%d) ConfigCellId(%d)
RrmSubNrConfigCellInfo::CheckFixedCell - fail because different CellId
RrmSubNrConfigCellInfo::CheckFixedCell - success same CellId
RrmSubNrConfigCellInfo::CheckFixedCell - unused CellId
RrmSubNrConfigCellInfo::CheckFixedFreq - Arfcn(%d)
RrmSubNrConfigCellInfo::CheckFixedFreq - rArfcn(%d) Arfcn(%d)
RrmSubNrConfigCellInfo::CheckFixedFreq - fail because different Arfcn rArfcn(%d) Arfcn(%d)
RrmSubNrConfigCellInfo::IsBeamincludessbPositionsInBurst
>>true. ssbPositionsInBurstPresent is not present.
>>Is checking ssbPositionsInBurst - ssbPositionsInBurstPresent(%d) value_L(%d), ssbPositionsInBurst(0x%08X%08X), BeamIndex(%d)
>>ssbPositionsInBurst index(%d) ssbPositionsInBurst array(%d) remainder(%d) BeamIndex(%d)
>>true. There is a possibility that there is a target beam index in BeamIndex(%d) ssbPositionsInBurst.
>>false. There is not target beamindex in 64ea ssbPositionsInBurst. BeamIndex(%d)
>>true. There is target beamindex in 64ea ssbPositionsInBurst. _BeamIndex(%d)
>>false. There is not target beamindex in 64ea ssbPositionsInBurst. _BeamIndex(%d)
>>true. There is target beamindex in ssbPositionsInBurst.
>>false. There is not target beamindex in ssbPositionsInBurst.
RrmSubNrConfigCellInfo::IsCheckBeamResultincludessbPositionsInBurst
>>true. ssbPositionsInBurstPresent is not present.
>>Is checking ssbPositionsInBurst - ssbPositionsInBurstPresent(%d) value_L(%d), ssbPositionsInBurst(0x%08X%08X), BeamIndex(%d)
>>true. There is target beamindex in ssbPositionsInBurst. _BeamIndex(%d) NRRRM_BITMAP_CHECK_IDX_COMMON
>>false. There is not target beamindex in ssbPositionsInBurst. _BeamIndex(%d) NRRRM_BITMAP_CHECK_IDX_COMMON
RrmSubNrConfigCellInfo::GetCellResultInfo
>>can not select because FreqBarred
>>can not select BarredCell
>>can not select in CheckFixedCell
>>Get HypoFO(%d) TargetCellId(%d)
RrmSubNrConfigCellInfo::SetCellResultInfo
>>modify TargetCellId(%d) Info
pCellInfo is NULL
>>set TargetCellId(%d)
RrmSubNrConfigCellInfo::GetFirstTargetCell
>>can not select because FreqBarred
>>can not select BarredCell cellid(%d)
>>can not select in CheckFixedCell
>>iterNrCellResultInfo->CellId(%d)
>>Empty CellInfo
RrmSubNrConfigCellInfo::GetNextTargetCell
>>can not select and init hypo list because FreqBarred(%d)
>>can not select BarredCell cellid(%d)
>>can not select in CheckFixedCell
>>iterNrCellResultInfo->CellId(%d)
>>No CellInfo
>>Empty CellInfo
RrmSubNrConfigCellInfo::GetSsbMeasResultInfo
>>find TargetCellId(%d) Info
It is not finding TargetCellId(%d) Info
>>Get BeamIndex(%d) Info
>>Empty SsbMeasResultInfo
RrmSubNrConfigCellInfo::SetSsbMeasResultInfo
>>find TargetCellId(%d) Info
It is not finding TargetCellId(%d) Info
>>modify BeamIndex(%d) Info
pSsbMeasResultNr is NULL
>>set BeamIndex(%d)
RrmSubNrConfigCellInfo::CheckBlindDetectionCellResultInfo
>>Blind detection done, CellId(%d)
RrmSubNrConfigCellInfo::GetSsbMeasResultInfo
>>find TargetCellId(%d) Info
It is not finding TargetCellId(%d) Info
>>Empty SsbMeasResultInfo
RrmSubNrConfigCellInfo::GetFirstSsbMeas
>>find TargetCellId(%d) Info
It is not finding TargetCellId(%d) Info
>>GetFirstSsbMeas(%d) Info
RrmSubNrConfigCellInfo::GetNextSsbMeas
>>find TargetCellId(%d) Info
It is not finding TargetCellId(%d) Info
>>GetNextSsbMeas(%d) Info
>>No SsbMeasInfo
>>No SsbMeasInfo because end
RrmSubNrConfigCellInfo::GetNextSsbMeas
>>find TargetCellId(%d) Info
It is not finding TargetCellId(%d) Info
>>GetNextSsbMeas(%d) Info
>>No SsbMeasInfo because end
RrmSubNrConfigCellInfo::GetNextSsbMeas
>>find TargetCellId(%d) Info
It is not finding TargetCellId(%d) Info
>>GetNextSsbMeas(%d) Info
>>End SsbMeasInfo
>>No SsbMeasInfo because end
RrmSubNrConfigCellInfo::SortCellResult
NrCellSrchPbdDb.HypoFoListNum(%d)
[%d]HypoFO(%d)
RrmSubNrConfigCellInfo::CheckValidHighestIntraNCell
TargetArfcn(%d) TargetCellId(%d) TargetScs(%d)
The previous serving cell is neigborcell. previous serving(%d)(%d)(%d)
empty IntraFreqInfo
IDLISTEDCELLSET::CellInfo BandId(%d) Arfcn(%d) CellId(%d) SCS(%d)
It is previous Neighbor cell
IDDETECTEDCELLSET::CellInfo BandId(%d) Arfcn(%d) CellId(%d) SCS(%d)
It is previous Neighbor cell
RrmNrPrcdCellConfig::IsNeighborCell::Search in InterFreqInfo
IDLISTEDCELLSET::CellInfo BandId(%d) Arfcn(%d) CellId(%d) SCS(%d)
It is previous Neighbor cell
IDDETECTEDCELLSET::CellInfo BandId(%d) Arfcn(%d) CellId(%d) SCS(%d)
It is previous Neighbor cell
It is Neighbor cell(%d)
There is no Neighbor cell
>>GetSsbBitmap - ssbPositionsInBurstPresent:(bool)%d rNumSsbIndex:%d rSsbBitmap:0x%08X %08X
RrmSubNrConfigCellInfo::GetBestResultPerBeamIndex
