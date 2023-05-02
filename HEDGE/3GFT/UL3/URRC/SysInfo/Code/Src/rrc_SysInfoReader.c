SIR_free: [free] - SysInfoReader @ 0x%0.8x
SIR_Create: SysInfoReader not created
SIR_Create: guard timer not allocated
SIR_Create: guard timer not created
SIR_Create: SIB Read Stuck Guard timer not allocated
SIR_Create: SIB Read Stuck Guard timer not created
SIR_Create: [create] - SysInfoReader @ 0x%0.8x, guard timer @ 0x%0.8x
SIR_Create: [create] - SysInfoReader @ 0x%0.8x, stuck guard timer @ 0x%0.8x
SIR_Create: SysInfoReader Uarfcn = %d, Cpich = %d
SIR_StartReading: [free] - activeSysInfo @ 0x%0.8x
SIR_StartReading: activeSysInfo instance not created
SIR_StartReading: activeSysInfo created @ 0x%0.8x, failed to start guard timer @ 0x%0.8x
SIR_StartReading: activeSysInfo created @ 0x%0.8x, failed to start stuckGuardTimerId timer @ 0x%0.8x
guardTimer started (TmId=%d)
SIR_StartReading: activeSysInfo created @ 0x%0.8x & guard timer @ 0x%0.8x started
stuckTimer started (TmId=%d)
SIR_StartReading: activeSysInfo created @ 0x%0.8x & stuck guard timer @ 0x%0.8x started
rrc_SysInfoReader_isSysInfoRequired:: CompleteSchPresent is : %d ,SIbType is %d
rrc_SysInfoReader_isSysInfoRequired :: SibSchedInfo is NULL
SIR_SIR_isSysInfoRequired: unable to stop the guard timer @ 0x%0.8x
SIR_SIR_isSysInfoRequired: unable to start the guard timer @ 0x%0.8x
guardTimer started (TmId=%d)
SIR_processSegment: iBlock = NULL, iBlock expected @ SFN but not subscribed
SIR_processSegment: all segments of SIB/MIB received
SIR_processSegment: [SI_SubscribeToSchInfo_IntraFreq]
SIR_processSegment: [SI_SubscribeToSibs_IntraFreq] - MIB / SchBlk1 / SchBlk2
SIR_processSegment: [SI_SubscribeToSibs_IntraFreq] - SIB
SIR_processSegment: [SI_SubscribeToMib_IntraFreq or SI_SubscribeToMib_InterFreq]
SIR_processSegment: invalid subscription
SIR_processSegment: received a segment of SIB/MIB
SIR_processSegment: [%s] - segment out of order or out of range, deleting the infoblock and restarting
rrc_SysInfoReader_processSegment: [error] - Node is 0
SIR_processSegment: [%s] - segment error or invalid MIB, deleting
SIR_RequestSchInfo: subscribe to SchBlk
SIR_RequestSchInfo: [error] - sibListArray already allocated
SIR_RequestSchInfo: sibListArray not allocated
SIR_RequestSchInfo: sibListArray @ 0x%0.8x,
SIR_RequestSchInfo: iBlock not created
SIR_RequestSchInfo: SibList_Node not created
SIR_RequestMib: subscribe to MIB
SIR_RequestMib: [error] - sibListArray already allocated
SIR_RequestMib: sibListArray not allocated
SIR_RequestMib: sibListArray @ 0x%0.8x,
SIR_RequestMib: iBlock not created
SIR_RequestMib: SibList_Node not created
SIR_RequestSibs: requestedSibs = NULL
SIR_RequestSibs: numSibs = %d
SIR_RequestSibs: sibListArray already allocated
SIR_RequestSibs: SysInfoReader_p->sibListArray not created
SIR_RequestSibs: SysInfoReader_p->sibListArray @ 0x%0.8x
SIR_RequestSibs: iBlock not created
SIR_RequestSibs: SibList_Node not created
RequestSibs: infoBlockCount = %d
SIR_cancelSibs: cancelSibs = NULL
SIR_cancelSibs: Can not find any Info Block of SIB %d
SIR_CacelSubscription Blocks: [%s] - freed @ 0x%0.8x
SIR_cancelSibs: InfoBlock Already removed %d
SIR_CacelSubscription Blocks: [%s] - freed @ 0x%0.8x
SIR_cancelSibs: InfoBlock Already removed %d
SIR_CacelSubscription Blocks: [%s] - freed @ 0x%0.8x
SIR_CacelSubscription Blocks: [%s] - freed @ 0x%0.8x
SIR_GuardPeriodExpired: [expired] - guard timer @ 0x%0.8x expired
SIR_StuckGuardPeriodExpired: [expired] - stuck guard timer @ 0x%0.8x expired
SIR_HandleBchReadError: unable to send am_FailureInd msg to SysInfoMgr
SIR_HandleBchReadError: message SIR_am_FailureInd sent to the SysInfoMgr
SIR_GetInfoBlockFromSIBType: [fail] - sibListArray = NULL
SIR_GetInfoBlockFromSIBType: [fail] - startIdx (%d) > infoBlockCount (%d)
rrc_SysInfoReader_GetInfoBlockFromSIBType : MIB segment is being received
MIB not received. discard Info Block
SIR_GetInfoBlockFromSIBType: [%s] @ address 0x%0.8x
rrc_SysInfoReader_priv_StopGuardTimers: - guard timer @ 0x%0.8x stopped
SIR_priv_DestroyGuardTimer: guard timer @ 0x%0.8x stop failed
rrc_SysInfoReader_priv_StopGuardTimers: - Stuckguard timer @ 0x%0.8x stopped
SIR_priv_DestroyGuardTimer: Stuckguard timer @ 0x%0.8x stop failed
SIR_priv_CleanInfoBlocks: [free] - sibListArray @ 0x%0.8x
SIR_priv_CleanMemory: [free] - activeSysInfo @ 0x%0.8x
SIR_priv_RemoveInfoBlocks: [%s] - freed @ 0x%0.8x
SIR_priv_DestroyGuardTimer: [delete] - guard timer @ 0x%0.8x
SIR_priv_DestroyGuardTimer: guard timer @ 0x%0.8x not deleted
SIR_priv_DestroyGuardTimer: [free] - guard timer @ 0x%0.8x
SIR_priv_DestroyStuckGuardTimer: [delete] - Stuck Guard timer @ 0x%0.8x
SIR_priv_DestroyStuckGuardTimer: Stuck Guard timer @ 0x%0.8x not deleted
SIR_priv_DestroyStuckGuardTimer: [free] - Stuck Guard timer @ 0x%0.8x
SIR_priv_HandleIntraFreqSchInfo: [%s] - handling MIB
SIR_priv_HandleIntraFreqSchInfo: [%s] - handling scheduling block
SIR_priv_HandleIntraFreqSchInfo: [%s] - not MIB or SchBlk
priv_HandleRecvMib: handling SchBlks for initial MIBs
priv_HandleRecvMib: checking MIB value tags
SIR_priv_HandleMibVTagArray: mibVTagArr[0] = %d, mibVTagArr[1] = %d
SIR_priv_HandleInitialMibSchBlks: SchedulingInfo Complete
SIR_priv_RemoveNodeFromList: [%s] pNode @ 0x%0.8x removed
SIR_priv_HandleSendRecvMibOrSib: iBlock received is NULL, SibId: %d
SIR_priv_HandleSendRecvMibOrSib: SIBs received before MIB
[Error] SibId is Invalid_1: %d
SIR_priv_HandleSendRecvMibOrSib: iBlock received is NULL
SIR_priv_HandleSendRecvMibOrSib: [error] - unable to send SIR_am_RecvMibOrSib to SysInfoMgr
SIR_priv_HandleSendRecvMibOrSib:[Error] intMsg is NULL
[Error] SibId is Invalid_3: %d
rrc_SysInfoReader_priv_SendRecvMibOrSib: pNode is NULL
rrc_SysInfoReader_priv_SendRecvMibOrSib: SysInfoReader_p->acquiredSibListArray is NULL
rrc_SysInfoReader_priv_SendRecvMibOrSib: cNode is NULL
rrc_SysInfoReader_priv_SendRecvMibOrSib: [error] - Node is 0
SIR_priv_InsertNewMib: sibListArray = NULL
SIR_priv_InsertNewMib: SibList_Node not created
SIR_priv_InsertNewMib: iBlock not created
SIR_priv_HandleMibValueTags: new MIB noticed , notify client immly
SIR_priv_HandleSendRecvMibOrSib: [error] - unable to send SIR_am_RecvMibOrSib to SysInfoMgr
rrc_SysInfoReader_priv_HandleMibValueTags: intMsg received is NULL
priv_HandleMibValueTags: cannot create new MIB
SIR_priv_HandleMibValueTags: same MIB
SIR_priv_HandleMibValueTags: cannot append new MIB
SIR_priv_HandleMibValueTags: cannot create new MIB
priv_HandleRecvSib: cannot send RecvMibOrSib message
SchedulingBlock Arrived Before reading MIB
rrc_SysInfoReader_priv_HandleRecvSchedBlock: [error] - Node is 0
priv_HandleRecvSib: cannot send RecvMibOrSib message
priv_HandleRecvSib: cannot send RecvMibOrSib message
priv_HandleSendFailureInd: unable to send SIR_am_FailureInd to SysInfoMgr
priv_HandleSendFinishInd: unable to send SIR_am_FinishInd to SysInfoMgr
priv_IsSegmentIntersting called as CompleteSchInfo Not yet available
priv_IsSegmentIntersting choice is : %d , sibtype is %d
