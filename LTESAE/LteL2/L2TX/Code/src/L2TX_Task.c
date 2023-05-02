[LTE_L2TX] L2HTXPDCP_BlockSplitTxRequest : gdwTestBlockReqCount[%d], gdwTestUnBlockReqCount[%d]
[LTE_L2TX] L2HTXPDCP_UnBlockSplitTxRequest : gdwTestBlockReqCount[%d], gdwTestUnBlockReqCount[%d]
[L2C] LTE_ProcL2HTxPdcpL2CMsg, pMsg is NULL
PDCP_CfgCnf is NULL!!!
[L2C] LTE_ProcL2HTxPdcpL2CMsg, Wrong req_id[0x%x]
[MULTICORE] RB_ID[%d] L2HTXPDCP_ProcDataInd: TargetQueue[%d] pStartSduDesc[0x%x] pEndSduDesc[0x%x] SduCnt[%d] bSlSdu[%d]
[MULTICORE] RB_ID[%d] L2HTXPDCP_ProcDataInd: ERROR!! TargetQueue[%d] bSlSdu[%d]
[MULTICORE] RB_ID[%d] L2HTXPDCP_ProcDataInd: Push to TargetQueue[%d] head[0x%x] tail[0x%x] Cnt[%d]
LTE_SendL2HTXMsgToL2LTX: msgId[%x]. pMsg[%x]
Fail LTE_SendL2HTXMsgToL2HRX [%x]
LTE_SendL2HTXMsgToL2LTX: msgId[%x]. pMsg[%x]
Fail LTE_SendL2HTXMsgToL2LTX [%x]
[MULTICORE] pal_Malloc fail LTE_L2LTX_L2HTX_PDCP_TX_SUSPEND_CNF
[MULTICORE] L2HTXPDCP_SendPdcpTxSuspendCnf
[MULTICORE] RB_ID[%d]pal_Malloc Fail
[MULTICORE] RB_ID[%d]pal_Malloc Fail
[MULTICORE] RB_ID[%d] L2HTXPDCP_SendPdcpStatusToL2LTX: pCtlPdu[0x%x] CtlPduSize[%d]
[MULTICORE] Send LTE_L2LTX_L2HTX_PDCP_TX_SUSPEND_CNF. LMAC_TX_SEC_BLOCKFLAG[%d]
[MULTICORE] pal_Malloc fail LTE_L2LTX_L2HTX_PDCP_TX_SUSPEND_CNF
[MULTICORE] pal_Malloc fail L2HTXPDCP_SendRlcTxActiveInd
[MULTICORE] RB_ID[%d] L2HTXPDCP_SendRlcTxActiveInd
[MULTICORE] ERROR!! pal_Malloc fail L2HTXPDCP_SendPdcpCtlPduReqToL2HRX
[MULTICORE] RB_ID[%d] L2HTXPDCP_SendPdcpCtlPduReqToL2HRX
[LTE_L2TX] L2HTXPDCP_Set_RRE_NrDrbBackupSN : DRB_ID[%d], TX_NEXT[%d]
[LTE_L2TX] L2HTXPDCP_Reset_RRE_NrDrbBackupSN : DRB_ID[%d], bClearAllDrb[%d]
[LTE_L2TX] L2HTXPDCP_Forward_RRE_NrDrbBackupSN : DRB_ID[%d]
[LTE_L2TX] L2HTXPDCP_Recover_RRE_NrDrbBackupSN : DRB_ID[%d] , Conv LCID[%d], TX_NEXT[%d]
[LTE_L2TX] L2HTXPDCP_ProcessPendingResume : Process Resume HISR
[LTE_L2TX] LTE_SendTxBearerInfoIndMsg Send(DRB_ID=%d, TX_NEXT=%d, IsSrb=%d, IsValid_TX_NEXT=%d)
[LTE_L2TX] LTE_SendTxBearerInfoIndMsg Send Fail!! (rst=%d)
[LTE_L2TX] LTE_SendTxBearerInfoIndMsg_DestRRC malloc fail
[LTE_L2TX] LTE_SendTxBearerInfoIndMsg Send(DRB_ID=%d, TX_NEXT=%d, IsSrb=%d, IsValid_TX_NEXT=%d)
[LTE_L2TX] LTE_L2HTX_LTE_UL_RBINFO_IND
[LTE_L2TX] LTE_L2HTX_LTE_UL_RBINFO_IND DS
[LTE_L2TX] LTE_SendTxBearerInfoIndMsg : bRegReduceTime=%d
[PDCPTX][ENTITY:%d][DRBID:%d][CONFIG] Chk Active Cond, Wait_SN[RX/TX][%02x] ePendingStatusReport/bWaitRevertDone[%02x], [%d/%d/%d]
[PDCPTX][ENTITY:%d][DRBID:%d][CONFIG] Chk Active Cond, Activated
[LTE_L2TX] L2HTXPDCP_ReqeustLteMaxBsiByNR : StackId[%d] status[%d]
[ERROR][LTE_L2TX] L2HTXPDCP_ReceiveTxBearerInfoIndMsg : Force RRE
[PDCPTX][ENTITY:%d][DRBID:%d][CONFIG] Rxed RBINFO, L2HTX_NRPDCP_LTE_RRE_REQ
[PDCPTX][ENTITY:%d][DRBID:%d][CONFIG] Rxed RBINFO, L2HTX_NRPDCP_LOCAL_RELEASE_REQ
[PDCPTX][ENTITY:%d][DRBID:%d][CONFIG] Rxed RBINFO, L2HTX_NRPDCP_NRL2_CONFIG_DONE_NTF
[LTE_L2TX] L2HTXPDCP_ReceiveTxBearerInfoIndMsg : Invalid LCID(%d)
[LTE_L2TX] L2HTXPDCP_ReceiveTxBearerInfoIndMsg : Invalid configurtion RBID(%d) pBody->RB_ID (%d) IsSrb(%d)
[LTE_L2TX] L2HTXPDCP_ReceiveTxBearerInfoIndMsg : RB_ID[%d], TX_NRPdcpEN == LTE_PDCP @@@@@@@@@@@@@@@@@@@@@@
[PDCPTX][ENTITY:%d][DRBID:%d][CONFIG] Rxed RBINFO, HFN/VT_S[%d/%d], TX_NEXT=%d, Cmd=%x
[ERROR][PDCPTX][ENTITY:%d][DRBID:%d][CONTROL PDU] Inalid Entity ID
[ERROR][PDCPTX][ENTITY:%d][DRBID:%d][CONTROL PDU] NRL2 MSG, rlcmode=%d
[ERROR][PDCPTX][ENTITY:%d][DRBID:%d][CONTROL PDU] NRL2 MSG, CtrlPduLen=%d
[ERROR][PDCPTX][ENTITY:%d][DRBID:%d][CONTROL PDU] NRL2 MSG, malloc fail-1
[ERROR][PDCPTX][ENTITY:%d][DRBID:%d][CONTROL PDU] NRL2 MSG, malloc fail-2
[PDCPTX][ENTITY:%d][DRBID:%d][CONTROL PDU] NRL2 MSG, Size[%d] SN_LEN[%d] %08x_%08x
send LTE_CPDCP_UL_ENDC_RESET_CNF
Fail pal_Malloc and Fail Send LTE_CPDCP_UL_ENDC_RESET_CNF!!!
[PDCPTX][ENTITY:%d][DRBID:%d][CONFIG] ADD SPLITBO, LCG[%d], BO[%d/%d]
[PDCPTX][ENTITY:x][DRBID:%d][CONFIG] UPDATE SPLITBO[%d], STACKID[%d]
send LTE_CPDCP_UL_RESET_CNF
Fail pal_Malloc and Fail Send LTE_CPDCP_UL_RESET_CNF!!!
send LTE_CPDCP_UL_RELEASE_ALL_CNF
Fail pal_Malloc and Fail Send LTE_CPDCP_UL_RELEASE_ALL_CNF!!!
send L2HTXPDCP_SendReleaseSCGCnf
Fail pal_Malloc and Fail Send LTE_CPDCP_UL_RELEASE_SCG_CNF!!!
RBID[%d]PdcpTxState %d
L2HTXPDCP_ReleaseAllFinal
[MULTICORE] L2HTXPDCP_ReleaseAllFinal: Init Highest_PriRB
send LTE_CPDCP_UL_RELEASE_ALL_CNF
Fail pal_Malloc and Fail Send LTE_CPDCP_UL_RELEASE_ALL_CNF!!!
L2HTXPDCP_ReleaseSCGFinal
[MULTICORE] L2HTXPDCP_ReleaseSCGFinal: Init SCG_Highest_PriRB
L2HTXPDCP_ReleaseAll, Stack[%d], SCGOnly[%d]
[PDCPTX][ENTITY:%d][DRBID:%d][CONFIG] PDCPTX RESUME, status prohibit(%d), rlcbo[%d] PDCP COUNT (%u..%u) NUM[%d]
[PDCPTX][ENTITY:%d][DRBID:%d][CONFIG] PDCPTX RESUME, status prohibit(%d), rlcbo[%d] PDCP COUNT (--..--) NUM[%d]
L2HTXPDCP_ResumeHisr !!!
L2HTXPDCP_ResumeHisr : pStatusRptReq malloc fail
[L2HTXPDCP_GenerateRohcFBPdu] pMsg Malloc Fail!!!
PDCP_CfgCnf is NULL!!!
L2TX PDCP Rxed LTE_PDCP_COUNT_VALUE_REQ Msg
[MULTICORE] LTE_PDCP_DATA_REQ: pMsg->req.data_req.trigger_rach[%d]
RB_ID[%d]L2TX PDCP Rxed LTE_PDCP_SECURITY_DATA_REQ Msg
L2TX PDCP Rxed LTE_PDCP_UL_BEARER_RESUME_REQ:LTE_RB_SRB1 Msg
L2TX PDCP Rxed LTE_PDCP_UL_BEARER_RESUME_REQ:LTE_RB_OTHER Msg
L2TX PDCP Rxed LTE_PDCP_UL_BEARER_RESUME_REQ:LTE_RB_OTHER Msg - Pending Resume HISR
L2TX PDCP Rxed LTE_PDCP_UL_BEARER_RESUME_REQ:LTE_RB_HO_ALL Msg
L2TX PDCP Rxed LTE_PDCP_UL_BEARER_RESUME_REQ:LTE_RB_HO_ALL Msg - Pending Resume HISR
L2TX PDCP Rxed LTE_PDCP_UL_BEARER_RESUME_REQ:LTE_RB_SCG Msg
Not Send L2HTX_L1LC_TX_REQ (WatiCmd %d,CurCmd:%d)
[L2HTX => L1LC] Send L2TX_L1LC_TX_REQ (Cmd:%d)
Cannot Allocate Message buffer
[ERROR][PDCPTX] L2HTXPDCP_RetriggerReceiveData : Invalid StackId[%d], RB_ID[%d]
[PDCPTX] L2HTXPDCP_RetriggerReceiveData : StackId[%d], RB_ID[%d]
L2HTXPDCP_ResetAllRb:ScgEntity[%d]
RB_ID[%d]PDCP TX At Release Discard Ctl PDU
[MULTICORE] L2HTXPDCP_ResetAllRb: Init Highest_PriRB/SCG_Highest_PriRB
Discard_PDCP ACKED PDU_Count[%d]
L2HTXPDCP_StatusPduHisr !!!
LMAC_TX_SEC_BLOCKFLAG_GET is TRUE !!!
LCID[%d] LTE_L2HTX_HAL_CIPHER_DONE_IND : bIsReqIgnoreCipIntr == TRUE
WARN >> Cipher-done<>CipherReq Race Around !! RBID(%d), CipherStackId(%d) PendCipherStack(%d)
L2TX PDCP Rxed LTE_ProcL2HTxHalPendSolIndEvent Event : IsRevertCipher[%d]
CiphAlg Changed to NULL
RB_ID[%d] L2ReceiveFeedback, But L2HTXPDCP_GenerateRohcFBPdu FAIL!!!
RB_ID[%d] Received LTE_L2HTX_L2HRX_RX_SN_UPDATE_IND
RB_ID[%d]L2TX PDCP Rxed LTE_PDCP_STATUS_PDU_IND Msg
RB_ID[%d] ERROR!! Fail to alloc msg
RB_ID[%d] PDCP_CTL_ROHC_FEEDBACK handled at the L2HRX
RB_ID[%d] Wrong LTE_PDCP_CTL_PDU_TYPE[%d]
Wrong LTE_L2HTX_L2LTX_RESET_IND resetcause[%d]
Conv LCID[%d] LTE_L2HTX_L2LTX_RLC_REEST_NTF : bIsReqRbReleaseAdd[%d]
LCID[%d] RLC TX Activate due to LTE_L2HTX_L2LTX_RLC_REEST_NTF
[PDCPTX][CONFIG] Rxed LTE_L2HTX_L2LTX_LCGTABLE_UPDATE_IND
[MULTICORE] Receive LTE_L2HTX_L2LTX_PDCP_TX_SUSPEND_REQ : StackId[%d]
L2HTXPDCP_ResetFullConfig(%d):Stack[%d]
RB_ID[%d]at full configuration reset(UL PDCP), discard control PDU
[MULTICORE] L2HTXPDCP_ResetFullConfig: Init Highest_PriRB/SCG_Highest_PriRB
L2HTXPDCP_DRBRelease
RB_ID[%d]PDCP TX At Release Discard Ctl PDU
Fail pal_Malloc and Fail Send LTE_CPDCP_UL_RESET_CNF!!!
L2HTX_FreeUbuffer : Discard_Q_Count[%d/%d]
Discard_Q_Count[%d
L2TX PDCP Rxed L2HTX_L1LC_TX_CNF : CipherPendF(%d)
[LTE_L2TX] LTE Send L2_LTEPDCP_LTE_UL_RLCBO_CNF Msg Fail!! (rst=%d)
