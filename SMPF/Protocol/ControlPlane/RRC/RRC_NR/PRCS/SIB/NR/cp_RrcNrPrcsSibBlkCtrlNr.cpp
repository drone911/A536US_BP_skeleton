[NRSIB] RNA check : No Tracking Area Code in SIB1. NW should send this value in standalone
[NRSIB] RNA check : No RAN Area Code in SIB1
[NRSIB] RNA check : RAN-NotificationAreaInfo is ran-AreaConfigList. But SIB1 has no ranAreaCode. need RNA update
[NRSIB] RNA check : Get ServCellInfo successfully
[NRSIB] RNA check : No Selected PLMN in SibDb
[NRSIB] RNA check : ServingCell (Cell Id :%d) is belong to the ranAreaCellList. no need RNA update
[NRSIB] RNA check : PLMN matched but no matched cell ID(%d) in ranAreaCellList
[NRSIB] RNA check : ServingCell is not belong to the ranAreaCellList. need RNA update
[NRSIB] RNA check : ServingCell (RAN Area Code :%d) is belong to the ranAreaConfigList. no need RNA update
[NRSIB] RNA check : TAC matched but no matched RNA Area Code(%d) in ranAreaConfigList
[NRSIB] RNA check : PLMN matched but no matched TAC(%d) or RNA Area Code(%d) in ranAreaConfigList
[NRSIB] RNA check : ServingCell is not belong to the ranAreaConfigList. need RNA update
[NRSIB] RNA check : Invalid RNA Info choice. need RNA update
[NRSIB] RNA check : No RNA info. need RNA update
[NRSIB] RNA check : No pScellInfo or Sib1 in SibDb. need RNA update
[NRSIB] RNA check : Can't get ServingCell Info in SibDb. need RNA update
[NRSIB] Valid SIB%d is filled to SibUpdateReq from CurrentReceived Sibs
[NRSIB] ERROR. SIB1 is only CellSpecific. No AreaInfoList
[NRSIB] SIB%d isn't defined not yet. It should be added
[NRSIB] Valid SIB%d is filled to SibUpdateReq from AreaInfoDb
[NRSIB] SIB%d isn't defined not yet. It should be added
[NRSIB] Valid SIB%d is filled to SibUpdateReq from CellInfoDb
[NRSIB] SIB%d isn't defined not yet. It should be added
%s
[NRSIB] Invalid SourceCellInfo(%d), It should be checked !!!!!!!!!!!!
[NRSIB] SIB1 : OTHER SIBs acquire procedure is triggerd, SIB ACQ MODE (%d)
[NRSIB] NO SIB2 schedulingInfo in SIB1, previous SIB2 will be transferred to RRM
[NRSIB] No SchedulingInfoList, not satisfied with the UE CAPA(%x)
[NRSIB] There is stored SIBs, No need to acquire SIBs
[NRSIB] No SchedulingInfoList(%x)
[NRSIB] NrRrcNeededSchedInfo(%x), NrRrcOnDemandSchedInfo(%x)
[NRSIB] NrRrcNeededSchedInfo(%x), NrRrcOnDemandSchedInfo(%x)
[RRC][NRSIB] There are remained SIbs(%x), remaied ondemand Sib(%x)
[RRC][NRSIB] There are remained SIbs(%x), remaied ondemand Sib(%x)
[NRSIB] All SIBs are acquired
[NRSIB] RAT mode %d
[NRSIB] discard SIB5 (LTE RAT is disable
[NRSIB][ERROR] NO PLMN ID, Can't compare
[NRSIB] Valid Time is remained
Error:: No SIB2 in DB
Error:: No SIB3 in DB
Error:: No SIB4 in DB
Error:: No SIB5 in DB
Error:: No SIB9 in DB
Error:: Invalid case
SibType%d : ValueTag(%d)
[NRSIB] Stored SIB%d is valid, No needed to read for AreaID(%d)
[NRSIB] Stored SIB%d is valid, No needed to read for CellId(%d)
[NRSIB] Stored SIB%d is not valid anymore, re-acq procedure is needed for AreaID(%d) CellID(%d)
[NRSIB] Stored SIB%d is valid, No needed to read for CellId(%d)
[NRSIB] Stored SIB%d is not valid anymore, re-acq procedure is needed for CellId(%d)
CellInfo list is full, Cell(%d)(%d) is Freed
NR_TSIB_3HRS is started
NR_TSIB_3HRS is stopped!
NR_T_SIBRACH is started
NR_T_SIBRACH is stopped!
NR_TRACH is started
NR_TRACH is stopped!
All of timers related to SIB procedure are stop
NumSiReqRscList = %d
SiReqRsc_NUL[%d]: %d, %d, %d
SiReqRsc_SUL[%d]: %d, %d, %d
ClearNumSiReqRscList!
CrtSiReqEntity : %d
Invalid CrtSiReqEntity (%d)
%s
[NRSIB] Clear SIBs that do not need to wait in Connect State
[NRSIB] NrRrcNeededSchedInfo : %d NrRrcOnDemandSchedInfo : %d
[NRSIB] Waiting for the remaining SIBs, Don't stop SIB acqisition procedure
[NRSIB] StopSibAcqPrcd, RRM_RRC_BCH_RELEASE_REQ to stop reading SIB(s)
[NRSIB] StopSibAcqPrcd, RRM_RRC_BCH_RELEASE_REQ to stop reading SIB(s)
[NRSIB] Skip StopSibAcqPrcd
[NRSIB] Stop reading SIB1, Current Sib state is %s
[NRSIB] Stop reading OSI, Current Sib state is %s
[SIB][ETWS] : receive NRRRCDB_SibType6
[SIB][ETWS] : receive NRRRCDB_SibType7 and receive All segment message
[SIB][ETWS] : not received the NRRRCDB_SibType7 RxLastSegment message. Clear SIB7 in CurrentRcvSibs
[SIB][CMAS] : receive NRRRCDB_SibType8 and receive All segment message
[SIB][CMAS] : Clear SIB8 in CurrentRcvSibs
[NRSIB][ETWS]Secondary : CheckRxAllEtwsSegment invalid number of last segment[%d].
[NRSIB][ETWS]Secondary : CheckRxAllEtwsSegment LastSegmentNumber[%d] but segment[%d] msg is not received.
[NRSIB][ETWS]Secondary : CheckRxAllEtwsSegment LastSegmentNumber[%d] All segment msg is received.
[NRSIB][CMAS]CheckRxAllCmasSegment :: invalid number of last segment[%d].
[NRSIB][CMAS]CheckRxAllCmasSegment :: LastSegmentNumber[%d] but segment[%d] msg is not received.
[NRSIB][CMAS]CheckRxAllCmasSegment :: WACSegCount[%d] but segment[%d] WAC is not received.
[NRSIB][CMAS]CheckRxAllCmasSegment :: LastSegmentNumber[%d] All segment msg is received.
%s
[NRSIB] pAssembledEtwsMsg alloc FAIL
[NRSIB][ETWS]Need to check segment length. total[%d], current[%d]
[NRSIB][ETWS]AssembleEtwsSecondaryMsg LastSegmentNumber[%d] Cnt[%d] memPos[%d]
%s
[NRSIB] pAssembledCmasMsg alloc FAIL
[NRSIB][CMAS]Need to check segment length. total[%d], current[%d]
[NRSIB][CMAS]pAssembledCmasMsg LastSegmentNumber[%d] Cnt[%d] memPos[%d]
[NRSIB] pAssembledAreaCoordinates alloc FAIL
[NRSIB][CMAS]Need to check WAC length. total[%d], current[%d]
[NRSIB][CMAS]pAssembledAreaCoordinates WACSegCount[%d] Cnt[%d] memPos[%d]
[NRSIB] OneShotIeInSibDb cleared
%s
[NRSIB] searchSpaceSIB1 is 0.
[NRSIB] no searchSpaceSIB1
[NRSIB] matched SearchSpaceId found with searchSpaceSIB1 %d
[NRSIB] matched controlResourceSetId in commonSearchSpaceList %d with controlResourceSetId %d
%s
[NRSIB] searchSpaceOtherSystemInformation is 0.
[NRSIB] no searchSpaceOtherSystemInformation
[NRSIB] matched SearchSpaceId found with searchSpaceOtherSystemInformation %d
[NRSIB] matched controlResourceSetId in commonSearchSpaceList %d with controlResourceSetId %d
%s
%s
%s
[NRSIB] ActiveDlBwpId(%d)
[NRSIB] firstActiveDownlinkBwpId(%d)
[NRSIB] downlinkBwpList[%d]->BWPid(%d)
