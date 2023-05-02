L2LTXRLC_Init
Dummy RLC print [%x][%x][%x]!
RB_ID[%d] initialization before Chunk mode [%d]
RB_ID[%d] RlcTxChunk alloc fail
RB_ID[%d] RlcTxChunk alloc [%d]
L2LTXRLC_SetupRlcEntity : LC_ID %d/%d, RB_ID %d, Type %d
RB_ID[%d]L1TXRLC Config AM timerPoll_retransmit %d,poll_byte %d,poll_PDU %d,max_retransmit_no %d, ExtLI[%d] ExtSN[%d]
RB_ID[%d]L1TXRLC Config UM sn_field_length %d
RB_ID[%d]Forced RLC AM Config to t_poll(45ms), max_retx(8)
LT12Report timer start [%d]
RB_ID[%d] RLC TX suspend due to nr_pdcp_en==2
L2LTXRLC_ReleaseRlcEntity FAIL!! Invalid RB_ID[%d]
RB_ID[%d]L2LTXRLC_ReleaseRlcEntity
RB_ID[%d] RlcTxChunk free [%d]
L2LTXRLC_ReleaseAll,Stack[%d], SCGEntity[%d]
RB_ID[%d] SNMAP free[%d]
LT12Report timer Stop
RB_ID[%d] SNMAP free[%d]
RB_ID[%d] SNMAP free[%d]
L2LTXRLC_SetupSplitRlcEntity LC_ID %d/%d, RB_ID %d, Type %d
L2LTXRLC_SetupSplitRlcEntity FAIL!! Invalid RB_ID[%d] LC_ID[%d]
RB_ID[%d]L2LTXRLC_SetupSplitRlcEntity Wrong RLC Mode[%d/%d]!!
RB_ID[%d] TX SNMAP chunk fail
RB_ID[%d] TX SNMAP alloc [%d]
RB_ID[%d] TX SNMAP chunk fail
RB_ID[%d] TX SNMAP alloc [%d]
RB_ID[%d]L1TXRLC Config AM timerPoll_retransmit %d,poll_byte %d,poll_PDU %d,max_retransmit_no %d,ExtLI[%d] ExtSN[%d]
SCG_RB_ID[%d]L1TXRLC Config AM timerPoll_retransmit %d,poll_byte %d,poll_PDU %d,max_retransmit_no %d,ExtLI[%d] ExtSN[%d]
L2LTXRLC_ModifyRlcEntity LC_ID %d/%d, RB_ID %d, Type %d, rlc_reest_v1510 %d bReqReleaseAndAdd %d
L2LTXRLC_ModifyRlcEntity FAIL!! Invalid RB_ID[%d] LC_ID[%d]
L2LTXRLC_ModifyRlcEntity : LCID/RBID[%d/%d], NRSTACK_NRPDCP_TO_LTESTACK_NRPDCP
L2LTXRLC_ModifyRlcEntity : LTE_L2HTX_L2LTX_RLC_REEST_NTF malloc fail
L2LTXRLC_ModifyDCSpecificDRB LC_ID %d/%d, RB_ID %d, Type %d
L2LTXRLC_ModifyDCSpecificDRB FAIL!! Invalid RB_ID[%d] LC_ID[%d]
[RLCTX][ENTITY:%d][DRBID:%d] Free Ack recieved SDU#[%d] PDCP COUNT (%u..%u) Remain Q_Count[%d], elapsed[%d,%d]us
RB_ID[%d] RX RLC Status ACK[%d] VT_A[%d] VT_AH[%d] VT_S[%d]
RB_ID[%d] rlc_pdu_bo[%d] < OrgReTxDataSize[%d]
RB_ID[%d] RX RLC Status NACK[%d] SO[%d] EO[%d]
RB_ID[%d] endoffset[%d] < startoffset[%d]
RB_ID[%d] : L2LTXRLC_ParseStatusPDU fail by pSnMap NULL
RB_ID[%d] RX RLC Wrong Status Offest NACK[%d] SO[%d] EO[%d] PduLength[%d]
RB_ID[%d] RX RLC wrong order NACK(%d>=%d) offset(End>=start)
RB_ID[%d]RX RLC Status NACK[%d]
RB_ID[%d] RX RLC wrong order NACK(%d>=%d)
RB_ID[%d] PDULength[%d] < POffset_BYTE[%d]
RB_ID[%d] Ignore Rx Status
RB_ID[%d]Poll Timer Stop Poll_SN %d ACK %d VT_A %d VT_S %d
RB_ID[%d] NackList->pFirstElem==NULL!!!
[MULTICORE] RB_ID[%d]RLC Rx Status==>trigger regular BSR
RB_ID[%d]RLC Re-estabilish2 Trigger VT_S %d VT_A %d
[MULTICORE] L2LTXRLC_QueueParmeterInit
[MULTICORE] RB_ID[%d] L2LTXRLC_ProcPdcpResume
[MULTICORE] RB_ID[%d] Resume PDCP triggers regular BSR
[MULTICORE] RB_ID[%d] L2LTXRLC_ProcPdcpResume: pRlcTxQ head[0x%x], tail[0x%x], NewDataSize[%d], count[%d], RlcCurrentPtr[0x%x]
[MULTICORE] RB_ID[%d] L2LTXRLC_ProcDataRecovery
[MULTICORE] RB_ID[%d]Data Recovery PDCP triggers regular BSR
[MULTICORE] SCG_RB_ID[%d] L2LTXRLC_ProcDataRecovery: RlcTxScgQ head[0x%x], tail[0x%x], NewDataSize[%d], count[%d], RlcCurrentPtr[0x%x]
[MULTICORE] RB_ID[%d] L2LTXRLC_ProcDataRecovery: RlcTxMcgQ head[0x%x], tail[0x%x], NewDataSize[%d], count[%d], RlcCurrentPtr[0x%x]
[MULTICORE] RB_ID[%d] L2LTXRLC_ProcDataRecovery: RlcTxMcgQ BO[%d]
[MULTICORE] RB_ID[%d] L2LTXRLC_ReceiveData: pStartPtr[0x%x] pEndPtr[0x%x] count[%d]
[MULTICORE] RB_ID[%d] L2LTXRLC_ReceiveData: AddSize[%d] pRlcTxQ->NewDataSize[%d] ptrRlcBo->rlc_pdu_bo[%d] pRlcTxQ->RetxDataSize[%d]
[MULTICORE] RB_ID[%d] L2LTXRLC_ProcPdcpStatusPDU. PdcpTxState[%d] mismatch
[MULTICORE] RB_ID[%d] RlcTxQ is NULL. head[0x%x] RlcCurrentUsbDesc[0x%x]
[MULTICORE] RB_ID[%d] : Snmap==NULL !!!
[MULTICORE] RB_ID[%d] L2LTXRLC_ProcPdcpStatusPDU. UsbDesc[0x%x], CurSN[%d] CtlPduSize[%d]
[MULTICORE] RB_ID[%d] : UsbDesc==NULL !!!
[MULTICORE] RB_ID[%d] : UsbDesc==NULL !!!
[MULTICORE] RB_ID[%d], CurSN[%d], PdcpSN[%d] : UsbDesc==NULL !!!
[MULTICORE] RB_ID[%d]PDCP RX VT_S %d FMS %d
[MULTICORE] RB_ID[%d] PDCP ACK Discard SN[%d] < ACK SN[%d]
[MULTICORE] RB_ID[%d] PDCP RX NACK %d
[MULTICORE] RB_ID[%d] PDCP Cnf bit Discard SN %d
[MULTICORE] RB_ID[%d] RlcQ head[0x%x] tail[0x%x] RlcCurrentPtr[0x%x] count[%d]
L2LTXRLC_SetupRlcEntity FAIL!! Invalid RB_ID[%d] LC_ID[%d]
RB_ID[%d]L2LTXRLC_SetupRlcEntity FAIL!! SubState[%d]==RLC_NOT_ACTIVE
RB_ID[%d]L2LTXRLC_SetupRlcEntity FAIL!! RlcMode[%d]!=parameters->ulConfig.ulInfo.mode[%d]
RB_ID[%d]L2LTXRLC_SetupRlcEntity FAIL!! Wrong UM sn_field_length[%d][%d]
RB_ID[%d]L2LTXRLC_SetupRlcEntity FAIL!! pL1RlcTx->SubState[%d]!=RLC_NOT_ACTIVE
RB_ID[%d]Poll Timer Expired !! Poll SN %d ,VT_S %d, VT_A %d
RB_ID[%d]Fail pal_Malloc and Fail Send LTE_L2LTX_L2LTX_POLL_TMR_EX_IND!!!
L2LTXRLC_ResetPduTb
RB_ID[%d]L2LTXRLC_Reset
RB_ID[%d]L2LTXRLC_DiscardAckedPdu
pRlcTxQ->head is NULL
ppDiscardSduPtr malloc fail
pNackListElem->NACK_PDU_SN[%d] out of range!!!
RB_ID[%d] : L2LTXRLC_DiscardAckedPdu fail by pPDUTable NULL
pNackList is empty
RB_ID[%d] : L2LTXRLC_DiscardAckedPdu fail by pPDUTable NULL
RB_ID[%d]Selective ACK Discard VT_S %d Discard SN %d
RB_ID[%d] : L2LTXRLC_ProcStatusPDU_Ext fail by pSnmap NULL
RB_ID[%d], AckSN[%d] pLastSegDesc==NULL !!!
pEndSduDesc == NULL in L1TXRLC_FreeBuffer(), RB_ID[%d]
pSduDesc == NULL in L1TXRLC_FreeBuffer(), RB_ID[%d]
pSduDesc->q_next == NULL in L1TXRLC_FreeBuffer(), RB_ID[%d]
RB_ID[%d]MUI Confirm PdcpSn %d, MUI %d
pPduTB->VT_A!=pPduTB->VT_S !!!
RRC_SERVICE pSduDesc == NULL in L1TXRLC_FreeBuffer()
RB_ID[%d]MUI Confirm %d, PdcpSn %d, MUI %d
pSduDesc == NULL in L1TXRLC_FreeBuffer(), RB_ID[%d]
pSduDesc->q_next == NULL in L1TXRLC_FreeBuffer(), RB_ID[%d]
[L2 REVERT] Send LTE_L2HTX_L2LTX_REVERT_DATA_IND : RB_ID[%d] RLC(Head..VT_S-1)=[0x%x]..[0x%x]/count[%d], RLC(VT_S..End)=[0x%x]..[0x%x]/count[%d]
RB_ID[%d] RX RLC Wrong Status ACK[%d]<VT_A[%d] VT_S[%d]
RB_ID[%d] RX RLC Wrong Status ACK[%d] LAST NACK[%d] VT_A[%d] VT_AH[%d] VT_S[%d]
RB_ID[%d] NackList Empty : VT_A[%d], VT_AH[%d]
RB_ID[%d] RX RLC Wrong Status ACK[%d]>VT_S[%d] VT_A[%d]
RB_ID[%d] RX RLC Wrong Status ACK[%d]>VT_S[%d] VT_A[%d], ( dwDiff > 20 )
RB_ID[%d] STATUSRPT[%d] : %x %x %x %x %x
RB_ID[%d] RX RLC Wrong Status ACK/NACK[%d/%d] VT_A[%d] VT_S[%d] - W/A
RB_ID[%d] RX RLC Wrong Status ACK/NACK[%d/%d] VT_A[%d] VT_S[%d]
