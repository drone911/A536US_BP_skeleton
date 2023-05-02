[N :NR,%d] Qmnr::Qmnr
[W :NR,%d] _NEW_ m_pQmNrExtAPI 0x%X
[W :NR,%d] m_pQmNrDbMgr 0x%x
[W :NR,%d] m_pQmNrMsgLogger 0x%x
[W :NR,%d] m_pQmNrTimerMngr 0x%x
[N :NR,%d] Qmnr::~Qmnr
[W :SM,%d] %%#EM pMsgHdlr is null
[W :NR,%d] QmNr: PreProcessMsg result : %d
[N :NR,%d] m_pQmCommonDb = 0x%X, m_pQmNrDbMgr = 0x%X
[D :NR,%d] %%#RB [QM NR] QM_L2HPDCPTX_RB_INFORM_IND_Handler cmd (%d) : SessionId(%d), RbId(%d), bDefaultRb(%d)
[QM|%d,CP] %%#RB [QM NR] QM_L2HPDCPTX_RB_INFORM_IND_Handler cmd (%d) : SessionId(%d), RbId(%d), bDefaultRb(%d)
[W :NR,%d] %%#EM [Check] QM_L2HPDCPTX_RB_INFORM_IND_Handler: Stack NOT Initialized!
[W :NR,%d] [Check] QM_L2HPDCPTX_RB_INFORM_IND_Handler: Do Nothing, Check cmd!
[W :NR,%d] [Check] QM_L2HPDCPTX_RB_INFORM_IND_Handler: No mappedQoS-Flows
[W :NR,%d] %%#EM [Check] QM_L2HPDCPTX_RELEASE_IND_Handler: Stack NOT Initialized!
[D :NR,%d] %%#ST QM_MM_REL_CNF_Handler: Result (%d)
[D :NR,%d] %%#ST QM_MM_STATUS_IND_Handler: Status [%s], ImsCallTriggered (%d)
[W :NR,%d] %%#EM [Check] QM_MM_STATUS_IND_Handler: Stack NOT Initialized!
[N :NR,%d] %%#ST QM_MM_STATUS_IND_Handler: IMS Call Start(%d)/End(%d) for SesId(%d), QmNrState[%s]
[W :NR,%d] %%#EM [Check] --- No IMS Session Set
[W :NR,%d] %%#EM [Check] --- Cannot Trigger SR in Current QmNrState
[W :NR,%d] %%#EM --- Already QM_STATE_ACTIVE
[D :NR,%d] %%#EM [Check] --- SR is Currently On-Going for IMS Session
[D :NR,%d] %%#DP --- ActualDataPended(%d) for SesId(%d)
[D :NR,%d] %%#ST --- Forced Clear PendingDataSession
[W :NR,%d] %%#EM [Check] --- Invalid MM RegStatus received
[D :NR,%d] %%#ST QM_MM_EST_CNF_Handler: TrId(%d), ReqUlDataStatus(0x%4X), PduReactResult(0x%4X), NumOfRejCause(%d)
[D :NR,%d] %%#ST QM_MM_EST_IND_Handler: ReqUlDataStatus(0x%4X), PduReactResult(0x%4X), NumOfRejCause(%d)
[D :NR,%d] %%#ST QM_MM_EST_REJ_Handler: Sid(%u) / Cause [%s](%d)
[QM|%d,CP] %%#ST QM_MM_EST_REJ_Handler: Sid(%u) / Cause [%s](%d)
[N :NR,%d] %%#DP [QM NR] QM_MM_IRAT_CHANGE_IND_Handler
[N :NR,%d] Target Rat = %d, Type = %d, Status = %d, Result = %d
[W :NR,%d] %%#EM [Check] QM_MM_IRAT_CHANGE_IND_Handler: Stack NOT Initialized!
[N :NR,%d] Ims Session Id = %d
[N :NR,%d] Flush IMS pending queue
[N :NR,%d] Flush IMS Priority queue
[N :NR,%d] Flush IMS Normal queue
[N :NR,%d] Revert internet pending queue
[N :NR,%d] Revert internet priority queue Session ID = %d
[N :NR,%d] Revert internet normal queue Session ID = %d
[N :NR,%d] %%#SM [QM NR] QM_SMT_INFORM_IND_Handler : CmdType %s
[W :NR,%d] %%#EM [Check] QM_SMT_INFORM_IND_Handler: Stack NOT Initialized!
[N :NR,%d] %%#SM QM_SMT_INFORMATION_IND_Handler //rMsgBody.pCnCommonDb == nullptr
[N :NR,%d] %%#SM No.Of Session %d
[N :NR,%d] %%#SM Mm Rej cause=> %d
[D :NR,%d] %%#EM [Check] QM_QM_T_BIDIR_CHECK_EXPIRY_IND_Handler: No Valid Session, return!
[D :NR,%d] %%#EM [Check] QM_QM_T_NR_CONN_RETRY_EXPIRY_IND_Handler: No Valid Session, return!
[N :NR,%d] %%#EM QM_QM_T_NR_CONN_RETRY_EXPIRY_IND_Handler: pTimerContext is nullptr for Key (%d)
[N :NR,%d] %%#TE QM_QM_T_NR_CONN_RETRY_EXPIRY_IND_Handler: Reach MaxRepeatCnt
[D :NR,%d] %%#SM QM_QM_T_QFI_SETUP_EXPIRY_IND_Handler: Expired for SesId(%d)
[D :NR,%d] %%#SM QM_QM_T_WDT_EXPIRY_IND_Handler: RB_WDT Expired for SesId(%d)
[W :NR,%d] %%#ST [Check] QM_QM_T_WDT_EXPIRY_IND_Handler: RB Assigned Already, Do Nothing!
[D :NR,%d] %%#SM HandleSrErr: No Action Triggered, so Allow SR Re-triggering
[N :NR,%d] QM_PM_INFORM_IND_Handler
[D :NR,%d] Cid (%d) SessionId (%d) PdpType (%d)
[W :NR,%d] QM_PM_INFORM_IND_Handler: Alloc Fail
[N :NR,%d] Send Data=====================
[W :NR,%d] %%#EM CreateQmnr: Instance is nullptr
[D :NR,%d] %%#DP CalAllowableDataCnt: L2 DataVolume (%u) Not Changed, L2NotSchedPacketCnt(%u), L2SentPacketCnt(%u)
[D :NR,%d] %%#DP CalAllowableDataCnt: gNrBiDirectionalTpOn(%u), gNrDlNasuTp(%u), NrPhyUlTp(%u), gInstantaneousUlPaddingTp(%u), TH(%u), TH_Temp(%d)
[D :NR,%d] %%#DP CalAllowableDataCnt: TH(%d) - BO(%d) --> Cnt(%d)
[D :NR,%d] %%#DP CalAllowableDataCnt: TH(%d) < BO(%d) --> Cnt(0)
[W :NR,%d] [Check] ProcessQueue: Invalid m_pQmNrDbMgr(0x%X)
[D :NR,%d] ProcessQueue: L2NotSchedPacketCnt(%u), m_L2SentPacketCnt(%u)
[D :NR,%d] %%#DP ProcessQueue: SesId[%d] NormalQ: AllowablePktCnt(%u), RemainedCnt(%u), Actual DeqCnt(%u)
[D :NR,%d] [Check] ProcessQueue: AllowablePktCnt < DeqCnt, Check Required!
[D :NR,%d] ProcessQueue: BitRemainedSes(0x%X), BitActiveRemainedSes(0x%X)
[W :NR,%d] %%#DP [Check] QM_SendDataToL2TX: IsFakeTest (%d) / DataBlock (%d) / Stack (%d)
[W :NR,%d] %%#EM [Check] QmNrExternalAPI is nullptr for Stack (%u)
[W :NR,%d] %%#EM [Check] CnCommonDb = nullptr
[W :NR,%d] %%#EM [Check] QmCommonDb = nullptr
[W :NR,%d] %%#EM [Check] pQmDb = nullptr
[W :NR,%d] %%#EM [Check] NrSmSessionDb = nullptr
[W :NR,%d] %%#EM [Check] QM_SendDataToL2TX: return -1 / No Session for uiCID(%d), IpVer(%d)
[W :NR,%d] %%#EM [Check] QM_SendDataToL2TX: return -1 / pNrDb == nullptr, uiCID=%d
[D :NR,%d] %%#EM [Check] QM_SendDataToL2TX: return -1 / QmState [QM_STATE_NONE]
[D :NR,%d] %%#EM [Check] QM_SendDataToL2TX: return -1 / QmState [QM_STATE_FLUSH_NEEDED]
[D :NR,%d] %%#EM [Check] QM_SendDataToL2TX: return -1000 / QmState [QM_STATE_FLUSH_NEEDED], IMS or EMC PDU
[D :NR,%d] %%#EM [Check] QM_SendDataToL2TX: return -1 /NoOfData == 0
[DumpHex] QmNrDataDump:
[W :NR,%d] %%#DP [Check] QM_SendDataToL2TX: return -1 / invalid QFI(%d) for uiCID(%d), SesId(%d)
[W :NR,%d] %%#DP [Check] QM_SendDataToL2TX: return -1 / Invalidated QFI(%u) for uiCID(%d), SesId(%d)
[W :NR,%d] %%#DP [Check] QM_SendDataToL2TX: return -1000: Enqueue Fail
[D :NR,%d] %%#DP QM_SendDataToL2TX: return 0 / MM_HOLD_NEEDED at QmState[%s]
[D :NR,%d] %%#DP QM_BlockSendData SessionId (%d)/ Block?(%d) / currentStack(%d)
[W :NR,%d] %%#EM QmnrDbMngr::GetInstance()=> nullptr
[W :NR,%d] %%#ST %s is nullptr, so return %s
[W :NR,%d] %%#ST %s is nullptr, so return %s
[W :NR,%d] %%#ST %s is nullptr, so return %s
[W :NR,%d] %%#ST %s is nullptr, so return %s
[D :NR,%d] %%#DP Ims SessionId (%d)
[W :NR,%d] %%#DP SessionId = 0, No Action
[W :NR,%d] %%#EM QmCommonDb = nullptr
[W :NR,%d] %%#EM pQmDb = nullptr
