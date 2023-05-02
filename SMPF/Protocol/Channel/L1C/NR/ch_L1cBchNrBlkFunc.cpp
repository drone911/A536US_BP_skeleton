##[NR_CHANNEL][MSG_CNF_INFO][%d] alloc_res(DL = %d, UL = %d)
##[NR_CHANNEL] ====> cell_info_idx(%d), req_scell_idx(0x%x), alloc_rx_path(%d), alloc_demod_cc(%d), alloc_dl_freq(%d), alloc_bw(0x%02x, D8U8), alloc_tx_path(0x%02x, N8S8)
##[NR_CHANNEL] [MSG_CNF_INFO] Rel Scell Idx(%d)
##[NR_CHANNEL] Invalid Cfg(%d)/ Rel(%d) path_cfg_result is sent from SCC
##[NR_CHANNEL] Target scell index is not found in BchPathCfg (%d)
##[NR_CHANNEL] Invalid scell_idx for PATH_REL (%d)
##[NR_CHANNEL] PATH_CONFIG_CNF(PBCH/SERV) for (%d) out of (%d) Release, scell_idx(%d), bch_path_cfg_idx(%d)
##[NR_CHANNEL] NrScellConfigCnfCb is not called yet(%d, %d)
##[NR_CHANNEL] Need to process path_config information
##[NR_CHANNEL] Invalid Cfg(%d)/ Rel(%d) path_cfg_result is sent from SCC
##[NR_BCH] Need to check on_going_proc(0x%x)
##[NR_CHANNEL] ProcessSibDecStopReq:: m_BchDb->ctrlr_state(%d), m_BchDb->on_going_proc(0x%x), osi_flag(%d)
##[NR_CHANNEL] CalcCenterFreqInfoWithSsb : target_freq(%d), target_rb_num(%d), target_scs(%d)
##[NR_CHANNEL] CalcCenterFreqInfoWithSsb:: SSB(Start = %d, End = %d), Target(Start = %d, End = %d), calc_freq = %d, needed_bw = %d KHz
##[NR_CHANNEL] ServCellInfoInit:: scell_idx(%d)
##[NR_CHANNEL] scell_idx(%d) is not found @ ServCellInfo
##[NR_CHANNEL] BCHCTRLR@%s
##[NR_CHANNEL] BCHCTRLR@%s arfcn: %d, SysBw %d, PbchSubType %d
##[NR_CHANNEL] recv_sib1_msg is NULL: End event sysinfo schedule
##[NR_CHANNEL] SchedSysInfoRequestCb():: recv_info {sib1_freq(%d), sib1_rb_num(%d), sib1_scs(%d)}
##[NR_CHANNEL] FftStartOffsetSc for SIB1 is Odd(%d), scc_req_freq(%d)->(%d)
##[NR_CHANNEL] bw_idx for SIB 1 is not found.
##[NR_CHANNEL] SchedSysInfoRequestCb():: ssb_scs(%d), sib1_scs(%d)
##[NR_CHANNEL] SchedSysInfoRequestCb::SIB1_SSB{sib1_ssb_freq(%d), sib1_ssb_bw(%d), sib1_scs(%d)}, CUR{freq(%d), bw(%d), scs(%d)}, chg_sys_param4/sysinfo_in_servcell4(0x%x)
##[NR_CHANNEL] SIB1_CONFIG: path_idx(%d), is_ds_recovery(%d), m_BchDb->on_going_proc(0x%x), sib1_offset(%d)
##[NR_CHANNEL] OSI_CONFIG (sib bit map 0x%x) path_idx(%d), is_ds_recovery(%d), m_BchDb->on_going_proc(0x%x)
##[NR_CHANNEL] Restored m_BchDb->nr_serv_cell_info[%d] {scell_idx(%d) scc_cell(%d) cfg_status(%d)}
##[NR_CHANNEL] Restored m_BchDb->m_NrL1PhyCfgDb:: freq (%d), sib1(4)/dsds(4)/max_ul(4)(0x%4x), scell_bit_mask(0x%x), delta_scell_bit_mask(0x%x), spcell_idx(%d)
##[NR_CHANNEL] SchedServCellRecoveryCb, on_going_proc(0x%x)
##[NR_BCH] SchedPhyReleaseCb, ctrlr_proc_state(0x%x)
##[NR_CHANNEL] UpdateDmActCellInfo: num_cell(%d), cell_info.dl_band(%d, %d, %d, %d, %d, %d)
[NR_CHANNEL] CreatePathCfgReqForActDeactScell:: num_of_scell(%d)
##[NR_CHANNEL] CreatePathCfgReqForActDeactScell:: scell_index(%d) is not found in serv_cell_info
##[NR_CHANNEL] CreatePathCfgReqForActDeactScell:: Deact Scell List [(%d] scc_cell_info_idx(%d))
##[NR_CHANNEL] CreatePathCfgReqForActDeactScell:: Act Scell List [%d] DL{freq(%d), band(%d), dl_bw(%d)}, UL{freq(%d), ul_bw(%d)}, req_scell_idx4/dl_layer4(0x%x)
##[NR_CHANNEL] CreatePathCfgReqForActDeactScell:: num_of_act_scell(%d), num_of_deact_scell(%d)
##[NR_CHANNEL] Send SendPathRelForServCellRelMsg(%d), RelPurpose(%d)
##[NR_CHANNEL] HAL->BCHCTRLR@%s
##[NR_CHANNEL] PBCH decoding expired(NR_PBCH_DECODE)
##[NR_CHANNEL] PBCH decoding expired(NR_SERVING_CELL_CHAGE)
##[NR_CHANNEL] PBCH decoding expired(NR_IRAT_PBCH)
##[NR_CHANNEL] PBCH decoding fail, NrPbchCrcReport : %d
##[NR_CHANNEL] HAL->BCHCTRLR@%s:: recovery(%d), m_BchDb->on_going_proc(0x%x)
##[NR_CHANNEL] BchConfigCb : skip cnf to RRM
##[NR_CHANNEL] HAL->BCHCTRLR@%s:: m_BchDb->ctrlr_state(%d), m_BchDb->on_going_proc(0x%x)
##{NR_BCH] HAL->BCHCTRLR@NrCellTimeChangeCnfCb m_BchDb->ctrlr_state(%d)
##[NR_CHANNEL] ProcessPhyRelease():: m_BchDb->ctrlr_state(%d), m_BchDb->on_going_proc(0x%x), lcpu_res_rel_flag(%d)
##[NR_CHANNEL] ProcessServCellChange(%d), Invalid num_of_cfg_cell
##[NR_CHANNEL] ProcessServCellChange:: cell_info_idx(%d), req_scell_idx(%d), alloc_demod_cc(%d), alloc_bw(%d), alloc_freq(%d)
##[NR_CHANNEL] L1C_L1C_PBCH_REQ#1(cellId(%d), cur_freq_info(%d %d %d), ssb_freq(%d), SsbIndex(%d), rx_path_idx(%d))
##[NR_CHANNEL] L1C_L1C_PBCH_REQ#2(scs(%d), timeOffset(%d), subType(%d), Period(%d), demod_cc(%d), agcGain[0](%d), agcGain[1](%d))
##[NR_CHANNEL] L1C_L1C_PBCH_REQ#3(maxSsbNum(%d), NumHF(%d), SsbDemapSeedIndex(%d), MibInfoIncluded(%d)
##[NR_CHANNEL] UpdateSibSched:: type(%d), wakeupTime(%d)
##[NR_CHANNEL][WARNING] UpdateSibSched::Unexpected SibSchedType(%d)
##[NR_BCH] SchedOhcModeCb ctrlr_state(%d), on_going_proc(0x%x)
##[NR_CHANNEL] ProcessPathCfgFailure: on_going_proc(0x%x), ssb_arfcn(%d), pbch_sub_type(%d), ctrlr_state(%d)
##[NR_CHANNEL] Invalid path cnf result. Need to check with SCC
##[NR_CHANNEL] Please check bch_path_cfg_info(%d)
##[NR_CHANNEL] Invalid PathCfgFailure Scenario
##[NR_CHANNEL] next_path_cfg_idx is (%d) for SCELL
##[NR_CHANNEL] Invalid req_type in current BCH function flow
##[NR_BCH] Invalid serv_cell_info_idx in current BCH function flow
##[NR_BCH] [%d/%d] UpdateBchPathCfgInfo : req_scell_idx(0x%3x, new_cell4/scell_idx8) ==> bch_path_cfg[%d], next_cfg_idx(%d), num_of_cfg_cell(%d)
##[NR_CHANNEL] PATH_CONFIG_CNF(PBCH/SERV_CELL) for PCELL, num_of_bch_cfg_cell(%d)
##[NR_CHANNEL] L1C_L1C_PBCH_REQ#1(cellId(%d), cur_freq_info(%d %d %d), ssb_freq(%d), SsbIndex(%d), rx_path_idx(%d))
##[NR_CHANNEL] L1C_L1C_PBCH_REQ#2(scs(%d), timeOffset(%d), subType(%d), Period(%d), demod_cc(%d), agcGain[0](%d), agcGain[1](%d))
##[NR_CHANNEL] L1C_L1C_PBCH_REQ#3(maxSsbNum(%d), NumHF(%d), SsbDemapSeedIndex(%d), MibInfoIncluded(%d)
##[NR_CHANNEL] PATH_CONFIG_CNF(SERV_CELL) for SCELL, num_of_bch_cfg_cell(%d)
##[NR_CHANNEL] Invalid num_of_add_scell value
##[NR_CHANNEL] Please check bch_path_cfg_info(%d)
##[NR_CHANNEL] Invalid function in current BCH Ctrlr flow(%d)
##[NR_CHANNEL] PATH_CONFIG_CNF(MODIFY) for PCELL, req_type(0x%x), scell_idx(%d), demod_cc(%d), prev_bw(%d), prev_freq(%d), timing_offset(%d)
##[NR_CHANNEL] [BCH_PATH_CNF_INFO] m_BchDb->num_of_bch_cfg_cell[%d] cell_info_idx(%d), req_scell_idx(%d), alloc_demod_cc(%d), alloc_bw(%d), alloc_freq(%d)
##[NR_CHANNEL] bch_sib1_path_cfg rx_path(%d), (alloc_freq = %d, alloc_bw = %d, sib1_freq = %d, sib1_rb = %d, sib1_scs = %d, cur_scs = %d)
##[NR_CHANNEL] Cdrx Config Info. does not exist
##[NR_CHANNEL] Invalid m_BchDb->on_going_proc(0x%x)
##[NR_CHANNEL] PATH_CONFIG_CNF(MODIFY) for (%d) out of (%d) SCELL Act
##[NR_CHANNEL] Target scell index is not found in BchPathCfg
##[NR_CHANNEL] [BCH_PATH_CNF_INFO] [%d] cell_info_idx(%d), req_scell_idx(%d), alloc_demod_cc(%d), alloc_bw(%d), alloc_freq(%d)
##[NR_CHANNEL] PATH_CONFIG_CNF(MODIFY) for (%d) out of (%d) SCELL DEACT
##[NR_CHANNEL] ProcessScellRelAndDeact:: PATH_REL for SCELL would be sent during PATH_CFG(SERV) with added SCELL together
##[NR_CHANNEL] ProcessScellRelAndDeact:: Continue PATH_REL for SCELL after SCELL Deactivation(%d)
##[NR_CHANNEL] ProcessScellRelAndDeact:: ****** [%d] target release scc_cell_info_idx(%d)
##[NR_CHANNEL] ProcessScellRelAndDeact:: No need to process PATH_REL for SCELL
##{NR_BCH] CheckScellRelAndAdd4TheSameIdx: scell_idx(%d), addmod(0x%x), rel(0x%x), res(%d)
##[OHC] nr_serv_cell_info[0].scell_cfg_status(%d)
##[OHC] Target scell index is not found in BchPathCfg (%d)
##[OHC] index(%d), scell_cfg_status(%d), deact_demod_cc_array[%d](%d), deact_scell_idx_array[%d](%d)
##[OHC] sch_sinr_rx0_array[%d](%d), sch_sinr_rx1_array[%d](%d)
##[OHC] Send_OHC_SCC_CQI0_NR_CMD: num_to_be_deact(%d)
##[NR_BCH] SCC DEACT CQI0 CMD:: CMD_RESULT is CMD_RET_FAIL.
##[NR_BCH] SCC DEACT CQI0 CMD:: CMD_RESULT is CMD_RET_TIMEREXPIRED.
##[OHC] PrecessNormalCQI : nr_serv_cell_info[0].scell_cfg_status(%d)
##[OHC] Target scell index is not found in BchPathCfg (%d)
##[OHC] index(%d), scell_cfg_status(%d), deact_demod_cc_array[%d](%d), deact_scell_idx_array[%d](%d)
##[OHC] sch_sinr_rx0_array[%d](%d), sch_sinr_rx1_array[%d](%d)
##[OHC] Send_OHC_SCC_CQI0_NR_CMD: num_to_be_stop(%d)
##[NR_BCH] SCC DEACT CQI0 CMD:: CMD_RESULT is CMD_RET_FAIL.
##[NR_BCH] SCC DEACT CQI0 CMD:: CMD_RESULT is CMD_RET_TIMEREXPIRED.
