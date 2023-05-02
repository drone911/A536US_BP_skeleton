rrc_ns_GetCPCConfiguredStatus: SIM ID(%d) Status(%d)
[DB] [ERROR]: File Name = %s : Line No =[%u]
[DB] [ERROR]: DbIndex[%u] >= MAX_DB_INDEX
[DB] [ERROR]: File Name = %s : Line No =[%u]
[DB] [ERROR]: configDb_p[%u] is NULL
[DB] [ERROR]: File Name = %s : Line No =[%u]
[DB] [ERROR]: DlSecondaryCellId[%u] >= MAX_SUPPORTED_DL_SECONDARY_CELLS
[DB Mgr] rrc_DbMgr_CreateT314ReleaseMsgs
[DB Mgr] [FAILURE] ILMSet not created
[DB Mgr] rrc_DbMgr_CreateT315ReleaseMsgs
[DB Mgr] [FAILURE] ILMSet not created
[DB Mgr]ERROR:: Band is TDSCDMA_BAND_UNKNOWN
[DB Mgr] Stored Network Pointer is NULL
[DB Mgr] rrc_DbMgr_CreateRollbackForConfigFailureMsgs
[DB Mgr] RollBackRabm, RollBackUmac & RollBackUphy are all FALSE
[DB Mgr] [FAILURE] ILMSet not created
[DB Mgr] could not create ILMs for rollback ILM set
[DB Mgr] rrc_DbMgr_CreateRollbackForConfigFailureMsgs Checking the N-Freq Roll Back Scenaro
[DB Mgr] isSecondaryFreq in Config DB = %d
[DB Mgr] Secondary Freq Value = %d
[DB Mgr] rrc_DbMgr_CreateRollbackForConfigFailureMsgs N Freq Present in the Cnxmgr Conn So over ride the DB Value
[DB Mgr] Secondary Freq Value Fom CnxmgrConn = %d
[DB Mgr] rrc_DbMgr_CreateRollbackForConfigFailureMsgs N Freq Not Present in the Cnxmgr Conn So over ride the DB Value
[DB Mgr] rrc_DbMgr_CreateRestoreDedicatedResources
[DB Mgr] [FAILURE] ILMSet not created
[DB Mgr] Cannot Create ILM Set for Rollback Fach
[DB Mgr] Cuamc RB Config ILM not sent as Num RB is Zero from DB
[DB Mgr] MsgDb ulDchToModifyBitmask: 0x%x, MsgDb ulPhyTrchToReleaseBitMask: 0x%x, MsgDb ulDchToAddBitmask: 0x%x
[DB Mgr] MsgDb macConfRbReqBitMask: 0x%x, CfgDb rbIdPresentBitMask: 0x%x, MsgDb deletedRbIdBitMask: 0x%x
[DB Mgr] cant be sending CPC Deactivate Req as CPC was not configured before
[DB Mgr] cant be sending CPC Rel Req as CPC was not configured before
[DB Mgr] HSUPA was not configured before
[DB Mgr] DlSecondary Cell HSDPA (%d) was not configured before
[DB Mgr] cant be sending CPC Deactivate Req as CPC was not configured before
[DB Mgr] cant be sending CPC Rel Req as CPC was not configured before
[DB Mgr] HSUPA was not configured before
[DB Mgr] HSUPA was not configured before
[DB Mgr] RollbackDb: ulDchToAddBitmask: 0x%x
[DB Mgr] RollbackDb: macConfRbReqBitMask: 0x%x
[DB Mgr] Create&RelDedRes
[DB Mgr] Config Db RLCount : [%u] , Type : [%u] and DlUarfcn : [%u]
[DB Mgr] Config Db PSC : [%u]
[DB Mgr] dpchFrameOffset 0x%x
[DB Mgr] fdpchFrameOffset 0x%x
[DB Mgr] [R6] EDCH & HSDSCH
[DB Mgr] [R6] EDCH Only
[DB Mgr] [R5] HSDSCH
[DB Mgr] [R99] DCH
[DM Update] BandId(%d), Uarfcn(%d), PSC(%d), LAC(%d), RAC(%d)
[DM Update] cycle1(%d), cycle2(%d), InactivityThForCycle2(%d), cycle(%d), InactivityThForCycle(%d)
[DM Update] EDCH TTI is not valid so skip the DM update
[DM Update] UtranDrxCycleLengthCoef(%d)
Primary UARFCN = %d, Secondary UARFCN = %d, Cell ParamId = %d
[DB Mgr] Config DB Created
[DB Mgr] Message DB Freed at Index [%d]
[DB Mgr] Message DB Created at Index [%d] for msgType [%d]
[DB Mgr] Stored Network Pointer is NULL
[DB Mgr] rrc_DbMgr_RemoveCompressedMode(%d)
[DB Mgr] rrc_DbGetCIQInfoForAllRls: [success] - DlRadioLinkCount = 0
[DB Mgr] RadioLinkSet::GetCIQInfoForAllRls: [success]
Not available configDb existed
CollectAndSendCIQMetricRF64: ResMgrPHY_p==NULL
[DB][ECELL_FACH] Clear C_RNTI_INFO_OK
[DB][ECELL_FACH] Restore C_RNTI_INFO_OK
[DB][ECELL_FACH] Clear H_RNTI_INFO_OK
[DB Mgr] rrc_DbMgr_AddIlmsForRelTimerIlmSet
[DB Mgr] ILM set not created
[DB Mgr] rrc_DbMgr_popMsgDbforReleaseT314orT315Msgs
[DB Mgr] rrc_DbMgr_AddIlmsForRollback
[DB Mgr] no ILMs to actually release, RollbackFlags RollbackRabm[%d], RollbackCumac[%d], RollbackCuphy[%d]
[DB Mgr] rrc_DbMgr_Check4RollbackIlms
[DB Mgr] no RABM ILMs to rollback
[DB Mgr] no CUPHY ILMs to rollback
[DB Mgr] no CUMAC ILMs to rollback
[DB Mgr] Rollback ILM: CUMAC_REMOVE_TFCS_REQ is added
[DB Mgr] HSDPA was not configured before
[DB Mgr] HSDPA was not configured before
[DB Mgr] RollbackDb: macConfRbReqBitMask: 0x%x
[DB Mgr] RollbackDb: macConfRbReqBitMask: 0x%x
[DB Mgr] DB Commit: ulDchActuallyConfiguredInPhyBitMask 0x%x
[DB Mgr] DB Commit: dlDchActuallyConfiguredInPhyBitMask 0x%x
[DB Mgr] ===========Before DB Commit:===============
[DB Mgr] Db Commit: RL with psc: [%u], removed from config Db
[ERROR] PrimaryCpich: [%d] not present in ConfigDb
[ERROR] PrimaryCpich: [%d] not present in ConfigDb
[DB Mgr] Db Commit: HHO : All Rls to be replaced. Config Db RLCount Before: [%u], Config Db RLCount After: [%u]
[DB Mgr] RadioLinkPriv::AddToFddNetwork - No FddNetwork instance available
[DB Mgr] Db Commit: RL with psc: [%u], removed from config Db
[ERROR] PrimaryCpich: [%d] not present in Config Db
[DB Mgr] RadioLinkPriv::AddToFddNetwork - No FddNetwork instance available
[DB Mgr] Db Commit: RL with psc: [%u], added in config Db
[ERROR] No RL Info present at RL Index[%d] Config Db
[DB Mgr] ===========After DB Commit:===============
[DB Mgr] Db Commit: Reconfigured RAB: [%u] updated in Config Db at Index: [%u]
[ERROR] Reconfig Rab [%d] not present in Config Db
[DB Mgr] Db Commit: RAB: [%u] deleted from Config Db at Index: [%u]
[DB Mgr] Db Commit: RAB: [%u] Added in Config Db at Index: [%u]
[DM Update] No RAB(0) - Initiated from reception of RRC Connection Setup
[DM Update] CS RAB + PS RAB(3)
[DM Update] CS RAB only(1)
[DM Update] PS RAB only(2)
[DM Update] No RAB(0)
[DM Update] BandId(%d), Uarfcn(%d), PSC(%d), RAC(%d)
[DM Update] PLMN(%x%x%x%x%x%x)
Wrong BandId 0(Dluarfcn: %d) was detected so it won't be updated to SIPC
Wrong UARFCN(%d) was detected so it won't be updated to SIPC
