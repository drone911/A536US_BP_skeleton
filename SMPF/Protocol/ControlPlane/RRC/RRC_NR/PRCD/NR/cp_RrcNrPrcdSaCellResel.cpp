This PBD can't be run in ENDC mode
This PBD can't be run in RRC_STATE_INIT.
m_CurService == MSService_INVALID
%s
[NRCELL][RESEL] m_ConfiguredStatus 0x%x
[NRCELL][RESEL] m_WaitCnfMsg RESEL_STATUS_RAT_SUSPEND
[NRCELL][RESEL] m_WaitCnfMsg RESEL_STATUS_IRAT_CHANGE
[NRCELL][RESEL] m_WaitCnfMsg RESEL_STATUS_L2_CONFIG
[NRCELL][RESEL] m_WaitCnfMsg RESEL_STATUS_PHY_CONFIG
[NRCELL] No waiting message. terminate current procedure
CheckNodeCondition: Receive RESEL_EVAL_IND
CheckNodeCondition: Node_CELL_RESEL_OPT_RejectInd NumReselFreq == 0
CheckNodeCondition: Node_CELL_RESEL_OPT_RejectInd NumReselFreq == %d
CheckNodeCondition: Have To IRAT reselection
CheckNodeCondition: NR reselection
CheckNodeCondition: HaveToEssentialSiAcq
CheckNodeCondition: Node_CELL_RESEL_LOOP_RetryCellConfigReq : DO LOOP!!
CheckNodeCondition: CELL_RESEL_OPT_CellConfigCnf_Result : Success
CheckNodeCondition : Invalid CheckNode(%d)
CheckNodeCondition: UserHandler CheckNode(%d) Result(%d)
CheckNodeCondition: CurNode(%d) CheckNode(%d) Result(%d)
CheckNodeAndSendNextMsg : Node_CELL_RESEL_OPT_ReceiveRESEL_EVAL_IND Condition(%d)
CheckNodeAndSendNextMsg : Node_CELL_RESEL_OPT_SendRejectInd Condition(%d)
CheckNodeAndSendNextMsg : Node_CELL_RESEL_OPT_IsIRATreselection Condition(%d)
[RRC][RESEL] TargetRat %d
[RRC][RESEL] TargetRat %d
CheckNodeAndSendNextMsg : Node_CELL_RESEL_OPT_HaveToEssentialSiAcq Condition(%d)
[NRCELL][RESEL]There is no Cell!!!
CheckNodeAndSendNextMsg : Node_CELL_RESEL_LOOP_RetryCellConfigReq Condition(%d)
CheckNodeAndSendNextMsg : Node_CELL_RESEL_OPT_CellConfigCnf_Result Condition(%d)
CheckNodeAndSendNextMsg : Resel fail, Termanate procedrue
%s
[RRC][IRAT] Irat RESEL result %d
[RRC][IRAT] Irat RESEL result %d
[NRCELL][RESEL] PbdState is PBD_STATE_ABORTING
CheckNodeAndSendNextMsg : RRC_MM_IRAT_CHANGE_CNF SUCCESS!!, Termanate Cell resel procedure
%s
TriggerStateChange : RrcState(%s)
[RRC][NRSTATE] ChangeState : RrcState(%s)
[RRC][NRSTATE] ChangeState : RrcState(%s)
CheckNodeAndSendNextMsg : N2L Resel fail, Terminate procedrue
%s
%s
[NRCELL][RESEL] PbdState is PBD_STATE_ABORTING
Resolve the deferred messages
[NRCELL][RESEL] CELL_ACQ_REQ_Hdlr Band:%d Arfcn:%d CellID:%d RSRP:%d RSRQ:%d
[NRCELL][RESEL]CurentCellConfigInfo update by Cell_Acq_Req!! Band:%d Arfcn:%d SCS:%d
[NRCELL][RESEL] RRC_RRM_BCH_CONFIG_CNF result:%d
[NRCELL][RESEL] RRC_RRC_SIB1_IND
[NRCELL][RESEL] RRC_TIMER_NR_TSIB1_EXPIRY_IND
[NRCELL][RESEL] RRC_RRM_BCH_RELEASE_CNF result:%d m_ConfiguredStatus :%d
[RRC][NRCELL][RESEL] RRC_RRM_CELL_STATUS_CNF result:%d
[RRC][NRCELL][RESEL] RRC_RRM_CELL_STATUS_CNF result:%d
[NRCELL][RESEL] RRC_RRM_CELL_STATUS_CNF CellSelection Result :%d
[RRC][NRCELL][RESEL] RRC_RRM_CELL_CONFIG_CNF_Hdlr Result[%d]
[RRC][NRCELL][RESEL] RRC_RRM_CELL_CONFIG_CNF_Hdlr Result[%d]
[NRCELL][RESEL]There is no Cell!!!
[NRCELL][RESEL]RRC_RRM_CELL_CONFIG_CNF SUCCESS!!
[NRCELL][RESEL] PBD_STATE_ABORTING : no action
[NRCELL][RESEL] SERVINGCELL_CONFIG_COMMON_SIB is included in new received SIB1, L2 Config is needed
[NRCELL][RESEL] Don't need to send L2/PHY configuration. Just send result msg to MM
[NRCELL][RESEL] PbdState is PBD_STATE_ABORTING
%s
[NRCELL][RESEL] PbdState is PBD_STATE_ABORTING
[NRCELL][RESEL] PBD_STATE_RUNNING : abnormal case
[NRCELL][RESEL] PbdState is PBD_STATE_ABORTING
%s
[NRCELL][RESEL] Do Loop for cell config
[NRCELL][RESEL] Return To Source Cell
[NRCELL][RESEL] RRC_RRM_CELL_CONFIG_CNF result:%d CellStatus:%d
[NRCELL][RESEL] Band %d, Arfcn %d, PhysCellId %d
[NRCELL][RESEL] Need to check why cell selection failed !!!
[NRCELL][RESEL]IsCellIndRequired %d
%s
%s
[NRCELL][RESEL]-->RRC_SEND_EXTMSG(RRM_RRC_RAT_SUSPEND_REQ)
%s
[NRCELL][RESEL]-->RRC_SEND_EXTMSG(MM_RRC_IRAT_CHANGE_REQ)
%s
[NRCELL][RESEL]Cell Resel fail -> ReturnToSourceCell
[NRCELL][RESEL]Cell selection list has been completed so do not send message
[NRCELL][RESEL]-->RRC_SEND_EXTMSG(RRM_RRC_CELL_CONFIG_REQ), Cause : [%d]
%s
%s
[NRCELL][RESEL] There is no SIB1 for SCell. It is abnormal case. Need to check
%s
%s
[RRC][NRCELL][RESEL] ProcessCellReselStartMsg NumReselFreq : %d
[RRC][NRCELL][RESEL] ProcessCellReselStartMsg NumReselFreq : %d
[NRCELL][RESEL]ProcessCellReselFinish %d
%s
[NRCELL][RESEL] AddLteBarredCell
[NRCELL][RESEL] AddLteBarredFreq Earfcn %d
