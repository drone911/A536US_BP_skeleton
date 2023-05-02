[L2 REVERT] DO NOT REVERT : RB_ID[%d] RevertDest[%d] !!!!
[PDCPTX][ENTITY:%d][DRBID:%d][MCG REVERT][B] RLC_Q(Head..VT_S-1) PDCP COUNT (%u..%u) NUM[%d]
[PDCPTX][ENTITY:%d][DRBID:%d][MCG REVERT][B] RLC_Q(VT_S..END) PDCP COUNT (%u..%u) NUM[%d]
[PDCPTX][ENTITY:%d][DRBID:%d][MCG REVERT][B] ProcForRlc -> CipReqQtoRevertQ - PDCP COUNT (%u..%u) NUM[%d]
[PDCPTX][ENTITY:%d][DRBID:%d][MCG REVERT][A] CIP_Q - PDCP COUNT (%u..%u) NUM[%d]
[PDCPTX][ENTITY:%d][DRBID:%d][MCG REVERT][B] PDCP_Q(VT_S..END) PDCP COUNT (%u..%u) NUM[%d]
[PDCPTX][ENTITY:%d][DRBID:%d][MCG REVERT][B] NR Interface Q
[PDCPTX][MCG REVERT][B] NR Interface Q - DRBID[%d] PDCP COUNT (%u)
[L2 REVERT] Step 1-3. L2HTXPDCP_PutNrIfRevertQ : stTempDstDrbidQ/stTempDstEtcQ/pPdcpNrIfQ[%d/%d/%d]
[PDCPTX][ENTITY:%d][DRBID:%d][MCG REVERT][B] NR Interface Q - PDCP COUNT (%u..%u) NUM[%d]
[PDCPTX][ENTITY:%d][DRBID:%d][MCG REVERT] skip config for previous revert data
[PDCPTX][ENTITY:%d][DRBID:%d][MCG REVERT] SAVE CONFIG, CipherAlgo[%d] CipherKey0_3[%08x] TX_SNFormat[%d] rohc_used[%d] bPrev_SplitRb[%d]
[PDCPTX][ENTITY:%d][DRBID:%d][MCG REVERT] SAVE CONFIG, TX_NRPdcpEN[%d] TX_NRPpdcp_in_LTE[%d]
[L2 REVERT] Step 1-3. PdcpTxQ -> RevertPendingQ : RB_ID[%d] pdcp_tx_count[%d ~ %d] pdcp_num[%d]
[L2 REVERT] Step 1-4. PdcpTxPendQ -> RevertPendingQ : RB_ID[%d] pdcp_tx_count[__ ~ __] pdcp_num[%d]
[PDCPTX][ENTITY:%d][DRBID:%d][MCG REVERT][A] Pending MCG DATA - PDCP COUNT (%u..%u) NUM[%d]
[PDCPTX][ENTITY:%d][DRBID:%d][MCG REVERT][A] Pending SCG DATA - PDCP COUNT (%u..%u) NUM[%d]
[PDCPTX][ENTITY:%d][DRBID:%d][MCG REVERT][A] SCG->MCG PDCPTXQ - PDCP COUNT (%u..%u) NUM[%d]
[PDCPTX][ENTITY:%d][DRBID:%d][MCG REVERT] Delete RevertDoneQ, PDCP COUNT (%u..%u), LEN(%d), (Prev ENTITY:%d)
[PDCPTX][ENTITY:%d][DRBID:%d][MCG REVERT] L2HTXPDCP_ProcRevertDataComplete_ActivateRb
[PDCPTX][ENTITY:%d][DRBID:%d][MCG REVERT] RESET COMPLETE, RB Activated, (Prev ENTITY:%d) - 1
[PDCPTX][ENTITY:%d][DRBID:%d][MCG REVERT] ResumeCond [%d/%d/%d] (Prev ENTITY:%d) - 2
[PDCPTX][ENTITY:%d][DRBID:%d][MCG REVERT] RESET COMPLETE, RB Activated (Prev ENTITY:%d) - 3
[PDCPTX][ENTITY:%d][DRBID:%d][MCG REVERT] RESET COMPLETE, RB Active Pending (Prev ENTITY:%d, PdcpTxState[%d]) - 4
[L2 REVERT] IsExistRevertData : RB_ID[%d] RevertQ.count[%d] PendingQ.count[%d]
[PDCPTX][ENTITY:%d][DRBID:%d][MCG REVERT][A] Ignore Ciphering bPrev_SplitRb[%d], PDCP COUNT (%u..%u) NUM[%d], (NEW ENTITY:%d)
[ERROR][PDCPTX][ENTITY:%d][DRBID:%d][MCG REVERT][A] Ignore Ciphering bPrev_SplitRb[%d], num_pdu==0 , (NEW ENTITY:%d)
[L2 REVERT] RB_ID[%d] : Cipher blocked (%d):TX PendF[%d]/BlockF[%d], RX BlockF[%d]
[L2 REVERT] BUSY CIPHER PENDING !!! : RB_ID[%d]
[L2 REVERT] Pending Ciphering : RB_ID[%d] pdu_num[%d] !!!
[PDCPTX][ENTITY:%d][DRBID:%d][MCG REVERT][A] Start Ciphering bPrev_SplitRb[%d], PDCP COUNT (%u..%u) NUM[%d], (NEW ENTITY:%d)
[L2 REVERT] TestDumpFunction_RB_COUNT : RB_ID[%d], pdcp_tx_count[%d]
[L2 REVERT] REVERT END
[PDCPTX][CONFIG][MCG REVERT], StackId[%d] Release All
[PDCPTX][ENTITY:%d][DRBID:%d][MCG REVERT] REVERT Security INFO, ALGO[%d], KEY[%08x %08x %08x %08x]
[PDCPTX][ENTITY:%d][DRBID:%d][MCG REVERT] REQUEST, RevertDest[%d] dwCOUNT_TX_NEXT[%d] eTxBearerInfoInd[%d] bRevertCipher[%d], bPrev_SplitRb[%d]
[L2 REVERT][ERROR] L2HTXPDCP_ReceiveRevertDataNR : ( uDRBID[%d] != TxRbid[%d] )
[L2 REVERT] L2HTXPDCP_ReceiveRevertDataNR pData== NULL !!! : StackId[%d] RB_ID[%d] pdcp_tx_count[%d]
[L2 REVERT] UBuffer full
[PDCPTX][ENTITY:%d][DRBID:%d][SCG REVERT] PDCP COUNT (%u), LEN(%d), dwStartTime(%d)
[PDCPTX][ENTITY:%d][DRBID:%d][SCG REVERT] Finish, PDCP COUNT (%u..%u) NUM[%d]
_L2COMMON_ReorderingQ_UBufferQueueIn : Free Duplicated PDCP COUNT[%d] BasePtr[0x%X]
L2COMMON_NsaTxDataRevert_PutList : dwEpsId[%d], S/E/Count[%d~%d,%d], bReorder[%d]
L2COMMON_NsaTxDataRevert_SendToPktHnd : dwEpsId[%d], count[%d]
L2COMMON_NsaTxDataRevert_SendToPktHnd : dwRet[%d], PDCP COUNT[%d], en_q_accum_cnt[%d]
L2COMMON_NsaTxDataRevert_Flush : dwEpsId[%d], count[%d]
L2COMMON_NsaTxDataRevert_Flush : TestFree Log - PDCP COUNT[%d]
L2COMMON_NsaTxDataRevert_Init : dwEpsId[%d]
[L2 REVERT] Delete RevertQ : RB_ID[%d] bAllDelFlag[%d] pdcp_tx_count[%d]
[L2 REVERT] Delete CipReqQtoRevertQ : RB_ID[%d] bAllDelFlag[%d] pdcp_tx_count[%d]
[L2 REVERT] Delete RevertPendingQ : RB_ID[%d] bAllDelFlag[%d] pdcp_tx_count[%d]
[PDCPTX][ENTITY:%d][DRBID:%d][MCG REVERT][A] Ciphering - PDCP COUNT (%u..%u) NUM[%d]
[PDCPTX][ENTITY:%d][DRBID:%d][MCG REVERT][A] ProcRevertROHD - PDCP COUNT (%u..%u) NUM[%d]
[PDCPTX][ENTITY:%d][DRBID:%d][MCG REVERT][A] CipherDone - PDCP COUNT (%u..%u) NUM[%d]
[PDCPTX][ENTITY:%d][DRBID:%d][MCG REVERT] RevertDoneQ->RevertDest[%d], PDCP COUNT[%u..%u] NUM[%d] (NEW ENTITY:%d)
[L2 REVERT] Send TxBearerInfoInd : RB_ID[%d] RevertDest[%d] dwCOUNT_TX_NEXT[%d] eTxBearerInfoInd[%d] bIsValid_TX_NEXT[%d]
[PDCPTX][ENTITY:%d][DRBID:_][MCG REVERT][A] REVERT RESULT - PDCP COUNT[%d,%d,%d,%d,%d,%d]
[L2 REVERT] Step 4-2. RevertPendingQ -> RevertDest[%d] : RB_ID[%d] pdcp_tx_count[%d ~ %d] pdcp_num[%d]
[L2 REVERT] InitRevertMgr : RB_ID[%d], DRB_ID[%d]
[L2 REVERT] Delete RevertCipheringQ : RB_ID[%d] bAllDelFlag[%d] pdcp_tx_count[%d]
[L2 REVERT] InitRevertMgrDrb : DRB_ID[%d], bPrev_SplitRb[%d], bReusePdcpSn[%d], KEYSPLIT[%x/%x/%x/%x]
[L2 REVERT] InitRevertMgrDrb : DRB_ID[%d], bPrev_SplitRb[%d], bReusePdcpSn[%d], KEYMCG[%x/%x/%x/%x]
