This PBD can't be run in ENDC mode
RrcNrPrcdSaCellSel : m_CurService(%d) m_bRreFailKeepSvc(%d)
%s
[NRCELL] m_ConfiguredStatus 0x%x
[NRCELL] Wait for ModemStopCnf
[NRCELL] ConnRel with redirection
%s
%s
%s
%s
[NRCELL] Freq Scan result:%d bBandSearchFlag: %d FreqScanState:%d
[NRCELL] NONE_SCAN is invalid value, handl it like FAILURE case
[NRCELL] UntilSsbFrequency %d NumFreq %d
[RRC][NRCELL] NumFreq %d
[RRC][NRCELL] NumFreq %d
[NRCELL] UntilSsbFrequency %d
[NRCELL] PbdState is PBD_STATE_ABORTING
[RRC][NRCELL] CELL_ACQ_REQ_Hdlr Band:%d Arfcn:%d CellID:%d RSRP:%d RSRQ:%d
[RRC][NRCELL] CELL_ACQ_REQ_Hdlr Band:%d Arfcn:%d CellID:%d RSRP:%d RSRQ:%d
%s
[NRCELL] RRC_RRM_BCH_CONFIG_CNF result:%d
[NRCELL]-->RRC_SEND_EXTMSG(RRM_RRC_CELL_STATUS_REQ)
[NRCELL] RRC_RRC_SIB1_IND
[NRCELL] Nas Selected Plmn info is missing...
[RRC][NRCELL] RRC_RRC_SIB1_IND CellSelection Result :%d
[RRC][NRCELL] RRC_RRC_SIB1_IND CellSelection Result :%d
[NRCELL] RRC_TIMER_NR_TSIB1_EXPIRY_IND PBD state:%d
[NRCELL] RRC_RRM_BCH_RELEASE_CNF result:%d m_ConfiguredStatus :%d
[RRC][NRCELL] MCC Search Abort CurProcedure
[RRC][NRCELL] MCC Search Abort CurProcedure
[RRC][NRCELL] RRC_RRM_CELL_STATUS_CNF result:%d
[RRC][NRCELL] RRC_RRM_CELL_STATUS_CNF result:%d
[NRCELL] RRC_RRM_CELL_STATUS_CNF CellSelection Result :%d
[RRC][NRCELL] RRC_RRM_CELL_CONFIG_CNF result:%d CellStatus:%d PlmnListSearch:%d
[RRC][NRCELL] RRC_RRM_CELL_CONFIG_CNF result:%d CellStatus:%d PlmnListSearch:%d
[NRCELL] Band %d, Arfcn %d, PhysCellId %d
[NRCELL] Need to check why cell selection failed !!!
[NRCELL] PBD_STATE_ABORTING : no action
[NRCELL] SERVINGCELL_CONFIG_COMMON_SIB is included in new received SIB1, L2 Config is needed
[NRCELL] Don't need to send L2/PHY configuration. Just send result msg to MM
%s
[BPLMN] RRM RAT state : %d
[NRCELL] PBD_STATE_RUNNING : abnormal case
[NRCELL] PbdState is PBD_STATE_ABORTING
[NRCELL] There is no SIB1 for SCell. It is abnormal case. Need to check
%s
[NRCELL]Frequency list has been completed so do not send message
[NRCELL]-->RRC_SEND_EXTMSG(RRM_RRC_FREQ_SCAN_REQ)
%s
[NRCELL]Cell selection list has been completed so do not send message
[NRCELL]-->RRC_SEND_EXTMSG(RRM_RRC_CELL_CONFIG_REQ) %d
[NRCELL] RrcSteadyState %d, SuspendConfigPresent %d
%s
[NRCELL] BandSize:%d
%s
[NRCELL] FixedArfcn Search Rule m_SearchMode:%d, m_FreqType:%d, m_SortType:%d, m_FilterType:%d
[RRC][NRCELL] case : REDIRECTED
[RRC][NRCELL] case : REDIRECTED
[RRC][NRCELL] case : IRAT_REDIRECT
[RRC][NRCELL] case : IRAT_REDIRECT
[RRC][NRCELL] case : IRAT_RESEL
[RRC][NRCELL] case : IRAT_RESEL
[RRC][NRCELL] case : PLMN_SEARCH (stored search)
[RRC][NRCELL] case : PLMN_SEARCH (stored search)
[RRC][NRCELL] case : PLMN_SEARCH (Saved Search)
[RRC][NRCELL] case : PLMN_SEARCH (Saved Search)
[RRC][NRCELL] case : PLMN_SEARCH (full search)
[RRC][NRCELL] case : PLMN_SEARCH (full search)
[NRCELL] case : MCC(stored & full search)
[RRC][NRCELL] case : PLMN_LIST
[RRC][NRCELL] case : PLMN_LIST
[RRC][NRCELL] case : CONN_REL
[RRC][NRCELL] case : CONN_REL
[RRC][NRCELL] case : CONN_FAIL or ACC_FAIL
[RRC][NRCELL] case : CONN_FAIL or ACC_FAIL
[RRC][NRCELL] case : IDLE_OOS
[RRC][NRCELL] case : IDLE_OOS
[RRC][NRCELL] case : REESTBLISH %d
[RRC][NRCELL] case : REESTBLISH %d
[NRCELL] Please check Cell selection cause
[NRCELL] Search Rule m_SearchMode:%d, m_FreqType:%d, m_SortType:%d, m_FilterType:%d, m_FreqSrchOrder:%d, m_BandSearchType:%d, m_BandBlockMode:%d
[NRCELL] Search List m_SearchMode:%d, ListSize:%d, BlockSize:%d
[NRCELL] m_RetryCount %d
[NRCELL] ProcessNrCellSelStart RrcState %d StartCause %d IsRedirection %d RrmState %d
[NRCELL] There is no Freqlist and FreqBlock to search
[NRCELL] ProcessCellSelFinish Cause:%d RetryCount:%d ConfiguredStatus:%d
[BPLMN] RRM RAT state : %d
[NRCELL] ProcessCellSelFinishWithAbort Cause:%d FailCause:%d
[BPLMN] RRM RAT state : %d
[NRCELL] No message to send. terminate current procedure
[NRCELL] BestCellFromMeasuredList Band[%d] Arfcn[%d] Pcid [%d] Scs[%d] Rsrp[%d]
[NRCELL] ScannedFreqList Band[%d] Arfcn[%d] Scs[%d] MaxValue[%d]
[NRCELL] Release AsSig before starting full scan
[NRRRC] (registry update) rCnt %d -> MAX_HYPO_CNT : %d
%s
%s
NeighbourFreqList - DbSib4 valid
NeighbourFreqList - Call CellSel again after REEST, Use saved info
