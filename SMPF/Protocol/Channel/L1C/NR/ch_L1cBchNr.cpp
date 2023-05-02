##[NR_CHANNEL] %s during L1C_SUSPEND
##[NR_CHANNEL] RECV_MSG(EVENTSCHEDINFOCTRLR_EXCEPTION_IND) EventId(%u), ExceptionCause(%u), m_BchDb->on_going_proc(0x%x), cb_param(%d), m_BchDb->ctrlr_state(%d)
##[NR_CHANNEL] BCH RELEASE is already started before DSDS pause
##[NR_CHANNEL] Waiting for BchCfgCb (%d)us
##[NR_CHANNEL] RUNNING_HOLD is received for HIGH_PRIO, so continue to wrap up procedure
##[NR_CHANNEL] Nothing to do for RUNNING_RESUME
##[NR_CHANNEL] RECV_MSG(AS_STATE_IND) state(%d), m_BchDb->ctrlr_state(%d)
##[NR_CHANNEL] RECV_MSG(BCH_CONFIG_REQ) m_BchDb->on_going_proc(0x%x), m_BchDb->ctrlr_state(%d)
##[NR_CHANNEL] OSI min_rf_use_time(%d, %d, %d)
##[NR_CHANNEL] RECV_MSG(SIB_DECODE_STOP_REQ) RoutingInfo[%d], m_BchDb->ctrlr_state(%d), m_BchDb->on_going_proc(0x%x)
##[NR_CHANNEL] RECV_MSG(SERVING_CELL_CHANGE_REQ) num_of_bch_cfg_cell(%d), m_BchDb->ctrlr_state(%d), m_BchDb->on_going_proc(0x%x)
##[NR_CHANNEL] SERVING_CELL_CHANGE_Param#1(cellId(%d), arfcn(%d), band(%d), freq(%d), ssbIndex(%d), scs(%d), timingOffset(%d))
##[NR_CHANNEL] SERVING_CELL_CHANGE_Param#2(period(%d), servcell_recovery(%d), MibInfoIncluded(%d), agc_gain(%d, %d)
##[NR_CHANNEL] SERVING_CELL_CHANGE_Param#2(HFI(%d), SFN(%d)
##[NR_CHANNEL] %s during L1C_SUSPEND
##[NR_CHANNEL] RECV_MSG(CELL_TIME_RESTORE_CNF) m_BchDb->ctrlr_state(%d), m_BchDb->on_going_proc(0x%x), tx_capa(0x%x, nw4ue4)
##[NR_CHANNEL] RECV_MSG(RELEASE_ALL_REQ) modem_state(%d), m_BchDb->ctrlr_state(%d), m_BchDb->on_going_proc(0x%x)
##[NR_CHANNEL] RECV_MSG(ALL_STOP_REQ) m_BchDb->ctrlr_state(%d), m_BchDb->on_going_proc(0x%x)
##[NR_CHANNEL] RECV_MSG(PBCH_DECODE_REQ) m_BchDb->ctrlr_state(%d), m_BchDb->on_going_proc(0x%x)
##[NR_CHANNEL] L2N PBCH decoding triggered after NR cell config
##[NR_CHANNEL] PBCH_DECODE_REQ triggered in connected state : SsbIndex(%d), Band(%d), num_of_bch_cfg_cell(%d)
##[NR_CHANNEL] PBCH_DECODE_REQ:: NrL1BchDb.agcGain[0](%d), NrL1BchDb.agcGain[1](%d)
##[NR_CHANNEL] abnormal srcRat %d
##[NR_CHANNEL] %s during L1C_SUSPEND
##[NR_CHANNEL] RECV_MSG(PHY_CONFIG_REQ) on_going_proc(0x%4x), cell_group_id(%d), sib1_config_4/dsds_resume_4(0x%2x), UeCapa(Band=%d, UL4/BwpSwitch4=0x%4x)
##[NR_CHANNEL] C-Rnti(%d, %d)
##[NR_CHANNEL] XPHY Mode is running
##[NR_CHANNEL] force to set ue capa tx as 1 layer
##[NR_CHANNEL] SetDrBandInfo(%d, %d, %d, %d, %d, %d, %d)
##[NR_CHANNEL] (%d, %d, [%d] %d)
##[NR_CHANNEL] SetDrBandInfo(%d, %d, %d, %d, %d, %d, %d)
##[NR_CHANNEL][WARNING] Invalid msgSrcId : %d
##[NR_CHANNEL] RECV_MSG(RESTORE_REQ) spcell_idx(%d), on_going_proc(0x%4x), type(%d), alloc_freq(%d)
##[NR_CHANNEL][WARNING] Invalid dsds_resume(%d)
##[NR_CHANNEL][WARNING] None of phy config info. exists
##[NR_CHANNEL] Receive : TX_ONOFF_CNF:: result(%d)
##[NR_CHANNEL] %s during L1C_SUSPEND
##[NR_CHANNEL] RECV_MSG(PHY_RELEASE_REQ) on_going_proc(0x%x)
##[NR_CHANNEL] Invalid PHY_RELEASE_REQ without PHY CONFIG proc
##[NR_CHANNEL] %s during L1C_SUSPEND
##[NR_CHANNEL] BWP_CHANGE_REQ is received during SLEEP, Updating only target BWP ID
##[NR_CHANNEL] RECV_MSG(BWP_CHANGE_REQ) scell_idx(%d), bwp_idx(D:%d, U:%d), m_BchDb->ctrlr_state(%d), m_BchDb->on_going_proc(0x%x), modem_state(%d), res(%d)
##[NR_CHANNEL] %s during L1C_SUSPEND
##[NR_CHANNEL] RECV_MSG(BWP_ID_UPD_IND) demod_cc(%d), scell_idx(%d), DL(status = %d, id = %d), UL(status = %d, id = %d)
##[NR_CHANNEL] Ignore BWP_ID_UPD_IND since PAUSE/SLEEP is ongoing(%d)
##[NR_CHANNEL] %s during L1C_SUSPEND
##[NR_CHANNEL] %s: Defer the msg. PHY CONFIG is running.
##[NR_CHANNEL] RECV_MSG(SCELL_STATUS_IND) num_of_scell(%d), m_BchDb->ctrlr_state(%d), m_BchDb->on_going_proc(0x%x)
##[NR_CHANNEL] L1C_L1C_BCHCTRLR_SCELL_STATUS_IND_Handler Discard Overheating Status
##[NR_CHANNEL] ***** [%d] scell_idx(%d), act_deact(%d), ssb_idx(0x%x)
##[NR_CHANNEL] %s during L1C_SUSPEND
##[NR_CHANNEL] RECV_MSG(PATH_CONFIG_CNF) req_type(%d), num_of_cfg_cell(%d), num_of_rel_cell(%d), m_BchDb->on_going_proc(0x%x)
##[NR_CHANNEL] Invalid req_type(%d)
##[NR_CHANNEL] RECV_MSG(OVERHEATING_IND) : Mode(%d), ThermalLevel(%d) Temperature(%d)
[L1C] L1C_L1C_BCHCTRLR_LOW_PWR_MODE_IND_Handler)
[L1C] L1C_L1C_BCHCTRLR_RESTRICTION_CONFIG_REQ_Handler Level(%d)
##[OHC] This is left as TBD
##[OHC] Wrong RAT value(%d)
##[OHC] Wrong L4_NumRedMimo value(%d)
##[OHC] Unexpected message Level value(%d). This message should be processed in RRC
##[OHC] Wrong Level value(%d)
[L1C] L1C_L1C_BCHCTRLR_RESTRICTION_RELEASE_REQ_Handler Level(%d)
##[OHC] This is left as TBD
##[OHC] Unexpected message Level value(%d)
##[OHC] Unexpected message Level value(%d)
##[OHC] Unexpected message Level value(%d)
##[OHC] Wrong Level value(%d)
##[NR_CHANNEL] %s during L1C_SUSPEND
##[NR_CHANNEL] RECV_MSG(SERVING_CELL_RELEASE_REQ) ctrlr_state(%d), on_going_proc(0x%x), total_num_of_scell(%d), rel_cause(%d)
##[NR_CHANNEL] RECV(MEAS_STOP_CNF) on_going_proc(0x%x)
##[NR_BCH] Invalid on_going_proc for MEAS_STOP_CNF
##[NR_CHANNEL] %s during L1C_SUSPEND
##[NR_CHANNEL] L1C_L1C_BCHCTRLR_PHY_CHANGE_INFO_REQ_Handler: rnti(%d, %d), ohc(%d, %d)
##[NR_CHANNEL] No need to send PHY CHANGE INFO IPC
##[NR_CHANNEL] ProcDrxConfirmInd(BCH):: DRX_CONFIRM_IND Ignored 0x%x
##[NR_CHANNEL] ProcDrxConfirmInd(BCH):: type(%d) sleepTime(%d)ms sleepAvailRange(%d)us SibSleepEnableReg(%d)
##[NR_CHANNEL] HAL->BCHCTRLR@%s:: Result(%d)
##[NR_CHANNEL] HAL->BCHCTRLR@%s:: Result(%d)
