[HAL][LMAC] LmacInit() Start! bDmaInit(%d) bHwInit(%d)
[HAL][LMAC] Forced Lmac HW init!
[HAL][LMAC] LmacInitPartial() Start! bDmaInit(%d)
[HAL][LMAC] NrLmacInit() Start! bDmaInit(%d) bHwInit(%d)
[HAL][LMAC] Forced Lmac HW init!
[HAL][LMAC] EnableIsrHandlerTx() Start!
[HAL][LMAC] EnableIsrHandlerRx() Start!
[HAL][LMAC][ERROR] invalid operation mode! RX_PS_OPERATION_MODE = %u
[HAL][LMAC] EnableInterruptRxForHwTest() Start!
[LMAC] InitLmacRxPollingTimer() Start!
[LMAC][POLLING][WARNING] StartLmacRxPollingMode fail! MBUS power is off!
[LMAC][POLLING] Lmac polling will not be started in UE_TEST_MODE
[LMAC][POLLING] StartLmacRxPollingMode()! eResult(%d) ModemState0(%d) ModemState1(%d)
[LMAC][POLLING] Stop Lmac Polling in NR Modem not ACTIVE state! ModemState0(%d) ModemState1(%d)!
[LMAC][POLLING][WARNING] Polling soft stop is already on!
[LMAC][POLLING] Polling soft stop on!
[LMAC][POLLING] L2 Release case! Do not control LmacRx interrupt
[LMAC][POLLING] StopLmacRxPollingMode()! eResult(%d) ModemState0(%d) ModemState1(%d) Lmac Polling soft stop mode!
[HAL][LMAC][POLLING][ERROR] MBUS Power domain is off! Do not polling anymore!
[HAL][LMAC][POLLING] ModemState0(%d) ModemState1(%d)! Retry this timer again
[HAL][LMAC][POLLING] Modem is not wake up state! Do not polling anymore! ModemState0(%d) ModemState1(%d)
[POLLING] RX_5G_CUR_DATA_ADDR(0x%x) RX_5G_SW_FREE_DATA_ADDR(0x%x) RX_5G_CUR_DESC_NUM(%d) RX_5G_SW_FREE_DESC_NUM(%d) RX_STATUS(0x%x) RX_4G5G_ERR_STATUS(%d)
[HAL][LMAC][ERROR] invalid operation mode! RX_PS_OPERATION_MODE = %u
[LMAC][POLLING] Stop lmac polling timer!
[HAL][LMAC][ERROR] invalid operation mode! RX_PS_OPERATION_MODE = %u, LmacErrorCnt = %u
[HAL][LMAC][ERROR] invalid operation mode! RX_PS_OPERATION_MODE.reg = %u, LmacErrorCnt = %u
[HAL][LMAC][ERROR] PrevDescNum is 0! Something is wrong!
[HAL][LMAC][ERROR] RX_4G5G_ERR_STATUS(%d) Invalid Trbk error!
[HAL][LMAC][ERROR] RX_4G5G_ERR_STATUS(%d) is not 0. But ignore this err
[HAL][LMAC] LmacResetInd is triggered. Skip LmacProc until LmacInit done.
[HAL][LMAC] PrevDescNumber(%u) RX_5G_CUR_DESC_NUM(%u) RX_5G_SW_FREE_DESC_NUM(%u) WD(%d) RD(%d)
[HAL][LMAC][ERROR] Dummy Lmac Intr by no valid CW
[HAL][LMAC][ERROR] Stop Lmac descriptor processing!
[ERROR] domainType(%d) is out of range!
[L2DS] LastDomainType is changed! DomainType(%d -> %d) WD(%d) RD(%d)
[HAL][LMAC] Remain Lmac Buffer size : %u (KB), Remain Lmac Desc Cnt(%u) LMAC_BUFFER_LOW_LIMIT(%d) LMAC_DESC_LOW_LIMIT(%d)
[HAL][LMAC][WARNING] Insuf remain lmac buf! Trigger InsufLmacBufInd msg!
[HAL][LMAC][WARNING] Insuf remain lmac buf! Skip sending msg
[HAL][LMAC][ERROR] !!! LMAC DUMP REGISTER! LmacErrorCnt(%u) index(%d)
[HAL][LMAC][ERROR] Valid is not 1! LmacErrorCnt(%u)
[HAL][LMAC][ERROR] Invalid cellType(%u)! LmacErrorCnt(%u)
[HAL][LMAC][ERROR] MAC PDU Table FULL !!!
[HAL][LMAC][ERROR] !!! LMAC DUMP REGISTER! LmacErrorCnt(%u) index(%d)
[HAL][LMAC][ERROR] UF is not 1! LmacErrorCnt(%u)
[HAL][LMAC][ERROR] Invalid cellType(%u)! LmacErrorCnt(%u)
[HAL][LMAC] PduSize(%d) CC_index(%d) DCSCG_ind(%d) PduAddr(0x%x) DescAddr(0x%x) Status(%u) DCSCG_ind(%d)
[HAL][LMAC][ERROR] MAC PDU Table FULL !!!
[HAL][LMAC][MAC PDU] PduSize(%d) CC_index(%d) DCSCG_ind(%d) PduAddr(0x%x) DescAddr(0x%x) Status(%u) DCSCG_ind(%d) domainType(%d)
[HAL][LMAC][ERROR] status(%d) is invalid. This desc will be discarded!
[HAL][LMAC][ERROR][index(%d)] Unknown DomainType(%d)
[HAL][LMAC][ERROR] Invalid cgType(%u)! LmacErrorCnt(%u)
[HAL][LMAC][Dump Reg] GetTrsCurAddrOfL2Buf(0x%x) pLmacCtrl->StartAddr(0x%x)
[HAL][LMAC][Dump Reg] GetParsCurAddrOfL2Buf(0x%x) pLmacCtrl->StartAddr(0x%x)
[HAL][LMAC][ERROR] invalid operation mode! RX_PS_OPERATION_MODE.reg = %u
[LMAC][Dump Desc] desc idx[%d] = 0x%x
[LmacState][NR1] RX_5G_CUR_DATA_ADDR(0x%x) RX_5G_SW_FREE_DATA_ADDR(0x%x) RX_5G_CUR_DESC_NUM(%d) RX_5G_SW_FREE_DESC_NUM(%d) RX_STATUS(0x%x) RX_4G5G_ERR_STATUS(%d)
[LmacState][NR2] PrevDescNum(%d) CurrDescNum(%d) RemainLmacBufSize(%d)(KB) RemainLmacDescCnt(%d) WD(%d) RD(%d)
[LmacState][LTE] RX_4G_CUR_DATA_ADDR(0x%x) RX_4G_SW_FREE_DATA_ADDR(0x%x) RX_4G_CUR_DESC_NUM(%d) RX_4G_SW_FREE_DESC_NUM(%d)
[HAL][LMAC][ERROR] LmacStartFullReset() Start! RX_4G5G_ERR_STATUS = %u, RX_STATUS(0x%x)
[HAL][LMAC] LmacResetInd is already triggered. Do not send Lmac Reset IND.
[HAL][LMAC] Lmac HW init case. Do not send Lmac Reset IND.
[HAL][LMAC] LmacRxRlcConfigSet() Start!
[HAL][LMAC] Send L2_HAL_LMAC_RESET_IND! to reset L2 layers. lastDomainType(%d)
[HAL][LMAC] RX_5G_SW_FREE_DESC_NUM(%d) is initial value! Set desc num as 0!
[HAL][LMAC] NotFreeDescAddr(0x%x) swFreeDescNum(%d)
[HAL][LMAC][ERROR] SendMsgInterDomain fail
[HAL][LMAC] Send L2_HAL_INSUF_LMACBUF_IND! lastDomainType(%d)
[HAL][LMAC][ERROR] SendMsgInterDomain fail
[HAL][LMAC][ERROR] pParserCmdHdr == nullptr!
[HAL][LMAC][E] pFirstDmaDesc[0x0]
[HAL][LMAC][ERROR] LmacTx Busy! _TxFailCountNr[%d]
[HAL][LMAC][ERROR] Abnormal LMAC TX intr[%d]
[HAL][LMAC] txintr_list = %u
[L2HAL][ERROR] pCmdReqHdr == nullptr!
[L2HAL] Execute confirm of LMAC_TX_TRS_START_NR_CMD
[HAL][LMAC] Error, pCmdReqHdr = nullptr !!!
