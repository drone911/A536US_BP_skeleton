[SC] Restore dmxerfreq value(cc: %d, dmxr_freq_value: %d)
[DSDS] RFAPI_InitRFforDSDS (RF %d, path %d, freq %d) starts!!!
[SADS] Skip HAL_InitRfCtrl
[DSDS] RFAPI_InitRFforDSDS: CA set, cc(%d)
[DSDS] RFAPI_InitRFforDSDS: CA-4RX set, cc(%d) div_cc(%d), band(%d), rx_mode(%d)
[DSDS] RFAPI_InitRFforDSDS is finished!!!
RFAPI_InitRF starts!!! (freq = %d)
Setting the Tx Band(%d) instead of Rdb.RF_Band(%d) for RSSISCAN for TxSwap!!!
RFAPI_InitRF is finished!!!
RFAPI_InitRFForNedc starts!!! (freq = %d)
RFAPI_InitRFForNedc is finished!!!
[IRAT] RFAPI_ReturnToLTE starts!!!
[SC] HALRXF_ResetCdmaRxFilterReg
[SC] Mixer INIT / Mixer Ratsampling mode erase after L2N gap search.meas
[1-Rx] [RF SetToTargetBand] Turned on only Rx main path
[1-Rx] [RF init] Turned on all Rx main path
[IRAT] RFAPI_ReturnToLTE is finished!!! (gRF_loaded_RF_band:%d, freq:%d)
[IRAT] RFAPI_RestoreTxPath starts!!!
[IRAT] RFAPI_RestoreTxPath is finished!!!
RFAPI_InitFromSleepIdle starts!!!
RFAPI_InitFromSleepIdle is finished!!! (gRF_loaded_RF_band:%d, freq:%d)
RFAPI_InitFromSleepIdle UE stat[%d] starts!!!
RFAPI_InitFromSleepIdle : cc(%d), power on time(%d)
RFAPI_InitForRFBandSwitch(%d) starts!!! rf_path=%d
[NRDS] request NR to update Tx swap : 0x%x -> 0x%x
[NRDS] NR Tx swap update done
[RF][SWAP] gHal_IpcTxStatus is %d Reset it as TX_BLOCK_NONE
RFAPI_InitForRFBandSwitch is finished!!! (gRF_loaded_RF_band:%d, freq:%d)
RFAPI_InitForRFBandSwitch(CC%d) is finished!!! (rf_band:%d, freq:%d)
[PWR_OPT] PreInitForRFInterBandGAP: Skip store RF param
[RF] PreInitForRFInterBandGAP: cc(%d), rf(%d), band(%d), freq(%d), bw(%d)
[RF] InitForRFInterBandGAP: cc(%d), rf(%d), mode(%d), band(%d), freq(%d), bw(%d)
[RF] PostInitForRFInterBandGAP: cc(%d), rf(%d), mode(%d), band(%d)
RFAPI_InitFromShade starts!!!
RFAPI_InitFromShade is finished!!! (gRF_loaded_RF_band:%d, rf_path:%d, dl_freq:%d)
RFAPI_InitForRssiScan starts!!! (Band:%d, Rx Freq:%d)
RFAPI_InitForRssiScan is finished!!! (Band:%d, Rx Freq:%d)
[RF] Failed to get RF grant. Need to check!!!
[RF] PowerOn(CC%d): rf(%d), band(%d), earfcn(%d), freq(%d)
[RF] Failed to get RF grant. Need to check!!!
[RF] RFAPI_TxSwap: cc(%d) path_swap(%d) on(%d) ul_freq(%d) ul_bw(%d) gRF_tx_swap(%x) dac_path(%d)
[RF] Changed to ul center freq(%d -> %d)
[RF] TxSwapByNrTxPath: skip in FR2 nr_band(%d)
[RF] TxSwapByNrTxPath: nr_band(%d) is 0
[RF] TxSwapByNrTxPath: tx_swap(0x%x -> 0x%x), Band(LTE:B%d/NR:N%d), txswap_done(%d), rffe_done(%d)
[RF] CheckRffeByNrChange: skip in FR2 nr_band(%d)
[RF] CheckRffeByNrChange: Band(LTE:B%d/NR(%d):N%d N%d), rffe_done(%d)
[RF] TxSwapByEndcRelease: tx_swap(0x%x -> 0x%x), Band(LTE:B%d/NR:N0), txswap_done(%d)
[RF] >>>>>RFAPI_Disable_TxSwap
[RF] >>>>>PowerOnTxPath(CC%d): Invaild CC_index
[SADS] Skip RFAPI_PowerOnTxPath
[RF] >>>>>PowerOnTxPath(CC%d): rf(%d) UlCaStatus(%d) ul_freq(%d) ul_bw(%d) gRF_tx_swap(%x)
[RF][SWAP] gHal_IpcTxStatus is %d. RF_Get_TX_Swap for Band[%d/%d]
[RF] Update gRF_tx_swap(%x -> %x), gRF_selectTxAnt(%d) for CC0
[RF] Update gRF_tx_swap(%x -> %x) due to 2TX condition(ULCA%d)
[RF] Cannot power off Tx path due to D2D
[RF] >>>>>PowerDownTxPath(CC%d): rf(%d)
[RF] Update gRF_tx_swap(%x -> %x) due to 2TX->1TX condition
[RF] >>>>>RFAPI_WakeupTx(CC%d): Invaild CC_index
[RF] >>>>>RFAPI_WakeupTx(CC%d): rf(%d) UlCaStatus(%d) ul_freq(%d)
[RF] RFAPI_SetRxPathPower(CC%d): rf(%d), onoff(%d)
[RF] RFAPI_SetPowerQuick(CC%d): rf(%d), onoff(%d)
[RF] >>>>>PowerOnRxPath(CC%d): rf(%d), Rxpath(%d)
[RF] Failed to get RF grant. Need to check!!!
[RF] >>>>>PowerDownRxPath(CC%d): rf(%d), Rxpath(%d)
[RF] Failed to get RF grant. Need to check!!!
[RF] >>>>>PowerOn4RxPath(CC%d): div(%d), Invalid RF path (%d, %d)
[RF] >>>>>PowerOn4RxPath(CC%d): div(%d), rf(%d, %d), rx_mode(%d)
[RF] Failed to get RF grant. Need to check!!!
[RF] >>>>>Init4RxPath(CC%d): 4Rx path(%d) is already initialized
[RF] >>>>>Init4RxPath(CC%d): slo_pair_num(%d)
[RF] >>>>>Init4RxPath(CC%d): Invalid RF path (%d)
[RF] Failed to get RF grant. Need to check!!!
[SADS] Skip RFAPI_SetChannelFrequency >> trx_mode(%d), ChannelFreq(%d)
[RF] SetChannelFrequency RX(%d)
[RF] SetChannelFrequency TX(%d)
[RF] SetChannelFrequency RX(%d)
[RF] SetChannelFrequency TX(%d)
[RF] SetReceivedULFrequency: rf(%d), freq(%d)
[SADS] Skip RFAPI_SetRfTxBandwidth
[RF] GetCalRsrpOffset(CC%d): rf(%d), band(%d), earfcn(%d), agc_gain(%d, %d)
[RF] RSRP Offset(%d, %d), RSSI Offset(%d, %d), RSRP Freq Offset(%d, %d)
[RF] WriteTxFrequencyPowerOffsetToDspSHM: gDrx_ActiveRat(%d)
[RF] WriteTxGainTableToDspSHM(RF%d): gDrx_ActiveRat(%d)
[RF] SetRXUpdateModeOn(CC%d): rf(%d), dcr(%d)
[RF] SetRXUpdateModeOff(CC%d): rf(%d), dcr(%d), slo(%d)
[RF] CheckRFBandSwitch: RF Band Switch from [%d] to [%d]
[RF] CheckRFBandSwitch: Not supported RF band [%d].
[RF] CheckRFBandSwitch: This target is not calibrated for requested band [%d].
[RF] Antenna Conduction Status(CC%d): rf(%d), status(%d)
[RF] RFAPI_SPIRead : Addr:0x%x Data:0x%x
[RF] TuneRfCarrierFreq: Not supported RF band(%d), earfcn(%d)
[RF] TuneRfCarrierFreq: RF bands(LTE:%d, D2D:%d) are not matched!!!
[RF] TuneRfCarrierFreq: Not supported RF band(%d), earfcn(%d)
[RF] TuneRfCarrierFreq: RSSISCAN bw(%d)
[RF] CheckCABand: support(%d), Rdb(%d), earfcn(%d), band(%d)
[RF] CheckNRCABand: support(%d), band(%d)
[RF] CheckNeedToRfSettingAfterGap: support(%d), band(%d), path_num(%d), path(%d %d %d)
[RF] RFAPI_CheckEdvCABand: Support(%d), Rdb(%d). MCG UE state(%d)
[RF] CheckEdvCABand: Source band[%d]: (%d : %d : %d)
[RF] CheckEdvCABand: target_band:(%d),support(%d)
[RF] Invalid RF path !!! Need to check!!!
[RF] RFAPI_FindRfPath(mode=%d(%s))=%02d:finish)
[4G_DRDS] RFAPI_SetRfBandList(num_rf_band update= %d, scg num= %d):start
[Bandlist] SetRfBandList(L1 full band): num_band(%d), band(%d, %d, %d, %d, %d, %d)
[Bandlist] SetRfBandList(RF full band): num_band(%d), band(%d, %d, %d, %d, %d, %d)
[Bandlist] SetRfBandList(configured): configured_rf_path_idx(%d), configured_path_onoff(%d)
[Bandlist] SetRfBandList(RF SCG list): num_band(%d), IsSCG(%d, %d, %d, %d, %d, %d)
[Bandlist] 1. Band added case
[Bandlist] RFAPI_SetRfBandList(added band(DR) : %d)
[Bandlist] RFAPI_SetRfBandList(added band : %d)
[Bandlist] 2. Band changed case. (let 4rx release and add)
[Bandlist] 2. Band changed case. (let 4rx release and add)
[Bandlist] 2. Band changed case. (semi DR case)
[Bandlist] 3. No Band change case
[Bandlist] 4. Band removed case
[Bandlist] [ERROR] Warning ! RF is not supported
[Bandlist] release diversity 4Rx for bandlistupate
[Bandlist] Is4RxReleaseNeededForDr : (1) -> (%d)
---Release Scell RF path start for SLO @_SetRfBandList
---Release Scell RF path end for SLO @_SetRfBandList
[RF] Failed to get RF grant. Need to check!!!
---Restore Scell RF path for SLO start @_SetRfBandList
---Restore Scell RF path for SLO end @_SetRfBandList
[Bandlist] retry to add diversity 4Rx after bandlistupate
[Bandlist] SetRfBandList: num_band(%d), band(%d, %d, %d, %d, %d)
[SADR] Band [%d, %d] = %d
[SADR] Band [%d] = %d
[SADR] Band [%d] = %d
[CA Info] RFAPI_SetCaConfigInfo: num_scell(%d)
[CA Info] RFAPI_SetCaConfigInfo: num_scell(%d)
[CA Info] RFAPI_SetCaConfigInfo: [%d] cell_id(%d) dl_earfcn(%d)
[CA Info] RFAPI_SetCaConfigInfo(CA_CFG state changed): Earjack Plug-In(%d>>>%d) CA_CFG(CC1:%d>>>%d,CC2:%d>>>%d)
[CA Info] RFAPI_SetCaConfigInfo(CA_CFG state changed): RF band(CC0:%d,CC1:%d,CC2:%d)
[CA Info] RFAPI_GetCaConfigInfo: CC%d CA configured (info idx:%d, earfcn:%d)
[AntSW] RFAPI_ReadEarJackDetector (%d)
[AntSW] (RF init) Earjack Plug-In(%d) NUM_CA(%d) RF band(CC0:%d,CC1:%d,CC2:%d)
[AntSW] (Periodic) [%d] NUM_CA(%d) CC%d CA_CFG flag(%d>>>%d)
[AntSW] (Periodic) [%d] NUM_CA(%d) CC%d CA_CFG flag(%d>>>%d)
[AntSW] (Periodic) Earjack Plug-In(%d>>>%d) CA_CFG(CC1:%d>>>%d,CC2:%d>>>%d)
[AntSW] (Periodic) RF band(CC0:%d,CC1:%d,CC2:%d)
[AntSW] (Periodic) No change: EJ(%d) CA_CFG(CC1:%d>>>%d,CC2:%d>>>%d)
RFComm_CheckPmaxBackoff: No Backoff (Modem power:%d, TAS:%d)
RF_Get_Band_Index(band_list[0]:%d / band_list[1]:%d) -> band_index[0]:%d / band_index[0]:%d
RFComm_CheckPmaxBackoff: No Backoff (Conduction Status:%d)
RFComm_CheckPmaxBackoff: (IsLteNrConn%d/IsEndcConfigured%d) gRF_CpEventStatus(%x) Temp_LTENR_CP_Event(%x) -> Current_LTENR_CP_Event(%x)
RFComm_CheckPmaxBackoff: Tas_Priority_Num not available!! (%d)
[LTE TAS] [%d]: AP Event Match (SensorStatus(0x%x) TasPriorityApEvent(0x%x))
[LTE TAS] [%d]: CP Event Match (CpEventStatus(0x%x) TasPriorityCpEvent(0x%x), Tas_Table(%d))
[LTE TAS] RFComm_CheckPmaxBackoff: No Backoff (PMaxByTas(%d) SensorStatus(0x%x) CpEventStatus(0x%x))
[LTE TAS] RFComm_CheckPmaxBackoff (EARJACK, Backoff value:%d, %d)
[LTE TAS] RFComm_CheckPmaxBackoff (GRIP, Backoff value:%d, %d)
[LTE TAS] RFComm_CheckPmaxBackoff (HOTSPOT, Backoff value:%d, %d)
[LTE TAS] RFComm_CheckPmaxBackoff (TABLE4, Backoff value:%d, %d)
[LTE TAS] RFComm_CheckPmaxBackoff (TABLE5, Backoff value:%d, %d)
[LTE TAS] RFComm_CheckPmaxBackoff (TABLE6, Backoff value:%d, %d)
[LTE TAS] RFComm_CheckPmaxBackoff (TABLE7, Backoff value:%d, %d)
[LTE TAS] RFComm_CheckPmaxBackoff (TABLE8, Backoff value:%d, %d)
[LTE TAS] RFComm_CheckPmaxBackoff (TABLE9, Backoff value:%d, %d)
[LTE TAS] RFComm_CheckPmaxBackoff (TABLE10, Backoff value:%d, %d)
[LTE TAS] RFComm_CheckPmaxBackoff: Abnormal Tas Table!!
[LTE TAS] RFComm_CheckPmaxBackoff (Band:%d / PMaxLimit:%d / Backoff value:%d, %d)
[SC] ConfigScc: SCell Fixed rx_mode(%x)
[SC] ConfigScc: Not supported RF band (earfcn: %d) for 4Rx Fixed rx_mode %d
[RX] Set Fixed rx_mode(%d -> %d)
[APETF] RFAPI_TX_GAIN_phase : Command Error - (%d)
[AS] RFAPI_GetAsMode: Fixed Antenna Mode (%d)
[AS] RFAPI_GetAsMode: AS enabled band (%d)
[AS] RFAPI_GetAsMode: But AS not availble by RF function(Band:%d)
[AS] RFAPI_GetAsMode: AS Testmode enabled band (%d)
[AS] RFAPI_GetAsMode: AS disabled (%d)
[AS] TxBlock_TxSwapOrRffe (cause:%d)
[RF] OnlyTxSwap (SelectedANT:%d, pHALRf_Db->gRF_tx_swap:0x%x, tx_swap:0x%x)
[RF] RFFE for ENDC(LTE:B%d / NR(%d):N%d N%d), RFFE_support:%d )
[AS] RFAPI_ChangeAntennaSwitch (Band:%d, SelectedANT:%d(%d), ProxSensorState:%d)
[AS] TX antenna is switched successfully.
[AS] Tx swap is NOT support
[AS] Antenna is switched successfully.
[AS] Antenna is not switched (Not supported)
[AS] RFAPI_ChangeProxSensState_AS_Fixed (Band:%d, SelectedANT:%d, ProxSensorState:%d)
[AS] RFAPI_ChangeProxSensState_AS_Adapt (Band:%d, SelectedANT:%d(%d), ProxSensorState:%d)
[AS] RFAPI_ChangeProxSensState_AS: AS Test Mode OFF for current band (%d)
[AS] RFAPI_ChangeProxSensState_AS_Testmode (Band:%d, Operation Mode:%d, ProxSensorState:%d)
[AS] RFAPI_ChangeProxSensState_AS_Adapt (Band:%d, SelectedANT:%d(%d), ProxSensorState:%d)
[AS] TAS_status is restored: %d.
[OL-AIT] CL_AIT is running. Return with CpEvent(0x%x)!
[OL-AIT] Prev4RxDcase is changed(0x%x)->(0x%x)
[OL-AIT] Prev4RxDcase is maintained(0x%x)->(0x%x)
[OL-AIT] Reset Prev4RxDcase! (0x%x)->(0)
[OL-AIT] RFAPI_GetCurrentCPEvent(0x%x)
[LTE SAR] UpdateCpEventStatus: CpEventStatus(0x%x) by CP event change
[LTE SAR] UpdateCpEventStatus: CpEventStatus(0x%x) by HALRFCTL.getTestCpEvent(Test by Key string)
[LTE SAR] CpEventStatus is updated(0x%x)->(0x%x)
[LTE SAR] CpEventStatus is maintained(0x%x)->(0x%x)
[LTE SAR] [LTE SAR] ApEventStatus is updated(0x%x) -> (0x%x)
[LTE SAR] [LTE SAR] ApEventStatus is maintained(0x%x) -> (0x%x)
[LTE SAR] UpdateSensorState: ApEventStatus(0x%x) CpEventStatus(0x%x)
[OL-AIT] (Skip) RFAPI_ControlOpenLoopAit: RF unavailable
[OL-AIT] (Skip) RFAPI_ControlOpenLoopAit: Modem power off
[OL-AIT] RFAPI_ControlOpenLoopAit: MTM mode -> Disable OL-AIT control
[OL-AIT] Semi DRDS. Set AIT as SCG band!
[OL-AIT] D2D activated at CC(%d) Band(%d)
[OL-AIT] CC:%d, Band: %d, UL earfcn:%d, Extendcase:%d, Ap_Event(0x%x), Cp_Event(0x%x), Num CA:%d
[OL-AIT] RFAPI_ControlOpenLoopAitForScellMeas (RF path:%d, RF Band:%d, Usecase:%d, UL earfcn:%d
[OL-AIT] RFAPI_ControlOpenLoopAit_Default (Usecase:%d, UL earfcn:%d, RF band(%d %d %d)
[AIT] XGND_ANTSW_TEST [%d][%d][%d][%d]
[AIT] TMN_Sweep_Set index [%d] value[%x]
[RF] RFAPI_GetOtherStackRFPowerOn: client owner mask(LTE:0x%x, NR:0x%x, MARCONI:0x%x), RF_VRF owner mask(0x%x)
[RF] RFAPI_GetRFComponent1PowerOn: client owner mask(LTE:0x%x, NR:0x%x, MARCONI:0x%x), RF_VRF(Cpnt1) owner mask(0x%x)
[RF] RFAPI_GetRFComponent0PowerOn: client owner mask(LTE:0x%x, NR:0x%x, MARCONI:0x%x), RF_VRF(Cpnt1) owner mask(0x%x)
[RF] RFAPI_SetIntraCaLna: cc(%d), band(0x%d) agc_gain(%d, %d)
[RF] RFAPI_SetIntraCaLna: cc(%d), NumOfCC(0x%x) agc_gain(%d, %d)
[HPUE RF] Set PowerClass 2 -> 3 due to ULDL_Cfg(%d)
[HPUE RF] Need to check PowerClass -> set PowerClass 3
[HPUE] HPUE Testmode Forced as Disabled (Power Class 3)
[HPUE RF] (Band:%d) Stack#%d PC:%d ULCA:%d pMax:%ddBm
RFAPI_ResetDcrIqcBlock rf(%d) band(%d)
[CL-AIT] TxPower(%d) Tx_Th(%d) configENDC(%d)
[CL-AIT] UL BLER(%d) DL BLER(%d)
[CL-AIT] BLER diff (%d)
[DRX] set SW sleep Flag for RF
[DRX] Do not set SW sleep Flag for RF >> RF Unavailable
[RF] Set_TIA_Low_Current: cc(%d), rf(%d), pgc(%d), onoff(%d)
[RF] Get_NSA_Path_for_DivPath_Release: num(%d), Path(%d %d)
[RF] RFAPI_Get_Inter_Rsrp_Offset: rsrp_offset_Ant0(%d), rsrp_offset_Ant1(%d)
