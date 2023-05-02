RrmSubBlkReselEval::RrmSubBlkReselEval()
RrmSubBlkReselEval::~RrmSubBlkReselEval()
RrmSubBlkReselEval::Init
REMOVE ALL except nrFixedPcid:%d size:%d
bStopEvalIntra:(bool)%d bStopEvalNonIntraEqualLower:(bool)%d ModemStatus:%d - SintraSearchP:%d SintraSearchQ:%d SnonIntraSearchP:%d SnonIntraSearchQ:%d
RemoveCellsIfServAboveSearchThreshold - REMOVE NR Arfcn:%d CellId:%d
RemoveCellsIfServAboveSearchThreshold - REMOVE LTE Arfcn:%d CellId:%d
RemoveCellsInBlackCellList - REMOVE %s Arfcn:%d CellId:%d - isBlackCell:(bool)%d isBarred:(bool)%d
RemoveCellsToBeDropped - DROP NR Arfcn:%d CellId:%d
RemoveCellsOfEqualPriority - REMOVE NR Arfcn:%d CellId:%d
RemoveCellsOfEqualPriority - REMOVE LTE Arfcn:%d CellId:%d
RrmSubBlkReselEval::CheckReselCriteriaEqual - bCheckReselCriteriaEqual:(bool)%d
Unexpected RatType:%s(%d)
>>REMOVE %s ARFCN:%d PCID:%d - Rcriterion:%d is out of RangeToBestCell(Min:%d Max:%d)
>>Discard margin of %s ARFCN:%d PCID:%d - pcell_Rcriterion:%d is out of RangeToBestCell(Min:%d Max:%d)
>>TRESEL START - %s CellId:%d Equal:(Srxlev(%d) > 0) AND (Squal(%d) > 0) AND (Rcriterion(%d) > pcell_Rcriterion(%d) + margin.Rank(%d))
>>TRESEL STOP - %s CellId:%d Equal:(Srxlev(%d) <= 0) OR (Squal(%d) <= 0) OR (Rcriterion(%d) <= pcell_Rcriterion(%d) + margin.Rank(%d))
>>pIntraFreq is nullptr or Failed GetSibCellReselectionServingFreqInfo
Unexpected RatType:%s(%d)
>>TRESEL START - %s CellId:%d HighQ:(Squal(%d) > threshX_HighQ(%d) + margin.Rsrq(%d))
>>TRESEL STOP - %s CellId:%d HighQ:(Squal(%d) <= threshX_HighQ(%d) + margin.Rsrq(%d))
>>TRESEL START - %s CellId:%d HighP:(Srxlev(%d) > threshX_HighP(%d) + margin.Rsrp(%d))
>>TRESEL STOP - %s CellId:%d HighP:(Srxlev(%d) <= threshX_HighP(%d) + margin.Rsrp(%d))
CheckReselCriteriaHigher done - %s cellList.size:%d
%s - Ranking for higher priority cells
>>pIntraFreq is nullptr or Failed GetSibCellReselectionServingFreqInfo
Unexpected RatType:%s(%d)
>>TRESEL START - %s CellId:%d LowQ(pcell_Squal(%d) < ThreshServingLowQ(%d)) AND (ncell_Squal(%d) > threshX_LowQ(%d) + margin.Rsrq(%d))
>>TRESEL STOP - %s CellId:%d LowQ:(pcell_Squal(%d) < ThreshServingLowQ(%d)) BUT (ncell_Squal(%d) <= threshX_LowQ(%d) + margin.Rsrq(%d))
>>TRESEL STOP - %s CellId:%d LowQ:(pcell_Squal(%d) >= ThreshServingLowQ(%d))
>>TRESEL START - %s CellId:%d LowP:(pcell_Srxlev(%d) < ThreshServingLowP(%d)) AND (ncell_Srxlev(%d) > threshX_LowP(%d) + margin.Rsrp(%d))
>>TRESEL STOP - %s CellId:%d LowP:(pcell_Srxlev(%d) < ThreshServingLowP(%d)) BUT (ncell_Srxlev(%d) <= threshX_LowP(%d) + margin.Rsrp(%d))
>>TRESEL STOP - %s CellId:%d LowP:(pcell_Srxlev(%d) >= ThreshServingLowP(%d))
CheckReselCriteriaLower done - %s cellList.size:%d
%s - Ranking for lower priority cells
pIntraFreq:nullptr
Failed GetSibCellReselectionInfoCommon
pIntraFreq:nullptr
>>rCell.Rat.NR.CellPtr is nullptr
>>bStart:(bool)%d StartMs:%d[ms] curTimeMs:%d[ms]
>>rCell.Rat.LTE.CellPtr is nullptr
>>bStart:(bool)%d StartMs:%d[ms] curTimeMs:%d[ms]
>>Unexpected RatType:%s(%d)
>>rCell.Rat.NR.CellPtr is nullptr
>>rCell.Rat.LTE.CellPtr is nullptr
>>Unexpected RatType:%s(%d)
>>rCell.Rat.NR.CellPtr is nullptr
>>rCell.Rat.LTE.CellPtr is nullptr
>>Unexpected RatType:%s(%d)
>>TRESEL EXPIRED - elapsed:%d[ms] >= tResel:%d[ms] (tResel:%d[s] SF:%d[percent])
>>TRESEL NOT EXPIRED - elapsed:%d[ms] < tResel:%d[ms] (tResel:%d[s] SF:%d[percent])
>>pServingCellInfo is nullptr
SERV(PCID:%d) TreselCount - bExpired:(bool)%d bStart:(bool)%d StartMs:%d[ms] elapsedMs:%d[ms] oneSecondMs:%d[ms]
>>pFreqInfo is nullptr
>>MobilityStatus is not valid
>>pFreqInfo is nullptr
>>MobilityStatus is not valid
