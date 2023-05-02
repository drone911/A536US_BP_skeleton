%s is already full.
###[NR_RFPROC] Booting setup for RF
###[NR_RFPROC] RfRficOnOffProc: On, rf(%d), band(%d), freq(%d), bw(%d)
###[NR_RFPROC] RfRficOnOffProc: Off, rf(%d), mxr(%d)
###[NR_RFPROC] GetRfPathInfo: find_param(%s), input(%d), domain_type(%d) is not found in RF HAL Info
###[NR_RFPROC] PrintRfPathInfo[%d] bitmask(path3/prx3/drx3)(%9d), dl_freq(%d), ul_freq(%d), bw(ul_bw*100+dl_bw)(%d), beam_idx(rx3/target3)(0x%6x), domain_type(%d)
###[NR_RFPROC] CalculateCenterArfcn Band(%d) NrArfcn(%d)
###[NR_RFPROC] RfProcNr::TuneRfCarrierFreq: rf(%d), band(%d), freq(%d), bw(%d), rx_mode(%d), beam_idx(0x%03x), chg_type(%x)
###[NR_RFPROC] InitRfForWakeup: resume_type(%d), domain_type(%d)
###[NR_RFPROC] InitRfForWakeup: NrBand(%d), freq(%d), targetBw(%d), rf_path(%d), rx_mode(%d), beam_idx(0x%x)
###[NR_TX] SendTxPathInfoIpc: recv_dac_path(0x%x), set_dac_path(0x%x), max_ul_layer(%d), req_num_tx(%d), tx_ant_idx(%d), lmac_cmd/enc_idx(2/2)(%04d), domain_type(%d)
###[NR_TX] GetTxRfPathInfo(dac_idx(0x%x, M8S8), max_ul_layer(%d), cur_tx_mode(%d), domain_type(%d))
###[NR_TX] Invalid rx_path @ SetTxpathOnOff
###[NR_TX] Invalid rf_path @ SetTxpathOnOff
###[NR_TX] Invalid ul_bw(%d), ul_freq(%d), ul_band(%d)
###[NR_TX] SetTxPathOnOff : current clock mode(%d), max_ul_layer(%d), cc_cnt(%d), check_ssb_copied_path(%d)
###[NR_TX] SetTxPathOnOff : Change recv_tx_mode (0x%x) to (0x%x)
###[NR_TX] 2TX cannot be supported since 4RX is disabled
###[NR_TX] SetTxPathOnOff on(%d), path(0x%04x - rf4/mxr4), tx_rf_path_info(0x%x, cur_tx_mode4/tx_main_path4), ul_freq(%d), ul_bw(%d), recv_tx_mode4/slo4/rank4(0x%x), domain_type(%d)
###[NR_TX] ChangeUlBw: scell_idx(%d), rf_rx_path(%d), ul_freq(%d, %d, %d), ul_bw(%d), domain_type(%d)
###[NR_TX] ChangeUlBw() is not supported for scell_idx(%d)
###[NR_RFPROC] ConvertFreqToArfcn: freq(%d) -> arfcn(%d), band(%d)
###[NR_RFPROC][WARNING] SetRxUpdateModeOn : Abnormal rx_path(%d) !!!
###[NR_RFPROC] SetRxUpdateModeOn : rf_path(%d) is already set to RxUpdateMode_ON !!
###[NR_RFPROC] SetRxUpdateModeOn: rx(%d), rf(%d), domain_type(%d)
###[NR_RFPROC][WARNING] SetRxUpdateModeOff : Abnormal rx_path(%d) !!!
###[NR_RFPROC] SetRxUpdateModeOff : rf_path(%d) is already set to RxUpdateMode_OFF !!
###[NR_RFPROC] SetRxUpdateModeOff: rx(%d), rf(%d), domain_type(%d)
###[NR_RFPROC] SetRxBeamPattern: rf_path(%d), beam_idx(0x%03x), domain_type(%d)
###[NR_RFPROC] GetRxBeamPattern: rf_path(%d), beam_idx(0x%03x), domain_type(%d)
###[NR_RFPROC] GetRxBeamNum: rf_path(%d), module(%d), beam_num(%d), UseNB(%d), domain_type(%d)
###[NR_RFPROC] ConfigRfModule: servBeamIdx(0x%x), targetBeamIdx(0x%x), mode(%d), vh_path(%d), domain_type(%d)
###[NR_RFPROC][WARNING] ConfigRfModule error servBeamIdx == targetBeamIdx
###[NR_RFPROC] PreInitRfModule: rf_path(%d) servBeamIdx(0x%x) targetBeamIdx(0x%x) serv_analog_gain[0] %d serv_analog_gain[1] %d
###[NR_GAPPROC] EnableRfModule: rf_path(%d), beam(0x%03x)
###[NR_GAPPROC] EndRfModule: rf_path(%d) targetBeamIdx(0x%03x), servBeamIdx(0x%03x)
###[NR_GAPPROC] ModuleSwitch: rf_path(%d) beam(0x%03x -> 0x%03x)
###[NR_GAPPROC] SwitchRfModule: rf_path(%d) servBeamIdx(0x%x) targetBeamIdx(0x%x)
###[NR_RFPROC][WARNING] ConfigRfModule error
###[CL-AIT] ProcClAitDumpInd: Wrong ClAitEvtState(%d), eventType(%d), clAitEnable(%d)
###[CL-AIT] ProcClAitDumpInd: eventType(%d), clAitEnable(%d), ClAitEvtState(%d - 0:NONE 1:EVT1_IND_SEND 2:EVT1_IND_NOT_SEND 3:EVT2_IND_SEND 4:EVT2_IND_NOT_SEND 5:EVT2_ABORT_IND)
###[CL-AIT] enable(%d), CLAIT-NV: RfSub6En(%d), TxThres(%d), Period_Evt1(%d), Period_Evt2(%d)
###[AS] SendL1AitDmInfo
[OL-AIT] PCell band(%d) meas_rf_band(%d) ait_status(0x%x)
[OL-AIT] Skip OL-AIT: resume_type(%d) op_mode(%d) rf_path(%d) CL-AIT State(%d) band(%d) RF Init done(%d)
[OL-AIT] SCell Rf_Band(%d/%d/%d/%d)
[OL-AIT] CC(%d) band(%d) ul_freq(%d) ap_event(0x%x) cp_event(0x%x) domain_type|resume_type|op_mode(0x%X) ait_status(0x%x - 0x0~0xd:SA 0xE:NEDC 0xF:ENDC/IRAT)
###[NR SAR] UpdateSensorState: Feature(0x%x) ApEventStatus(0x%x)
###[NR SAR] UpdateSensorState:: Power domain off[%d]!!! SKIP SendSARbackoffIpc
###[NR SAR] GetPmaxBackoffbySAR: skip SAR Backoff band[%d]
###[NR SAR] GetPmaxBackoffbySAR: Sar_Priority_Num not available(%d)
###[NR SAR] AP Event Match [%d] (SensorStatus(0x%x) SarPriorityApEvent(0x%x))
###[NR SAR] CP Event Match (CpEventStatus(0x%x) SarPriorityCpEvent(0x%x), SarTable(%d))
###[NR SAR] No Backoff (SarMaxPowDbmX10:%d SensorStatus(0x%x) CpEventStatus(0x%x))
###[NR SAR] Sar Backoff (SarMaxPowDbmX10[%d]:%d SensorStatus(0x%x) CpEventStatus(0x%x) Value_backoff(%d))
###[TAS] GetPmaxBackoffbyTAS: Tas_Priority_Num not available(%d)
###[TAS] AP Event Match [%d] (SensorStatus(0x%x) SarPriorityApEvent(0x%x))
###[TAS] CP Event Match (CpEventStatus(0x%x) SarPriorityCpEvent(0x%x), SarTable(%d))
###[TAS] No Backoff (SarMaxPowDbmX10:%d SensorStatus(0x%x) CpEventStatus(0x%x))
###[TAS] Tas Backoff (SarMaxPowDbmX10:%d SensorStatus(0x%x) CpEventStatus(0x%x))
###[NR SAR] GetAbnormalENDCBackoff: ApEvent(%x) NrCpEvent(%x)
###[NR SAR] GetAbnormalENDCBackoff: ENDC Disabled(%x)
###[NR SAR] GetPmaxBackoffbySAR: skip SAR Backoff band[%d]
###[NR SAR] GetAbnormalENDCBackoff: Abnormal Band. LteBand(0x%x) NrBand(0x%x)
###[NR SAR] GetAbnormalENDCBackoff: idx[%d/%d] Event Matched. ApEvent: (0x%x) (0x%x) CpEvent: (0x%x) (0x%x)
###[NR SAR] GetAbnormalENDCBackoff: Abnormal Backoff Value(0) set to 23
###[NR SAR] GetAbnormalENDCBackoff: idx[%d] Band Matched. LTE: (%d) (%d) NR: (%d) (%d)
###[NR SAR] GetAbnormalENDCBackoff: idx[%d] Backoff Value(%d %d)
###[AS] Antenna is switched to successfully (Ant %d)
###[AS] Antenna is not switched (Not supported)
###[NR_RFPROC] UpdateAntennaSwitchStatus: rf_path(%d), domain_type(%d) TxAnt(%d)
###[NR SAR] UpdateSarPmax:: PmaxFr2X10(%d) domain_type(%d)
###[NR SAR] UpdateSarPmax:: pMax(%d) pMaxUe(%d) PhyCellGrpPmaxX10(%d) pMaxX10(%d)
###[NR SAR] UpdateSarPmaxSib:: pMaxFr2X10(%d) domain_type(%d)
###[NR SAR] UpdateSarPmax:: pMax(%d) pMaxUe(%d) PhyCellGrpPmaxX10(%d) pMaxX10(%d)
###[NR SAR] [%d] UpdatePhyCellGrpPmax:: pMaxX10(%d) = MIN{PhyCellGrpPmaxX10(%d), SarpMax(%d)} SarpMaxUe(%d)
###[NR SAR] CalTddDutyCycleConfigCommon: skip NR Test Mode
###[NR SAR] CalTddDutyCycleConfigCommon
###[NR SAR] CalTddDutyCycleConfigCommon don't support in FR2
###[NR SAR] Skip TDD Duty Cycle backoff since TAS is running
###[NR SAR] CalTddDutyCycleConfigCommon:: dl_UL_TransmissionPeriodicity(%d) dl_UL_TransmissionPeriodicityV1530(%d) NumUlSymbol1(%d) NumTotalSymbol1(%d)
###[NR SAR] CalTddDutyCycleConfigCommon:: dl_UL_TransmissionPeriodicity(%d) dl_UL_TransmissionPeriodicityV1530(%d) NumUlSymbol2(%d) NumTotalSymbol2(%d)
###[NR SAR] CalTddDutyCycleConfigCommon:: TxDutyRatio(%d) NumTotalSymbol(%d) TotalUlSymbol(%d) UlSymbol1(%d)
###[NR SAR] Skip TDD Duty Cycle backoff since TAS is running
###[NR SAR] error!!! abnormal SlotSpecificConfigSymbols value
###[NR SAR] CalTddDutyCycleConfigDedi():: NumUlSymbol(%d), NumDlSymbol(%d), NumTotalUlSymbol(%d) NumTotalSymbol(%d) TxDutyCycle100(%d)
###[NR SAR] GetTddDutyCycleBackoff: idx(%d) : Threshold(%d) backoff(%d)
###[NR SAR] GetTddDutyCycleBackoff: idx(%d) TDD backoff(%d)
###[NR SAR] CalTddDutyCycleBackoff:: TxDutyRatio(%d)
###[NR SAR] InitSAR
###[NR SAR] SendSARbackoffIpc:: Front Power domain off[%d]!!! SKIP SendSARbackoffIpc
###[NR SAR] SendSARbackoffIpc:: SendSARbackoffIpc PMAX(%d) TddBackoff(%d) CbrsBackoff(%d) DemodCc(%d) SrsLimit(%d)
###[NR_TX] [AS] SendTxSuspendIpc mode(%d, 0:AS/1:TX_SHARING/2:SWAP), remain_tx_path(0x%x) demod_cc(%d) lmac_cmd/enc_idx(2/2)(%04d), domain_type(%d)
###[NR_TX] [AS] SendTxSuspendIpc mode(%d, 0:AS/1:TX_SHARING/2:SWAP), remain_tx_path(0x%x) demod_cc(%d), domain_type(%d)
###[NR_TX] [AS] IPC_NR_TX_RESUME_IND:: TxAnt(%d)
###[NR_RFPROC] SendL1RfDmInfo:: EnableTxAS(%d), SelectedTxAnt(%d), Enable4RxD(%d), SelectedAIT(%d)
###[NR_RFPROC] InitRF: rf_path %d, band %d, freq %d, bw %d, beam_idx 0x%03x
###[NR_RFPROC] InitForRFWakeup : rf_path(%d) rf_mode(%d) UeState(%d) rx_mode(%d) ResumeType(%d) check(%d)
###[NR_RFPROC] SetChannelFrequency: rf(%d), trx(%d), freq(%d)
###[MMwave_RF] CalculateDLBand : BAND(%d),DL_ARFCN(%d)
###[NR_RFPROC] CalculateDLBand : BAND(%d),DL_ARFCN(%d)
###[NR_RFPROC] Invalid_RF_setting BAND and DL_ARFCN %d
RFAPI_CalculateDLBand: DL_EARFCN(%d),BAND(%d)
RFAPI_CalculateDLBand: NOT Supported DL_EARFCN %d, DL_BAND(%d)!!!
###[NR_RFPROC] NR_GSCN Gscn(%d),Freq(%d)
###[NR_RFPROC] Invalid_RF_setting GSCN
###[NR_RFPROC] SetRfRxBandwidth: rf(%d), bw(%d)
###[NR_RFPROC] SetRfRxMode: rf(%d), rx_mode(%d -> %d)
###[NR_RFPROC] GetCcPathIdx rf %d cc %d
###[NR_RFPROC] GetRtgPathIdx rf %d cc %d
###[NR_RFPROC] GetFePathIdx: cc(%d), path(%d), idx(%d), domain_type(%d)
###[NR_RFPROC] RfRficOff: rf_path %d, band %d, freq %d, bw %dMhz, beam_idx 0x%03x
###[NR_RFPROC] CheckRFBandSwitch: mmWave, rf_path %d, band %d, freq %d, bw %d, rx_mode %d, beam_idx 0x%03x
###[NR_RFPROC] SetPathEnable resume_type %d dcr %d forced set rtg to %d
###[NR_RFPROC] SetPathEnable resume_type %d dcr %d mxr %d
###[NR_RFPROC] CheckRFBandSwitch: RF_Init_Band is done. clear RF(#%d) RxUpdateModeFlag (LATCH -> DIRECT)
###[NR_RFPROC] CheckRFBandSwitch: Sub6G, rf_path(%d), band(%d), freq(%d), bw(%d), rx_mode(%d), doamin_type(%d)
###[NR_RFPROC] SetQuickRfOnOff::rf_path %d, rx_mode %d, onoff(%d)
###[NR_RFPROC] NSA_CheckRFBandSwitch: rf_path %d, band %d, freq %d, bw %d, rx_mode %d, beam_idx 0x%03x
###[NR_RFPROC] FindCurrentRFBandIndex: This model does not support RF band #%d
###[NR_RFPROC] Booting setup for RF
###[NR_RFPROC] RestoreRfPgcRamTable: rf_path(%d), dl_band(%d)
%s is already full.
%s is already full.
%s is already full.
%s is already nullptr.
%s is already nullptr.
%s is already nullptr.
###[AS] Tx AS: AsBitmap(0x%x) RfBand(%d) TxPwrdBm/RegTxThresh(%d/%d)
###[AS] SelectTxAnt: Current CurrTxAnt(%d: %s, %s), Rsrp(%d/%d/%d/%d)
###[AS] SelectTxAnt: Current CurrTxAnt(%d) - %s, Rsrp(%d/%d/%d/%d)
###[AS] SelectTxAnt: Current Search - TxPathIdx(%d), BestAntIdx(%d) AsValidBitMap(0x%x) TxPwrdBm(%d)
###[AS] SelectTxAnt: Update Best antenna: (TxPathIdx:%d, BestAnt:%s), Rsrp[%d] >= Rsrp[%d]+RxThresh,(%d >= %d + %d)
###[AS] SelectTxAnt: Update Best antenna: Rsrp[%d] >= Rsrp[%d]+RxThresh,(%d >= %d + %d)
###[AS] SelectTxAnt: Update Best antenna: Rsrp[%d] >= Rsrp[%d]+(RxThresh[%d]-RxThresh[%d]),(%d >= %d + %d)
###[AS] unavaiable Tx AS: invalid AS combination index, PathMaxIdx(Main/Sub)(%d/%d) CombIdx(0x%x)
###[AS] Select Antenna. Prev(%d), New(%d), NumTxPath(%d) BestAnt:Main/Sub(2/2)(%04d) AsMode/domain_type(2/2)(%04d) RfBand(%d)
###[AS] TxAntSwitch::IsAsSupportBand Tx AS BandIdx Error: rf_band(%d) band_idx(%d)
###[AS] TxAntSwitch::IsAsSupportBand Tx AS is not support this Band: RegBandEnable(%d)
###[AS] TxAntSwitch::IsAsSupportBand Disable Tx AS due to ENDC restrict LteBand(%d) NrBand(%d)
###[AS] CheckAntSwitchEnable: AsEnable(%d) RegTestMode(%d) CurrTxAnt/TargetSwitchTxAnt(%d/%d)
###[AS] Select Antenna. Prev(%d), New(%d), RfBand(%d)
###[AS] Antenna is switched to successfully (Ant 0)
###[AS] Antenna is not switched (Not supported)
###[AS] Can't found AsMode(%d)
###[AS][DomainType:%d] RunAsMode : Request Mode(%d)
###[AS] SendL1AsDmInfo AsStatus(%d) SelectedAnt(%d) domain_type(%d)
###[AS] InitTxAntSwitchVars
###[AS] RecordAsInfoUpdateHistory : arrayIndex(%d) txAsEvent(%d) eventTime(%d) eventCounter(%d)
###[NR_TX] ProcTxModeChange: tx_mode(0x%4x, cur4/req4), chg_type(%d), rf_path(0x%x, pri4/div4), main_dac_path(%d), ul_freq(%d), ul_bw(%d), domain_type(%d)
###[NR_TX] SetTxPathSwap:: Invalid ul_bw(%d), ul_freq(%d), ul_band(%d)
###[NR_TX] SuspendTxPath:: Suspend Cnf Timer Expiry(%d)
###[NR_TX] Invalid cur_tx_mode for TX_SHARING
###[NR_RFPROC] ChangeTxMode: Invalid chg_type(%d)
###[NR_RFPROC] SuspendTxPath: suspend_tx_path(0x%x), chg_type(%d), ul_freq(%d), ul_band(%d), ul_bw(%d), target_rf_path(%d)
###[NR_TX] SuspendTxPath:: Suspend Cnf Timer Expiry(%d)
###[NR_TX] ResumeTxPath: Not support 2TX, need to check ResumeTxPath procedure
###[NR_RFPROC] ResumeTxPath: req_tx_mode(0x%x), ul_info(%d, %d, %d), cfg_tx_rf_path(0x%8x, resume[rf4/dac8]/dac[main8/sub8])
###[NR_RFPROC] SetTxPathSwap: swapped_tx_mode(0x%x),tx_swap_val(0x%x), ul_freq(%d), ul_band(%d), ul_bw(%d), resume_rf_path4/swapped_dac_path4(0x%x), domain_type(%d)
###[NR_RFPROC] ChangeTxMode: ProcTxSuspendCnf(%d)
###[NR_TX] Invalid ul_band(%d) to call ResetFR2TxfDac()
###[NR_TX] Invalid ul_bw(%d), rf_tx_path(%d)
###[NR_RFPROC] ResetFR2TxfDac: rf_rx_path(%d), tx_dac_path(%d), slo_enable(%d), ul_band(%d), ul_bw(%d, 14-100M)
###[NR_RFPROC] SetEndcIntraBandEnable: change QS control.. prev_stauts(%d), current_status(%d)
###[NR_RFPROC] SetEndcIntraBandEnable: Do not change QS control.. prev_stauts(%d), current_status(%d)
###[NR_RFPROC] GetEndcIntraBandEnable : endc_intra_band(%d)
###[NR_RFPROC] num_matched_cnt(%d) matched_path(rxf) [ %d / %d / %d / %d ])
###[NR_RFPROC] Abnormal rf_path(%d) !!!
###[NR_RFPROC] Abnormal rf_path(%d) !!!
###[NR_RFPROC] GetTxDacPathFromTxMode: Invalid tx_mode(%d)
###[NR_RFPROC] PHY_L1C_CLAIT_START_IND:: demod_cc(%d) domain_type(%d)
###[NR_RFPROC] Abnormal rf_path(%d) !!!
###[NR_RFPROC] SendRfMipiDump domain_type(%d)
