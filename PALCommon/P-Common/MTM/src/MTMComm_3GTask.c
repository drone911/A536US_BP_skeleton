EHalRfOnCmd exec() failed errCode %d addErrCode %d
MTMCOMM_3GTask_dummyCallback
MTMCOMM_3GTask_RFOn!
Rf Turning Onn
FSM_RAKE_FAKE_SYNC: Error %d, Additional Error %d
MTMCOMM_3GTask_RFOn Finished
[MTMCOMM_3GTask] %s: %s
[MTMCOMM_3GTask]#0 MTMCOMM_3GTask_Set_FBRX Start
[MTMCOMM_3GTask] Band[%d] %s: %s Start
[MTMCOMM_3GTask] Band[%d] %s: %s dsp_control: %d, swap : %d
RxUarfcn_Check: uarfcnCmd Status Not Idle From Fun = %s
RxUarfcn_Check: uarfcnCmdhandler Status Not Idle From Fun = %s , possibly RF SYNTH HISR didnt arrive yet for previous rfrxuarfcn command
RxUarfcn_Check: uarfcnCmdhandler Status Idle From Fun = %s
MTMCOMM_3GTask_fakeCellSync: sendResponseToUphyToken did not get time to run, so clear it
EHalRfRxUarfcnCmd: success rxUarfcn =%d
EHalRfRxUarfcnCmd: Error %d, Additional Error %d
FAIL: MTMCOMM_3GTask_fakeSyncSetRl
EHalDlRlConfigCmd: Error %d, Additional Error %d
EHalDlFingerConfigCmd: Error %d, Additional Error %d
RXUARFCN=%d TXUARFCN=%d gTx_swap=%d RFBand=%d sm_path %d
TestMode: ulChannel is created
[MTM_3G_CAL][c] FakeSync+Tx Start : UARFCN[%d/%d] gTx_swap[%d] RFBand[%d] modemTestMode[%d] Band[%d]
ERROR: 3GTask_TxPerStart modemTestMode %d
TestMode: call TX DC cal restore function..CurrentRfBandClass=%d
TestMode: ulChannel is created
gTx_swap=%d
PaBias[%d] %d, bandInfo%d
PaBias %d, bandInfo%d , paHighGain %d
DacCtrlVal %d, bandInfo%d , freqInfo %d
[MTM_3G_CAL][c] InternalRefPower : index[%d]
start erasing ET NV
[MTM_3G_CAL][c] InternalRefPower : Mode[%d] index[%d] offset[%d] refPower[%d] msrdPower[%d]
[MTM_3G_CAL][c] InternalRefPower : Mode[%d] offset[%d] targetPower[%d] targetPwr_org[%d]
MTMCOMM_3GTask_SetTxpower_FixedVcc Txp : %d, %d refoffset : %d, %d
MTMCOMM_3GTask_SetTxpower_FixedVcc target : %d, RFIC index : %d DGC : %ddB [0x%x], offset : %d
SetTxpower Fail Warning !!!! paMode = 0x%x
SetTxpower Fail Warning !!!! point_APT_tx array index = 0x%x
Target : %d =>Band:%d, paMode: %d RFIC(idx) : %d, DGC(x10dB) : %d, Vcc : %d Bias : 0x%x
[MTM_3G_CAL][c] find apt cal : PA mode[%s] Band[%d] Total index[%d]
[APTUNE] MTMCOMM_3GTask_TuneAPTPower Rfix idx %d, stage %d, DGC val %d
[MTM_3G_CAL]#8 MTMCOMM_3GTask_Update_RFIC_Gain, from RFIC idx %d, offset = %d
[MTM_3G_CAL][c] set apt pwr : Target Pwr[%d] Set Pwr[%d] paMode[%d] RFIC Gain[%d], DGC(x10)dB[%d], Vcc[%d] Bias[%d]
Ati_SetAPTTxIndex Fail Warning !!!! paMode = 0x%x
Ati_SetAPTTxIndex Fail Warning !!!! point_APT_tx array index = 0x%x
MTMCOMM_3GTask_Ati_SetAPTTxIndex: APTCalPtsAt : %d APTCalStartPt : %d paMode:%d,
Target : %d =>Band:%d, paMode: %d RFIC idx : %d, DGC(x10)dB : %d, Vcc : %d Bias : %d
Measured TX Power(AT+HMSRDTXPOWER)= %d
[MTM_3G_CAL][c] getfbrx[%d] : Init Val[%d] Updated Val[%d] msrdFBRX[%d]
[MTM_3G_CAL][c] GET_FBRX_VAL_FAIL : msrdFBRx[%d]
MTMCOMM_3GTask_PDADC : Tx power is unstable. Try again[%d/7] index%d tempPDADC : %d lastPDADC : %d gap : %d
[MTM_3G_CAL]#5 FBRX FREQ CAL WRITE : MsrdFBVal[%d] DAC_POWER[%d]
Flag : %d
TxP_dbm : %d pos:%d, PD pts:%d, PDADC:%d
%s ERR : Undefined Band
%s ERR : No Attenuation Calibration!!!
[MTM] %s : bias_index[%d] measuredPDAGC[%d]
[MTM] %s : Overflowed!!!
[MTM] %s : exit by pdadc peak
[MTM] %s : exit by pdadc overflow
[MTM] %s : exit by pdadc peak
[MTM] %s : Cannot Saturate RFIC chip!!!
[MTM] %s : exit by using stable index
[MTM] %s : BAD PDADC, lock PD measure sequence
[MTM] %s : BAD PDADC, using unstable index
[MTM] %s : bias_index[%d] measuredPDADC[%d]
[MTM] %s : BAD PDADC, using unstable index
[MTM] %s : optimal_bias_index[%d] optimal_measuredPDADC[%d]
MTMCOMM_3GTask_MsrdInternalPDADC Stage : %d R: %d DCCAL : %d
%s ERR : No Attenuation Calibration!!!
[MTM] %s : atten[%d] measuredPDAGC[%d]
%s start
MTMCOMM_3GTask_MsrdInternalPDADC Stage : %d R: %d PDAGC : %d
MTMCOMM_3GTask_MsrdInternalPDADC Stage : %d R: %d DCCAL : %d
MTMCOMM_3GTask_MsrdInternalPDADC Stage : %d R: %d DCCAL : %d
MTMCOMM_3GTask_MsrdInternalPDADC ReadPDAGC : %d
%s Error - PDAGC Overflow : %d stage[%d]
%s END
APTCalStartPt : %d,APT_index:%d , Target_Pwr: %d Mesrd Pwr : %d Saved Pwr : %d
APT_index %d APTCalPt %d APTCAL_StartValue %d
gain mode %d temp1 %d temp2 %d gap %d gapPALowGain %d
gainMode %d Measured power : %d Traget power :%d
[%d] APTCAL_StartValue %d Now %d Msrd %d gap %d
[%d] temp1 %d temp2 %d gap %d
MTMCOMM_3GTask_SAMsrdAPTTxPower : pa_Mode : %d Startpts %d APT_index %d Target Pwr %d txPower %d
Flag : %d
TxP_dbm : %d pos:%d, PD pts:%d
txPowerCalPtsAt:%d
TxAPTBuild Fail Warning !!!! paMode = 0x%x
TX APT BUILD [2] targetPower %d
MTMCOMM_3GTask_TxAPTBuild LPM Target : %d
MTMCOMM_3GTask_TxAPTBuild LPM gap: %d
MTMCOMM_3GTask_TxAPTBuild Gain : %d gap: %d
MTMCOMM_3GTask_TxAPTBuild : TxP : %d, RF_Gain : %d VCC : %d paMode %d
PA mode : %d (0:Low 2: High) Band : %d Total index [APT: %d]
TX AGC APT [2] targetPower %d
Target Power : %d Require Tx Power(with fixed Vcc) : %d j=%d [APT: %d]
PAM_Bias_SetValue[%d/%d] : %d, %d,
Frist Target : %d RF gain : %d Vcc : %d
paMode : %d bandArea:%d registryOffset:%d txPowerCalPtsAt:%d offset:%d
[MTM_3G_CAL]#4 BuildFBRX[%d] : gap[%d] FBRXPower[%d] TxPower[%d] StartOffset[%d]
[MTM_3G_CAL]#4 BUILD FBRX TABLE END!! FBRxGain[%d] calvalue[%d]
paMode : %d bandArea:%d registryOffset:%d txPowerCalPtsAt:%d
[MTM_3G_CAL]#3 RFIC GAIN CAL START!!
[MTM_3G_CAL]#3 RFIC GAIN CAL error!!! Band[%d] CAL_DUMP start!
[MTM_3G_CAL]#3 RFIC GAIN CAL error!!! Band[%d] CAL_DUMP end!
[MTM_3G_CAL]#3 RFIC GAIN CAL END!! Band[%d]
[MTM_3G_CAL]#3 band index[%d] Change lpm cal pts [%d]->[%d]
[MTM_3G_CAL]#3 LPM %d [Before]
[MTM_3G_CAL]#3 %d %d %d %d %d
[MTM_3G_CAL]#3 LPM %d [After]
[MTM_3G_CAL]#3 %d %d %d %d %d
[MTM_3G_CAL]#8 dpd_update_sel = MTM_CC0[0x%x] MTM_CC1[0x%x]
[MTM_3G_CAL]#8 PA MODE[%s] BAND[%d]
[MTM_CDMA_CAL]#8 Searching NV_idx : nv_idx[%d], start_pwr[%d]
[MTM_3G_CAL]# MPM : msrdTxp[%d] i[%d], [%d][%d]
[[MTM_3G_CAL]# HPM : msrdTxp[%d] i[%d], [%d][%d]
[MTM_3G_CAL]#8 APT CAL : fbrx_gain[%d] cal_val_diff[%d]
[MTM_3G_CAL]#8 APT CAL Band[%d] DAC_POWER[%d] targetPower[%d]
gainRange[0][1] = %d, gainRange[1][0] = %d
[MTM_3G_CAL]#8 APT CAL error!!! Band[%d] CAL_DUMP start!
[MTM_3G_CAL]#8 APT CAL error!!! Band[%d] CAL_DUMP end!
[MTM_3G_CAL][c] FBRX_measure error!!
[MTM_3G_CAL]#9 TxFreqCh[%d] Set power[%d] FBRX[%d] Msrd Txp(x10 dBm) [%d]
[MTM_3G_CAL]#9 TX FREQ CAL Band[%d] DAC_POWER[%d] freq[%d]
[MTM_3G_CAL]#9 TX FREQ CAL error!!! Band[%d] CAL_DUMP start!
[MTM_3G_CAL]#9 TX FREQ CAL error!!! Band[%d] CAL_DUMP end!
MTMCOMM_3GTask_txTransmissionSwitch
MTMCOMM_3GTask_AntSwSelect
MTMCOMM_3GTask_buildTxDcCalFinal::Wrong fci gain
Generated DC Cal value for gain(%d) = 0x%x(%d)
Received TX uarfcn = %d
numOfTxFreqCal %d uarfcn %d txPower %d paMode %d
idx, numOfTxMultiChCal %d uarfcn %d txPower %d paMode %d
numOfTxFreqCal %d
numOfTxFreqCal %d
registrationUhalWithMiniRouter excuted
uhal_TmpDataHandler0 is called
uhal_TmpDataHandler1 is called
uhal_TmpDataHandler2 is called
uhal_TmpDataHandler3 is called
uhal_TmpDataHandler4 is called
uhal_TmpDataHandler5 is called
DoneCnt %d HwScrCode %d scCodeEng %d scrCodeFb %d
DoneCnt %d FoundPathCnt %d EcIo %d Rscp %d
pathNumber %d Offset %d Eng %d
MTMCOMM_3GTask_Searcher_Check_Result Cmd %d Clear Executed num_paths %d FoundPathCnt %d
MTMCOMM_3GTask_Searcher_Check_Result: Error %d, Additional Error %d
EHalDlPhychReleaseCmd: Error %d, Additional Error %d
EHalDlRlReleaseCmd: Error %d, Additional Error %d
Clear Searcher & Rake Cmd
MTMCOMM_3GTask_RxDiversityControl: FA_Mode=%d
RealCellSync rxUarfcn %d searcherPathOffset %d
RealCellSync state %d
RxUarfcn_Check: uarfcnCmd Status Not Idle From Fun = %s
RxUarfcn_Check: uarfcnCmdhandler Status Not Idle From Fun = %s , possibly RF SYNTH HISR didnt arrive yet for previous rfrxuarfcn command
RxUarfcn_Check: uarfcnCmdhandler Status Idle From Fun = %s
MTMCOMM_3GTask_RealCellSync: sendResponseToUphyToken did not get time to run, so clear it
EHalRfRxUarfcnCmd: Error %d, Additional Error %d
RealCellSync state %d print rake state
FSM Finished::: So do nothing go happily :-)
downlinkRxCalPower %d
read I %d, Q %d
Wrong state %d
[ET_Cal] MTMCOMM_3GTask_TXETCAL_UpdateResult band %d, cal type %d, tx type %d
[ET_Cal] Freq cnt : %d
[ET_Cal] Index[%d] Meas Freq[%d] Power[%d]
CALTIMER_SA: timeRfSA_old %d slot_time %d
CALTIMER_SA: timeRfSA_new %d set_time %d
CALTIMER_SA: timeRfSA_new %d set_time2 %d
AT+SETMAXPOWERreceived: txPower %d maxPower %d
AT+SETMINPOWER received
Inside MTMCOMM_3GTask_msrSensitivity()
MTMCOMM_3GTask_configAndStartDL and State=%d(FSM_DL_CONFIG)
Inside MTMCOMM_3GTask_configAndStartDL and State (FSM_DL_START_0)
Wrong phych_nr value %d
uhal_Test_DL: RlInfo D failed RL#%d %d
current_sfn %d test_info[0].max_tti %d, sfn mod 4=%d sfn mod 2=%d
decodingPosition is %d
FAIL!!! EHalDlCctrchEnableCmd
Started/Enabled Cctrch0
counter %d num_iterations %d data_received %d
Good CRC: %d, Bad CRC:%d Total Tr Blk:%d decodingPosition %d numOfDecodingPositionChange=%d
FSM Finished::: So do nothing go happily :-)
RMC12_2k: MTMCOMM_3GTask_msrSensitivity_sw_10ms_decoding_for_RMC12_2k called
RMC12_2k: uhal_RecDataFuncPtr reconfigured and sw_10ms_decoding_for_RMC12_2k=TRUE
RMC12_2k: MTMCOMM_3GTask_configAndStartDL and State=%d (FSM_DL_CONFIG)
FAIL!!! MTMCOMM_3GTask_TrchConfig
FAIL!!! MTMCOMM_3GTask_CctrchConfig
RMC12_2k: Inside MTMCOMM_3GTask_configAndStartDL and State (FSM_DL_START_0)
Wrong phych_nr value %d
uhal_Test_DL: RlInfo D failed RL#%d %d
RMC12_2k: current_sfn=%4d, next_sfn=%4d, max_tti=%d, sfn mod (max_tti)=%d
RMC12_2k: cctrch0 and cctrch1 configuration done. Need to enable them
RMC12_2k: current_sfn=%4d, next_sfn=%4d, cctrch 0 and 1 will be enabled
FAIL!!! EHalDlCctrchEnableCmd
FAIL!!! EHalDlCctrchEnableCmd
RMC12_2k: cctrch0 and cctrch1 enabled
RMC12_2k: cctrch0 num_iterations=%d, cctrch1 num_iterations=%d
RMC12_2k: rmc12_2k_received[0]=%d, rmc12_2k_received[1]=%d, test_info[0].counter=%3d, test_info[1].counter=%3d
RMC12_2k: FSM Finished::: So do nothing go happily :-)
DCH channel should have following charactersitics to decode properly
Chan Code:%d,Slot Format:EUmtsDlDpchSlotFormat_11,CRC:Asn_crc16,TTI:Asn_tti20
RMC 12.2k channel should have following charactersitics to decode properly
CcTrCH 0: Chan Code:%d, Slot Format:EUmtsDlDpchSlotFormat_11, CRC:Asn_crc16, TTI:Asn_tti20
CcTrCH 1: Chan Code:%d, Slot Format:EUmtsDlDpchSlotFormat_11, CRC:Asn_crc16, TTI:Asn_tti20
TRCH%d: Trbk Received: %d Good CRC: %d Bad CRC: %d
TrBlk %d,Bad Crc %d
bler %d TrBlk %d,Bad Crc %d
Bit error counter %d Total bit %d
BER percentage %d %d (x1000)
RMC12_2k: cctrch%d, TRCH=%d:(for Ref) Total Trbk Received=%3d CRC Ok=%3d CRC fail=%3d
RMC12_2k: cctrch%d, TRCH=%d: Upto 100 PDUs: Trbk Received=%3d CRC Ok=%3d CRC fail=%3d BLER=%8d (x100000)
RMC12_2k: cctrch%d, Upto 100 PDUs: TotalNoOfBitErrors=%6d, TotalNoOfRcvdBits=%6d BER(percentage)=%d, BER(x100000)=%8d
MTMCOMM_3GTask_PhychRlConfig: phych_nr %d ovsf %d multi_code_num=%d SF=%d Slot Format=%d
Phych config failed
MTMCOMM_3GTask_PhychRlConfig: offset_to_cpich=%d, sec_src_code_used=%d, scramblingCodeChange=%d
MTMCOMM_3GTask_CctrchConfig: cctrch_nr=%d,dtx_pos_fixed=%d,cctrch_type=%d,btfd_active=%d,tfc_num=%d
MTMCOMM_3GTask_TrchConfig: trch_nr=%d,coding=%d,coding_rate=%d,crc_size=%d,rate_matching=%d,tti=%d,TF=%d
Trch config failed
uhal_ReceiveData cctrch_index %d lmac_int_src %d test_info[0].counter %d
uhal_ReceiveData cctrch_index %d lmac_int_src %d
uhal_ReceiveData:Array index out of bound num_trch=%d
FAIL!!!! EHalDataCctrchDecodedInfoCmd
uhal_ReceiveData:Array index out of bound num_trch=%d
RMC12_2k: Warning !! cctrch_index=%d
FAIL!!!! EHalDataCctrchDecodedInfoCmd
data[%d] 0x%x pattern_ptr[%d] 0x%x
RMC12_2k: cctrch%d, rmc12_2k[%2d]=0x%x Pattern[%2d]=0x%x,
RMC12_2k: trial %3d, TRCH=%d:(for Ref) Total Trbk Received=%3d, CRC Ok=%3d, CRC fail=%3d
RMC12_2k: cctrch%d, TRCH=%d: Upto 100 PDUs: Trbk Received=%3d, CRC Ok=%3d, CRC fail=%3d, TotalNoOfBitErrors=%6d, TotalNoOfRcvdBits=%6d
SearcherStep1
SearcherBuffer
SearcherStep3
SearcherComplete
SearcherMP
Slot time error!!! Tx power off
MTMCOMM_3GTask_InternalTxRFICTimer::Channel deleted finished TX smart allignment for gain sweep
Slot time error!!! Tx power off
MTMCOMM_3GTask_InternalTxPDPowerSetTimer : Target_Power : %d, Stop_Power : %d
MTMCOMM_3GTask_InternalTxPDPowerSetTimer::Channel deleted finished TX smart allignment
Slot time error!!! Tx power off
PD measure error!!! Error code : %d off
MTMCOMM_3GTask_InternalTxPDPowerTimer : Target_Power : %d, R_flag = %d Stop_Power : %d
MTMCOMM_3GTask_InternalTxPDPowerTimer::Channel deleted finished TX smart allignment
[MTM_3G_CAL]#5 FBRX FREQ TIMER : Tx Freq[%d] Freq Step[%d]
[MTM_3G_CAL][c] Slot time error!!! Tx power off
[MTM_3G_CAL]#5 FBRX FREQ CAL error!!! Band[%d] CAL_DUMP start!
[MTM_3G_CAL]#5 FBRX FREQ CAL error!!! Band[%d] CAL_DUMP end!
[MTM_3G_CAL]#5 FBRX FREQ CAL END!! Band[%d]
[MTM_3G_CAL][c] Slot time error!!! Tx power off
[MTM_3G_CAL][c] FBRX_measure error!!
[MTM_3G_CAL]#4 InternalTxFBRXPower : Band[%d] [%d/5] RFIC index[%d] FBRX gain[0x%x] Msrdvalue[%d] StartOffset[%d]
[MTM_3G_CAL]#4 FBRX CAL Band[%d] DAC_POWER[%d] i[%d/5]
[MTM_3G_CAL]#4 FBRX CAL error!!! Band[%d] CAL_DUMP start!
[MTM_3G_CAL]#4 FBRX CAL error!!! Band[%d] CAL_DUMP end!
[MTM_3G_CAL]#4 FBRX GAIN CAL END!! Band[%d]
MTMCOMM_3GTask_TimerSet :: Timmer is already on!!
MTMCOMM_3GTask_TimerSet :: Timmer is already off!!
MTMCOMM_3GTask_StartTimer Timer : %d task : %d
[MTM_3G_CAL][c] Tx Cal Setup : Band[%d] Set Vcc[%d] Set Bias[%d/%d]
[MTM_3G_CAL][c] Tx Cal Setup : Band[%d] Set Vcc[%d] Set Bias[%d/%d] sm_path %d
MTMCOMM_3GTask_InternalTxPDPowerReady[err %d]:: stage%d, GPADC %d, TIA_R %d
MTMCOMM_3GTask_DynamicInternalPD : Target_Power : %d, R_flag = %d stage : %d TIA_R : %d num : %d GPADC : %d
[MTM_3G_CAL][c] FBRX_measure error!!
MTMCOMM_3GTask_InternalTxFBRXPower:: [%d/5] RFIC index %d Rxgain 0x%x Msrdvalue %d
@@@@@@@@@@@@@@@@@@@@MTMCOMM_3GTask_SATxGainSweep:Timer not deleted last time
MTMCOMM_3GTask_SATxGainSweep:Not able create tCalTimer timer
RF locked and Tx Started rx uarfcn %d tx uarfcn
MTMCOMM_3GTask_SATxGainSweep:Tsetup must be 0
Slot time error!!! Tx power off
MTMCOMM_3GTask_SATxGainSweepTimer::Channel deleted finished TX smart allignment for gain sweep
Slot time error!!! Tx power off
MTMCOMM_3GTask_SATxGainFullSweepTimer::Channel deleted finished TX smart allignment for gain sweep
@@@@@@@@@@@@@@@@@@@@MTMCOMM_3GTask_SATxGainFullSweep:Timer not deleted last time
MTMCOMM_3GTask_SATxGainFullSweep:Not able create tCalTimer timer
MTMCOMM_3GTask_SAPDCal:Timer not deleted last time
MTMCOMM_3GTask_SAPDCal:Not able create tCalTimer timer
RF locked and Tx Started rx uarfcn %d tx uarfcn
MTMCOMM_3GTask_SAPDCal:Wrong Input
MTMCOMM_3GTask_SAPDCalTimer::Msrd GPADC= %d
MTMCOMM_3GTask_SAPDCalTimer::Channel deleted finished TX smart allignment
@@@@@@@@@@@@@@@@@@@@MTMCOMM_3GTask_SATxPowerCal:Timer not deleted last time
MTMCOMM_3GTask_SATxPowerCal:Not able create tCalTimer timer
RF locked and Tx Started rx uarfcn %d tx uarfcn
MTMCOMM_3GTask_SATxPowerCal:Tsetup must be 0
Slot time error!!! Tx power off
APT CAL4 : Target_Power_Start : %d, Target_Power_Stop : %d
MTMCOMM_3GTask_SATxPowerCalTimer::Channel deleted finished TX smart allignment
Slot time error!!! Tx power off
MTMCOMM_3GTask_SATxAPTCalTimer:: Gain mode %d
MTMCOMM_3GTask_SATxAPTCalTimer:: i/j : %d/%d Tx_SA_msrdPts : %d Tx_SA_NowPts : %d Tx_SA_LastPts : %d comp : %d Tx_SA_TargetPower_Step : %d
MTMCOMM_3GTask_SATxAPTCalTimer::Channel deleted finished TX smart allignment
@@@@@@@@@@@@@@@@@@@@MTMCOMM_3GTask_SATxPowerCal:Timer not deleted last time
MTMCOMM_3GTask_SATxPowerCal:Not able create tCalTimer timer
MTMCOMM_3GTask_SATxFreqCal:Not able create tCalTimer timer
RF locked and Tx Started rx uarfcn %d tx uarfcn
MTMCOMM_3GTask_SATxFreqCal
MTMCOMM_3GTask_SATxFreqCal:Tsetup must be 0
Slot time error!!! Tx power off
Applied frequency=%d txSmrtAllCurrentFreq(%d) txSmrtAllFreqStep(%d)
Channel deleted finished TX smart allignmentfor frequency calibration
Slot time error!!! Tx power off
PD measure error!!! Error code : %d off
MTMCOMM_3GTask_SATxRFICPDCalTimer : Target_Power : %d, R_flag = %d Stop_Power : %d
MTMCOMM_3GTask_SATxRFICPDCalTimer::Channel deleted finished TX smart allignment
@@@@@@@@@@@@@@@@@@@@MTMCOMM_3GTask_SATxPowerCal:Timer not deleted last time
MTMCOMM_3GTask_SATxPowerCal:Not able create tCalTimer timer
MTMCOMM_3GTask_SATxMultiChCal:Not able create tCalTimer timer
RF locked and Tx Started rx uarfcn %d tx uarfcn
MTMCOMM_3GTask_SATxMultiChCal
MTMCOMM_3GTask_SATxMultiChCal:Tsetup must be 0
TxMultiChCal2 : txSmrtAllCurrentFreq: %d txSmrtAllFreqStep %d, tempFreqCal : %d
Slot time error!!! Tx power off
Applied frequency=%d txSmrtAllCurrentFreq(%d) txSmrtAllFreqStep(%d)
Tx_SA_TargetPower_Start = %d
SA multi_ch idx = %d offset =%d
TxMultiChCal3 : txSmrtAllCurrentFreq: %d txSmrtAllFreqStep %d, tempFreqCal : %d
Channel deleted finished TX smart allignmentfor frequency calibration
MTMCOMM_3GTask_LMTResponse msg %d antPathSelection %d
LMT_Uarfcn %d LMT_RSSI %d LMT_RSCP %d LMT_BER %d
msg memory allocation fail!!!!!
LMTToken state %d Sync num %d freq %d numOfZeroState %d antPathSelection %d
Sync Failure
LMTToken state %d Sync Wait & TxStart num %d freq %d
reSyncUarfcn %d syncWaitCounter %d
Sync Failure try again
LMTToken state %d Measure RSSI & RSCP num %d freq %d
LMT_RSSI[%d] %d LMT_RSCP[%d] %d
LMTToken state %d start to measure BER num %d freq %d
LMTToken state %d under measuring BER num %d freq %d
LMTToken state %d Done LMT_currentBER %d num %d freq %d
LMT_BER[%d ] %d
LMTToken state %d finish
LMTToken FSM Finished::: So do nothing go happily :-)
EHalRfRxUarfcnCmd: Error %d, Additional Error %d
[MTM_3G_CAL][c] Set ul uarfcn[%d]
Load cal data called
TxDCCal start bandInfo 0x%x (%d)
dcCalBand %d 0x%x %d
DC CAL ERROR : NO SUCH BAND %d Band_Class %d
S933 GSM TxDC_Cal index : BAND %d
BAND %d DC cal and IQ Imbalance calibration start
TxDCCal end : digital gain original value is %d
MTMCOMM_3GTask_ActiveOnly selectedAnt %d antPathSelection %d
Parameter value %d is invalid.(0~3)
Rscp %d RAKE_RSCP_OFFSET %d
FingerInfo Failed
Finger 0 in state %d position %d raw=%d EcIo=%d RSCP=%ddBm isLocked %s isPowerLocked %s
FingerInfo Failed
GetRxRscpDRX - Finger 0 in state %d position %d raw=%d EcIo=%d RSSI=%d RSCP=%d
uhal_CHmcp_GetAtiPhycTest_sendMsg2Ati: val2 = %d
NS_UMTS_RSSI_SCAN_REQ : HSPA_CAL_HSPATMSTART
NS_UMTS_RSSI_SCAN_REQ:: UL channel exists so delete it...
DSP AliveSo Disable it.!!!!!!!!!!!!!
DSP Dead So Do nothing!!!!!!!!!!
[process debug] NS_UMTS_RSSI_SCAN_REQ: 3G off
NS_UMTS_RSSI_SCAN_REQ - UmodemStatus is OFF so bypass
RF : MTMCOMM_3GTask_SendMsg2NS pal_MemAlloc fail
MTMCOMM_3GTask_SendMsg2NS length %d destType %d mbxDst %d
NS_UMTS_RSSI_SCAN_REQ : MTMCOMM_3GTask_RssiScan_sendMsg2NS pal_MemAlloc fail
NS_UMTS_RSSI_SCAN_REQ : MTMCOMM_3GTask_sendMsg2NS length %d destType %d mbxDst %d
Wrong rx frequency %d. couldn't convert right uarfcn. Return rxUarfcn %d
Wrong rx frequency %d. couldn't convert right uarfcn. Return rxUarfcn %d
Wrong uarfcn. couldn't find right frequency BAND. default set to high band rx_uarfcn %d
Wrong txBand. couldn't find right uarfcn. default set to tx_uarfcn %d rx_uarfcn
NS_UMTS_RSSI_SCAN_REQ : Rat is not correct(%d)
pal_TaskEntry_HSPA_CALIBRATION: pal_EMsgEntity_AS_SAP Msg Id %d
Task from NS : Message ID not correct
[MTM_3G_CAL]#1 DC CAL BAND %d START!!
S955 TxDC_Cal index : BAND 2
S955 TxDC_Cal index : BAND 5
TX2 DC cal and IQ Imbalance calibration bandInfo%d Tx2bandInfo%d
BAND %d DC cal and IQ Imbalance calibration done / Tx2bandInfo %d TX SWAP %d
All BAND DC cal and IQ Imbalance calibration done
Before Changing digital gain original value is %d
After Changing digital gain original value is %d
[MTM_3G_CAL]#1 DC CAL END!! Band[%d]
[MTM_3G_CAL]#2 IIP2 CAL START!!
Received msg id is HSPA_CAL_IIP2CAL:Band Info=%d
Tx Uarfcn %d IIP2 calibration done
Return I_DAC %d , Q_DAC %d
Returnd Q *(u16 *)msg = %d, len = %d
[MTM_3G_CAL]#2 IIP2 CAL END!! Band[%d]
Received msg id is AT+HRETPDSATABLE and Too many stage number %d
Received msg id is AT+HRETPDSATABLE and Too many index number %d
HSPA_CAL_GETFBRX : start!!!!
HSPA_CAL_MSRFBRX : MEM Alloc fail!!!!
fbrx_path %d HSPA_CAL_GETFBRX : end!!!!
Received msg id is HSPA_CAL_SETPDPOWER Target_PDAGC : %d |Max_PDAGC : %d |TxP : %d | Stage : %d | R_flag : %d| wait : %d
msg memory allocation fail!!!!!
msg memory allocation fail!!!!!
msg memory allocation fail!!!!!
Received msg id is HSPA_CAL_HPDRETPWR
Received msg id is AT+HSETPDPOWER and Too many PD pts %d
HSPA_CAL_INBUILDRFIC:: Pa_mode=%d, Num_cal_pt=%d
HSPA_CAL_INBUILDRFIC:: msrd_Pwr=%d
HSPA_CAL_INBUILDRFIC:: HPM_Pwr=%d , offset[0] = %d
msg memory allocation fail!!!!!
msg memory allocation fail!!!!!
[MTM_3G_CAL]#4 BUILD FBRX TABLE START!!
Received msg id is HSPA_CAL_BUILDFREQTX and Too many Cal Pointer %d
AT+HSPITEST received.spiData=0x%x,M=%d,K=%d,N=%d,readAddr=0x%x,reg1=%d,reg2=%d,
Read Result(address 0x%x)=0x%x
AT+HSPITEST:Error Counter=%d
[%d]:InnerLoopIndex=%d OuterLoopIndex=%d
Received msg id is HSPA_CAL_HTXAPTTUNE DSP PD ctrl en state[%d]
[APTUNE] Cal Target power error !!
[APTUNE] RFComm_InternalPD_Gpadc2Txp error!!
[APTUNE :: FreqCal] Index %d Freq %d PDval %d Msrd Txpower %d PD Tx Power %d PD comp offset %d
[MTM_3G_CAL][c] FBRX_measure error!!
[APTUNE :: PowerSet] Power err %d Setpower %d Msrd Txp %d dbg info %d
Received msg id is HSPA_CAL_MIPIREAD
msg memory allocation fail!!!!!
Received msg id is HSPA_CAL_MIPIWRITE
msg memory allocation fail!!!!!
HSPA_CAL_HSaBuildAPTTable:: num_PAmode=%d Pa_mode=%d, Num_cal_pt=%d
HSPA_CAL_HSaBuildAPTTable:: msrd_Pwr=%d
HSPA_CAL_HSaBuildRFICTable:: Pa_mode=%d, Num_cal_pt=%d
HSPA_CAL_HSaBuildRFICTable:: msrd_Pwr=%d
HSPA_CAL_HSaBuildRFICFullTable:: Pa_mode=%d, Num_cal_pt=%d
INFO:pal_TaskEntry_HSPA_CALIBRATION: Error in Message receiving!!!!
pal_TaskEntry_HSPA_CALIBRATION: NULL messgae received
INFO:pal_TaskEntry_HSPA_CALIBRATION: Message received. Msg Id %d
Message ID not correct
uhal_sendMsg2AtiTask:pal_MemAlloc fail
uhal_sendMsg2AtiTask:pal_MemAlloc fail
power_detector %d
power_detector %d
MTMCOMM_3GTask_hspaTmStart gpadc read en
MTMCOMM_3GTaskConfigTM
MTMCOMM_3GTaskSetDSPTPC %d
MTMCOMM_3GTask_InternalTxAPTPower[i:%d] [trial : %d] Set power : %d PDAGC : %d Msrd Txp[%d] : %d wait : %d
[MTM_3G_CAL][c] FBRX_measure error!!
[MTM_3G_CAL]#8 APT CAL : Band[%d] PA Mode[%s] Pwr[%d dBm] Trial[%d] Set power[%d] Msrd Txp[%d] Pwr diff(x100) [%d]dBm
[MTM_3G_CAL]#8 APT CAL : Band[%d] PA Mode[%s] Pwr[%d dBm] Trial[%d] Set power[%d] Msrd Txp[%d] offset(x100) [%d]dBm
[MTM_3G_CAL]#8 APT CAL : Set power is limited to %d to prevent PAM burnout at high power
[MTM_3G_CAL]#8 Hysterisis range is wrong!!
[MTM_3G_CAL]#8 Hysteresis loading - [%d] : pwr_idx = %d, power = %d, LPM_idx = %d, cal_val = %d
[DCXO]%s: temp=%d freqOffset=%d freqOffsetRange=%d
RealCellSync state %d wating for rxlock and step1 start. antPathSelection %d
STEP1 fail
RealCellSync state %d waiting for step1 & buffering start
CheckSTEP1 fail
step1 successl
SearcherBuffer fail
RealCellSync state %d waiting for buffering and step3 start
CheckSearcherBuffer fail
STEP3 fail
RealCellSync state %d wating for step3 & MP search start
CheckSTEP3 fail
MultiPath fail
RealCellSync state %d waiting for MP searcher & finger start
MultiPath fail
Scr Code=%d
EHalSrchCpichCmd: Error %d, Additional Error %d
Start RL 0
Finger %d position set to %d
FingerConfig Failed
Start Finger %d
FAIL!!! MTMCOMM_3GTask_PhychRlConfig
FAIL!!! MTMCOMM_3GTask_TrchConfig
FAIL!!! MTMCOMM_3GTask_CctrchConfig
UmodemStatus=%d
DSP Dead SO enable DSP!!!!!!!!!!
ul_ch_info 0
IratMuxConfigCmd failed. errCode=%d, addErrCode=%d
Antenna switched to UMTS
Error: modem is turned off
NS_UMTS_RSSI_SCAN_REQ : rxBand %d offset %d antennaSel %d scanMode %d samplingCnt %d timeFrame %d tx2OnOff %d
NS_UMTS_RSSI_SCAN_REQ : tx1OnOff %d tx1Band %d tx1Freq %d tx1Power %d startFreq %d midFreq %d endFreq %d
NS_UMTS_RSSI_SCAN_REQ : TxBand info is wrong. rxBand %d tx1Band %d tx1Freq %d txUarfcn %d rxUarfcn %d
NS_UMTS_RSSI_SCAN_REQ : startUarfcn %d midUarfcn %d endUarfcn %d freqNum %d totalMeasureCnt %d sizeForOneFreq %d
NS_UMTS_RSSI_SCAN_REQ : Fail to send Msg to pal_EMsgEntity_AS_SAP
NS_UMTS_RSSI_SCAN_REQ : Success to send Msg to pal_EMsgEntity_AS_SAP
NS_UMTS_RSSI_SCAN_REQ : uarfcn %d freq %d rssiMainMax %d rssiMain %d rssiSubMax %d rssiSub %d pdPower %d
NS_UMTS_RSSI_SCAN_REQ : Fail to send Msg to pal_EMsgEntity_AS_SAP
NS_UMTS_RSSI_SCAN_REQ : Success to send Msg to pal_EMsgEntity_AS_SAP
Received msg id is HSPA_TEST_CAL_MSG
received frequency = %d (0x%x)
Received msg id is HSPA_CAL_DLCELLSYNC
received frequency = %d (Bandinfo %d)
Received msg id is HSPA_CAL_STORE_TARGET_DLPOWER
Received dl Power = %d
Received msg id is HSPA_CAL_SKIPRXCAL = %d
[MTM_3G_CAL]#6 RX GAIN CAL START!!
[MTM_3G_CAL]#6 RX GAIN CAL error!!! Band[%d] CAL_DUMP start!
[MTM_3G_CAL]#3 RX GAIN CAL error!!! Band[%d] CAL_DUMP end!
msg memory allocation fail!!!!!
[MTM_3G_CAL]#6 RX GAIN CAL END!! Band[%d]
Received msg id is HSPA_CAL_BUILDAGCTAB
Received msg id is HSPA_CAL_TXSTART=%d
gTx_swap=%d
PaBias %d, bandInfo%d , paHighGain %d
DacCtrlVal %d, bandInfo%d , freqInfo %d
Received msg id is HSPA_CAL_SETPDMVALUE
Received PDM = %d
Received msg id is HSPA_CAL_SETTXPOWER
Received Tx power = %d
Received msg id is HSPA_CAL_TXAGCBUILD
Received msg id is HSPA_CAL_RXFREQBUILD
Received msg id is HSPA_CAL_TXSTARTFREQ=%d
Received msg id is HSPA_CAL_SETTXFREQ
Received tx uarfcn = %d
Received msg id is HSPA_CAL_WRITETXPOWER
Received Tx power = %d
Received msg id is HSPA_CAL_BUILDTXFREQ
Received msg id is HSPA_CAL_SETBANDPAMODE
Received PA value = %d
Received msg id is HSPA_CAL_HSPARFCALSTART
UmodemStatus=%d
IratMuxConfigCmd failed. errCode=%d, addErrCode=%d
Antenna switched to UMTS
Error: modem is turned off
DSP Alive So stop ilpc compensation logic
RxTone_offset = %d
TimerSet failed!! = %d
Received msg id is HSPA_CAL_HSPARFCALEND
DSP Alive So Restore DSP Status from registry
TimerSet failed!! = %d
Received msg id is HSPA_CAL_HSPARFCALEND: UmodemStatus is OFF so bypass
HSPA_CAL_HSPARFCALEND : cal version : %d
Received msg id is HSPA_CAL_BUILDTXDCCALFINAL
Received Gain= %d
msg memory allocation fail!!!!!
Received msg id is HSPA_CAL_RXPOWER
Received dl Power = %d
Received msg id is HSPA_CAL_PDMVALSET
Received Pdm = %d
Received msg id is HSPA_CAL_MSRDTXPOWER
Received Tx Power = %d
Message ID not correct
Received msg id is HSPA_CAL_TXPWRMSRDFREQCAL
Received Tx Power = %d
Received msg id is HSPA_CAL_DLSYNC
received frequency = %d antPath %d
Received msg id is HSPA_CAL_GETRXRSSI
Measured RSSI1=%d RSSI2=%d
msg memory allocation fail!!!!!
Received msg id is HSPA_CAL_GETSENSE
Received iteration = %d
Try Synchronization one more time with freq=%d
Synchronization failed 2nd time also So return BER as 100
Received msg id is HSPA_CAL_TXPERSTART
received frequency = %d
TXPERSTART finish
Received msg id is HSPA_CAL_SETPOWER
Received Tx power = %d
Received msg id is HSPA_CAL_SETMAXPOWER
Received Tx power = %d
HSPA_CAL_SETMAXPOWER::DSP Alive!!!!!!!!!!!!!
HSPA_CAL_SETMAXPOWER::DSP Dead!!!!!!!!!!
SETMAXPOWER finish
Received msg id is HSPA_CAL_SETMINPOWER
Received Tx power = %d
Received msg id is HSPA_CAL_TXFREQSETPDM
Received msg id is HSPA_CAL_TXTRANSSWITCH
Received msg id is HSPA_CAL_TXGSSASETUP
Received bandInfo = %d gainMode=%d pdm0=%d setFreq=%d,PowerStart=%d,PowerStop=%d,T0=%d,Tsetup=%d,Thold=%d
Received msg id is HSPA_CAL_TXFSSASETUP
Received bandInfo = %d gainMode=%d pdm0=%d setFreq=%d,setPdm=%d
freqStart=%d,freqStop=%d,freqStep=%d,T0=%d,Tsetup=%d,Thold=%d
Message ID not correct
Received msg id is HSPA_CAL_HSPATMSTART
UmodemStatus=%d
ul_ch_info 0
IratMuxConfigCmd failed. errCode=%d, addErrCode=%d
Antenna switched to UMTS
Error: modem is turned off
HSPATMSTART finish
HSPA_CAL_HSPATMEND
HSPA_CAL_HSPATMEND:: UL channel exists so delete it...
DSP AliveSo Disable it.!!!!!!!!!!!!!
DSP Dead So Do nothing!!!!!!!!!!
[process debug] pal_TaskEntry_HSPA_CALIBRATION: 3G off
Received msg id is HSPA_CAL_HSPATMEND: UmodemStatus is OFF so bypass
HSPA_CAL_HSPATMEND finish
Received msg id is HSPA_CAL_HCHANGEMODE
Mode= %d
Received msg id is HSPA_CAL_HSENDSPI
Received msg id is HSPA_CAL_HENDGAINCAL.BandInfo=%d, DigitalTargetTxPwr=%d.
Received msg id is HSPA_CAL_TXSPISASETUP
Received bandInfo = %d gainMode=%d spi0Index=%d setFreq=%d,T0=%d,Tsetup=%d,Thold=%d,endGainIndex=%d
Index[%d]=
Received msg id is HSPA_CAL_TXPDSASETUP
Received bandInfo = %d gainMode=%d pdm0=%d setFreq=%d,pdmStart=%d
Received pdmStop=%d,pdmStep=%d,T0=%d,Tsetup=%d,Thold=%d
Received msg id is HSPA_CAL_HGETTHERMISTORVAL
Received msg id is HSPA_CAL_HLOADTHRTEMP
Received msg id is HSPA_CAL_HTEMPCALFINISHED
ThermistorVal=%d TemperatureVal=%d txPower=%d
After Sorting::
ThermistorVal=%d TemperatureVal=%d txPower=%d
Received msg id is HSPA_CAL_HSCANRSSI
scanBand=%d
UmodemStatus=%d
HSPA_CAL_HSCANRSSI:uarfcn=%d,rssiAnt1=%d,rssiAnt2=%d
Received msg id is HSPA_CAL_HGETRSSISCANRESULT
bandInfo=%d
HSPA_CAL_HGETRSSISCANRESULT:bandStorage[%d]::uarfcn=%d,rssiAnt1=%d,rssiAnt2=%d len=%d
HSPA_CAL_HGETRSSISCANRESULT:Len=%d,noOfScanFreq=%d
band1Storage is NULL!!!!
Received msg id is HSPA_CAL_HILPC
maxTxPower=%d & minTxPower=%d
Received msg id is HSPA_CAL_HDELULCHAN
Received msg id is HSPA_CAL_HGETRXRSCP
Rscp=%d
HSPA_CAL_TXRFICSASETUP is Received Freq = %d #GainMode=%d Thold=%d
Received msg id is HSPA_CAL_HSPITESTEND
Message ID not correct
Received msg id is HSPA_CAL_MSRRXRSSI
Measured whole RSSI1=%d RSSI2=%d
Received msg id is HSPA_CAL_HWRITESPI
Received msg id is HSPA_CAL_RXAGC_FREQCAL
msg memory allocation fail!!!!!
Received msg id is HSPA_CAL_RXRSSIGET
Measured RSSI1=%d RSSI2=%d
msg memory allocation fail!!!!!
Received msg id is HSPA_CAL_RXAGC_FREQCAL1
msg memory allocation fail!!!!!
Received msg id is HSPA_CAL_DRXCALON
HSPA_CAL_DRXCALON Mode(1:ON/0:OFF)= %d
Received msg id is HSPA_CAL_SET_TX_GAIN_INDEX
Received Tx Gain Index = %d
Received msg id is HSPA_CAL_SET_APT_TX_INDEX
Received Target power = %d
Received msg id is HSPA_CAL_TXAPTBUILD
Received msg id is HSPA_CAL_MSRDAPTTXPWR
Received msg id is HSPA_CAL_HREADSPI
HSPA_CAL_HREADSPI msg memory allocation fail!!!!!
Received msg id is HSPA_CAL_RetPdTable
Received msg id is HSPA_CAL_HCalOffset
Received msg id is HSPA_CAL_HPDSASTART setFreq : %d | Target_PDAGC : %d | Max_PDAGC : %d | Start_Txp : %d | wait : %d
Received msg id is HSPA_CAL_ReadPDGpadc
Received msg id is HSPA_CAL_GETRXAGC1
msg memory allocation fail!!!!!
Received msg id is HSPA_CAL_RXFREQ1BUILD
Message ID not correct
HSPA_CAL_HRF2CALSTART: rfBoradTyep=%d
HSPA_CAL_HDLCELLSYNC2: rxuarfcn=%d
HSPA_CAL_HRXPOWER2: rxPower=%d
HSPA_CAL_HBUILDAGCTAB2: BUILD RX AGC TABLE
HSPA_CAL_HRXFREQSETUARFCN2: rxuarfcn=%d
HSPA_CAL_HRXFREQBUILD2: BUILD RX FREQ CAL TABLE
HSPA_CAL_HTXSTART2: txUarfcn=%d
HSPA_CAL_HTXSTART2: bandInfo=%d
HSPA_CAL_HGAINTABINDEX2: bandInfo=%d indexVal=%d
HSPA_CAL_HRF2CALEND
Received msg id is HSPA_CAL_GET4RXRSSI
is4Rxsupported %d
Measured RSSI1=%d RSSI2=%d RSSI3=%d RSSI4=%d
msg memory allocation fail!!!!!
Received msg id is HSPA_CAL_GETRXRSSIPRXONLY
Measured RSSI1=%d
msg memory allocation fail!!!!!
Received msg id is HSPA_CAL_GETRXRSSIDRXONLY
Measured RSSI1=%d
msg memory allocation fail!!!!!
Received msg id is HSPA_CAL_GETRXRSSIACTIVEONLY %d
Parameter value %d is invalid.(0~3)
GETRXRSSIACTIVEONLY RSSI %d =%d
msg memory allocation fail!!!!!
Received msg id is HSPA_CAL_GETBESTTRF %d
msg memory allocation fail!!!!!
Received msg id is HSPA_CAL_HRxOnlyDefaultCal
Received msg id is HSPA_CAL_SETASTUNE
HSPA_CAL_SETASTUNE Mode(1:ON/0:OFF)= %d
Message ID not correct
Received msg id is HSPA_CAL_LMT_PRX
Received msg id is HSPA_CAL_LMT_DRX
Received msg id is HSPA_CAL_LMT_RUN
You can not be serious!!!Received msg id is unkown
UmodemStatus=%d
DSP Dead SO enable DSP!!!!!!!!!!
Error: modem is turned off
HSPATMSTART finish
LMT_antenna PRX+DRX
LMT_berMeasureTime %d
LMT_txMaxPower [%d] %d
LMT_numOfFreq %d
LMT_Uarfcn [%d] %d
HSPA_CAL_PHYCTEST_3GF val1 = %d
Received msg id is HSPA_CAL_SETTX2
HSPA_CAL_SETTX2 TX path (TX2) = %d
[MTM_3G_CAL]#7 RX FREQ 4RX CAL START!!
msg memory allocation fail!!!!!
[MTM_3G_CAL]#7 RX FREQ 4RX CAL END!! Band[%d]
HSPA_CAL_AS Band : %d, ant_group : %d
Received msg id is HSPA_CAL_RXMODESET
Wrong RX Mode
HSPA_CAL_RXMODESET Mode (3:PRX + DRX 2:PRX ONLY 1: DRX ONLY)= %d
3G MODEM is Not ON
Received msg id is HSPA_CAL_GETRXBYPAGC
msg memory allocation fail!!!!!
Received msg id is HSPA_SET_SAR
Received msg id is HSPA_CAL_CHECKMARC
HSPA_CAL_CHECKMARC: dlRet %d dlErrLane %d ulRet %d ulErrLane %d
msg memory allocation fail!!!!!
Received msg id is HSPA_CAL_HANTSWSEL %d
GETANTSWSTATUS Antenna Switch State %d Antenna Switch Status %d
msg memory allocation fail!!!!!
Received msg id is HSPA_CAL_DINSET_RFIC RFIC index : %d step : %d
Received msg id is HSPA_CAL_GETECIO
HSPA_CAL_GETECIO antPathSelection %d ecIo %d
msg memory allocation fail!!!!!
Received msg id is HSPA_CAL_GETTXPOWER
HSPA_CAL_GETTXPOWER : txPower %d pdPower %d
HSPA_CAL_GETTXPOWER : tx is not active. return power %d
msg memory allocation fail!!!!!
Received msg id is HSPA_CAL_WRITEREG
HSPA_CAL_WRITEREG : addr 0x%X data 0x%X
HSPA_CAL_WRITEREG : addr 0x%X read_data 0x%X
msg memory allocation fail!!!!!
HSPA_CAL_WRITEREG :invalid addr 0x%X
Received msg id is HSPA_CAL_READREG
HSPA_CAL_READREG : addr 0x%X data 0x%X
msg memory allocation fail!!!!!
HSPA_CAL_READREG :invalid addr 0x%X
Received msg id is HSPA_CAL_DUMPRXF
Message ID not correct
Received msg id is HSPA_CAL_TXAPTSASETUP
i = %d gainMode = %d StartTxP = %d EndTxp= %d
Received setFreq = %d mrsd_pts = %d gap = %d num_gainmode=%d Thold=%d
[MTM_3G_CAL]#8 TX APT CAL START!!
[MTM_3G_CAL]#8 TX APT CAL END!! Band[%d]
[MTM_3G_CAL]#5 FBRX FREQ CAL START!!
[MTM_3G_CAL]#9 TX FREQ CAL START!!
[MTM_3G_CAL]#9 TX FREQ CAL END!! Band[%d]
msg memory allocation fail!!!!!
msg memory allocation fail!!!!!
[MTM_3G_CAL]#4 FBRX GAIN CAL START!! txUarfcn[%d], iRfic[%d], txSmartThold[%d]
Message ID not correct
[MTM_3G_CAL]#4 FBRX GAIN CAL START!! txUarfcn[%d], iRfic[%d], txSmartThold[%d]
[MTM_3G_CAL]#8 TX APT CAL START!!
[MTM_3G_CAL]#8 TX APT CAL END!! Band[%d]
[MTM][RF ET][CAL] Received msg : HSPA_CAL_HTXETSAPTCAL
[MTM][RF ET][CAL] band: %d cmd_ver : %d
Message ID not correct
Received msg id is HSPA_ET_MTM_CAL_DATA_BACKUP, band_index(%d), tx_path(%d), NV_idx(%d)
Message ID not correct
Received msg id is HSPA_CAL_DSPSTOP
Force_TxRF_stop_DSP= %d
Received msg id is HSPA_CAL_HSENDMIPI
Received msg id is HSPA_CAL_HREADMIPI
msg memory allocation fail!!!!!
Received msg id is HSPA_CAL_HSET_SMVCC
Received msg id is HSPA_CAL_HREAD_SM
msg memory allocation fail!!!!!
Received msg id is HSPA_CAL_TXMULTICHPDM
Received msg id is HSPA_CAL_TXMULTICHPWRMSRD
Received Tx Power = %d
Received msg id is HSPA_CAL_BUILDTXFREQ
Received msg id is HSPA_CAL_SETTXMULTICHFREQ
Received tx uarfcn = %d
multi_ch offset =%d paMode =%d
Received msg id is HSPA_CAL_TXMULTICHSASETUP(Bandclass %d)
Received bandInfo = %d gainMode=%d pdm0=%d setFreq=%d,setPdm=%d
freqStart=%d,freqStop=%d,freqStep=%d,T0=%d,Tsetup=%d,Thold=%d
Message ID not correct
msg memory allocation fail!!!!!
Received msg id is HSPA_CAL_ANTSWWRITE
msg memory allocation fail!!
Message ID not correct
