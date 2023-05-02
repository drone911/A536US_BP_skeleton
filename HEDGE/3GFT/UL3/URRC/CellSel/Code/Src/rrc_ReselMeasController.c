ERROR creating TPendingOos Timer
ERROR creating TReselHyst Timer
ERROR deleting TPendingOos timer
ERROR deleting TReselHyst timer
SIntrasearch received value: (%i) stored value (%i) (Minimum valid value is 0)
SIntersearch received value: (%i) stored value (%i) (Minimum valid value is 0)
SSearchHcs received value: (%i) stored value (%i) (Minimum valid value is 0)
SSearchRATGsm received value: (%i) stored value (%i) (Minimum valid value is 0)
SSearchRATGsm received value: (%i) consider this value to be absent
SLimit,SearchRATGsm received value: (%i) stored value (%i) (Minimum valid value is 0)
SHCS,RATGsm received value: (%i) stored value (%i) (Minimum valid value is 0)
Clear ImmediateInterFReselMeas
[rrc_ReselMeasController_GetCurrentIratRealRule] Serving Cell not Suitable so Measurent Real Rule Is Measure ALL
ERROR starting TReselHyst timer
TReselHyst started (TmId=%d)
SirBasedReselEnabled is disabled for CS
Avoid this band (%d) if possible
CSFB in progress: No ImmediateInterFReselMeas
No FachMeasOccasion Available -> No ImmediateInterFReselMeas
ERROR Illegal State
HsDsch-MeasurementOccasionAvailable
[CsCallInProgress] Set pendingState to CellFach temporarily
ERROR starting TPendingOos timer
ERROR starting TPendingOos timer
ERROR Illegal State
Quick RB : Ignore TReselHyst
Quick RB : Ignore TReselHyst
LTE supported : Ignore TReselHyst
ImmediateInterFReselMeasRequired: Ignore TReselHyst
Not refreshing measurement rules yet - waiting for T Reselection Hysteresis timer (1 second) to expire
ImmediateInterFReselMeas Required: Intra-freq. cell reselection is not triggered while TReselHyst is running
Overriding cell CPICH code to (%d) - No more measurements for reselection
Serving Cell is not suitable
->IntraF Measurement rule is MeasureAll
->InterF Measurement rule is MeasureAll
->InterRat Measurement rule is MeasureAll
Reset CSG to non-CSG Reselection flag
ServingCell Not Suitable & ImmediateInterFReselMeas Required -> Clear ImmediateInterFReselMeas
RrcCnxReq in progress (newRule -> none, newPrioBaseRule -> PrioNone)
[InterRAT Measurement] new rule will be overriden by no FACH measurement occasion
[InterF Measurement] newRule(%d) <-> currentRule(%d)
[InterF Measurement] newPrioBaseRule(%d) <-> CurrentPrioBaseRule(%d)
[InterRAT Measurement] newRule(%d) <-> currentRule(%d)
[InterRAT Measurement] newPrioBaseRule(%d) <-> CurrentPrioBaseRule(%d)
AvoidCsgtoNonCsgResel[%d]
[UpdateMeasurementRules] HCS shall not be used for Inter-F & Inter-Rat layers
InterFReselMeasIDPtr: NULL
CurrentRule = %d, NewMeasRule = %d
GenMsg is NULL
Eutra Measurement rule is MeasureNone - Eutra disabled as MULTI_MODE_OPERATION Zero
Eutra Measurement rule is MeasureNone - Eutra disabled as IsEutraDisabled TRUE
CurrentRule = %d NewMeasRule = %d
GenMsg is NULL
InterRatMeasIDPtr: NULL
GSM Measurement rule is MeasureNone - GSM disabled as MULTI_MODE_OPERATION Zero
CurrentRule = %d, NewMeasRule = %d
GenMsg is NULL
->InterRat Measurement rule is MeasureNone - GSM disabled
InterFReselMeas Not Active & ImmediateInterFReselMeas Required -> Clear ImmediateInterFReselMeas
SqualS (%i) > SIntrasearch (%i): ImmediateInterFReselMeas or PeriodicInterFReselMeas -> IntraFreq MeasureRule Changed to MeasureAll
SqualS (%i) > SIntrasearch (%i): found IntraF CSG Cell during ASF -> IntraFreq MeasureRule Changed to MeasureAll
SqualS (%i) > SIntrasearch (%i): IntraFreq MeasureRule Changed to MeasureServingCellOnly
SqualS (%i) <= SIntrasearch (%i): IntraFreq MeasRule Changed to MeaureAll
WARNING - SIntrasearch not received
-> IntraFreq MeasRule Changed to MeaureAll
SqualS (%i) > SIntersearch (%i): ImmediateInterFReselMeas Configured (MeasureAll)
-> InterFreq MeasureRule Changed to MeaureAll
SqualS (%i) > SIntersearch (%i): Start Sir-based Periodic IF Resel Meas (Count %d)
-> InterFreq MeasureRule Changed to MeaureAll
SqualS (%i) > SIntersearch (%i): PeriodicInterFReselMeas In Progress (MeasureAll, Count %d)
-> InterFreq MeasureRule Changed to MeaureAll
SqualS (%i) > SIntersearch (%i): found InterF CSG Cell during ASF -> InterFreq MeasureRule Changed to MeasureAll
SqualS (%i) > SIntersearch (%i): PeriodicInterFReselMeas Not Required -> InterFreq MeasureRule Changed to MeasureNone
SrxlevS (%i) > SSearchHcs (%i): InterFreq MeasureRule Changed to %d
SSearchHcs not received
SqualS (%i) <= SIntersearch (%i): PeriodicInterFReselMeasConfigured -> Hand the control over to CellReselecter (MeasureAll)
SqualS <= SIntersearch & ImmediateInterFReselMeasRequired -> Clear ImmediateInterFReselMeas
SqualS (%i) <= SIntersearch (%i): InterFreq MeasureRule Changed to MeasureAll
IsSSearchHcsValid & SrxlevS <= SSearchHcs & ImmediateInterFReselMeasRequired -> Clear ImmediateInterFReselMeas
SrxlevS (%i) <= SSearchHcs (%i): InterFreq MeasureRule Changed to MeasureAll
SIntersearch not received (MeasureAll)
SIntersearch not received & ImmediateInterFReselMeasRequired -> Clear ImmediateInterFReselMeas
-> InterFreq MeasureRule Changed to MeaureAll
[InterFreq Measurement] new rule will be overriden by no FACH measurement occasion
[InterFreq Measurement] newRule(%d) <-> currentRule(%d)
RrcCnxReq in progress (newRule -> none, newPrioBaseRule -> PrioNone)
oldRule !=newRule==MeasureNone & ImmediateInterFReselMeasRequired -> Clear ImmediateInterFReselMeas
-> IntraFreq MeasureRule Changed to MeasureAll Due to Immediate or PeriodicInterFReselMeas Configured
oldRule==newRule==MeasureNone & ImmediateInterFReselMeasRequired -> Clear ImmediateInterFReselMeas
oldRule==newRule==MeasureNone & PeriodicInterFReselMeasConfigured -> Clear PeriodicInterFReselMeas
SqualS (%i) > SSearchGsm (%i)
SrxlevS (%i) > SHcsGsm (%i)
SHcsGsm not received
->InterRat Measurement rule is MeasureNone
SqualS (%i) <= SSearchGsm (%i)
->InterRat Measurement rule is MeasureAll
SrxlevS (%i) <= SHcsGsm (%i)
->InterRat Measurement rule is MeasureAll
SSearchGsm not received
->InterRat Measurement rule is MeasureAll
[InterRAT Measurement] new rule will be overriden by no FACH measurement occasion
[InterRAT Measurement] newRule(%d) <-> currentRule(%d)
RrcCnxReq in progress (newRule -> none, newPrioBaseRule -> PrioNone)
[InterRAT Measurement] new rule(%d) will be overriden by ConfigIratMeasHyst
[InterRAT Measurement] ConfigIratMeasHyst(%d) > ConfigIratMeasHystCounter(%d)
[InterRAT Measurement] new rule(%d) will be used
[InterRAT Measurement] ConfigIratMeasHyst(%d) =< ConfigIratMeasHystCounter(%d)
[InterRAT Measurement] reset ConfigIratMeasHystCounter
[InterRAT Measurement] reset ConfigIratMeasHystCounter
NULL MeasIdPtr
[InterFreq Measurement] new rule will be overriden by no FACH measurement occasion
[InterFreq Measurement] newRule(%d) <-> currentRule(%d)
RrcCnxReq in progress (newInterRule -> none)
Priority Based Cell Reselection in progress (newInterRule -> none)
SrxlevS (%i) <= SSearchHcs (%i)
SqualS (%i) <= Sintersearch (%i)
->IntraFreq Measurement rule is MeasureAll
->InterFreq Measurement rule is MeasureAll
> [HCS] Apply IntraSearchHyst (%d dB):: Overwrite HcsGreaterThanSC to HcsGreaterThanOrEqualToSC
> [HCS] Apply IntraSearchHyst (%d dB):: Overwrite HcsGreaterThanSC to HcsGreaterThanOrEqualToSC
SqualS (%i) > SIntrasearch (%i): found IntraF CSG Cell during ASF -> IntraFreq MeasureRule Changed to MeasureAll
SqualS (%i) > SIntrasearch (%i): found InterF CSG Cell during ASF -> InterFreq MeasureRule Changed to MeasureAll
SqualS (%i) > Sintrasearch (%i)
->IntraFreq Measurement rule is MeasureHcsGreaterThanSC
->InterFreq Measurement rule is MeasureHcsGreaterThanSC
> [HCS] Apply IntraSearchHyst (%d dB):: Overwrite HcsGreaterThanOrEqualToSC to HcsGreaterThanSC
> [HCS] Apply IntraSearchHyst (%d dB):: Overwrite HcsGreaterThanOrEqualToSC to HcsGreaterThanSC
> [HCS] Apply InterSearchHyst (%d dB):: OverwriteHcsGreaterThanOrEqualToSC to All
> [HCS] Apply InterSearchHyst (%d dB):: Overwrite HcsGreaterThanOrEqualToSC to All
SqualS (%i) <= Sintrasearch (%i)
->IntraFreq Measurement rule is MeasureHcsGreaterThanOrEqualToSC
->InterFreq Measurement rule is MeasureHcsGreaterThanOrEqualToSC
Sintrasearch not sent
->IntraFreq Measurement rule is Measure All
->InterFreq Measurement rule is MeasureHcsGreaterThanSC
SsearchHCS not sent
Sintersearch not sent
->IntraFreq Measurement rule is Measure All
->InterFreq Measurement rule is Measure All
NULL MeasIdPtr
SsearchHCS not sent
SrxlevS (%i) <= SSearchHcs (%i)
Sintersearch not sent
SqualS (%i) <= Sintersearch (%i)
->IntraFreq Measurement rule is MeasureAll
->InterFreq Measurement rule is MeasureAll
SqualS (%i) > SIntrasearch (%i): found IntraF CSG Cell during ASF -> IntraFreq MeasureRule Changed to MeasureAll
SqualS (%i) > SIntrasearch (%i): found InterF CSG Cell during ASF -> InterFreq MeasureRule Changed to MeasureAll
SrxlevS (%i) > SSearchHcs (%i)
SqualS (%i) > Sintersearch (%i)
->IntraFreq Measurement rule is MeasureHcsLessThanOrEqualToSC
->InterFreq Measurement rule is MeasureHcsLessThanOrEqualToSC
[InterFreq Measurement] new rule will be overriden by no FACH measurement occasion
[InterFreq Measurement] newRule(%d) <-> currentRule(%d)
RrcCnxReq in progress (newInterRule -> none)
Priority Based Cell Reselection in progress (newInterRule -> none)
InterRatMeasIDPtr: NULL
SrxlevS (%i) <= SHcsGsm (%i)
SqualS (%i) <= SSearchGsm (%i)
->IntrerRat Measurement rule is MeasureAll
SqualS (%i) > SLimitSearchGsm (%i)
->InterRat Measurement rule is MeasureNone
SqualS (%i) <= SLimitSearchGsm (%i)
->InterRat Measurement rule is MeasureHcsGreaterThanOrEqualToSC
SHcsGsm not sent
->InterRat Measurement rule is MeasureAll
[InterRAT Measurement] new rule will be overriden by no FACH measurement occasion
[InterRAT Measurement] newRule(%d) <-> currentRule(%d)
RrcCnxReq in progress (newIratRule -> none)
[InterRAT Measurement] new rule(%d) will be overriden by ConfigIratMeasHyst
[InterRAT Measurement] ConfigIratMeasHyst(%d) > ConfigIratMeasHystCounter(%d)
[InterRAT Measurement] new rule(%d) will be used
[InterRAT Measurement] ConfigIratMeasHyst(%d) =< ConfigIratMeasHystCounter(%d)
[InterRAT Measurement] reset ConfigIratMeasHystCounter
[InterRAT Measurement] reset ConfigIratMeasHystCounter
NULL MeasIdPtr
SHcsGsm not sent
SrxlevS (%i) <= SHcsGsm (%i)
IsSSearchGsmValid not sent
SqualS (%i) <= SSearchGsm (%i)
->InterRat Measurement rule is MeasureAll
SrxlevS (%i) > SHcsGsm (%i)
SqualS (%i) > SSearchGsm (%i)
->InterRat Measurement rule is MeasureHcsLessThanOrEqualToSC
[InterRAT Measurement] new rule will be overriden by no FACH measurement occasion
[InterRAT Measurement] newRule(%d) <-> currentRule(%d)
RrcCnxReq in progress (newIratRule -> none)
[InterRAT Measurement] new rule(%d) will be overriden by ConfigIratMeasHyst
[InterRAT Measurement] ConfigIratMeasHyst(%d) > ConfigIratMeasHystCounter(%d)
[InterRAT Measurement] new rule(%d) will be used
[InterRAT Measurement] ConfigIratMeasHyst(%d) =< ConfigIratMeasHystCounter(%d)
[InterRAT Measurement] reset ConfigIratMeasHystCounter
[InterRAT Measurement] reset ConfigIratMeasHystCounter
[APBCR] UpdatePrioBaseMeasurementRules_UtraUsed: No FACH measurement occasion
[APBCR] rrc_ReselMeasurement_GetIsActive_Utra (%d)
[APBCR] rrc_IntraFReselMeas_GetOnlyServingCellMeasRecved (%d)
NULL MeasIdPtr
[APBCR] S_PrioritySearch1 (%d) S_PrioritySearch2 (%d)
[APBCR] SrxlevS (%i) SqualS (%i)
[APBCR] SrxlevS (%i) > S_PrioritySearch1 (%i)
[APBCR] SqualS (%i) > S_PrioritySearch2 (%i)
[APBCR] newPrioBaseMeasurementRule (%d) :: Measure Inter-frequencies with greater priority than SC
[APBCR] SrxlevS (%i) <= S_PrioritySearch1 (%i)
[APBCR] SqualS (%i) <= S_PrioritySearch2 (%i)
[APBCR] newPrioBaseMeasurementRule (%d) :: Measure ALL of Inter-frequencies
[APBCR] found InterF CSG Cell during ASF -> newPrioBaseMeasurementRule (%d) Changed to MeasureAll
[APBCR_LOG]RrcCnxReq in progress (newPrioBaseRule -> PrioNone)
[APBCR_LOG]newPrioBaseMeasurementRule = %d != currentPrioBaseMeasurementRule = %d
[APBCR_LOG]Measurement Rule is changed so we will now Check for the Eutra Frequencies to be measured
[APBCR] UpdatePrioBaseMeasurementRules_EutraUsed : U2L reselection in CellFach is not suppoted
[APBCR] UpdatePrioBaseMeasurementRules_EutraUsed : No FACH measurement occasion
rrc_ReselMeasurement_GetIsActive_Eutra (%d)
rrc_IntraFReselMeas_GetOnlyServingCellMeasRecved (%d)
NULL MeasIdPtr
S_PrioritySearch1 (%d) S_PrioritySearch2 (%d)
SrxlevS (%i) SqualS (%i)
measInd->inter_RAT_len : %d
GSM measure enabled
FGI 3 is not supported
UpdateMeasurementRules_PrioBaseUsed_EutraIRAT called in CellFach
GSM measure not available
cellfachMeasIndExist is false
Sib19Id->FachAbsPriorityMeasInd is all_layers and FGI4 supported
Sib19Id->FachAbsPriorityMeasInd is high_priority_layers and Srxlev and SqualS satisfied
Sib19Id->FachAbsPriorityMeasInd is high_priority_layers and Srxlev and SqualS not satisfied.. No measure Eutra
Sib19Id->FachAbsPriorityMeasInd is invalid value
[U2L_CSG_ASF] Target CSG EutraFreq need to be measured in this source cell : newEutraIratRule (%d) MeasurePrioAllStart Eutra Measurements for For ALL
[QRB] MeasurePrioAll (CurrentRule %d vs NewRule %d)
SrxlevS (%i) > S_PrioritySearch1 (%i)
SqualS (%i) > S_PrioritySearch2 (%i)
newEutraIratRule (%d) MeasurePrioGreaterThanSC Start Eutra Measurements for Greater than SC
SrxlevS (%i) <= S_PrioritySearch1 (%i)
SqualS (%i) <= S_PrioritySearch2 (%i)
newEutraIratRule (%d) MeasurePrioAllStart Eutra Measurements for For ALL
Eutra disabled -> Measurement rule is forced to be MeasurePrioNone
RrcCnxReq in progress (newPrioBaseRule -> PrioNone)
newEutraIratRule = %d != currentEutraIratRule = %d
Measurement Rule is changed so we will now Check for the Eutra Frequencies to be measured
[APBCR] UpdatePrioBaseMeasurementRules_GsmUsed: No FACH measurement occasion
[APBCR] rrc_ReselMeasurement_GetIsActive_Gsm (%d)
[APBCR] rrc_IntraFReselMeas_GetOnlyServingCellMeasRecved (%d)
UpdateMeasurementRules_PrioBaseUsed_Gsm
InterRatReselMeasIDPtr: NULL
[APBCR] S_PrioritySearch1 (%d) S_PrioritySearch2 (%d)
[APBCR] SrxlevS (%i) SqualS (%i)
[APBCR] SrxlevS (%i) > S_PrioritySearch1 (%i)
[APBCR] SqualS (%i) > S_PrioritySearch2 (%i)
[APBCR] newPrioBaseMeasurementRule (%d) :: Measure Inter-frequencies with greater priority than SC
[APBCR] SrxlevS (%i) <= S_PrioritySearch1 (%i)
[APBCR] SqualS (%i) <= S_PrioritySearch2 (%i)
[APBCR] newPrioBaseMeasurementRule (%d) :: Measure ALL of Inter-frequencies
[APBCR] RrcCnxReq in progress (newPrioBaseRule -> PrioNone)
[APBCR] newPrioBaseMeasurementRule = %d != currentPrioBaseMeasurementRule = %d
[APBCR] Measurement Rule is changed so we will now Check for the GSM Frequencies to be measured
AddMRUEutraFreqSelReselInfo
ImmediateInterFReselMeas Required -> IsSirInterFReselMeasTriggered set to TRUE
PeriodicInterFReselMeas Required -> IsSirInterFReselMeasTriggered set to TRUE
PeriodicInterFReselMeas Required but PeriodicInterFReselMeas Not Configured
No SirInterFReselCandidate Found
ImmediateInterFReselMeas Configured & No SirInterFReselCandidate Found -> Clear ImmediateInterFReselMeas
PeriodicInterFReselMeasCount is decreased to %d
Invalid BandId of TargetCell (%d)
NeighFreq %d, Sir %d (Sir + BandOffset(%d))
BestSirFreq %d, BestSir %d, CandicateCell %d
>> CHECK: Freq %d, NumCellsInSameFreq(%d) > 1 -> FAIL
>> Triggering Conditions for SirInterFResel (ServingFreq: %d, CandidateFreq: %d)
>> CHECK: BestRscp(%d) > BestRscpTh(%d) -> PASS
Invalid BandId of ServingCell (%d)
ServingFreq %d: SirMeasured %d (SirStored %d - BandOffset(%d))
>> CHECK: ServingCellSir(%d) < 10dB -> PASS
>> CHECK: ServingCellSir(%d) < 10dB -> FAIL
>> CHECK: CandidateEcNo(%d) > -13dB -> PASS
>> CHECK: CandidateEcNo(%d) > -13dB -> FAIL
>> VERDICT: Find Better SirInterFReselCandididate -> FOUND (CandidateFreq %d, BestCell %d, CellId %d)
>> VERDICT: Find Better SirInterFReselCandididate -> NOT FOUND (BestSir %d > ServingFreqSir %d + ServingFreqHyst %d)
>> CHECK: BestRscp(%d) > BestRscpTh(%d) -> FAIL
ERROR Illegal State
RecvEutraMeasResult is ignored - Eutra disabled as IsEutraDisabled TRUE
EutraMeasInterval Updated (%d)
EutraMeasInterval Not Updated (%d)
GenMsg is NULL
ERROR stopping TPendingOos Timer
ERROR Illegal State
SqualS (%i) > SSearchGsm (%i)
SrxlevS (%i) > SHcsGsm (%i)
SHcsGsm not received
-> current InterRat Measurement real rule is MeasureNone
SqualS (%i) <= SSearchGsm (%i)
->current InterRat Measurement real rule is MeasureAll
SrxlevS (%i) <= SHcsGsm (%i)
->current InterRat Measurement real rule is MeasureAll
SSearchGsm not received
->InterRat Measurement rule is MeasureAll
SrxlevS (%i) <= SHcsGsm (%i)
SqualS (%i) <= SSearchGsm (%i)
->current InterRat Measurement real rule is MeasureAll
SqualS (%i) > SLimitSearchGsm (%i)
->current InterRat Measurement real rule is MeasureNone
SqualS (%i) <= SLimitSearchGsm (%i)
->current InterRat Measurement real rule is MeasureHcsGreaterThanOrEqualToSC
SHcsGsm not sent
->current InterRat Measurement real rule is MeasureAll
SHcsGsm not sent
SrxlevS (%i) <= SHcsGsm (%i)
IsSSearchGsmValid not sent
SqualS (%i) <= SSearchGsm (%i)
->current InterRat Measurement real rule is MeasureAll
SrxlevS (%i) > SHcsGsm (%i)
SqualS (%i) > SSearchGsm (%i)
->current InterRat Measurement real rule is MeasureHcsLessThanOrEqualToSC
