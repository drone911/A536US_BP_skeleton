[MARCONI] %s: RFD_CMU_IPLL_CON0 : 0%08X, RFD_CMU_IPLL_CON1 : 0%08X
[MARCONI] %s:RFD_CMU_FPLL_CON0 : 0%08X, RFD_CMU_FPLL_CON1 : 0%08X, RFD_CMU_FPLL_DSM_F_SHADOW : 0x%08X, RFD_CMU_FPLL_DSM_F : 0x%08x
[MARCONI] :: %s(%d)
[MARCONI GNSS] CH2_TX_STS [0x%08X] CH2_RX_STS [0x%08X]
[MARCONI] GnssMarconiLinkStatus: Marconi PD already off
[MARCONI] hal_MarcActivation_GNSS(%d) start, gGNSS_LDO_Set(%d)
[MARCONI] hal_MarcActivation_GNSS(%d) end, gGNSS_LDO_Set(%d)
[MARCONI] hal_MarcDeactivation_GNSS(%d) start, gGNSS_LDO_Set(%d)
[MARCONI] hal_MarcDeactivation_GNSS(%d) end, gGNSS_LDO_Set(%d)
[MARCONI] _configGnssCurrentOpt : Start - enable(%d)
[MARCONI] _configGnssCurrentOpt : UL MCW SLEEP(ONLY_GNSS)
[MARCONI] _configGnssCurrentOpt : UL MCW SLEEP(CP_SLEEP)
[MARCONI] _configGnssCurrentOpt : UL MCW Reinit
[MARCONI] _configGnssCurrentOpt : End - enable(%d)
[MARCONI] _syncMuxSel: mode %d, fpll_sel %d, rfd_marsync_config0 0x%08X->0x%08X
[MARCONI] _clearSts: prev sts[0x%08X]
[MARCONI] _DlSmdTest(start)
[MARCONI] _DlSmdTest(process) : curLane[%d] -------------------------------
[MARCONI] _DlSmdTest(dump) : curLane[%d], intrSts[0x%08X], CRC Count[0x%08X], EOT Count[0x%08X]
[MARCONI] _DlSmdTest(end) : Lane[%d], intrSts[0x%08X]
[MARCONI_UL] _ulCheck(+CHECKMARC): prevErrCnt %d eotErrCnt %d
[MARCONI_UL] _ulCheck(+CHECKMARC): prevErrCnt %d crcErrCnt %d
[MARCONI_UL] _ulCheckErrCnt : INTR_STS 0x%08X EOT_ERR_CNT 0x%08X CRC_ERR_CNT 0x%08X ret %d
[MARCONI_UL] _ulSmdTest : lane %d UL_INTR_STS 0x%08X
[MARCONI] _getMarcInitFlag(%d)
[MARCONI][OVCMN] HALMARC_OV_Open : call close function, gMarcDB.is_support_fr2[0x%08X]
[MARCONI] _difModeSetStartChn %d
[MARCONI] _difModeSetDoneChn %d
[MARCONI] hw_MarcLISR: LISR Rcvd hwMarcIrqSts:0x%x hwMarcChIrqSts:0x%x
[MARCONI] _MarcHisr: RAT_2G == currRat
[MARCONI] _MarcHisr: Marconi PD already off
[MARCONI] _MarcHisr: marcLinkIntSts:0x%x marcLinkChIntSts:0x%x marcLinkIntEn:0x%x marcLinkChIntEn:0x%x
[MARCONI] _init: RFD_AUX_GNSS_CTRL[0x%08X]
[MARCONI] _init: PD_MCW is off
[MARCONI] _init: CON6_IPLL[0x%08X]
[MARCONI] _init: BB IPLL Check - CON3_IPLL[0x%08X]
[MARCONI] _init: CON6_IPLL[0x%08X] lock_cnt[%d] PLL_LOCKTIME_REG_IPLL0[0x%08X]
[MARCONI] _init: BB IPLL enable - CON3_IPLL[0x%08X] CON0_IPLL[%d]
[MARCONI] _init: SKIP MARCONI INIT INFRA(%d)
[MARCONI] _init: BB IPLL Check - CON3_IPLL[0x%08X] lock_cnt[%d] PLL_LOCKTIME_IPLL0[0x%08X]
[MARCONI] _init: lockVal 0x%X
[MARCONI] _init: BB[0x%x] RF[0x%x]
[MARCONI] _init: CMU_RESET[0x%x] LDO[0x%x] PHYCFG[0x%x] FPLL_STAT[0x%X] CSPEEDY[0x%x]
[MARCONI] _init: SKIP MARCONI INIT MCW(%d)
[MARCONI] __ipll_sub6: Check for ipll_mode
[MARCONI] _fpll_sub6: MCW_CON8_MPLL[0x%08X] FPLL_DSM_F_RF[0x%08X] delta[0x%08X]
[MARCONI] __fpll_sub6: Check for fpll_mode
[MARCONI] _sync: FPLL_STAT[0x%x]
[MARCONI] _sync: mode %d, pllTimingGapVal 0x%x
[MARCONI] _irat: rat[%d], path[%d]
[MARCONI] _setDSMRstVal: DSM VAL RESET
[MARCONI] _difModeSetStart
[MARCONI] _difModeSetDone
[MARCONI] _monitor Rx: Sts[0x%08X] ChSts[0x%08X] EOT[0x%08X] CRC[0x%08X]
[MARCONI] _monitor RxSts: FLT3[0x%08X] FLT4[0x%08X] FLT15[0x%08X] FLT16[0x%08X] CHEN[0x%08X] CLKEN[0x%08X]
[MARCONI] _monitor TxSts: FLT3[0x%08X] FLT4[0x%08X] FLT15[0x%08X] FLT16[0x%08X] CHEN[0x%08X] CLKEN[0x%08X]
[MARCONI] _monitor Sampling Freq: RF(F-0)[0x%08X][0x%08X][0x%08X][0x%08X][0x%08X][0x%08X][0x%08X]
[MARCONI] _monitor Sampling Freq: BB(F-0)[0x%08X][0x%08X][0x%08X][0x%08X][0x%08X][0x%08X][0x%08X]
[MARCONI] _monitor DValid: BB(F-0)[0x%08X][0x%08X][0x%08X][0x%08X][0x%08X][0x%08X][0x%08X]
[MARCONI] _monitor GNSS: FLT2RX[0x%08X] FLT2TX[0x%08X] DIF_LINK_CLK_ON[0x%01X] GNSS_STATUS[0x%08X] FLAG[%d] gGNSS_LDO_Set[%d]
[MARCONI] _monitor Sampling Freq: MXR(5-0)[0x%08X][0x%08X][0x%08X][0x%08X][0x%08X][0x%08X]
[MARCONI] _monitor PLL: CON8_MPLL[0x%08X] MPLL_TO_FPLL[0x%08X] FPLL_DSM_F[0x%08X] ADC_FIFO_EN_RAT_SEL0[0x%X] FPLL_STAT[0x%08X]
[MARCONI] _monitor CMU: RFD_CMU_CLK_SRC_SEL[0x%X] F_CON0[0x%X] F_CON1[0x%X] I_CON0[0x%X] I_CON1[0x%X] I_STAT[0x%08X] HalfClk:%d
[MARCONI] _monitor DLL: rPHY_CON4[0x%08X] rPHY_CON5[0x%08X] rPHY_CON6[0x%08X] rPHY_CON2[0x%08X] rPHY_CON3[0x%08X] rPHY_CON7[0x%08X] rPHY_STAT0[0x%08X]
[MARCONI] _monitor LPM: FCON3[0x%08X] PHYSYS[0x%08X] 880[0x%08X] SEL_MCW_PHY[0x%08X] CLK_CON_DIV_CKDIVW_PHY_MCLK[0x%08X]
[MARCONI] _check: FRAMECOUNT: %d
[MARCONI] _check[%d]: error count increasing! EOT[0]: %d, EOT[1]: %d, CRC[0]: %d, CRC[1]:%d
[MARCONI] _check[%d]: frame count is not increasing! countframe[0]: %d, countframe[1]: %d
[MARCONI] _check[%d]: Tx channel off. FLT3: 0x%X, FLT4: 0x%X
[MARCONI] _dump : START
[MARCONI] _dump : END
%s _dumpPrint : RF <RF_CHIP_ID> : 0x%X
%s _dumpPrint : RF <%s> 0x%04X : 0x%08X ; 0x%08X ; 0x%08X ; 0x%08X
%s _dumpPrint : BB <%s> 0x%04X : 0x%08X ; 0x%08X ; 0x%08X ; 0x%08X
%s _dumpPrint : BB <%s> 0x%04X : 0x%08X ; 0x%08X ; 0x%08X
%s _dumpPrint : BB <%s> 0x%04X : 0x%08X ; 0x%08X
%s _dumpPrint : BB <%s> 0x%04X : 0x%08X
[BU_MODE] _cordicADC: Cordic is enabled
[MARCONI] _sleep: Marconi power off and RF I/FPLL off
[MARCONI] _setDefaultCalVal: phyCalVal0-5 0x%X 0x%X 0x%X 0x%X 0x%X 0x%X
[MARCONI] _setDefaultCalVal: phyCalVal6-8 0x%X 0x%X 0x%X phyVrefVal 0x%X shift 0x%X 0x%X lockVal 0x%X
[MARCONI] _muxIF: rat[%d]
[MARCONI] _muxIF: RFD_DIF_LINK_CTRL[%x]
[MARCONI] _muxIF: Already use half clock, IsLPM(%d)
[MARCONI] _muxIF: RFD_DIF_LINK_CTRL[%x]
[MARCONI] _muxIF: CON0_IPLL[0x%X]
[MARCONI] _muxIF: rat[%d], currentIPLL: 0x%X, rPHY_STAT0[0x%X]
[MARCONI] _muxIF: Already use full clock, IsLPM(%d)
[MARCONI] _muxIF: CON0_IPLL[0x%X]
[MARCONI] _muxIF: CON0_IPLL[0x%X]
[MARCONI] _muxIF: RFD_DIF_LINK_CTRL[%x]
[MARCONI] _muxIF: rat[%d], currentIPLL: 0x%X, rPHY_STAT0[0x%X]
[MARCONI] _muxIF: rat(%d) is_enabled_dfs_in_lpm(%d) currentIPLL(%d)
[MARCONI] _wait_mcwulmutex: wait_cnt=%d t0turn=%d t0[0]=%d t0[1]=%d t1turn=%d t1[0]=%d t1[1]=%d
[MARCONI] _configLinkChannel: rat[%d] path[0x%06X] enable[%d]
[MARCONI] _configLinkChannel: Abnormal argument - rat[%d]
[MARCONI] _configLinkChannel: Skip channel configuration - rx_filt_config_current[0x%08X] rx_filt_config[0x%08X]
[MARCONI] _configDValidRate: rat[%d] path[0x%06X] rate[%d]
[MARCONI] _configDValidRate: MCW_CTRLS_0_DL_DVALID_USER[0x%08X]
[MARCONI] _configDValidRate: cursor[%d] MCW_CTRLS_0_DL_DVALID_x[0x%08X]
[MARCONI] _configDValidRate: MCW_CTRLS_0_DL_DVALID_F[0x%08X]
[MARCONI] _configLinkChannel: Abnormal argument - rat[%d]
[MARCONI] _configMVS: mode[0x%04X] enable[%d] gMarcDB.MVS_enable[%d]
[MARCONI] _configMVS: pal_Dvfs[%d] + %d us
[MARCONI] _configDIFDFS: mode[0x%04X] enable[%d] gMarcDB.DFS_enable[%d]
[MARCONI] _configDIFDFS: RFD_DIF_DFS_MODE[0x%08X]
[MARCONI] _configDIFDFS: RFD_DIF_DFS_MODE set to 0x1
[MARCONI] _configDIFDFS: RFD_DIF_DFS_MODE[0x%08X]
[MARCONI_UL] _ulInit, GNSS_FLAG[%d] isInitDoneMcw[%d]
[MARCONI UL] _ulInit: phyCalVal0-5 0x%X 0x%X 0x%X 0x%X 0x%X 0x%X
[MARCONI UL] _ulInit: phyCalVal6-8 0x%X 0x%X 0x%X phyVrefVal 0x%X shift 0x%X 0x%X
[MARCONI UL] _ulInit: INTR_STS[0x%08X] currentIPLL[%d]
[MARCONI UL] _ulInit: SKIP MARCONI INIT(%d)
[MARCONI_UL] _ulSleep, GNSS_FLAG[%d] isInitDoneMcw[%d]
[MARCONI] _ulSleep: RFD_DIF_LINK_CTRL[%x]
[MARCONI_UL] _ulIrat : rat %d path %d
[MARCONI_UL] _ulIrat: RFD_DIF_LINK_CTRL 0x%08X
[MARCONI_UL] _ulIrat: sts[0x%08X] chsts[0x%08X] EOT[0x%08X] CRC[0x%08X]
[MARCONI_UL] _ulIrat: TXF - ULx_VALID_CLK[0x%08X][0x%08X]
[MARCONI_UL] _ulIrat: MCW_CTRLS - ULx_VALID_CLK[0x%08X][0x%08X][0x%08X][0x%08X][0x%08X]
[MARCONI_UL] _ulCheck
[MARCONI_UL] _ulCheck: can't use RFD UL MARCONI. RFD_GPSLAVE_PHY_CTRL 0x%08X
[MARCONI_UL] _ulCheck: crashOn %d VALID_CLK 0x%08X DVALID_CLK 0x%08X INTR_STS 0x%08X EOT_ERR_CNT 0x%08X CRC_ERR_CNT 0x%08X
[MARCONI_UL] _dump : START
[MARCONI_UL] _dump : END
[MARCONI UL] _ulSetDefaultCalVal: ulPhyCalVal-5 0x%X 0x%X 0x%X 0x%X 0x%X 0x%X
[MARCONI UL] _ulSetDefaultCalVal: ulPhyCalVal-8 0x%X 0x%X 0x%X ulPhyVrefVal 0x%X shift 0x%X 0x%X
[MARCONI UL] _ulBackupCalVal: phyTxCalVal0-5 0x%X 0x%X 0x%X 0x%X 0x%X 0x%X
[MARCONI UL] _ulBackupCalVal: phyTxCalVal6-8 0x%X 0x%X 0x%X phyVrefVal 0x%X shift 0x%X 0x%X marconi_ul_tx_rx_hw_cal 0x%X
[MARCONI_UL] _ulMonitor: VALID_CLK0[0x%08X] DVALID_CLK0[0x%08X] MCW_CTRLS_UL_FIFO_EN_0[0x%08X] MCW_CTRLS_UL_VALID_0[0x%08X] CH2_CONFIG[0x%08X] EOT_ERR_CNT[0x%08X] CRC_ERR_CNT[0x%08X]
[MARCONI_UL] _ulMonitor Rx: INTR_STS[0x%08X] CH_INTR_STS[0x%08X] CH1_STS[0x%08X] CH2_STS[0x%08X] CH3_STS[0x%08X] CH4_STS[0x%08X]
[MARCONI UL] _ulConfigLinkChannel: rat[%d] path[0x%06X] enable[%d]
[MARCONI UL] _ulConfigLinkChannel: Abnormal argument - rat[%d]
[MARCONI] _NullFunc: arg r0 = 0x%08X, r1 = 0x%08X, r2 = 0x%08X, r3 = 0x%08X, lr = 0x%08X, gMarcDB.is_support_fr2 = 0x%08X, HPCM(MARCONI_MMW) = 0x%04X, fr2_support = %d
