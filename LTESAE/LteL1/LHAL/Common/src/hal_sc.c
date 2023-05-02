[SC] ChangeCoreState: on_off(%d)
Change cell ID : %d -> %d
Change Downlink BW : %d -> %d
[SC] SetDlSystemInfo: mode(%d), [CID, BW, CP]([%d, %d, %d] -> [%d, %d, %d])
HALSC_SetDlEarfcn : dl_earfcn(%d), rf_band(%d), dl_freq(%d)
HALSC_SetUlEarfcn : ul_earfcn(%d), ul_freq(%d)
HALSC_SetTdpState Modem(skip)
assert condition : Current state is wrong
HALSC_SetTdpState Early return, RF unavailable:%d(tdpstate: %d->%d)
HALSC_SetTdpState Early return, ScgStackId(eDV_Active: %d):(tdpstate: %d->%d)
[SC] SetTdpState(CC%d, Dup(%s)): state(%d->%d)
[SC] SetRxMode(CC%d): mode(%x)
[SC] SetFePathIdx(CC%d): Not supported path(%d)
[SC] SetFePathIdx(CC%d): path(%d), idx(%d)
[SetSCellNtf]pcell position (%d), scell position(%d)
[SetSCellNtf]SetTdpState(CC%d):state(%d->%d)
HALSC_GetUlEarfcn: type(%d), halsc_cc_info[cc].ul_bw(%d), cc(%d), slo_cc(%d)
halsc_cc_info[slo_cc].ul_bw(%d), halsc_cc_info[cc].ul_earfcn(%d), halsc_cc_info[cc].ul_rf_earfcn(%d)
HALSC_GetUlEarfcn: halsc_cc_info[%d].slo_pair_num(%d)
HALSC_GetUlEarfcn: halsc_cc_info[%d].slo_pair_num(%d)
[SC] HALSC_GetUlBw: type(%d) cc(%d) ul_bw(%d)
[SC] HALSC_GetUlBw: type(%d) cc(%d) slo_pair_num(%d) dl_bw(%d)
[SC] HALSC_GetUlBw: type(%d) cc(%d) dl_bw(%d)
[SC] HALSC_GetRxMode: eDV_Active(%d) IsDuringSCGMeas(%d), refer to MCG halsc_cc_info
[SC] IratInitFaInfo: AGC(%d, %d)
[SC] IratStoreFaInfo: AGC(%d, %d)
[SC] IratConfigGapInIdle: gDrx_ActiveRat(%d), PD_LTE_STATUS(%d)
[SC] (IRAT config) sfn(%d), tti(%d), offset(%d)
[SC] (IRAT gap_start) sfn(%d), tti(%d), offset(%d)
[SC] (IRAT gap_end) sfn(%d), tti(%d), offset(%d)
[SC] (HALSC_IratNrSsbMargin) ssbPeriodicity(%d), ssbOffset(%d)
[SC] (HALSC_IratNrSsbMargin) Current sfn(%d), tti(%d), offset(%d)
[SC] (HALSC_IratNrSsbMargin) Ssb sfn(%d), tti(%d), diff(%d)
[SC] IratConfigGapInSuspend: gDrx_ActiveRat(%d), PD_LTE_STATUS(%d)
[SC] (IRAT config) sfn(%d), tti(%d), offset(%d)
[SC] (IRAT gap_start) sfn(%d), tti(%d), offset(%d)
[SC] (IRAT gap_end) sfn(%d), tti(%d), offset(%d)
[SC] (current_time) sfn(%d) tti(%d) offset(%d)
[SC] (gap_pre) sfn(%d) tti(%d) offset(%d)
[SC] gHALSC_Srch_Meas_isvalid(%d)
[SC] IratConfigGapInConn
[SC] GAP is already in use. Need to check!!!
[SC] Gap timing(%d): sfn(%d), tti(%d), current time: sfn(%d), tti(%d), offset(%d)
[SC] Gap timing(MGTA): sfn(%d), tti(%d), length(%d)
[SC] Gap timing updated for NR interband Gap: SFN(%d), TTI(%d)
[SC] Gap timing is same as before: SFN(%d), TTI(%d)
[SC] HALSC_SendLcpuGapIPCForNrGap start_time(%d) length(%d) rtg_diff(%d), nrGapStartSfnTti(%d)
[SC] HALSC_SendLcpuGapIPCForNrGap NR start(%d) NR end(%d) LTE start(%d), LTE End(%d)
NR gap duration is involved in LTE gap, do nothing
NR gap duration overlapped LTE gap, do nothing
LTE gap duration is involved in NR gap, do nothing
NR gap duration overlapped LTE gap, do nothing
NR gap duration overlapped LTE gap, do nothing
NR gap duration is involved in LTE gap, do nothing
NR gap duration overlapped LTE gap, do nothing
LTE gap duration is involved in NR gap, do nothing
[SC] IratConfigUmtsStartSignal: sfn(%d), tti(%d), offset(%d)
[SC] IratClearUmtsStartSignal: umtsStartSig(%d)
[SC] IratInitLteRF: earfcn(%d), rf_band(%d)
[SC] IratInitLteRFInGap: earfcn(%d), rf_band(%d), pdm(%d)
[SC] InitSync
[SC] SetServingCell: CID(%d), CP(%d), POS(%d)
[SC] MIB false alarm : All Zero
[SC] MIB(pbch_cc(%d):dl_bw(%d),sfn(%d)
[SC] Invalid SHM.cnt(%d)
[SC] MIB(pbch_cc(%d):dl_bw(%d),sfn(%d)
[SC] MIB false alarm : Ant num error(0x%x)
[SC] MIB false alarm : BW ERROR(%d)
[SC] Serv(CC%d) is enabled(tdp_state[%d]) Or is reserved(%d)
[SC] Serv(CC0) MIB(Previous Information): sfn[%d], dl_bw[%d], phich_duration[%d], phich_resource[%d], enb_ant_num[%d]
[SC] Serv(CC%d) MIB: bch_dec_idx[%d], pbch_trial_cnt[%d], idx+cnt[%d], is_sys_info_changed[%d]
[SC] Serv(CC%d) MIB: DL_BW[%d], PHICH.Resource[%d], PHICH.Duration[%d], NG[%d], SFN[%d], AntNum[%d]
[%4d, %3d] MasterInformationBlock : dl-SystemBandwidth %d, phich-Duration %d, phich-Resource %d, systemFrameNumber 0x%02X, ant_num: %d
[SC] HeNB(CC%d) MIB: DL_BW[%d], PHICH.Resource[%d], PHICH.Duration[%d], NG[%d], SFN[%d], AntNum[%d]
[SC] ITF(CC%d) MIB: DL_BW[%d], PHICH.Resource[%d], PHICH.Duration[%d], NG[%d], SFN[%d], AntNum[%d]
[SC] D2D(CC%d) MIB: DL_BW[%d], SFN[%d], TTI[%d], SA[%d], IC[%d], RES[%d]
[SC] Invalid PBCH mode(%d)
dmxr %d freqOffset %d
dmxr %d freqOffset %d avgRSSI %d lbw %d
[SC] Run CL-AIT in weak signal! CA_AITen(%d)
[MTM] gHALSC_AgcIndexForMtm8960(%d, %d)
[MTM] ProcSync10msIntr: Abnormal AGC Index(%d, %d)
[MTM] gHALSC_AgcIndexForMtm8960[%d][%d] = %d
[MTM] 8960_Average_AGC(%d, %d)
[MTM] rsrp_offset(%d, %d), dB_diff(%d)
[SC] prevLteBand[HALDSDS_STACK1] 0 -> %d
[SC] prevLteBand[HALDSDS_STACK2] 0 -> %d
[SC-GNSS] dl_earfcn: %d (skip updating earfcn until first measurement results are received)
[SC-GNSS] dl_earfcn: %d rf_band: %d rssi: %d tx_power: %d
[SC-GNSS] requestType: %d prevLteBand: %d requestCount: %d
HALSC_ProcSync10msHisr(LABS(afc_angle):%d cnt:%d afc_pdm:%d)
HALSC_ProcSync10msHisr(on holding)(LABS(afc_angle):%d cnt:%d afc_pdm:%d)
HALSC_ProcSync10msHisr(current_time.sfn:%d current_time.tti:%d)
HALSC_ProcSync10msHisr(After AFC HOLD STOP afc_pdm: %d)
[SC] (After AFC HOLD STOP afc_pdm: %d)
HALSC_ProcSync10msHisr(current_time.sfn:%d current_time.tti:%d)
HALSC_ProcSync10msHisr(AFC HOLD)afc_pdm: %d HALSC_FirstAfcPdmStored: %d HALSC_AfcPdmStored: %d)
[SC] (afc_pdm: %d HALSC_FirstAfcPdmStored: %d)
HALSC_ProcSync10msHisr(No Action due to any srchoffset but no pdmoffset) afc_pdm: %d HALSC_FirstAfcPdmStored: %d HALSC_AfcPdmStored: %d)
HALSC_ProcSync10msHisr(Start FastSrch) afc_pdm: %d HALSC_FirstAfcPdmStored: %d HALSC_AfcPdmStored: %d)
HALSC_ProcSync10msHisr(NO ACT due to ongoing FS)afc_pdm: %d HALSC_FirstAfcPdmStored: %d HALSC_AfcPdmStored: %d)
[SC] (SFN:%d) Out Sync Rate = %d (str:%d, thr:%d) rsrp(%d) rsrq(%d)
[SC] SINR(%d, %d)
[SC] In Sync Rate = %d (str:%d, thr:%d)
[SC] Out Sync Rate = %d (str:%d, thr:%d)
Out Sync Rate = %d (str:%d, thr:%d)
[SC] SetTdpBeforeInterHOStep1: AGC OFF(%d, %d), AFC HOLD(%d)
[SC] SetTdpBeforeInterHOStep2: AGC Index = (%d, %d)
[SC] SetTdpBeforeBlindHoSrch: Saved AFC value(%d)
[SC] SetTdpBeforeIntraHO: Saved AFC value(%d)
[SC] SetTdpAfterHOStep1: AGC gain(%d, %d)
[SC] SetTdpAfterHOStep2: Restored AFC value(%d)
[SC] SetTdpAfterHOStep3
[SC] SetTdpBeforeBplmnScanStep2(InterANR): AGC(TD-ASYNC) ON
[SC] SetTdpBeforeBplmnScanStep2: AGC(TD-ASYNC) ON
[PWR_OPT] Wakeup is not over yet, do not trigger Meas-schedule to RRM gDrxL1_Flag[%d]
[4G_DRDS] eDV_AvailableforEPT. Don't send Meas schedule prior to EDV activation
[SC] ProcGapAHisr: default GAP, intra meas or scell meas is ongoing or eDV active, dont power off RF
[SC] ProcGapAHisr(end): sfn(%d), tti(%d), offset(%d), mode(%d, %d)
[SC] ProcGapBHisr(end): sfn(%d), tti(%d), offset(%d), mode(%d, %d)
[SC] InterFreq/IRAT GapA Time: %d [us], Inner Gap Time : %d [us], GapB Time : %d [us]
[SC] --- Default Interrupt
[SC] --- Default DMTC Interrupt
[SC] ProcGapBHisr: Unknown GAP state(%d), mode(%d, %d)
[SC] LteMifFreq(%d)
[SC] ProcGapCHisr: Unknown GAP state(%d), mode(%d, %d)
[SC] ProcGapCHisr(end): sfn(%d), tti(%d), offset(%d), mode(%d, %d)
[SC] GetNextGapBoundary(%d): cur_sfn_tti(%d), gap_sfn_tti(%d)
[SC] GetNextGapBoundary(%d): Invalid!!! cur_sfn_tti(%d), gap_sfn_tti(%d) GapPeriod(%d)
[SC] UE state (%d), Gap Start Offset %d ms
[SC] UE state (%d), Gap Start Offset %d ms
[SC] GetNextGapBoundary(%d): cur_sfn_tti(%d), gap_sfn_tti(%d)
[SC] CheckNextGapBoundary: Gap is disabled
[SC] CheckNextGapBoundary(GAP,DMTC both configured margin + 4ms)(diffRTG:%d): Gap timing: sfn(%d), tti(%d), current time: sfn(%d), tti(%d), offset(%d)
[SC] CheckNextGapBoundary(diffRTG:%d): Gap timing: sfn(%d), tti(%d), current time: sfn(%d), tti(%d), offset(%d)
[SC] GetNextDmtcBoundary(%d): cur_sfn_tti(%d), dmtc_sfn_tti(%d)
[SC] GetNextGapBoundary(%d): Invalid!!! cur_sfn_tti(%d), dmtc_sfn_tti(%d) DmtcPeriod(%d)
[SC] ConfigGapInterrupt: earfcn(%d), bw(%d)
[SC] GapLevelState(%d), AgcOvr(%d, %d), PschPwr(%d, %d, %d), SrchResultValid(%d)
assert condition : fa_info is NULL
[SC] GAP is already in use. Need to check!!!
[SC] UE state (%d), Gap Start Offset %d ms
[SC] UE state (%d), Gap Start Offset %d ms
[SC] Gap timing(%d): sfn(%d), tti(%d), current time: sfn(%d), tti(%d), offset(%d)
Turn On Rx Path Timer started with [%u]us!!!
ConfigDefaultGapInterrupt (GapConfigured: %d, DefaultIntrFlag: %d)
ConfigDefaultGapInterrupt (remainGAPEndTime: %u, remainEarlyPauseTime: %u, remainWakeupTimeofOtherStack: %u)
[DMTC] Disable Default GAPs : DefaultIntrState(%d)
ConfigDefaultDmtcInterrupt
MeasDurationInd - SGapB enabled (sfn:%d, tti%d)
[SC] Measurement Scheduling (meas_enable:%d, meas_period:%d, gap_enable:%d, dmtc_enable:%d)
[SC] GAP Scheduling Start, sfn = %d, tti = %d
[SC] GAP Scheduling Stop, sfn = %d, tti = %d
[SC] DMTC Scheduling Start, sfn = %d, tti = %d
[SC] DMTC Scheduling Stop, sfn = %d, tti = %d
[SC] Measurement Scheduling - no change in current GAP(%d) or DMTC(%d) config
[SC] GAP Scheduling Stop
[SC] Measurement Scheduling Stop
[SC] GAP Scheduling Stop
[SC] Dmtc Scheduling Stop
[SC] Do not disable Connected Schedule Interrupt
[SC][DCXO][DEBUG] HALSC_SetDcxoEnable : srch_mode(%d), dcxo_enable(%d)
[SC][DCXO][DEBUG] HALSC_GetDcxoEnable : enable(%d)
[SC][DCXO] DCXO sinr(%d %d %d %d) afc ppm(%d) cell id/ue state/rat(%05d), temp(%d)
[SC][DCXO] HALSC_SetAfcDcxoDiffDrx : Ignored , ModempowerON %d RFUnavailable %d
[SC][DCXO] HALSC_SetAfcDcxoDiffDrx : HALSC_AfcPdmStored(%d), Diff(%d), totalPdm(%d), temp(%d)
[SC][DCXO] HALSC_SetAfcDcxoDiffHo : HALSC_AfcPdmStored(%d), Diff(%d), totalPdm(%d), temp(%d)
[SC][DCXO] HALSC_SetDcxoCheckPoint : ratId(%d), HALSC_AfcPdmStored(%d), temp(%d)
[SC][DCXO] HALSC_SetDcxoAfcPdmValue : HALSC_AfcPdmDefault(%d), HALSC_AfcPdmCal(%d)
[SC] SetAntennaMode: op_mode(%d), rx_mode(%x -> %x)
[SC] ConfigAntenna: Not supported antenna config(%d)
[SC] InitCCInfo
[SC] InitforDRX
[SC] ConfigRTG: time_offset(%d), RTG(%d, %d, %d, %d)
[SC] ConfigRTGforIRAT: meas_bw(%d), cell_id(%d), time_offset(%d)
[SC] SwReset
[SC] ReInitSync !!!
[SC] FaSelectReady: Invalid FA selection state(%d)
[SC] EnableSync: mode(%d), earfcn(%d)
[SC] EnableSync: Invalid cc(%d)
[SC] Invalid CC Idx for SCG stack (%d)
[SC] DRDS_DeepSrch should be done only for SCG stackID
[SC] Disable sync as SCG is stopping search
[SC] Do not disable Sync Intr as other stack is active and current stack doesnt have RF
[SC] EnablePbch: cc(%d), mode(%d)
[FEDV] Do not DisablePbch: pbch_mode(%d)
[SC] DisablePbch: cc(%d), mode(%d)
[SC] EnableMeas: Invalid measure cnt(%d)
[SC] EnableMeas: Invalid cc(%d)
[SC] RSTD: PRS Measurement Ongoing, Delay CRS Measurement Request(%d)
[SC] DMTC EnableMeas(CC%d): start(%d), end(%d), bw(%d), dmtc_config(%d)!
[SC] EnableMeas(CC%d): mode(%d), cnt(%d), serv_bw(%d)!
[SC] DisableMeas
[DSDS] Modem is power down state, DsdsConnScheduleIntr handling is abnormal
[DSDS] Conn Schedule Interrupt [%d]
[DSDS] Conn Schedule Interrupt Invaild input
[DSDS] Do not disable GAP Intr as RF is with other stack(or X2L irat meas on other stack)
RF not available hence do not disable interrupt of other stack
Force disable Interrupt!! because RF release or pause
Force disable Interrupt SCG!!
[AIT] Intr_MtmSa1ms is enabled for Intr_AitDumpDone
[AIT] Intr_MtmSa1ms is disabled for Intr_AitDumpDone
HALSC_HoldTdpBlockDsdsPause
[SADS] skip due to NR path
[SC] HoldTdpBlock: PDM(%d), AGC(%d, %d) AGC_MODE(%d)
HALSC_HoldTdpBlockDsdsPauseSCG
[SC] HoldTdpBlock: PDM(%d), AGC(%d, %d) AGC_MODE(%d)
UE in DRX Sleep. Skipping TDP restore!!!
[DRX] [Before AGC start] Turned on Rx diversity paths according to the current Rx mode(%x)
[DRX] (Adaptation): Changed to 4Rx for monitoring
[DRX] AGC gain recovery(%d, %d)
[SC] RestoreTdpBlock: UeState(%d), PDM(%d), AGC(%d, %d) AGC MODE(%d)
[SC] HoldTdpBlock: PDM(%d), AGC(%d, %d)
[PWR_OPT] Skip TDP enable!!!
[SC] RestoreTdpBlock: UeState(%d), PDM(%d), AGC(%d, %d)
[SC] RestoreLteCommonBlockAfterUmtsCgiAcq: start
[SC] RestoreLteCommonBlockAfterUmtsCgiAcq: finish
[SC] ProcSGapAIntr(start): sfn(%d), tti(%d), offset(%d), mode(%d, %d)
[SC] SRCH AGC0[0-4]: %08x %08x %08x %08x %08x
[SC] SRCH AGC1[0-4]: %08x %08x %08x %08x %08x
[SC] SRCH AGC0[5-9]: %08x %08x %08x %08x %08x
[SC] SRCH AGC1[5-9]: %08x %08x %08x %08x %08x
[SC] [%d]SFN[%d], Cell ID[%d], CP Type[%d] UL BW[%d] Position[%d]
[SC] rf_freq is 0.
[SC] control_per_pdm is 0.
[SC] HALSC_UpdateAfcPdmBySrchFO: HALSC_AfcPdmSrchFO(%d, %dHz) HALSC_AfcPdmStored(%d) HALSC_AfcPdmCal(%d) freq(%d)
HALSC_ResetAfcPdmValue(use cal data due to PowerON)(HALSC_AfcPdmStored:%d)
HALSC_ResetAfcPdmValue(return due to Modem PD)(HALSC_AfcPdmStored:%d)
HALSC_ResetAfcPdmValue(use HALSC_AfcPdmStored)(HALSC_AfcPdmStored:%d HALSC_AfcPdmDefault:%d HALSC_AfcPdmCal:%d(%d))
HALSC_ResetAfcPdmValue(use HALSC_AfcPdmSrchFO)(HALSC_AfcPdmSrchFO:%d(%dHz) HALSC_AfcPdmStored:%d HALSC_AfcPdmDefault:%d HALSC_AfcPdmCal:%d(%d))
HALSC_AfcPdmMode(%d))
HALSC_ResetAfcPdmValue(use HALSC_AfcPdmCal)(HALSC_AfcPdmStored:%d HALSC_AfcPdmDefault:%d HALSC_AfcPdmCal:%d(%d))
HALSC_ResetAfcPdmValue(use HALSC_AfcPdmDefault)(HALSC_AfcPdmStored:%d HALSC_AfcPdmDefault:%d HALSC_AfcPdmCal:%d(%d))
HALSC_ResetAfcPdmValue(use 4G CAL DATA)(4G:%d HALSC_AfcPdmStored:%d HALSC_AfcPdmDefault:%d HALSC_AfcPdmCal:%d(%d))
HALSC_ResetAfcPdmValue(use default due to large pdm offset)(HALSC_AfcPdmStored:%d HALSC_AfcPdmDefault:%d HALSC_AfcPdmCal:%d(%d))
HALSC_ResetAfcPdmValue(use HALSC_AfcPdmStored)(HALSC_AfcPdmStored:%d HALSC_AfcPdmDefault:%d HALSC_AfcPdmCal:%d(%d))
HALSC_ResetAfcPdmValue(find Y value)(HALSC_AfcPdmStored:%d afc_pdm:%d pdm_offset[%d]:%d, gL1LC_pdm_control_value:%d)
HALSC_ResetAfcPdmValue(find Y value)(HALSC_AfcPdmStored:%d afc_pdm:%d pdm_offset[%d]:%d, gL1LC_pdm_control_value:%d)
HALSC_StoreAfcDefaultPdmValue(2G Cal update due to AFC HOLD)(HALSC_AfcPdmDefault:%d )
HALSC_StoreAfcDefaultPdmValue(2G Cal update due to limit)(HALSC_AfcPdmDefault:%d )
HALSC_StoreAfcDefaultPdmValue(normal update)(HALSC_AfcPdmDefault:%d )
HALSC_StoreAfcPdmValue(Not update SW PDM due to AFC HOLD)(current_AfcPdm:%d)
HALSC_StoreAfcPdmValue(force_update)(HALSC_AfcPdmStored:%d )
HALSC_StoreAfcPdmValue(due to limitation)(afc_pdm:%d HALSC_AfcPdmStored:%d LABS(afc_angle):%d)
Store HALSC_AfcPdmStored(%d)(%d) : %d
Not Store HALSC_AfcPdmStored During BPLMN or CGI: %d, PREV:%d (%d)
HALSC_GetAfcPdmValue(Not get SW PDM due to AFC HOLD)(afc_pdm:%d HALSC_AfcPdmStored:%d)
HALSC_GetAfcPdmValue(limit due to large offset(afc_pdm:%d HALSC_AfcPdmStored:%d LABS(afc_angle):%d)
[SC] GetAfcPdmValue: afc_pdm(%d), HALSC_AfcPdmStored(%d)
HALSC_UpdateAfcPdmValueInFlash(update Y value)(HALSC_AfcPdmStored:%d)
[SC] GetAfcPdmValueInFlash: AFC CAL DATA(%d)
HALSC_CheckAfcBypassmode(AFC HOLD STOP)(afc_pdm:%d HALSC_AfcPdmStored:%d)
HALSC_CheckAfcBypassmode(normal status)(afc_pdm:%d HALSC_AfcPdmStored:%d)
[SC] SINR: CC0(%3d, %3d), CC1(%3d, %3d)
[SC] SINR: CC2(%3d, %3d), CC3(%3d, %3d)
[SC] SINR: CC4(%3d, %3d), CC5(%3d, %3d)
[PHY] STAT-ERR(id,val): 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x
[PHY] STAT(mcs/rb/grant): %d, %d, %d, %d, %d, %d, %d
[PHY] STAT(rank4/256q/layer): %d, %d, %d, %d, %d, %d, %d
[PHY] STAT-HARQ(diffTbs/maxRetx/a2n): 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x
[PHY] STAT-TX(): 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x
[PHY] STAT-CYCLE: 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x
[PHY] STAT-CCH(): 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x
[PHY] STAT-DEMOD(dse/dop): %d, %d, %d, %d, %d, %d, %d
[SC] SetMeasInfoUpdate: Invalid meas mode(%d)
[SC] SetMeasInfoUpdate: Not found available CC for earfcn(%d)
[SC] SetMeasInfoUpdate(csi-rs): csi_rs_id(%d), scrambling_id(%d), resource_config(%d), subframe_offset(%d)
[SC] SetMeasInfoUpdate: earfcn(%d), cell_info(%d, %d, %d), cc(%d), frame_pos(%d), period(%d)
[SC] CheckGapSrchResultValid: EARFCN(%d), AgcValidCheck(TRUE), AGC(%d, %d)->(%d, %d)
[SC] CheckGapSrchResultValid: EARFCN(%d), AgcValidCheck(FALSE), AGC(%d, %d)->(%d, %d)
[SC] SetSFN: sfn(%d)
[SC] ProcMeasIntr!
HALSC_DefaultIntrFlag(%d -> %d)
State:%d, Gap start Sfn: %d, Tti: %d, Offset: %d
Remaining time until Gap start (%ums)
Gap End Sfn: %d, Tti: %d, Offset: %d
[SC] HALSC_GetGapEndRemainingTtiTime : gap state(%d) remaining_time(%d)
[SC] HALSC_IratLteTimingDifferenceRtg : startRtgUnit(%d) endRtgUnit(%d)
HALSC_IratCdmaTimingMoveByRtg : start is NULL
calculated sfn(%d), tti(%d), offset(%d)
[SC] IratGetLatchInfo: SFN(%d), TTI(%d), OFFSET(%d)
[SC] IRAT Timing(LTE): SFN(%d), TTI(%d), OFFSET(%d)
[SC] Post IRAT Reference Time(LTE): SFN(%d), TTI(%d), OFFSET(%d)
[SC] IRAT LTE Side Latch Reference Timing Update: deltaRtg(%d)
[SC] IRAT Timing(LTE): SFN(%d), TTI(%d), OFFSET(%d)
[SC] Post IRAT Reference Time(UMTS): SFN(%d), SLOT(%d), CHIP(%d)
[SC] IRAT Timing(UMTS): SFN(%d), SLOT(%d), CHIP(%d)
[SC] Post IRAT Reference Time(GSM): frameNumber(%d), Qb(%d)
[SC] IRAT Timing(GSM): frameNumber(%d), Qb(%d)
[SC] Post IRAT Reference Time(CDMA: RAT %d): systemTime(High: 0x%x Low: 0x%x)
[SC] IRAT Timing(CDMA: RAT %d): systemTime(High: 0x%x Low: 0x%x)
[SC] Error timeDiff(<=0): %d,
[SC] abnormal bRefer_Next_Sfn : %d,
[SC] HALSC_IratCdmaRefTimingUpdate: gSiWindowEnd_Info.sfn(%d), gSiWindowEnd_Info.tti(%d), gL1SiRcv_Info.sfn(%d), gL1SiRcv_Info.tti(%d), gL1SiRcv_Info.offset(%d)
[SC] cdmaSysTime(High: 0x%x Low: 0x%x)
[SC] IRAT Timing(CDMA): Ref CDMASystemTime(High: 0x%x Low: 0x%x)
[SC] updateCnt(%d), deltaRtg(%d)
[SC] IRAT Timing(LTE): SFN(%d), TTI(%d), OFFSET(%d)
[SC] IRAT Timing(UMTS): SFN(%d), SLOT(%d), CHIP(%d)
[SC] IRAT Timing(GSM): frameNumber(%d), Qb(%d)
[SC] HALSC_IratChangeUmtsOffsetToRefTime(umtsTime): SFN(%d), SLOT(%d), CHIP(%d)
[SC] HALSC_IratChangeUmtsOffsetToRefTime(umtsRefTime): SFN(%d), SLOT(%d), CHIP(%d)
[SC] HALSC_IratChangeUmtsOffsetToRefTime timeDiff: %s, newOffset: %d
[SC] HALSC_IratChangeUmtsOffsetToUmtsTime(umtsTime): SFN(%d), SLOT(%d), CHIP(%d)
[SC] HALSC_IratChangeUmtsOffsetToUmtsTime(umtsRefTime): SFN(%d), SLOT(%d), CHIP(%d)
[SC] HALSC_IratChangeUmtsOffsetToUmtsTime timeDiff: %s, newOffset: %d
[SC] MonitorTest: Current TDP state[%s]
[SC] MonitorTest: Invalid TDP state[%x]
PaPb_update: %d, gPaPb_Control_dB: %d, gRSRP_Control_dB : %d
[SC] UpdateAgcRmsFromPaPb: Invalid PA, PB value(%d, %d)
[SC] UpdateAgcRmsFromPaPb: Invalid PA, PB value(%d, %d)
[SC] UpdateAgcRmsFromPaPb: Invalid PA, PB value(%d, %d)
[SC] Pa: %d, Pb : %d, Pa_dB: %d, Pb_dB : %d, Rho_a_rx: %d, Rho_b_rx : %d
HALSC_CheckSpiForAgc(%d, %d)
Please Check spi
[SC] SetSyncMode(%d -> %d)
[SC] SetMeasMode(%d -> %d)
[SC] SRCH AGC0[0-4]: %08x %08x %08x %08x %08x
[SC] SRCH AGC1[0-4]: %08x %08x %08x %08x %08x
[SC] SRCH AGC0[5-9]: %08x %08x %08x %08x %08x
[SC] SRCH AGC1[5-9]: %08x %08x %08x %08x %08x
[SC] gInit_agc_gain(%d)(%d) max_pos_tt(%d)
[SC] GetCellSearchResult: Activate CC index(%d) Cid(%d) Candi_id(%d)
[SC] GetCellSearchResult: Activate cell search done cc(%d)(%d) candi(%d)
[SC] GetCellSearchResult: DRS Position Calculate is Wrong DMTC(%d) CUR(%d)
[SC] SRCH AGC: GAIN(%d, %d) -> (%d, %d)
[SC] GetCellSearchResult: PSSS is not valid!!! num_candi(%d -> %d)
[SC] GetCellSearchResult: PSS is not valid!!! num_candi(%d -> %d)
[SC] SRCH AGC: GAIN(%d, %d) -> (%d, %d)
[SC] SetMeasInputList: Not supported CC index(%d), earfcn(%d)
[SC] earfcn(%d), rsrp_temp_offset(%d), measBitShift(%d)
[SC] Not supported CC index(%d)
[SC] Not supported CC index(%d)
[SC] SetPCellInfo: [%4d] Cell ID[%d] CP[%d] POS[%d] RSRP[%d]
[SC] HALSC_UeState Change (%s) -> (%s)
[SC] MeasConfig(%d => %d)
[SC] PreMeasConfig (%d => %d)
[SC] PreMeasConfig (%d)
[NRDS] NrGrantPendedByCdrxMeas set to FALSE
[DRX, 4GDS] Set measconfig as PreMeasConfig: %d
[SC] HALSC_ReconfigureGapStartSfn (SFN:%d, TTI:%d, Period:%d)
[SC] ConfigAgapInterrupt: state(%d)
[SC] GAP is already in use. Need to check!!!
[SC] HALSC_ConfigAgapInterrupt: current Hw Time sfn[%d], tti[%d] offset[%d]!
[SC] HALSC_ConfigAgapInterrupt: GAP_SET configured at sfn[%d], tti[%d]! phich_ng:%d phich_duration:%d
[SC] UpdateAgapInterrupt: state(%d)
[SC] UpdateAgapInterrupt: current Hw Time sfn[%d], tti[%d] offset[%d]!
[SC] UpdateAgapInterrupt: GAP_SET configured at sfn[%d], tti[%d]!
[SC] ConfigAgapMibDec: cell_id(%d), frame_position(%d)
[SC] ConfigAgapSibDec: cell_id(%d), bw(%d), frame_position(%d)
[SC] HALSC_ConfigAgap: Error! Agap already active!
[SC] HALSC_ConfigAgap: Target Cell info: Cell_id [%d] Earfcn [%d], cp_type[%d], frame_Pos[%d]
[SC] HALSC_ConfigAgap: Serving Cell Info: Cell_id [%d] Earfcn [%d], cp_type[%d], frame_Pos[%d]
[SC] DisableAgap
[SC] StopAgap
[A-GAP] Timer expired! in dec_mode(%d): count(%d)
There is no reserved NR CC, can't reserve cc for SCG CC
CC[%d] cannot be allocated due to error state[%d]
[SC] CC%d: earfcn(%d), resv/type(%02d), pair_cc(%02x), tdp_state(%d), pair_num/rf_path/rx_mode(%x), slo_pair(%x), tdbuf/output/rtg/demod(0x%x)
Abnormal dmxr_freq_value!! [SC] CC%d: pair_num(%d), dmxr_freq_value(%d)
[SC][SEARCH] CC%d: earfcn(%d), resv/type(%02d), pair_cc(%02x), tdp_state(%d), pair_num/rf_path/rx_mode(%x), slo_pair(%x)
[ConfigSingleLO]SetTdpState(CC%d):state(%d->%d)
[SC] ConfigSingleLO(CC%d): cmd(0), rf(%d)
[SC] ConfigSingleLO: Not found available CC for earfcn(%d)
[SC] ConfigSingleLO(CC%d): cmd(1), rf(%d)
[SC] ConfigSingleLO(CC%d): cmd(%d), slo1(%d, %d) rf(%d)
[SC] ConfigSingleLO(CC%d %d): overlap_space(%d), bw_rate(%d), rf_earfcn(%d), rf_bw(%d)
[SC] ConfigSingleLO(CC%d): cmd(%d), slo1(%d, %d), rf(%d)
[SC] ConfigSingleLO(CC%d): Unknown command(%d)
[SC] ConfigSingleLO(CC%d): cmd(%d), SingleLO not configured!!
[SC] ConfigSingleLO(CC%d): cmd(%d), slo0(%d, %d)
[SC] ReleaseCaSingleLO(CC%d): earfcn(%d), slo_pair_num(%d)
[SC][DEBUG] ReleaseCaSingleLO(SetTdpState) : CC(%d), state(%d->%d)
[SC][DEBUG] ReleaseCaSingleLO(RF_freq and RF_bw are changed): cc(%x), rf_path(%d), rf_earfcn(%d), rf_bw(%d)
[SC] CheckSingleLOCondition(%d): num_scell_freq(%d), earfcn(%d), non_contiguous_target_scell(%d)
[SC] CheckSingleLOCondition: num_scell_freq(%d), non_contiguous_slo_active(%d)
[SC] CheckSingleLOCondition: cc(%d), non_contiguous(%d), pair_num(%d), type(%d), non_contiguous_slo_active(%d)
[DEBUG] MAKE SLO LIST: cc(%d), dl_earfcn(%d), dl_bw(%d), cnt(%d)
[DEBUG] MAKE SLO LIST: cc(%d), dl_earfcn(%d), dl_bw(%d), cnt(%d)
[SC][DEBUG] CheckSingleLOCondition(non-contiguous->contiguous) : slo_cell_param_cc(%d), Is_non_contiguous_slo(%d), slo_pair_num(%d)
[SC][DEBUG] CheckSingleLOCondition(non-contiguous->contiguous) : Is non-contiguous slo release required? (%d) 0: FALSE / 1: TRUE
[SC][DEBUG] CheckSingleLOCondition(non-contiguous->contiguous) : cc idx/tdp_state(%d,%d) slo_cc idx/tdp_state(%d,%d)
[SC][DEBUG] CheckSingleLOCondition(non-contiguous->contiguous): RF on(%d), slo_cc(%d)
[SC][DEBUG] CheckSingleLOCondition(non-contiguous->contiguous): slo_cc(%d), slo_cc_state(%d)
[SC][DEBUG] ConfigCaSingleLO(List is not changed): cc(%d), pair_num(%x), list_num(%d)
ALL 4Rx release -> restore 4Rx after singleLO configuration
[SC][DEBUG] CC alloc: scell_idx(%d) cc(%d), dl_earfcn(%d)
[SC][DEBUG] ConfigCaSingleLO(Sorted List): list_cc(%x), earfcn(%d), bw(%d)
[SC][DEBUG] ConfigCaSingleLO(rf path update): band(%d), before(%d), after(%d)
[SC][DEBUG] ConfigCaSingleLO(ChangeRfInfo): rf_path(%d->%d), rf_earfcn(%d), rf_bw(%d), rf_bw_high(%d), rf_bw_low(%d)
[SC][DEBUG] ConfigCaSingleLO(Non-Contiguous SLO : list_num(%d), earfcn(%d %d)
[SC][DEBUG] ConfigCaSingleLO : cc(%d), pair_num(%x), list_num(%d), Non-Contiguous(%d)
[SC][DEBUG] ConfigCaSingleLO: Activated RF Off(%d), cc(%d)
[SC] ConfigCaSingleLO: Not found available CC for earfcn(%d)
[SC][DEBUG] ConfigCaSingleLO(master_cc): cc(%d)(%d)
[SC] ConfigCaSingleLO: store dmxerfreq value(cc: %d, dmxr_freq_value: %d) for DS resume
[SC] ConfigCaSingleLO: Not Support slo_cell_num(%d)!!!
[SC] ConfigCaSingleLO(CC%d): rf(%d), slo_cc_num(%d)
[SC] Config4RxMode: MTM running... so skip!!!
[SC] Config4RxMode: main CC and div CC's earfcn mismatch, reset invalid pair cc info(mainCC(%d) earfcn(%d), 4rxCC(%d) earfcn(%d)
[SC] Config4RxMode(CC%d): cmd(%d)
[Debug] HALSC_Config4RxMode(0) : HALSC_RemainFdBufCapa(%d->%d) HALSC_RemainEcbCapa(%d->%d) HALSC_RemainMcwCapa(%d->%d)
[Config4RxMode]SetTdpState(CC%d):state(%d->%d)
[SC] Config4RxMode(CC%d): cmd(%d)
[SC] Config4RxMode: CC(%d) is already paired with CC(%d), type(%d)
[SC] Config4RxMode: main CC and div CC's earfcn mismatch, reset invalid pair cc info(mainCC(%d) earfcn(%d), 4rxCC(%d) earfcn(%d)
[SC] Config4RxMode: Not supported RF band (earfcn: %d) for 4Rx
[SC][fd_buf] Config4RxMode: HALSC_RemainFdBufCapa(%d), HALSC_RemainEcbCapa(%d), HALSC_RemainMcwCapa(%d), MIMO Layer(%d)
[SC] Config4RxMode: Not found available CC for 4Rx, cc(%d), div_cc(%d)
[SC] Config4RxMode : div_cc_changed(CC%d)
[SC] Config4RxMode: Do not ready 4Rx for scg_cc(%d)
[Config4RxMode]SetTdpState(CC%d):state(%d->%d)
[Debug][fd_buf] Config4RxMode(1): HALSC_RemainFdBufCapa(%d->%d) HALSC_RemainEcbCapa(%d->%d) HALSC_RemainMcwCapa(%d->%d)
[Debug][fd_buf] Config4RxMode(1): abnormal path config!!!! HALSC_RemainFdBufCapa(%d) HALSC_RemainEcbCapa(%d), HALSC_RemainMcwCapa(%d), required mcw(%d)
[SC] Config4RxMode: Enable 4Rx for CC(%d), RF band(earfcn: %d)
[SC] Config4RxMode(CC%d): cmd(%d), Change 4rx CC index(CC%d->CC1) rx_mode(%d)
[Config4RxMode]SetTdpState(CC%d):state(%d->%d)
[Config4RxMode]SetTdpState(CC%d):state(%d->%d)
[SC] Config4RxMode: Change 4Rx CC1 for CC(%d), RF band(earfcn: %d)
[SC] Config4RxMode(CC%d): Unknown command(%d)
[SC] Update4RxMode (cmd:%d, ca_earfcn:%d)
[SC] Update4RxMode: Do not ready 4Rx for scg_cc(%d)
[SC] Update4RxMode: Do not ready 4Rx for Semi DRDS
[SC] Update4RxMode: Do not ready 4Rx for eDRDS start
[4G_DRDS] DRDS is impossible due to MIMO!!!
[SC] Update4RxMode: Do not ready 4Rx for scg_cc(%d)
[SC] Update4RxMode: earfcn mismatch between main CC%d(%d) with div CC%d(%d)
[SC] HALSC_SetPathInfoForSCC(cc=%d, slo=%d, slo_cc=%d):start
[SC] ConfigScc: CA_ACT [OOPS] Wrong rfpath(%d)
[SC]cc_info[CC%d.before]rf(%d),mxr(%d),rtg(%d),demod(%d),pgc(%d),dcr(%d)
[SC]cc_info[CC%d.after]rf(%d),mxr(%d),rtg(%d),demod(%d),pgc(%d),dcr(%d)
[SC] ConfigScc(cc=%d, cmd=%d):start
[SC] Stopped the Sync timer after disabling the Scell Search
[SC] Stopped the Meas timer after disabling the Scell Meas
[SC] ConfigScc(cc=%d, cmd=%d, result= %d):end
[SC] ConfigScc(CC%d): cmd(%d), act_time(%d, %d), current_time(%d, %d, %d)
[SC] ConfigScc(cc=%d, cmd=%d):end
[SC] ConfigScc: SCC info is NULL
[SC] Debug: frame_position 1 is (%d).
[SC] Debug: frame_position 2 is (%d).
[SC] Debug: frame_position 3 is (%d). g_counter=%d, rtg_counter=%d
[Debug][fd_buf] HALSC_ConfigScc_DEACT : HALSC_RemainFdBufCapa(%d->%d) HALSC_RemainEcbCapa(%d->%d) HALSC_RemainMcwCapa(%d->%d)
[SC] ConfigScc: SCC info is NULL
[Debug][fd_buf] HALSC_ConfigScc_MEAS : cc(%d) HALSC_RemainFdBufCapa(%d) HALSC_RemainEcbCapa(%d) HALSC_RemainMcwCapa(%d)
[Debug][div] HALSC_ConfigScc_MEAS: div_idx(%d)
[SC] ConfigScc: CA_MEAS [OOPS] Wrong rfpath(%d)
[SC] ConfigScc: SCell Fixed rx_mode(%x)
[Debug][fd_buf] HALSC_ConfigScc_MEAS : HALSC_RemainFdBufCapa(%d->%d) HALSC_RemainEcbCapa(%d->%d) HALSC_RemainMcwCapa(%d->%d)
[Debug][fd_buf] HALSC_ConfigScc_MEAS : abnormal path config!!!! HALSC_RemainFdBufCapa(%d) HALSC_RemainEcbCapa(%d) HALSC_RemainMcwCapa(%d)
[SC] ConfigScc: SCC info is NULL
[Debug][fd_buf] HALSC_ConfigScc_CA_ACT : cc(%d) HALSC_RemainFdBufCapa(%d) HALSC_RemainEcbCapa(%d) HALSC_RemainMcwCapa(%d)
[Debug][div] HALSC_ConfigScc_CA_ACT: div_idx(%d)
[SC] Wait %dus for UL SLO setting
[SC] ConfigScc(UL CA Setting): curr_time(%x), act_time(%d), target_tti(%d), diff_time(%d)
[SC] ConfigScc: SCell Fixed rx_mode(%x)
[EDRDS] cc_info[%d]->rx_mode = %d
[4G_DRDS] RF_Update_DR_Band_info(%d, %d, %d, %d, %d)
[4G_DRDS] RF_Update_DR_Band_info(%d, %d, %d, %d, %d)
[Debug][fd_buf] HALSC_ConfigScc_CA_ACT : HALSC_RemainFdBufCapa(%d->%d) HALSC_RemainEcbCapa(%d->%d) HALSC_RemainMcwCapa(%d->%d)
[Debug][fd_buf] HALSC_ConfigScc_CA_ACT : abnormal path config!!!! HALSC_RemainFdBufCapa(%d) HALSC_RemainEcbCapa(%d) HALSC_RemainMcwCapa(%d)
[SC] ConfigScc: SCC info is NULL
[SC] ConfigScc(CC%d): SL Meas at arfcn(%d), RF_path(%d)
[SC] ConfigScc(CC%d) for SL MEAS: rx_mode(%d), RF_PATH_IDX(%d), MXR_SEL_IDX(%d), RTG_SEL_IDX(%d)
[SC] ConfigScc(CC%d) for SL MEAS: PGC_SEL_IDX(%d), TDBUF_SEL_IDX(%d), OUTPUT_SEL_IDX(%d), dl_bw(%d)
[SC] ConfigScc(CC%d): Invalid cmd(%d)
[SC] SetSccRfForMeas: Early return (af=%d, dl_earfcn=%x)
[SC] SetSccRfForMeas: Early return -CC(%d) is already in use for earfcn(%d), type(%d)
[SC] SetSccRfForMeas: Early return -Not found available CC for earfcn(%d)
[SC] SetSccRfForMeas(CC%d): status(%d), flag(%d), earfcn(%d), bw(%d)
[SC] SetSccRfForMeas: Single LO slave CC(%d) is already in use
[DRX] SetSccRfForMeas: SccConfig Time(%d)
[DRX] SetSccRfForMeas: cc(%d), slo_pair_num(%d), slo_cc(%d), slo_cc_dci_decoded(%d)
[SC] SetSccRfForMeas(CC%d): Not supported HW state(%d)
[SADR] Need to add for scell
[SADR] N2LMeasDuringDR(%d) AddedN2Lband(%d) N2LMeasCC(%d)
[SC] SetSccRfForIratMeas: Not Support RF for earfcn(%d)
[SC] SetSccRfForIratMeas: Not found available CC for earfcn(%d)
[SC] SetSccRfForIratMeas: Invalid RF path has been returned
[SADR] CC is already set (CC%d)
[SC] SetSccRfForIratMeas: Not found available CC for earfcn(%d)
[SC] SetSccRfForIratMeas(CC%d): status(%d), flag(%d), earfcn(%d), bw(%d)
[SC] CheckUeAntennaConfig: test_mode(%x)
[SC] CheckUeAntennaConfig(skip): cc(%d), rx_mode(%x)
[SC] CheckUeAntennaConfig: SetTdpState(CC%d), state(%d->%d)
[SC] CheckUeAntennaConfig(skip): 4Rx is not supported on CC(%d)
[SC] IsRxPathOff (%d)
[SC] CheckUeAntennaConfig(CC%d): rx_mode(%x -> %x)
[SC] CheckUeAntennaConfig(skip), RF unavailable(%d)
[SC] CheckUeAntennaConfig(skip), During DRDS, ScgStackId
[SC] CheckUeAntennaConfig(CC%d): rx_mode(%x) backuped
[SC] ChangeUeAntennaConfig: changed cc_info->rx_mode(%x -> %x)
[SC] ChangeUeAntennaConfig: changed cc_info->rx_mode(%x -> %x)
[SC] ChangeUeAntennaConfig: SkipInit4Rx(%d) prev_ant(0x%x) cur_ant(0x%x)
[SC] ChangeUeAntennaConfig: rx_mode(0x%x -> 0x%x) 4RxD Status(0x%x) Changed
[SC] ChangeUeAntennaConfig: rx_mode(0x%x -> 0x%x) 4RxD Status(0x%x) Changed
[SC] ChangeUeAntennaConfig: rx_mode(0x%x -> 0x%x) 4RxD Status(0x%x) NOT Changed
[SC] ChangeUeAntennaConfig(CC%d): UDPATE DC(%d,%d)
[SC] ChangeUeAntennaConfig(CC%d): UDPATE DC(%d,%d)
[SC] Update ExtLna Ctrl for SLO & 4Rx: cc(%d) div_cc(%d) div_rf(%d) div_dcr(%d) div_rx_mode(%d)
ChangeUeAntennaConfig(CC%d): rx_mode(%x -> %x)
[SC] ChangeUeAntennaConfig(CC%d): rx_mode(%x -> %x)
[ChangeUeAntennaConfig]SetTdpState(CC%d):state(%d->%d)
[SC] ChangeUeAntennaConfig(CC%d): rx_mode(%x -> %x) after idle DRX wakeup
[SC] ChangeUeAntNum(skip): num_ant(%d), rx_mode(%x)
[SC] ChangeUeAntNum: Not supported UE antenna number(%d)
[SC] ChangeSCellTiming: Not found activated CC for earfcn(%d)
[SC] ChangeSCellTiming: Wrong cell_id(%d, %d)
[SC] ChangeSCellTiming: Time diff is too big!!! time_offset(%d, %d)
[SC] ChangeSCellTiming: dl_earfcn(%d), cell_id(%d), cp_type(%d), time_offset(%d, %d), gen_cntr(%d)
[SC] GetSCellTiming: cc(%d), frame_pos(%d), rtg_timing(%d)
[RSSISCAN][MAIN] dl_earfcn: %d, agc_db_power: %d, agc_gain: %d, cal_rsrp_offset: %d, rsrp_temp_offset: %d
[RSSISCAN][SUB] dl_earfcn: %d, agc_db_power: %d, agc_gain: %d, cal_rsrp_offset: %d, rsrp_temp_offset: %d
[SC] SetDmixerFreqOffset(%d) for SCG_CC(%d) during DRDS
[SC] SetDmixerFreqOffset(%d)
[SC] SetDmixerFreqOffset: cc(%d), temp_dmxr_freq_offset(%d)
[SC] EnableSlTimeTracking: Sync mode(%d) is not NONE!!!
[GNSS] 10ms sync[before]: sfn(%d) utc_H(%u) utc_L(%u) uptime_H(%u) uptime_L(%u)
[GNSS] 10ms sync[after]: curr_sfn(%d) curtime_H(%u) curtime_L(%u) timeDiff_H(%u) timeDiff_L(%u)
[GNSS] 10ms sync update skipped. time inversion case due to pre-update of @SIB8/16
[GNSS] 10ms sync[final]: sfn(%d:%d) utc_H(%u) utc_L(%u) utc_offset(%d) SFNsync(%d)
[GNSS] TA = %d
[GNSS] Set TsyncPulse Start: SFN %d, tti %d, rtg %d
[GNSS] Set TsyncPulse End: SFN %d, tti %d, rtg %d
[GNSS] TsyncPulse Cleared
[GNSS] HALSC_ResetGnssTime
[GNSS] TimeAidingReq reset Info
[GNSS] TimeAidingReq: [before] SFN(%d) SibType(%d) UTC_H(%u) UTC_L(%u) Option(%d)
[GNSS] TimeAidingReq: curtime_H(%u) curtime_L(%u) timeDiff_H(%u) timeDiff_L(%u)
[GNSS] TimeAidingReq rejected. time inversion case due to pre-update of @SIB8/16
[GNSS] TimeAidingReq[&update]: current SFN(%d) TTI(%d) UTC_H(%u) UTC_L(%u) offset(%d)
[GNSS] TimeAidingReq rejected! SIBpreferred(%d) valid(%d) sync(%d)
[GNSS] TimeAidingResp: Tsync SFN(%d) UTC_H(%u) UTC_L(%u) WEEK(%u) TOW(%u) SFNsync(%d)
[GNSS] HALSC_GnssBandMonitor requestType(%d) requestId(%d) subBand(%d) pwrThreshold(%d)
[GNSS] Invalid requestId: %d
[GNSS] Invalid requestType: %d
[GNSS] UpdateGnssTime: SibType(%d) utc_sfn(%d) utc_tti(%d) UTC_H(%u) UTC_L(%u)
[GNSS] UpdateGnssTime: NowSFN(%d) NowTTI(%d) option(%d) WEEK(%u) TOW(%u)
[GNSS] SIB Time update: TTIdiff(%d) sib_rx_time_H(%u) sib_rx_time_L(%u)
[GNSS] SIB Time update: SFNdelay_flag=%d utc_start_time_H(%u) utc_start_time_L(%u)
[GNSS][debug] UpdateGnssTime: skip updating SIB16. endwindowSfn(%d) UTCdiff form SIB8(%d)
[GNSS] UpdateGnssTime: [wrong options] SibType(%d) option(%d)
[SC] HALSC_SetMifCpuClk: Owner(%d), Scenario(%d)
[SC] RestoreOnGapSrchDone: SyncMode(%d) MeasMode(%d) IdleGapOnGoing(%d) GapStartFlag(%d)
[SC] HALSC_Config4RxModeforMTM(CC%d): cmd(%d)
[SC] Config4RxMode: main CC and div CC's earfcn mismatch, reset invalid pair cc info(mainCC(%d) earfcn(%d), 4rxCC(%d) earfcn(%d)
[Config4RxMode]SetTdpState(CC%d):state(%d->%d)
[SC] Config4RxMode: CC(%d) is already paired with CC(%d), type(%d)
[SC] Config4RxMode: Not supported RF band (earfcn: %d) for 4Rx
[SC] Config4RxMode: Not found available CC for 4Rx, cc(%d), div_cc(%d)
[Config4RxMode]SetTdpState(CC%d):state(%d->%d)
[SC] Config4RxMode: Enable 4Rx for CC(%d), RF band(earfcn: %d)
[SC] Config4RxMode(CC%d): Unknown command(%d)
[SC] HALSC_SetNrBandList: CC%d is intra band with NR(LTE: %d, NR: %d)
[SC] Update ExtLna Ctrl for SLO & 4Rx: cc(%d) div_cc(%d) div_rf(%d) div_dcr(%d) div_rx_mode(%d)
[SC] Measure(CC%d): rx_mode/bw(%x), agc_gain(%d, %d, %d, %d), meas_asfn(%d)
[SC] [%4d] (%3d) M0 %6d %6d %6d %6d %6d
[SC] [%4d] (%3d) M1 %6d %6d %6d %6d %6d
[SC] [%4d] (%3d) M2 %6d %6d %6d %6d %6d
[SC] [%4d] (%3d) M3 %6d %6d %6d %6d %6d
[SC] [%4d] (%3d) MEASURE RESULT VALID (%d) - Found in search
[SC] MEASURE RESULT VALID CNT (%d -> %d)
PDM value periodic update(CONN)
[SC] HALSC_pendingMeasDoneInd(%d): HALSC_GapStartFlag(%d), HALSC_pendingMeasDoneInd(%d), dmtc_config(%d)
[SC] HAL_GetIqcCoefValue(%d): TAP(0), I(%x), Q(%x)
[SC] HAL_GetIqcCoefValue(%d): TAP(1), I(%x), Q(%x)
[SC] HAL_GetIqcCoefValue(%d): TAP(2), I(%x), Q(%x)
[sc] HALSC_CheckFdBufLimit : mode(%d) remain_fdbuf(%d) remain_ecb(%d) remain_mcw(%d)
[Debug] cc(%d) available_lte_fd_buf(%d) available_lte_ecb(%d) available_mcw_use(%d)
[Debug][mimo] div_cc(%d) available_lte_fd_buf(%d) available_ecb_use(%d) available_mcw_use(%d)
[Debug][mimo] NR needs to check cc_idx(%d), remain_fdbuf value(%d)
[NRDS] 4G_NR_INFO_REQ : Path REQ remove DR BAND(insufficient available BW)
[Debug] remain_fdbuf(%d)
[Debug] NotEnoughBWtoDR(1)
[Debug][dr] available_lte_fd_buf(%d) available_ecb_use(%d) available_mcw_use(%d)
[Debug] NotEnoughBWtoDR(0)
[Debug][div] div_cc(%d) available_lte_fd_buf(%d) available_ecb_use(%d) available_mcw_use(%d)
[Debug]_RemainFdBufCapa(%d) RemainEcbCapa (%d) RemainMcwCapa (%d) LteMcwUse (%d)
[Debug][fd_buf] cc(%d) available_lte_fd_buf(%d) available_ecb_use(%d) available_mcw_use(%d)
[Debug][fd_buf] cc(%d) abnormal path config!!!! need to release 4Rx available_lte_fd_buf(%d) need_to_release_4rx_num(%d) available_ecb_use(%d) available_mcw_use(%d)
[Debug][div] div_cc(%d) available_lte_fd_buf(%d) available_ecb_use(%d) available_mcw_use(%d)
[Debug] NotEnoughBWtoDR case. consider add DR BAND
[NRDS] DR added check will be done after CDRX wakeup or RF GRANT
[Debug]_RemainFdBufCapa(%d) RemainEcbCapa(%d) RemainMcwCapa (%d) HALSC_LteMcwUse (%d)
[Debug][fd_buf] NR released!!
[SC] HALSC_CheckFdBufLimit: mode(%d) RemainFdBufCapa(%d/%d) RemainEcbCapa(%d/%d) RemainMcwCapa(%d/%d)
[SC] InitialSyncDone
[SC] ProcSync10msIntr: Skip Activating pal_Sync10msHCB HISR(gDrxShortModeFlag == TRUE)
[SC] ProcSync10msIntr: Skip Activating pal_Sync10msHCB HISR(gHALSC_IdleGapOnGoing == TRUE)
[SC] ProcSync10msIntr: Skip Activating pal_Sync10msHCB HISR(IsBeforeResync == TRUE)
[SC] ProcConnScheduleIntr: Invalid state(%d, %d)
[SC] Ignore ProcConnScheduleIntr: meas_mode(HALSC_MEAS_CONFIG_CONN_DRX) GapStartFlag(%d)
[SC] ProcConnScheduleIntr: effective_ready_sfn(%d), current_time.sfn(%d)tti(%d)
[SC] ProcConnScheduleIntr: New GapStartSfn(%d), effective_ready_sfn(%d)
[SC] ProcConnScheduleIntr: effective_ready_sfn(%d), current_time.sfn(%d)tti(%d)
[SC] ProcConnScheduleIntr(DMTC): effective_ready_sfn(%d), current_time.sfn(%d)tti(%d)
[SC] ProcConnScheduleIntr: New DmtcStartSfn(%d), effective_ready_sfn(%d)
[SC] ProcConnScheduleIntr: Updated GAP_SFN(%d), DMTC_SFN(%d)
[SC] (Scheduling request, DMTC configured: %d) sfn = %d, subframe num = %d, offset = %d
[SC] (Scheduling request, GAP configured: %d) sfn = %d, subframe num = %d, offset = %d
[SC] (RSTD Preponed Meas Schedule request, GAP configured: %d) sfn = %d, subframe num = %d, offset = %d
[SC] (Scheduling request) sfn = %d, subframe num = %d, offset = %d
[SC] ProcSGapBIntr(start): sfn(%d), tti(%d), offset(%d), mode(%d, %d)
[SC] ProcSGapCIntr(start): sfn(%d), tti(%d), offset(%d), mode(%d, %d) gHALSC_HgapCHisrEnabled(%d)
[SC] ProcHGapAIntr(start): sfn(%d), tti(%d), offset(%d), mode(%d, %d)
[SC] ProcHGapBIntr(start): sfn(%d), tti(%d), offset(%d), mode(%d, %d)
[SC] ProcHGapCIntr(start): sfn(%d), tti(%d), offset(%d), mode(%d, %d)
[SC] ProcSysTimeCommonIntr: status(0x%x)
HALSC_ConversionFrom2GCalValue(cal_voltage:%d afcPdmValue:%d Cal_slope:%d Cal_offset:%d range_idx:%d)
HALSC_ConversionFrom2GCalValue(recal_AFC_DAC:%d cal_voltage:%d DAC_slope:%d DAC_offset:%d range2_idx:%d)
HALSC_ConversionFrom2GCalValue(Use 2G cal recal_AFC_DAC:%d)
[SC] AFC: PDM(%4d), ANGLE(CC0:%d, CC1:%d)
[SC] AFC: ANGLE(CC2:%d, CC3:%d, CC4:%d, CC5:%d)
[SC] NgapDurationStart(%d): AGC serving(%d, %d) -> target(%d, %d)
[SC] NgapDurationEnd(%d): AGC target(%d, %d) -> serving(%d, %d)
[SC] DefaultNgapDurationStart(CC%d), gHALSC_PoweroffRF =%d
[SC] HoldTdpBlockforCC: CC%d, PDM(%d), AGC(%d, %d)
[SC] DefaultNgapDurationEnd(CC%d), gHALSC_PoweroffRF =%d
[PWR_OPT] Skip TDP enable!!!
[SC] RestoreTdpBlockforCC: CC%d, UeState(%d), PDM(%d), AGC(%d, %d)
[SC] --- IRAT(LTE Sync) Start Interrupt
[SC] --- IRAT(LTE Meas) Start Interrupt
[SC] --- IRAT(LTE Sync GAP) Start Interrupt
[SC] --- IRAT(LTE Meas GAP) Start Interrupt
[SC] --- UMTS Sync/Meas Start Interrupt
[SC] --- TDSCDMA Sync/Meas Start Interrupt
[SC] --- GSM Sync/Meas Start Interrupt
[SC] --- UMTS SI ACQUISITION Start Interrupt
[SC] --- CDMA Meas Start Interrupt
[SC] --- NR Sync/Meas Start Interrupt
[SC] --- Invalid GAP Start Interrupt
[SC] ActiveRat = (%d)
[SC] IratFreqChangeInGap: Earfcn(%d), AGC(%d, %d), BW(%d)
[SC] --- IRAT(LTE Sync) End Interrupt
[SC] --- IRAT(LTE Meas) End Interrupt
[SC] --- IRAT(LTE Sync GAP) End Interrupt
[SC] --- IRAT(LTE Meas GAP) End Interrupt
[SC] --- UMTS Sync/Meas End Interrupt
[SC] --- TDSCDMA Sync/Meas End Interrupt
[SC] --- GSM Sync/Meas End Interrupt
[SC] --- UMTS SI ACQUISITION End Interrupt
[SC] --- CDMA Meas End Interrupt
[SC] --- NR Sync/Meas End Interrupt
[SC] --- Invalid GAP End Interrupt
[SC] not update the agc because next measure elem are exist(%d , %d)
[SC] MEAS AGC: GAIN(%d, %d) -> (%d, %d), dBPow(%d, %d)
[SC] Invalid Gain, so modifying based on next position
[SC] SRCH AGC: GAIN(%d, %d) -> (%d, %d), pos(%d, %d, %d)
[SC] DMTC AGC0[0-5]: %02x %02x %02x %02x %02x %02x
[SC] DMTC AGC1[0-5]: %02x %02x %02x %02x %02x %02x
[SC] SRCH AGC0[0-5]: %08x %08x %08x %08x %08x %08x
[SC] SRCH AGC1[0-5]: %08x %08x %08x %08x %08x %08x
[SC] SRCH AGC0[0-4]: %08x %08x %08x %08x %08x
[SC] SRCH AGC1[0-4]: %08x %08x %08x %08x %08x
[SC] SRCH AGC0[5-9]: %08x %08x %08x %08x %08x
[SC] SRCH AGC1[5-9]: %08x %08x %08x %08x %08x
[SC] ProcPbchDecIntr: Unknown interrupt!!!
[GNSS] Skip MIB rebase! new_sfn(%d) new_UTC(+%u=%u) curtime_H(%u) curtime_L(%u) timeDiff_L(%u)
[GNSS] HALSC_Gnss_SfnRebase: new_sfn(%d) new_UTC(+%u=%u) curtime_H(%u) curtime_L(%u) timeDiff_L(%u)
[SC] IRAT Timing Change: Count(%d), deltaRtg(%d)
[SC] IRAT Timing(LTE): SFN(%d), TTI(%d), OFFSET(%d)
[SC] IRAT Timing(UMTS): SFN(%d), SLOT(%d), CHIP(%d)
[SC] IRAT Timing(GSM): frameNumber(%d), Qb(%d)
[SC] IRAT Timing(CDMA): CDMASystemTime(High: 0x%x Low: 0x%x)
[SC] Error sfn_gap(%d) tti_gap(%d),
HALSC_CalDiffFL1RcvAndCdmaEndWindow : sfn_gap(%d), tti_gap(%d), bRefer_Next_Sfn(%d)
[SC] STR: %4d %6d (InSyncRate:%3d, OutSyncRate:%3d)
[SC] [%d]STR: %4d %6d
[SC] STR(offset): CC0(%d, %d), CC1(%d, %d), RND(%03x)
[SC] STR(power): CC0(%d, %d), CC1(%d, %d), RMS(%06x)
[SC] STR(offset): CC2(%d, %d), CC3(%d, %d) RND(%03x)
[SC] STR(power): CC2(%d, %d), CC3(%d, %d), RMS(%06x)
[SC] STR(offset): CC4(%d, %d), CC5(%d, %d), RND(%03x)
[SC] STR(power): CC4(%d, %d), CC5(%d, %d), RMS(%06x)
[SC] SetAgcGainUpdateForMeas: pos_diff(%d), start_time(%d, %d), margin(%d), intr(%d, %d, %d)
[SC] HALSC_AgapDurationStart: Enable HeNB MIB Decoding
[SC] HALSC_AgapDurationStart: Enable HeNB SIB1 Decoding
[SC] HENB SIB-1 Enabled
[SC] HALSC_AgapDurationEnd
[SC] HENB SIB-1 Disabled
[GNSS] Saved SFN-UTC gap(%d)
[GNSS] Abnormal SIBtype(%d)
[GNSS] HALSC_compensate_uptime_per_sfn: prev %d, curr %d, new %d, tr_diff %d
[GNSS] HALSC_compensate_uptime_per_sfn: SFN mismatch!! %u(UTC_diff)+%d(cur_sfn(%d)-new_sfn(%d)), diff=%u.%u
