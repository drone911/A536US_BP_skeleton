init: SysInfoMgr initialization problem - couldn't register with boundary
init: SysInfoMgr initialization problem - couldn't do state initialisation
free: releasing BCH / PCCPCH
rrc_Class_SysInfoMgr_GetInstanceId: SysInfoMgr created at address: 0x%0.8x
tmp_bch is NULL or msg->payload.bchId != tmp_bch->trChId
CallbackBchConfigured: [error] - BCCHPAUSED transition failed
CallbackBchConfigured: [error] -NACK received
BcchPaused_Am_ResumeBcch: deleting activeReaderQ->reader 0x%0.8x
CallbackBchConfigured: [error] - WAITFORSUBSCRIPTION transition failed
CallbackBchConfigured: [success] - ACK received, bcchReleased = FALSE
MapExtMsgIdToIntMsgId: Unknown CUPHY solicited message %i received
MapExtMsgIdToIntMsgId: CTPHY solicited message %i received
MapExtMsgIdToIntMsgId: Unknown CTPHY solicited message %i received
MapExtMsgIdToIntMsgId: Layer %d has sent unexpecting solicited message %i
genMsg->pccpchInfo.cellParamId %d
genMsg->pccpchInfo.cellParamId = NULL
DBCHR : rrc_SysInfoMgr_priv_ModifyMIBSiDb
DBCHR: rrc_SysInfoMgr_priv_GetSegCountfromSiDB (From SchInfo)[%d]
DBCHR: rrc_SysInfoMgr_PopSchInfoFromSiDb
DBCHR: [%s]: SegCount Mismatch :SegmentCount (From SchInfo)[%d] , SegmentCount (From First Segment)[%d]
DBCHR: [%s]: SegCount:SegmentCount (From SchInfo)[%d] , SegmentCount (From First Segment)[%d]
DBCHR: [%s]: SegCount Mismatch :SegmentCount (From SchInfo)[%d] , SegmentCount (From First Segment)[%d]
DBCHR: [%s]: SegCount Mismatch:SegmentCount (From SchInfo)[%d] , SegmentCount (From First Segment)[%d]
rrc_SysInfoMgr_NotifyClientRemoved ClientId = %x
WaitForSubscription_Am_SubscribeToMibIntraFreq: [received]
Avoiding DSRC update for BCCH read %d
Avoiding DSRC update for BCCH read for ANR/CGI Info
Avoiding DSRC update for BCCH read
priv_HandleAmMessage: activeReaderQ created @ 0x%0.8x
priv_HandleAmMessage: sending UphyBchResCfgReadyForSend to ResourceMgr
priv_HandleAmMessage: error - UphyBchResCfgReadyForSend message not generated
priv_HandleAmMessage: activeReaderQ freed
priv_HandleAmMessage: Pending Client is same as new request client,Merging
priv_HandleAmMessage: Waiting on DSRC : appending to pending Q
priv_HandleAmMessage: active reader present, handling IntraFreqSibs
priv_HandleAmMessage: [error] - unable to subscribe SIBs
priv_addEntryToQ: [SI_SubscribeToSchInfo_IntraFreq]
priv_addEntryToQ: [SI_SubscribeToMib_IntraFreq]
priv_addEntryToQ: [SI_SubscribeToMib_InterFreq]
priv_addEntryToQ: [SI_SubscribeToSibs_IntraFreq]
rrc_SysInfoMgr_priv_addEntryToQ: QEntry->u.sibIntraFreq.sibIds is NULL
priv_addEntryToQ: [SI_SubscribeToMibSbSib_IntraFreq]
rrc_SysInfoMgr_priv_addEntryToQ: QEntry->u.sibIntraFreq.sibIds is NULL
priv_addEntryToQ: [fail] - invalid subscription request not added to Q
priv_addEntryToQ: added request to Q with CPICH = %d, DL UARFCN = %d, callback addr: 0x%0.8x
DBCHR : rrc_SysInfoMgr_priv_PopulateSiDb
DBCHR : Client Resubscribed for a received SIB %d, ConfigStatus = %d,Send Modify again
DBCHR: VT [%d]
DBCHR: SiDb[%d] : VT [%d]
DBCHR: SiDb[%d] : SIBType [%d]
DBCHR: SiDb[%d] : SegCount [%d]
DBCHR: SiDb[%d] : SibRep 4
DBCHR: SiDb[%d] : SibRep 8
DBCHR: SiDb[%d] : SibRep 16
DBCHR: SiDb[%d] : SibRep 32
DBCHR: SiDb[%d] : SibRep 64
DBCHR: SiDb[%d] : SibRep 128
DBCHR: SiDb[%d] : SibRep 256
DBCHR: SiDb[%d] : SibRep 512
DBCHR: SiDb[%d] : SibRep 1024
DBCHR: SiDb[%d] : SibRep 2048
DBCHR: SiDb[%d] : SibRep 4096
DBCHR: rrc_SysInfoMgr_priv_PopulateSiDb: Invalid Repetition Factor
DBCHR: SiDb[%d] : SibPos[0] = %d
DBCHR: Ignore the rest of sib_PosOffsetInfo received in Scheduling info for SiDb[%d] as OffsetIndex[%d] is exceeding SegCount[%d]
DBCHR: SiDb[%d] : SibPos[%d] = %d
DBCHR: SiDb[%d] : SibPos[%d] = %d
DBCHR: SiDb[%d] : SibPos[%d] = %d
rrc_SysInfoMgr_priv_appendToPendingQ: newReaderQ is NULL
priv_appendToPendingQ: subscribe to MIB/SIB request put on Queue by SysInfoMgr
priv_HandleIntraFreqSibsReaderActive: appending Intrafrequency subscription
priv_HandleIntraFreqSibsReaderActive: deleting activeReaderQ->reader @ 0x%0.8x
priv_HandleIntraFreqSibsReaderActive: activeReaderQ->reader deleted
activeReaderQ->reader == NULL, just append entry to Q
priv_HandleIntraFreqSibsReaderActive: appending to pending Q. isResubscribReq[%d]
DBCHR : Appending Sibs to same Active reader Q: Sending BCH Modify
priv_HandleSubscription: SysInfoReader creation failed
priv_HandleSubscription: activeReaderQ->reader created @ 0x%0.8x
priv_HandleSubscription: [success] - MIB Block requested
priv_HandleSubscription: rrc_SysInfoReader_RequestMib call failed
priv_HandleSubscription: [success] - SchBlock requested
priv_HandleSubscription: rrc_SysInfoReader_RequestSchInfo call failed
priv_HandleSubscription: request IntraFreq SIBs failed
priv_HandleSubscription: [success] - request IntraFreqSIBs successful
priv_HandleSubscription: request MibSbSib_IntraFreq failed
priv_HandleSubscription: [success] - request MibSbSib_IntraFreq successful
priv_HandleSubscription: error in the choice field of ReaderQ
WaitForSubscription_Am_SubscribeToSibsIntraFreq: message received
WaitForSubscription_Am_SubscribeToSibsIntraFreq: [error] -no scheduling information present for SIBs being subscribed
priv_validateIntraFreqSibSubscriptionReq: message is NULL
priv_validateIntraFreqSibSubscriptionReq: mibPtr is NULL
WaitForSubscription_Am_SubscribeToSchInfoIntraFreq: [received]
WaitForSubscription_Am_SubscribeToMibInterFreq: message received
Am_SubscribeToSystemInfo: message received
Am_UnsubscribeAll: [received]
priv_HandleUnsubscribeAll: -internal message structure for "UnsubscribeAll" is NULL
DBCHR: SibId(%d) Cancelled
priv_HandleUnsubscribeAll: number of active clients = %d
priv_HandleUnsubscribeAll: activeReaderQ->client @ 0x%0.8x, pMsg->clientId = 0x%0.8x
priv_HandleUnsubscribeAll: Pending requests for the client is not checked
priv_HandleUnsubscribeAll: terminating pending requests for client
priv_HandleClientCallback: [error] -internal message structure for "UnsubscribeAll" is NULL
priv_HandleClientCallback: [error] -no client for callback function
priv_handleClientCallback: [%s] has no callback function
priv_HandleClientCallback: [%s] callback function called
UphyBchResourceConfigReady: [received]
WaitForSubscription_UphyBchResourceConfigReady Unavailable to config bch resources RetCode(%d)
WaitForSubscription_UphyBchResourceConfigReady ReaderQ already NULL
WaitForSubscription_UphyBchResourceConfigReady: [error] -no active client present
UphyBchResourceConfigReady: [error] - BCCHPAUSED transition failed
UphyBchResourceConfigReady: [error] - WAITFORBCHTOBECONFIGURED transition failed
priv_HandleUphyBchResourceConfigReady: handling a BackgroundResourceRelease message
priv_HandleUphyBchResourceConfigReady: [error] - unable to subscribe SIBs
priv_HandleUphyBchResourceConfigReady: deleting activeReaderQ->reader 0x%0.8x
priv_HandleBackgroundResourceRelease: [error ]- THIS SHOULD NOT BE USED YET!
priv_HandleBackgroundResourceRelease: priv_configureBcch() success
priv_HandleBackgroundResourceRelease: priv_configureBcch() failure
priv_HandleBackgroundResourceRelease: mibInterFreq.retryCount is zero, hence going to terminate SI Reading
priv_HandleBackgroundResourceRelease: error - no active Reader present
priv_configureBcch: call to rrc_Bcch_getBch returns FAILURE
priv_configureBcch: physical channel configuration successful
priv_configureBcch: physical channel Configuration Failure
priv_configureBcch: unable to configure BCCH due to null activeBcch instance
priv_terminateSIReading: pendingReaderQ = NULL, terminating last subscription
priv_terminateSIReading: making pending subscription active
priv_terminateLastSubscription: releasing BCH / PCCPCH
priv_terminateLastSubscription: [fail] - unable to release physical channel
priv_terminateLastSubscription: deleting activeReaderQ->reader @ 0x%0.8x
priv_terminateLastSubscription: activeReaderQ->reader deleted
priv_terminateLastSubscription: deleting activeReaderQ @ 0x%0.8x
priv_terminateLastSubscription: activeReaderQ deleted
priv_terminateLastSubscription: error - state transition to WAITFORSUBSCRIPTION failed
DBCHR: rrc_SysInfoMgr_priv_FreeSiDb
Am_UnSubcribeSystemInfo: [received]
Am_UnSubcribeSystemInfo: nonactive readerQ not yet implemented
DBCHR: SibId(%d) Cancelled
rrc_SysinfoMgr : CancelSubscription for Sib [%d]
Am_UnsubscribeAll: [received]
[Default_Am_PauseBcch] bcchPauseRecvd = TRUE
[Default_Am_PauseBcch] bcchPauseRecvd = FALSE
WaitForBchToBeConfigured_Am_SubscribeToMibIntraFreq: [received]
WaitForBchToBeConfigured_Am_SubscribeToSibsIntraFreq: [received]
WaitForBchToBeConfigured_Am_SubscribeToSibsIntraFreq: [error] - no activeReaderQ present
WaitForBchToBeConfigured_Am_SubscribeToSibsIntraFreq: [error] -no scheduling information present for SIBs being subscribed
WaitForBchToBeConfigured_Am_SubscribeToSibsIntraFreq: [error] - unable to subscribe SIBs
WaitForBchToBeConfigured_Am_SubscribeToSchInfoIntraFreq: [received]
WaitForBchToBeConfigured_Am_SubscribeToMibInterFreq: [received]
Am_SubscribeToSystemInfo: [received]
Am_SubscribeToSystemInfoSibs: no activeReaderQ present
Am_SubscribeToSystemInfo: unable to subscribe to SIBs
WaitForBchToBeConfigured_Am_BchResourceConfigured: [received]
WaitForActiveReaderToFinish_Am_PauseBcch: [error] - unable to release physical channel
Am_UnsubscribeAll: [error] - BCCHPAUSED transition failed
WaitForBchToBeConfigured_Am_BchResourceConfigured: [error] - WAITFORACTIVEREADERTOFINISH transition failed
priv_HandleAmBchResourceConfigured: [error] - activeReaderQ == NULL
priv_HandleAmBchResourceConfigured: [error] - rrc_SysInfoReader_StartReading returns FALSE
priv_HandleAmBchResourceConfigured: deleting activeReaderQ->reader @ 0x%0.8x
priv_HandleAmBchResourceConfigured: [success] - rrc_SysInfoReader_StartReading returns TRUE
Am_UnSubcribeSystemInfo: nonactive readerQ not yet implemented
Am_ForcedUnsubscribeAll: [received]
Am_ForcedUnsubscribeAll: [error] - WAITFORSUBSCRIPTION transition failed
WaitForActiveReaderToFinish_Am_SubscribeToMibIntraFreq: [received]
WaitForActiveReaderToFinish_Am_SubscribeToSibsIntraFreq: [received]
WaitForActiveReaderToFinish_Am_SubscribeToSibsIntraFreq: [error] - no active reader present
WaitForActiveReaderToFinish_Am_SubscribeToSibsIntraFreq: [error] -no scheduling information present for SIBs being subscribed
WaitForActiveReaderToFinish_Am_SubscribeToSibsIntraFreqToSibsIntraFreq: [error] - unable to subscribe SIBs
WaitForActiveReaderToFinish_Am_SubscribeToSibsIntraFreq: [error] - rrc_SIM_SysInfoReader_StartReading returns FALSE
WaitForActiveReaderToFinish_Am_SubscribeToSibsIntraFreq: deleting activeReaderQ->reader @ 0x0%x
WaitForActiveReaderToFinish_Am_SubscribeToSibsIntraFreq: [success] - rrc_SIM_SysInfoReader_StartReading returns TRUE
WaitForActiveReaderToFinish_Am_SubscribeToSchInfoIntraFreq: [received]
WaitForActiveReaderToFinish_Am_SubscribeToMibInterFreq: [received]
Am_SubscribeToSystemInfo: [received]
Am_SubscribeToSystemInfo: no active reader present
Am_SubscribeToSystemInfo: unable to subscribe to SIBs
Am_SubscribeToSystemInfo: StartReading error - deleting activeReaderQ->reader
Am_SubscribeToSystemInfo: StartReading returns TRUE
am_FailureInd: [received]
am_FailureInd: releasing BCH / PCCPCH
am_FailureInd: [error] - unable to release physical channel
am_FailureInd: [error] - WAITFORBCHTOBERELEASED transition failed
SIM_priv_TerminateLastSubscription: activeReaderQ already NULL
priv_HandleSirAmFailureInd: [error] -no active client present
priv_HandleSirAmFailureInd: number of active clients = %d
priv_HandleSirAmFailureInd: terminating pending requests for client
priv_HandleSirAmFailureInd: [%s] callback function called
am_FinishInd: [received]
am_FinishInd: releasing BCH / PCCPCH
am_FinishInd: [error] - unable to release physical channel
am_FinishInd: [error] - WAITFORBCHTOBERELEASED transition failed
am_FinishInd: not releasing the BCH
WaitForActiveReaderToFinish_SIR_am_RecvMibOrSib: [received]
priv_HandleSirAmRecvMibOrSib: received in state WaitForActiveReaderToFinish
priv_HandleSirAmRecvMibOrSib: [error] - no active client present
received InfoBlockInstId is NULL
DBCHR : First MIB received : rep8 -> rep40
DBCHR: [%s] : SIB type [%d] Received!!
DBCHR: [%s] : SIB type [%d] Received!!
priv_HandleSirAmRecvMibOrSib: [%s] - removed from activeReaderQ
priv_HandleSirAmRecvMibOrSib: [%s] - passed to client %s
priv_HandleSirAmRecvMibOrSib: [error] - SIB/MIB decoding failure returned to SysInfoMgr
priv_HandleSirAmRecvMibOrSib: terminating pending requests for client
pMsg->InfoBlockInstId is NULL
Rx-ASN__MASTER_INFORMATION_BLOCK
Rx-ASN__SYSTEM_INFORMATION_BLOCK_TYPE_%d
Rx-ASN__SYSTEM_INFORMATION_BLOCK_TYPE_13__1
Rx-ASN__SYSTEM_INFORMATION_BLOCK_TYPE_13__2
Rx-ASN__SYSTEM_INFORMATION_BLOCK_TYPE_13__3
Rx-ASN__SYSTEM_INFORMATION_BLOCK_TYPE_13__4
Rx-ASN__SYSTEM_INFORMATION_BLOCK_TYPE_14
Rx-ASN__SYSTEM_INFORMATION_BLOCK_TYPE_15
Rx-ASN__SYSTEM_INFORMATION_BLOCK_TYPE_15__1
Rx-ASN__SYSTEM_INFORMATION_BLOCK_TYPE_15__2
Rx-ASN__SYSTEM_INFORMATION_BLOCK_TYPE_15__3
Rx-ASN__SYSTEM_INFORMATION_BLOCK_TYPE_16
Rx-ASN__SYSTEM_INFORMATION_BLOCK_TYPE_17
Rx-ASN__SYSTEM_INFORMATION_BLOCK_TYPE_15__4
Rx-ASN__SYSTEM_INFORMATION_BLOCK_TYPE_18
Rx-ASN__SCHEDULING_BLOCK_1
Rx-ASN__SCHEDULING_BLOCK_2
Rx-ASN__SYSTEM_INFORMATION_BLOCK_TYPE_15__5
Rx-ASN__MESSAGE_UNKNOWN
Am_UnsubscribeAll: [received]
Am_UnsubscribeAll: releasing BCH / PCCPCH
Am_UnsubscribeAll: [error] - unable to release physical channel
Am_UnsubscribeAll: [error] - WAITFORBCHTOBERELEASED transition failed
Am_UnsubscribeAll: not releasing the BCH
The Active reader has not requested for Unsubscribe All, keeping the BCCH
Am_UnsubscribeAll: BCH / PCCPCH already released
Am_UnsubscribeAll: [error] - WAITFORSUBSCRIPTION transition failed
priv_HandleClientCallbackForReleaseBch: [error] -internal message structure for "UnsubscribeAll" is NULL
priv_HandleClientCallbackForReleaseBch: [error] -no client for callback function
priv_HandleClientCallbackForReleaseBch: [%s] has no callback function
priv_HandleClientCallbackForReleaseBch: callback function already exists for %s
priv_HandleClientCallbackForReleaseBch: [error] - can only have 2 callback clients
priv_HandleClientCallbackForReleaseBch: storing callback function for %s
Am_UnSubcribeSystemInfo: releasing BCH / PCCPCH
Am_UnSubcribeSystemInfo: [error] unable to release physical channel
Am_UnSubcribeSystemInfo: [error] - WAITFORBCHTOBERELEASED transition failed
Am_UnSubscribeSystemInfo: unsubscribe in nonactive readerQ not yet implemented
Am_ForcedUnsubscribeAll: [received]
Am_ForcedUnsubscribeAll: releasing BCH / PCCPCH
Am_ForcedUnsubscribeAll: [error] - unable to release physical channel
Am_UnsubscribeAll: [error] - WAITWAITFORSUBSCRIPTION transition failed
Am_ForcedUnsubscribeAll: not releasing the BCH
The Active reader has not requested for Unsubscribe All, keeping the BCCH
Am_ForcedUnsubscribeAll: BCH / PCCPCH already released
Am_UnsubscribeAll: [error] - WAITFORSUBSCRIPTION transition failed
WaitForActiveReaderToFinish_Am_PauseBcch: [error] - unable to release physical channel
Am_UnsubscribeAll: [error] - BCCHPAUSED transition failed
WaitForBchToBeReleased_Am_SubscribeToMibIntraFreq: [received]
WaitForBchToBeReleased_Am_SubscribeToSibsIntraFreq: [received]
WaitForBchToBeReleased_Am_SubscribeToSchInfoIntraFreq: [received]
WaitForBchToBeReleased_Am_SubscribeToMibInterFreq: [received]
WaitForBchToBeReleased_Am_SubscribeToSystemInfo: [received]
Am_UnsubscribeAll: [received]
Am_BchResourceReleased: [received]
Am_BchResourceReleased: [error] - WAITFORSUBSCRIPTION transition failed
priv_HandleBchResourceReleased: [error] -NACK received
priv_HandleBchResourceReleased: ACK received
priv_HandleClientCallbackForReleaseBch: %s callback function called
Am_ForcedUnsubscribeAll: [received]
Am_ForcedUnsubscribeAll: [error] - WAITFORSUBSCRIPTION transition failed
Am_SubscribeToSystemInfo: [received]
Am_SubscribeToSystemInfo: no active reader present
Am_SubscribeToSystemInfo: unable to subscribe to SIBs
Am_SubscribeToSystemInfo: HandleSubscription returns TRUE
BcchPaused_Am_ResumeBcch: deleting activeReaderQ->reader 0x%0.8x
Am_UnsubscribeAll: [error] - BCCHPAUSED transition failed
rrc_SysInfoMgr_priv_HandleNACKBchConfigCnf: [error] -activeReaderQ is NULL
priv_HandleNACKBchConfigCnf: [error] - no client in activeReaderQ!
priv_HandleNACKBchConfigCnf: [error] - no callback function in activeReaderQ!
priv_HandleNACKBchConfigCnf: [%s] callback function called with BCHREADERROR
priv_HandleNACKBchConfigCnf: terminating pending requests for client
priv_HandleNACKBchConfigCnf: number of active clients = %d
priv_HandleBchConfigRequest: [fail] - no activeReaderQ
priv_HandleBchConfigRequest: monitored and serving cells are same
priv_HandleBchConfigRequest: [success] - BCCH configured for MIB InterFreq
priv_HandleBchConfigRequest: [fail] - BCCH not configured for MIB InterFreq
BPLMN BCH Request: [success] - BCCH configured
BPLMN : priv_HandleBchConfig Request: [fail] - BCCH not configured
BPLMN BCH Request for AnrInfoReading : [success] - BCCH configured
BPLMN : priv_HandleBchConfig Request for AnrInfOReading : [fail] - BCCH not configured
priv_HandleBchConfigRequest: [success] - BCCH configured
priv_HandleBchConfigRequest: [fail] - BCCH not configured
priv_makePendingSubscriptionActive: pendingReaderQ is empty
priv_makePendingSubscriptionActive: pendingReaderQ is not Empty
rrc_SysInfoMgr_priv_makePendingSubscriptionActive: [SI_SubscribeToSchInfo_IntraFreq]
rrc_SysInfoMgr_priv_makePendingSubscriptionActive: [SI_SubscribeToMib_IntraFreq]
rrc_SysInfoMgr_priv_makePendingSubscriptionActive: [SI_SubscribeToMib_InterFreq]
rrc_SysInfoMgr_priv_makePendingSubscriptionActive: [SI_SubscribeToSibs_IntraFreq]
rrc_SysInfoMgr_priv_makePendingSubscriptionActive: [SI_SubscribeToMibSbSib_IntraFreq]
priv_makePendingSubscription: [fail] - invalid subscription request not added to Q
priv_ReleaseBchPccpch: [fail] - no active BCCH
priv_ReleaseBchPccpch: tmp_bch is NULL
priv_ReleaseBchPccpch: [fail] - unable to release physical channel
priv_TerminateLastSubscription: activeReaderQ already NULL
priv_TerminateLastSubscription: deleting activeReaderQ->reader @ 0x%0.8x
priv_TerminateLastSubscription: deleting activeReaderQ @ 0x%0.8x
Entry not empty since client %s is subscribed to SibId: %d
Invalid subscription type: %d
DBCHR: rrc_SysInfoMgr_priv_RollBackSiDb
DBCHR: SiDb[%d]->ConfigStatus = Configured -> PendingConfig
priv_removeClientFromPendingQ: trying to remove client %s from pending Q
