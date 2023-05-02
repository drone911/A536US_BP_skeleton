RrmBlkIdleEvalNr::RrmBlkIdleEvalNr()
RrmBlkIdleEvalNr::~RrmBlkIdleEvalNr()
RrmBlkIdleEvalNr::Init
Clear ReselectionList
RrmBlkIdleEvalNr::PerformEval - bReselEval:(bool)%d
Block N2L reselection NRRRM.NR_RESEL_EUTRA_DISABLE %d
========================<Start setup for Idle Scheduling>========================
========================<End setup for Idle Scheduling>========================
NR_FIXED_ARFCN Enable! All arfcn will be removed except Fixed arfcn : %d
ReselectionList.size:%d
pIntraFreq is nullptr - pIntraFreq:0x%08x
>>Unexpected RatType:%s(%d)
Unexpected type:%s(%d)
>>Unexpected RatType:%s(%d)
>>Unexpected RatType:%s(%d)
reselFreq_index:%d exceed NR_RESEL_FREQ_MAX_NUM:%d
RRC_RRM_RESEL_EVAL_IND - ReselFreq[%d] RatType:%s(%d) Arfcn:%d Priority:%d Scs:(enum)%d Pcid:%d
reselCell_index:%d exceed NR_RESEL_CELL_MAX_NUM:%d
GetPriorityFromReselList - FOUND NR Arfcn:%d CellId:%d Priority:%d
GetPriorityFromReselList - FOUND LTE Arfcn:%d CellId:%d Priority:%d
>>Unexpected RatType:%s(%d)
GetFirstNrCellEqualPriority - Priority is not found for NR Arfcn:%d
FOUND FIRST NR CELL - Arfcn:%d CellId:%d Priority:%d
GetNextNrCellEqualPriority - pCellNr is nullptr
FOUND NEXT NR CELL - Arfcn:%d CellId:%d Priority:%d
>>pServingCellInfo is nullptr
SERV(PCID:%d) TreselCount - bStart:(bool)%d StartMs:%d[ms] curTimeMs:%d[ms]
RrmBlkIdleEvalNr::EncodeRrcRrmMeasResultCnf
>>MeasResultPerMoList[%d] SsbFreq:%d
>>MeasResultPerMoList[%d] SsbFreq:%d
>>MeasResultPerMoListEutra[%d] CarrierFreq:%d
RrmBlkIdleEvalNr::EncodeRrcRrmMeasResultCnfForLogged
>>No Logged result by cellMeasResult.isValid:%d LoggedMeasInfo.EventStatus:%d
>>Logged Measure IntraFreq MeasResultPerMoList[%d] SsbFreq:%d
>>MeasResultPerMoList[%d] SsbFreq:%d
>>Logged Measure EutraFreq MeasResultPerMoListEutra[%d] CarrierFreq:%d
>>rMsg.NumMoList:%d NumMoListEutra:%d
RrmBlkIdleEvalNr::DeriveCellMeasQuantityNr() - AntIndex:%d ARFCN:%d PCID:%d eMeasQuantity:%s(%d) Threshold:%d NrofSSBlocksToAverage:%d
>>Unexpected eMeasQuantity:%s(%d)
>>%s:%d[/100dBm] - linear power scale average result - rNrOfBeamsAboveThresh:%d
>>%s:%d[/100dBm] - no L1FilteredResult
RrmBlkIdleEvalNr::CheckReselCriteriaHigherNr
CheckReselCriteriaHigherNr - Start iteration, size:%d
Erase abnormal cell in reselList
NR CellPtr - ARFCN:%d PCID:%d
RrmBlkIdleEvalNr::PerformEvalCellList - size:%d
>>Unexpected RatType:%s(%d)
RrmBlkIdleEvalNr::PerformEvalFreqList - size:%d
>>Configure NR cellList with IDLISTED IDDETECTED cellset
>>Configure LTE cellList with IDLISTED IDDETECTED cellset
>>Unexpected RatType:%s(%d)
>>There is no cell that satisfy critera. OOS ongoing. _oos_
>>There is cell that satisfy criteria. stop OOS _oos_
>>There is no candidateCell for checking OOS _oos_
RrmBlkIdleEvalNr::CheckChangePLMN
RrmBlkIdleEvalNr::CheckChangePLMN There is no Candidate FREQ for checking criteria. Trigger OOS for 10 sec. _oos_
>>(Not apply)TimerExpiredFor10Sec is Expired. _oos_
RrmBlkIdleEvalNr::CheckServCriterionS
>>CheckTimerExpired::ServingCell has NULL ptr. Return false _oos_
>>CheckTimerExpired::SIB1 is invalid. Return false _oos_
>>(Expired OOS timer)ServingCell does not fulFil the Cell selection Criterion S during %d(DrxCycle %d, Nserv %d) ms _oos_
>>(Waiting OOS timer)ServingCell does not fulFil the Cell selection Criterion S Pcell_Squal: %d, Pcell_Srxlev : %d _oos_
>>Keep state untill TimerExpired
>>(Start OOS timer)ServingCell does not fulFil the Cell selection Criterion S Pcell_Squal: %d, Pcell_Srxlev : %d _oos_
>>Set current OOC Time %d
>>(Not Apply)ServingCell fulFil the Cell selection Criterion S Pcell_Squal: %d, Pcell_Srxlev : %d Release OOS time_oos_
TravelListedCells:: pCellInfo == nullptr - try to find first Cellinfo in next MO
TravelListedCells:: ProcCellCriteria #%d complete
TravelListedCells:: try to find next Cellinfo
RrmBlkIdleEvalNr::ProcCellCriteriaEutra
ProcCellCriteria - GetCellMeasResultNrL3Filtered
>>REMOVE NR FREQ - Arfcn:%d Priority:%d
::Cell RSRP %d TH_RSRP %d Result %d EARLY MEASURE
::Cell RSRQ %d TH_RSRQ %d Result %d EARLY MEASURE
::Cell RSRP %d TH_RSRP %d Cell RSRQ %d TH_RSRQ %d Result %d EARLY MEASURE
>>NR-F %d, CellId %d VALIDATION %d FOR PCI RANGE, IsPerformEarlyMeas %d.
>>EUTRA-F %d, CellId %d VALIDATION %d FOR PCI RANGE IsPerformEarlyMeas %d
>>EUTRA Cell RSRP %d TH_RSRP %d Result %d EARLY MEASURE
>>EUTRA Cell RSRQ %d TH_RSRQ %d Result %d EARLY MEASURE
>>Cell RSRP %d TH_RSRP %d Cell RSRQ %d TH_RSRQ %d Result %d EARLY MEASURE
::VALID EUTRA CELL TO REPORT EARLY MEASURE
>>LoggedMeasInfo(EventStatus:%d, TimeStamp:%d, TTT:%d) curTimeInMs:%d TimeDIff:%d
RrmBlkIdleEvalNr::CheckLoggedMeasTTT
>>LoggedMeasInfo.L1ThresholdChoice:%d
:: Ms:%d Hys:%d Threshold_Enter:%d Threshold_Leave:%d EventStatus:%d
RrmBlkIdleEvalNr::RelaxMeasSingleConditionForCellEdge - IntraSib:%d CellEdgeCondition:%d
>>IntraSib:%d && (Pcell_Srxlev:%d < SnonIntraSearchP:%d || Pcell_Squal:%d < SnonIntraSearchQ:%d) == SERVING ONLY
RrmBlkIdleEvalNr::RelaxMeasSingleConditionForLowMobility - IntraSib:%d LowMobilityFirstCondition:%d LowMobilitySecondCondition:%d
>>IntraSib:%d && (Pcell_Srxlev:%d > SnonIntraSearchP:%d && Pcell_Squal:%d > SnonIntraSearchQ:%d) == INTRA REALX OTHER NONE
RrmBlkIdleEvalNr::RelaxMeasCombinatedCondition - IntraSib:%d LowMobilityFirstCondition:%d LowMobilitySecondCondition:%d CellEdgeCondition:%d
>>IntraSib:%d && (Pcell_Srxlev:%d < SnonIntraSearchP:%d || Pcell_Squal:%d < SnonIntraSearchQ:%d) == OTHER_HIGHER_RELAX_INTRA_RELAX
RrmBlkIdleEvalNr::RelaxMeasEvaluationForCellEdge - CellEdgeCondition:%d Pcell_Squal:%d Pcell_Srxlev:%d
>>CellEdgeSsearchThresholdP:%d CellEdgeSsearchThresholdQ:%d
RrmBlkIdleEvalNr::RelaxMeasEvaluationForLowMobility - LowMobilityFirstCondition:%d LowMobilitySecondCondition:%d Pcell_Squal:%d Pcell_Srxlev:%d curTimeInMs:%d
>>ServCellIdForTSearch:%d ServingCellId:%d
>>Update RelaxMeasInfo ServCellIdForTSearch:%d timeStampForTsearchDeltaP:%d SrxlevRef:%d
>>TSearchDeltaPDiff:%d LowMobilityTsearchDeltaP:%d
>>Reset ServCellIdForTSearch and timeStampForTsearchDeltaP
>>SrxlevRef:%d LowMobilitySsearchDeltaP:%d timeStampForSsearchDeltaP:%d LowMobilityTsearchDeltaP:%d
>>Update ServCellIdForSSearch as ServingCell:%d RelaxedMeasInfo.SrxlevRef set as Pcell_SrxLev:%d
RrmBlkIdleEvalNr::UpdateRelaxedMeasConditionAndState
