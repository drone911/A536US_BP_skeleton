pTempRBSchedInfo==NULL !!!
LogCH using this LCID has been already setup !!!
pTempRBSchedInfo==NULL !!!
No RB with this LCID: %d
pal_ListIsEmpty !!!
RB Setup Info malloc failed !!!
[MULTICORE] L2LTXMAC_SetupRBSchedDB: pPriorityElem[0x%x]
MacEntity[%d]: PHR configured & triggered : Periodic PHR(%d), Prohibit PHR(%d), dl-pathloss(%d)
MacEntity[%d]: PHR released
MacEntity[%d]: DCPHR(%d), phrModeOtherCG(%d), endcState(%d), nrSpCellIndex(%d)
[L2 DATA] gL2DataInactivityEnable[%d] TestSim[%d] StackId[%d]
MacEntity[%d]: MAC Timer : PBSR(%d), RTBSR(%d), TATMR(%d)
MacEntity[%d]: EBSR(%d), EPHR(%d), sCellDeactivationTimer(%d)
L2LTXMAC_CfgScheduler_AfterCfgComplete : MacEntity(%d), DCPHR(%d), phrModeOtherCG(%d), endcState(%d), nrSpCellIndex(%d)
[MULTICORE] L2LTXMAC_ProcSRRequest
[MULTICORE] L2LTXMAC_ProcSRRequest: L2_GetSRTriggered[%d]
PUCCH SR cancelled(RA-SR is on-going)
PUCCH SR (sleeping)
PUCCH SR (awake)
Trigger RA-SR: MacEntity[%d], gDSR_Configured(%d) gCurrentMACStatus(%d)
SR triggered already!!: MacEntity[%d], gDSR_Configured(%d) gCurrentMACStatus(%d)
MacEntity[%d]: SR not triggered or SR config(%d)/UL sync status(%d) changed
MacEntity[%d]: SR canceled
MacEntity[%d]: L2LTXMAC_StartSR, SrTxCnfWait==FALSE
SPS Activation Confirm
gMsg3Info.size==0 at the L2LTXMAC_ScheduleCCCH !!!
pTempRBSchedInfo==NULL!!!
last 1RB rescheduling. buffered RB does not exist!!!
gpSchedList[%d] is empty!!!
BSR cancellation for 1RB(unreserved, This RB is behind the last RB)
BSR not canceled (new last RB is scheduled, but bsrReservedSize is not used)
BSR not caceled (bsrReservedSize is used, but buffer is not empty)
change new last scheduled RB (grant reserve including LF)
keep last scheduled RB
change new last scheduled RB (grant reserve including BSR+LF)
BSR not caceled (reserved grant 0, given grant:%d, remained buffer:%d)
BSR not caceled (bsrReservedSize is not used, given grant:%d, remained buffer:%d)
BSR not caceled (buffer is not empty with bsrReservedSize)
reschedule for status pdu (reserved 1RB case)
BSR not caceled
pTempRBSchedInfo==NULL!!!
reschedule for status pdu (more than 2 reserved RB)
pTempRBSchedInfo==NULL!!!
BSR not caceled
pTempRBSchedInfo==NULL!!!
PHR triggered by PCell pathloss: current pathloss(%d[0.01dB]), reported pathloss(%d[0.01dB]), dl-PathlossChange(%d[0.01dB])
PHR triggered by an SCell pathloss (sCellIndex:%d): current pathloss(%d[0.01dB]), reported pathloss(%d[0.01dB]), dl-PathlossChange(%d[0.01dB])
PHR: Stack[%d], SCell pathloss change update (sCellIndex:%d) of pathloss:%d[0.01dB]
PHR: Stack[%d], PCell pathloss change update of pathloss:%d[0.01dB]
pTempRBSchedInfo==NULL!!!
grant size<MIN_UL_GRANT_SIZE !!!
msg3 grant_size>MAX_TB_SIZE !!!
Stack[%d], MacEntity[%d]: UL Grant, but UL UNSYNC!!!
MacEntity[%d]: L2LTXMAC_ULScheduling, but gL1TxRxCommonDB.RACause is %d
MacEntity[%d]: received NORMAL_GRANT, but gL1TxRxCommonDB.RACause is %d
MacEntity[%d]: received NORMAL_GRANT, but gL1TxRxCommonDB.RACause is %d
|UE -> eNB| MSG3 Entity[%d] %d, %d, %d M3_GrantSize: %d
Element==NULL !!
SCG Element==NULL !!
gpSchedList SCG Element==NULL !!
pTempRBSchedInfo==NULL !!
Retx BSR Timer expired & regular BSR triggered
Fail pal_Malloc and Fail Send LTE_L2LTX_L2HTX_SRI_REQ!!!
Periodic PHR Timer expired & Preiodic PHR triggered
Prohibit PHR Timer Expired
Logical Channel SR Prohibit Timer[%d] Expired!!! (0:MCG, 1:SCG), gBSRTriggered[0x%x]
L2LTXMAC_VOICEBitRateQuery_ProhibitTimerExpired[%d] Expired!!!
StackId %d, L2LTXMAC_VIDEOBitRateQuery_ProhibitTimerExpired[%d] Expired!!!
gpSchedList[MCG_Entity]==NULL !!!
gpSchedList[MCG_Entity]==NULL !!!
gpSchedList[SCG_Entity]==NULL !!!
gpSchedList[SCG_Entity]==NULL !!!
L2LTXMAC_DisplaySRRequestInfo : ST/ENTITY[%d/%d], gBSRTriggered[%d], gCurrentMACStatus[%d], SrTxCnfWait[%d], RACause[%d]
RB_ID[%d]:ProhibitTimerPresent[%d]/Timer[%d]
RB Reconfig Info malloc failed !!!
[MULTICORE] L2LTXMAC_RecfgRBSchedDB
RB Reconfig Error: No RB has been established !!!
[MULTICORE] L2LTXMAC_RecfgRBSchedDB: pPriorityElem[0x%x] Highest_PriRB[StackId].priority[0x%x]
pTempRBSchedInfo==NULL !!!
pTempRBSchedInfo==NULL !!!
No RB with this LCID: %d
Searching Error in RB info DB !!!
[MULTICORE] L2LTXMAC_RelRBSchedDB
RB Release Error: No RB has been established !!!!
[MULTICORE] L2LTXMAC_RelRBSchedDB: Reset pPriorityElem, Highest_PriRB
pTempRBSchedInfo==NULL !!!
equalPriGroupInx error[%d] !!!
equalPriGroupInx error[%d] !!!
sTAG (ID:%d) is released, but sCell(s) (bitmap:%d) still belong to the sTAG!!! Their sTAG need to be handled properly if it is temporal situation.
info->bufferedRbCnt == 0!!!
info->lcgCnt == 0!!!
Long BSR + RLC Status ACK Only Case
Long BSR to Short BSR + RLC Status Report
Long to Short BSR(Lcid[%d]: reserved grant:%d, remained buffer:%d)
BSR cancellation for 2RB(both unreserved)
BSR not caceled, #2 RB buffer is not empty(reserved grant:%d, remained buffer:%d)
BSR not caceled, #1 RB[%d] buffer is not empty(reserved grant:%d, remained buffer:%d)
BSR cancellation for 2RB(1 reserved, 1 unreserved)
BSR not caceled, #2 RB[%d] buffer is not empty(reserved grant:%d, remained buffer:%d)
BSR not caceled, #1 RB[%d] buffer is not empty(reserved grant:%d, remained buffer:%d)
BSR cancellation for 2RB(1 unreserved, 1 reserved)
BSR not caceled, #2 RB[%d] buffer is not empty(reserved grant:%d, remained buffer:%d)
BSR not caceled, #1 RB[%d] buffer is not empty(reserved grant:%d, remained buffer:%d)
DL VOICE RECOM_BITRATE_QUERY_CE reserved
UL VOICE RECOM_BITRATE_QUERY_CE reserved
DL VIDEO RECOM_BITRATE_QUERY_CE reserved
UL VIDEO RECOM_BITRATE_QUERY_CE reserved
M3 Grant[%d] too small
Entity[%d]: init grant(%d), current grant(%d)
Entity[%d]: init grant(%d), current grant(%d)
BSR cancel for status pdu
BSR not caceled
schedResult.bufferSize[%d] < schedResult.remainedStatus[%d]
tempBufferSize[%d] < schedResult.bufferSize[%d]
RLC reserved 0, Received Grant(%d)
reschedAgain==TRUE!!!
MacEntity[%d]: BSR Reserved LONG -> SHORT due to Grant(%d)
pTempRBSchedInfo==NULL!!!
tempBufferSize[%d] < schedResult.bufferSize[%d]
pTempRBSchedInfo==NULL!!!
tempBufferSize[%d] < schedResult.bufferSize[%d] !!!
pTempRBSchedInfo==NULL!!!
schedResult.bufferSize < schedResult.remainedStatus[%d] !!!
pTempRBSchedInfo==NULL!!!
Entity[%d]: UL SPS grant configured, implicitReleaseAfter(%d))
Entity[%d]: skipUplinkTxSPS UL Grant
Entity[%d]: skipUplinkTxSPSConfigured but csi requested
Entity[%d]: skipUplinkTxDynamic UL Grant
