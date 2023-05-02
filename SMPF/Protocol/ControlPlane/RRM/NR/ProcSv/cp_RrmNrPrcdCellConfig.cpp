RrmNrPrcdCellConfig::RrmNrPrcdCellConfig()
RrmNrPrcdCellConfig::~RrmNrPrcdCellConfig()
RrmNrPrcdCellConfig::DecideTriggerProcedure
RrmNrPrcdCellConfig::PreHdlr
RrmNrPrcdCellConfig::PostHdlr
RrmNrPrcdCellConfig::AbortHdlr(%d) CellConfigRunning(%d)
RrmNrPrcdCellConfig::InitCellConfigDbWithReceivedMsg
RrmNrPrcdCellConfig::InitCellConfigDbWithReceivedMsg - RRM_RRC_CELL_STATUS_REQ
RrmNrPrcdCellConfig::RRM_RRC_CELL_CONFIG_REQ_Hdlr - Cause:%s(%d), CellInfoIncluded:%d, BarredInfoIncluded:%d, MibInfoIncluded:%d
CanNot AllocMsg about RRC_RRM_CELL_CONFIG_CNF
Cannot Terminate Current Procedure(PrcdId(%d), PbdResult(%d))
RrmNrPrcdCellConfig::RRM_L1C_ALL_STOP_CNF_Hdlr
RRM_L1C_ALL_STOP_CNF Result(FAILURE)
ReTryServingCellChange(%d)
Invalid NeighborCell m_pSelectedCellInfo is NULL
Invalid NeighborCell
CanNot send L1C_RRM_SERVING_CELL_CHANGE_REQ
CanNot send L1C_RRM_INIT_MEAS_REQ beacause There is not BeamInfo
CanNot send L1C_RRM_INIT_MEAS_REQ
RrmNrPrcdCellConfig::RRM_RRM_MEAS_STATE_CNF_Hdlr
RRM_RRM_MEAS_STATE_CNF Result(FAILURE)
Abort procedure is Ending
>>Send fail in CheckFixedCell on RecvMsg.Cause(%d)
>>About NRDC Config. RecvMsg.Cause(%d)
>>Send fail BarredCell on RecvMsg.Cause(%d)
>>Send fail in CheckFixedCell on RecvMsg.Cause(%d)
>>Send fail BarredFreq on RecvMsg.Cause(%d)
>>Send fail in CheckFixedFreq on RecvMsg.Cause(%d)
>>Send fail BarredFreq on RecvMsg.Cause(%d)
>>Send fail in CheckFixedFreq on RecvMsg.Cause(%d)
RecvMsg.Cause(%d) is invalid
CHECK_m_pSelectedCellInfo CellId(%d) Arfcn(%d)
CHECK_m_pSelectedCellInfo pSelectedCellInfo is NULL
SsbMeasInfoFromIratIncluded(%d)
RrmNrPrcdCellConfig::RRM_L1C_INIT_SEARCH_CNF_Hdlr: EnableSpecifiHypoFO(%d, %d)
[Check] Fail result or unexpected num of cell in RRM_L1C_INIT_SEARCH_CNF_Hdlr.
>> FailureWithoutExecution(%d)
>> retransmission for L1C_RRM_INIT_SEARCH_REQ
>> try for NextSelectedHypoFO
CELLCONFIG_NR_CGI
CELLCONFIG_NR_CGI
RrmNrPrcdCellConfig::RRM_L1C_INIT_MEAS_CNF_Hdlr: Result(%d) MeasMode(%d)
InitMeasCnf Param : MeasRatType(%d) Band(%d) Arfcn(%d) NumCell(%d)
InitMeasCnf Param: MeasResult[%d] CellId(%d) TimingOffset(%d) BeamIndex(%d)
[Check] Fail result in RRM_L1C_INIT_MEAS_CNF_Hdlr.
>> FailureWithoutExecution(%d)
>> retransmission for L1C_RRM_INIT_MEAS_REQ
>> try for NextSelectedHypoFO
RrmNrPrcdCellConfig::RRM_L1C_INIT_MEAS_CNF_Hdlr::SetInitCellMeasResult is fail
Fail. NrCellResultInfo is empty.
CanNot send L1C_RRM_SERVING_CELL_CHANGE_REQ
CanNot send L1C_RRM_PBCH_DECODE_REQ
RrmNrPrcdCellConfig::RRM_L1C_SERVING_CELL_CHANGE_CNF_Hdlr: Result(%d)
BeamIndex (%d), BeamIndexLSB(%d), BeamIndexMSB(%d)
[Check] Fail result in RRM_L1C_SERVING_CELL_CHANGE_CNF_Hdlr. Try other Cell for Meas
RrmNrPrcdCellConfig::RRM_RRC_CELL_ACQ_CNF_Hdlr - Result:(enum)%d BarredInfoIncluded:(bool)%d NumOfBarredFreq:%d NumOfBarredCell:%d
[FG_ENDC] Activate ENDC Flag. F_ENDC_ENABLE
RrmNrPrcdCellConfig::RRM_RRC_CELL_ACQ_CNF_Hdlr::CanNot AllocMsg about RRC_RRM_CELL_CONFIG_CNF
RrmNrPrcdCellConfig::RRM_L1C_PBCH_DECODE_CNF_Hdlr: Result(%d)
Invaild Freq_Range(%d)
[Check] Fail result in RRM_L1C_PBCH_DECODE_CNF_Hdlr. Try other Cell
RrmPrcdNrCellConfig::RRM_RRC_CELL_STATUS_REQ_Hdlr
>>Result:(bool)%d CellStatusCause:(enum):%d CellSelFailCause:(enum)%d CellConfigCause:(enum)%d
Result Success
Do not SetServingInfo on BPLMN ANR case (%d)(%d)
RrmNrPrcdCellConfig::RRM_RRC_CELL_STATUS_REQ_Hdlr::EvalCellSelection::%d[Result]
Result Fail
RrmNrPrcdCellConfig::RRM_RRC_CELL_STATUS_REQ_Hdlr::CanNot AllocMsg about RRC_RRM_CELL_STATUS_CNF
BplmnRunState(%d) is not vaild.
[FG_ENDC] Activate ENDC Flag. F_ENDC_ENABLE
[Check] RRM_RRC_CELL_STATUS failure - try other Cell Id
>> try for NextSelectedHypoFO
CanNot send L1C_RRM_SERVING_CELL_CHANGE_REQ. beacause targetcell info remove.
>> next retransmission for L1C_RRM_SERVING_CELL_CHANGE_REQ
CanNot send L1C_RRM_SERVING_CELL_CHANGE_REQ
>> next retransmission for L1C_RRM_PBCH_DECODE_REQ_T
CanNot send L1C_RRM_PBCH_DECODE_REQ
RrmNrPrcdCellConfig::Init
RrmSubBlkNrCellConfig::SetCellMeasResultFromIrat
>>iterCellResultNr->CellId(%d)
>> CellResultInfoList size(%d) is not init
Arfcn(%d), newcell CellId(%d) Scs(%d) AgcGain(%d,%d) HalfFrameNumber(%d)
>>TimingOffset(%d) BeamIndex(%d)
>> RxAnt[%d] - Rsrp(%d) Rsrq(%d) Rssi(%d) Rssi(%d)
>> AvgRsrp(%d) AvgRsrq(%d) AvgSinr(%d) AvgRssi(%d) n_Valid(%d) HalfFrameNumber(%d)
RrmBlkCellSrchNr::SetInitCellMeasResult : CellId(%d) BestRsrp(%d) BestRsrq(%d) BestSinr(%d) BestRssi(%d)
RrmNrPrcdCellConfig::ProcDuplicateCellConfig(%d)
RrmNrPrcdCellConfig::RRM_RRM_MEAS_STATE_CNF_Hdlr::CanNot send L1C_RRM_SERVING_CELL_CHANGE_REQ
CanNot send L1C_RRM_INIT_MEAS_REQ beacause There is not BeamInfo
CanNot send L1C_RRM_INIT_MEAS_REQ beacause MakeInitMeasReqforModuleSwitch fail
DUPLICELLCONFIG_BLIND(%d)
>> Fix the Periodicity(%d). because The Periodicity may change
