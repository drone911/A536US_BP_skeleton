(F)[NrTxFeHeap] InsertJob Fail! m_heapCnt %d
[NrTxFeDev] RequestFeControl - reject chType:%d
[NrTxFeDev] RequestFeControl - Invalid txPath chType:%d
[NrTxFeDev] RequestFeControl - reject chType:%d, portIdx:%d, portNum:%d, rxModeBitmap:0x%X, rxPortMap:0x%X
[NrTxFeDev] RequestFeControl chType:%d, chMu:%d, transform:%d, subframeIdx:%d, sCnt:%d, eCnt:%d, SwitchEn/idx/num(2/1/1):%d, rankNum:%d, txPower:%d
[NrTxFeDev] reject RequestTempControl - thermalMeasState:%d, m_rfCtrlInfo:%d, m_tempMeasTrig:%d, ntmFeCtrlDisable:%d
[NrTxFeDev] ConfigFeFr2 - beamMode %d, beamIdx %d, Beam_v %d, Beam_h %d, NotUpdate %d
[NrTxFeDev] wrong beam idx, vidx:0x%X, hidx:0x%X
[NrTxFeDev] RequestTrxSwFr2 - reject
(F)[RequestTrxSwFr2] symLength is %d! [chType %d, startSym %d]
[NrTxFeDev] reject ControlPDetMeasure - chType is invalid
[NrTxFeDev] isTempOnly:%d, PaTemp:%d, PdetPwr.H:%d, PdetPwr.V:%d, phaseArray:%d, m_fr2CompPwr.H:%d, m_fr2CompPwr.V:%d, rbSize:%d, symbollength:%d
[NrTxFeDev] deltaPC[0]:%d, deltaPC[1]:%d, x_value[0]:%d, x_value[1]:%d, txPathBitMap:%d, tempRead:0x%08x, pdetRead:0x%08x
[NrTxFeDev] ControlVgaGainFr2 - currTime(sfn/slot)(4/2):%d, m_vgaGain(h/v)(2/2):%d, fr2CompPwr.H(%d -> %d), fr2CompPwr.V(%d -> %d)
[NrTxFeDev] ResetVgaGainFr2 - m_vgaCtrlEn:%d, m_vgaGain(h/v)(2/2):%d, m_dGainLimit:%d
[NrTxFeDev] ControlTxPath CcIdx[%d], RfdPathIdx[%d], DacIdx0[%d], DacIdx1[%d], MaxRank[%d], txfPathNum[%d], cfgDacIdx[%d], cfgMaxRank[%d]
[NrTxFeDev] UpdateFbrxMeasure - trigger Invalid RF dump - dacIdx:%d, dumpType:%d
[NrTxFeDev] UpdateFbrxMeasure - fbrxState is off, fbrxReqCnt:%d
[NrTxFeDev] UpdateFbrxMeasure - time limit is over. idx:%d, Wr:%d, Rd:%d, limit:0x%08x, currTick:0x%08x
[NrTxFeDev] UpdateFbrxMeasure - Invalid fbrx path! rank:%d, ttiIdx:%d, sampleCnt:%d, chType:%d, maskBitmap:0x%X, portIdx:%d
[NrTxFeDev] Abnormal Power - rank:%d, txPower:%d, fbrxMeasPower:%d, invalidCnt[rank]:%d, txFiltPath:%d
[NrTxFeDev] UpdateFbrxMeasure - Skip Fbrx Update!!, fbrxStatus:%d, dcI:%d, dcQ:%d, clAitFbrxSkip:%d
[NrTxFeDev] UpdateFbrxMeasure - ntmMode:%d, portIdx:%d, fbrxPower:%d
[NrTxFeDev] UpdateFbrxMeasure - ttiIdx:%d, sampleCnt:%d, fbrxMeasPower:%d, chType:%d, txPower:%d, digitalPwr:%d, feedback:%d, antPathLoss:%d
[NrTxFeDev] UpdateFbrxMeasure SubPath - ttiIdx:%d, sampleCnt:%d, fbrxMeasPower:%d, chType:%d, txPower:%d, digitalPwr:%d, feedback:%d, antPathLoss:%d
[NrTxFeDev] UpdateTxSharingInfo - targetDacBitMap:0x%X, targetDacIdx:%d, targetTxPath:%d
[NrTxDbDev][IPC_HAL_TXCMD_CLAIT_FBRX_CFG] fbrxState:%d
[NrTxFeDev] UpdateActPathInfo - m_ActModIdx[0x%x]
[SLO_DEBUG] UpdateScellPathInfo - scellIdx:%d, modIdx0:%d, modIdx1:%d
[NrTxFeDev] UpdateSrsLimitPath - not supported srs mode %d)
[NrTxFeDev] UpdateSrsLimitPath - totalPortMap:0x%X, srsLimitPath:0x%X, 0x%X, 0x%X, 0x%X
(Warning-RFCTRL) SW SPI Num Overflow!! wordNum[%d]
(Warning-RFCTRL) SPI Write FIFO not Cleared!! swSpiAddr[0x%X]
(Warning-RFCTRL) SPI Read FIFO not Cleared!! swSpiAddr[0x%X] step[%d]
(Warning-RFCTRL) RFIC not response swSpiAddr[0x%X]
(Warning-RFCTRL) Mipi Read fail#0, mipiCh:%d
(Warning-RFCTRL) Mipi Read fail#1, mipiCh:%d
(Warning-RFCTRL) Invalid mipi num! ch:%d, word:0x%X
(Warning-RFCTRL) Mipi Read fail#0, mipiCh:%d
[NrTxFeDev] ReadRfCtrler(main) - gpio:0x%X, trxSw:0x%08X, rficGain:0x%08X, femMipiRead:0x%08X, pamMipiRead:0x%08X
[NrTxFeDev] ReadRfCtrler(sub) - gpio:0x%X, trxSw:0x%08X, rficGain:0x%08X, femMipiRead:0x%08X, pamMipiRead:0x%08X
[NrTxFeDev] UpdateDpsInfo - m_dspInfo buffer is full
[NrTxFeDev] ControlOnOff mode:%d, dacState:%d, fbrxState:%d
[MCU monitor] TRX(%d/%d), Analog(%d/%d), mprAvgAcc:%d, trxOn:0x%08x, trxOff:0x%08x, analog:0x%08x
[NrTxFeDev] FBRX ownerFlag overriding!
[NrTxFeDev] Skip FBRX measure - ownerFlag:%d, fbrxReq:%d, m_fbrxLowPriority:%d
[NrTxFeDev] CheckFbrxState - mode:%2d, lteOnStatus:%d, ltefbrxReq:%d, shareFlag:%d, ownerFlag:%d, fbrxOnDuration:%d, fbrxLowPriority:%d, validFlag:%d, fbrxMeasMap:%d, dcrReadVal:0x%X
[NrTxFeDev] mipiCh[%d] src[%d] tickCnt[0x%X] mipiWord [0x%X] [0x%X] [0x%X] [0x%X] [0x%X] [0x%X] pathIdx[%d]
[NrTxFeDev] SM2TX mipiCh:%d src2[%d] mipiWord [0x%X] [0x%X] [0x%X] [0x%X]
[NrTxFeDev] spiSrc[%d] spiNum[%d] spiAddr[0x%X] [0x%X] [0x%X] [0x%X] [0x%X]
[NrTxFeDev] spiWord[0x%X] [0x%X] [0x%X] [0x%X] [0x%X]
[NrTxFeDev] spiSrc[%d] spiNum[%d] tickCnt[0x%X] spiWord [0x%X] [0x%X] / [0x%X] [0x%X] / [0x%X] [0x%X]]
[NrTxFeDev] spiSrc[%d] spiNum[%d] tickCnt[0x%X] spiWord [0x%X] [0x%X] / [0x%X] [0x%X] / [0x%X] [0x%X]]
[NrTxFeDev] Drop tx channel according to xScale - beforeDps:%d, afterDps:%d, xScale:%d, p_UE_FR1: %d
Exception - Flag:0x%X antIdx:%d, Path:%d, Power:%d
(Warning-RFCTRL) EtPwr abnormal paMode[%d]
(Warning-RFCTRL) EtPwr abnormal Pwr[%d] StartPwr[%d] paMode[%d]
[NrTxFeDev] paSmCtrlMode:%d, refPwr:%d, txPwr:%d, paMode:%d, pwrIdx:%d, selGainWord:0x%X, pwrIdxShift:%d, totalCompPwr:%d, refDgcGain:%d, decimalCompPwr:%d
(Warning-RFCTRL) SetDpdET abnormal paMode[%d]
[NrTxFeDev] etEn:%d (etDelaySetEn:%d, etSaptGainSetEn:%d), cfrLimit:%d, dpdSel:0x%X, dpdInGain:0x%X, dpdoutGain:0x%X
(Warning-RFCTRL) abnormal fracDelayIdx[%d]
[NrTxFeDev] UpdateShmFr1 - invalid numTxPath:%d
[NrTxFeDev] RF not update
[NrTxFeDev] IQMC - iqMisAddr:0x%X, val:0x%X, 0x%X, iqAAddr:0x%X, val:0x%X, 0x%X, iqBAddr:0x%X, val:0x%X, 0x%X,
[NrTxFeDev] PA_SM_EXTENSION - numRficGain:%d, rficGainWord0:0x%08x,%d, rficGainWord1:0x%08x,%d, rficGainWord2:0x%08x,%d, rficGainWord3:0x%08x,%d
[NrTxFeDev] FBRX info - pdType:%d, fbrxAgcAddr:0x%X, fbrxLinearPowAddr:0x%X, fbrxDcrAccumValAddr:0x%X, fbrxDcrAccumOvValAddr:0x%X, fbrxDcrInitVal:0x%X, fbrxPathOn:%d, 0x%X, 0x%X, fbrxthreshold:%d
[NrTxFeDev] FBRX info - fbrxModeSetChangeAddr:0x%X, rfdOn:%d, addr:0x%X, data:0x%X, 0x%X, rfdOff:%d, addr:0x%X, data:0x%X, 0x%X
[NrTxFeDev] FBRX info - fbrxTickMode:%d, addr:0x%X, data:0x%X, 0x%X
[NrTxFeDev] FBRX info - Coupler num:%d, mipiCh:%d, %d, %d, onWord:0x%X, 0x%X, 0x%X, offWord:0x%X, 0x%X, 0x%X,
[NrTxFeDev] FBRX info - Coupler mipiCh:%d, %d, onWord:0x%X, 0x%X, offWord:0x%X, 0x%X
[NrTxFeDev] UpdateShmValue - APT en:%d, DFTs_ETen:%d, CP_ETen:%d, 256QamSupport:%d, et256QamSupport:%d, iqmc enable:%d, smHoldDisalbe:%d
[NrTxFeDev] APT info - PA step: %d, txGain Addr:0x%X, rficHighGain: 0x%X, 0x%X, 0x%X, rficMinGain:0x%X, MIPI numCh:%d, PAM ch:%d, SM ch:%d
[NrTxFeDev] APT info - smTrigMode:%d, sm:0x%X,0x%X pam mode:%d,0x%X, bias:%d,0x%X, trigger:%d,0x%X
[NrTxFeDev] Off word - pam mode:0x%X, bias:%d,0x%X, smOffEn:%d, smOffWord:0x%X, smSwapEn:%d, txGainTrigMode - En:%d, addr:0x%X, data:0x%X
[NrTxFeDev] ET info - rficGain:0x%X, bulk:0x%X,0x%X, pam mode:%d,0x%X, bias:%d,0x%X
[NrTxFeDev] ET info - etEnThreshold:%d,%d, etStartPwrIdx:%d,%d, LowestIdx:%d
[NrTxFeDev] RFD trx cmd addr:0x%04x, TX:0x%08x, RX:0x%08x, FEM trx cmd Rx:%d,%d,0x%x tx:%d,%d,0x%x, 2ndCtrlType:%d
[NrTxFeDev] FEM 2nd Ctrl, gpioMap:0x%X, gpioTxWord:0x%X, gpioRxWord:0x%X
[NrTxFeDev] Delay[%d] SpeedyOn[%d] SpeedyOff[%d] SmOn[%d] SmGainOn[%d] SmOff[%d] SmTrig[%d] FemOn[%d] FemOff[%d] RficTrx[%d]
[NrTxFeDev] DPS power info [0]:%d, [1]:%d, [2]:%d, [3]:%d, [4]:%d, [5]:%d, [6]:%d, [7]:%d, [8]:%d, xScale:%d
[NrTxFeDev] SRS SW info, Too many conflict! ltePa:%d, lteSm:%d
[NrTxFeDev] SRS SW info, pathIdx:%d(1st), pathWord:0x%08X, 0x%08X, 0x%08X, 0x%08X, 0x%08X, 0x%08X
[NrTxFeDev] SRS SW info, pathIdx:%d(2nd), pathWord:0x%08X, 0x%08X, 0x%08X, 0x%08X, 0x%08X, 0x%08X
[NrTxFeDev] SRS SW info, srsMode:%d(rxPortMap:0x%X/0x%X), defIdx:%d/%d, totalSwNum:%d, trxSeperateFlag:%d, rxPathIdx:%d, fbrxMaskBitmap:0x%X, 0x%X
[NrTxFeDev] SRS SW info(1st), swType:%d, %d, %d, %d, %d, %d, gpioMask:0x%X
[NrTxFeDev] SRS SW info(1st), swChOrMask:0x%X, 0x%X, 0x%X, 0x%X, 0x%X, 0x%X
[NrTxFeDev] SRS SW info(2nd), swType:%d, %d, %d, %d, %d, %d
[NrTxFeDev] SRS SW info(2nd), swChOrMask:0x%X, 0x%X, 0x%X, 0x%X, 0x%X, 0x%X
[NrTxFeDev] SRS SW info, antPathLoss:%d,%d,%d,%d, subAntPathLoss:%d,%d,%d,%d
[NrTxFeDev] SRS SW info, mipiChConflict:%d, lteMipiCh:%d,%d, conflictMipiCh:0x%X
[NrTxFeDev] SRS SW info, sm2TxMemAddr, src0:%d, src1:%d, src2:%d, src3:%d, src4:%d
[NrTxFeDev] AS info, maxPower/AntPath: %d %d %d %d, sub: %d %d %d %d
[NrTxFeDev] spiSrcMemddr, spiTxNum:%d, src0:%d, src1:%d, src2:%d, src3:%d, src4:%d, src5:%d
[NrTxFeDev] spiRtgSrcMemddr, src0:%d, src1:%d, src2:%d, src3:%d
[NrTxFeDev] mipiSrcMemddr, ch:%d, src0:%d, src1:%d, src2:%d, src3:%d, src4:%d, src5:%d, src6:%d, src7:%d
[NrTxFeDev] mipiSrcMemddr, sw2: [%d, %d, %d, %d, %d] [%d, %d, %d, %d, %d]
[NrTxFeDev] mipiRtgSrcMemAddr, ch:%d, src0:%d, src1:%d, src2:%d, src3:%d, src4:%d, src5:%d, src6:%d, src7:%d
[NrTxFeDev] therm[%d] thermalCompEnable:%d, pdetCompEnable:%d, tableSwEnable:%d, maxDgain:%d, minDgain:%d
[NrTxFeDev] m_thermalMeasDur[%d], TxTickTime[%d %d], max_pwr[%d %d], singlePolarization:%d, levelReportEnable:%d, levelRise[%d %d %d]
[NrTxFeDev] m_fr2CompTh[%d], ChipVer[%d], m_fr2_clpc_const_k[%d], m_fr2_clpc_const_z1[%d], m_fr2_ant_sel[%d]
[NrTxFeDev] GPIO_MODE_SET - modeSetRead:0x%08x, modeSetRead2:0x%08x, modeSetWrite:0x%08x, modeSetWrite2:0x%08x
[NrTxDev] DAC input power - mprPeak:%d, mprAvgAcc:%d, mprCubicAcc:%d, BB(urtg:0x%X, txf:0x%X), RFD(urtg:0x%X, txfClk:0x%X, txfEn:0x%X)
(Warning-RFCTRL) NO_SPI_SOURCE action[%d]
(Warning-RFCTRL) MAX_SPI_NUM overflow. m_spiNum[%d]
(Warning-RFCTRL) NO_MIPI_SOURCE mipiChIdx[%d] action[%d]
(Warning-RFCTRL) MIPI Num Overflow!! MipiNum[%d]
(Warning-RFCTRL) NO_SM2TX_SOURCE action[%d]
(Warning-RFCTRL) SM2TX Num Overflow!! MipiNum[%d]
[NrTxFeDev] UpdateFemWord - FEM trx cmd Rx:%d,0x%x,0x%x,0x%x tx:%d,0x%x,0x%x,0x%x
(Warning-RFCTRL) NO_RTGGP_SOURCE action[%d]
(Warning-RFCTRL) RTGGP Num Overflow!! rank[%d] MipiNum[%d]
(Warning-RFCTRL) NO_GPIO_SOURCE chCfgBuffIdx[%d]
(Warning-RFCTRL) CenterChip SW SPI Num Overflow!! wordNum[%d]
(Warning-RFCTRL) CenterChip SPI Write FIFO not Cleared!! swSpiAddr[0x%X]
(Warning-RFCTRL) Center SPI Read FIFO not Cleared!! swSpiAddr[0x%X] step[%d]
(Warning-RFCTRL) Center RFIC not response swSpiAddr[0x%X]
[NrTxFeDev] (Warning-RFCTRL) ModuleTxAntNum [%d], TxPwrAntNum [%d], txAntNum [%d]
