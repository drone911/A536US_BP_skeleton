[ResMgr][init] Timer 314 creation FAIL
[ResMgr][init] Timer 315 creation FAIL
[ResMgr][init] Timer for SRB Delay creation FAIL
[ResMgr][free] T314 Delete FAIL
[ResMgr][free] T315 Delete FAIL
[ResMgr][free] SRBDelayTimer Delete FAIL
[ResMgr][MapExtMsgIdToIntMsgId] procedure started
[ResMgr] CUPHY_FACH_RESOURCE_FOR_CTCH_CONFIG_CNF Msg Rxed
[ResMgr] CUPHY_FACH_RESOURCE_FOR_CTCH_RELEASE_CNF Msg Rxed
[ResMgr] External Message to Internal Message mapping failed
[ResMgr][PdcpRelocCnfGetSNforRBId] procedure started
[ResMgr][getCurrentCrnti] CRNTI IE Is Not Present
TimerExpiryStatus = %d
TimerExpiryStatus = %d
TimerExpiryStatus = %d
TimerExpiryStatus = %d
TimerExpiryStatus = %d
PCH channel Currently configured
FACH channel Currently configured
HS-Common channel Currently configured
No Common channel Currently configured
rrc_PostNewState FAIL
ProcessRLFailure FAIL
ProcessRLFailureAfterRelease FAIL
ILMMsgBufPtr is NULL
SendInternalMsgSingleton FAIL
ProcessRLFailure() started
TimerExpiryStatus = %d
ProcessRelDedRes FAIL
Error going to WAITDCHRESRELCNF
DCH resources Not Configured
DCH Resources Flag = FALSE
rrc_BoundUphy_RemoveAllTids() FAIL
rrc_BoundUmac_RemoveAllTids() FAIL
ConfigDBMgr: CreateReleaseDedicatedResources FAIL
IlmPtr is NULL
CPC IlmPtr is NULL
HS-DSCH IlmPtr is NULL
E-DCH IlmPtr is NULL
ProcessRLFailureAfterRelease() started
TimerExpiryStatus = %d
T314: %d, T315: %d
T314RBAssociation: %d, T315RBAssociation: %d
rrc_PostNewState FAIL
Inform to CnxMgr abt T314 expiry since T314 = 0: CS
Inform to CnxMgr abt T314 expiry since T314 = 0: PS
T315 Start Failed
T315 started (TmId=%d)
T315ExpiryMsg is NULL
T314 Start Failed
T314 started (TmId=%d)
T314ExpiryMsg is NULL
Inform to CnxMgr abt T315 expiry since T315 = 0: CS
Inform to CnxMgr abt T315 expiry since T315 = 0: PS
T315 Start Failed
T315 started (TmId=%d)
T315ExpiryMsg is NULL
CreateAndSendRollbackMsgsForFach FAIL
T314 & T315 are non ZERO. But no RBMultiplexOptPresent
T314Active : %d T315Active: %d RBMultiplexOptPresent : %d
Error posting T314ANDT315RUNNING
Error posting T314RUNNING
Error posting T315RUNNING
T314 & T315 Not started
Error posting READYFORCONFIGREQ
TimerExpiryStatus = %d
CnxMgr sent Dedicated Release when FACH Configured
CnxMgr sent Dedicated Release when HSDSCH/RACH Configured in CELL_FACH state
No FACH or HSDSCH Commoon or DCH Resources for UPHY Configured
SendInternalMsgSingleton FAIL
Error going to WAITPHYDEDICATEDRESRELCNF
Error going to WAITPHYSHAREDRESRELCNF
rrc_DbMgr_CreateT314ReleaseMsgs FAIL
IlmMsgBufPtr is NULL
IlmMsgBufPtr is NULL
IlmMsgBufPtr is NULL
PDCP ILMs Not Needed
IlmMsgBufPtr is NULL
rrc_DbMgr_CreateT315ReleaseMsgs FAIL
IlmMsgBufPtr is NULL
IlmMsgBufPtr is NULL
IlmMsgBufPtr is NULL
PDCP ILMs Not Needed
IlmMsgBufPtr is NULL
RollbackInst returnd NULL
T314: %d, T315: %d
T314RBAssociation: %d, T315RBAssociation: %d
Process RL failure & NO RABS configured
No Rabs configured: ONLY CS DOMAIN SIGNALLING EXIST so starting T314
T314 Start Failed
T314 started (TmId=%d)
T314ExpiryMsg is NULL
No Rabs configured: CS & PS DOMAIN SIGNALLING EXIST so starting T314 & T315
T314 Start Failed
T314 started (TmId=%d)
T314ExpiryMsg is NULL
T315 Start Failed
T315 started (TmId=%d)
T315ExpiryMsg is NULL
No Rabs configured: ONLY PS DOMAIN SIGNALLING EXIST so starting T315
T315 Start Failed
T315 started (TmId=%d)
T315ExpiryMsg is NULL
No Rabs configured: NO Signalling connection existes: Going to IDLE
No Rabs configured: CS domain SIGNLLING EXIST and T315 is Zero, so starting only T314
T314 Start Failed
T314 started (TmId=%d)
T314ExpiryMsg is NULL
Only T314 is Valid so Started only T314
No Rabs configured but Only T314 is Valid but no CS Signalling connection
PS domain SIGNLLING EXIST and T314 value is Zero, so starting only T315
T315 Start Failed
T315 started (TmId=%d)
T315ExpiryMsg is NULL
No Rabs configured but Only T315 is Valid so Started only T315
No Rabs configured but Only T315 is Valid but no PS Signalling connection
No Rabs configured: T314 & T315 are ZERO. So not started any TIMER - Go to IDLE
CreateAndSendRollbackMsgsForFach FAIL
T314 & T315 are non ZERO. But no RBMultiplexOptPresent
T314Active : %d T315Active: %d RBMultiplexOptPresent : %d
Error posting T314ANDT315RUNNING
Error posting T314RUNNING
Error posting T315RUNNING
T314 & T315 Not started
Error posting READYFORCONFIGREQ
TimerExpiryStatus = %d
ProcessRcvdConfigMsg FAIL
CommonHandleLayersMsg FAIL
RecalcStartMsg is NULL
SendInternalMsgSingleton FAIL
rrc_PostNewState FAIL
CreateAndProcessIlmSetForLayersMsg FAIL
CheckForSecurityAndRelocation FAIL
IlmSet Pointer is NULL
Backup for Rollback : DOFF(%d), RefCell(%d)
Backup for Rollback (L1C) : PSC(%d), FrameOffset(%d)
Backup for Rollback (RRC) : PSC(%d), FrameOffset(%d)
InitialIlmCountCheck FAIL
Procedure SendConftoCnxMngr FAIL
SecurityMgr GenFunction FAIL
SendInternalMsgSingleton FAIL
Post WAITFORSECURITYCONFIGCNF FAIL
CheckAndProcessSrnsInfo FAIL
GenerateAndSendRabActivateInd FAIL
SIB11_READ_DCHSPA_YES
SIB11_READ_DCHSPA_NO
AsType = AS_TYPE_HSPADCPLUS
AsType = AS_TYPE_HSPAPLUS
AsType = AS_TYPE_HSUPA
AsType = AS_TYPE_HSDPA
AsType = AS_TYPE_UMTS
No need to update for Cell_FACH / PCH / IDLE state
AS_TYPE(%d) 3: UMTS, 4: HSDPA, 5: HSUPA, 6: HSPA+
CreateAndSendMacConfigHfnReq FAIL
SRBDelayTimer FAIL
SRBDelay Timer started (TmId=%d)
Post WAITFORSRBDELAYTIMEREXPIRY FAIL
Post WAITCOMPLETECONFIGHANDOVER FAIL
Post WAITCOMPLETECONFIG FAIL
Post READYFORCONFIGREQ FAIL
ProcessRelDedRes FAIL
Error going to WAITDCHRESRELCNF
Error going to WAITPHYSHAREDRESRELCNF
[ECELL_FACH] Error going to WAITHSDSCHCOMMONRACHRELCNF
Error going to READYFORCONFIGREQ
ProcessRLFailure FAIL
Error going to READYFORCONFIGREQ
CommonGenerateAndSendConfs FAIL
stateInd is NULL
[ERROR] TM RBs are Not present
HFN Incremented : State(FachToDCH)
MsgProcHelpers: GetMacCipheringActivationTime FAIL
[WARNING] RAB Setup Info is Not present
MsgProcHelpers: GetMacCipheringActivationTime FAIL
FACH Resources Flag = FALSE
[ECELL_FACH] FACH Resources Flag = %d HsDschCmnResPresentFlag = %d
ERR: Message out of Bounds
Failure sending msg to CnxMgr
CnfMsgHeaderPtr is NULL
Invalid RlcContinueReqPtr
Post WAITFORRELOCCONFIGCNF Fail
SendConftoCnxMngr FAIL
SendConftoCnxMngr FAIL
GenerateAndSendRabSetupMsg FAIL
IlmCountCheckAfterPhy FAIL
ILMMsgBufPtr is NULL
Post WAITFORRABMSETUPCNF FAIL
SendInternalMsgSingleton FAIL
GenerateAndSendPhyConfigMsg FAIL
IlmCountCheckAfterPhy FAIL
PHY IlmPtr is NULL
Error sending msg to ResMgrPHY
Error posting WAITFORPHYMSGCONFIGUREDCNF
GenerateAndSendMacConfigMsg FAIL
ProcessPhyMacConfigComplete FAIL
MAC GenFunction FAIL
SendInternalMsgSeingleton FAIL
Post WAITFORPHYMACCONFIGCNF FAIL
SendConftoCnxMngr() FAIL
CreateAndSendRabRollbackMessage FAIL
ProcessRelDedRes FAIL
Error going to READYFORCONFIGREQ
CreateAndSendRabRollbackMessage FAIL
SendConftoCnxMngr FAIL
IlmCountCheckAfterMac FAIL
Post WAITFORPHYMACCONFIGCNF FAIL
ProcessPhyNegativeCnf: Serious ERR
CreateAndSendRabRollbackMessage FAIL
ProcessRLFailure FAIL
CommonGenerateAndSendConfs() FAIL
GenerateRabRollbackMsgDch FAIL
SendConftoCnxMngr FAIL
Post NEWCONFIGL1SYNCFAIL_WAITFORROLLBACKCNF FAIL
ProcessRelDedRes FAIL
Error going to WAITDCHRESRELCNF
CreateAndSendRollbackMsgsForFach FAIL
SendConftoCnxMngr FAIL
ResourceMgr_p->dlMsgInst is NULL
IlmSetPtr is NULL
RollbackInst is NULL
[Rollback] Gen PHY Config Failed
[Rollback] Failed to send PHY Config
[Rollback] Gen MAC Config Failed
[Rollback] Failed to send MAC Config
No DlRlInfo ILE (%d)
No DlRlInfo ILE (%d)
RollbackInst returnd NULL
ResourceMgr_p->dlMsgInst is NULL
Invalid RollbackIlmSet
FATAL ERROR: Flag wrongly set
HS-DSCH is configured(Restore)
HS-DSCH is configured
HS-DSCH is configured
HS-DSCH is released
E-DCH is configured(Restore)
E-DCH is configured
E-DCH is released
ResourceMgr_p->dlMsgInst = NULL
DTX-DRX is configured(Restore)
DTX-DRX is configured
E-DCH is released
DTX-DRX is configured(Restore)
DTX-DRX is configured
E-DCH is released
Secondary HS-DSCH is configured(Restore)
dlMsgInst is NULL
Secondary HS-DSCH is configured
Secondary HS-DSCH is released
dlMsgInst is NULL
Current CFN, %d
GenerateAndSendRlcConfigMsg FAIL
IlmCountCheckAfterRlc FAIL
RLC GenFunction FAIL
SendInternalMsgSeingleton FAIL
Post WAITFORRLCCONFIGCNF FAIL
GenerateAndSendPdcpConfigMsg FAIL
IlmCountCheckAfterPdcp FAIL
PDCP GenFunction FAIL
SendInternalMsgSingleton FAIL
Post WAITFORPDCPCONFIGCNFF FAIL
GenerateAndSendRabConfigMsg FAIL
CheckForSecurityAndRelocation FAIL
RABM GenFunction FAIL
SendInternalMsgSingleton FAIL
Post WAITFORRABMCONFIGCNF FAIL
ProcessRcvdConfigMsg FAIL
ProcessFachLayersFromFachMsg FAIL
ILMInstId is NULL
Sib5Instance = NULL
SUCCESS to get FachMeasOccasionInfoPtr[%u]
Error Creating ILMs
CUPHY_FACH_RESOURCES_CONFIG_REQ = NULL
Error Creating ILMs
CUPHY_FACH_RESOURCES_CONFIG_REQ = NULL
FAIL to get FachMeasOccasionInfoPtr
Error Creating ILMs
CUPHY_FACH_RESOURCES_CONFIG_REQ = NULL
ProcessRcvdConfigMsg FAIL
ProcessRcvdConfigMsg FAIL
rrc_PostNewState FAIL
ProcessRcvdConfigMsg FAIL
Error going to WAITPHYSHAREDRESRELCNF
ProcessRcvdConfigMsg FAIL
DCH Resources Flag = TRUE
ProcessRcvdConfigMsg FAIL
DCH Resources Flag = TRUE
PCH Resources Flag = FALSE
ERR: Dedicated Resource is not yet released
Error going to WAITPHYSHAREDRESRELCNF
ProcessPchResourcesMsg FAIL
CTCH Resources Flag = FALSE
Sib5Instance = NULL
Error Creating ILMs
Error Creating ILMs
Sib5Instance = NULL
Error Creating ILMs
Unknown RRC State(%d)
CUPHY_PCH_RESOURCES_CONFIG_REQ = NULL
CUMAC_CONFIG_RB_REQ = NULL
CURLC_CONFIG_REQ = NULL
Error going to WAITCOMMONCHANNELSCONFIGCNF
PhyPchResConfig FAIL
PCH Resources Flag = TRUE
Failure sending msg to CnxMgr
Error going to READYFORCONFIGREQ
ProcessInitialAccessFachResourcesMsg FAIL
Removing SysInfo of [UARFCN:%d, PSC:%d] from ServingCellSysInfoCache because SIB 5/6 has wrong configuration
CnfMsg is NULL
ProcessFachResourcesReleaseMsg FAIL
Sib5Instance = NULL
Error Creating ILMs
CnxMgrIdleInstId is NULL
Error Creating BG_PCH ILMs
FACH & RACH ILM population successful
PCH Configured Flag
[ECELL_FACH] CUPHY_HSDSCH_COMMON_CONFIG_REQ = NULL
CUPHY_FACH_RESOURCES_CONFIG_REQ = NULL
CUPHY_RACH_RESOURCES_CONFIG_REQ = NULL
CUPHY_BG_PCH_RESOURCES_CONFIG_REQ = NULL
IsBgPchResourcesNeeded = %d, ResourceMgr_p->BgPchResourcesPresentFlag= %d
Error going to WAITCOMMONCHANNELSCONFIGCNF
Error going to WAITPCHRESRELCNF
PCH Resources Flag = FALSE
ProcessFachResourcesReleaseMsg FAIL
CnfMsg is NULL
ProcessFachResourcesReleaseMsg FAIL
TimerExpiryStatus = %d
FachResourcesPresentFlag %d
[ECELL_FACH] HsDschCmnResPresentFlag %d
SibInstance = NULL
Error Creating ILMs
CnxMgrInstId = NULL
BgPchResource is needed
Error Creating BG_PCH ILMs
BgPchResource is not needed
Error going to WAITPCHRESRELCNF
Error going to WAITPCHRESRELCNF
[ECELL_FACH] Error going to WAITHSDSCHCOMMONRACHRELCNF
CUPHY_FACH_RESOURCES_CONFIG_REQ = NULL
[ECELL_FACH] CUPHY_HSDSCH_COMMON_CONFIG_REQ = NULL
CUPHY_RACH_RESOURCES_CONFIG_REQ = NULL
CUPHY_BG_PCH_RESOURCES_CONFIG_REQ = NULL
Error going to READYFORCONFIGREQ
Error going to READYFORCONFIGREQ
ProcessFachResourcesAndLayersMsg FAIL
Removing SysInfo of [UARFCN:%d, PSC:%d] from ServingCellSysInfoCache because SIB 5/6 has wrong configuration
SendConftoCnxMngr FAIL
TimerExpiryStatus = %d
ILMInstId is NULL
Sib5Instance = NULL
Error Creating ILMs
BgPchResource is needed
Error Creating BG_PCH ILMs
BgPchResource is not needed
CUPHY_FACH_RESOURCES_CONFIG_REQ = NULL
[ECELL_FACH] CUPHY_HSDSCH_COMMON_CONFIG_REQ = NULL
CUPHY_RACH_RESOURCES_CONFIG_REQ = NULL
CUPHY_BG_PCH_RESOURCES_CONFIG_REQ = NULL
Error going to WAITRESANDLYRSRACHFACHCNF
CTCH Resources Flag = FALSE
PCH Resources Flag = FALSE
Error going to WAITPHYSHAREDRESRELCNF
CnfMsgHeaderPtr is NULL
Failure sending msg to CnxMgr
Error going to READYFORCONFIGREQ
RecalcStartMsg is NULL
SendInternalMsgSingleton FAIL
rrc_PostNewState FAIL
Releasing CTCH
Error going to WAITPHYSHAREDRESRELCNF
Error going to WAITFORPHYINITCNF
FACH Resources Flag = FALSE
[ECELL_FACH] HsDschCmnResPresentFlag = FALSE
PCH Resources Flag = FALSE
BG_PCH Resources Flag = FALSE
CTCH Resources Flag = FALSE
rrc_PostNewState FAIL
ProcessCompleteRelDedRes FAIL
CnfMsgHeaderPtr is NULL
Failure sending msg to CnxMgr
DCH Resources Flag = FALSE
ConfigDBMgr: CreateReleaseDedicatedResources FAIL
IlmPtr is NULL
CPC IlmPtr is NULL
HS-DSCH IlmPtr is NULL
E-DCH IlmPtr is NULL
Error going to WAITPHYDEDICATEDRESRELCNF
RecalcStartMsg is NULL
SendInternalMsgSingleton FAIL
Error going to WAITFORSTARTRECALCINTERRAT
DCH Resources Flag = FALSE
ProcessCompleteRelConnAndSharedRes FAIL
CTCH Resources Flag = FALSE
CnfMsgHeaderPtr = NULL
Failure sending msg to CnxMgr
Error going to READYFORCONFIGREQ
Error going to WAITPHYSHAREDRESRELCNF
SendInternalMsgSingleton FAIL
rrc_PostNewState FAIL
ProcessCompleteRelConnAndDedRes FAIL
CnxMgr sent Dedicated Release when FACH Configured
CnxMgr sent Dedicated Release when HSDSCH COMMON Configured
No FACH or DCH Resources for UPHY Configured
SendInternalMsgSingleton FAIL
Error going to WAITPHYDEDICATEDRESRELCNF
CnfMsgHeaderPtr = NULL
Failure sending msg to CnxMgr
Error going to READYFORCONFIGREQ
Error going to WAITPHYSHAREDRESRELCNF
DCH Resources Flag = TRUE
Error sending msg to ResMgrPHY
Error going to WAITFORRESTOREPHYMACCONFIGCNF
Sib5Instance = NULL
Error Creating ILMs
IlmSetPtr is NULL
CUPHY_PCH_RESOURCES_CONFIG_REQ = NULL
Error going to WAITCOMMONCHANNELSCONFIGCNF
Sib5Instance = NULL
Error Creating ILMs
CUPHY_FACH_RESOURCES_CONFIG_REQ = NULL
[ECELL_FACH] CUPHY_HSDSCH_COMMON_CONFIG_REQ = NULL
CUPHY_RACH_RESOURCES_CONFIG_REQ = NULL
Error going to WAITRESUMEFACHRESCNF
IntMsgInstPtr is NULL
IntMsgInstPtr is NULL
IntMsgInstPtr is NULL
ProcessInitialSib7message FAIL
ProcessSubsequentSib7message FAIL
rrc_SIB7_getUlInterference FAIL
rrc_SIB7_getPersistanceLevelType6 FAIL
Sib5InstanceId is NULL
rrc_SIB7_getPersistanceLevelType5 FAIL
CreateAndSendSib7Ilms FAIL
rrc_SIB7_createIlms FAIL
IlmSetInst is NULL
rrc_SIB7_getUlInterference FAIL
rrc_SIB7_getPersistanceLevelType6 FAIL
Sib5InstanceId is NULL
rrc_SIB7_getPersistanceLevelType5 FAIL
rrc_SIB7_createIlms FAIL
Wait for Signaling Grant to do Rollback
WAITFORPHYUMTSRATMODECNF transition FAIL
NonUmtsRatReq Called in Connected & NonUmtsRatReq already Sent in Presuspend Sate
CnfMsgHeaderPtr is NULL
SendInternalMsgSingleton FAIL
Post READYFORCONFIGREQ FAIL
SendInternalMsgSingleton FAIL
WAITFORPHYNONUMTSRATMODECNF transition FAIL
CnfMsgHeaderPtr is NULL
Failure sending msg to CnxMgr
CnfMsgHeaderPtr is NULL
Failure sending msg to CbsMgr
Failure sending msg to SysInfoMgr
Unrecoverable Reset Not Handled in PCH/Pending PCH State
rrc_PostNewState FAIL
ProcessUnRecoverableError FAIL
UnrecoverableReset :NfreqSettingReceived set to FALSE
ILMMsgBufPtr is NULL
SendInternalMsgSingleton FAIL
Unrecoverable Error sent to CnxMgrConn
ILMMsgBufPtr is NULL
SendInternalMsgSingleton FAIL
Unrecoverable Error sent to CnxMgrConn
ProcessUnRecoverableError() procedure started
Error going to WAITDCHRESRELCNF
ProcessUnRecoverableErrorAfterRelease() started
TimerExpiryStatus = %d
T314: %d, T315: %d
T314RBAssociation: %d, T315RBAssociation: %d
rrc_PostNewState FAIL
Inform to CnxMgr abt T314 expiry since T314 = 0: CS
Inform to CnxMgr abt T314 expiry: PS
T315 Start Failed
T315 started (TmId=%d)
T314 Start Failed
T314 started (TmId=%d)
Inform to CnxMgr abt T315 expiry since T315 = 0: CS
Inform to CnxMgr abt T315 expiry since T315 = 0: PS
T315 Start Failed
T315 started (TmId=%d)
CreateAndSendRollbackMsgsForFach FAIL
Error posting T314ANDT315RUNNING
Transition to T314ANDT315RUNNING
Error posting T314RUNNING
Transition to T314RUNNING
Error posting T315RUNNING
Transition to T315RUNNING
T314 & T315 Not started
Error posting READYFORCONFIGREQ
Transition to READYFORCONFIGREQ
TimerExpiryStatus = %d
DefaultState_ReleaseConnecteModeDuringSelectingCell() procedure started
ProcessRelConnDuringSelectingCell FAIL
BCH will be maintained
SendInternalMsgSingleton FAIL
CnfMsgHeaderPtr = NULL
Failure sending msg to CnxMgr
Error going to READYFORCONFIGREQ
Error going to WAITPHYSHAREDRESRELCNF
Wait for Signaling Grant to do Rollback
WAITFORPHYNONUMTSRATMODECNF transition FAIL
WAITFORPHYNONUMTSRATMODECNF transition FAIL
Releasing CTCH
Error going to WAITPHYSHAREDRESRELCNF
Error going to WAITFORPHYINITCNF
FACH Resources Flag = FALSE
[ECELL_FACH] HsDschCmnResPresentFlag = FALSE
PCH Resources Flag = FALSE
BG_PCH Resources Flag = FALSE
SendInternalMsgSingleton FAIL
Error going to WAITPHYSHAREDRESRELCNF
CTCH Resources Flag already = TRUE
Dedicated Resource is not yet released
Failure sending msg to CbsMgr
Failure sending msg to CbsMgr
Error going to WAITPHYSHAREDRESRELCNF
ProcessCtchResourcesMsg FAIL
Failure sending msg to CnxMgr
PCH not Configured: Failure sending msg to CbsMgr
Failure sending msg to CbsMgr
Sib5Instance = NULL
Error Creating ILMs
Incompatible RRC State(%d) with CTCH
CUPHY_PCH_RESOURCES_CONFIG_REQ = NULL
CUMAC_CONFIG_RB_REQ = NULL
CURLC_CONFIG_REQ = NULL
Error going to WAITCOMMONCHANNELSCONFIGCNF
Error going to WAITPHYSHAREDRESRELCNF
CTCH already released
Failure sending msg to CnxMgr
Error createIlms
CommonGenerateAndSendConfs FAIL
CTPHY_ULPHYCH_CNTRL_REQ = NULL
Asn_uplinkPhysicalChannelControl not received!!
WAITFORPHYNONUMTSRATMODECNF transition FAIL
[ECELL_FACH] ResourceMgr_p->BgPchResConfRequested = %d
[ECELL_FACH] Set HsDschCmnResPresentFlag = TRUE
[ECELL_FACH] CUMAC_CONFIG_UEID_REQ = NULL
[ECELL_FACH] CUMAC_CONFIG_MACEHS_HSDSCH_REQ = NULL
[ECELL_FACH] CUMAC_CONFIG_RACH_REQ = NULL
[ECELL_FACH] CUMAC_CONFIG_RB_REQ = NULL
[ECELL_FACH] CURLC_CONFIG_REQ = NULL
[ECELL_FACH] IlmSetPtr is NULL
[ECELL_FACH] Failure sending msg to CnxMgr
[ECELL_FACH] Unconditional NonUmtsRatReq
[ECELL_FACH] Error going to READYFORCONFIGREQ
[ECELL_FACH] CnfMsgHeaderPtr is NULL
[ECELL_FACH] Error going to READYFORCONFIGREQ
[ECELL_FACH] Error going to WAITCOMPLETECONFIG
Need to wait for BgPchResConfCnf
FACH Resources Flag = TRUE
CUMAC_CONFIG_RACH_REQ = NULL
CUMAC_CONFIG_RB_REQ = NULL
CURLC_CONFIG_REQ = NULL
IlmSetPtr is NULL
Failure sending msg to CnxMgr
Unconditional NonUmtsRatReq
Error going to READYFORCONFIGREQ
CnfMsgHeaderPtr is NULL
Error going to READYFORCONFIGREQ
Error going to WAITCOMPLETECONFIG
ResourceMgr_p->BgPchResRelRequested = %d
CUPHY_FACH_RESOURCES_CONFIG_REQ = NULL
[ECELL_FACH] CUPHY_HSDSCH_COMMON_CONFIG_REQ = NULL
CUPHY_RACH_RESOURCES_CONFIG_REQ = NULL
CUPHY_BG_PCH_RESOURCES_CONFIG_REQ = NULL
CnfMsgHeaderPtr is NULL
Failure sending msg to CnxMgr
Error going to READYFORCONFIGREQ
BgPchResReleaseCnf: Negative Cnf
BgPchResConfigCnf: Negative Cnf
PhyCTCHResConfig FAIL
CTCH Resources Flag = TRUE
Failure sending msg to CnxMgr
Error going to READYFORCONFIGREQ
WAITFORPHYNONUMTSRATMODECNF transition FAIL
Need to wait for BgPchResConfigCnf or BgPchResReleaseCnf
SendConftoCnxMngr FAIL
Error going to WAITPHYSHAREDRESRELCNF
FACH Resources Flag = TRUE
[ECELL_FACH] HsDschCmnResCfgRequested = TRUE
ProcessRcvdConfigMsg FAIL
IlmSetPtr == NULL
[ECELL_FACH] CUMAC_CONFIG_UEID_REQ = NULL
[ECELL_FACH] CUMAC_CONFIG_MACEHS_HSDSCH_REQ = NULL
CUMAC_CONFIG_RACH_REQ = NULL
CUMAC_CONFIG_RB_REQ = NULL
CURLC_CONFIG_REQ = NULL
BgPchResConfigCnf: Negative Cnf
BgPchResConfigCnf: Negative Cnf
ProcessRLFailure FAIL
ProcessRLFailureAfterRelease FAIL
ILMMsgBufPtr is NULL
SendInternalMsgSingleton FAIL
ProcessCompleteRelConnAndSharedRes FAIL
ProcessCompleteRelConnAndDedRes FAIL
CreateAndProcessIlmSetForLayersMsg FAIL
CreateAndSendRabRollbackMessage FAIL
ProcessRLFailure FAIL
ProcessRLFailureAfterRelease FAIL
ILMMsgBufPtr is NULL
SendInternalMsgSingleton FAIL
rrc_BoundRabm_RemoveAllTids FAIL
SendInternalMsgSingleton FAIL
ProcessCompleteRelConnAndSharedRes FAIL
rrc_BoundRabm_RemoveAllTids FAIL
SendInternalMsgSingleton FAIL
ProcessCompleteRelConnAndDedRes FAIL
SendConftoCnxMngr FAIL
IlmCountCheckAfterRabm FAIL
rrc_BoundUphy_RemoveAllTids FAIL
SendInternalMsgSingleton FAIL
ProcessCompleteRelConnAndSharedRes FAIL
rrc_BoundUphy_RemoveAllTids FAIL
SendInternalMsgSingleton FAIL
ProcessCompleteRelConnAndDedRes FAIL
IlmCountCheckAfterPhy FAIL
CommonGenerateAndSendConfs FAIL
CommonGenerateAndSendConfs FAIL
CreateAndSendRabRollbackMessage FAIL
ProcessRLFailure FAIL
ProcessRLFailureAfterRelease FAIL
ILMMsgBufPtr is NULL
SendInternalMsgSingleton FAIL
rrc_BoundUphy_RemoveAllTids FAIL
SendInternalMsgSingleton FAIL
rrc_BoundUmac_RemoveAllTids FAIL
SendInternalMsgSingleton FAIL
rrc_PostNewState FAIL
FACH Resources Flag = FALSE
[ECELL_FACH] HsDschCmnResPresentFlag = FALSE
PCH Resources Flag = FALSE
BG_PCH Resources Flag = FALSE
rrc_BoundUphy_RemoveAllTids FAIL
SendInternalMsgSingleton FAIL
rrc_BoundUmac_RemoveAllTids FAIL
SendInternalMsgSingleton FAIL
ProcessCompleteRelConnAndSharedRes FAIL
rrc_BoundUphy_RemoveAllTids FAIL
SendInternalMsgSingleton FAIL
rrc_BoundUmac_RemoveAllTids FAIL
SendInternalMsgSingleton FAIL
ProcessCompleteRelConnAndDedRes FAIL
WAITFORPHYNONUMTSRATMODECNF transition FAIL
ProcessPhyMacConfigComplete FAIL
ProcessPhyMacConfigComplete FAIL
rrc_BoundUrlc_RemoveAllTids FAIL
SendInternalMsgSingleton FAIL
ProcessCompleteRelConnAndSharedRes FAIL
rrc_BoundUrlc_RemoveAllTids FAIL
SendInternalMsgSingleton FAIL
ProcessCompleteRelConnAndDedRes FAIL
SendConftoCnxMngr FAIL
IlmCountCheckAfterRlc FAIL
SendConftoCnxMngr FAIL
Modify /ReEst ILM is Present
RBID %d Match Found in Modify/ReEst ILM : Ignore UnrecoverableReset
RBID %d Match Found in Modify/ReEst ILM : Ignore UnrecoverableReset
No Modify/ReEst ILM is Present
rrc_BoundUrlc_RemoveAllTids FAIL
SendInternalMsgSingleton FAIL
ProcessCompleteRelConnAndSharedRes FAIL
rrc_BoundUrlc_RemoveAllTids FAIL
SendInternalMsgSingleton FAIL
ProcessCompleteRelConnAndDedRes FAIL
IlmCountCheckAfterPdcp FAIL
SendConftoCnxMngr FAIL
rrc_BoundRabm_RemoveAllTids FAIL
SendInternalMsgSingleton FAIL
ProcessCompleteRelConnAndSharedRes FAIL
rrc_BoundRabm_RemoveAllTids FAIL
SendInternalMsgSingleton FAIL
ProcessCompleteRelConnAndDedRes FAIL
CheckForSecurityAndRelocation FAIL
CheckAndProcessSrnsInfo FAIL
CheckAndProcessSrnsInfo FAIL
ProcessCompleteRelConnAndSharedRes FAIL
ProcessCompleteRelConnAndDedRes FAIL
Generate MAC Config FAIL
Send Config message to MAC FAIL
SendConftoCnxMngr FAIL
SendConftoCnxMngr FAIL
LastReceivedEvent %d, DchResRelRequested = %d, HsdschResRelRequested %d
EdchResRelRequested = %d, CpcResRelRequested %d
All Cnf are received
ILMMsgBufPtr is NULL
SendInternalMsgSingleton FAIL
CnfMsgHeaderPtr = NULL
Failure sending msg to CnxMgr
Error going to READYFORCONFIGREQ
All Cnf are received
CnfMsgHeaderPtr = NULL
Failure sending msg to CnxMgr
Error going to READYFORCONFIGREQ
All Cnf are received
ILMMsgBufPtr is NULL
SendInternalMsgSingleton FAIL
rrc_PostNewState FAIL
Invalid LastReceivedEvent(%d)
PhyHsdschResRelCnf is received
All Cnf are received
ILMMsgBufPtr is NULL
SendInternalMsgSingleton FAIL
CnfMsgHeaderPtr = NULL
Failure sending msg to Connection Manager
Error going to READYFORCONFIGREQ
All Cnf are received
CnfMsgHeaderPtr = NULL
Failure sending msg to CnxMgr
Error going to READYFORCONFIGREQ
All Cnf are received
ILMMsgBufPtr is NULL
SendInternalMsgSingleton FAIL
rrc_PostNewState FAIL
Invalid LastReceivedEvent(%d)
All Cnf are received
ILMMsgBufPtr is NULL
SendInternalMsgSingleton FAIL
CnfMsgHeaderPtr = NULL
Failure sending msg to CnxMgr
Error going to READYFORCONFIGREQ
All Cnf are received
CnfMsgHeaderPtr = NULL
Failure sending msg to CnxMgr
Error going to READYFORCONFIGREQ
All Cnf are received
ILMMsgBufPtr is NULL
SendInternalMsgSingleton FAIL
rrc_PostNewState FAIL
Invalid LastReceivedEvent(%d)
All Cnf are received
ILMMsgBufPtr is NULL
SendInternalMsgSingleton FAIL
CnfMsgHeaderPtr = NULL
Failure sending msg to CnxMgr
Error going to READYFORCONFIGREQ
All Cnf are received
CnfMsgHeaderPtr = NULL
Failure sending msg to CnxMgr
Error going to READYFORCONFIGREQ
All Cnf are received
ILMMsgBufPtr is NULL
SendInternalMsgSingleton FAIL
rrc_PostNewState FAIL
Invalid LastReceivedEvent(%d)
WAITFORPHYNONUMTSRATMODECNF transition FAIL
Error going to READYFORCONFIGREQ
Invalid LastReceivedEvent(%d)
All Cnf are received
Failure sending msg to CnxMgr
Error going to READYFORCONFIGREQ
All Cnf are received
All Cnf are received
Error going to READYFORCONFIGREQ
ProcessRcvdConfigMsg FAIL
DCH Resources Flag = TRUE
All Cnf are received
Error going to READYFORCONFIGREQ
ProcessPchResourcesMsg FAIL
All Cnf are received
CnfMsgHeaderPtr = NULL
Failure sending msg to CnxMgr
Error going to state READYFORCONFIGREQ
All Cnf are received
ILMMsgBufPtr is NULL
SendInternalMsgSingleton FAIL
rrc_PostNewState FAIL
All Cnf are received
CnfMsgHeaderPtr = NULL
Failure sending msg to CnxMgr
Failure sending msg to CnxMgr
Error going to READYFORCONFIGREQ
All Cnf are received
CommonGenerateAndSendConfs FAIL
Error going to READYFORCONFIGREQ
Invalid LastReceivedEvent(%d)
FachResourcesPresentFlag %d
[ECELL_FACH] HsDschCmnResPresentFlag %d
SibInstance = NULL
Error Creating ILMs
Error going to WAITPCHRESRELCNF
CUPHY_FACH_RESOURCES_CONFIG_REQ = NULL
[ECELL_FACH] CUPHY_HSDSCH_COMMON_CONFIG_REQ = NULL
CUPHY_RACH_RESOURCES_CONFIG_REQ = NULL
Error going to READYFORCONFIGREQ
Error going to READYFORCONFIGREQ
[ECELL_FACH] HsDschCmnResRelRequested TRUE
All Cnf are received
Failure sending msg to CnxMgr
Error going to READYFORCONFIGREQ
All Cnf are received
All Cnf are received
Error going to READYFORCONFIGREQ
ProcessRcvdConfigMsg FAIL
DCH Resources Flag = TRUE
All Cnf are received
Error going to READYFORCONFIGREQ
ProcessPchResourcesMsg() FAIL
All Cnf are received
CnfMsgHeaderPtr is NULL
Failure sending msg to CnxMgr
Error going to READYFORCONFIGREQ
All Cnf are received
ILMMsgBufPtr is NULL
SendInternalMsgSingleton FAIL
rrc_PostNewState FAIL
All Cnf are received
CnfMsgHeaderPtr = NULL
Failure sending msg to CnxMgr
Error going to READYFORCONFIGREQ
All Cnf are received
CommonGenerateAndSendConfs FAIL
Error going to READYFORCONFIGREQ
Invalid LastReceivedEvent(%d)
All Cnf are received
Failure sending msg to CnxMgr
Error going to READYFORCONFIGREQ
CnfMsgHeaderPtr is NULL
Failure sending msg to CbsMgr
All Cnf are received
All Cnf are received
Error going to READYFORCONFIGREQ
ProcessRcvdConfigMsg FAIL
DCH Resources Flag = TRUE
All Cnf are received
CnfMsgHeaderPtr is NULL
Failure sending msg to CbsMgr
Error going to READYFORCONFIGREQ
ProcessPchResourcesMsg FAIL
All Cnf are received
CnfMsgHeaderPtr = NULL
Failure sending msg to CnxMgr
Error going to READYFORCONFIGREQ
All Cnf are received
ILMMsgBufPtr is NULL
SendInternalMsgSingleton FAIL
rrc_PostNewState FAIL
All Cnf are received
CnfMsgHeaderPtr = NULL
Failure sending msg to CnxMgr
Error going toREADYFORCONFIGREQ
Invalid LastReceivedEvent(%d)
BgPchResReleaseCnf: Negative Cnf
[ECELL_FACH] All Cnf are received
Failure sending msg to CnxMgr
[ECELL_FACH] Error going to READYFORCONFIGREQ
[ECELL_FACH] All Cnf are received
[ECELL_FACH] All Cnf are received
[ECELL_FACH] Error going to READYFORCONFIGREQ
[ECELL_FACH] ProcessPchResourcesMsg() FAIL
[ECELL_FACH] All Cnf are received
[ECELL_FACH] CnfMsgHeaderPtr is NULL
[ECELL_FACH] Failure sending msg to CnxMgr
[ECELL_FACH] Error going to READYFORCONFIGREQ
[ECELL_FACH] All Cnf are received
[ECELL_FACH] ILMMsgBufPtr is NULL
[ECELL_FACH] SendInternalMsgSingleton FAIL
[ECELL_FACH] rrc_PostNewState FAIL
[ECELL_FACH] All Cnf are received
[ECELL_FACH] CnfMsgHeaderPtr = NULL
[ECELL_FACH] Failure sending msg to CnxMgr
[ECELL_FACH] Error going to READYFORCONFIGREQ
All Cnf are received
CommonGenerateAndSendConfs FAIL
Error going to READYFORCONFIGREQ
Failure sending msg to CnxMgr
rrc_PostNewState FAIL
PCH Resources Flag = FALSE
Error going to READYFORCONFIGREQ
[ECELL_FACH] CUPHY_HSDSCH_COMMON_CONFIG_REQ = NULL
CUPHY_FACH_RESOURCES_CONFIG_REQ = NULL
CUPHY_RACH_RESOURCES_CONFIG_REQ = NULL
CUPHY_BG_PCH_RESOURCES_CONFIG_REQ = NULL
ResourceMgr_p->BgPchResourcesPresentFlag= %d
Error going to WAITCOMMONCHANNELSCONFIGCNF
CnfMsgHeaderPtr is NULL
Failure sending msg to CbsMgr
Failure sending msg to CxnMgr
PCH Resources Flag = FALSE
CUPHY_FACH_RESOURCES_CONFIG_REQ = NULL
CUPHY_RACH_RESOURCES_CONFIG_REQ = NULL
CUPHY_BG_PCH_RESOURCES_CONFIG_REQ = NULL
Error going to WAITCOMMONCHANNELSCONFIGCNF
TimerExpiryStatus = %d
ILMMsgBufPtr is NULL
SendInternalMsgSingleton FAIL
rrc_PostNewState FAIL
ProcessFachResourcesReleaseMsg FAIL
ProcessCompleteRelConnAndSharedRes FAIL
ProcessCompleteRelConnAndDedRes FAIL
CompleteDchFachPchConfig FAIL
Post READYFORCONFIGREQ FAIL
ConfigRLCEntitiesAndInformSecMgr FAIL
ReEstablishAllAmUmRBsExceptRB2 FAIL
CnfMsgHeaderPtr is NULL
SendInternalMsgSingleton FAIL
RlcReestablishReq is NULL
SrnsRelocated = %d
ReEstablishAllAmUmRBsExceptRB2: CountSRB = %d , CountCsDRB = %d
ReEstablishAllAmUmRBsExceptRB2: NumofRbs > RRC_MAX_RBs
ReEstablishAllAmUmRBsExceptRB2: CountSRB = %d , index = %d
ReEstablishAllAmUmRBsExceptRB2: CountSRB = %d , CountCsDRB = %d , index = %d
Post WAITFORRLCREESTABLISHCNF FAIL
CompleteDchFachPchConfig FAIL
CompleteDchFachPchConfig FAIL
ProcessInitialSib7message FAIL
ProcessSubsequentSib7message FAIL
ILMMsgBufPtr is NULL
SendInternalMsgSingleton FAIL
Unrecoverable Error sent to CnxMgrConn
ILMMsgBufPtr is NULL
SendInternalMsgSingleton FAIL
Unrecoverable Error sent to CnxMgrConn
ProcessCompleteRelConnAndDedRes FAIL
rrc_PostNewState FAIL
ProcessCompleteRelConnAndSharedRes FAIL
ProcessCompleteRelConnAndDedRes FAIL
IntMsgInstPtr is NULL
SendInternalMsgSingleton FAIL
rrc_PostNewState FAIL
Required RB ID is not present
Backup for Rollback : DOFF(%d), RefCell(%d)
Backup for Rollback (L1C) : PSC(%d), FrameOffset(%d)
Backup for Rollback (RRC) : PSC(%d), FrameOffset(%d)
ConvertActTmToPhy = %d
SendInternalMsgSingleton FAIL
rrc_PostNewState FAIL
NonUmtsRatReq received while waiting for PhyInitCnf => Set IsNonUmtsRatReqPending to TRUE
CnfMsgHdrPtr = NULL
Failure sending msg to CnxMgr
Error going to READYFORCONFIGREQ
WaitForPhyInitCnf_PhyUmtsInitCNF: IsNonUmtsRatReqPending is TRUE => Trigger NonUmtsRatReq
[ResMgr] WaitForPhyInitCnf_PhySecondaryHsdschResRelCnf() procedure started
DCH Not Configured
ProcessRelDedRes FAIL
Error going to WAITDCHRESRELCNF
ProcessRLFailure FAIL
DCH Resources Flag = TRUE
Error going to READYFORCONFIGREQ
SendInternalMsgSingleton FAIL
T314 Stop Failed.
ProcessRcvdConfigMsg FAIL
T314 Stop Failed.
ProcessRcvdConfigMsg FAIL
T314 Stop Failed.
ProcessFachLayersFromFachMsg FAIL
T314 Stop Failed.
ProcessRcvdConfigMsg FAIL
T314 Stop Failed.
Error going to WAITPHYSHAREDRESRELCNF
ProcessRcvdConfigMsg FAIL
DCH Resources Flag = TRUE
ProcessFachResourcesReleaseMsg FAIL
ProcessFachResourcesAndLayersMsg FAIL
rrc_PostNewState FAIL
FACH Resources Flag = FALSE
[ECELL_FACH] HsDschCmnResPresentFlag = FALSE
PCH Resources Flag = FALSE
BG_PCH Resources Flag = FALSE
T314 Stop Failed.
ProcessCompleteRelConnAndSharedRes FAIL
T314 Stop Failed.
ProcessCompleteRelConnAndDedRes FAIL
ProcessInitialSib7message FAIL
ProcessSubsequentSib7message FAIL
Wait for Signaling Grant to do Rollback
CnfMsgHeaderPtr is NULL
SendInternalMsgSingleton FAIL
CnfMsgHeaderPtr is NULL
SendInternalMsgSingleton FAIL
CnfMsgHeaderPtr is NULL
Failure sending msg to CnxMgr
CnfMsgHeaderPtr is NULL
Failure sending msg to CbsMgr
CnfMsgHeaderPtr is NULL
SendInternalMsgSingleton FAIL
PreSuspendedState = TRUE
GenMsg is NULL
CnxMgrMobility in WAITINGFORCOMPLETETOBUILDMSG
Failure to post T314ANDT315EXPIRED
TimerExpiryStatus = %d
T314/T315 expired, Transition to IDLE
Terminate Request not handled in %d state
T315 Stop Failed
ProcessRcvdConfigMsg FAIL
T315 Stop Failed
ProcessRcvdConfigMsg FAIL
T315 Stop Failed
ProcessFachLayersFromFachMsg FAIL
T315 Stop Failed
ProcessRcvdConfigMsg FAIL
T315 Stop Failed
Error going to WAITPHYSHAREDRESRELCNF
ProcessRcvdConfigMsg FAIL
DCH Resources Flag = TRUE
ProcessFachResourcesReleaseMsg FAIL
ProcessFachResourcesAndLayersMsg FAIL
rrc_PostNewState FAIL
FACH Resources Flag = FALSE
[ECELL_FACH] HsDschCmnResPresentFlag = FALSE
PCH Resources Flag = FALSE
BG_PCH Resources Flag = FALSE
T315 Stop Failed
ProcessCompleteRelConnAndSharedRes FAIL
T315 Stop Failed
ProcessCompleteRelConnAndDedRes FAIL
Wait for Signaling Grant to do Rollback
CnfMsgHeaderPtr is NULL
SendInternalMsgSingleton FAIL
CnfMsgHeaderPtr is NULL
SendInternalMsgSingleton FAIL
CnfMsgHeaderPtr is NULL
Failure sending msg to CnxMgr
CnfMsgHeaderPtr is NULL
Failure sending msg to CbsMgr
CnfMsgHeaderPtr is NULL
SendInternalMsgSingleton FAIL
PreSuspendedState = TRUE
GenMsg is NULL
CnxMgrMobility in WAITINGFORCOMPLETETOBUILDMSG
Failure to post T314ANDT315EXPIRED
TimerExpiryStatus = %d
T314 Stop Failed
T315 Stop Failed
ProcessRcvdConfigMsg FAIL
T314 Stop Failed
T315 Stop Failed
ProcessRcvdConfigMsg FAIL
T314 Stop Failed
T315 Stop Failed
ProcessFachLayersFromFachMsg FAIL
T314 Stop Failed
T315 Stop Failed
ProcessRcvdConfigMsg FAIL
T314 Stop Failed
T315 Stop Failed
Error going to WAITPHYSHAREDRESRELCNF
ProcessRcvdConfigMsg FAIL
DCH Resources Flag = TRUE
ProcessFachResourcesReleaseMsg FAIL
ProcessFachResourcesAndLayersMsg FAIL
rrc_PostNewState FAIL
FACH Resources Flag = FALSE
[ECELL_FACH] HsDschCmnResPresentFlag = FALSE
PCH Resources Flag = FALSE
BG_PCH Resources Flag = FALSE
T314 Stop Failed
T315 Stop Failed
ProcessCompleteRelConnAndSharedRes FAIL
T314 Stop Failed
T315 Stop Failed
ProcessCompleteRelConnAndDedRes FAIL
Wait for Signaling Grant to do Rollback
CnfMsgHeaderPtr is NULL
SendInternalMsgSingleton FAIL
CnfMsgHeaderPtr is NULL
SendInternalMsgSingleton FAIL
CnfMsgHeaderPtr is NULL
Failure sending msg to CnxMgr
CnfMsgHeaderPtr is NULL
Failure sending msg to CbsMgr
CnfMsgHeaderPtr is NULL
SendInternalMsgSingleton FAIL
Inform to CnxMgr abt T314 expiry: CS
Inform to CnxMgr abt T314 expiry: PS
Failure to post T315RUNNINGT314EXPIRED
TimerExpiryStatus = %d
Inform to CnxMgr abt T315 expiry
Inform to CnxMgr abt T315 expiry
Failure to post T314RUNNINGT315EXPIRED
TimerExpiryStatus = %d
T314 Stop Failed
ProcessRcvdConfigMsg FAIL
T314 Stop Failed
ProcessRcvdConfigMsg FAIL
T314 Stop Failed
ProcessFachLayersFromFachMsg FAIL
T314 Stop Failed
ProcessRcvdConfigMsg FAIL
T314 Stop Failed
Error going to WAITPHYSHAREDRESRELCNF
ProcessRcvdConfigMsg FAIL
DCH Resources Flag = TRUE
ProcessFachResourcesReleaseMsg FAIL
ProcessFachResourcesAndLayersMsg FAIL
rrc_PostNewState FAIL
FACH Resources Flag = FALSE
[ECELL_FACH] HsDschCmnResPresentFlag = FALSE
PCH Resources Flag = FALSE
BG_PCH Resources Flag = FALSE
T314 Stop Failed
ProcessCompleteRelConnAndSharedRes FAIL
T314 Stop Failed
ProcessCompleteRelConnAndDedRes FAIL
Wait for Signaling Grant to do Rollback
CnfMsgHeaderPtr is NULL
SendInternalMsgSingleton FAIL
CnfMsgHeaderPtr is NULL
SendInternalMsgSingleton FAIL
CnfMsgHeaderPtr is NULL
Failure sending msg to CnxMgr
CnfMsgHeaderPtr is NULL
Failure sending msg to CbsMgr
CnfMsgHeaderPtr is NULL
SendInternalMsgSingleton FAIL
Inform to CnxMgr abt T315 expiry
Inform to CnxMgr abt T315 expiry
Post T314RUNNING FAIL
GenMsg is NULL
CnxMgrMobility in WAITINGFORCOMPLETETOBUILDMSG
Failure to post T314ANDT315EXPIRED
TimerExpiryStatus = %d
PreSuspendedState = TRUE
T315 Stop Failed
ProcessRcvdConfigMsg FAIL
T315 Stop Failed
ProcessRcvdConfigMsg FAIL
T315 Stop Failed
ProcessFachLayersFromFachMsg FAIL
T315 Stop Failed
ProcessRcvdConfigMsg FAIL
T315 Stop Failed
Error going to WAITPHYSHAREDRESRELCNF
ProcessRcvdConfigMsg FAIL
DCH Resources Flag = TRUE
ProcessFachResourcesReleaseMsg FAIL
ProcessFachResourcesAndLayersMsg FAIL
rrc_PostNewState FAIL
FACH Resources Flag = FALSE
[ECELL_FACH] HsDschCmnResPresentFlag = FALSE
PCH Resources Flag = FALSE
BG_PCH Resources Flag = FALSE
T315 Stop Failed
ProcessCompleteRelConnAndSharedRes FAIL
T315 Stop Failed
ProcessCompleteRelConnAndDedRes FAIL
Wait for Signaling Grant to do Rollback
CnfMsgHeaderPtr is NULL
SendInternalMsgSingleton FAIL
CnfMsgHeaderPtr is NULL
SendInternalMsgSingleton FAIL
CnfMsgHeaderPtr is NULL
Failure sending msg to CnxMgr
CnfMsgHeaderPtr is NULL
Failure sending msg to CbsMgr
CnfMsgHeaderPtr is NULL
SendInternalMsgSingleton FAIL
Inform to CnxMgr abt T314 expiry: CS
Inform to CnxMgr abt T314 expiry: PS
Post T315RUNNING FAIL
GenMsg is NULL
CnxMgrMobility in WAITINGFORCOMPLETETOBUILDMSG state
Failure to post T314ANDT315EXPIRED
TimerExpiryStatus = %d
PreSuspendedState = TRUE
ProcessRcvdConfigMsg FAIL
ProcessRcvdConfigMsg FAIL
ProcessFachLayersFromFachMsg FAIL
ProcessRcvdConfigMsg FAIL
Error going to WAITPHYSHAREDRESRELCNF
ProcessRcvdConfigMsg FAIL
DCH Resources Flag = TRUE
ProcessFachResourcesReleaseMsg FAIL
ProcessFachResourcesAndLayersMsg FAIL
RecalcStartMsg is NULL
SendInternalMsgSingleton FAIL
rrc_PostNewState FAIL
rrc_PostNewState() FAIL
FACH Resources Flag = FALSE
[ECELL_FACH] HsDschCmnResPresentFlag = FALSE
PCH Resources Flag = FALSE
BG_PCH Resources Flag = FALSE
ProcessCompleteRelConnAndSharedRes FAIL
ProcessCompleteRelConnAndDedRes FAIL
CnfMsgHeaderPtr is NULL
Failure sending msg to CnxMgr
CnfMsgHeaderPtr is NULL
Failure sending msg to CbsMgr
GenMsg is NULL
CnxMgrMobility in WAITINGFORCOMPLETETOBUILDMSG
CnfMsgHeaderPtr is NULL
SendInternalMsgSingleton FAIL
CnxMgrMsgPtr is NULL
send message to CnxMgr Failed
Post State READYFORCONFIGREQ FAIL
WAITFORPHYNONUMTSRATMODECNF transition FAIL
PHY Returned FAIL = %d
Need to wait for BgPchResConfigCnf
[ECELL_FACH] Set HsDschCmnResPresentFlag = TRUE
FACH Resources Flag = TRUE
[ECELL_FACH] CUMAC_CONFIG_UEID_REQ = NULL
[ECELL_FACH] CUMAC_CONFIG_MACEHS_HSDSCH_REQ = NULL
CUMAC_CONFIG_RACH_REQ = NULL
CUMAC_CONFIG_RB_REQ = NULL
CURLC_CONFIG_REQ = NULL
IlmSetPtr is NULL
Failure sending msg to CnxMgr
Unconditional NonUmtsRatReq
Error going to READYFORCONFIGREQ
CnfMsgHeaderPtr is NULL
PHY Returned FAIL = %d
BgPchResConfigCnf: Negative Cnf
PHY Returned FAIL = %d
[ECELL_FACH] HsDschCmnResPresentFlag = TRUE
SendInternalMsgSingleton FAIL
READYFORCONFIGREQ transition FAIL
FACH Resources Flag = TRUE
SendInternalMsgSingleton FAIL
READYFORCONFIGREQ transition FAIL
CnfMsgHeaderPtr is NULL
SendInternalMsgSingleton FAIL
Post READYFORCONFIGREQ FAIL
SendInternalMsgSingleton FAIL
Timer SRBDelayTimerId stopped
Error in stopping timer SRBDelayTimerId
Error in stopping timer SRBDelayTimerId
Error going to READYFORCONFIGREQ
CommonGenerateAndSendConfs FAIL
Error going to WAITCOMPLETECONFIGHANDOVER
Error going to WAITCOMPLETECONFIG
Error going to READYFORCONFIGREQ
CnfMsgHeaderPtr is NULL
SendInternalMsgSingleton FAIL
Post READYFORCONFIGREQ FAIL
CnfMsgHeaderPtr is NULL
SendInternalMsgSingleton FAIL
Post READYFORCONFIGREQ FAIL
SendInternalMsgSingleton FAIL
CnfMsgHeaderPtr is NULL
SendInternalMsgSingleton FAIL
Post READYFORCONFIGREQ FAIL
Dest Module is NONE
Need to wait for BgPchResReleaseCnf
CUPHY_FACH_RESOURCES_CONFIG_REQ = NULL
[ECELL_FACH] CUPHY_HSDSCH_COMMON_CONFIG_REQ = NULL
CUPHY_RACH_RESOURCES_CONFIG_REQ = NULL
CUPHY_BG_PCH_RESOURCES_CONFIG_REQ = NULL
Error going to READYFORCONFIGREQ
Error going to READYFORCONFIGREQ
CommonGenerateAndSendConfs FAIL
Error going to READYFORCONFIGREQ
BgPchResReleaseCnf is not expected
DCH Resources Flag = FALSE
HSDSCH Resources Flag = FALSE
EDCH Resources Flag = FALSE
No RelDedResHandler
ILMMsgBufPtr is NULL
SendInternalMsgSingleton FAIL
SendInternalMsgSingleton FAIL
SendConftoCnxMngr FAIL
Error going to READYFORCONFIGREQ
CommonGenerateAndSendConfs FAIL
ILMMsgBufPtr is NULL
SendInternalMsgSingleton FAIL
Unrecoverable Error Message sent to CnxMgrConn
Invalid RbId for Unrecoverable Error
CommonGenerateAndSendConfs FAIL
ProcessPhyNegativeCnf : No handler Function
SendConftoCnxMngr FAIL
CreateAndSendRollbackMsgsForFach FAIL
SendConftoCnxMngr FAIL
Invalid RelDedResHandler(%d)
BgPchResReleaseCnf is not expected
Need to wait for BgPchResReleaseCnf
[ECELL_FACH] CUPHY_FACH_RESOURCES_CONFIG_REQ = NULL
[ECELL_FACH] CUPHY_HSDSCH_COMMON_CONFIG_REQ = NULL
[ECELL_FACH] CUPHY_RACH_RESOURCES_CONFIG_REQ = NULL
[ECELL_FACH] CUPHY_BG_PCH_RESOURCES_CONFIG_REQ = NULL
[ECELL_FACH] Error going to READYFORCONFIGREQ
[ECELL_FACH] Error going to READYFORCONFIGREQ
CommonGenerateAndSendConfs FAIL
Error going to READYFORCONFIGREQ
LastReceivedMessage:(%d)
Error going to RESOURCEMGR_READYFORCONFIGREQ
ProcessRLFailure FAIL
ProcessRcvdConfigMsg FAIL
ProcessCompleteRelDedRes FAIL
ProcessCompleteRelConnAndDedRes FAIL
ProcessUnRecoverableError FAIL
T314 Stop Failed
T315 Stop Failed
Invalid DB Index
All ResMgr Resource Flags Cleared
