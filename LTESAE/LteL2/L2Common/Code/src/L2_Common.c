RB_ID[%d]Rx NACK So ADD Case : NACK %d F-SO %d F-EO %d S-SO %d S-EO %d
pTmpElem==NULL !!
[MULTICORE] RB_ID[%d] L2LRXRLC_EnqueNackElem_Modify: ret_val[%d]
RB_ID[%d] Insert Nack ::TxNACKElemPool FULL !! Re-estabilish Trigger VT_S = %d, VT_A = %d
[MULTICORE] RB_ID[%d] L2LRXRLC_EnqueNackElem_Modify: L2LTXRLC_Send_RLC_MAX_RETX_IND[%d]
[MULTICORE] RB_ID[%d] L2LRXRLC_EnqueNackElem_Modify: start_offset[%d] end_offset[%d] NackSN[%d]
RB_ID[%d]Fail pal_Malloc and Fail Send LTE_PDCP_DATA_CNF!!!
LTEL2Common_PutRemoveLink : Read/WriteIdx[%x/%x], NumFree[%x] > 100
LTE_MoveSduDescToSplitDesc : Split RB Desc Alloc Failed
RB_ID[%d] Error !!! Sidelink Support not enabled, isSLSdu(%d)
RB_ID[%d] DiscardNum and Discard Timer is 0 !!!
RB_ID[%d]Discard timeout DiscardSdu SN %d RxTm %u Cur Tm %u discard TmV %d(New %d),%d
TxSkip: TxTTI[%d]/AutoPause[%d]
[MULTICORE] RB_ID[%d] L2HTXPDCP_SendSRREQ
Fail pal_Malloc and Fail Send LTE_L2LTX_L2HTX_SRI_REQ!!!
Fail pal_Malloc and Fail Send LTE_L2LTX_L2HTX_SRI_REQ!!!
L2TXPDCP_GetLteThroughput10ms : dwGrantSizeDiff 10ms/50ms/100ms/200ms/500ms/1000ms[%d/%d/%d/%d/%d/%d]
L2TXPDCP_GetLteThroughput10ms : BO/TPUT(ms) 10ms/50ms/100ms/200ms/500ms/1000ms[%d/%d/%d/%d/%d/%d]
Warning : Wrong Direction : RBId %d, Direction : %d
[MULTICORE] RB_ID[%d] L2LTXRLC_UpdateHighPriority
[MULTICORE] RB_ID[%d] L2LTXRLC_UpdateHighPriority: pPriorityElem == NULL
[MULTICORE] RB_ID[%d] L2LTXRLC_UpdateHighPriority: SchedCfgInfo.LCG[%d] >= LCG_NUM[%d]
[MULTICORE] RB_ID[%d] L2LTXRLC_UpdateHighPriority: L1RlcTx.SubState[%d] L2PdcpTx.PdcpTxState[%d]
[MULTICORE] RB_ID[%d] L2LTXRLC_UpdateHighPriority: PriorityElem=gpSchedList. Priority[%d]
[MULTICORE] RB_ID[%d] L2LTXRLC_UpdateHighPriority: Highest_PriRB->RB_ID[%d] Highest_PriRB->priority[%d]
L2COMMON_NoUlGrantCheck : dw480msNoResponseCount[%d], Req/Done[%d/%d]
L2COMMON_NoUlGrantCheck : Trigger RRE
FORCED LMAC_DECIPHER_BLOCKFLAG_CLR - REQ-RAT(%d)
PKTPROC, STATUS(0x%x), PktprocInuse(%d)
LTEL2COMMON_ChangeCore_LteHighTP : bLteTpHigh1Low0[%d]
LTEL2COMMON_ChangeCore_NrAddRemove : malloc fail
LTEL2COMMON_ChangeCore_NrAddRemove : set event fail
[ERROR] LTEL2COMMON_PrintRlcStatus : SplitDescCnt[%d]
LTEL2COMMON_PrintRlcStatus : lcid[%d], VR_R[%d], VR_R_OFFSET[%d], ResegStatus[%d], VR_X[%d], VR_H[%d]
LTEL2CxD_ProcChangeCore : L2RX Core %d -> %d
LTEL2CxD_ProcChangeCore : set event fail - pEventGroup_WaitChangeAffinity_LTEL2HRx
LTEL2CxD_ProcChangeCore : set event fail - pEventGroup_WaitChangeAffinity_LTEL2LRx
LTEL2C0D_ChangeCoreReq : set event fail
LTEL2C0D_CheckPendingReq : malloc fail
LTEL2C0D_CheckPendingReq : set event fail
LTE_L2C0D_CHANGE_CORE_PEND_REQ : eState == LTEL2_COMMON_CORE_CHANGE_STATE_RUNNING
LTE_L2C0D_CHANGE_CORE_PEND_REQ : pend req list empty
pal_TaskEntry_LTEL2C1D : Ignore Request
pal_TaskEntry_LTEL2C1D : malloc fail
LTEL2COMMON_ChangeCore_NrAddRemove : set event fail
[L2 DATA] SetDataActivityStatus : IratDataActChange, bIratDataActiveFlag : %d
LTEL2COMMON_PdcpSnFilter_Init : Conv LCID[%d]
LTEL2COMMON_PdcpSnFilter_PutSN : Conv LCID[%d], UpadteCnt[%d], FilterState[%08x], n-3[%d], n-2[%d], n-1[%d], n-0[%d]
LTEL2Common_SendMessage Fail msgid[%x]!!!
LTEL2COMMON_IsPdcpInternetPdn : PdcpTxState == NULL
LTEL2COMMON_IsPdcpInternetPdn : Invalid Stackid %d
LTEL2COMMON_IsPdcpInternetPdn : uEpsId == 0
LTEL2COMMON_IsPdcpInternetPdn : uConvLCID[%d] uEPSID[%d] bResult[%d], dwLoc[%d]
LTEL2COMMON_IsNrPdcpInternetPdn : uStackId[%d] uConvLCID[%d] uEPSID[%d] Service_Type[%d] bResult[%d], dwLoc[%d]
LTEL2COMMON_UnRecoverableErrorNtf : uStackId[%d], eRecoveryType[%d]
LTEL2COMMON_UnRecoverableErrorNtf : uStackId[%d], Msg Block
LTEL2COMMON_UnRecoverableErrorNtf : uStackId[%d]
LTEL2COMMON_IncErrorCount : [%d/%d/%d][%d]
Race Around, Warn !!! CipherPendingFlag(%d/%d)
[PDCPTX][TIMER][CONTROL] dwStackActiveBitMask[%d]
[PDCPTX][TIMER][CONTROL] TPUT MEAS, Start
[PDCPTX][TIMER][CONTROL] TPUT MEAS, Stop
[MACTX][STACKID:%d] ExpectedBytes[%d] RLCBO[%d], ReqSize[%d]
[STAT][ENTITY:_][DRBID:_] CipReqQ/TxDiscardDataQ Count: %d/%d
[STAT][ENTITY:%d][DRBID:_] L2PdcpTx/PdcpTxControlQ/PdcpTxPendQ/RlcTxQ Count: %d/%d/%d/%d
[STAT][ENTITY:%d][DRBID:_] LtePdcpRevertMgr CipheringQ/RevertQ/RevertDoneQ/PendingQ/CipReqQtoRevertQ Count: %d/%d/%d/%d/%d
[STAT][ENTITY:_][DRBID:%d] ST[%d] RevertPdcpTxQ/stScgRevertPdcpTxQ Count: %d/%d
pLastTmpElem==NULL !!
[MULTICORE] RB_ID[%d] L2LRXRLC_CheckMergedElem: TmpSN[%d] TmpSO[%d] TmpEO[%d] SOffset[%d] EOffset[%d]
RB_ID[%d]Rx NACK Merge Case : NACK %d F-SO %d F-EO %d S-SO %d S-EO %d
