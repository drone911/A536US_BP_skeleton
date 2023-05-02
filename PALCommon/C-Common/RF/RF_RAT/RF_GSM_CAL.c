[RF GSM] %s: CONDUCTION : %d
[RF GSM] %s GSM_SM_PATH : %d
[RF GSM] %s: CurrentTemp:%d, Pre_CurrentTemp:%d, READ current_gpadc:%d
[RF GSM] %s: : TxPwr1 = %d TxPwr2=%d pwr_offset=%d
[RF GSM] %s: powerlevel=%d, gainmode=0x%x
[RF GSM] %s: FBRX PD: TXPDCAL_TABLE[%d][%d] = %d
[RF GSM] %s : FBRX PD: TXPDCAL_TABLE[%d][%d] = %d
[RF GSM] %s: FBRX PD: TXPDCAL_TABLE[%d][%d] = %d
[RF GSM Tx] %s: FBRX Detector: Tx Pwr Detect=%d
[RF GSM Tx] %s: Tx PD CalValue = %d
[RF GSM] %s: Internal PD: TXPDCAL_TABLE[%d][%d] = %d PD_gain_Stage= %d
[RF GSM] %s: External PD: TXPDCAL_TABLE[%d][%d] = %d
[RF GSM] %s : Internal PD: TXPDCAL_TABLE[%d][%d] = %d PD_gain_Stage= %d
[RF GSM] %s : External PD: TXPDCAL_TABLE[%d][%d] = %d
[RF GSM] %s: Internal PD: TXPDCAL_TABLE[%d][%d] = %d PD_gain_Stage= %d
[RF GSM] %s: External PD: TXPDCAL_TABLE[%d][%d] = %d
[RF GSM Tx] %s: Internal Detector: Tx Pwr Detect=%d, PD_Gain_Stage=%d
[RF GSM Tx] %s: External Detector: Tx Pwr Detect=%d
[RF GSM] %s: Tx PD CalValue = %d
RF_GSM_TX_RF_CRASH, bda_init == 1, return
[CrashInfo GSM] =================================START================================
[CrashInfo] PDPOWER[%d] TXPOWER[%d] GPADC[%d] TxPowerLevel[%d] RXVALUE[%d]
[CrashInfo] CrashCounter[%d] RAT[%s] ARFCN[%d] CellID[%d] Temperature[%d] APT_EN[%d] APT_Voltage [%d]
[CrashInfo] PLLSTATE[0x%x] TopConfig[0x%x] TXgain[0x%x]
[CrashInfo] PA usid[0x%x] mipi ch[%d] 0[0x%x] 1[0x%x] 2[0x%x] 3[0x%x] 1C[0x%x]
[CrashInfo] SM usid[0x%x] mipi ch[%d] 0[0x%x] 1[0x%x] 2[0x%x] 3[0x%x] 1C[0x%x]
%s: bda_prev_band : %d, Txpd_Param.txband: %d
%s: call ns_dmUpdateBigDataRFPD
[CrashInfo GSM] =================================E N D================================
[RF GSM] %s: txpower_result: %d, TX_GPADC_cal_value: %d
[RF GSM] %s: FBRX_PD txpower_result: %d, TX_GPADC_cal_value: %d
[RF GSM] %s: INTERNAL_PD txpower_result: %d, TX_GPADC_minlevel_cal_value: %d, gsm_cal_val->Txpd_Param.TX_pd_powerlevel:%d
[RF GSM] %s: EXT_PD txpower_result: %d
%s: band=0x%x, path=0x%x, usid=0x%x, addr=0x%x, read=0x%x
%s: band=0x%x, path=0x%x, usid=0x%x, addr=0x%x, read=0x%x
%s: 0x%03x=0x%08x, 0x%03x=0x%08x
%s: 0x%03x=0x%08x, 0x%03x=0x%08x
%s: RFIC_Lock=0x%x, TxGain=0x%x
%s: addr=0x%03x, data=0x%08x, addr=0x%03x, data=0x%08x
%s: 0x%03x=0x%08x, 0x%03x=0x%08x
%s: 0x%03x=0x%08x, 0x%03x=0x%08x
%s: RFIC_Lock=0x%x, RxGain=0x%x, ACI=0x%x
%s: addr=0x%03x, data=0x%08x, addr=0x%03x, data=0x%08x
[RF GSM] %s: Tx PD IntPDCal_Ptatindex = %d
[RF GSM] %s: Tx PD GSM_IntPDCal_Rvalue_0 = %d, Rvalue_1 = %d, Rvalue_2 = %d, Rvalue_3 = %d
[RF GSM] %s: Tx PD Attvalue_1 = %d, Attvalue_1 = %d, Attvalue_1 = %d, Attvalue_2 = %d
[RF GSM] %s: sar_txbackoff: %d,
[RF GSM] %s: sar_edge_txbackoff: %d,
[RF GSM Tx] Invalid band! Please check L1 code (band=%d)
[RF GSM Tx] Invalid PCL! Please check L1 code (powerLevel=%d)
[RF GSM] %s: output(%d), RfOutLevel(0x%x), DGCIndex(%d), drvAmpGain(0x%x), drvAmpBias(0x%x)
[RF GSM] %s: Model Function DAC_I : [0x%x] and DAC_I : [0x%x] Value
[RF GSM] %s: Using NV Tuning DAC_I : [0x%x] and DAC_I : [0x%x] Value
[RF GSM Tx] rampTds_p->SM_MiPi_Path:%d, GSM_SM_PATH%d, cc->band_info.band: %s
[RF GSM Tx] in case of APT: APT_Voltage= %d, PAM_Power_Mode=%x, EXT= %d TxDGCindex:%d
[RF GSM Tx]sm_off_dis: APT_Voltage=%d, %d
[RF GSM] %s: GainUsed_from_L1 = 0x%x GSM_RX_LNA_En = %d
[RF GSM] %s: gpadc : %d, Band %d, adc_channel : %d
[RF GSM Tx] Powerlevel(PCL)=%d, PAM_GainMode=%s, PAM_GainMode_EXT(8gainmode)=%d
[RF GSM] %s: powerlevel=%d, gainmode=0x%x
[RF GSM] %s MTM_GSM_TX_INTPD_CAL : IntPDCal_Ptatindex = %d, txpower_result=%d
[RF GSM] %s MTM_GSM_TX_INTPD_CAL : IntPDCal_Ptatindex = %d, txpower_result=%d
[RF GSM] %s MTM_GSM_TX_INTPD_CAL : IntPDCal_Stage = %d IntPDCal_Attvalue= %d, txpower_result=%d
[RF GSM] %s MTM_GSM_TX_INTPD_CAL : IntPDCal_Stage = %d IntPDCal_Attvalue= %d, txpower_result=%d
[RF GSM] %s MTM_GSM_TX_INTPD_CAL : IntPDCal_Stage = %d IntPDCal_Rvalue= %d, txpower_result=%d
[RF GSM] %s MTM_GSM_TX_INTPD_CAL : IntPDCal_Stage = %d IntPDCal_Rvalue= %d, txpower_result=%d
[RF GSM Tx] PowerLevel(PCL):%d, BandIndex:%d, is8pskRamp:%d, numberOfSlots:%d, arfcn:%d, timeslotNumber:%d, slotlndex:%d
[RF GSM] %s RF_GSM_Tx_MaxPwr_Calc maxpwr:%d
[RF GSM] %s TxBackOffGap:%d = TxEpskMaxPwr:%d - maxpwr:%d
[RF GSM] %s TxBackOffGap:%d = TxPowerDbm[%d][%d]:%d - maxpwr:%d
[RF GSM] %s TxBackOffGap: %d = TxGmskMaxPwr: %d - maxpwr : %d
[RF GSM] %s TxBackOffGap:%d = TxPowerDbm[%d][%d]:%d - maxpwr:%d
[RF GSM Tx] TX_GPADC_cal_value: %d, PowerLevel=%d, slotlndex = %d
[RF GSM] %s: gsm_cal_val->Txpd_Param.TX_GPADC_min_pd_value[%d]= %d
Limited TX power!! AlphaPowerDbm:%d, alpha_pwrgap:%d
Limited TX power!! AlphaPowerDbm:%d, alpha_pwrgap:%d
[RF GSM] : maxpower: %d = TxEpskMaxPwr: %d + TxMaxEpskPwrOffset: %d -( TxPowerDbm:%d - TxBackoff: %d) - TxEPSKMPR: %d
[RF GSM] %s: maxpower: %d = TxGmskMaxPwr:%d + TxMaxPwrOffset:%d -( TxPowerDbm:%d - TxBackoff:%d) - TxGMSKMPR:%d
[RF GSM] %s: maxpower: %d , TxMaxPwrRadBackOff:%d,
[RF GSM] %s: maxpower: %d , antsw_maxpwr:%d, AntennaSwitchEnable:%d, ghal_GetL1CfgAntSwitchingModeReturnValue:%d,
[RF GSM] %s: TASAR Enable, maxpower : %d, TA_SAR_TxBackOffValue : %d
[RF GSM] %s: maxpower: %d , MaxPwr_TxCalculatedCorrectionTable[%d]: %d,
[RF GSM Tx] %s: tmp_gainindex :%d , gain_index:%d, comp_value:%d
[RF GSM Tx] CurTemp(%d), CalTemp(%d), txpwr_comp(%d)
[RF GSM Tx] TxBackOffGap=%d, EdgePamPm=0x%x, gain_index=%d, gain_index(ch/temp/backoff)=%d, TxGMSK_MaxPwrDbm=%d
[RF GSM] %s: BandIndex:%d, battdet_channel:%d, num_gsm_sm:%d
[RF GSM] %s: BandIndex:%d, battdet_channel:%d, num_gsm_sm:%d
[RF GSM] %s: volt_compgap:%d, slope:%d, volt_avg:%d, battdet_channel:%d, num_gsm_sm:%d
[RF GSM Tx] Final Tx RFIC index_code(Voltage compensated PowerLevelCode): %d
[RF GSM] %s = palReadVolt:%d, returnVolt:%d
[RF GSM Tx] Voltage GPADC:%d, Volt(VBAT):%d , battdet_channel : %d
[RF GSM] %s: PowerLevel:%d, BandIndex:%d, is8pskRamp:%d, , PowerLevelCode:%d, tmpArfcn:%d
[RF GSM] %s: EdgePamPm[0x%x], compGap[%d], compCnt[%d]
