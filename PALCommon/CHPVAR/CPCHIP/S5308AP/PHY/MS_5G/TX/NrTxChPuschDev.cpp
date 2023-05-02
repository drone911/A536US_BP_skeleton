[NrTxChPuschDev][setTxPath] m_LmacCmdIdx:%d
(F)[ConfigPusch] symLength is %d! [startSym %d]
[NrTxChPuschDev] Not Update!! [swHarqBufStatus 0x%x][hid %d]
[NrTxChPuschDev] L2 failed to prepare data !! [swHarqBufStatus 0x%x][hid %d]
[NrTxChPuschDev][UpdateTtiBufSet] m_LmacTtiBufSetBitmap: 0x%x, cur : 0x%x
[NrTxChPuschDev] update HARQ buffer INFO, SWHarqBufAddress[%d]:%x, [%d]:%x, [%d]:%x, CcIdx: %d
[NrTxChPuschDev] UpdateHarqUci - m_pStoredPuschCfg is NULL
[NrTxChPuschDev] UpdateHarqUci - chType is Not PUSCH [chType %d]
[NrTxChPuschDev][Tx_NR] m_LmacCmdIdx = %d, m_ModIdx[0] = %d, m_EncIdx = %d, NR0_ENC_SLOT_IDX: 0x%x, TTI_4GNR_CMD_BUFINFO: 0x%x, NR_UL_ENABLE: 0x%x, NR_ENDIAN: 0x%x, NR_PUSCH_ENC_STATUS: 0x%x, NR_PUSCH_LDPCENC_STATUS: 0x%x, NR_PUSCH_LMACIF_STATUS: 0x%x
[NrTxChPuschDev][TXSP] NR_UL0_CW0_BASICINFO: 0x%x, NR_UL0_CW1_BASICINFO: 0x%x, NR_UL0_CW0_SCRAM_INIT: 0x%x, NR_UL0_CW0_ENC_INFO_SETDN: 0x%x NR_UL0_BW_CONFIG: 0x%x, TX_LTE_TRS_ENC_SRC_ADDR: 0x%x, TX_LTE_TRS_ENC_LENGTH: 0x%x, TX_LTE_TRS_ENC_TTIBUF_OFFSET: 0x%x, TX_LTE_TRS_ENC_TTIBUF_SET: 0x%x, TX_LTE_TRS_ENC_DMA_CTRL: 0x%x
[NrTxChPuschDev][TXSP] NR_UL0_CW0_CODEBK0: 0x%x, NR_UL0_CW0_LDPC_BASIC: 0x%x, NR_UL0_CW0_LDPC_SYS_LEN: 0x%x, NR_UL0_CW0_LDPC_RM0: 0x%x, NR_UL0_CW0_LDPC_RM1: 0x%x, NR_UL0_CW0_LDPC_SHORTEN0: 0x%x, NR_UL0_CW0_LDPC_LBRM_MODE: 0x%x, NR_UL0_CW0_LDPC_RM_POS: 0x%x
[NrTxChPuschDev][TXSP] NR_UL0_CW0_ACK_RE: 0x%x, NR_UL0_CW0_CSI1_RE: 0x%x, NR_UL0_CW0_CSI2_RE: 0x%x, NR_UL0_CW0_DATA_RE: 0x%x, NR_UL0_CW0_UCI_DMRS: 0x%x, NR_UL0_CW0_UCI_PTRS: 0x%x, NR_UL0_CW0_UCI_CONFIG: 0x%x, NR_UL0_CW0_RESERVED_RE: 0x%x, NR_UL0_CW0_UCI_SIZE0: 0x%x, NR_UL0_CW0_UCI_SIZE1: 0x%x
[NrTxChPuschDev][LMAC] NR_SHAREDMEM_SEL: 0x%x, NR_UL0_MIMO_MEMMUX: 0x%x, NR_ENCODER_SW_RESET: 0x%x, TX_SYMBPROC_LMACIF_3G_MODE_ENABLE0: 0x%x, NR_ULx_SW_RESET: 0x%x, swHarqBufStatus: 0x%x
[NrTxChPuschDev][LMAC] TTI_TX_ULx_EVEN/ODD_ADDR[0~9]: 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x
Invalid DMRS symbol number: %d
ERROR!!! Need to check PUSCH Group hop size, start bit index: %d
ERROR!!! Need to check PUSCH Seq hop size, start bit index: %d
[NrTxChPuschDev] DmrsDftGenHopSeq : Group Hopping PR seq gen %d, %d
[NrTxChPuschDev] DmrsDftGenHopSeq : Sequence Hopping PR seq gen %d, %d
[NrTxChPuschDev] PUSCH->mod:%d, DMRS Info cInit:0x%x, symAlloc:0x%x, freqStartRe[1/1]:%d, timeOcc[4/4]:0x%08x, freqOccIdx[1/1]:%d, cpDataBitMap:0x%x, numDataRe:%d, Pwr:%d HopGrpEn/SeqEn/fgh/v(1/1/1/1):%d
[NrTxChPuschDev] PUSCH->mod:%d, DMRS/PTRS Info cInit(D/P):0x%x/0x%x, tdBitmap(D/P):0x%08x, tdOccBitmap/fdOccIdx:0x%08x, cpFdDataBitMap(D/P):0x%08x, numDataRe/numPtrsRe(5/5):%010d, DreOffset/PreOffset/numChunk/chunkSize/firstSymIdx/fdOccIdx(D1/P2/P1/P1/P2/P1):%d, dftPtrsSeq(L/H):0x%x/0x%x
[NrTxChPuschDev][PUSCH_MOD][Symbol %d] NR_UL0_PUSCH_CONFIG_SYM: 0x%x, NR_UL0_DMRS_CP_CONFIG_SYM: 0x%x, NR_UL0_DMRS_CP_INIT_X1_SYM: 0x%x, NR_UL0_DMRS_CP_INIT_X2_SYM: 0x%x
[NrTxChPuschDev] Stop Encoder for invalid ldpc paramter Qm:%d, N_L:%d, C_prime:%d
[NrTxChPuschDev][UciPusch] ack_in_size:0x%x, csi_in_size:0x%x, uci_config:0x%x, uci_dmrs:0x%x, uci_ptrs:0x%x, data_re:0x%x, ack_re:0x%x, csi1_re:0x%x, csi2_re:0x%x, reserved_re:0x%x
[NrTxChPuschDev][UciPusch] AckInfo : 0x%x, Csi1Info : 0x%x, Csi2Info : 0x%x, evenOdd : %d
[NrTxChPuschDev][UCI] Write Pusch Uci Info, inBitSize:%d, startAddr:%d, numWord:%d, uciInfo[0]:0x%x
