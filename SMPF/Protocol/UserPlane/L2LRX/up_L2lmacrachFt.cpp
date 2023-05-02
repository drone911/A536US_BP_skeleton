[ERROR] Invalid GetMacRachCtrl MacEntity[%d]
[ERROR] Invalid GetMacRachCfg MacEntity[%d] DomainType[%d]
[ERROR] Invalid GetMacRachTimer MacEntity[%d] DomainType[%d]
[ERROR] Invalid GetMacRachResc MacEntity[%d] DomainType[%d]
[ERROR] Invalid GetMacRachProc MacEntity[%d] DomainType[%d]
[E] DomianType [%d]
Fail RemoveDataFm
L2LMACRACH_L2LMACRX_CR_IND_Handler start
L2LMACRACH_L2LMACRX_RAR_IND_Handler start
L2LMACRACH_L2LMACRX_SR_CHECK_IND_Handler start
Trigger SR-RACH : MacEntity[%d], UlSync[%d]
Trigger SR-RACH : MacEntity[%d], UlSync[%d]
L2LMACRACH_L2_CONFIG_REQ_Handler start
Fail CreateDataFmUni<L2lMacRachFtEvent>
Fail CreateDataFmUni<L2lMacRachFtEvent>
L2_L2LMACRACH_CONFIG_CNF send fail
L2LMACRACH_L2_PUCCH_SRS_RELEASE_IND_Handler start
[ERROR] Invalid CellGrpId[%d], TagId[%d]
L2LMACRACH_L2_RACH_START_REQ_Handler start
[ERROR] Invalid Cell Group
L2_L2LMACRACH_RACH_STOP_CNF send fail
Stop Defer RACH : DomainType[%d], MacEntity[%d], Cause[%d]
Stop Defer RACH : MacEntity[%d], Cause[%d]
L2LMACRACH_L2_RESET_REQ_Handler start : MacEntity[%d] ResetCause[%d]
L2_L2LMACRACH_RESET_CNF send fail
[TX] L2_L2LMACRACH_RESET_CNF
L2LMACRACH_L2_TX_CNF_Handler start result[%d]
Clear gL2DSDSRachCtrlInfo[MacEntity:%d].RachTxConfirmWait = false
Clear gSrCtrlInfo[DomainType:%d][MacEntity:%d].SrTxConfirmWait = false
Ignore TX_CNF, MAC State[%d] is not active
TxReqType[%d], PhyRachCause[%d] mismatch, m_DomainType[%d], MacEntity[%d]
L2_L2LMACRACH_TX_PAUSE_CNF send fail
L2LMACRACH_L2_TX_PAUSE_REQ_Handler : Defer SR[0x%X]
[ERROR] SR Event Fail !!! [MacEntity:%d] [SchedulingRequestId:%d]
L2LMACRACH_L2_TX_RESUME_REQ_Handler : Resume SR[0x%X]
L2_L2LMACRACH_TX_RESUME_CNF send fail
L2LMACRACH_L2_BWP_CHANGE_DONE_IND_Handler start
Switching gL2BwpId[DomainType:%d][MacEntity:%d][CellIndex:%d].UlBwpId [%d] -> [%d]
Switching gL2BwpId[DomainType:%d][MacEntity:%d][CellIndex:%d].DlBwpId [%d] -> [%d]
[L2->RRC] MsgBwpChgDoneInd : CellIndex(%d), ActiveUlBwpId(%d), ActiveDlBwpId(%d)
L2_L2LMACRACH_BWP_CHANGE_DONE_IND send fail
L2LMACRACH_PHY_UL_MSGA_PUSCH_TBS_Handler start
[L2<-PHY] : present flag(%d), TB size for CFRA config(%d), TB size for GroupB(%d)
L2LMACRACH_PHY_RACH_CONTROL_IND_Handler start
[L2<-PHY] PhyRachCtrl : cmd(%d), preambleIndex(%d), UL_SUL_indicator(%d), prachMaskIndex(%d), SS_PBCH_index(%d), carrier_index(%d)
Ignore L2LMACRACH_PHY_RACH_CONTROL_IND
Invalid NR_DRACH_CMD_SUCCESS : RachCause[%d]
L2LMACRACH_PHY_TIMER_EXPIRE_IND_Handler start
[L2<-PHY] RachTimerExp : timer_type(%d)
Ignore L2LMACRACH_PHY_TIMER_EXPIRE_IND
L2LMACRACH_PHY_DSR_FAIL_IND_Handler start
[L2<-PHY] DsrMaxFail : cmd(%d)
Ignore L2LMACRACH_PHY_DSR_FAIL_IND
[L2->RRC] MsgPucchSrsRelInd : CellGrpId(%d), TagId(%d), Cause(%d)
L2_L2LMACRACH_PUCCH_SRS_RELEASE_IND send fail
L2LMACRACH_PHY_BEAM_FAIL_IND_Handler start
[L2<-PHY] BeamFailInd : BFIndicationPeriod(%d)
L2LMACRACH_L2_PHY_CONFIG_STATUS_IND_Handler start
L2LMACRACH_L2_BWP_CHANGE_CNF_Handler start
[L2->RRC] MsgBwpChgDoneInd : CellIndex(%d), ActiveUlBwpId(%d), ActiveDlBwpId(%d)
L2_L2LMACRACH_BWP_CHANGE_DONE_IND send fail
Re-start RACH on new BWP
[ERROR] no gRachCtrlInfo for Re-Start RACH
[ERROR] L2lmacrachFt create fail !!!
