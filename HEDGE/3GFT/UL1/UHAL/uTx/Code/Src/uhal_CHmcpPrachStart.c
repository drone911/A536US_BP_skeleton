Prach cmd is NULL
Prach cmdPtr is NULL
activeStackId %d DSDS:uhal_CScomPrachStart_response %d
uhal_CScomPrachStart_response: uhal_HmcpHpcm_GetModemOnStatus(activeStackId) %d
uhal_CScomPrachStart_response: checkUarfcnAfterCommit
uhal_CScomPrachStart_response:[%d,%d] failed after checkAfter- to be run 1 frame later...
Prach cmdPtr is NULL
activeStackId %d DSDS:uhal_CScomPrachStart_undo kill SubsequentPreambleToken
activeStackId %d DSDS:uhal_CScomPrachStart_undo kill FirstPreambleToken
activeStackId %d DSDS:uhal_CScomPrachStart_undo kill ReleasePrachToken
activeStackId %d DSDS: uhal_CScomPrachStart_undo kill AichSyncToken
activeStackId %d DSDS:uhal_CScomPrachStart_undo Aich Int pending
activeStackId %d DSDS: uhal_CScomPrachStart_undo Encode Int pending
3G3G: uhal_CHmcpPrachStart_undo, disable TX interrupt
activeStackId %d DSDS: uhal_CScomPrachStart_undo EHalDlAich_NoSignal
uhal_CPrach_SetState:EPrachConfigured (uhal_CPrachStart_undo) %d
activeStackId %d rachTxPowerMax %d maxTxPower %d txPrachOffset[3] %d txPowerTempOffset %d
activeStackId %d Prach override: retries %d
activeStackId %d [TAS-RACH] currentTxAntNum: %d, rscp: %d, uhalCmdPrachStart->preambleInitPower: %d, init_power: %d
activeStackId %d init_power %d is limited to %d
activeStackId %d PrachStart init=%d, rscp=%d outpower=%d dBm
uhal_CHmcpPrachStart_request: sfn %6d slot %3d chip %5d
uhal_CHmcpPrachStart_request: FirstRachProcess %d AddOffset %d
activeStackId %d Impossible case[current_aich_slots %d, sfnMod8 %d, selectedAS %d]
activeStackId %d uhal_CHmcpPrachStart_subsequentPreamble: submit SubsequentPreamble token
activeStackId %d [uhal_CHmcpPrachStart_firstPreamble] ulPhyProcInstance %x, prach %x
activeStackId %d [uhal_CHmcpPrachStart_firstPreamble] numberOfAvailAsAtNextSfn %d, current_aich_slots %d,
activeStackId %d uhal_CHmcpPrachStart_firstPreamble: selectedAS %d
activeStackId %d uhal_CHmcpPrachStart_firstPreamble: submit FirstPreamble token by selectedAS %d < current_aich_slots %d
activeStackId %d Access slot No %d preambleSignature %d
activeStackId %d EHalDlAich_ReleasePrach by overtime on selection of available number
activeStackId %d uhal_CHmcpPrachStart_firstPreamble: submit FirstPreamble token
activeStackId %d uhal_CHmcpPrachStart_request: FirstPreamble with numOf1stPreambleFailure %d
activeStackId %d uhal_CHmcpPrachStart_request: RachChannelSetup
activeStackId %d PRACH_EN [UL_CH_INFO] 0x%x
AichSync: sfn %6d slot %3d chip %5d
activeStackId %d AichSync:(aichslot<13)&&(aichsfn&1) token modify: FirstPreamble
AichSync token late: resubmit noOfTries %d aichsfn %d aichslot %d noOfFrames %d
activeStackId %d uhal_CPrach_SetState:EPrachConfigured (AichSync) %d
DSDS:uhal_CPrach_SetCmdAborted:EPrachAborted %d
Hmcp_TXGEN_LISR
DSDS iscmdAborted=%d
Hmcp_TXGEN_HISR activeStackId %d rachTxPower %d pdPower %d rfTxSPI 0x%x rfTx2SPI 0x%x rfTxPll 0x%x rfTxmode 0x%x
activeStackId %d Re lock
activeStackId %d Hmcp_Aich_Rf_Lisr
activeStackId %d [NEW AICH DETECTION SCHEME] phychNr %d, phychType %d, ai po %d
activeStackId %d [NEW AICH DETECTION SCHEME] ai po is incorrect. realRakeEnergy : %d Skip NEW AICH DETECTION SCHEME
activeStackId %d ai sym %d, realRakeEnergy %d, aichPO %d, sqrt_gamma %d, aich_ack_th %d
activeStackId %d [R:%d][EAICH_ACK] AI SIG = %d, EdchRscIdx = %d
activeStackId %d Enable Slot interrupt at %d slot (AS Timing %d, AS %d)
activeStackId %d msgCurrentPower %d is limited to %d
msgCurrentPower %d = preambleCurrentPower %d + msgStepPower %d + dpcchPowerOffset %d
activeStackId %d Hmcp_Aich_Rf_Lisr: PrachAck TxPowerSet failed %d
[R:%d][EAICH_NACK] EAI SYM = %d , EAI SIG = %d
[R:%d][EAICH_ACK] EAI SYM = %d , AI SIG = %d, EAI SIG = %d, EdchRscIdx = %d
WARNING: In uhal_HmcpAICH_HISR, cmdPtr is NULL
DSDS iscmdAborted=%d
activeStackId %d [R:%d] AI SYM = %d , ISCP = %d
activeStackId %d [AICH monitoring] frameCounter=%d, slotCounter = %d, chipCounter = %d
activeStackId %d AICH result POS
activeStackId %d EHalDlAich_PosAck Asn_tti10 ReleasePrach
activeStackId %d Hmcp_Aich_Rf_HISR: Absurd AICH result from chipset
activeStackId %d AICH NACK [UL_CH_INFO] 0x%x
activeStackId %d ## Warning!! uhal_HmcpIpcGetDstStatus is False##
activeStackId %d AICH result NACK
Preamble remains: %d out of %d [ul_ch_info : %d] DAC_POWER_DEBUG_CNT(%d)
txtm_sfn : %d, txtm_chip : %d, htx_urtg : %d, cur_slot : %d, cur_chip : %d, dbg_ul_slot : %d, dbg_ul_chipx8 : %d,
cur_fing_pos : %d, DL_AS : %d, DL_AS_Chip : %d, ref_cnt_chip38400 : %d, urtg_chip38400 : %d, tx_tm_pos : %d, urtg_pos : %d,
frameCounter_0=%d, slotCounter_0 = %d, chipCounter_0 = %d frameCounter_1=%d, slotCounter_1 = %d, chipCounter_1 = %d rlNr = %d
activeStackId %d uhal_CScomPrachStart_abort command received
[uhal_CHmcpPrachStart_timeout] INT_MASK 0x%x, AICH(slot %d, chip %d) htx_ch_info 0x%x, htx_ch_mon 0x%x, ai_ctrl_0 0x%x
actStkId %d [uhal_CHmcpPrachStart_MeasureMsgPwr] RACH message power = %d
[rlNr %d] finger cumulative value %d, converted value %d
WARNING:uhal_CHmcpPrachStart_setAichStatus EHalDlAichIndicatorInfoCmd exec() failed errCode %d addErrCode %d
setPrachTimingDelay : currentTxAntNum(%d) demodProcDelay(%d) demodProcDelayOffset(%d)
[DBG]currentTxAntNum %d, scrflt_fb : %d
activeStackId %d uhal_CHmcpPrachStart_enableAICH EHalDlAichIndicatorInfoCmd errCode=%d addErrCode=%d
activeStackId %d enableAICH phychNr=%d
activeStackId %d uhal_CHmcpPrachStart_enableAICH EHalDlPhychStartCmd exec() failed errCode %d addErrCode %d
[uhal_CHmcpPrachStart_getRefRLFramePosition] sfn_p %x, slot_p %x, chip_p %x
getRefRLFramePosition : currentTxAntNum(%d) demodProcDelay(%d) demodProcDelayOffset(%d)
numAvailableASPerSfn is out of bound
searchASSet: not found
activeStackId %d preambleCurrentPower %d is limited to %d
activeStackId %d Additional PrachNoSig MsgPower=%d dBm
activeStackId %d PrachNoSig TxPowerSet failed %d
activeStackId %d Next Preamble Signature: %d, Next Access Slot: %d
activeStackId %d preambleCurrentPower %d is limited to %d
activeStackId %d PrachNoSig TxPowerSet failed %d
