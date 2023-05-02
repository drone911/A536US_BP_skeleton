###[NR_MEAS] HALMEAS5G_ProcDMoverMeasIsr: Measure Result [prev_grp_bitmap: 0x%x, int_check: 0x%x, grp_idx: %d], DMover [Magic Num (prev: %d, cur: %d, isMnUpdated: %d), size: %d]
###[NR_MEAS] HALMEAS5G_ProcDMoverMeasIsr: invalid grp_idx: %d, int_pend_num: %d
###[NR_MEAS] HALMEAS5G_ProcDMoverMeasIsr: meas_done_grp_num: %d, n_grp: %d
###[NR_MEAS] HALMEAS5G_ProcDMoverMeasIsr: Remaining cells for Scheduling: %d
###[NR_MEAS] ScheduleMeas: Cur Atti: %u, sched Start Atti: %u, End Atti: %u
###[NR_MEAS] (F) ScheduleMeas: Measure schedule fail, Cur Atti: %u, Meas Start Atti: %u, diff: %u
###[NR_MEAS] ScheduleMeas: rtg_cnt(0x%08x, read_sfn: %u, srv_sfn: %u, srv_asfn: %u), gen_cnt(0x%08x, gencnt: %u fr_cnt: %u)
###[NR_MEAS] ScheduleMeas: rtg(%d), fr_tick_val: %u, fr_diff: %d, cand_fr_cnt: %u, sched_start_sfn: %u, sched_start_asfn: %u, sched_end_asfn: %u
###[NR_MEAS] MeasBlockSwReset: Done
###[NR_MEAS] InitializeBuffers: Done, isInitCall: %d
###[NR_MEAS] CalcTiming: Update for HFI=1, isfn(%d)
###[NR_MEAS] CalcTiming: 5ms L2N measure, _start_cand_fr_cnt: %d
###[NR_MEAS] CalcTiming: idx: %d, cand_timing: %u, cand_timing_req: %u, cand_gen_cnt: %u
###[NR_MEAS] CalcTiming: Exception 1, cur_gencnt_160ms: %u, cadidate_timng: %u
###[NR_MEAS] CalcTiming: Exception 2, cur_gencnt_160ms: %u, cadidate_timng: %u
###[NR_MEAS] CalcTiming: cell_cnt: %d, meas_time_unit: %u, sched_address: 0x%x, tot_gen_cnt: %u, cand_gen_cnt: %u
###[NR_MEAS] CalcTimingCsirs: sched_address : 0x%x, cell_cnt: %d
###[NR_MEAS] CalcTimingCsirs: Using SSB OFFSET csirs_offset: %u, tot_gen_cnt: %u, csirs_sym_offset: %u, gencnt_per_symb[p_cfg->scs]: %u, start_offset_csirs: %u
###[NR_MEAS] CalcTimingCsirs: period_csirs:%d, first_sym_time_domain: %d, cur_fr_cnt: %u
###[NR_MEAS] CalcTimingCsirs: tot_gen_cnt: %u, isfn: %u, islot: %d, isym: %d, start_offset_csirs: %u
###[NR_MEAS] ConfigureTDBuf: skip fft (Rx0) onOff
###[NR_MEAS] ConfigureTDBuf: skip fft (Rx1) onOff
###[NR_MEAS] ConfigureTDBuf: TD Buf GrpCnt: %d, Cell Cnt: %d
###[NR_MEAS] ConfigureTDBuf: p_dsc->blind_pbch_en: %d, p_NrMeasScheInfo->_4Rx_ind: %d, p_dsc->path_ind: %d, p_NrMeasScheInfo->total_cck(%d, %d), m_MeasSchedInfo.td_buf_idx(%d, %d)
###[NR_MEAS] ConfigureTDBuf: slotbitmap: 0x%x 0x%x, 0x%x, SCS: %d, smtcDurIdx: %d, n_slot: %d
###[NR_MEAS] ConfigureTDBuf: configure cellYrssi_1 elements
###[NR_MEAS] ConfigureTDBuf: start_gen_cnt: %u, start_fr_cnt: %u
###[NR_MEAS] ConfigureTDBuf: measgrp_schedule0: 0x%x
###[NR_MEAS] ConfigureTDBuf: reg: 0x%x isfn: %d islot: %d isym: %d
###[NR_MEAS] ConfigureTDBuf: bitmap0Val: 0x%x, bitmap1Val: 0x%x
###[NR_MEAS] ConfigureTDBuf: CSI RS: MREG.pREG_RXSAMPLEBUF_RT->TD_BUF_NRNGRPx[grp_cnt].CELL[cell_cnt].BITMAP[0] val: 0x%x, BITMAP[1] val: 0x%x
###[NR_MEAS] InitializeTDBuf: Invalid CC index(%d) !!
###[NR_MEAS] InitializeTDBuf: Done, serv_bw(%d), cck(%d), td_buf_idx(%d)
###[NR_MEAS] InitializeTDBuf: Invalid CC div index(%d) !!
###[NR_MEAS] InitializeTDBuf: Done, serv_bw(%d), cck_div(%d), td_buf_idx_div(%d)
###[NR_MEAS] ConfigureMeas: n_grp: %d, remaing: %d, n_cell: %d, n_cell_per_grp0:%d n_cell_per_grp1:%d, n_cell_per_sche: %d
###[NR_MEAS] ConfigureMeas: SSB: cell_cnt %d, grp_cnt %d
###[NR_MEAS] ConfigureMeas: SSB: scs_ft_tb: %d, serv_bw_tb: %d, freq_range: %d, scs: %d, meas_serv_bw: %d
###[NR_MEAS] ConfigureMeas: SSB: fft_size: %d, rb_num: %d, guard_size: %d, ssb_offset: %u, start_re: %d
###[NR_MEAS] ConfigureMeas: CSI_RS: cell_cnt: %d, grp_cnt: %d
###[NR_MEAS] ConfigureMeas: CSI_RS: MREG.pREG_DEMOD_5G_MEAS->MEASNRCELLCFG[%d] addr: 0x%x, val: 0x%x
###[NR_MEAS] ConfigureMeas: CSI_RS: MREG.pREG_DEMOD_5G_MEAS->MEASNRCSIRSCELL%dSUB0CFG addr: 0x%x, val: 0x%x
###[NR_MEAS] ConfigureMeas: CSI_RS: MREG.pREG_DEMOD_5G_MEAS->MEASNRCSIRSCELL%dSUB%dCFG addr: 0x%x, val: 0x%x
###[NR_MEAS] ConfigureMeas: CSI_RS: freq_alloc_bitmap: %d, guard_size: %d
###[NR_MEAS] ConfigureMeas: CSI_RS: csirs_meas_lowerlimit: %d, csirs_meas_upperlimit: %d, guard_size: %d, k_first: %d, k_last:%d
###[NR_MEAS] ConfigureMeas: CSI_RS: MREG.pREG_DEMOD_5G_MEAS->MEASCELL%dINBANDRSRP addr: 0x%x, val: 0x%x
###[NR_MEAS] ConfigureMeas: CSI_RS: MREG.pREG_DEMOD_5G_MEAS->MEASCELL%dINBANDRSSI addr: 0x%x, val: 0x%x
###[NR_MEAS] ConfigureMeas: CSI_RS: MREG.pREG_DEMOD_5G_MEAS->MEASCELL%dSUB%dINBANDRSRP addr: 0x%x, val: 0x%x
###[NR_MEAS] ConfigureMeas: CSI_RS: MREG.pREG_DEMOD_5G_MEAS->MEASCELL%dSUB%dINBANDRSSI addr: 0x%x, val: 0x%x
###[NR_MEAS] ConfigureMeas: CSI_RS: MEASNRCELL%dRS Xmask addr: 0x%x, val: 0x%x, Ymask addr: 0x%x, val: 0x%x
###[NR_MEAS] ConfigureMeas: CSI_RS: MEASNRCSIRSCELL%dSUB%d Xmask addr: 0x%x, val: 0x%x, Ymask addr: 0x%x val: 0x%x
###[NR_MEAS] UpdateCfgInfo: grp_cnt: %d, n_cells_per_grp: %d
###[NR_MEAS] UpdateCfgInfo: grp_cnt: %d, cell_cnt: %d, cid: %d, used_rxmode: 0x%X, shm_idx: %d, path_ind: %d
###[NR_MEAS] EnableMeasDmover: Not supported type(%d)
###[NR_MEAS] EnableMeasDmover (NcDmBuf:%d): Done, %s
###[NR_MEAS] dump: ========== Normal dump ==========
###[NR_MEAS] dump: ========== Abnormal dump ==========
###[NR_MEAS] dump: DMover Magic Num prev: %d, cur: %d, isMnUpdated: %d, size: %d
###[NR_MEAS] dump: ========== REG_RXSAMPLEBUF
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: serv_bw(%d), cck(%d), td_buf_idx(%d)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: serv_bw(%d), cck_div(%d), td_buf_idx_div(%d)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: TD Buf grp_cnt: %d
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: TD Buf grp_cnt: %d, cell_cnt: %d
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: ========== REG_DEMOD_5G_MEAS
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: Meas grp_cnt: %d
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: Meas grp_cnt: %d, cell_cnt: %d
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] ========== DumpDatamoverReg ==========
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
###[NR_MEAS] Deinitialize: Done
###[NR_MEAS] HALMEAS5G_SetMeasRequest: Zero cell requested!!
###[NR_MEAS] HALMEAS5G_SetMeasRequest: Done, %s
###[NR_MEAS] SetCfgInfo: meas_mode(%d), meas_type(%d), start_sfn(%d), meas_dur(%d), meas_serv_bw(%d), n_cell(%d), rsrp_mode(%d)
###[NR_MEAS] SetCfgInfo: scs(%d), ssb_format(%d), ssb_period(%d), start_re(%d), freq_range(%d), L_Max(%d), hfi(%d)
###[NR_MEAS] SetCfgInfo: rx_mode(0x%x), cc(%d, %d), td_buf_info(0x%x, 0x%x), ssb_bitmap0(0x%x), ssb_bitmap1(0x%x)
###[NR_MEAS] SetCfgInfo: Invalid Measure cell num: %d
###[NR_MEAS] SetCfgInfo: num_ue_ant: %d
###[NR_MEAS] SetCfgInfo: m_MeasSchedInfo.n_cell: %d init_meas_cnt: %d
###[NR_MEAS] CSI RS[%d]: SlotOffset Correction: Periodicity(%d ms), StartSfnSlotOffset(%d), RsSlotOffset(%d) --> (%d)
###[NR_MEAS] SetCfgInfo: CSI RS: WARNING: m_MeasSchedInfo.n_cell %d exceeds 16
###[NR_MEAS] ===================================CSI RS Scheduling================================================
###[NR_MEAS] CellIdx/SubCellIdx/CsiRsIdx(%09d) PCI(%d) FrameTime(%u) SlotOffset(%d) lo(%d) k0k1k2(0x%3x)
###[NR_MEAS] ================================================================================================
###[NR_MEAS] SetCfgInfo: Limit the number of cell to be measure considering FFT Capa: %d => %d
###[NR_MEAS] SetCfgInfo: Total scheduled cell cnt: %d, num_ue_ant: %d, cell_cnt_except: %d
###[NR_MEAS] SetCfgInfo: SSB index detection schedule, CellIdx: %d, cid: %d, offset: %u, rs_type: %d, path_ind: %d, accum_cell_cnt: %d
###[NR_MEAS] SetCfgInfo: SS-RSRP measure bit map not 0
###[NR_MEAS] SetCfgInfo: SS-RSRP measure, CellIdx: %d, cid: %d, offset: %u, rs_type: %d, hfi: %d, accum_cell_cnt: %d, 4Rx_ind: %d
###[NR_MEAS] SetCfgInfo: SS-RSRP measure, p_dsc->ssb_num: %d, p_dsc->blind_pbch_en: %d, p_dsc->rs_type_ssb: %d, path_ind: %d
###[NR_MEAS] SetCfgInfo: NrMeasScheInfo: n_cell %d, n_grp %d, n_cell_per_grp[2] %d, n_cell_per_grp[3] %d, total_cck %d
###[NR_MEAS] Initialize: Done
###[NR_MEAS] DisLTEConfig: Done
###[NR_MEAS] HALMEAS5G_ProcComposeResult: n_grp(%d)
###[NR_MEAS] ComposeResult: Done, grpIdx: %d, isDmResultValid: %d
###[NR_MEAS] GetDataMoverMeasResult: CSIRS: m_MeasDmRes/CsiRsMeasData[dm_idx] addr: 0x%x/0x%x
###[NR_MEAS] GetDataMoverMeasResult: SSB: m_MeasDmRes/SsbMeasData[dm_idx] addr: 0x%x/0x%x
###[NR_MEAS] GetDataMoverMeasResult: grp_idx: %d, dm_idx: %d, n_cells_per_grp: %d
###[NR_MEAS] GetDataMoverMeasResult: cell_cnt[%d], rs_type: %d, rs_type_ssb: %d, ssb_num: %d
###[NR_MEAS] GetDataMoverMeasResult: ssb_cnt:%2u, gain_rsrp(Rx0/1):%7u, grp/cell/ssb:%4u, SSS(rsrp:%9u, rs_pwr:%9u), PBCH(rsrp:%9u, rs_pwr:%9u)
###[NR_MEAS] GetDataMoverMeasResult: grp/cell:%u, gain_rssi(Rx0/1):%7u, rssi:%9u
###[NR_MEAS] GetDataMoverMeasResult: DumpMeasNrRptBufRData, invalidResultCnt:%d
###[NR_MEAS] GetDataMoverMeasResult: rs_type: CSI_RS, cell_cnt : %d, csirs_num: %d, dm_address: %d, Readaddress: 0x%x
###[NR_MEAS] GetDataMoverMeasResult: dm_address: %d, noOfCsiRs: %d, meas_gain_rsrp: %d %d, meas_gain_rssi: %d %d
###[NR_MEAS] GetDataMoverMeasResult: Readaddress: 0x%x, cell_idx:%d, grp_idx: %d, subcell_idx: %d
###[NR_MEAS] GetDataMoverMeasResult: rsrp(%d %d), rssi(%d %d), rs_pwr(%d %d)
###[NR_MEAS] GetDataMoverMeasResult: Dump, invalidResultCnt:%d
###[NR_MEAS] ========== DumpMeasNrRptBufRData ==========
###[NR_MEAS] DumpMeasNrRptBufRData: grpIdx: %d, baseAddr: %d, ssbNum: %d
###[NR_MEAS] DumpMeasNrRptBufRData: ssbCnt[%02u] = 0x%08X
###[NR_MEAS] DumpMeasNrRptBufRData: ssbCnt[%02u] = 0x%08X
###[NR_MEAS] DumpMeasNrRptBufRData: ssbCnt[%02u] = 0x%08X
###[NR_MEAS] DumpMeasNrRptBufRData: ssbCnt[%02u] = 0x%08X
###[NR_MEAS] DumpMeasNrRptBufRData: ssbCnt[%02u] = 0x%08X
###[NR_MEAS] DumpMeasNrRptBufRData: rssi = 0x%08X
###[NR_MEAS] DumpMeasNrRptBufRData: rssi = 0x%08X
###[NR_MEAS] ResultCompen (Update RSRQ Rx%d): rssi_dB: %d, rsPwr_compened: %d, rsPwr_hw: %d, cal_factor_rsrp: %d
###[NR_MEAS] ResultCompen (Update RSRQ Rx%d): [PRE] cell_cnt/ssb_cnt/ssb_idx:%5u, rsrp: %d, rssi: %d, rsrq: %d
###[NR_MEAS] ResultCompen (Update RSRQ Rx%d): [POST] cell_cnt/ssb_cnt/ssb_idx:%5u, rsrp: %d, rssi: %d, rsrq: %d
###[NR_MEAS] ResultCompen: nre: %d, scs_dB_comp: %d, sys_bw_dB_comp: %d, cal_factor_rsrp: %d
###[NR_MEAS] ResultCompen: nrb: %d meas bw : %d
###[NR_MEAS] ResultCompen: Cell: %d, CSIRS IDX %d, RSSI(%d %d)
###[NR_MEAS] ResultCompen: RSRP(%d %d), RSRQ(%d %d), RS-SINR(%d %d)
###[NR_MEAS] SortParsedDmResult: Done, cellCnt:%d, ssbNum:%d
###[NR_MEAS] UpdateResult: Invalid group index: %d
###[NR_MEAS] UpdateResult: grp_idx: %d, n_cells_per_grp: %d, isValidResult: %d, isDmResultValid: %d
###[NR_MEAS] UpdateResult: CellCnt[%d]: used_rxmode: 0x%X
###[NR_MEAS] UpdateResult: CellCnt[%d]: path: %d %d %d %d, cnt_per_cell: %d %d
###[NR_MEAS] UpdateResult: CellCnt[%d], SsbCnt[%03d]: total_cell_cnt: %d, _4rx_ind: %d, path_ind: %d
###[NR_MEAS] UpdateResult: rx_cnt/update_path/ssbIdx:%05u, valid:%d, RSSI(%d), RSRP(%d), RSRQ(%d), RS_SINR(%d), MEAS_GAIN(%d)
###[NR_MEAS] UpdateResult: rx_cnt/update_path/ssbIdx:%05u, valid:%d, RSSI(%d), RSRP(%d), RSRQ(%d), RS_SINR(%d), MEAS_GAIN(%d)
###[NR_MEAS] UpdateResult: rx_cnt/path_offset/CsiRsIdx:%05u, valid:%d, RSSI(%d), RSRP(%d), RSRQ(%d), RS_SINR(%d), MEAS_GAIN(%d)
###[NR_MEAS] DeconfigureTDBuf: Disable FFT (Rx0)
###[NR_MEAS] DeconfigureTDBuf: Disable FFT (Rx1)
###[NR_MEAS] DeconfigureTDBuf: Done, grpIdx: %d
###[NR_MEAS] HALMEAS5G_ProcMeasStop: Not scheduled
###[NR_MEAS] HALMEAS5G_ProcMeasStop: Done
###[NR_MEAS] SetMeasStopCmd: Done, grpIdx: %d
###[NR_MEAS] DeconfigureMeas: Done, grpIdx: %d
[HALMEAS][WARNING]NullFunc()!!
