[L2C] LTE_ProcULRlcL2CMsg, pMsg is NULL
[L2C] LTE_ProcULRlcL2CMsg, Wrong req_id[0x%x]
[Multicore] LTE_ProcForwardTxMsg_N_Wait: pVoidMsg[0x%x] eMsgEntity[%d]
LTE_ProcForwardTxMsg_N_Wait : msg send fail
LTE_ProcForwardTxMsg_N_Wait : msg send fail
LTE_ProcForwardTxMsg_N_Wait : set event fail
LTE_ProcForwardTxMsg_N_Wait : pal_SmRetrieveEvents fail
[Multicore] LTE_ProcForwardTxMsg_N_Wait: pal_SmRetrieveEvents ltel2ltx_run_wait_event_group
RB_ID[%d]pal_Malloc Fail
[MULTICORE] RB_ID[%d] L2LTXRLC_SendMsgToPdcp. pStartDesc[0x%x], pEndDesc[0x%x], SduCnt[%d] bSlSdu[%d] TargetQueue[%d]
[Multicore] LTE_ProcULMacRrcMsg_Internal: pMsg[0x%x] req_id[%d]
[Multicore] LTE_ProcULMacRrcMsg_Internal: receive LTE_CMAC_RACH_START_REQ. RACause[%d]
[MULTICORE] LTE_ProcULMacRrcMsg_Internal: COMMON_BW_20
[MULTICORE] LTE_ProcULMacRrcMsg_Internal: (HALSC_GetDlBw(CC0, 0) != COMMON_BW_20)
[MULTICORE] Receive LTE_CMAC_RACH_STOP_REQ: End RACH Procedure
[MULTICORE] Send LTE_L2HTX_L2LTX_PDCP_TX_SUSPEND_REQ
[MULTICORE] Send LTE_L2HTX_L2LTX_PDCP_TX_SUSPEND_REQ
TX_CNF TYPE ERROR
MAC[%d]: Schduling skip by RF release
[MACTX][ENTITY:%d] Scheduling skip by mac_dl_reset
[MACTX]: PROC_UL_GRANT_FAIL2
[MACTX]: PROC_UL_GRANT_FAIL
MAC[%d]: Schduling skip by RF release
L2 METRICS ReportTimerExpired
return in L1TX_SumbitLT12
L1TX_SumbitLT12
L2 L1TX_SumbitLT12, [%d, %d][%d, %d]
LT12 PUSCH_Power[%d], Wb[%d], SB[%d]
Fail pal_Malloc and Fail Send LTE_L2LTX_L2LTX_POLL_TMR_EX_IND!!!
L1TX_L2CRxUpdateTimerExpired : appTimerID[%d],EPSID[%d], dwRxByte[%d], qwRxByteCount[%lld]
L1TX_L2CTxUpdateTimerExpired : appTimerID[%d],EPSID[%d], dwTxByte[%d], qwTxByteCount[%lld]
LTE_InitL1TX
LTE_SendL2LTXMsgToL12: msgId[%x]. pMsg[%x]
Fail LTE_SendL2LTXMsgToL12 [%x]
LTE_L2LTX2_EVENT_GROUP set event[%x] mbxid[%d]
[MULTICORE] set event fail
Fail LTE_SendL2LTXMsgToL1LC [%x], Stack[%d]
Fail LTE_SendL2LTXMsgToRRC [%x]
[L1TX => L1LC] Send L1TX_L1LC_TX_REQ (TYPE:%d)
Cannot Allocate L1TX_L1LC_TX_REQ
[L1TX => L1LC] Send L1TX_L1LC_TX_DONE_IND (TYPE:%d)
Cannot Allocate L1TX_L1LC_TX_DONE_IND
MAC_Release: Scell Tx Cmd[%d/%d]
valid grant cnt and grant_num are not the same (%d,%d)!!!
UL grant, but modem sleeping
[MACTX][ENTITY:%d] Scheduling Start[%x], GrantSize[%x/%x] MaxWdIdx/HisrRdIdx/RdIdx[%d/%d/%d]
L2LTXMAC_ULScheduling Fail(index: %d) Stack[%d], MacEntity[%d] !!!
L2LTXMAC_GenerateMACPDU Fail(index: %d) Stack[%d], MacEntity[%d] !!!
L1TX_LT12ReportTimerExpired
LT METRICS Timer[%d], DRX Cycyle[%d]
LT12ReportWaiting : modem down or CDRX
Restart LT12ReportTimerHdl next DRX cycle[%d]
L1TX_ForcedBSRTimerExpired
pal_Malloc Fail
[MULTICORE] L2LTX_SendDataMonTmrExpInd
L1TX_DataMonTmr_Expired ignored
[MULTICORE] L1TX_DataMonTmr_Expired. appTimerId[%d]
LTE_ProcForwardULPhyRrcMsg: pMsg[0x%x]
IPC_ACTION_ID_RLF_SIGNAL
LTE_ProcForwardULMacRrcMsg: pMsg[0x%x]
[MULTICORE] Receive LTE_L2LTX_DATA_MON_TMR_EXP_IND
[MULTICORE] LTE_L2LTX_L2LTX_START_RA_IND
[L1LC => L1TX] L1LC_L1TX_TX_CNF (TYPE:%d)
Rxed L1LC_L1TX_TX_RF_STATUS_IND
TA Timer Restart at the RF_STATUS_IND !!!
Trigger SRI for DSDS
RB_ID[%d]Fail pal_Malloc and Fail Send LTE_L2HRX_L2HRX_T1_TMR_EX_IND!!!
Resume Pending Ciphering/deciphering operation:TX PendF[%d]/BlockF[%d], RX BlockF[%d]
RF is not available, so ciphering/deciphering operation cannot resume
PHR triggered by activation of an SCell(sCellIndex:%d) with configured uplink
[Multicore] LTE_L2LTX_TA_TIMER_EXP_IND
[MACTX] bTxSuspend_Cause_RxReset=TRUE
RB_ID[%d] RLC_CTL_STATUS_PDU :: Not Active L1TX[%d] L2TX[%d]
RB_ID[%d] RLC_CTL_STATUS_PDU :: Free CtrlPdu[0x%x]
[Error] Received empty message
[MULTICORE] RB_ID[%d] Receive LTE_L2LTX_L2HTX_DATA_IND. Reason[%d] pStartPtr[%x] pEndPtr[%x] Count[%d] AddSize[%d]
[Error] Invalid Reason[%d]
[MULTICORE] RB_ID[%d] ERROR! pCtlPdu == NULL
[MULTICORE] RB_ID[%d] Receive LTE_L2LTX_L2HTX_PDCP_STATUS_FREE_RLCQ_IND. pPdu[0x%x] CtlPduSize[%d] StackId[%d]
[MULTICORE] Receive LTE_L2LTX_L2HTX_PDCP_TX_SUSPEND_CNF : StackId[%d] ReqType[%d]
[MULTICORE] RB_ID[%d] Receive LTE_L2LTX_L2HTX_RLC_TX_ACTIVE_IND. Prev RLC SubState[%d]
LTE_L2LTX_L2HTX_L2C_REPORT_REQ : StackId[%d], EPSID[%d]
MAC reset(UL)-cause(%d))
Wrong LTE_CMAC_UL_RESET_REQ cause:%d
MAC_Reset: Scell Tx Cmd[%d/%d]
[L2C] RawData :
L1TX_ReportL2CMetric : EPS[%d], RxByte[%lld]/TxByte[%lld], Dlduration[%d]/DlZeroduration[%d], ULduration[%d]/UlZeroduration[%d]
[MULTICORE] L2LTX_RlcStatusTrigger
[Multicore] L2LTXMAC_ProcL2LTX2Msg, pMsg is NULL!
[Multicore] L2LTXMAC_ProcL2LTX2Msg: pMsg[0x%x] msg_id[%d]
[Multicore] L2LTXMAC_ProcL2LTX2Msg, rcv msg_id[%d]
[Multicore] L2LTXMAC_Core0ProcMsg, Received > LTE_L2LTX2_L2LTX_SEND_SRICMD_REQ
[Multicore] L2LTXMAC_ProcL2LTX2Msg, invalid msg_id
IMS_L2LTX_RECOMMENDED_BIT_RATE_IND received: Type[%d]:Dir[%d]:Triggered[%d]
LCID[%d]/EPSID[%d],BitRate[%d]
[Multicore] LTE_ProcL2LTX2Msg, pMsg is NULL!
[Multicore] LTE_ProcL2LTX2Msg: pMsg[0x%x]
[MULTICORE] LTE_ProcL2LTX2Msg: Receive LTE_L2LTX2_L2LTX_SEND_SRICMD_REQ
[MULTICORE] LTE_ProcL2LTX2Msg: HALDSP_SetSRICmd!!
[MULTICORE] LTE_ProcL2LTX2Msg: Receive LTE_L2LTX2_L2LTX_SEND_SRICMD_REQ, BUT L2_GetSRTriggered==TRUE
[MULTICORE] LTE_ProcL2LTX2Msg: invalid msg id
