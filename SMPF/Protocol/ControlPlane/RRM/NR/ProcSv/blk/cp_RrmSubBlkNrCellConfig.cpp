RrmSubBlkNrCellConfig::CpyCellConfigInfo RecvMsg.MsgGrpId %d
>> Cause:%d(6:ENDC), Band:%d, CellId:%d, SsbFrequency:%d, SsbScs:(enum)%d, SsbPeriodicity:(enum)(%d)(%d[ms])
RrmSubBlkNrCellConfig::CpyCellConfigInfo (RecvMsg, TargetCell), RecvMsg.MsgGrpId %d
>>TargetCell periodic(%d)
RrmSubBlkNrCellConfig::CpyCellConfigInfo - pFreq is NULL
>> Cause:%d, Band:%d, CellId:%d, SsbFrequency:%d, SsbScs:(enum)%d, SsbPeriodicity:%d[ms])
[Check] Initial cell search FAIL. Send RRC_RRM_CELL_CONFIG_CNF with fail result
BplmnRunState(%d) is not vaild.
RrmSubBlkNrCellConfig::SendFailCNFMessage::CanNot AllocMsg about RRC_RRM_CELL_CONFIG_CNF
RrmSubBlkNrCellConfig::CheckIfnotUsingAstunnel
RrmNrSm::RRC_RRM_CELL_CONFIG_CNF::Terminate Current Procedure(PrcdId(%d))
RrmNrSm::RRC_RRM_CELL_CONFIG_CNF:: Cannot Terminate Current Procedure(PrcdId(%d), PbdResult(%d))
CanNot send RRC_RRM_CELL_CONFIG_CNF. Because F_USING_ASTUNNEL was Enable
RrmSubBlkNrCellConfig::CheckIfDuplicateCellConfig
RrmSubBlkNrCellConfig::CheckIfDuplicateCellConfig:: pIntraFreqInfo is not
RrmSubBlkNrCellConfig::CheckIfDuplicateCellConfig:: ServCellInfo is not
RrmSubBlkNrCellConfig::CheckIfDuplicateCellConfig:: NEIGHBOR_FAIL
ServCellInfo BandId(%d) Arfcn(%d) CellId(%d) SCS(%d)
RecvMsg BandId(%d) Arfcn(%d) CellId(%d) SCS(%d)
RrmSubBlkNrCellConfig::CheckIfDuplicateCellConfig:: Invalid NeighborCell
RrmSubBlkNrCellConfig::CheckIfDuplicateCellConfig:: DUPLICELLCONFIG_(%d) Case, RrmState(%d)
RrmSubBlkNrCellConfig::IsNeighborCell
RrmSubBlkNrCellConfig::BestNeighbor::ServingCell is not
RrmSubBlkNrCellConfig::IsNeighborCell::Search in IntraFreqInfo
RrmSubBlkNrCellConfig::IsNeighborCell::empty IntraFreqInfo
IDLISTEDCELLSET::CellInfo BandId(%d) Arfcn(%d) CellId(%d) SCS(%d)
IDDETECTEDCELLSET::CellInfo BandId(%d) Arfcn(%d) CellId(%d) SCS(%d)
RrmSubBlkNrCellConfig::IsNeighborCell::Search in InterFreqInfo
IDLISTEDCELLSET::CellInfo BandId(%d) Arfcn(%d) CellId(%d) SCS(%d)
IDDETECTEDCELLSET::CellInfo BandId(%d) Arfcn(%d) CellId(%d) SCS(%d)
RrmSubBlkNrCellConfig::IsNeighborCell
RrmSubBlkNrCellConfig::BestNeighbor::ServingCell is not
RrmSubBlkNrCellConfig::IsNeighborCell::Search in IntraFreqInfo
RrmSubBlkNrCellConfig::IsNeighborCell::empty IntraFreqInfo
IDLISTEDCELLSET::CellInfo BandId(%d) Arfcn(%d) CellId(%d) SCS(%d)
IDDETECTEDCELLSET::CellInfo BandId(%d) Arfcn(%d) CellId(%d) SCS(%d)
RrmSubBlkNrCellConfig::IsNeighborCell::Search in InterFreqInfo
IDLISTEDCELLSET::CellInfo BandId(%d) Arfcn(%d) CellId(%d) SCS(%d)
IDDETECTEDCELLSET::CellInfo BandId(%d) Arfcn(%d) CellId(%d) SCS(%d)
RrmSubBlkNrCellConfig::SetssbPositionsInBurst
>>RrmSubBlkNrCellConfig::SetssbPositionsInBurst - Invalid ssbPositionsInBurst.choice(%d)
>>ssbPositionsInBurst - value_L(%d), ssbPositionsInBurst(0x%08X%08X)
>>ssbPositionsInBurst is not present
RrmSubBlkNrCellConfig::SetCellResultInfo
>>iterCellResultNr->CellId(%d)
>> CellResultInfoList size(%d) is not init
>> select a beamindex(%d)
>> SsbTimingOffset(%d)
>> BeamTimingOffset(%d) BeamIndex(%d) NumHF(%d)
>> ANT[%d] Rsrp(%d) Rsrq(%d) Sinr(%d) Rssi(%d)
>> AvgRsrp(%d) AvgRsrq(%d) AvgSinr(%d) AvgRssi(%d) n_Valid(%d)
>> select a beamindex(%d)
>> SsbTimingOffset(%d)
>> BeamTimingOffset(%d) BeamIndex(%d)
>> ANT[%d] Rsrp(%d) Rsrq(%d) Sinr(%d) Rssi(%d)
>> AvgRsrp(%d) AvgRsrq(%d) AvgSinr(%d) AvgRssi(%d) n_Valid(%d)
>>can not select beamindex(%d) isValid(%d)
>> MAXNUM numBeamMeasResult(%d)
>>iterCellResultNr->CellId(%d)
>> CellResultInfoList size(%d) is not init
RrmSubBlkNrCellConfig::SetCellResultInfo:: CellInfo's beamindex is inValid
RrmSubBlkNrCellConfig::IsNeighborCell::RRM_SET_TYPE_IDLISTEDCELLSET:Band(%d) SsbFrequency(%d) SubcarrierSpacing(%d) CellId(%d) Periodicity(%d)
RxBeamIdx(%d) AgcGainIdx0[%d], AgcGainIdx1[%d], NumHF(%d)
BestRsrp(%d) BestRsrq(%d) BestRssi(%d)
numBeamMeasResult(%d)
RrmSubBlkNrCellConfig::SelectFirstTagetCellInEqualPriorityList
CHECK_m_pSelectedCellInfo CellId(%d) Arfcn(%d)
CHECK_m_pSelectedCellInfo pSelectedCellInfo is NULL
ReselectionList is empty
>>can not select BarredCell
>>can not select in CheckFixedCell
>>select CellId(%d) Arfcn(%d)
ReselectionList is empty
DUPLICELLCONFIG_NEIGHBOR(%d)
Invalid NeighborCell
CanNot send L1C_RRM_SERVING_CELL_CHANGE_REQ
CanNot send L1C_RRM_INIT_MEAS_REQ beacause There is not BeamInfo
CanNot send L1C_RRM_INIT_MEAS_REQ
RrmSubBlkNrCellConfig::RRM_RRM_MEAS_STATE_CNF_Hdlr:: Invalid NeighborCell
CHECK_m_pSelectedCellInfo CellId(%d) Arfcn(%d)
CHECK_m_pSelectedCellInfo pSelectedCellInfo is NULL
RrmSubBlkNrCellConfig::TryOtherCellForServingCellChange - FailureWithoutExecution(%d)
RrmSubBlkNrCellConfig::RRM_L1C_SERVING_CELL_CHANGE_CNF_Hdlr::DUPLICELLCONFIG::Terminate Current Procedure(PrcdId(%d))
RrmSubBlkNrCellConfig::RRM_L1C_SERVING_CELL_CHANGE_CNF_Hdlr::CanNot AllocMsg about RRM_RRC_CELL_CONFIG_REQ
RrmSubBlkNrCellConfig::RRM_L1C_SERVING_CELL_CHANGE_CNF_Hdlr::DUPLICELLCONFIG::Cannot Terminate Current Procedure(PrcdId(%d), PbdResult(%d))
[Check] No more candidate beam for in PBCH_DECODE.
>> try for NextSelectedHypoFO
>> next retransmission for L1C_RRM_SERVING_CELL_CHANGE_REQ
>> try for NextSelectedHypoFO
>> next retransmission for L1C_RRM_SERVING_CELL_CHANGE_REQ
CanNot send L1C_RRM_SERVING_CELL_CHANGE_REQ
>> next retransmission for L1C_RRM_PBCH_DECODE_REQ_T
CanNot send L1C_RRM_PBCH_DECODE_REQ
TryOtherCellForCellAcqFail - CellConfigCause:(enum)%d
>>Wait until get CGI_STOP_REQ
>>Send CELL_CONFIG(FAILURE) - CellAcqFail for target cell:%d
>>SelectTagetCellInEqualPriorityList on TryOtherCellForCellAcqFail
>>GetNextTargetCell on TryOtherCellForCellAcqFail
>> try for NextSelectedHypoFO on TryOtherCellForCellAcqFail
CanNot send L1C_RRM_SERVING_CELL_CHANGE_REQ. beacause targetcell info remove.
>>FR1 - next retransmission for SERVING_CELL_CHANGE_REQ
CanNot send L1C_RRM_SERVING_CELL_CHANGE_REQ
>>FR2 - next retransmission for PBCH_DECODE_REQ
CanNot send L1C_RRM_PBCH_DECODE_REQ
Unexpected CellConfigCause:(enum)%d on TryOtherCellForCellAcqFail
>> retransmission for L1C_RRM_SERVING_CELL_CHANGE_REQ
CanNot send L1C_RRM_SERVING_CELL_CHANGE_REQ. beacause targetcell info remove.
>> next retransmission for L1C_RRM_SERVING_CELL_CHANGE_REQ
CanNot send L1C_RRM_SERVING_CELL_CHANGE_REQ
>> next retransmission for L1C_RRM_PBCH_DECODE_REQ_T
CanNot send L1C_RRM_PBCH_DECODE_REQ
