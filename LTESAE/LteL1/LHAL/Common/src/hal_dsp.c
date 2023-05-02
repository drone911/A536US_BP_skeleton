[DSP] HALDSP_FindMxrPath mxr(%d), foundDemodCC(%d), foundCcType(%d), stackid(%d)
[DSP] endc_check(%d), Sadr_check(%d), nedc_check(%d), fedv_check(%d)
[DSP] IPC_ACTION_ID_LTE_DEMOD_REL_REQ: flag(%d), wait(%d)
[SADS] SrIf_Api_Srl1rc_DBIsSADRAvailable(%d)
[DSP] Modem Status: %d RF available: %d, SKIP IPC_ACTION_ID_SI_UPDATE
[DSP] IPC_ACTION_ID_SI_UPDATE: cc(%d), td_buf_idx(%x) td_buf_idx_div(%x), td_buf_size(%d)
[DSP] IPC_ACTION_ID_SI_UPDATE: cell_group[MCG], mode(%d)
[SADS] Skip IPC_ACTION_ID_UL_BW due to IDLE state
[DSP] Modem Status: % d RF available: %d
[DSP] command PENDING:[%d]IPC_ACTION_ID_UL_BW
[DSP] command PENDING Q FULL!!:[%d]IPC_ACTION_ID_UL_BW
[DSP] IPC_ACTION_ID_UL_BW: cell_group(%d), cc(%d), bw(%d), cp_type(%d)
[DSP] Modem Status: % d RF available: %d
[DSP] command PENDING:[%d]IPC_ACTION_ID_RXMODE_CHANGE
[DSP] command PENDING Q FULL!!:[%d]IPC_ACTION_ID_RXMODE_CHANGE
[DSP] IPC_ACTION_ID_RXMODE_CHANGE: cc(%d), div_cc(%d), td_buf_idx(%x) td_buf_idx_div(%x), td_buf_size(%d)
[DSP] IPC_ACTION_ID_RXMODE_CHANGE: cc(%02x), rx_mode(%x)
[DSP] HALDSP_ControlIdleDtxOnOff: cc(%d) onoff(%d)
[DSP] HALDSP_ControlIdleDtxOnOff: Invalid input cc(%d)
[DSP] Modem Status: % d RF available: %d
[DSP] PHYP_C2P_LTE_IDLE_DTX (CC%d): wait 1ms and idle_dtx_status not changed(%d)
[DSP] PHYP_C2P_LTE_IDLE_DTX: IPC operation done but tick clear was not happened. CC%d on(%d) status(%d) wait_time[%d]
[DSP] PHYP_C2P_LTE_IDLE_DTX: CC%d on(%d) status(%d)
stackID[%d] LTE_SHM_Address[0x%x], DS_LTE_SHM_Address[0x%x], L1Dsp_SHM[0x%x]
[RACH] CarrierInd(%x) RachCnt(%d) TransTTI(%d) Power(%d) GpadcVal(%d)
HALDSP_SetRACHCmd: gRACHflag is SET!preamble_cnt(%d)
During 4G_DRDS ativated, RACH can't be triggered
IsRfAvailable is changed to FALSE!!, HALDRX_DisablePagingRcvIntr
[DSP] RF unavailable
[SADS] SrIf_Api_Srl1rc_DBIsSADRAvailable(%d), HALSC_GetUeState(%d), GetChannelConfigure()
[DSP] Command PENDING:[%d]IPC_ACTION_ID_MAC_RACH
[DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_MAC_RACH
[DRX, 4GDS] RACH is triggered in CDRX MeasConfig with gHALSC_PrepareGapMeas
[DSP] Command PENDING:[%d]IPC_ACTION_ID_MAC_RACH
[DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_MAC_RACH
[DSP] Command PENDING:[%d]IPC_ACTION_ID_MAC_RACH
[DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_MAC_RACH
[DSP] For RACH, MACMain Config should be sent!
[DSP] IPC_ACTION_ID_MAC_RACH: cell_group(%d), cmd(%d)
(CONN State) SONANR: Pending SRI
[DSP] Command PENDING:[%d]IPC_ACTION_ID_SRI_ON
[DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_SRI_ON
[DSP] RF unavailable, IPC_ACTION_ID_SRI_ON
[DSP] Command PENDING:[%d]IPC_ACTION_ID_SRI_ON
[DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_SRI_ON
[DRX, 4GDS] SR is triggered in CDRX MeasConfig with gHALSC_PrepareGapMeas
[DSP] Command PENDING:[%d]IPC_ACTION_ID_SRI_ON
[DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_SRI_ON
[DSP] For SRI_ON, C_RNTI Config should be sent!
[DSP] IPC_ACTION_ID_SRI_ON: cell_group(%d), sri_count(%d)
assert condition : Wrong MacCE command ID
[DSP] Modem Status: % d RF available: %d
[DSP] Command PENDING:[%d]IPC_ACTION_ID_DRX_CMD
[DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_DRX_CMD
[DSP] IPC_ACTION_ID_DRX_CMD [MacCE:%d]
[DSP] Modem Status: % d RF available: %d
[DSP] Command PENDING:[%d]IPC_ACTION_ID_GAP_CONTROL
[DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_GAP_CONTROL
[DSP] IPC_ACTION_ID_GAP_CONTROL [0x%x]
[DSP] Modem Status: % d RF available: %d
[DSP] Command PENDING:[%d]IPC_ACTION_ID_GAP_INFO
[DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_GAP_INFO
[DSP] IPC_ACTION_ID_GAP_INFO (gap_en:%d, gap_pattern:%d, gapinfo_offset:%d)
[DSP] Modem Status: % d RF available: %d
[DSP] Command PENDING:[%d]IPC_ACTION_ID_PMAX
[DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_PMAX
[DSP] SetPmaxBackoffCmd: Sensor(%x), Max Power(%d, %d)
[DSP] PCell_Pmax(%d), nvLimitedPmax(%d)
[DSP] UlCaStatus(%d): Set ulca_backoff to 0 for Inter-Band ULCA case(B%d/B%d)/TasEnabled(%d)
[DSP] SetPmaxBackoffCmd: ulca_backoff(%d) UlCaStatus(%d) Pmax(%d) PMaxLimit(%d) gHal_maxPower(%d)
[DSP] SCell_Pmax(%d), nvLimitedPmax(%d)
[DSP] IPC_ACTION_ID_PMAX [%d/%d] num_CC[%d] SLO_CC[%d] UlCaStatus[%d] DemodPathIdx[%d/%d]
[DSP] SetPmaxCmd Backoff(%d)
[DSP] PCell_Pmax(%d), nvLimitedPmax(%d)
[DSP] Modem Status: % d RF available: %d, SKIP IPC_ACTION_ID_PMAX
[DSP] IPC_ACTION_ID_PMAX: cell_group(%d), cc(%d), maxPower(%d) num_cc(%d)
[DSP] No Max Tx Pwr Limit on MTM/FCC! : %ddBm
[DSP] Invalid Tx Power level cfg : %ddBm
[DSP] Modem Status: % d RF available: %d
[DSP] Command PENDING:[%d]IPC_ACTION_ID_PMAX(LimitPmaxCmd)
[DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_PMAX(LimitPmaxCmd)
[DSP] IPC_ACTION_ID_PMAX: cell_group(%d), cc(%d), Max Tx Pwr Limit = %ddBm
[DSP] Modem Status: % d RF available: %d
[DSP] Command PENDING:[%d]IPC_ACTION_ID_PHY_RX_SIB_TDD_CFG
[DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_PHY_RX_SIB_TDD_CFG
[DSP] IPC_ACTION_ID_PHY_RX_SIB_TDD_CFG [%d, %d, %d]
[DSP] SI is decoded, hence deactivate 4G_DRDS
[DSP] do nothing, because pagingrcvintr timer will be expired
[DSP] Modem Status: % d RF available: %d
[DSP] Command PENDING:[%d]IPC_ACTION_ID_SI_SCHED
[DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_SI_SCHED
[DSP] IPC_ACTION_ID_SI_SCHED: cell_group(%d), withSIB1(%d),CC(%d),Sib_drx(%d)
[DSP] SI WindowLength[%d], Number of SI [%d], sib_drx[%d]
[DSP] SI valid[%d], Periodicity[%d]
[DSP] Modem Status: % d RF available: %d , SKIP IPC_ACTION_ID_CONFIG_PCH
[DSP] IPC_ACTION_ID_CONFIG_PCH
[DSP] PCH Config drx_T[%d], PF[%d], PO[%d], nB[%d]
[DSP] Modem Status: % d RF available: %d , SKIP IPC_ACTION_ID_CONFIG_SCELL_PCH
[DSP] IPC_ACTION_ID_CONFIG_SCELL_PCH cc[%d] command[%d] drx_T[%d PF[%d] PO[%d]
[DSP] RF unavailable, skip HALDSP_SetRNTICmd(SI_RNTI case)
[DSP] No need of pending IPC_ACTION_ID_RNTI_MANAGE for SI decode, value=0x%x
[DSP] Command PENDING:[%d]IPC_ACTION_ID_RNTI_MANAGE
[DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_RNTI_MANAGE
[DSP] SI is completely decoded, deactivate 4G_DRDS, set eDV_pend_SIRNTI = TRUE
[DSP] No need of pending IPC_ACTION_ID_RNTI_MANAGE for SI decode, value=0x%x
[FEDV] cell_group should be 1
[DRX] Extend gL1LC_DrdsAbnormalCheckTmr + 100ms for SCG SIB DRX
[DSP] IPC_ACTION_ID_RNTI_MANAGE: cell_group(%d), RNTI[%d] = 0x%04X
[DSP] Command PENDING:[%d]IPC_ACTION_ID_SCELL_RNTI_MANAGE
[DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_SCELL_RNTI_MANAGE
[DSP] IPC_ACTION_ID_SCELL_RNTI_MANAGE: CC[%d] RNTI[%d] = 0x%04X
During 4G_DRDS ativated, state can't be changed
IsRfAvailable is changed to FALSE!! DisablePagingRcvIntr
[DSP] Modem Status: % d, RF available: %d
[DSP] Command PENDING:[%d]IPC_ACTION_ID_MAC_MAIN_CFG
[DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_MAC_MAIN_CFG
[DSP] Max HARQ TX Nun(%d), SPS C-RNTI(0x%x), TTI bundling(%d)
[DSP] sr_ProhibitTimer(%d)
[DSP] sCellDeactivationTimer(%d)
[DSP] pPRACHCfg(%d):(rs:%d)(Config:%d)(hs_f:%d)(zcor:%d)(fo:%d)
[DSP] pPRACHCfg(init_p:%d)(p_step:%d)(delta:%d)
pHARQCfg(%d) cr_timer(%d)
[DSP] IPC_ACTION_ID_MAC_MAIN_CFG: cell_group(%d)
[DSP] Modem Status: % d
[DSP] Command PENDING:[%d]IPC_ACTION_ID_DRX_CONFIG
[DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_DRX_CONFIG
[DSP] RF unavailable, IPC_ACTION_ID_DRX_CONFIG
[DSP] ConnDrx On: on_dur(%d) inact(%d) retx(%d) long cycle(%d) offset(%d)
[DSP] Short drx On: short cycle(%d) timer(%d)
[DSP] skip_IAT (%d)
[DSP] skip_Paging (%d)
[DSP] ConnDrx Off
[DSP] IPC_ACTION_ID_DRX_CONFIG: cell_group(%d)
[DSP] Modem Status: % d RF available: %d
[DSP] Command PENDING:[%d]IPC_ACTION_ID_M3_GRANT
[DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_M3_GRANT
[DSP] IPC_ACTION_ID_M3_GRANT [RAR TTI:%d]
[DSP] M3_GRANT : hop_flag[%d], rb_asn[%d], trun_mcs[%d], tpc[%d], ul_delay[%d], cqi_req[%d], temp_crnti[%X]
[DSP] Modem Status: % d, RF available: %d
[DSP] Command PENDING:[%d]IPC_ACTION_ID_MBSFN_SF_ASSIGN
[DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_MBSFN_SF_ASSIGN
[DSP] SFA pt0(0x%x) pt1(0x%x) pt2(0x%x) pt3(0x%x)
[DSP] SFA pt4 (0x%x) pt5(0x%x) pt6(0x%x) pt7(0x%x)
[DSP] SFA pt8(0x%x) pt9(0x%x) pt10(0x%x) pt11(0x%x)
[DSP] SFA pt12(0x%x) pt13(0x%x) pt14(0x%x) pt15(0x%x)
[DSP] IPC_ACTION_ID_MBSFN_SF_ASSIGN
[DSP] Modem Status: % d, RF available: %d
[DSP] Command PENDING:[%d]IPC_ACTION_ID_MBMS_MCCH_SCHED
[DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_MBMS_MCCH_SCHED
[DSP] IPC_ACTION_ID_MBMS_MCCH_SCHED
[DSP]Modem/Rf Status: % d, RF available: %d
[DSP] Command PENDING:[%d]IPC_ACTION_ID_MBMS_NOTIFICATION_CONFIG
[DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_MBMS_NOTIFICATION_CONFIG
[DSP] IPC_ACTION_ID_MBMS_NOTIFICATION_CONFIG
[DSP] Modem Status: % d, RF available: %d
[DSP] Command PENDING:[%d]IPC_ACTION_ID_MBMS_AREA_SCHED
[DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_MBMS_AREA_SCHED
[DSP] IPC_ACTION_ID_MBMS_AREA_SCHED
[DSP] Modem Status: % d, RF available: %d
[DSP] Command PENDING:[%d]IPC_ACTION_ID_MBMS_PMCH_SCHED
[DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_MBMS_PMCH_SCHED
[DSP] IPC_ACTION_ID_MBMS_PMCH_SCHED: %d, %d, %d, %d, %d, %d, %d
[DSP] Modem Status: % d, RF available: %d
[DSP] Command PENDING:[%d]IPC_ACTION_ID_MBMS_MSI_SCHED
[DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_MBMS_MSI_SCHED
[DSP] IPC_ACTION_ID_MBMS_MSI_SCHED
[DSP] Modem Status: % d, RF available: %d
[DSP] Command PENDING:[%d]IPC_ACTION_ID_MBMS_MCCH_SCHED
[DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_MBMS_MCCH_SCHED
[DSP] IPC_ACTION_ID_MBMS_MCCH_SCHED
[DSP] RestoreMbmsMcchSched: Addr(0x%x), SF CC[%d]:PT0(%x)
[DSP] n_MCCH[%d] n_AreaSched[%d] n_PMCH[%d] n_Msi[%d]
[DSP] Modem Status: % d, RF available: %d
[DSP] Command PENDING:[%d]IPC_ACTION_ID_MBSFN_CONFIG
[DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_MBSFN_CONFIG
[DSP] num_mbsfn_cfg >= LTE_RRC_MAX_MBSFN_CONFIG (%d)
[DSP] IPC_ACTION_ID_MBSFN_CONFIG
[DSP] Modem Status: % d, RF available: %d
[DSP] Command PENDING:[%d]IPC_ACTION_ID_PRS_INFO_INIT
[DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_PRS_INFO_INIT
[DSP] IPC_ACTION_ID_PRS_INFO_INIT
[DSP] Modem Status: % d, RF available: %d
[DSP] Command PENDING:[%d]IPC_ACTION_ID_PHY_PRS_FFT_CONFIG_REQ
[DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_PHY_PRS_FFT_CONFIG_REQ
[DSP] IPC_ACTION_ID_PHY_PRS_FFT_CONFIG_REQ
[DSP] Modem Status: % d, RF available: %d
[DSP] SetPATHLOSS: cc(%d), value(%d)
[DSP] HALDSP_SetRPDetect: slam_en(%d), time_diff(%d)
[DSP] Modem Status: % d, RF available: %d
[DSP] Command PENDING:[%d]IPC_ACTION_ID_TA_TIMER
[DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_TA_TIMER
[DSP] IPC_ACTION_ID_TA_TIMER [cell_group : %d][state : %d][CCs_bitmap: %d][input_CCs_bitmap: %d]
[DSP] Modem Status: % d, RF available: %d
[DSP] Command PENDING:[%d]IPC_ACTION_ID_HO_TSFN
[DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_HO_TSFN
[DSP] IPC_ACTION_ID_HO_TSFN: cell_group(%d), ho_tsfn.tsfn = 0
[DSP] IPC_ACTION_ID_HO_TSFN: cell_group(%d), ho_tsfn.tsfn = 1
[DSP]Modem/Rf Status: % d, RF available: %d
[DSP] Command PENDING:[%d]IPC_ACTION_ID_RLF_SIGNAL
[DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_RLF_SIGNAL
[DSP] IPC_ACTION_ID_RLF_SIGNAL: cell_group(%d)
[DSP] Modem Status: % d, RF available: %d
[DSP] Command PENDING:[%d]IPC_ACTION_ID_TA_AD
[DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_TA_AD
[DSP] IPC_ACTION_ID_TA_AD [TA : %d](mode:%d)(CCs_bitmap: %d)(input_CCs_bitmap: %d)
[DSP] SCell_Pmax(%d), nvLimitedPmax(%d), band(%d)
(HAL)SCELL cqi_report_config_v1310_setup:%d, cqi_report_aperiodic_v1310_setup:%d
[DSP](C) Pucch_r13 copyng .r10_valid:%d, format3 setup:%d
[DSP]Pucch_r13 spatial bundling : % d,r13 valid : %d format3 setup: %d, codebook_size_determination_r13_setup: %d, max_payload_coderate_r13_setup: %d
[DSP]Pucch_v1370 dsp_pucch_v1370->valid = %d
hal_tx : dsp_pucch_v1370->valid = %d
[DSP] Modem Status: % d, RF available: %d IdleGapOnGoing = %d
[DSP] SKIP IPC_ACTION_ID_SCELL_TX_CONFIG
[DSP] Command PENDING:[%d]IPC_ACTION_ID_SCELL_TX_CONFIG
[DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_SCELL_TX_CONFIG
[DSP] IPC_ACTION_ID_SCELL_TX_CONFIG: cell_group(%d), Cmd[%d]
HALDSP_GetActivatedCCfromMACCE >> ActivatedCC(%d) DlMaxLayer(%d)
HALDSP_GetActivatedCCfromHal >> ActivatedCC(%d)
[DSP] Modem Status: % d, RF available: %d IdleGapOnGoing = %d
[DSP] SKIP IPC_ACTION_ID_SCELL_RX_CONFIG
[DSP] Command PENDING:[%d]IPC_ACTION_ID_SCELL_RX_CONFIG
[DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_SCELL_RX_CONFIG
[DSP] IPC_ACTION_ID_SCELL_RX_CONFIG: cell_group(%d), Cmd[%d]
[DSP] Modem Status: % d, RF available: %d IdleGapOnGoing = %d
[DSP] Command SKIP: IPC_ACTION_ID_PHY_MEAS_SF_PATTERN_PCELL
[DSP] Command PENDING:[%d]IPC_ACTION_ID_PHY_MEAS_SF_PATTERN_PCELL
[DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_PHY_MEAS_SF_PATTERN_PCELL
[DSP] IPC_ACTION_ID_PHY_MEAS_SF_PATTERN_PCELL: Type[%d]
[DSP] Modem Status: % d, RF available: %d
[DSP] Command PENDING:[%d]IPC_ACTION_ID_PHY_MEAS_SF_PATTERN_NEIGH
[DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_PHY_MEAS_SF_PATTERN_NEIGH
[DSP] IPC_ACTION_ID_PHY_MEAS_SF_PATTERN_NEIGH: Type[%x]
[DSP] Modem Status: % d, RF available: %d IdleGapOnGoing = %d
[DSP] Command PENDING:[%d]IPC_ACTION_ID_PHY_DEDI_UL_SRS
[DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_PHY_DEDI_UL_SRS
[DSP] IPC_ACTION_ID_PHY_DEDI_UL_SRS: cell_group(%d)
[DSP](C) Pucch_r10 copyng .r10_valid:%d, format3 setup:%d
[DSP](C) Pucch_r10 invalid .
[DSP](C) Pucch_r13 copying .r10_valid:%d, format3 setup:%d
[DSP](C) pucch_format3_setup:%d, list_cnt:%d
[DSP](C) pucch_an_cs_setup:%d, list_cnt:%d
[DSP](C) pucch_an_cs_setup:%d, list_cnt:%d
[DSP](C) pucch_an_cs_setup:%d, list_cnt:%d
[DSP]Pucch_r13 spatial bundling : % d,r13 valid : %d format3 setup: %d, codebook_size_determination_r13_setup: %d, max_payload_coderate_r13_setup: %d
[DSP]Pucch_v1370 dsp_pucch_v1370->valid = %d
hal_tx : dsp_pucch_v1370->valid = %d
[DSP] Modem Status: % d, RF available: %d IdleGapOnGoing = %d
[DSP] Command PENDING:[%d]IPC_ACTION_ID_PHY_CONFIGURE
[DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_PHY_CONFIGURE
[SADS] Skip IPC_ACTION_ID_PHY_CONFIGURE due to IDLE state
[DSP][DEBUG] IPC_ACTION_ID_PHY_CONFIGURE: MIMOsetup(%d), maxLayer(%d)
[DSP] IPC_ACTION_ID_PHY_CONFIGURE: cell_group(%d)
[DSP] Modem Status: % d, RF available: %d IdleGapOnGoing = %d
[DSP] Command PENDING:[%d]IPC_ACTION_ID_PHY_DEDI_CQI
[DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_PHY_DEDI_CQI
[DSP] IPC_ACTION_ID_PHY_DEDI_CQI: cell_group(%d)
[DSP] Modem Status: % d, RF available: %d IdleGapOnGoing = %d
[DSP] Command PENDING:[%d]IPC_ACTION_ID_PHY_DEDI_UL_SR
[DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_PHY_DEDI_UL_SR
[DSP] DSR_Config.valid(TRUE), DSR_PUCCH_ResourceIndex(%d), DSR_Configuration_Index(%d), DSR_Trans_max(%d)
[DSP] IPC_ACTION_ID_PHY_DEDI_UL_SR: cell_group(%d)
[SADS] Skip IPC_ACTION_ID_PHY_SIB due to IDLE state
[DSP] Modem Status: % d, RF available: %d, SKIP IPC_ACTION_ID_PHY_SIB
[DSP] Command PENDING:[%d]IPC_ACTION_ID_PHY_SIB
[DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_PHY_SIB
[DSP] RF unavailable, IPC_ACTION_ID_PHY_SIB
[DSP] IPC_ACTION_ID_PHY_SIB: cell_group(%d)
[DSP] Modem Status: % d, RF available: %d, SKIP IPC_ACTION_ID_PHY_RX_SIB_PDSCH
[DSP] Command PENDING:[%d]IPC_ACTION_ID_PHY_RX_SIB_PDSCH
[DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_PHY_RX_SIB_PDSCH
[DSP] RF unavailable, IPC_ACTION_ID_PHY_RX_SIB_PDSCH
[DSP] IPC_ACTION_ID_PHY_RX_SIB_PDSCH: cell_group(%d)
[DSP] Modem Status: % d, RF available: %d IdleGapOnGoing = %d
[DSP] Command PENDING:[%d]IPC_ACTION_ID_PHY_RX_CONFIG
[DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_PHY_RX_CONFIG
[DSP] IPC_ACTION_ID_PHY_RX_CONFIG: cell_group(%d)
[DSP] msg_ltm_ul_bw.t_ul_bw = %d
[DSP] msg_ltm_ul_bw.t_singleLoEn = %d
[DSP] msg_ltm_ul_bw.t_singleLoEn = %d
[DSP] msg_ltm_ul_bw.t_tti_con = %d
[DSP] msg_ltm_tx_pwr.valid = %d
[DSP] msg_ltm_tx_pwr.t_tx_pwr = %d
[DSP] msg_ltm_pusch.t_rb_size = %d
[DSP] msg_ltm_pusch.t_mc_rb_size = %d
[DSP] msg_ltm_pusch.t_rb_offset = %d
[DSP] msg_ltm_pusch.t_mc_rb_offset = %d
[DSP] msg_ltm_pusch.t_mcs = %d
[DSP] msg_ltm_ul_bw.t_fix_data = %d
[DSP] msg_ltm_pucch.t_format = %d
[DSP] msg_ltm_pucch.t_cqi_size = %d
[DSP] msg_ltm_pucch.ackNackValue = %d
[DSP] msg_ltm_prach.t_config_index = %d
[DSP] msg_ltm_prach.t_rb_offset = %d
[DSP] msg_ltm_srs.t_rb_size = %d
[DSP] msg_ltm_srs.t_rb_offset = %d
[DSP] msg_ltm_srs.t_period = %d
[DSP] IPC_ACTION_ID_LTM_SET: tx(%d)
[DSP] IPC_ACTION_ID_LTM_SET: PUCCH
[DSP] IPC_ACTION_ID_LTM_SET: PUSCH
[DSP] IPC_ACTION_ID_LTM_SET: PRACH
[DSP] IPC_ACTION_ID_LTM_SET: SRS
[DSP] IPC_ACTION_ID_LTM_SET: MC-PUSCH
[DSP] IPC_ACTION_ID_LTM_SET: D2D
[DSP] IPC_ACTION_ID_LTM_SET: Tx channel reset
[DSP] IPC_ACTION_ID_LTM_SET: wait 2ms and idle_dtx_status not changed(%d)
[DSP] IPC_ACTION_ID_LTM_SET: Change L1Dsp_SHM to %d
[DSP] IPC_ACTION_ID_LTM_MEAS_FER (duration:%d)
[DSP] Modem Status: % d, RF available: %d
[DSP] Don't restore pending event during GAP
[DSP] SetRestorePendingEvent(num:%d)
[DSP] 1ms delay for DSP scheduling
[DSP] 1ms delay for DSP scheduling
[DSP] Invalid PendingEvent
[DSP] GetHWVersion: gDrx_ActiveRat(%d)
[DSP] IPC_ACTION_ID_HW_VERSION
[DSP] GetULFrequency: gDrx_ActiveRat(%d)
[DSP] IPC_ACTION_ID_RF_FREQ: CC(%d), ul_freq(%dMhz)
[DSP] power : wrong state(%d), Ready(0x%x)
[DSP] IPC_ACTION_ID_LTE_DSP_INIT(%d) WakeupInitType(%d)
[DSP] IPC_ACTION_ID_LTE_DSP_MEAS_INIT: cc(%d), div_cc(%d), td_buf_idx(%x) td_buf_idx_div(%x), td_buf_size(%d), n2l_Flag(%d)
[DSP] IPC_ACTION_ID_LTE_DSP_MEAS_INIT(%d)
[DSP] IPC_ACTION_ID_LTE_RELEASE_DONE for N2L Measure >> Full release
[SADS] Set Prev Rat to NR
[DSP] IPC_ACTION_ID_LTE_RELEASE_DONE for L2N cell timing HO >> partial release
[DSP] IPC_ACTION_ID_LTE_RELEASE_DONE. WakeupInitType(%d) releaseType(%d)
[DSP] DSP RELEASE DONE. Check LVD status.
[4G_DRDS] restore Dynamic QS (4G_DRDS deact)
[4G_DRDS] RF_Update_DR_Band_info(clear)
[DSP] SetActiveRatInfo: rat(%d)
[DSP] GetConnSleepSCT(SCT:%d)
[DSP] SetConnSleepSCT(SCT:%d)
[DSP] Modem Status: % d, RF available: %d
[DSP] IPC_ACTION_ID_RELEASE Pending(gHALSC_IdleGapOnGoing(%d))
[DSP] Command PENDING:[%d]IPC_ACTION_ID_RELEASE
[DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_RELEASE
Skip Sending IPC_ACTION_ID_RELEASE(RF not available)
[DSP] IPC_ACTION_ID_RELEASE
[DSP] Modem Status: % d, RF available: %d
[DSP] IPC_ACTION_ID_RESET Pending(gHALSC_IdleGapOnGoing(%d))
[DSP] Command PENDING:[%d]IPC_ACTION_ID_RESET
[DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_RESET
[DSP] IPC_ACTION_ID_RESET: cell_group(%d), cause(%d)
[DSP] Modem Status: % d, RF available: %d
DSP Command PENDING:[%d]IPC_ACTION_ID_SCELL_SRS_RELEASE
DSP Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_SCELL_SRS_RELEASE
[DSP] IPC_ACTION_ID_SCELL_SRS_RELEASE: cell_group(%d), carrier_bitmap(%x)
[DSP] Modem Status: % d, RF available: %d
[DSP] Command PENDING:[%d]IPC_ACTION_ID_PUCCH_SRS_CQI_RELEASE
[DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_PUCCH_SRS_CQI_RELEASE
[DSP] IPC_ACTION_ID_PUCCH_SRS_CQI_RELEASE: cell_group(%d)
[DSP] Modem Status: % d, RF available: %d
[DSP] Command PENDING:[%d]IPC_ACTION_ID_LOOPBACK_CONTROL
[DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_LOOPBACK_CONTROL
[DSP] IPC_ACTION_ID_LOOPBACK_CONTROL
[DSP] Modem Status: % d, RF available: %d
[DSP] Command PENDING:[%d]IPC_ACTION_ID_ULSPS_IMPLICIT_RELEASE
[DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_ULSPS_IMPLICIT_RELEASE
[DSP] IPC_ACTION_ID_ULSPS_IMPLICIT_RELEASE
[DSP] IPC_ACTION_ID_SI_UPDATE: cell_group[SCG], cc(%d), td_buf_idx(%d), td_buf_idx_div(%d), pathMap.size(%d)
[DSP] IPC_ACTION_ID_RELEASE(%d)
[DSP] RF unavailable
[DSP] Command PENDING:[%d]IPC_ACTION_ID_SCELL_ACT_DEACT
[DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_SCELL_ACT_DEACT
[DSP] IPC_ACTION_ID_SCELL_ACT_DEACT: Case detection for SCC move
[DSP] IPC_ACTION_ID_SCELL_ACT_DEACT: Case detection for SCC move
[DSP] IPC_ACTION_ID_SCELL_ACT_DEACT: cc(%d), td_buf_idx(%x) td_buf_idx_div(%x), td_buf_size(%d)
[DSP] IPC_ACTION_ID_SCELL_ACT_DEACT: cc(%d) cmd(%d), earfcn(%d), tti(%d)
[DSP] IPC_ACTION_ID_SCELL_ONOFF: cc(%d), cmd(%d), earfcn(%d)
[DSP] Modem Status: % d, RF available: %d, SKIP IPC_ACTION_ID_ACTIVATE_EICIC
[DSP] IPC_ACTION_ID_ACTIVATE_EICIC: mode(%d), num(%d, %d)
[DSP] HALDSP_SetInactivityStatus(skip), RF unavailable
[DSP] IPC_ACTION_ID_QSLEEP_CONTROL: dynamicDisable(%d) gVolteStatus(%d)
[DSP] HALDSP_SetDynamicQsDisable(skip): TdpState(%d)
[DSP] HALDSP_SetDynamicQsDisable(skip):SCG(eDV_Active(%d))
[DSP] HALDSP_SetDynamicQsDisable(QS disabled)
[DSP] HALDSP_SetDynamicQsDisable(%d -> %d) scell_start(%d) scell_status(%d)
funcName = %s, QS Disable(%d us delay) for scell_start(%d)
[FEDV] cell_group should be 1
[DSP] IPC_ACTION_ID_REDEMAP_CONTROL: cc(%d), cmd(%d)
[DSP] Modem Status: % d, RF available: %d
[DSP] Skip sending IPC: IPC_ACTION_ID_TDP_CONFIG
[DSP] IPC_ACTION_ID_TDP_CONFIG: cc(%d), tdp_enable(%06x), lastTdpConfig(%06x)
[DSP] Modem Status: % d, RF available: %d
[DSP] Command PENDING:[%d]IPC_ACTION_ID_TIMING_UPDATE
[DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_TIMING_UPDATE
[DSP] IPC_ACTION_ID_TIMING_UPDATE: cc(%d), cp(%d), time_diff(%d)
[DSP] Modem Status: %d
[DSP] RF unavailable
[DSP] Command PENDING:[%d]IPC_ACTION_ID_CQI_INT_CONTROL: on(%d)
[DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_CQI_INT_CONTROL: on(%d)
[DSP] IPC_ACTION_ID_CQI_INT_CONTROL: on(%d)
[DSP] Modem Status: % d, RF available: %d, SKIP IPC_ACTION_ID_WAKEUP_DRX
[DSP] IPC_ACTION_ID_WAKEUP_DRX, han_ta_acc[0](%d)
[DSP] Modem Status: % d, RF available: %d
[DSP] Command PENDING:[%d]IPC_ACTION_ID_TXBACKUP_DRX
[DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_TXBACKUP_DRX
[DSP] IPC_ACTION_ID_TXBACKUP_DRX
[DSP] IPC_ACTION_ID_PHY_MEAS_REQUEST: meas_cnt(%d), dur(%x)
[DSP][DEBUG] GetMeasResult: NOT SAME!! gHal_DrsPositionIdx(%d), max_idx(%d)
[DSP] SetRsrpValue(CC%d): srv(%d,%d), nbr(%d)
[DSP] DRDS ongoing and ScgStack. not return here.
[DSP] Check UeState(%d)
[DEBUG_DVFS] MIMOsetup(%d), maxLayer(%d), power(%d)
[DEBUG_DVFS] DVFS change to base, power off sequence OwnerMask [%d]
[DEBUG_DVFS] MoDeM Engine DVS for LTE nonCA 4x4 MIMO, OwnerMask [%d/%d]
[DEBUG_DVFS] MoDeM Engine DVS for LTE nonCA, 4x4 MIMO is released, OwnerMask [%d/%d]
[DEBUG_DVS] DVS owner mask is not created(%d)
[DEBUG_DVFS] CA is activated ScellBitmap(%d)
[DSP] DRDS ongoing and McgStack. not return here.
[DSP] BASE case. not return here
[DSP] ongoing to sleep case. not return here
[DSP] Check UeState(%d)
CPU CLK change to QOS_LTE_L1_HALDSP_SCELL_FEDV
CPU clk, MIF clk unlock. To base
[DSP] SCellActDeactClkChange: ActivatedCC(%d -> %d), DlMaxLayer(%d -> %d)
[DSP] SCellActDeactClkChangeReq DlMaxLayer(%d), ActivatedCC(%d)
[DSP] RX mode enabling status Change for ST%d (%d -> %d)
[DSP] ConfigurePhyTest
[DSP] Modem Status: % d RF available: %d
[DSP] Command PENDING:[%d]IPC_ACTION_ID_CQI_LIMIT
[DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_CQI_LIMIT
[DSP] IPC_ACTION_ID_CQI_LIMIT: cell_group(%d)
HALDSP_Set_LT12, Start [%d] Timer
[DSP] IPC_ACTION_ID_LTE_BLK_ENABLE
[DSP] IPC_ACTION_ID_LTE_BLK_RELEASE(%d)
DSP_RELEASE(%d, %d)
[4G_DRDS] IsDuringScellConfig (%d)
HALDSP_SetDSPInitRelease: [DSDS]Do not release DSP again as it is already released
DSP_INIT
[DSP] Skip IPC_ACTION_ID_LTE_DSP_UL_INIT
[DSP] IPC_ACTION_ID_LTE_DSP_UL_INIT
[DSP] Skip IPC_ACTION_ID_LTE_DSP_UL_RELEASE >> gDrx_ActiveRat (%d)
[DSP] IPC_ACTION_ID_LTE_DSP_UL_RELEASE
[4RxD] HALDSP_Set4RxEnable: MTM running... so skip!!!
[DSP] Set4RxEnable: enable(%d), thres(%d,%d,%d), hys(%d,%d)
[DSP] Set4RxEnable: Mid enable(%d), thres(%d,%d,%d,%d)
[DSP] Set4RxEnable: DCI rate(%d,%d,%d,%d), DCR period(%d), Monitor thres(%d, %d)
[DSP] Set4RxEnable: cc(%d), enable(%d), bitmap(%x), 4Rx_RB_SIZE(%d)
[DSP] HALDSP_Set4RxEnableBitmap: cc(%d), demod_cc(%d), enable(%d), bitmap(%x)
[AS] SetAsEnable: Fixed rx_mode (0x%X) and AS TEST RxMode (NO), Disable AS
[AS] SetAsEnable: MTM mode. Disable AS
[AS] SetAsEnable: mcc(0x%x) Disable AS
[AS] SetAsEnable: DPDT only works in LB, Disable AS (%d)
[AS] SetAsEnable: Recv ON, Disable AS
[AS] SetAsEnable: CA config, Disable AS
[AS] TAS_Enb (Previous value: %d Updated value:%d)
[AS] Command PENDING:[%d]IPC_ACTION_ID_ANTSW_STOP
[AS] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_ANTSW_STOP
[AS] IPC_ACTION_ID_ANTSW_STOP
[AS] HALDSP_SetAsEnableForSIT SelectedANT[%d]
[AS] HALDSP_SetAsEnableForSIT : RAT is Not Active , Switch will be done after RAT becomes Active
[AS] SetAsEnable: Immediate switch is not done. Switch will done later
[AS] SetAsEnable: Fixed Antenna Mode (%d)
[AS] RFAPI_ChangeAntennaSwitch to Fixed Antenna(%d) was failed!
[AS] SetAsEnable: Not support AS (Band:%d, AsMode(%d) or AsSupportByRF(%d) is 0)
[AS] SetAsEnable: AS Test Mode OFF for current band (%d)
[AS] SetAsEnable: TestMode ON (Band:%d, Operation:%d)
[AS] SetAsEnable: TX ANT switch Test Operation Mode(%d)
[AS] SetAsEnable: TPC Max Time(%d), RSRP(%d %d %d %d) HardSW(%d,%d)
[AS] SetAsEnable: RSRP Threshold(%d %d), Tx Power Threshold(%d %d), RSRP Offset(%d %d)
[AS] 3P3T: Antenna(%d) TRP(%d), TIS(%d)
[AS] 3P3T: SwapType(%d) Main_RxRsrpOffset(%d), Sub_RxRsrpOffset(%d)
[AS] DPDT: Antenna(%d) TRP(%d), TIS(%d)
[AS] DPDT: Main_RxRsrpOffset(%d), Sub_RxRsrpOffset(%d)
[AS] SetAsEnable: Enabled, AsMode(%d)
[AS] SetAsEnable: Disabled
[AS] SetAsEnable: State is not changed (%d)
[AS] HALDSP_SetAsEnable_EXP: Proximity Backoff Enabled
[AS] HALDSP_SetAsEnable_EXP: Proximity detected -> No change AS
[AS] HALDSP_SetAsEnable_EXP: No Proximity detected -> Enable AS
[AS] HALDSP_GetCurrentAsStatus (%d)
[DSP] PCell_Pmax(%d), nvLimitedPmax(%d)
[AS] Pending HALDSP_SetPmaxLimitCmd_AS: Modem power(%d), RF unavailable(%d)
[AS] Command PENDING:[%d]IPC_ACTION_ID_PMAX
[AS] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_PMAX
[AS] HALDSP_SetPmaxLimitCmd_AS: Switch Status(%d), Max Power(%d)
[AS] IPC_ACTION_ID_PMAX: cell_group(%d), cc(%d), maxPower(%d)
[B8B7] Command PENDING:[%d]IPC_ACTION_ID_PMAX
[B8B7] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_PMAX
[B8B7] HALDSP_SetPmaxLimitCmd_AS: Switch Status(%d), Max Power(%d)
[B8B7] IPC_ACTION_ID_PMAX: cell_group(%d), maxPower(%d)
[CL-AIT] HALDSP_GetClAitEnable: status (%d)
[CL-AIT] SetAitEnable: Not supported RF band
[CL-AIT] SetAitEnable: Disabled under ENDC operation
[CL-AIT] SetAitEnable: Disabled due to AitEn2 and no VoLTE
[CL-AIT] SetAitEnable: Disabled due to no weak signal condition and no VoLTE(CA)
[CL-AIT] SetAitEnable: Do not enable CL-AIT (RfBandType:%d, AS mode:%d)
[CL-AIT] SetAitEnable: Do not enable CL-AIT (Switched to Upper Antenna)
[CL-AIT] OLAIT SET flag (%d)
[CL-AIT] SetAitEnable: enable(%d -> %d)
[CL-AIT] SetAitMipiWord: x_gnd_ctrl_type(%d), xgnd(0x%x, 0x%x, 0x%x)
[TxTime] power_index(%d %d %d %d %d)
[DSP] IPC_ACTION_ID_SET_DMXR_FREQ_INIT: config_idx(%x), config_cc(%x, %x), config_num(%d), release_cc(%x %x), release_num(%d)
[DSP] IPC_ACTION_ID_SET_DMXR_FREQ_INIT: ul_slo(%d), cmd(%d), cc(%d, %d), time(%d, %d, %d)
[DSP] Modem Status: % d RF available: %d
[DSP] Command PENDING:[%d]IPC_ACTION_ID_LTE_BLOCK_TRX_SW
[DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_LTE_BLOCK_TRX_SW
[DSP] IPC_ACTION_ID_BLOCK_TRX_SW (cell_group:%d)
[DSP] [AS] IPC_ACTION_ID_ANT_SWITCH not processed as UE is operating in fixed AS mode : (%d)
[DSP] IpcHndlr_SWReset !!!
[DSP] IPC_ACTION_ID_RECOVERY_SWRESET: ID(%d), cnt(%d) !!!
[DSP] IPC_ACTION_ID_RECOVERY_SWRESET: cnt(%d) !!!
[DSP] UL SPS grant release(by PDCCH or parameter reconfiguration)
[DSP] UL SPS grant activated
[DSP] Invalid cmd type (CC%d, %d)
[DSP] SCellActDeactCnf(CC%d): cmd(%d), SCellActCmd(%d)
[DSP] SlinkDeactCnf
[DSP] Skip IpcHndlr_RxModeReqInd due to a fixed Rx mode (0x%x)
[DSP] IpcHndlr_LteDemodRelCnf
HeNB SIB Decoding ACK(%d)
RF_DUMP received
ABNORMAL_PWR is detected
False Alram case (ABNORMAL_PWR)
[DSP] Don't try AIT_ProcDumpInd (Modem available:%d)
[DSP] Don't try AIT_ProcDumpInd in case of ENDC(%d)
[DSP] AIT_DumpInd: dump_state(%d),tx_ch_info(%d), tx_ch_power(%d), pusch_comp_pwr(%d)
[DSP] AIT_DumpInd: set1_start_rb(%d), set1_rb_size(%d), set2_start_rb(%d), set2_rb_size(%d)
[DSP] COMM_DUMP: msg_id(%d), cc_idx(%d), tti_index(%d)
[DSP] PHYDM Error report(0x%x), data[5:0]:0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x
[DSP] IPC_ACTION_ID_STORE_DSPPARAM, backup_han_ta_acc[0](%d)
[AS] IpcHndlr_AntSwitch (%d)
[AS] IpcHndlr_AntSwitch: Do not enable CL-AIT (Switched to Upper Antenna)
[DSP] HALDSP_SetAgcGainAvg(%d): agc_gain(%d, %d), SHM(0x%x,0x%x)
[DSP] PSCellDeActCnf(Demod:%d, Mxr:%d)
[DSP] IpcHndlr_PscellActCnf
[DSP] IPC_ACTION_ID_WIFI_COEXIST_INFO
[DSP] IPC_ACTION_ID_LTE_ATI_CMD : %d %d
[AS] TAS_status is reset due to TXSwap.
[DSP] IPC_ACTION_ID_TX_SWAP [0x%x]
[DSP] Update DRS Position(CC%d): TTI(%d)
[DSP] Update LAA DCI STATUS: cc(%d) status(%d)
[DSP] IPC_ACTION_ID_TX_BLOCK(cause:%d)
[DSP] IPC_ACTION_ID_TX_BLOCK_DONE(cause:%d)
[DSP] Don't proceed IPC_ACTION_ID_TX_BLOCK_DONE(TxStatus:%d) due to gDrx_ActiveRat(%d)
[SAR] [ST:%d] GetUserTxPowLte : %d
[SAR] [ST:%d]User Tx Power(dBm) is set : %d
[SAR] [ST:%d] User Tx Power(dBm) is 0(%d)! IsUserTxPowLimit is FALSE
[SAR] [ST:%d] GetTapcModeLte: TapcEnable(%d)!!
[SAR] [ST:%d] SetTapcModeLte: TapcEnable(%d)
[SAR] [ST:%d] GetUserTargetPowLte: The Band(%d) is not valid
[SAR] [ST:%d] GetUserTargetPowLte: Band(%d) => UserTargetPow:%d
[SAR] [ST:%d] SetUserTargetPowLte: The Band(%d) is not valid
[SAR] [ST:%d] SetUserTargetPowLte: Band(%d) => UserTargetPow:%d
[SAR] [ST:%d] GetTasControlModeLte: ControlByPlimit(%d)!!
[SAR] [ST:%d] SetTasControlModeLte: ControlByPlimit(%d)
[SAR] [ST:%d] GetApprovalModeLte: ApprovalMode(%d)!!
[SAR] [ST:%d] SetApprovalModeLte: ApprovalMode(%d)
[SAR] The current MCC is (%d)
[SAR] Abnormal gSARperiodM(%d) setting the gSARperiodM as the M_PERIOD(%d) by default
[SAR] MPeriod in NV is %d, Set gSARperiodM(%d) and gSarRemIdxOffset(%d) based on the Mode(%d)
[SAR] HALDSP_InitSAR! periodM(%d) gSARCompliance(%d) gSARsumLimit(%d)
[SAR] MPeriod was Changed: Update gSARperiodM(%d), gSARperiodM_Prev(%d)
[SAR] MPeriod wasn't changed: Update gSARperiodM(%d), gSARperiodM_Prev(%d)
[SAR] MPeriod was Changed by HALDSP_SetLteMperiod: Update gSARperiodM(%d), gSARperiodM_Prev(%d)
[SAR] InitSAR() instead of ReInitSAR() due to Abnormal condition(hal_SAR_total_remain(%d):out of range)
[SAR] HALDSP_ReInitSAR(MPeriod change)! hal_SAR_total_remain(%d) start index(%d) gSarPeriodM(%d) gSARsumLimit(%d)
[SAR] HALDSP_ReInitSAR(IRAT or Resume)! hal_SAR_total_remain(%d) start index(%d)
[SAR] HALDSP_GetTxDutyRatio:FDD(%d)
[SAR] HALDSP_GetTxDutyRatio:TDD(%d)
[SAR] HALDSP_CheckSlopeStatus: CurSlope > CurSlope_Th. Slope control Flag is set to CurSlope(%d). Rtar (%d), SarBackoff (%d), CurSlope_Th(%d), i(%d), StartY_100s(%d), StartY_60s(%d)
[SAR] HALDSP_CheckSlopeStatus: SlopeCtrlFlag(%d) CurSlope(%d) StartY100sAvg(%d) StartY60sAvg(%d) CurSlope_Th(%d) SarBackOff(%d)
[SAR][NORMAL][PRE_SAV][SLOPECTRL2] SarLimit(%d) SarLimitGainx100(%d)
[SAR][NORMAL][PRE_SAV][SLOPECTRL1] SarLimit(%d) due to gReducedSarTotalRemain(%d) >= AMulSarBudget(%d), but gSARSlopeCtrlFlag(%d)
[SAR][NORMAL][MAX] SarLimit(%d) (=RefSarScaled) due to gReducedSarTotalRemain(%d) >= AMulSarBudget(%d)
[SAR][LIMITED-TAPC] [LTE is VoiceRAT] gHal_TapcMode(%d) G1ExpSar(%d) gSARSupressLTE(%d) PrevG1ExpSar(%d) FixedPowRatio(%d) PLimitLimTASX10(%d)
[SAR][LIMITED-TAPC] [NR is VoiceRAT] gHal_TapcMode(%d) G1ExpSar(%d) gSARSupressLTE(%d) PrevG1ExpSar(%d) FixedPowRatio(%d) PLimitLimTASX10(%d) UsedSarIncRatio (%d) DbOffsetX10(%d)
[SAR][LIMITED-TAPC] SarLimit is changed to %d after coming out of Limited TAS mode
[SAR][RESTORE][SAV_1] SarLimit(%d) due to gReducedSarTotalRemain(%d) >= GMulSarBudget(%d), < BMulSarBudget(%d)
[SAR][RESTORE][MIN] SarLimit(%d) due to gReducedSarTotalRemain(%d) < GMulSarBudget(%d)
[SAR] [ST%d] Skip(%d) Remain(%d) ActualSkip(%d) prevtime(%d) curtime(%d) time_diff(%d)
[SAR] RecordOppositeAvgSarBuffer: RecordType(%d) OppositeSarBuffIdx(%d)
[SAR] RecordOppositeAvgSarBuffer: OppositeAvgSarBuffer[0~5](%d %d %d %d %d %d)
[SAR] HALDSP_CheckIsOppositeIncreased:: IsOppositeIncreased(%d) = (DiffAvgSar(%d) > MinAvgSarTh(%d)), FirstIdx(%d) LastIdx(%d) OppositeMperiod(%d)
[SAR] HALDSP_AdjustPowAllocRatio: PowAllocRatio(%d) IsSaturatedLte(%d) gSARMyPowAllocRatioOrigin(%d) TasG2x1000(%d) IsFR2(%d) RatioMode(%d)
[SAR][HALDSP_ImportTapcParam:INIT] SARperiodM(%d) gSARIsQFull(%d) gSARStrQCnt(%d) PowAllocRatioPrev(%d) G1ExpSar(%d)
[SAR][HALDSP_ImportTapcParam:IRAT] SARperiodM(%d) gSARIsQFull(%d) gSARStrQCnt(%d) PowAllocRatioPrev(%d) G1ExpSar(%d)
[SAR][HALDSP_ImportTapcParam:MPeriodChange] SARperiodM(%d -> %d) gSARIsQFull(%d) gSARStrQCnt(%d)
[SAR][PostProcessStage] gSarLimit(%d -> %d) due to gSARSupressLTE(%d) gSARPLimitX10(%d) UsedAvgSarLTE(%d)
[SAR][PostProcessStage] ENDC(%d) MPeriodForNR(%d) IsNROn(%d) IsFR2(%d)
[SAR] LTE TAS Status: LTE Remain TX Pwr(%d)/Max SAR Limit(%d)*100 = RemainPowGauge(%d%%) AvgPwrdBmX10(%d)
[SAR][NORMAL-TAPC] Pmax_inst(%d) is set (gHal_TapcMode:%d)
[SAR][LIMITED-TAPC] Pmax_inst(%d) is set (FixedPowRatio:%d, gHal_TapcMode:%d)
[SAR] gSARMaxLimitdB(%d) is changed as Pmax_inst(%d)
[SAR] [ST%d] HALDSP_UpdateTapcLteFlag: remainPatialM(%d) IsTxed(%d)
[SAR] TestMode disabled / EMC(%d)
[SAR] Check UeState(%d)
[SAR] Conduction Offset for Band[%d] is = %d
[SAR] PlimitUsedByNV(%d) is FALSE. USE the Default Plimit(%d)!!
[SAR-PHY] PowDbmX10(0~4 TTI):(%d %d %d %d %d)
[SAR-PHY] PowDbmX10(5~9 TTI):(%d %d %d %d %d), SAR_Total_10ms(%d)
[SAR][ST%d] PlimitUsedByNV(%d) PMaxLimit(%d) gSARPLimitX10(%d) -> RefSarScaled(%d) remain_ret(%d) SAR_Total(%d)
[SAR] Abnormal state! No Tx used for N(250ms): M[ST%d](hal_SAR_index:%d)
[SAR] HALDSP_InitSAR: Skip(%d) exceeds Mperiod(%d)
[SAR] [%d] hal_SAR_index(%d) SumSkippedSar(%d), exSarRemain[exIndex(%d)](%d), skipSarRemain[skipIndex(%d)](%d)
[SAR] UpdateSarRemain(Before): SAR_index(%d) SAR_Remain(%d) remainPatialM(%d) Remnant(%d)
[SAR] UpdateSarRemain: gSARIsQFull(%d) gSARStrQCnt(%d)
[SAR] UpdateSarRemain(After): SAR_index(%d) SAR_remain(%d) Remnant(%d) SumSkippedSar(%d), PrevSarRemaining(hal_SAR_remain[%d](%d) hal_SAR_remain2(%d)
[SAR] reset hal_SAR_total_remain(%d) -> (%d)
[SAR][DYNAMIC] UsedAvgSarLTE_100s(%d) UsedAvgSarLTE_60s(%d) UsedAvgSarLTE(%d) / MPeriodForNR(%d) UsedAvgSarNR(%d)
[SAR][DYNAMIC] IsLTEOn(%d) IsNROn(%d) UsedAvgSarLTE(%d) UsedAvgSarNR(%d) RawTotalUsedSar(%d) LtePowRatioForAlgo(%d), NR_Plimit(%d)
[SAR][DYNAMIC] EN-DC(%d) G1ExpSar(%d) gSARSupressLTE(%d) PrevG1ExpSar(%d) GainMode(%d)
[SAR] reset gReducedSarTotalRemain(%d) -> (%d)
[SAR] ENDC(%d) G1ExpSarForLTE(%d) gSARCompliance_AfterGain(%d) gSARsumLimit_AfterGain(%d) gReducedSarTotalRemain(%d)
[SAR] M_index(%u) RefSarScaled(%d) X_Used_SAR(%d) C_Used_SAR(%d)
[SAR][BACKOFF-MCC] SensorStatus(%d) limits Pmax_inst(%d)
[SAR][BACKOFF-CAM] SensorStatus(%d) limits Pmax_inst(%d) as TAS_Backoff(%d) - 0.5dB
[SAR] Pmax_inst(%d) PMaxLimit(%d) PeMaxByNetwork(%d) gSARPLimitX10(%d) Pow10ValForPmaxInst(%d) BasicSarLimitUpper(%d)
[SAR] [CHANGE SarLimitUpper]
[SAR] [CHANGE SarSuppress]
[SAR] [CHANGE SarBackOff]
[SAR] [Setup Stage][For MCD] G1ExpSar is (%d)
[SAR] [SarSuppress APPLIED]
[SAR] [SarLimitUpper APPLIED]
[SAR] Current Max Limit is %d.%d dBm. SarLimitUpper(%d) SarSuppress(%d) SarBackOff(%d)
[SAR] (M:%d) TAPC status: tapc_case(%d) TAPC Pmax(%d) gSarLimit(%d) LteDbmComplianceX10(%d) LTEAvgSar(%d) TasMode(%d)
[DSP] p_max_pwr_threshold is NULL
[DSP] HALDSP_SetMccforAS: MCC(%x -> %x) or MNC(%x -> %x) change
[SAR] PLMN Change: MCC(%x %x %x)/MNC(%x %x %x)
[SAR] PLMN Change: Change gHal_TapcMCCchange Flag to %d
[DSP] SetVolteStatus Current(%d -> %d), Other(%d)
[DSP] fbrxMeasRate(%d)
[DSP] GetVolteStatus (%d)
[DSP] GetOtherStackVolteStatus (%d)
[DSP] GetCurrentPmax (%d, %d, %d, %d ,%d)
[SPR] HALDSP_EnableB41Ns04Op: Stack#%d, NS04 enable(%d), band(%d), MCC-MNC(%d-%d)
[DSP] IPC_ACTION_ID_EDUAL_VOLTE_STATUS(%s) :: Mcg/Scg(St%d/St%d)
Not found available CC for earfcn(%d)
[DSP] IPC_ACTION_ID_SCG_START_IND: cc(%d), dl_earfcn(%d)
[DSP] Received TX_WAKEUP IPC from DSP
[AS] Command PENDING:[%d]IPC_ACTION_ID_THERMAL_RESTRICT_CTRL
[AS] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_THERMAL_RESTRICT_CTRL
[DSP] IPC_ACTION_ID_THERMAL_RESTRICT_CTRL
[DSP] IPC_ACTION_ID_THERMAL_RESTRICT_CNF: result(%d), level(%d) release(%d)
[L2 DATA] SetDataInactivityShm[%d ==> %d] StackId[%d]
[DSP] IpcHndlr_WciSyncInfo
Due to Pause flag. Don't change RX_MODE
Wakeup is ongoing. Don't change RX_MODE
[MTM] LMT: FER(%d)
[DSP] No action due to Tx wakeup IPC during CDRX sleep state!!!
[DSP] HALDSP_ChangeDspClock : change[%d] cpuOwnerMask[%d] - Cannot make cpuOwnerMaks
[DSP] HALDSP_ChangeDspClock : change[%d] cpuOwnerMask[%d] - DSP LOG OFF
[DSP] HALDSP_ChangeDspClock : change[%d] cpuOwnerMask[%d]
[DSP] HALDSP_ChangeDspClock : CPU CLK change to SVC_4G_REL13 OwnerMask[%d]
[DSP] HALDSP_ChangeDspClock : CPU CLK change to SVC_NO_SVC OwnerMask[%d].
[DSP] HALDSP_ChangeDspClock : Wrong command(%d)
