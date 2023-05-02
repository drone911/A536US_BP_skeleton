###[NR_DEMOD] InitDemodProcNr()
###[NR_DEMOD] InitHalScellBwpInfo:: init_all_flag(%d)
###[NR_DEMOD] ProcPhyConfigReq phy_cfg_update(%d), max_ul_layer(%d), srs_info(%d), domain_type(%d), m_domainType(%d)
###[NR_DEMOD] ProcPhyConfigReq phy_cfg_update(%d), max_ul_layer(%d), srs_info(%d), demod_cc(%d), domain_type(%d) scell_idx(%d), m_domainType(%d)
###[NR_DEMOD] RECV_DRX_INFO valid(%d), on_duration(%d), inact_tmr(%d), cycle(%d), short_drx(%d), slotoffset(%d), skip_tracking(%d)
###[NR_DEMOD] ProcSib1PhyConfigReq:: Invalid phy_cfg_update(%d)
###[NR_DEMOD] ProcSib1PhyConfigReq:: max_ul_layer(%d), srs_info(%d), domain_type(%d), m_domainType(%d)
###[NR_DEMOD] ProcSib1PhyConfigReq:: Invalid phy_cfg_update(%d)
###[NR_DEMOD] ProcPhyConfigDoneHisr
###[NR_DEMOD] GetRunningExtCmdReq fail [PHY_CONFIG_NR_CMD]
###[NR_DEMOD] Invalid rx_path(%d), rf_path(%d) @ ProcPhyConfigDoneHisr
###[NR_DEMOD] ProcPhyConfigDoneHisr:: rf_ul_freq(%d)
###[NR_DEMOD] ProcCreateScellCfgReq SCellBitmask(0x%x), AddModSCellBitmask(0x%x), ReleaseSCellBitmask(0x%x), num_of_add_scell(%d), num_of_rel_scell(%d), domain_type(%d), m_domainType(%d)
###[NR_DEMOD] error!!! sPcellCfg is NULL
###[NR_DEMOD] error!!! num of add_scell && rel_scell is 0, total_num_of_scell(%d)
###[NR_DEMOD] Invalid total_num_of_scell is detected. Please ask RRC this issue
###[NR_DEMOD] Release Scell List [%d] scell_idx(%d), rel_shm_idx(%d), total_num_of_scell(%d)
###[NR_DEMOD] ProcCreateScellCfgReq:: IPC[%d] scell_idx(%d), cc_idx(%d), lcpu_array_idx(%d) bwp_id(D=0x%x, U=0x%x), FR/Duplex(0x%x)
###[NR_DEMOD] ProcCreateScellCfgReq:: Invalid ipc_array_idx
###[NR_DEMOD] SHM NrScellConfig Info : scell_idx/phy_cell_id [0]%8d)
###[NR_DEMOD] SCELL_CONFIG_COMMON_MASK is absent
###[NR_DEMOD] SCELL_CONFIG_DEDI is absent
###[NR_DEMOD] SMTC_MASK is absent
###[NR_DEMOD] ProcScellCfgCnf:: Invalid phy_cfg_update(%d)
###[NR_DEMOD] ProcScellCfgCnf: scell_cnf_type(%d), scell_cmd(%d), demod_cc(%d), cnf_cnt_recv4/target4(0x%x), num_scell_add4/rel4(0x%x), domain_type(%d)
###[NR_DEMOD] ipcSib1PcellCfg :: present_flag(0x%x), nr_ue_id(%d)
###[NR_DEMOD] RESTORE_DRX_INFO valid(%d), on_duration(%d), inact_tmr(%d), cycle(%d), short_drx(%d), slotoffset(%d), skip_tracking(%d)
###[NR_DEMOD] ipcSib1PcellCfg :: present_flag(0x%x), nr_ue_id(%d), pcch_present_flag(0x%x), paging_cycle(0x%x, D4S4)
###[NR_DEMOD] ProcCreateRestorePcellReq:: restore_info(%d), ipc_bitmap(0x%x), domain_type(%d)
###[NR_DEMOD] ProcLcpuStorePhyCfg()
###[NR_DEMOD] ForceSendingScellDeactIpc:: num_act_scell(%d), lcpu_act_deact_bitmap(0x%x), domain_type(%d), m_domainType(%d)
###[NR_DEMOD] Invalid resule of LCPU Scell Deact(0x%x)
###[NR_DEMOD] Target scell to deact does not exist
###[NR_DEMOD] Invalid lcpu_act_deact val in rxf info (0x%x)
###[NR_DEMOD] CheckLcpuScellDeactDone:: 200_us_cnt(%d), rxf_bitmap(0x%x), lcpu_act_deact_bitmap(0x%x)
###[NR_DEMOD] CheckLcpuScellDeactDone:: 200_us_cnt(%d), total_duration(%d), lcpu_act_deact_bitmap(0x%x), max_wait_time_us(%d)
###[NR_DEMOD] SendSysParamChange:: num_of_hal_scell_info_backup(%d), SCellBitmask_backup(0x%x), AddModSCellBitmask_backup(0x%x), ReleaseSCellBitmask_backup(0x%x)
###[NR_DEMOD] ProcSysParamChange: cmd_info4/event4/rx_path8(0x%4x), dmxr_freq_slo(%d), band(%d), rx_dl_freq(%d), rf_dl_freq(%d)
###[NR_DEMOD] ProcSysParamChange:: num_of_hal_scell_info(%d)
###[NR_DEMOD] %s(%d)
###[NR_DEMOD] GetRunningExtCmdReq fail [SYS_PARAM_CHANGE_NR_CMD]
###[NR_DEMOD] Sending SYS_PARAM_CHANGE_NR_CMD CB:: rx_path(%d), cmd_info(%d), event(%d), sync_type(%d), sys_bw(%d)
###[NR_DEMOD] ProcSsbPathCtrl(%d, %d, %d, %d, %d ,%d)
###[NR_DEMOD] ProcScellConfig:: SCellBitMask(0x%x), AddModSCellBitmask(0x%x), ReleaseSCellBitmask(0x%x), num_of_add_scell(%d), num_of_rel_scell(%d)
###[NR_DEMOD] ProcScellConfig: demod_cc_bitmap(0x%x), rel_demod_cc_bitmap(0x%x)
###[NR_DEMOD] No need to send SCELL_CONFIG IPC for Release to LCPU
###[NR_DEMOD] DebugHalScellBwpInfo:: [%d] (scell_idx8/demod_cc8(0x%4x), scell_scs4/ssb_scs4(0x%x), scell_bwp_idx(0x%x, D4U4),dl_offset(%d, %d))
###[NR_DEMOD][WARN] DebugHalScellBwpInfo:: num_of_hal_scell_info(%d), debug_num_of_cfg_scell(%d)
###[NR_DEMOD] DebugHalScellBwpInfo:: num_of_hal_scell_info(%d)
###[NR_DEMOD] SetHalScellBwpInfo:: num_of_hal_scell_info(%d -> %d)
###[NR_DEMOD] GetHalScellBwpInfo:: scell_idx(%d) is not found.
###[NR_DEMOD] GetHalScellBwpInfo:: scell_idx(%d), hal_scell_bwp_info[%d/%d]{demod_cc4/scs4(0x%x), bwp_idx(0x%4x, D8U8), dl_bwp_offset(ssboffset %d, fftoffset %d)}
###[NR_DEMOD] GetHalScellBwpInfo:: dl_freq_info(%d, %d), dl_bw(%d), ul_freq_info(%d, %d), ul_bw(%d)
###[NR_DEMOD] RelHalScellBwpInfo:: num_rel_scell(%d), num_of_hal_scell_info(%d)
###[NR_DEMOD] scell_idx(%d) is not found in scell_shm_idx_array
###[NR_DEMOD] scell_idx(%d) is in scell_shm_idx_array[%d]
###[NR_DEMOD] Invalid domain_type (%d, %d)
###[NR_DEMOD] GetRunningExtCmdReq fail [LCPU_STORE_PHY_CFG_NR_CMD]
###[NR_DEMOD] ProcLcpuStorePhyCfgCnf DrxType(%d)
###[NR_DEMOD] No need to send SCELL_CONFIG_REQ IPC
###[NR_DEMOD] ProcLcpuRestorePhyCfgCnf: recov_scell_found(%d), domain_type(%d), m_domainType(%d)
###[NR_DEMOD] ProcBplmnCgiNrCmd:: status(%d), demod_cc(%d)
###[NR_DEMOD] BplmnCgiNrCmdCnf
###[NR_DEMOD] Restored config_info(0x%x), cmd_event_info(0x%x, cmd4/event4), chg_val(%d), ul_slo_info(0x%x, ul_flag4/ul_rf_bw4), ul_slo_offset(%d)KHz
###[NR_DEMOD] ProcPhyChangeInfo:: modi(%d), ue_id(%d), demod_cc(%d), domain_type(%d)
###[NR_DEMOD] ProcPhyChangeInfo: Invalid Event
###[NR_DEMOD] RestoreHalScellBwpInfo:: num_of_hal_scell_info(%d), SCellBitmask(0x%x), AddModSCellBitmask(0x%x), ReleaseSCellBitmask(0x%x)
###[NR_DEMOD] GetConfigDemodCcBmp:: demod_cc_bmp(0x%x)
###[NR_DEMOD] ProcCqi0Ctrl:: demod_cc(%d) ohstatus(%d)
