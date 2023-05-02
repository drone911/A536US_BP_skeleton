[NR_CHANNEL] L1C_L1C_BCHCTRLR_BWP_CHANGE_DONE_IND():: demod_cc(%d), scell_idx(%d), dl_bwp_id(%d), ul_bwp_id(%d)
##[NR_CHANNEL] L2N PBCPBCH_DECODE_CNF
##[NR_CHANNEL] L2N PBCPBCH_DECODE_CNF:: sfn(%d), frameBoundaryOffset(%d)
##[NR_CHANNEL] Neighbor PBCH_DECODE_CNF
##[NR_CHANNEL] Send L1C_L1C_BCHCTRLR_PBCH_DECODE_CNF to RRMINTERFACECTRLR
##[NR_CHANNEL] abnormal srcRat %d
##[NR_CHANNEL] Send L1C_L1C_BCHCTRLR_PBCH_DECODE_CNF to RRMINTERFACECTRLR
##[NR_CHANNEL] SendPhyChangeInfoCnf(%d)
##[NR_CHANNEL] SendPhyConfigCnf:: result(%d), ctrlr_state(%d), report_rf_ul_dc(%d)
[L1C] SendOhcRestrictionConfigCnf Rat(%d) Level(%d) Result(%d)
[L1C] SendOhcRestrictionReleaseCnf Rat(%d) Level(%d) Result(%d)
##[NR_CHANNEL] Send_L1C_L1C_BCHCTRLR_SERVING_CELL_CHANGE_CNF:: ctrlr_state(%d), result(%d)
##{NR_BCH] HAL->BCHCTRLR@NrCellTimeChangeCnfCb ctrlr_state(%d)
##[NR_CHANNEL] SIB1:: TableIdx is not found in FR1
##[NR_CHANNEL] SIB1:: TableIdx is not found in FR2
##[NR_CHANNEL] SIB1:: SsbStartFreq(%d), Sib1StartFreq(%d), Sib1Center(%d, %d), Sib1_Bw4/Scs4(0x%x), Sib1_NumRb(%d)
##[NR_CHANNEL] ServCell Info Update -ARFCN(%d) CELLID(%d) SSBIDX(%d) TimingOffsetForIndex(0) (%d)
[NR_CHANNEL] SendBplmnRecoveryDoneInd()
[NR_CHANNEL] SendBplmnRecoveryStartInd()
##[NR_CHANNEL] Send CDRX_CONFIG_IND: DrxConfig.Choice(%d), scell_idx(%d), fr(%d), num_of_scell(%d), bwp_scs(%d)
##[NR_CHANNEL] Send CELL_TIME_RESTORE_REQ, rx_path(%d)
##[NR_CHANNEL] Send SendPchConfigInd(%d, 0x%x)
##[NR_CHANNEL] Send BCH_CONFIG_IND
##[NR_CHANNEL] SendRestoreCnf:: result(%d), type(%d)
##[NR_CHANNEL] Send BEAMLOCK_IND: Beamlock_Info(%d)
##[NR_CHANNEL] Send SERVING_INFO_UPDATE_IND(%d, %d, %d, 0x%x, %d, %d, %d)
##[NR_CHANNEL][Error:%s] can not find the arfcn(%d)
##[NR_CHANNEL] Send SERVING_INFO_UPDATE_IND(%d, 0x%x, %d, %d, %d, %d, %d)
##[NR_CHANNEL] Send_L1C_L1C_MEASCTRLR_MEAS_STOP_REQ (%d, %d)
##[NR_CHANNEL] Send_L1C_L1C_MEASCTRLR_MEAS_CONFIG_IND()
##[NR_CHANNEL] SendSccPathCfgReq req_type[SERV/SRCH/MEAS/PBCH/MODI](0x%x) num_of_req_cell(%d), num_of_rel_cell(%d), CfgPurpose(%d)
##[NR_CHANNEL] Invalid num_of_req/rel_cell (%d, %d)
##[NR_CHANNEL]PATH_CONFIG_REQ(CFG): [%d] serv_cell_info(0x%4x-scell_idx8/scell_buf4), dl_freq_info(%d %d %d), dl_bw(%d), dl_scs4/layer4(0x%x)
##[NR_CHANNEL] PATH_CONFIG_REQ(CFG) Param:: [%d] ul_freq_info(%d %d %d), ul_bw(%d) agc_gain(%d %d)
##[NR_CHANNEL] PATH_CONFIG_REQ(REL) Param:: [%d] cell_info_idx(%d)
##[NR_CHANNEL] SendPathCfgReqForRelInfo:: type(%d) num_of_rel_cell(%d) RelPurpose(%d)
##[NR_CHANNEL] PATH_CONFIG_REQ(REL) Param:: [%d] cell_info_idx(%d)
##[NR_CHANNEL] num_of_cfg_cell in L1C_BCH is 0
##[NR_CHANNEL] SendPathCfgReqForPathCopy(scell_idx(%d), req_dl_freq_info(%d, %d, %d), req_dl_bw(%d), req_dl_layer(%d))
##[NR_CHANNEL] Send_L1C_L1C_DRXCTRLR_SCELL_STATUS_UPDATE_IND(%d, %d)
[L1C] Send_L1C_L1C_SCELL_STATUS_IND Rat(%d), NumRedCc(%d)
[L1C] Send_L1C_L1C_SCELL_STATUS_IND NumActivatedSCell < NumRedCc, Rat(%d), NumRedCc(%d)
[L1C] L1C_L1C_BCHCTRLR_NS_RESTRICTION_START_REQ_Handler Result(%d)
[L1C] L1C_L1C_BCHCTRLR_NS_RESTRICTION_STOP_REQ_Handler Result(%d)
##[NR_CHANNEL] Send L1C_L1C_DRXCTRLR_TX_CAPA_UPD_IND: max_ul_layer(%d)
##[NR_CHANNEL] Send Send_L1C_L1C_DRXCTRLR_TX_ONOFF_REQ: TxOnType - TX_ON_INIT_RACH
##[NR_BCH] UpdateServCellUlScellInfo:: None of updated ul_serv_cell_bitmap
##[NR_BCH] UpdateServCellUlScellInfo:: ul_serv_cell_bitmap(0x%x), ret(%d)
##[NR_CHANNEL] CreateTxDcScList:: rf_ul_freq(%d)
##[NR_CHANNEL] CreateTxDcScList:: pTxDcList[%d] (%d %d %d %d %d %d)
[NR_CHANNEL] CreatePathCfgReqForAddModScell:: num_of_add_scell(%d), num_of_rel_scell(%d)
##[NR_CHANNEL] Invalid num of config/release scell
[NR_CHANNEL] CreatePathCfgReqForAddModScell:: path_rel_array[%d] = %d
[NR_CHANNEL][SortScellByUL] Recv(%d, %d, %d, %d, %d, %d, %d)
[NR_CHANNEL][SortScellByUL] UL base cfg sorting error: add_scell_cnt(%d), num_of_sort_scell(%d)
[NR_CHANNEL][SortScellByUL] Sorted(%d, %d, %d, %d, %d, %d, %d)
[NR_BCH][SortScellByUL] ul_cfg_serv_cell_bitmap(0x%x), recv_add_scell(%d), sort_scell(%d), total_num_of_scell(%d)
[NR_CHANNEL] CreatePathCfgReqForAddModScell:: Wrong serv_cell_info_idx! [%d]
[NR_CHANNEL] CreatePathCfgReqForAddModScell:: cfg_param[%d] dl_info(%d, %d, %d), ul_info(%d, %d), req_scell_idx(0x%4x->layer4/scell8/buf4)
##[NR_CHANNEL] None of SCELL Sys Param is changed.
