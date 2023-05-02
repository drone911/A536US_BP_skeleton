Reset PrioBaseRankingList from ReselRanker
remove a PrioBaseReselCandidate from RankList (0x%x)
[rrc_ReselRanker_RemovePrioBaseReselectionCandidate]ReselRanker_p->PrioBaseListCount(%d) > (Asn_maxNumEUTRAFreqs(%d) * MaxEutraCellsMeas(%d))
remove a PrioBaseReselCandidate from QrbRankList (0x%x)
Prio Base Ranked Cell : CellIdx[%d] = EARFCN[%d] PhyCellId[%d] Priority[%d]
Utra Prio Base Ranked Cell : CellIdx[%d] = UARFCN[%d] Cpich[%d] CellId[%d] CellReselType[%d]
CellIdx[%d] = Freq[%d] Cpich[%d] CellId[%d] CellReselType[%d]
->Building Ranking list
SuitableFddCellPresent %d
Reselection candidate, rejected as Selection criteria not met
Inter-freq cell (%d,%d), IsMeasValid set to FALSE
GSM cell, IsMeasValid set to FALSE
->Building PrioBase S Criteria Met List
Fast U2L threshold = %d dBm
Fast U2L criteria met: Rsrp=%d > FastU2LRscpTh=%d
Eutra Treselection %d, Overwrite it to a real eutra meas cycle (DrxCycle %d, NumEutraFreq %d)
New Eutra Treselection %d
Expand Treselection (%d) to above DRX
Remaining Time(%d) is within a Valid Range(%d)
Error Stopping PrioBaseTResel Timer
Reselection candidate, Rejected as Selection criteria not met,
Reselection candidate, rejected as Cell Barred in the Barred Cell List
->Keep Cells with Highest HCS priority that meet H Criteria
%d Cells do not meet H Criteria
%d Cells do not have Highest Priority (%d)
->Filtering Ranking list
HCS in use: Clear SIR Ranking list
rrc_ReselRanker_ScaleTReselectionFailure: Unsupported rrc CellReselType
rrc_ReselRanker_ScaleTReselectionFailure: Unsupported rrc ScaleType
rrc_ReselRanker_ScaleTReselection Applied in Cell Fach Pending state
rrc_ReselRanker_ScaleTReselection Applied in Cell Fach Pending state
rrc_ReselRanker_ScaleTReselection Applied in Cell Fach Pending state
rrc_ReselRanker_ScaleTReselectionFailure: Unsupported rrc state
rrc_ReselRanker_ScaleTReselection: Treselection*1000(%d) ScaleFactor*1000(%d) Scaled Tresel*1000(%d)
rrc_ReselRanker_ScaleTReselectionFailure: Unsupported rrc CellReselType
rrc_ReselRanker_ScaleTReselectionFailure: Unsupported rrc ScaleType
ScaleTReselection: (CellPch or UraPch) DrxCoeff %d, DrxCoeff2 %d
ScaleTReselection: (CellPch or UraPch) DrxCoeff2 set to default DrxCycleLenCoeff %d
ScaleTReselection: (CellPch or UraPch) DrxCoeff %d
ScaleTReselection: (Idle) DrxCoeff %d
rrc_ReselRanker_ScaleTReselection Applied in Cell Fach Pending state
rrc_ReselRanker_ScaleTReselection Applied in Cell Fach Pending state
rrc_ReselRanker_ScaleTReselection Applied in Cell Fach Pending state
rrc_ReselRanker_ScaleTReselectionFailure: Unsupported rrc state
Tresel: Invalid DrxCycleLenCoeff
ScaleTReselection: ScaledTResel (%d) before FLOORING with ValDrx (%i), DRXCycleLength (%d)
ScaleTReselection: Inapplicable DRX cycle -> NO FLOORING TO DRX
ScaleTReselection: Unwanted TResel State or RRC State -> NO FLOORING TO DRX
rrc_ReselRanker_ScaleTReselection: Treselection*1000(%d) ScaleFactor*1000(%d) Scaled Tresel*1000(%d)
ReselRanker: (Idle) DrxCoeff %d
ReselRanker: (CellPch or UraPch) DrxCoeff %d, DrxCoeff2 %d
ReselRanker: (CellPch or UraPch) DrxCoeff2 set to default DrxCycleCoeff %d
ReselRanker: (CellPch or UraPch) DrxCoeff %d
ReselRanker: (Current State %d) DrxCoeff Not Available
ReselRanker: Sim Not Valid, Overwrite DrxCoeff %d
ReselRanker: Invalid DrxCycleLenCoeff
ReselRanker: DrxCycle Not Available
SIR based reselection: BestRscp %d
=============== Cell Reselection Rscp Ranking list start
=============== Cell Reselection EcN0 Ranking list start
=============== Cell Reselection Rscp Ranking list end
=============== Cell Reselection EcN0 Ranking list end
->Rank the remaining candidates
>> ServingCellOnlyMeas: SuitableFddCellPresent %d
Updating reselection criteria
Built Ranking list has %d entries
Filtered Ranking list has %d entries
Ranked Ranking list has %d entries
Updating PrioBase Reselection criteria
Built Ranking list %d, QrbRanking list %d
Start QRB Ranking based on RSRQ
Start QRB Ranking based on RSRP
Start Ranking based on RSRQ
Start Ranking based on RSRP
Only Intra Freq Meas allowed at this state
CSG to non-CSG LTE Cell is ignored, as 3G CSG Cell is highest priority
TReselection is Zero OR Serving Cell Not suitable condition
Quick RB Criteria Met
TReselection Applies TReselection Done.. Ready for Eutra Reselection
No Eutra Cell Available
Found Candidate with stopped Tresel timer or rejected => EarlySibCandidateList Index (%d) removed
EarlySibListSize=%d
------------------- Early SIB Reading Candidate List Start
------------------- Early SIB Reading Candidate List End
WARNING Can't find the next candidate - EarlySibCandidateIdx(%d)
GetFirstSirReselectionCandidate: The best SirCell is the serving cell
GetNextReselectionCandidate: Only serving cell exists in the list - Wait for next measurements
BestRankedIx : %d
[APBCR] Updating UtraPriority-based Reselection Criteria
[APBCR] Built Ranking List %d
[APBCR] ->Building PrioBase S Criteria Met List
[APBCR]Remaining Time(%d) is within a Valid Range(%d)
Error Stopping UtraPrioBaseTResel Timer
[APBCR] Reselection candidate, Rejected as Selection criteria not met,
[APBCR] Reselection candidate, rejected as Cell Barred in the Barred Cell List
=============== UtraPriority Based Rscp Ranking List Start
=============== UtraPriority Based EcN0 Ranking List Start
=============== UtraPriority Based Rscp Ranking List End
=============== UtraPriority Based EcN0 Ranking List End
CSG to non-CSG LTE Cell is ignored, as 3G CSG Cell is highest priority
[APBCR] TReselection is Zero OR Serving Cell Not suitable condition
[APBCR] TReselection Applies TReselection Done.. Ready for Priority Based InterF Reselection
[APBCR]No Priority Based InterF Cell Candidate Available
[APBCR] Updating GsmPriority-based Reselection Criteria
[APBCR] Built Ranking List %d
Start Ranking based on RSSI
[APBCR][PrivBuildGsmPrioBaseSCriteriaMetList] ->Building PrioBase S Criteria Met List
Remaining Time(%d) is within a Valid Range(%d)
Error Stopping GsmPrioBaseTResel Timer
[APBCR] Reselection candidate, Rejected as Selection criteria not met,
[APBCR] Reselection candidate, rejected as Cell Barred in the Barred Cell List
[APBCR] TReselection is Zero OR Serving Cell Not suitable condition
[APBCR] TReselection Applies TReselection Done.. Ready for Priority Based InterF Reselection
[APBCR]No Priority Based InterRat Cell Candidate Available
>> Skip GSM Cell: SuitableFddCellPresent %d
Reselection candidate, accepted as Tresel Running and Seving Cell Not Suitable
>> Skip GSM Cell: SuitableFddCellPresent %d
>> Reselection candidate, rejected as on the best Sir-freq while PeriodicInterFReselMeas is configured (Squal > Sintersearch)
ERROR Undefined Cell Info List
Could not refresh BSIC verification request
Could not refresh BSIC verification request
***Ranking List before prioritising Csg Cells***
ReselRanker moved the the CSG cell Freq[%d] Cpich[%d] CellId[%d] from ListIdx[%d] to top[%d] of the Ranking List
This is TargetCSG Cell in neighbor cell list but This is not a best cell on ARFCN[%d] PhyCellId[%d] CellId[%d] from ListIdx[%d] to top[%d] of the Ranking List
***Ranking List after prioritising Csg Cells***
Serving Cell is barred so not considered to be a reselection candidate
cell id(%d) is higher rank than serving cell TReselection(%d)
Reselection candidate
Use TReselection (%d) without Flooring
Expand Treselection (%d) to above DRX
NeighborCell(%d,%d) not yet verified to be better => TResel Not Started
CandidateCell(%d,%d) not yet verified to be worse => TResel Not Stopped
ReselRanker removed the last %i entries from the Ranking List
***Prio Base Ranking List before prioritising Csg Cells***
ReselRanker moved the the CSG cell Arfcn[%d] PhyCellId[%d] from ListIdx[%d] to top[%d] of the Ranking List
This is TargetCSG EUTRA Cell in neighbor cell list but This is not a best cell on ARFCN[%d] PhyCellId[%d] from ListIdx[%d] to top[%d] of the Ranking List
***Prio Base Ranking List after prioritising Csg Cells***
FLOORING: remainder (%d) < period(%d) * delta(%d/1000) -> Flooring To %d
FLOORING: remainder(%d) >= period(%d) * delta(%d), NearestFlooringDrx: %d -> Returning Original Value (%d))
Quick Rollback is required for CS Scnx :: Disable E-SIB
Quick Rollback is required for PS Scnx :: Disable E-SIB
PrivIsFddCandidate: Different LAI of CandidateCell(%d,%d) or Reject condition & BCH error -> Search for the next best cell
Reselection CandidateCell(UARFCN%d,PSC%d) has Not Selectable CSG ID %x -> Search for the next best cell
Reselection CandidateCell(UARFCN%d,PSC%d) has Selectable CSG ID %x
Reselection CandidateCell(UARFCN%d,PSC%d) has No CSG ID
PrivIsFddCandidate: ServingCell not suitable or zero TReselection-> Accept this candidate
PrivIsFddCandidate: Tresel timer expired for inter-freq CandidateCell(%d,%d)
Skip E-SIB reading due to Eutra meas
Skip E-SIB reading while BPLMN is running
Skip E-SIB reading while 2G BPLMN is running in peer SIM
Skip E-SIB reading due to DS
PrivIsFddCandidate: (E-SIB) Skip checking TResel of intra-freq CandidateCell(%d,%d)
PrivIsFddCandidate, (Normal Resel) Tresel timer expired for intra-freq CandidateCell(%d,%d)
PrivIsFddCandidate: CandidateCell(%d,%d) is barred or forbidden
PrivFddCandidate: ValidCandidate=TRUE (%d,%d) but, IsMeasValid=FALSE => Wait for new valid measurement
[PConflict] PrivFddCandidate: CandidateCell(%d,%d) is in paging conflict list
[PConflict] PrivFddCandidate: CandidateCell(%d,%d) is in paging conflict list
Found matched EarlySibCandidateIdx(%d)
WARNING No cell in EarlySibCandidateList is matched to current candidate
Reselection candidate, rejected as BSIC not verified
***Prio Base Ranking List before prioritising Csg Cells***
ReselRanker moved the the CSG cell Arfcn[%d] PhyCellId[%d] CellId[%d] from ListIdx[%d] to top[%d] of the Ranking List
This is TargetCSG UMTS Cell in neighbor cell list but This is not a best cell on ARFCN[%d] PhyCellId[%d] CellId[%d] from ListIdx[%d] to top[%d] of the Ranking List
***Prio Base Ranking List after prioritising Csg Cells***
ERROR HCS is in use for UtraPrio Cell Reslection (ivar=%d) -> CHECK THIS
