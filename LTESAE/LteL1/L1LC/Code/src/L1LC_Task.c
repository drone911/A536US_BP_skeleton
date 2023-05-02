assert condition : Null Message
assert condition : Invalid Message Id
assert condition : Message Sending failed
assert condition : Null Message
assert condition : Invalid Message Id
assert condition : Message Sending failed
assert condition : Null Message
assert condition : Invalid Message Id
assert condition : Message Sending failed
assert condition : Null Message
assert condition : Invalid Message Id
assert condition : Message Sending failed
assert condition : Null Message
assert condition : Invalid Message Id
assert condition : Message Sending failed
assert condition : Null Message
assert condition : Invalid Message Id
Msg %d to DS_MMC_IF
Msg %d to DS_MMC
assert condition : Message sending failed
assert condition : Null Message
assert condition : Invalid Message Id
assert condition : Message Sending Failed
assert condition : Null Message
[FeDV] IsEndc(%d), MCG stack(ST%d), Endc_Stack(ST%d), MCG(%s)
Send NR_AIT_INFO Msg
Warning unexpected msgId(%d)
assert condition : Message Sending Failed
CurrentStackID(%d)@%s
LTE_InitL1LC(use cal data due to PowerON)(HALSC_AfcPdmStored:%d)
[Debug] Is_Drx_Wakeup_ongoing = %d
RESET DsdsDB_[%d].IsSuspend
Event Set [0x%x] [0x%x]
SET DsdsDB_[%d].IsSuspend
Handle event[%s] / gL1lc_CurrEvent [0x%x]
[LTE L1LC DSL1RC] L1LC_CheckRrmStoredMsg :: Proc RRM Result[%d], req_id(%d)
[LTE L1LC] %s(Any Saved Message[%d])
%s()[req_id(%d)]::IsHighPriority(%d)
[LTE L1LC] %s() :: Proc RRM Result[%d], req_id(%d), gCurProc(%d)
[LTE L1LC] %s(Any Saved Message[%d])
%s()[req_id(%d)]::IsHighPriority(%d)
[LTE L1LC] %s() :: Proc HAL Result[%d], req_id(%d), gCurProc(%d)
[LTE L1LC] %s(Any Saved Message[%d])
%s()[req_id(%d)]::IsHighPriority(%d)
[LTE L1LC] %s() :: Proc MMC Result[%d], req_id(%d), gCurProc(%d)
[SADS] Tx| %s(Any Saved L1TxSaveMsg[0x%x] L2TxSaveMsg[0x%x])
[SADS] Tx| %s() :: Proc L1TX Result[%d], req_id(0xx%x), gCurProc(%d)
[SADS] Tx| %s() :: Proc L2TX Result[%d], req_id(0xx%x), gCurProc(%d)
[4G_DSDS] funcName = %s, L1LC No Preempt start[%d]
[4G_DSDS] funcName = %s, L1LC No Preempt end[%d]
assert condition : Error in creating Event group
assert condition
[L1LC] gHALSC_L1tunnelStackId:%d
assert condition : Message Sending Failed
assert condition : Invalid Message Id
[4G DRDS] DRDS was not deactivated correctly!
[LTE L1LC DSL1RC] Hold RRM Message[%d]. Skipping L1LC<-RRM Queue Read...
[SyncMsg]save src: %d, id: %d, count: %d
[SyncMsg]clear src: %d, id: %d, count: %d
%s(Recover:%d,src:%d,msg_id:%d)
[L1LC => L1LC] Send RRM_L1LC_UE_STATE_NTF
[DEBUG] HalSaveMsg = %d
assert condition : Invalid Message Id
assert condition : Message Null
assert condition : Wrong Message Id
assert condition : Message Null
assert condition : Wrong Message Id
%s(SaveMsg(%08x), msg(%08x)).id(%d).Cnt(%u)-[debug]HalSaveMsg(%08x(%d))
%s(msg(%08x), SaveMsg(%08x)).id(%d).Cnt(%u)-[debug]HalSaveMsg(%08x(%d))
Early return - Cnt(%d)@Exception(pMsg==NULL):%s()
L1LC_ProcMeasureReq during power down state
Free[pMsg(%08x)]
pMsg(%08x) after.pal_Free@%s
This message is already freed!!!
Early return - Cnt(%d)@Exception(LTE_MODEM_OFF):%s()
Free[pMsg(%08x)]
pMsg(%08x) after.pal_Free@%s
This message is already freed!!!
Early return - Cnt(%d)@Exception(DRX_SPARE_EXPIRY)-id(%d)/RF(%d):%s()
gL1LC_DsdsCheckReleaseFeasibilityTmr Timer stop
RESET DsdsDB_[%d].IsSuspend
[LTE_DSDS] ]RRM request [%d] in Suspend state (%d)!!
HalSaveMsg(%08x) after.pal_Free@IsSuspend !!
HalSaveMsg is already freed!!!
[LTE_DSDS] Different RrmSaveMsg(id=%d) is freed!!
RrmSaveMsg(%08x) after.pal_Free @IsSuspend !!
This message is already freed!!!
Free[pMsg(%08x)]
pMsg(%08x) after.pal_Free@%s
This message is already freed!!!
Early return - Cnt(%d)@Exception(IsSuspend):%s()
Early return -Cnt(%d)[RrmSaveMsg(%08x)/HoldRrmMsgFlag(%d)]@Exception(No RF):%s()
Free[pMsg(%08x)]
pMsg(%08x) after.pal_Free@%s
This message is already freed!!!
Early return -Cnt(%d)@Default Rrm ILM:%s()
Free[pMsg(%08x)]
pMsg(%08x) after.pal_Free@%s
This message is already freed @End of %s!!!
Normal return -Cnt(%d)[RrmSaveMsg(%08x), HoldRrmMsgFlag(%d)]@%s()
%s(SaveMsg(%08x)).id(%d).Cnt(%u)
%s(msg(%08x),SaveMsg(%08x)).id(%d).Cnt(%u)
Early return - Cnt(%d)@Exception(pMsg==NULL):%s()
Free[pMsg(%08x)]
pMsg(%08x) after.pal_Free@%s
This message is already freed!!!
Early return - Cnt(%d)@LTE_MODEM_OFF- id(%d):%s()
Free[pMsg(%08x)]
pMsg(%08x) after.pal_Free@%s
This message is already freed!!!
Early return - Cnt(%d)@DRDS_ACT_DURING_RSRC_REQ_IND:%s()
Early return -Cnt(%d)[HalSaveMsg(%08x)]@Exception(No RF):%s()
[LTE L1LC DSL1RC] PagingRequestTimer Stopped!
[LTE L1LC DSL1RC] HAL_L1LC_WAKEUP_START_IND is not processed due to insufficient time (%u) !!!
pMsg == HalSaveMsg @HAL_L1LC_WAKEUP_START_IND
release HalSaveMsg first to avoid HAL ILM dangle (pMsg (%08x)/HalSaveMsg(%08x)
[LTE_DSDS] HAL saved message [%d]
Early return - Cnt(%d)[HalSaveMsg(%08x)]@WAKEUP_START_IND:%s()
Free[pMsg(%08x)]
pMsg(%08x) after.pal_Free@%s
This message is already freed!!!
Early return - Cnt(%d)@Default Hal ILM:%s()
Free[pMsg(%08x)]
pMsg(%08x) after.pal_Free@%s
This message is already freed @End of %s!!!
Normal return -Cnt(%d)[HalSaveMsg(%08x) pMsg(%08x)msg(%08x)]@%s()
msg NULL
Ignore MMC_IF msg(%d) due to MTM mode.
[SADS] N2L measure
[SADS] N2L measure during SADR >> send TIMING_LATCH_CNF
[SADS] N2L measure during SADR >> send MEAS_STOP_CNF
X2L [%d] TimingLatchReq or IratMeasStop while RF is with other stack LTE.
[SADS] Not enough time to N2L measure >> send TIMING_LATCH_CNF
[SADS] Other stack wakeup start >> send TIMING_LATCH_CNF
DRX spare timer has already elapsed. elapsedTime=%d avail_time=%d
gL1LC_DsdsBplmnDurationTmr is started for duration = %d ms
MMC_LTEL1_CDMA_MISC_IND (GlobalMode : %d, BlockMobility : %d, IsMpsr : %d)
assert condition : Invalid Message Id(0x%x)
Invalid SRI-IF response received while L1 is waiting for response, pointer(0x%x), Source(%d), Destination(%d), Length(%d)
[LTE L1LC]msg_id(%d) was freed in L1LC_ProcMmcIfMsg
[DEBUG] HalSaveMsg = %d
[LTE L1LC DSL1RC] Received Request [%d] when LTE is De-register[%d]
[LTE L1LC DSL1RC] L1LC_ProcMmcIfMsg :: Incoming Msg ID[0x%x]
assert condition : Invalid Message Id
assert condition : Message is NULL
clear L1TX queued message in SUSPEND state
[SADS] Tx Skip L1LC_DecodeL1txTxReq
assert condition : Wrong Message Id
assert condition : Message Null
[SADS] Tx Skip L1LC_DecodeL2txTxReq
assert condition : Wrong Message Id
[L1LC => L1LC] Send RRM_L1LC_RESUME_REQ
[SyncMsg]clear src: %d, id: %d, count: %d
%s(Recover:%d,IsSuspend:%d,RF:%d%d)
[SyncMsg]remove src: %d, id: %d, count: %d
[L1LC => L1LC] Send RRM_L1LC_SUSPEND_REQ
