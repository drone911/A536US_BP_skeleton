[RF DBG] =================== GPIO Dump START ===================
[RF DBG] GPIO size:%d RFIO state:0x%x
[RF DBG] [%s] [gpio%d] [%s] [%s] [%s]
[RF DBG] [%s] [gpio%d] [%s] [%s] [%s] - XCP_ANT_SW%d
[RF DBG] =================== GPIO(TRX SW) Dump START ===================
[RF DBG] GPIO size:%d
[RF DBG] [%s] [gpio%d] [%s] [%s] [%s]
[RF DBG] [%s] [gpio%d] [%s] [%s] [%s] - XCP_ANT_SW%d
[RF DBG] TRX SW GPIO is not initialized!!! size(%d)
[RF DBG] ================ LNA Dump START (%s dev type)================
%s: Invalid usid[0x%x] or path[0x%x]
[RF DBG] LNA usid:0x%x mipi_ch:%d
[RF DBG] LNA Addr0:0x%x Addr1:0x%x Addr2:0x%x Addr3:0x%x Addr0x1C:0x%x
[RF DBG] LNA usid:0x%x mipi_ch:%d
[RF DBG] LNA Addr0:0x%x Addr1:0x%x Addr2:0x%x Addr3:0x%x Addr0x1C:0x%x
[RF DBG] [%s] [gpio%d] [%s] [%s] [%s]
[RF DBG] [%s] [gpio%d] [%s] [%s] [%s] - XCP_ANT_SW%d
[RF DBG] ================ PAM Dump START (%s dev type) ================
[RF DBG] PA usid:0x%x mipi_ch:%d
[RF DBG] PAM (addr 0x%x) 0x%x 0x%x 0x%x 0x%x
[RF DBG] PAM dump 0:0x%x 1:0x%x 2:0x%x 3:0x%x 1C:0x%x
[RF DBG] =================== GPIO PAM (Not Supported)===================
[RF DBG] =================== SHM Dump START ===================
[RF DBG] SM votage read error
[RF DBG] =================== SM Dump START ===================
[RF DBG] SM mode:%d voltage:%d
[RF DBG] ================ FEM Dump START (%s dev type) ================
[RF DBG] FEM TRX_type:%s usid:0x%x mipi_ch:%d
[RF DBG] FEM (addr 0x%x) 0x%x 0x%x 0x%x 0x%x
[RF DBG] FEM 0:0x%x 1:0x%x 2:0x%x 3:0x%x 4:0x%x 5:0x%x 6:0x%x
[RF DBG] FEM 7:0x%x 8:0x%x 9:0x%x A:0x%x B:0x%x C:0x%x 1C:0x%x
%s: Invalid usid[0x%x] or path[0x%x]
[RF DBG] FEM TRX_type:%s usid:0x%x mipi_ch:%d
[RF DBG] FEM (addr 0x%x) 0x%x 0x%x 0x%x 0x%x
[RF DBG] FEM 0:0x%x 1:0x%x 2:0x%x 3:0x%x 4:0x%x 5:0x%x 6:0x%x
[RF DBG] FEM 7:0x%x 8:0x%x 9:0x%x A:0x%x B:0x%x C:0x%x 1C:0x%x
[RF Drv] RF_Get_CPL: No CPL for CC%d
[RF DBG] ================ CPL Dump START ================
[RF DBG] Coupler Word#[%d/%d], MIPI Ch [%d], USID[0x%x], Addr[0x%x], Read[0x%x], rawData[0x%x]
[RF DBG] =================== RACH Fail Dump START ===================
RachCnt(%d) TransTTI(%d) Power(%d) GpadcVal(%d)
[RF DBG] =================== HIGH AGC Dump START ===================
[RF DBG] AGC of CC%d %s is %d, over %d
[RF DBG] AGC of CC%d %s is %d, under %d
[RF DBG] RF_DBG_High_IQC: cc%d iqc(%d, %d
[RF DBG] RF_DBG_Dump_abnormal_Tx: invalid trx_type(%d)
[RF] PD(PAM) : USID[%x] 0x0[%2X] 0x1[%2X] 0x2[%2X] 0x3[%2X] 0x4[%2X] 0x1C[%2X]
[RF] PD(PAM) : 0x1D[%2X] MIPI_Read(0x0, 0xD, 0x3)[%2X] MIPI_Read(0x0, 0xD, 0x1C)[%2X] MIPI_Read(0x2, 0xD, 0x3)[%2X] MIPI_Read(0x2, 0xD, 0x1C)[%2X]
[RF DBG] RF_DBG_Dump_abnormal_Tx: pd type[%d] Not supported
[Info] %s Band[%d][%d] RebuildCheck[%d] OriginalPDStageOffset[%d]
[Info] %s : Not need to rebuild
[Info] %s : Restore Start : StageOffset[%d]
[Info] %s : Abnormal gpadc => CRASH !!!!
[Info] %s Start : PDStageShift[%d dB] Original_offset[%d]
[RF Drv] RF_DBG_TX_Fail_CRASH_LTE : exception : cal status[%d] BigDataReport[%d]
[Info] RF_DBG_TX_Fail_CRASH_LTE : Invalide TX TYPE!!!
[Info] FBRX CONFIG[0x%x] FBRX GAIN[0x%x]
[Info] Modem State GSM[%d] HSPA[%d] LTE[%d] NR[%d] ULCA[%d]
[Info] SFN[%4d] CHTYPE[%d] PdStage[%x] GPADC[%6d] TXPOWER[%5d] PDPOWER[%5d] Diff[%5d]
[Info] SFN[%4d] PA mipi [0x%x 0x%x 0x%x 0x%x 0x%x] VCC[%3d]
[Info] SFN[%d] RXVALUE[%d] PATEMP[%d] CH[%d] Abnormal Counter[%d] Before CHTYPE[%d]
[Info] PLLSTATE[%d] TopConfig1[0x%x] TopConfig2[0x%x] MS[0x%x] NVOffset[%d] TX GAIN[0x%x]
[Info] RF_DBG_TX_Fail_CRASH_LTE : First Bigdata report
[Info] RF_DBG_TX_Fail_CRASH_LTE : Due to same band, skip bigdata report
[Info] RF_DBG_TX_Fail_CRASH_LTE Bigdata report !!!!
[Info] RFPD : PD Stage recover OriginalPDStageOffset[%d] StopFinetracking[%d]
[RF Drv] %s : Can't find Active CC with TxIdx %d => Dump Pcell CC%d
[RF Drv] %s : exception : cal status[%d] mtm[%d] BigDataReport[%d]
[NR Info] %s : Invalide TX TYPE!!!
[NR Info] FBRX CONFIG[0x%x] FBRX GAIN[0x%x]
[NR Info] SFN[%d] RXVALUE[%d] PATEMP[%d] CH[%d] Abnormal Counter[%d] Before CHTYPE[%d]
[NR Info] PLLSTATE[%d] SSPLLSTATE[0x%x] TopConfig1[0x%x] TopConfig2[0x%x] MS[0x%x] NVOffset[%d] TX GAIN[0x%x]
[NR Info] %s : First Bigdata report
[NR Info] %s Bigdata report !!!!
[CrashInfo] ================================= %s START===============================
[CrashInfo] uarfcn[%d] channelState[%d] rscp[%d]
[CrashInfo] Tx Lock[%d] Tx_topconfig1[0x%x] Tx_topconfig2[0x%x] Tx_gain[0x%x]
[CrashInfo] txPower[%d] pdPower[%d] pdadc[%d] temperature[%d]
[CrashInfo] PA Vcc[%d] PA Bias[0x%x] PA Mode[0x%x]
[CrashInfo] FBRX config[0x%x] FBRX gain[0x%x]
[CrashInfo HSPA] =================================E N D================================
[RF BDA] mipi device fail count %d
[RF BDA] mipi device fail count %d
[RF BDA] pam device count : %d
[RF BDA] rfic device count : %d, rfic : %d, pam : %d, rf device check done : %d
