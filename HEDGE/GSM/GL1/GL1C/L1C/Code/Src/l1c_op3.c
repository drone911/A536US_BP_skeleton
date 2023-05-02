pch_tgl_conflict check %d
PScell start_fn %d toggle_fn_51 %d status_flag %d
schedule PCH2 1 frm before
SScell start_fn %d toggle_fn_51 %d status_flag %d
Recheck conflict: pch_tgl_conflict check %d
PScell start_fn %d toggle_fn_51 %d status_flag %d
TGL-CBCH 1 overlap detected
TGL-CBCH 1 overlap : CBCH1 not present
TGL-CBCH 2 overlap detected
TGL-CBCH2 overlap : CBCH2 not present
pch_abs_fn %d scell_pch_fn51 %d
abs_fn_scell_pch_wrt_primary %d sec_scell_pch_fn51 %d
prim_scell_tc %d sec_scell_tc %d
PCH RR same TC & MF
PCH RR diff TC & same MF
PCH RR same TC & MF
l1c_prim_pg_fn51 %d l1c_sec_pg_fn51 %d
PCH RR Prim Before Sec
PCH RR sec before prim
PCH RR prm sec same fn
PCH RR Prim Before Sec
PCH RR Sec before Prim
pch_rr_required %d
scheduling PCH1 %d Simno %d pg_blk_tdma_fn %d
SEC SCELL PCH ABS FN %d , %d
scheduling PCH2 %d %d pg_blk_tdma_fn %d page2_tdma_fn %d
SCELL2 not camped %d %d
scheduling PCH1 %d %d pg_blk_tdma_fn %d
Primary Scell Not present
DRX:Swap Secondary PCH Delayed: %d
SEC SCELL PCH ABS FN %d , %d
scheduling PCH2 %d %d pg_blk_tdma_fn %d page2_tdma_fn %d
SCELL2 not camped %d %d
CBCH supported fn=%d
CBCH not supported d%d s%d
CBCH1: Wrong primary serving cell simno %d
CBCH2 supported fn=%d TS= %d
CBCH2 not supported d%d s%d cbch2-ts%d
CBCH2: Wrong secondary serving cell simno %d %d
l1c_listen_to_full_cch(%d)
l1x_scell_sysinfo_error_cnt set to %d
l1c_listen_to_full_cch grant
l1c_listen_to_full_cch reject
Same Cell :l1_Scell->arfcn %d p_l1_passive_chn_data->cell_params[l1c_processing_sim].cell_desc.bcch_carrier %d
New Cell :l1_scell.arfcn %d l1_scell.simno %d p_l1_passive_chn_data->cell_params[%d].cell_desc.bcch_carrier %d l1_new_scell.simno %d
l1c_restart_idle_task {%i}
l1c_restart_idle_task_from_pbcch {%i}
l1c_camp_on_new_cell(%d) {%i}
S: RESEL :l1_new_scell.arfcn %d l1_new_scell.Simno %d
Updated Synch repo Arfcn %3d Simno:%d
*** ERROR : 'nSynchGetEntryByArfcn()' function returns NULL
l1c_swap_on_new_cell FROM:Arfcn(%d) Simno(%d) TO:Arfcn(%d) Simno(%d) Frame{%i}
l1c_idle_req_processing_sim ->%d
l1c_abort_pccch_and_restart_idle_task(%d)
Reselection [%d->%d]
PBCCH deact
Same Cell
l1c_stop_si_reading {%i}
is_page_params_valid[0] %d is_page_params_valid[1] %d index %d
Restart periodic task for primary SIM
periodic task restart issue CHECK! %d
l1c_stop_current_activity {%i}
Data ongoing Inc FB/SB interval
l1c_find_sb(%d) {%i}
SCELL Present
Toggle job found updated offset to %d
Frame offset %d gap_mfrm_offset %d
FB/SB sync already in queue
Synch Already present (%d) {%i}
SCELL Not present, FB/SB scheduled parallely %d
frame_offs %d l1c_51fn_after_toggle %d
Sync already happening
Add sync at offset %d l1f_cur_job_len %d
SCELL Not present
SCELL Not present: l1c_nsynch_cell.arfcn %d
l1c_find_sb_reject (requestreponse=%d) Insert l1x_dsl1rc_resource_request ofs(%d)
skip Initial FB/SB due to IRAT
l1c_find_sb_grant(requestreponse=%d) ofs(%d) nfrm(%d)
l1c_find_sb_grant(requestreponse=%d)
l1c_find_sb_reject (requestreponse=%d) Insert l1x_dsl1rc_resource_request ofs(%d)
l1c_find_sb_for_blind_ho(%d) {%i}
Adding Tcell into MMA list during blind HO (%d)
Ext Pg already in queue {%i}
l1c_read_ext_paging {%i}
l1c_job51_ext_pch_seq SKIP - l1c_specific_pag_mfrm (%d) tdma_fn(%d) pg_blk_tdma_fn(%d) l1x_toggle_pending(%d)
l1c_read_sec_ext_paging {%i}
DRX: EXT-PCH2 Secondary PCH Delayed: %d
EXT PCH2: scell_abs_fn %d frm_offs %d pch_abs_fn %d tdma_fn %d
l1c_job51_ext_pch2_seq SKIP - l1c_specific_pag_mfrm (%d) tdma_fn(%d) pg_blk_tdma_fn(%d) l1x_toggle_pending(%d)
l1c_check_nbcch_pg_conflict: Page_fn_204=%d ,SI3_fn_204=%d
l1c_check_nbcch_pg_conflict: SI requested:0x%x
PG conflict with SI 3
PG conflict with SI 4 (%x)
PG conflict with SI 78
PG conflict with SI 13
PG conflict with SI 13Ext
NO SI's conflict with PCH1
Sec Scell Asn Fn=%d ,ncell_abs_fn=%d ncell_sec_scell_fn_offset %d
l1c_check_nbcch_pg_conflict: Page_fn_204=%d ,SI3_fn_204=%d SScell fn %d
l1c_check_nbcch_sec_pg_conflict: SI requested:0x%x
PG conflict with SI 3
PG conflict with SI 4 (%x)
PG conflict with SI 78
PG conflict with SI 13
PG conflict with SI 13Ext
NO SI's conflict with PCH2
l1c_ncell_si_already_scheduled: Read NCell Arfcn:%d
l1c_bcch_ongoing_arfcn %d Active arfcn %d sim %d
Already BCCH ongoing on same ARFCN
cell(%d) to %d fo %d bsic %d
[GL1 Error] ERROR WRONG BCCH TYPE (%d)
NORMAL BCCH needed
EXTENDED BCCH needed
Old BCCH type %d not matching bcch_type %d
l1x_bcch_ncell_info.sync_info_required(%d)
Primary scell CONFLICT CHECK
Secondary scell CONFLICT CHECK
BPLMN NBCCH CONFLICT CHECK with PCH1 & PCH2
BPLMN NBCCH CONFLICT CHECK : TRUE
BPLMN NBCCH CONFLICT CHECK : FALSE SIM1(%d) SIM2(%d)
l1c_read_ncell_si_cont: Read NCell Arfcn:%d
*** ERROR wrong NBCCH req
cell(%d) to %d fo %d bsic %d
l1x_bcch_ncell_info.sync_info_required(%d)
[GL1 Error] ERROR WRONG BCCH TYPE (%d)
Primary Paging Parameters: ag_blks:%d, pa_mfrm:%d, ccch_grp:%d, page_group:%d, page_block_index:%d
Secondary Paging Parameters: ag_blks:%d, pa_mfrm:%d, ccch_grp:%d, page_group:%d, page_block_index:%d
schedule NBCCH 1 frm before
l1c_bcch_type %d
toggle_fn %d toggle_offset_active_passive %d l1c_51fn_after_toggle %d
Parallel l1c_read_ncell_si_cont: Read NCell Arfcn:%d
*** ERROR wrong NBCCH req
cell(%d) to %d fo %d bsic %d
[GL1 Error] l1c_si_num_sch (%d) l1c_si_schedule.A[%d].bcch_type (%d)
Parallel Ncell: Paging Parameters: ag_blks:%d, pa_mfrm:%d, ccch_grp:%d, page_group:%d, page_block_index:%d
schedule NBCCH 1 frm before for Parallel Ncell
Multiple BCCH read requested in PTM [%d] %d
Multiple BCCH read requested in PTM [%d] %d
schedule NBCCH 1 frm before
si_abs_fn: %d qb_offset_bch_start: %d
l1c_read_si_in_ptm: Read Arfcn:%d
BCCH read cannot be done now %d
BCCH on sim %d not allowed as BCCH already happening on %d
l1c_read_scell_si_cont {%i}
*** ERROR bcch_read_reason(%d) for SCELL(%d)
l1x_bcch_ncell_info.sync_info_required(%d)
l1c_si_num_sch %d bcch_type %d bs_ag_blks_res %d
l1c_start_idle_mode(%d) {ARFCN: %d FN %i-> ARFCN: %d FN: %i}
PCCCH_TO_CCCH current scell(%d)->new scell(%d)
RESEL :l1_new_scell.arfcn %d l1_new_scell.Simno %d
*** ERROR : 'nSynchGetEntryByArfcn()' function returns NULL
CELL_SWAP : l1_new_scell.arfcn %d l1_new_scell.Simno %d
*** ERROR : 'nSynchGetEntryByArfcn()' function returns NULL
SWAP_SIM2_TO_SIM1 l1_new_scell.Simno %d
SWAP_SIM1_TO_SIM2 l1_new_scell.Simno %d
l1c_start_idle_mode_from_pbcch {%i->%i}
l1c_start_pg_reorg {%i}
l1c_update_ba_list(mode :%d) {%i}
Not yet camp on a cell
l1c_serve_cb
l1c_start_periodic_tasks(%d) {%i}
l1c_skip_cbch StopReq %d
CBCH prio changed
CBCH2 prio changed
Wrong Processing Sim: %d
CBCH slot not matching Byte Pos %d, bit Pos %d
Next CBCH: After %d ms
l1c_start_cbch_drx
Configuring DRX mode for Inactive 3G BPLMN scan
MPH_BPLMN_SYNC_IND %d %d
BPLMN Stopped: Avoid SYNC_IND
ERR: Wrong SimNo
ERR: Wrong SimNo
BPLMN Stopped: Avoid SYNC_IND
MPH_SYNC_IND Arfcn %d Status %d snr %d
Dummy MPH_SYNC_IND for fastSync %d %d
Data ongoing skip FB/SB here
Full Idle Static: skip FB/SB here
UMTS State:%d
IRAT SCAN REQ in Queue. Restrict FB/SB
FB_SB going on for BCCH read ARFCN
l1c_schedule_bplmnsearch
l1c_read_ncell_si_cont_parallel_bplmnsearch: invalid Bplmn ncell
l1c_read_ncell_si_cont_parallel_bplmnsearch: NO Bplmn ncell SI to read
BPLMN ncell arfcn not there in nCellSynchRep table
Ongoing BPLMN FB/SB search ARFCN(%d) cleared
IDLE mode restart on new primary Scell %d
L1F RACH REQ restart on secondary Scell SIM %d
GL1_Pause_Duration %d otherclient_RequestReason is %d
[2G DVFS Debug] In TRANSFER, DVFS Skip : currentState %d
RESUME RSSI SCAN : IS_cellsearch_PAUSE = FALSE
DSL1RC RESUME in DRX
RESUME RSSI SCAN : IS_cellsearch_PAUSE = FALSE
DO NOTHING FOR DSL1RC RESUME
PAUSE already in queue
PAUSE TRANSFER STATE: %d
PAUSE RSSI SCAN : IS_cellsearch_PAUSE = TRUE
PAUSE Done will be sent aft %d Frames
Skip sending pause_done as supend procedure ongoing
PAUSE in WAIT State: FrmOff: %d
PAUSE Non DRX
PAUSE RSSI SCAN : IS_cellsearch_PAUSE = TRUE
PAUSE DONE : G2T||G2U Irat measurement going on
PAUSE RSSI SCAN : IS_cellsearch_PAUSE = TRUE
PAUSE RSSI SCAN : release already scheduled. Send PauseDone after frmOffset(%d)
PAUSE DRX %d
PAUSE in L1C_SINGLE_BLOCK_WAIT frmOffset %d
Default case PAUSE frmOffset %d
[2G DVFS Debug] In TRANSFER, DVFS Skip : currentState %d
PAUSE already in queue
PAUSE TRANSFER STATE frmOffset %d
PAUSE TRANSFER WAIT: %d
PAUSE RSSI SCAN : IS_cellsearch_PAUSE = TRUE
Skip sending pause_done as supend procedure ongoing
PAUSE in WAIT State: FrmOff: %d
PAUSE Non DRX
PAUSE RSSI SCAN : IS_cellsearch_PAUSE = TRUE
PAUSE DONE : G2T||G2U Irat measurement going on
PAUSE RSSI SCAN : IS_cellsearch_PAUSE = TRUE
PAUSE DRX %d
[2G DVFS Debug] In TRANSFER, DVFS Skip : currentState %d
SKIP AUTO_PAUSE
l1c_l1fSleepWakeup() sleep_wakeup=%d
Default_INIT_flag == TRUE : POWER ON
l1c_rfcal_running == TRUE : CAL MODE
[2G DVFS] Wrong message num
GL1_DSL1RC: previous frame lost %d
Too Early to pause =%d
StartEarlyPauseTime timeduration=%d, currentTime=%d currentState %d Frames to Pause =%d
autopause_remaining_frames %d
IsPsPsEnabled = %d resume_ready_count = %d
[##DCXO_Recovery] Arfcn: %d DSDS Cause = %d isRepeatBCHReqEnabled %d simNum %d
Requesting SIM ID wrong. Check!
l1c_check_nbcch_pg_conflict: Page_fn_204=%d ,SI3_fn_204=%d
l1c_check_nbcch_pg_conflict: SI requested:0x%x
PG conflict with SI 3
PG conflict with SI 4 (%x)
NO SI's conflict with PCH1
Sec Scell Asn Fn=%d ,ncell_abs_fn=%d ncell_sec_scell_fn_offset %d
l1c_check_nbcch_pg_conflict: Page_fn_204=%d ,SI3_fn_204=%d SScell fn %d
l1c_check_nbcch_sec_pg_conflict: SI requested:0x%x
PG conflict with SI 3
PG conflict with SI 4 (%x)
NO SI's conflict with PCH2
Set l1c_rachPrepStatus %d
l1c_set_bsic_acq_target: starting sync on ARFCN %d when acquiring sync for ARFCN %d
L1cAbortTransferAndRestartIdleTask(%d)
