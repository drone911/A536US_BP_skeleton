##[NR_RLSYNC] %s
##[NR_RLSYNC] %s
##[NR_RLSYNC] L1C_L1C_RLSYNCCTRLR_RLM_START_REQ_Handler()::Mode=%d
##[NR_RLSYNC][Keep] OnGoing=%d, PrevActiveBwp=%d.
##[NR_RLSYNC] RLM_CONFIG: N310=%d and N311=%d.
##[NR_RLSYNC] RLM_CONFIG: N310=%d and N311=%d from SIB1.
##[NR_RLSYNC] RLM_CONFIG: RlfTimersAndConstants is NULL. Set max for N310=%d and N311=%d.
##[NR_RLSYNC][ERR] Why ActiveBwp==0xFF?
##[NR_RLSYNC] By RlfTimersAndConstants, Validate RLM for iBwp=%d, iRlmRs=%d, iRlm=%d, Purpose=%d, RsType=%d, iRs=%d
##[NR_RLSYNC] By SIB1 or TCI state, Validate RLM for iBwp=%d, iRlmRs=%d, iRlm=%d, Purpose=%d, RsType=%d, iRs=%d
##[NR_RLSYNC] RLM cannot be configured: CurrActiveBwp(0x%x), TciExisting(%d, %d, %d, %d, %d).
##[NR_RLSYNC][FromSIB1] IsUpdated=%d, IsRlfConstGiven=%d, N310=%d and N311=%d.
##[NR_RLSYNC] IsValid is Set %d icg %d iBwp %d iRlmRs %d
##[NR_RLSYNC] RLM_START only for SSB::iCg=%d, Ongoing=%d, RlmRsBitMap=0x%04x, iSsbPeriod=%d
##[NR_RLSYNC][ERR] Can't start RLM.
##[NR_RLSYNC] RLM_START::No RLM is configured...
##[NR_RLSYNC] ->> send L1C_L1C_RLSYNCCTRLR_RLM_START_CNF...
##[NR_RLSYNC] %s, Description Alert
##[NR_RLSYNC] %s, Description Alert
##[NR_RLSYNC] %s, Description Alert
##[NR_RLSYNC] Skip RLM Check Ind as Sleep State(%d))
##[NR_RLSYNC][ERR] Can't start Idle RLM Check Ind.
##[NR_RLSYNC] %s, Description Alert
##[NR_RLSYNC] HAL->RLSYNCCTRLR@%s
##[NR_RLSYNC] Why this? Debug this status %d...
##[NR_RLSYNC] SyncStatus=%d, cnt4OutSync=%d, cnt4InSync=%d, Flag(OosSent,NeedOos,NeedInSync,NeedUpdate)=%04d, CurrState=%d
##[NR_RLSYNC] Sending L1C_L1C_RRMINTERFACECTRLR_OUT_OF_SYNC_IND::CgType(Bitmap)=%d
##[NR_RLSYNC] Sending L1C_L1C_RRMINTERFACECTRLR_IN_SYNC_IND::CgType(Bitmap)=%d
##[NR_RLSYNC] HAL->SRCHCTRLR@%s
##[NR_SRCH] ->> send L1C_L1C_RLSYNCCTRLR_RLM_STOP_CNF
##[NR_RLSYNC] HAL->RLSYNCCTRLR@%s
##[NR_RLSYNC] HAL->RLSYNCCTRLR@%s
##[NR_RLSYNC] iMetric(Obsolete,Curr,Raw)=(%d, %d, %d), Metric(Raw,Sum)=(%d, %d), Thresh=%d
##[NR_RLSYNC][NotYet] Sending Idle OOS L1C_L1C_RRMINTERFACECTRLR_OUT_OF_SYNC_IND
##[NR_RLSYNC] %s()
##[NR_RLSYNC] Validate RLM for iBwp=%d, iRlmRs=%d, iRlm=%d, Purpose=%d, RsType=%d, iRs=%d
##[NR_RLSYNC] RLM_CONFIG: FAILURE_DETECTION_RESOURCES_LIST_MASK(0x%x) is not configured: 0x%x
##[NR_RLSYNC] RLM_CONFIG: RADIOLINK_MONITORING_CONFIG_MASK(0x%x) is not configured: 0x%x
##[NR_RLSYNC] RLM_CONFIG: INITIAL_DOWNLINK_BWP_MASK(0x%x) is not configured: 0x%x
##[NR_RLSYNC] Validate RLM for iBwp=%d, iRlmRs=%d, iRlm=%d, Purpose=%d, RsType=%d, iRs=%d
##[NR_RLSYNC] RLM_CONFIG: FAILURE_DETECTION_RESOURCES_LIST_MASK(0x%x) is not configured: 0x%x for iBwp=%d
##[NR_RLSYNC] RLM_CONFIG: RADIOLINK_MONITORING_CONFIG_MASK(0x%x) is not configured: 0x%x for iBwp=%d
##[NR_RLSYNC] RLM_CONFIG: BWP_DOWNLINK_DEDICATED_MASK(0x%x) is not configured: 0x%x for iBwp=%d
##[NR_RLSYNC] RLM_CONFIG: DOWNLINK_BWP_MASK(0x%x) is not configured: 0x%x
##[NR_RLSYNC] RLM_CONFIG: firstActiveDownlinkBwpId= %d
##[NR_RLSYNC] RLM_CONFIG: FIRST_ACTIVE_DOWNLINK_BWP_ID_MASK(0x%x) is not configured: 0x%x
##[NR_RLSYNC] RLM_CONFIG: ScgRlm::N_310=%d, N_311=%d
##[NR_RLSYNC] RLM_CONFIG: SPECLL_CONFIG_DEDICATED_MASK is not configured: 0x%x
##[NR_RLSYNC] RLM_CONFIG: SSB_PERIODICITY_SERVINGCELL_MASK(0x%x) is not configured: 0x%x
##[NR_RLSYNC] RLM_CONFIG: SERVINGCELL_CONFIG_COMMON_MASK(0x%x) is not configured: 0x%x
##[NR_RLSYNC] RLM_CONFIG: RECONFIGWITH_SYNC_MASK(0x%x) is not configured: 0x%x
##[NR_RLSYNC] RLM_CONFIG: iSsbPeriod=%d
##[NR_RLSYNC] %s()
##[NR_RLSYNC] iBwp=%d, TciListMax=%d
##[NR_RLSYNC] iBwp=%d, Existing iTciList=%d
##[NR_RLSYNC] RLM_CONFIG: qclType1.BWP_ID_MASK(0x%x) is not configured: 0x%x for iBwp=%d, iTciList=%d
##[NR_RLSYNC] RLM_CONFIG: qclType1.REFERENCE_SIGNAL_MASK(0x%x) is not configured: 0x%x for iBwp=%d, iTciList=%d
##[NR_RLSYNC] RLM_CONFIG: QCL_TYPE1_MASK(0x%x) is not configured: 0x%x for iBwp=%d, iTciList=%d
##[NR_RLSYNC] RLM_CONFIG: TCI_STATES_LIST_MASK(0x%x) is not configured: 0x%x for iBwp=%d
##[NR_RLSYNC] RLM_CONFIG: PDSCH_CONFIG_MASK(0x%x) is not configured: 0x%x for iBwp=%d
##[NR_RLSYNC] %s
##[NR_RLSYNC] %s
##[NR_RLSYNC] %s (%d)
##[NR_RLSYNC] %s: No ongoing RLM...
##[NR_RLSYNC] %s: No ongoing RLM...
##[NR_RLSYNC][DEBUG] Why is RLM_START_NR_CMD running already? Let's stop it first.
##[NR_RLSYNC][DEBUG] Why is RLM_START_NR_CMD running ? Let's stop and remove it by force.
##[NR_RLSYNC][ERR] Error in stopping RLM_START_NR_CMD in %s...
##[NR_RLSYNC] Stop RLM_START_NR_CMD in %s...
