L2_L1C_TX_CNF_Handler start CellGrpId[%d] DSDS[%d/%d] RSLT[%d]
L1C_L2_TX_REQ send fail
L1C_L2_TX_REQ retry
TX_CNF result is false! Keep TxReq for retry! ReqTask[%d] m_tL2TxReqQ.size(%d)
[ERROR] TX_CNF result is false! ReqTask[%d]
[L2<-L1C] MsgTxCnf : TxReqType(%d), SsbIndex(%d), SsRsrp(%d), CsiRsIndex(%d), CsiRsrp(%d)
[L2<-L1C] MsgTxCnf : Pcmax(%d), PcmaxSul(%d), PathLoss(%d) Result(%d) CellGrpId(%d) DSDS(%d/%d)
L2HPDCPTX_L2_TX_CNF send fail
L2HPDCPTX_L2_TX_CNF send success
L2HPDCPRX_L2_TX_CNF send fail
L2HPDCPRX_L2_TX_CNF send success
L2LMACRACH_L2_TX_CNF send fail
L2LMACRACH_L2_TX_CNF send success
L2LMACRX_L2_TX_CNF send fail
L2LMACRX_L2_TX_CNF send success
L2_L1C_TX_CNF Handled already!!!
L1C_L2_TX_REQ send fail
[L2][E] DSDS paused m_DomainType[%d] CellGrpId[%d]
L1C_L2_TX_PAUSE_CNF send fail
L2LMACRACH_L2_TX_PAUSE_REQ send fail
default RNTI
[L2->PHY] PHY_L2_RNTI_CONTROL_IND : type[%d], value[%d], domainType[%d], MacEntity[%d], ServcellIndex[%d], carrierBitmap[%d], ccBitmap[%d]
Ignore PHY_L2_RNTI_CONTROL_IND, domainType[%d], MacEntity[%d], ServcellIndex[%d], carrierBitmap[%d], ccBitmap[%d]
[L2->PHY] PHY_L2_PUCCH_SRS_RELEASE_IND : cmd[%d], domainType[%d], MacEntity[%d], ServcellIndex[%d], carrierBitmap[%d], ccBitmap[%d]
Ignore PHY_L2_PUCCH_SRS_RELEASE_IND, domainType[%d], MacEntity[%d], ServcellIndex[%d], carrierBitmap[%d], ccBitmap[%d]
[L2][E] DSDS resumed TxQ[%d] TxRetry[%d]
L1C_L2_TX_RESUME_CNF send fail
L1C_L2_TX_REQ send fail
L2LMACRACH_L2_TX_RESUME_REQ send fail
L2_L1C_DRX_RESTORE_REQ_Handler start. m_DomainType[%d], MacEntity[%d]
[ERROR] L1C_L2_DRX_RESTORE_CNF_T send fail
[L2] L1C_L2_DRX_RESTORE_CNF m_DomainType[%d] MacEntity[%d]
[L2] L2_L1C_CGI_TX_PAUSE_REQ! gL2TxRetryANR(%d) m_DomainType(%d)
[ERROR] L1C_L2_CGI_TX_PAUSE_CNF send fail
[L2] L2_L1C_CGI_TX_RESUME_REQ! gL2TxRetryANR(%d) m_DomainType(%d)
[ERROR] L1C_L2_CGI_TX_RESUME_CNF send fail
[ANR] Retry sending L1C_L2_TX_REQ_T! m_tL2TxReqQ.size(%d) task(%d) TxReqType(%d)
L1C_L2_TX_REQ send fail
[L2] L2_L1C_BPLMNCTRLR_RECOVERY_DONE_IND_Handler start. gL2TxRetryANR(%d) m_DomainType(%d) MsgGrpId(%d)
L2_L2HPDCPRX_TX_REQ_Handler start DSDS(%d/%d)
L1C_L2_TX_REQ send fail
L1C_L2_TX_REQ (PDCPRX : Type:%d, BwpIdx:%d, ScellIdx:%d, cipher[%d] pend[%d]) send success
L2_L2HPDCPTX_TX_REQ_Handler start DSDS(%d/%d). m_bPendingTxReqANR(%d)
L1C_L2_TX_REQ send fail
L1C_L2_TX_REQ (PDCPTX : Type:%d, BwpIdx:%d, ScellIdx:%d, cipher:%d PhyConfig:%d pend:%d) send success
[ANR] Keep TX_REQ(PDCPTX) msg!
[L2] Sending L1C_L2_TX_PAUSE_CNF fail
[L2] Sending L1C_L2_TX_RESUME_CNF fail
L1C_L2_TX_REQ send fail
L2_L2LMACRACH_TX_DONE_IND_Handler start
L1C_L2_TX_DONE_IND send fail
[L2] L1C_L2_TX_DONE_IND m_DomainType[%d] CellGrpId[%d]
L2_L2LMACRACH_TX_REQ_Handler start DSDS(%d/%d). m_bPendingTxReqANR(%d)
L1C_L2_TX_REQ send fail
L1C_L2_TX_REQ (MACRACH : Type:%d, BwpIdx:%d, ScellIdx:%d, cipher:%d PhyConfig:%d pend:%d) send success
[ANR] Keep TX_REQ(MACRACH) msg!
[L2] L2_L2LMACRX_DRX_CMD_IND
[L2] Sending L1C_L2_DRX_CMD_IND Fail!
[L2] L1C_L2_DRX_CMD_IND m_DomainType[%d] CellGrpId[%d]
[L2] L2_L2LMACRX_CLK_CHANGE_IND
L2_L2LMACRX_TX_REQ_Handler start DSDS(%d/%d)
L1C_L2_TX_REQ send fail
L1C_L2_TX_REQ (MACRX : Type:%d, BwpIdx:%d, ScellIdx:%d, cipher[%d] pend[%d]) send success
L1C_L2_TX_REQ send fail
L1C_L2_TX_CFG_RESET_IND send fail
[L2->L1C] L1C_L2_TX_CFG_RESET_IND : type(%d)
L2_L2LMACRACH_BWP_CHANGE_REQ_Handler start
L1C_L2_BWP_CHANGE_REQ send fail
[L2] L1C_L2_BWP_CHANGE_REQ m_DomainType[%d] CellGrpId[%d]
[L2][CDRX] L2_PHY_DRX_CONFIRM_IND. CellGrpId(%d)
[CDRX] ignore L2_PHY_DRX_CONFIRM_IND! TX_REQ is running!
L2HPDCPTX_L2_TX_CNF send fail
TxReq Queue flushed, m_DomainType[%d] CellGrpId[%d] L2HPDCPTX_L2_TX_CNF
L2HPDCPRX_L2_TX_CNF send fail
TxReq Queue flushed, m_DomainType[%d] CellGrpId[%d] L2HPDCPRX_L2_TX_CNF
L2LMACRACH_L2_TX_CNF send fail
TxReq Queue flushed, m_DomainType[%d] CellGrpId[%d] L2LMACRACH_L2_TX_CNF
L2LMACRX_L2_TX_CNF send fail
TxReq Queue flushed, m_DomainType[%d] CellGrpId[%d] L2LMACRX_L2_TX_CNF
