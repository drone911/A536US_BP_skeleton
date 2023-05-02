###[NR_RXFILTER] Warning!!! should be check function input
###[NR_RXFILTER] SetBestDmixerFreq_PRI(ind=%d) : |||sfn|rxMode|domain|demCc||mxr(0x%08X), ssb_sinr(%d, %d), sch_sinr(%d, %d), afcXoOffsetPpt(%d)
###[NR_RXFILTER] ch_pal_DcxoTransmitFrequencyOffsetData : |||sfn|rxMode|domain|demCc||mxr(0x%08X), xo_freq_offset(%d), cell_idx(%d), domain_type(%d), ssb_sinr0(%d), sch_sinr0(%d), is_conn(%d)
###[NR_RXFILTER] SetBestDmixerFreq_DIV(ind=%d) : |||sfn|rxMode|domain|demCc||mxr(0x%08X), ssb_sinr(%d, %d), sch_sinr(%d, %d), afcXoOffsetPpt(%d)
###[NR_RXFILTER] SetRxfilterOutputCopy: src_mxr(%d), dst_pri_mxr(%d)
###[NR_RXFILTER] SetSloDigitalGain: mxr_path[%d] pcell_total_gain(%d,%d) pcell_analog_gain(%d,%d) dig_gain(%d,%d)
###[NR_RXFILTER] SetModuleAgcAntInput: mxr_path[%d] pcell_total_gain(%d,%d) pcell_analog_gain(%d,%d) module_agc_gain(%d,%d)
###[NR_RXFILTER] ChangeRxModeConfig: The requested RX mode(%d) is already set for path(%d)
###[NR_RXFILTER] ChangeRxModeConfig: dmxr_freq_afc(%d) pri_path rx_mode(%d)
###[NR_RXFILTER] ChangeRxMode(div) : div_rf_path_prx_bitmask (0x%x), check (%d, %d)
###[NR_RXFILTER] ChangeRxModeConfig: The requested RX mode(%d) pri_path(%d) div_path(%d) div_iqc_coeff(0x%x)
###[NR_RXFILTER] ChangeRxMode(div) : div_rf_path_prx_bitmask (0x%x), check (%d, %d)
###[NR_RXFILTER] ChangeRxModeConfig: The requested RX mode(%d), div_path(%d)
###[NR_RXFILTER] SetHalRxfDmixerInfo: pri_path_idx(%d), div_path_idx(%d), dmxr_freq_afc(%d, %d)
###[NR_RXFILTER] path_idx is invalid value!!!
###[NR_RXFILTER] GetHalRxfPathInfo: find_param(%s), input(%d), domain_type(%d) is not found in RXF HAL Info
###[NR_RXFILTER] GetHalDemodCcIdx: domain_type(%d) MsgGrpId(%d) ScellIdx(%d) DemodCcIdx(%d)
###[NR_RXFILTER] GetHalDemodCcIdx: No path found!!! domain_type(%d) MsgGrpId(%d) ScellIdx(%d)
###[NR_RXFILTER] GetHalCellGrpId: DemodCcIdx(%d) CellGrpId(%d)
###[NR_RXFILTER] %s: domain_type(%d)
###[NR_RXFILTER] ProcScellActDeactCnf: demod_cc(%d), mxr(%d), cnf_type(%d))
###[NR_RXFILTER] PrintRxfPathInfo[%d] is_pcell_path(%d), rf_dl_freq(band:%d, freq:%d, arfcn:%d), rf_bw/0/rx_bw(%d), path(0x%08x)(4bit:rf/mxr/rtg/pgc/tdbuf/out/demod/ssb)
###[NR_RXFILTER] PrintRxfPathInfo[%d] domain_type(%d), scell_idx/actdeact(%d), pair_path(%d), agc_mode/rx_mode(0x%03x), dmxr_slo/dmxr_afc(%d, %d)
###[NR_RXFILTER] IsCaAvailable true Band1(%d) Band2(%d)
###[NR_RXFILTER] IsCaAvailable false Band1(%d) Band2(%d)
##[NR_RXFILTER] matched_path %d %d %d %d %d %d %d
##[NR_RXFILTER] path_idx(%d) path_info.ca_pair_path[%d] <= matched_path[%d] %d
##[NR_RXFILTER] CtrlIntraBandCA cnf_type(%d)
##[NR_RXFILTER] path_idx(%d) rx_mode(%d) rf_path(%d) demod_path(%d) rx_dl_freq(%d) dmxr_freq_slo(%d)
##[NR_RXFILTER] idx(%d) idx_rx_mode(%d) pair_idx(%d) pair_rx_mode(%d) scell_idx(%d)
##[NR_RXFILTER] Added to 4rx path list : rxf_path_idx(%d) band(%d)
##[NR_RXFILTER] Path added : temp_path[%d](%d), temp_band[%d](%d)
##[NR_RXFILTER] temp_path : %d, temp_path_4rx : %d
###[NR_RXFILTER] SetAgcGainForNrIntraBandCa : found path index 1, temp_path[0] (%d)
##[NR_RXFILTER] CtrlIntraBandCA : NrIntraBandCA enable(%d)
##[NR_RXFILTER] GetNrIntraBandCaEnable(%d)
##[NR_RXFILTER] GetNrdcStatus : Invalid domain_type(%d)
##[NR_RXFILTER] GetNrdcStatus: domain_type(%d) dc_domain(%d) [%s]
###[NR_RXFILTER] %s: freq_range(%d) mxr(%d), rf(%d), rx_mode(0x%x)
###[NR_RXFILTER] %s: freq_range(%d) mxr(%d), rf(%d), rx_mode(0x%x)
###[NR_RXFILTER] SetTRF#1 : dmxr(%d), freqOffset(%d), dmxr_freq_afc(%d)
###[NR_RXFILTER] SetTRF#6 : rx_dl_freq(%d), dl_bw(%d), dcr(%d)
###[NR_RXFILTER] SetTRF : TRF skip because mmW(rfpath:%d) or Bw(%d <= 50MHz(7)) are not accepted
###[NR_RXFILTER] path %d is already used, rx_mode %d
###[NR_RXFILTER] Disable_Legacy_PcellPath : rf %d, dcr %d, iqc %d, mxr %d, demod %d, rxf_bw %d mode %d
###[NR_RXFILTER] Backup mxr PcellPath : rf %d, dcr %d, iqc %d, mxr %d, demod %d, rxf_bw %d mode %d
###[NR_RXFILTER] InitBackupHalRxfPathInfo - domain_type(%d)
###[NR_RXFILTER] RestoreBackupHalRxfPathInfo: domain_type(%d) ScellIdx(%d) PathIdx(%d) freq(%d) - [backupDB] ScellIdx(%d) PathIdx(%d) freq(%d)
###[NR_RXFILTER] Restore : iqc_coeff[%d] I_COEF(%d) Q_COEF(%d)
###[NR_RXFILTER] Restore : dcr_accum[%d] VALUE_I(%d) VALUE_Q(%d)
###[NR_RXFILTER] RestoreBackupHalRxfPathInfo: ScellIdx(%d) PathIdx(%d) band(%d) freq(%d) pair_path(%d)
###[NR_RXFILTER] SetBackupHalRxfPathInfo: domain_type(%d) ScellIdx(%d) PathIdx(%d) freq(%d) - [HAL] ScellIdx(%d) PathIdx(%d) freq(%d)
###[NR_RXFILTER] Backup : iqc_coeff[%d] I_COEF(%d) Q_COEF(%d)
###[NR_RXFILTER] Backup : dcr_accum[%d] VALUE_I(%d) VALUE_Q(%d)
###[NR_RXFILTER] SetBackupHalRxfPathInfo: NumRxfPathBackup(%d) ScellIdx(%d) PathIdx(%d) band(%d) freq(%d) pair_path(%d)
###[NR_RXFILTER] InitBplmnBackupHalPathInfo: domain_type(%d)
###[NR_RXFILTER] RestoreBplmnBackupHalPathInfo: domain_type(%d) ScellIdx(%d) PathIdx(%d) freq(%d) - [backupDB] ScellIdx(%d) PathIdx(%d) freq(%d)
###[NR_RXFILTER] Restore : iqc_coeff[%d] I_COEF(%d) Q_COEF(%d)
###[NR_RXFILTER] Restore : dcr_accum[%d] VALUE_I(%d) VALUE_Q(%d)
###[NR_RXFILTER] RestoreBplmnBackupHalPathInfo: ScellIdx(%d) PathIdx(%d) band(%d) freq(%d) pair_path(%d)
###[NR_RXFILTER] SetBplmnBackupHalPathInfo: domain_type(%d) ScellIdx(%d) PathIdx(%d) freq(%d) - [HAL] ScellIdx(%d) PathIdx(%d) freq(%d)
###[NR_RXFILTER] Backup : iqc_coeff[%d] I_COEF(%d) Q_COEF(%d)
###[NR_RXFILTER] Backup : dcr_accum[%d] VALUE_I(%d) VALUE_Q(%d)
###[NR_RXFILTER] SetBplmnBackupHalPathInfo: NumRxfPathBackup(%d) ScellIdx(%d) PathIdx(%d) band(%d) freq(%d) pair_path(%d)
###[NR_RXFILTER] m_IsBplmnOngoing(domain%d) %d
###[NR_RXFILTER] m_IsBplmnOngoing(domain%d) %d -> %d
###[NR_RXFILTER] SetDcxoDmixerWithDiffForDRX : setVal(%d, %d, %d), mxr_path(%d), domain_type(%d)
###[NR_RXFILTER] SetDcxoDmixerWithDiffForHO : setVal(%d, %d, %d), mxr_path(%d), domain_type(%d)
###[NR_RXFILTER] SetDcxoDmixerWithTemp : temperature(%d)
###[NR_RXFILTER] SetDcxoCheckPoint: rat_id(%d), temperature(%d), dmxr_ref(%d), domain_type(%d), mxr_path(%d)
###[NR_RXFILTER] GetDifferenceWithSnapshot for HO: m_PccRxfPathIdx(%d), mxr_path(%d), rat_id(%d)
###[NR_RXFILTER] GetDifferenceWithSnapshot for DRX: m_PccRxfPathIdx(%d), mxr_path(%d), rat_id(%d)
###[NR_RXFILTER] ConvertDmixerToFrequencyOffset : dmxr_ref(%d), xo_freq_offset(%d), dl_freq(%d)
###[NR_RXFILTER] ConvertFrequencyOffsetToDmixer : dmxr_ref(%d), xo_freq_offset(%d), dl_freq(%d)
###[NR_RXFILTER] SetPllOffset: XO zero!!!
###[NR_RXFILTER] SetPllOffset: Xo(%d), rx_dl_freq(%d), dmxr_ref(%d), domain_type(%d), mxr_path(%d)
###[NR_RXFILTER] UpdateRxModeInfo : Invalid RX path(%d) !!!
###[NR_RXFILTER] UpdateRxModeInfo(pri) : rx_path(%d), rx_mode DB change (%d -> %d), rxmode_db_update(%d)
###[NR_RXFILTER] UpdateRxModeInfo(div) : rx_path(%d), rx_mode DB change (%d -> %d)
###[NR_RXFILTER] GetHalRxfPathInfoSpcell : spcell path is not found, MsgGrpId(%d), domain_type(%d), L1Domain(%d)
###[NR_RXFILTER] GetHalRxfPathInfoSpcell : spcell_path_idx(%d), MsgGrpId(%d), domain_type(%d), L1Domain(%d)
###[NR_RXFILTER] UpdateCalRsrpOffset: rx_mode(%d), beam_idx(%d), domain_type(%d), cal_offset(%d,%d,%d,%d)
###[NR_RXFILTER] UnholdIqImbalanceMonitor::Domain(%d) NumActiveCell(%d) MixSelIdx(%d)
###[NR_RXFILTER] UnholdIqImbalanceMonitor::all deact scell
###[NR_RXFILTER] UnholdIqImbalanceMonitor__::IqcSel(%d)
###[NR_RXFILTER] UnholdIqImbalanceMonitor__::Check_IQC_Increase
###[NR_RXFILTER] GetFr2ScellRxfDb::Domain(%d), MixSelIdx(%d)
###[NR_RXFILTER] GetFr2ScellRxfDb::IqcSel(%d)
###[NR_RXFILTER] GetFr2ScellRxfDb:: find
###[NR_RXFILTER] GetFr2ScellRxfDb::Not find
###[NR_RXFILTER] GetNumActiveCell::NumActiveCell(%d)
###[NR_RXFILTER] CH_GetBbPath : input rf(%d), output mxr(%d)
