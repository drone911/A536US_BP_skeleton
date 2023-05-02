[L2HAL_GATEWAY] AllocExtCmdMemoryManually() Start! extCmdId(%d)
[L2HAL_GATEWAY] AllocExtCmdReq (LMAC_RX_TRS_DONE_NR_CMD)!
[L2HAL_GATEWAY] AllocExtCmdReq (LMAC_RX_PARSER_DONE_NR_CMD)!
[ERROR][L2HAL_GATEWAY] unknown extCmdId(%d)
[L2HAL_GATEWAY] RunExtCmd() Start! extCmdId(%d)
[L2HAL_GATEWAY] SendExtCmd (LMAC_RX_TRS_DONE_NR_CMD)!
[L2HAL_GATEWAY] SendExtCmd (LMAC_RX_PARSER_DONE_NR_CMD)!
[ERROR][L2HAL_GATEWAY] unknown extCmdId(%d)
[L2HAL_GATEWAY] FreeExtCmdMemoryManually() Start! extCmdId(%d)
[L2HAL_GATEWAY] FreeExtCmdReq (LMAC_RX_TRS_DONE_NR_CMD)!
[L2HAL_GATEWAY] FreeExtCmdReq (LMAC_RX_PARSER_DONE_NR_CMD)!
[ERROR][L2HAL_GATEWAY] unknown extCmdId(%d)
[ERROR] LmacParsDoneProc : DSDS Pause[%d]
[ERROR] Too many MAC PDU at once!
[L2HAL_GATEWAY][ERROR] Invalid CgType[%d]
[L2HAL_GATEWAY][ERROR] Invalid LCID RBID mapping! LCID[%d]
[L2HAL_GATEWAY][ERROR] L2NR_SendRxRlcSdu fail!
RD reset by LmacInit!
[L2HAL_GATEWAY] PktProcSWIntegrityVerification
[L2HAL_GATEWAY][PktProc] Data=0x%08x DataLen=%d
[L2HAL_GATEWAY][PktProc] Integrity DUMP
[L2HAL_GATEWAY][PktProc] Integrity DUMP
[L2HAL_GATEWAY][PktProc][ERROR] Integrity verification fail !!! (Length=%d BearerId=%d Count=%d Algo=%d Key=0x%02x... dir=%d headLen=%d)
[L2HAL_GATEWAY][PktProc] Rcv
[L2HAL_GATEWAY][PktProc] Calc
[L2HAL_GATEWAY] PktProcSWIntegrityVerification done (Result=%d)
[L2HAL_GATEWAY][PktProc] Integrity DUMP
[L2HAL_GATEWAY][PktProc] Integrity filterResult=0x%x information=0x%x rtStatus=0x%x
[L2HAL_GATEWAY][PktProc][ERROR] Integrity verification fail !!! (itg=%d)
[L2HAL_GATEWAY][PktProc] Integrity verification pass !!!
[L2HAL_GATEWAY][PktProc][ERROR] Integrity verification fail !!! (itg=%d)
[L2HAL_GATEWAY][PktProc] Integrity DUMP
[L2HAL_GATEWAY][PktProc] Integrity filterResult=0x%x information=0x%x rtStatus=0x%x
[L2HAL_GATEWAY][ERROR] PktProcHWIntegrityVerification Invalid DstType=%d
[L2HAL_GATEWAY] PktProcSendDataToRrc (DomainType=%d RbId=%d, Num=%d)
[ERROR] AllocMsg fail!
[ERROR] AllocMsgBodyElem fail!
[ERROR] SendMsg fail!
[L2HAL_GATEWAY] L2_L2HPDCPRXDELIV_DATA_IND (RbId=%d, Length=%d)
[L2HAL_GATEWAY][WARNING] PdcpHostIfList empty !
[L2HAL_GATEWAY][WARNING] PdcpHostIfList empty after DS_MUX !!
[L2HAL_GATEWAY][ERROR] hostifSendListData Fail (pHostData=0x%08x pHostEndData=0x%08x)
[L2HAL_GATEWAY][ERROR] hostifSendListData Fail (RbId=%d cause=%d)
[RbId:0x%02x][WARNING] data length=0 (filterResult=0x%08x)
[L2HAL_GATEWAY] PDCPRX deciphered pData=0x%08x len=%d
[L2HAL_GATEWAY] PDCPRX deciphered
[L2HAL_GATEWAY][ERROR] Failed to alloc !!!
[L2HAL_GATEWAY][ERROR] Failed to get CID(=%d), skip hostifSendListData() num=%d !!!
[L2HAL_GATEWAY][ERROR] Invalid Pkt Count=%d (+%d) LteDescCnt=%d
[L2HAL_GATEWAY][ERROR] PktProcSendDataToHost Invalid DstType=%d
[ERROR] AllocMsg fail!
[ERROR] SendMsg fail!
[L2HAL_GATEWAY] L2_L2HPDCPRXDELIV_INTEGRITY_CHECK_FAIL_IND (DomainType=%d RbId=%d, bSrb=%d)
[ERROR] AllocMsg fail!
[L2HAL_GATEWAY] L2_L2HPDCPRX_NR_DL_RBINFO_IND (Recovery DomainType=%d)
[ERROR] SendMsg fail!
[L2HAL_GATEWAY][PktProc][ERROR] Guard timer(%dms) expired !!! (PpStatus:0x%08x, PfResult:0x%08x, RX BLOCKFLAG:%d)
[L2HAL_GATEWAY][PktProc][ERROR] Guard timer(%dms) expired !!! (PpStatus:0x%08x, PfResult:0x%08x)
[L2HAL_GATEWAY][PktProc] Dequeue DstDesc (StartAddr=0x%08x,DstType=%d,StartIdx=%d,Num=%d,bSrb=%d,evt=%d)
[L2HAL_GATEWAY][PktProc][WARNING] Trigger PktProcInit (CP Routing >= %d)
[L2HAL_GATEWAY][PktProc][WARNING] CP Routing (%d)
[L2HAL_GATEWAY][PktProc] SRB with ItgAlgo=0
[PDCP RX] DcpInfo (DcpAlgo=%d RbId=%d Count=%d)
[PDCP RX] DcpInfo (DcpKey)
[PDCP RX] LastNormalDesc (Idx=%d DcpAlgo=%d SecyIdx=%d RbId=%d Count=%d)
[PDCP RX] LastNormalDesc (DcpKey)
[PDCP RX] HfnAdj+=%d try
[PDCP RX] HfnAdj+=%d pass
[PDCP RX] HfnAdj+=%d try
[PDCP RX] HfnAdj failed
[L2HAL_GATEWAY] No HW interrupt for Ciphering (RAT_NR) - (TotalNum (%d), FirstDesc (0x%x), isItg (%d), isReEstablish (%d)
[L2ExtCmd][ERROR] Add pending extCmdQ fail! CurDomainType(%d)
[ERROR][L2ExtCmd] ExtCmdPendPool is full! discard this ExeCmd! extCmdId(%u)
[ERROR][L2ExtCmd] Push ExtCmd pending queue fail! dataLength is over maximum size! dataLength(%u)
[L2ExtCmd] Push ExtCmd pending queue! extCmdId(%u) _ExtCmdPendIndex(%u) dataLength(%d) CurDomainType(%d)
[L2ExtCmd][ERROR] Flush ExtCmd pending Q fail! CurDomainType(%d)
[L2ExtCmd] Flush ExtCmd pending queue! Q size(%u) CurDomainType(%d)
[L2ExtCmd][ERROR] pendingItem is nullptr!
[L2ExtCmd] ExtCmd(%d) CurDomainType(%d) mbusState(%d) ModemState(%d)
[L2ExtCmd] Pending CMD!
[L2ExtCmd] L2ExtCmdSend() Start! extCmdId(%u) dataLength(%d) CurDomainType(%d)
[L2ExtCmd] LMAC_RX_RLCCONFIG_SET_NR_CMD!
[L2ExtCmd] LMAC_RX_OPER_MODE_SET_NR_CMD!
[L2ExtCmd] LMAC_INIT_NR_CMD!
[L2ExtCmd] LMAC_RX_POLLING_START_NR_CMD!
[L2ExtCmd] LMAC_RX_POLLING_STOP_NR_CMD!
[L2ExtCmd] LMAC_NRL2_CONFIG_STATE_NR_CMD! DomainType(%d) configState(%d)
[L2ExtCmd] LMAC_PDCP_CONFIG_NR_CMD! DomainType(%d) pdcpRbType(%d) lcId(%d) pdcpSnSize(0x%x) cellGroup(%d)
[L2ExtCmd] LMAC_TTI_TX_MODE_NR_CMD! DomainType(%d) bFr2On(%d) bNrDc(%d)
[L2ExtCmd][ERROR] unknown extCmdId!
[L2ExtCmd][ERROR] SendExtCmd Fail! res = %d
[L2HAL][ERROR] Sending LMAC_TX_TRS_START_NR_CMD Fail! res = %d
[L2HAL][ERROR] pCmdReqHdr == nullptr!
[ERROR][L2IPC] domainType(%d) is out of range!
[ERROR][L2IPC] macEntity(%d) is out of range!
[L2IPC] FlushL2IpcPendQueue() queue size(%u) domainType(%d) macEntity(%d)
[L2IPC][ERROR] m_tL2IpcPendQueue.front() is nullptr!
[ERROR][L2IPC] CurDomainType(%d) is out of range! domainType(%d)
[ERROR][L2IPC] macEntity(%d) is out of range! CurDomainType(%d)
[L2IPC] LCPU power domain is off! Pending this IPC. cmdId(%d) ccBitmap(%d)
[L2IPC] Hpcm owner mask is not NR! Discard this IPC! cmdId(%d) ccBitmap(%d)
[ERROR][L2IPC] IpcPendPool is full! discard this IPC! cmdId(%u)
[ERROR][L2IPC] dataLength is over maximum size! dataLength(%u)
[L2IPC] Push IPC pending queue! cmdId(%u) ccBitmap(%u) dataLength(%u) _IpcPendCount(%u) CurDomainType(%d) macEntity(%d)
[L2IPC] L2IpcSendInternal() Start! cmdId(%u) ccBitmap(%u)
[L2IPC] Sending PHY_L2_SP_ZP_CSIRS_ACT_DEACT_IND
[L2IPC] Sending PHY_L2_PUCCH_SPATIAL_REL_ACT_DEACT_IND
[L2IPC] Sending PHY_L2_SP_SRS_ACT_DEACT_IND
[L2IPC] Sending PHY_L2_SP_CSI_RPT_PUCCH_ACT_DEACT_IND
[L2IPC] Sending PHY_L2_PDCCH_TCI_STATE_IND
[L2IPC] Sending PHY_L2_PDSCH_TCI_STATES_ACT_DEACT_IND
[L2IPC] Sending PHY_L2_A_CSI_TRG_SUBSET_SUBSEL_IND
[L2IPC] Sending PHY_L2_SP_CSIRS_CSIIM_ACT_DEACT_IND
[L2IPC] Sending PHY_L2_TA_CONTROL_IND
[L2IPC] Sending PHY_L2_TA_TIMER_IND
[L2IPC] Sending PHY_L2_MAC_RESET_IND
[L2IPC] Sending PHY_L2_RACH_MSG3_CONFIG_IND
[L2IPC] Sending PHY_L2_MAC_RACH_CONTROL_IND
[L2IPC] Sending PHY_L2_RNTI_CONTROL_IND
[L2IPC] Sending PHY_L2_SRI_ON_IND
[L2IPC] Sending PHY_L2_PUCCH_SRS_RELEASE_IND
[L2IPC] Sending PHY_L2_UE_BEAMLOCK_IND
[ERROR][L2IPC] invalid command [0x%x]
[ERROR] L2GetCellIndex invalid cellIndex <-> ccIndex[%d]
[ERROR] L2GetCellGroup invalid CcIndex:%d <=> gL2CellConfig[CurDomainType:%d][MacEntity:any][CellIndex:%d]
[CDRX] SetDrxSleepVariables! CurTime(%u) SleepDur(%d) DrxType(%d) m_uCdrxConfirmRetryCount(%u) DomainType(%d) CellGrpId(%d)
[CDRX] Create m_CdrxConfirmRetryTimer
[CDRX] L2 CDRX confirm is running! but receives another CDRX confirm ind!
[ERROR][CDRX] RetryTimer is running! something is wrong!
[CDRX] L2 is running! Start retry timer!
AllocTimerParam failed. CellGrpId(%d)
[CDRX] L2 is free! Sending L1C_L2_DRX_CONFIRM_IND! m_uCdrxVarCurTime(%u) m_uCdrxVarSleepDur(%u) m_uCdrxVarDrxType(%u) L2ProcTime(%d) DomainType(%d) CellGrpId(%d)
[L2] Sending L1C_L2_DRX_CONFIRM_IND Fail!
[CDRX] LMAC H/W is running!
[CDRX] LMAC_CIPHER is running!
[CDRX] PKTPROC is running!
[CDRX] Domain[%d] CellGrpId[%d] RACH is running!
[CDRX] Domain[%d] CellGrpId[%d] SR_TRIGGERED!
[CDRX] Lmac RX is running
[CDRX] MAC RX is running! RD(%d) WD(%d)
[CDRX] RLC RX is running! index(%u)
[CDRX] RLC RX (Reassemble timer) is running! (%u/%u/%u)
[CDRX] PDCP RX (reordering timer) is running! index(%u)
[CDRX] PDCP RX is running! index(%u)
[CDRX] PDCP RX (LTE path) is running! index(%u)
[CDRX] Cancel CDRX Confirm procedure!
[CDRX] Cdrx Confirm timer expired! m_uCdrxConfirmRetryCount(%d) m_bCdrxConfirmRunning(%d) DomainType(%d) CellGrpId(%d)
[CDRX] Reaching maximum CDRX_CONFIRM retry count! Don't retry anymore
[PktProc][WARNING] Discard requested data (LmacDecipherBlockFlag=%d)
[PktProc][WARNING] PktProc start failed (power off) !
[PktProc][WARNING] PktProc start failed (DescAddr=0) !
[PktProc][WARNING] Discard requested data (DomainType=%d, PdcpChId=0x%x, Entity=%d, DescAddr=0x%08x, DescNum=%d, ModemPowerOn=%d L2DSDSPause=%d)
[PktProc][WARNING] Pending requested data (DomainType=%d, PdcpChId=0x%x, Entity=%d, DescAddr=0x%08x, DescNum=%d, ModemPowerOn=%d L2DSDSPause=%d)
[PktProc][ERROR] Failed to acquire Cmd
