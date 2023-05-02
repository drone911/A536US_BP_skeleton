[LTE_L2RX] L2HRXPDCP_Set_RRE_NrDrbBackupSN : DRB_ID[%d], RX_NEXT[%d], RX_DELIV[%d], RX_REORD[%d]
[LTE_L2RX] L2HRXPDCP_Reset_RRE_NrDrbBackupSN : DRB_ID[%d], bClearAllDrb[%d]
[LTE_L2RX] L2HRXPDCP_Forward_RRE_NrDrbBackupSN : DRB_ID[%d]
[LTE_L2RX] L2HRXPDCP_Recover_RRE_NrDrbBackupSN : DRB_ID[%d] / Conv LCID[%d], RX_NEXT[%d], RX_DELIV[%d]
[LTE_L2RX] L2HRXPDCP_ProcessPendingResume : Process PdcpResume.pMsgPendingDL
[LTE_L2RX] L2HRXPDCP_ProcessPendingResume : no pending dl msg
[LTE_L2RX] LTE_SendRxBearerInfoIndMsg Send(ReleaseF=%d, DRB_ID=%d, RX_NEXT=%d, RX_DELIV=%d, RX_REORD=%d, IsSrb=%d)
[LTE_L2RX] LTE_SendRxBearerInfoIndMsg Send Fail!! (rst=%d)
[LTE_L2RX] LTE_SendRxBearerInfoIndMsg_DestRRC malloc fail
[LTE_L2RX] LTE_L2HTX_LTE_DL_RBINFO_IND
[LTE_L2RX] LTE_L2HTX_LTE_DL_RBINFO_IND DS
[LTE_L2RX] NRL2 requeseted the forced RRE to recover Data
[LTE_L2RX] L2HRXPDCP_ReceiveRxBearerInfoIndMsg : Invalid LCID(%d)
[LTE_L2RX] L2HRXPDCP_ReceiveRxBearerInfoIndMsg : Invalid configurtion RBID(%d) pBody->RB_ID (%d) IsSrb(%d)
[LTE_L2RX] L2HRXPDCP_ReceiveRxBearerInfoIndMsg : Conv RB_ID[%d], RX_NRPdcpEN == LTE_PDCP @@@@@@@@@@@@@@@@@@@@@@
[LTE_L2RX] L2HRXPDCP_ReceiveRxBearerInfoIndMsg Conv RB_ID[%d], Rcv(DRB_ID=%d, RX_NEXT=%d, RX_DELIV=%d, RX_REORD=%d)
[LTE_L2RX] L2HRXPDCP_ReceiveRxBearerInfoIndMsg : prev[ReorderingFunction:%d, pPdcpReoderTb:%d, Pdcp_RX_COUNT_backup:%d]
RB_ID[%d] PDCP RX activate due to Receive BearerInfo
L2HRXPDCP_ReceiveRxBearerInfoIndMsg : pSnUpdateIndMsg malloc fail
send LTE_CPDCP_DL_ENDC_RESET_CNF
Fail pal_Malloc and Fail Send LTE_CPDCP_DL_ENDC_RESET_CNF!!!
send LTE_CPDCP_DL_RESET_CNF
Fail pal_Malloc and Fail Send LTE_CPDCP_DL_RESET_CNF!!!
send LTE_CPDCP_DL_RELEASE_ALL_CNF
Fail pal_Malloc and Fail Send LTE_CPDCP_DL_RELEASE_ALL_CNF!!!
send LTE_CPDCP_DL_RELEASE_SCG_CNF
Fail pal_Malloc and Fail Send LTE_CPDCP_DL_RELEASE_SCG_CNF!!!
[BEFORE] L2HRX_UpdtL2ResetInx L2RxResetWrInx[%d] PdcpRlcRxIfRD/WR[%d,%d]
[AFTER] L2HRX_UpdtL2ResetInx L2RxResetWrInx[%d] PdcpRlcRxIfRD/WR[%d,%d]
L2HRX_ResetAll IsNextRelease %d, ScgReset[%d]], RX SecurityBlockF[%d]
[DS] PDCP Release without reset when 3G-4G opertaion
LMAC_RX_SEC_BLOCKFLAG_GET[%d] eReqType[%d] pstDcpReqInfo->uStackId[%d]!!!
L2HRX_ResetCCRb[%d]
L2HRX_FreePdcpRlcDescIf START - RD/WR[%d, %d]
L2HRX_FreePdcpRlcDescIf END - RD/WR[%d, %d]
RB_ID[%d] L2HRX_FreePdcpDescRb, VR_R[%d], VR_H_Backup[%d], VR_H[%d]
L2HRX_ReleaseAll
RB_ID[%d] RlcTxChunk free [%d]
L2HRX_ReleaseAll
LTE_PDCP_DL_BEARER_RESUME_REQ :LTE_RB_SRB1
LTE_PDCP_DL_BEARER_RESUME_REQ :LTE_RB_OTHER
ROHC DL Configuration for RB_OHTER_FULL_CONFIG
LTE_PDCP_DL_BEARER_RESUME_REQ :LTE_RB_HO_ALL
ROHC DL Configuration for RB_HO_FULL_CONFIG
LTE_PDCP_DL_BEARER_RESUME_REQ :LTE_RB_SCG
L2RX PDCP Rxed LTE_PDCP_DL_BEARER_RESUME_REQ: Pending Request : %d
pMsgPendindResume : malloc fail
L2HRXRLC_ProcDataIndMsg : Inx/EndParam[%x/%x], Read/WriteIdx[%x/%x], NumTb[%x/%x/%x]
RB_ID[%d] L2PdcpRlcRxDataDescIf Full WD[%d], RD[%d]
RB_ID[%d]L2RXRLC TASK 1:NO ACTIVE[%d]
L2RXRLC_ForceStatusTriggerHisrCb
L2RXRLC_ForceStatusTriggerHisrCb : malloc fail
RB_ID[%d]L2HRXRLC_ProcForceStatusRptTrigger : VR_R[%d], VR_H[%d], Prohibit[%d], T1TMR[%d], StatusTriggered[%d]
RB_ID[%d]Fail pal_Malloc and Fail Send LTE_L2HRX_L2HRX_T1_TMR_EX_IND!!!
L2HRX_ForwardRrcMsg : pRRCmsg[%x], msgid[%x], trid[%x]
LTE_PDCP_DATA_IND msg Send fail
[L2C] LTE_ProcL2HRxRlcRrcMsg, pMsg is NULL
[L2C] LTE_ProcL2HRxRlcRrcMsg, Wrong req_id[0x%x]
[L2C] LTE_ProcL2HRxPdcpRrcMsg, pMsg is NULL
[L2C] LTE_ProcL2HRxPdcpRrcMsg, Wrong req_id[0x%x]
L2HRXPDCP_ClearDcpInfoAfterDcp : pPdcpMain->bPendingReleaseAllMsg
L2HRXPDCP_ClearDcpInfoAfterDcp : Malloc Fail
RB_ID[%d]LTE_L2HRX_L2HRX_STATUS_PROHIBIT_TMR_EX_IND
RB_ID[%d]L2RXRLC TASK 3 :NO ACTIVE[%d]
LTE_L2HRX_L2LRX_RESET_IND, invalid resetCause[%d]
[L2RX] LTE_L2HRX_L2LRX_RELEASE_ALL_IND : LMAC_RX_SEC_BLOCKFLAG_GET() = %d
RB_ID[%d]LTE_L2HRX_L2HRX_PDCP_REORDER_TMR_EX_IND, But Empty
RB_ID[%d]LTE_L2HRX_L2HRX_PDCP_REORDER_TMR_EX_IND
RB_ID[%d]Pending PDCP reoredering timer exp due to decipher running
RB_ID[%d]Fail pal_Malloc and Fail Send LTE_L2HRX_HAL_TRANSFER_EXT_IF_REQ!!!
RB_ID[%d]Fail to send msg to L2HRX_HAL !!!
LTE_SendL2HRXMsgToL2 Fail msgid[%x]!!!
LTE_SendL2HRXMsgToRRC : pal_MsgSendTo Fail msgid[%x]!!!
LTE_SendL2HRXMsgToRRC : pal_SmSetEvents Fail msgid[%x]!!!
LTE_SendL2HRXMsgToL1LC Fail !!!
Not Send L2HRX_L1LC_RX_REQ (WatiCmd %d,CurCmd:%d)
[L2RX => L1LC] Send L2HRX_L1LC_RX_REQ (Cmd:%d)
Cannot Allocate L2HRX_L1LC_RX_REQ
[MULTICORE] RB_ID[%d]pal_Malloc Fail, discardsize[%d]
[MULTICORE] RB_ID[%d] LTE_SendPdcpCtlPdu. pCtlPdu[0x%x], PduType[%d]
LTE_ProcL2HRxWaitChangeCore : pal_SmRetrieveEvents Error
SMC Message Error, cause=%d
RB_ID[%d]L2HRXRLC_ProcT1TmrExIndMsg
RB_ID[%d]L2RXRLC TASK 2:NO ACTIVE[%d]
Fail pal_Malloc and Fail Send LTE_L2LTX_L2HTX_SRI_REQ!!!
L2HRX_ResetFullConfig(%d)
L2HRX_DRBRelease
LTE_L2HRX_HAL_DECIPHER_DONE_IND
LTE_L2HRX_HAL_SRB_AFTER_DECIPHER_IND : ( PdcpMain.bPendDcpReq == TRUE )
LMAC_RX_SEC_BLOCKFLAG_GET[%d] is not NULL !!!
RB_ID[%d]Host if Socket Fulll : Sdu discard!!!
[L2RX] LTE_L2HRX_PKTPROC_DRB_DECIPHER_ABORT_IND
LTE_L2HRX_PKTPROC_DRB_DECIPHER_IND : ( pPdcpMain->bPendDcpReq == TRUE )
RB_ID[%d]Host if Socket Fulll : Sdu discard!!!
L2RX PDCP Rxed L2HRX_L1LC_RX_CNF
[LTE_L2RX] LTE_ProcL2HRxPdcpNrPdcpMsg Rcv L2HRX_NRPDCP_RB_CHANGE_IND, StackId[%d]
Fail pal_Malloc and Fail Send L2HRX_NRPDCP_RB_CHANGE_IND!!!
LTE_ProcL2HTxMsg, pMsg is NULL
RB_ID[%d] ERROR!! LTE_L2HRX_L2HTX_PDCP_CTL_PDU_REQ. PdcpRxState == L2_NULL
LTE_ProcL2HTxMsg, Wrong msg_id[0x%x]
