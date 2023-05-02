RRC_MM_PLMN_LIST_REQ can't be handled in this state (ACC or CONN)
RRC_MM_PLMN_LIST_REQ (N2N) can't be handled in RRM Suspended State
RRC_MM_PLMN_LIST_REQ: SIB1 | OSI flag - Trigger Defer
RrcNrPrcdNrBplmn::DecideDeferHdlr
Message ID : ABORT_REQ
CurState Hold -> Resume
[BPLMN] already stopping
[BPLMN] already suspending
[BPLMN] RRM RAT state : %d
[NRBPLMN] BPLMN START : type %d
[NRBPLMN]PlmnReqForOldList - continue
[NRBPLMN] There is no Freqlist and FreqBlock to search
[NRBPLMN] NR_IRAT_TYPE_L2N : Block Service Registration
[NRBPLMN] set NrOpMode = NRRRCDB_NROPMODE_NRSA
[NRDSDS] MS Domain info update to SA
[BPLMN] RRM RAT state : %d
[BPLMN] RRM RAT state : %d
[NRBPLMN] Waiting for RRC_RRM_BPLMN_AVAILABLE_IND
[NRBPLMN] BPLMN list search start
[NRBPLMN] Result %d, FreqScanState %d UntilFreq %d NumFreq %d, m_bIsAvailable %d
[NRBPLMN] NONE_SCAN is invalid value, handle it like FAILURE case
[NRBPLMN] Freq scan stop, waiting for BPLMN_HOLD_IND
[NRBPLMN] CELL_ACQ_REQ_Hdlr Band:%d Arfcn:%d CellID:%d RSRP:%d RSRQ:%d SINR:%d
[NRBPLMN] BCH_CONFIG: FAILURE
[NRBPLMN]-->RRC_SEND_EXTMSG(RRM_RRC_CELL_STATUS_REQ)
[NRBPLMN] BCH_CONFIG: SUCCESS - waiting for SIB1_IND %d
[NRBPLMN] RRC_RRC_SIB1_IND
[NRBPLMN][BLIND] Camp ON Cell
[NRBPLMN][BLIND] Nas Selected Plmn info is missing...
[NRBPLMN] selected NR band is %d
[NRBPLMN] TargetCell SetToBackgroundCell
[NRBPLMN] No NR band was selected
[NRBPLMN] RRC_RRM_CELL_STATUS_CNF result:%d
[NRBPLMN] RRC_RRM_CELL_STATUS_CNF CellSelection cause: %d
[NRBPLMN] RRC_RRM_CELL_CONFIG_CNF Result %s Hold %d m_bIsAvailable %d
[NRBPLMN] CELL_CONFIG : hold, waiting for BPLMN_HOLD_IND
[BPLMN] RRM RAT state : %d
[NRBPLMN] waiting for RRC_MMC_BPLMN_SRCH_START_IND
[NRBPLMN] Just wait for the end
[NRBPLMN] waiting for RRC_RRM_BPLMN_AVAILABLE_IND
[BPLMN] RRM RAT state : %d
[BPLMN] AbtOptHandler_CheckWaitStartCnf (%d)
[NRCELL] SearchRule SearchMode:%d FreqType:%d BandSearchType:%d BandBlockMode:%d
[NRBPLMN] SearchList ListSize:%d, BlockSize:%d
[NETSCAN] BandSize:%d
[NRBPLMN] BandSize:%d
[NRBPLMN] CheckRevertSearchTarget - m_bSendFreqScan %d m_bSendCellConfig %d NeedRCellConfig %d
[NRBPLMN] Already reverted with HoldInd %d
[NRBPLMN] curTime %d BchConfigTime %d
[NRBPLMN] NotRetry
[NRBPLMN][FromLTE] CheckStopCond Status %d Arfcn %d Pcid %d Rsrp %d
[BPLMN] RRM RAT state : %d
%s
[NRBPLMN] CellConfigFreqList has been completed so do not send message
[NRBPLMN] -->RRC_SEND_EXTMSG(RRM_RRC_CELL_CONFIG_REQ)
%s
[NRBPLMN] Frequency list has been completed so do not send message
[NRBPLMN] -->RRC_SEND_EXTMSG(RRM_RRC_FREQ_SCAN_REQ)
[NRBPLMN] PlmnReqForOldList - NR_T_BPLMN_DB is started
[NRBPLMN] PlmnReqForOldList - NR_T_BPLMN_DB is started
[NRBPLMN] AddServingCellPlmnInfo
PLMN info %x%x%x %x%x%x
[NRBPLMN] AddServingCellPlmnInfo : ServingCell is nullptr
