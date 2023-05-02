%s: SUCCESS - SRL1RC interface module initialized
%s EPT passed: For RAT(%d), nextEventStartTime(%u)
SRL1RC GRANT - RAT(%d), RequestReason(%d), Response(%d), OtherClientRequestReason(%d), simInfo(%d), AutoPauseTimerValue(%u)
SRL1RC GRANT - RAT(%d), RequestReason(%d), Response(%d), OtherClientRequestReason(%d), simInfo(%d), AutoPauseTimerValue(%u)
SRL1RC GRANT - RAT(%d), RequestReason(%d), Response(%d), simInfo(%d), AutoPauseTimerValue(%u)
SRL1RC GRANT - RAT(%d), RequestReason(%d), Response(%d), simInfo(%d), No AutoPause Info
%s: - NULL clientDBObj object
%s: - NULL clientDBObj object
%s: - NULL clientDBObj object
%s: [PCA]requestRat=%d, peerRat=%d
%s: [PCA]Paging conflict detected with peerRat=%d
%s: Stack0 [PCA]firstPagingPagingConflictTime=%u, PagingConflictCnt=%d
%s: Stack0 [PCA] New firstPagingPagingConflictTime=%u
%s: Stack0 [PCA]Criteria of Conflict duration met (WCDMA). Diff time=%u, pagingGrant=%d, pagingReject=%d
%s: FAIL - Failed to send message to URRC - StackId 0
%s: Stack0 [PCA]Criteria of Conflict duration met (WCDMA). Diff time=%u, pagingGrant=%d, pagingReject=%d
%s: FAIL - Failed to send message to URRC - StackId 0
%s: Stack1 [PCA]ds_firstPagingPagingConflictTime=%u, PagingConflictCnt=%d
%s: Stack1 [PCA] New firstPagingPagingConflictTime=%u
%s: Stack1 [PCA]Criteria of Conflict duration met (DS_WCDMA). Diff=%u, pagingGrant=%d, pagingReject=%d
%s: FAIL - Failed to send message to URRC - StackId 1
%s: Stack1 [PCA]Criteria of Conflict duration met (DS_WCDMA). Diff=%u, pagingGrant=%d, pagingReject=%d
%s: FAIL - Failed to send message to URRC - StackId 1
%s: Reset SADR Info for clientId(%d)
%s: - NULL timeKeeper object
%s: FAIL - NULL Registration message received
%s: FAIL - RAT (%d:%s) is not supported by SRL1RC
%s: FAIL - RAT(%d) is already registered with SRL1RC by ClientId(%d)
%s: FAIL - Registration request is coming from DSWCDMA before Deregistering the Other client
%s: FAIL - Registration request is coming from BPLMN client before Deregistering the Other client
%s: SUCCESS - RAT(%d), ClientId(%d), State(%d)
%s: FAIL - RAT(%d) ResourceManager failed to register ClientId(%d)
DS_WCDMA Client Registration failed
%s: Active BPLMN client registered
%s: Active BPLMN client registered
%s: BackUp Restored ClientId(%d), nextEventStartTime(%u), nextWakeupCause(%d)
%s: - Event Passed nextEventStartTime(%u) currentTime(%u)
%s: otherClientObj is NULL
%s: Set Forced DSDS Operation
%s: FAIL - RAT(%d) Registration failed, Max clients registered
%s: isSADRBPLMNActive (%d) BPLMNActiveRAT(%d)
%s: No of client registered %u
%s: FAIL - NULL DeRegistration message received
%s: FAIL - Deregistering Invalid ClientId(%d)
%s: - NULL timeKeeper object
%s: FAIL - RAT(%d) Unregistered ClientId(%d), State(%d)
%s:- SADR Info BackUp Not Needed
%s: BackUp ClientId(%d), nextEventStartTime(%u), nextWakeupCause(%d)
%s: BackUp Restored ClientId(%d), nextEventStartTime(%u), nextWakeupCause(%d)
%s: - Event Passed nextEventStartTime(%u) currentTime(%u)
%s: Normal De_Register
%s: SUCCESS - RAT(%d), ClientId(%d), State(%d), isDeregForBPLMN(%d)
%s: FAIL - RAT(%d) ResourceManager failed to deregister ClientId(%d), State(%d)
%s: FAIL - Resource request received with NULL output pointer
%s: - NULL resolverObj object
%s: FAIL - Resource request received with NULL input pointer
%s: FAIL - Resource request received with Invalid ClientId(%d)
%s: FAIL - Resource request received with Invalid request reason(%d)
%s: FAIL - RAT(%d) ResourceRequest received from Unregistered ClientId(%d), State(%d)
Dereferenced NULL pointer : timeKeeperObj
RAT(%d)
SRL1RC REQ -Input Request Reason (%u) expected RAT(%u) Input RAT (%u)
SRL1RC REQ -Input isScheduledEvent (%u) Response (%u)
SRL1RC REQ - Reset Scheduled event Info
SRL1RC REQ - SUCCESS - RAT(%d), RequestReason(%d), currentTime(%u) MinResourceUseTime(%u)
srl1rc_l1intfResourceRequest: FAIL - RAT(%d), ResourceManager failed to grant resources for ClientId(%d), RequestReason(%d), MinResourceUseTime(%u) Response(%d), RejectCause(%d), RetryPeriod(%u)
SRL1RC REQ - isPSConnected Not updated because req rejected
SRL1RC GRANT/REJ/WAIT/RETRY -RAT(%d), RequestReason(%d),OtherClientRequestReason(%d),Response(%d) isScheduledEvent(%d)
%s: Reset Forced DSDS Operation
SRL1RC REJ/WAIT/RETRY - RAT(%d), RequestReason(%d), Response(%d), ActiverClientRequestReason(%d), RejectCause(%d), RetryPeriod(%u)
ActiveClient Info - ActiveClientRAT(%d), ActiveClientRequestReason(%d), GrantTime(%u), LatestGrantTime(%u), GrantEndTime(%u)
SRL1RC REJ/WAIT/RETRY -RAT(%d), RequestReason(%d), Response(%d), RejectCause(%d), RetryPeriod(%u)
SRL1RC REJ/WAIT/RETRY - RAT(%d), RequestReason(%d), Response(%d), RejectCause(%d),RetryPeriod(%u)
%s: FAIL - Pause Done received with NULL pointer
%s: FAIL - Pause Done received with Invalid ClientId(%d)
%s: FAIL - PauseDone received from Unregistered ClientId(%d), RAT(%d), State(%d)
%s: FAIL - Pause Done received from non Active Client [%u]
%s: Meas Release Because measure paused client sends RF puase done - client ID(%d)/clientMeasState(%d)
%s: SUCCESS - RAT(%d), State(%d) MsgValid(%d)
%s EPT passed: For RAT(%d), nextEventStartTime(%u)
%s: SADR active Sending Resume to paused client [%u]
%s: Reset Forced DSDS Operation
%s: FAIL - ResourceManager failed to process PauseDone for ClientId(%d), RAT(%d), State(%d)
%s: FAIL - Resource request received with NULL output pointer
%s: FAIL - Resume ready received with NULL pointer
%s: FAIL - Resume ready received with Invalid ClientId(%d)
%s: FAIL - Resume ready received from Unregistered ClientId(%d), RAT(%d), State(%d)
SA_DRDS : Sim info [%u]
%s: SUCCESS - RAT(%d), resumeNow(%d), startEarlyPauseTimer(%d), pauseTime(%u)
%s: FAIL - ResourceManager failed to process ResumeReady for ClientId(%d), RAT(%d), State(%d)
%s: FAIL - Update Time received with NULL pointer
%s: FAIL - Update Time received with Invalid ClientId(%d)
%s: FAIL - UpdateTime received from Unregistered ClientId(%d), RAT(%d), State(%d)
%s: FAIL - UpdateTime received with Invalid Wakeup Cause(%d)
Dereferenced NULL pointer : timeKeeperObj
%s GSM RF hogging prevention (TimeUpdate)(Allow 2G Paging): GSM reason(%u), lastPagingGrantTimeInPauseDone(%u), currentTime(%u), nextEventStartTime(%u)
%s LTE MBMS Data ongoing
%s MBMS RF hogging prevention (TimeUpdate): reason(%u), randValue(%u), TargetPercentage(%u), nextEventStartTime(%u)
%s (Skip TimeUpdate: Time cause) MBMS RF hogging prevention (Autopause): RAT(%d), reason(%u), NextEventTime (%u)
%s Skip TimeUpdate: For RAT(%d)
%s RF hogging prevention (TimeUpdate): Target Percentage changed to %d intentionally for scch order missed issue
%s RF hogging prevention (TimeUpdate): reason(%u), randValue(%u), TargetPercentage(%u), Last2GRFPreventionTime(%u), nextEventStartTime(%u)
%s [ARFC_Req] After ARFC start, drxCycleClient (%u), GSMRFPercentage (%u)
%s [ARFC_Req] highARFCStartFlag (%u), highARFCEndFlag (%u), highARFCPeriod (%u)
%s Previous paging is granted. Reset RFThrottleRejectCnt (%d) for LTE
%s Execute TimeUpdate due to previous update time: srl1rcLast4GUpdateTime (%u), nextEventStartTime (%u)
%s Skip TimeUpdate for duplicated nextEventStartTime event. srl1rcLast2GRFPreventionTime(%u)
%s Skip TimeUpdate: For RAT(%d)
%s (Skip TimeUpdate: Random event) RF hogging prevention (Autopause): reason(%u), srl1rcLast2GRFPreventionTime (%u), srl1rcRFThrottleRejectCnt (%u)
%s Skip TimeUpdate: For RAT(%d)
%s Skip TimeUpdate for duplicated nextEventStartTime event
%s (Skip TimeUpdate: Time cause) RF hogging prevention (Autopause): reason(%u), NextEventTime (%u), LastTime (%u)
%s Skip TimeUpdate: For RAT(%d)
%s Update srl1rcLast4GUpdateTime: srl1rcLast2GRFPreventionTime (%u), srl1rcLast4GUpdateTime (%u)
%s LWT RF hogging prevention (Skip TimeUpdate: Time cause): LWT reason(%u), randValue(%u), TargetPercentage(%u)
%s (Skip TimeUpdate: Time cause) LWT RF hogging prevention (Autopause): LWT reason(%u), NextEventTime (%u)
%s Skip TimeUpdate: For RAT(%d)
%s (Skip TimeUpdate: NR BCH schedule) Autopause prevention for NR BCH: LWT reason(%u), NextEventTime (%u)
%s Skip TimeUpdate: For RAT(%d)
%s: FAIL - ResourceManager failed to process UpdateTime for ClientId(%d), RAT(%d), State(%d)
%s EPT passed: For RAT(%d), nextEventStartTime(%u)
%s: SUCCESS - RAT(%d), currentTime(%u),nextEventStartTime(%u), nextEventDuration(%u), nextWakeupCause(%d)
%s: FAIL - PS Update Time received with NULL pointer
%s: FAIL - PS Update Time received with Invalid ClientId(%d)
%s: FAIL - PS UpdateTime received from Unregistered ClientId(%d), RAT(%d), State(%d)
%s: FAIL - PS UpdateTime received with non PS Cause(%d)
Dereferenced NULL pointer : timeKeeperObj
%s: SUCCESS - RAT(%d), currentTime(%u),nextEventStartTime(%u), nextEventDuration(%u), nextWakeupCause(%d)
%s: FAIL - ResourceManager failed to process UpdateTime for ClientId(%d), RAT(%d), State(%d)
%s: Nr or DS- Nr registered (%d)
%s: FAIL - Resource Release received with NULL pointer
%s: FAIL - Resource Release received with Invalid ClientId (%d)
%s: FAIL - ResourceRelease received from Unregistered ClientId(%d), RAT(%d), State(%d)
Dereferenced NULL pointer : timeKeeperObj
Resource release with nextevent received with Invalid Wakeup Cause(%d)
%s: Meas Release Because Measure client state is NOT idle - client ID(%d)/clientMeasState(%d) requested for Rf release
%s: Tx Release Because Tx client state is NOT idle - client ID(%d)/clientTxState(%d) requested for Rf release
%s: SUCCESS - RAT(%d) AgcDiff(%d)
%s: SUCCESS - RAT(%d), currentTime(%u),nextEventStartTime(%u), nextEventDuration(%u), nextWakeupCause(%u)
%s: targetClientId %u
%s EPT passed: For RAT(%d), nextEventStartTime(%u)
%s: Reset Forced DSDS Operation in RF Release case
%s: FAIL - RAT(%d), ResourceManager failed to process ResourceRelease
%s: FAIL - msg is NULL
Dereferenced NULL pointer : timeKeeperObj
%s: SUCCESS (Sent RES_RSP) - RAT(%d), StartEarlyPauseTimer(%d), EarlyPauseTime(%u), currentTime(%u)
%s: SUCCESS (Sent PAUSE) - RAT(%d)
%s: SUCCESS (Sent RESUME) - RAT(%d), StartEarlyPauseTimer(%d), EarlyPauseTime(%u), currentTime(%u), 3GF_DRDSDS - SIM[%d], SA_DRDS - SIM[%d]
%s: SUCCESS (Sent START TIMER) - RAT(%d), EarlyPauseTime(%u), currentTime(%u)
%s: SUCCESS (Sent RescheduleWakeupToPCH) - RAT(%d), currentTime(%u)
%s: SUCCESS (Sent PICHNackNotification) - RAT(%d), currentTime(%u)
%s:[PSPS] SUCCESS (Sent PsPsStatusInd) - RAT(%d), currentTime(%u)
%s: SUCCESS (Sent SearcherResponse) - RAT(%d), currentTime(%u)
%s: SUCCESS (Sent SearcherPause) - RAT(%d), currentTime(%u)
%s: SUCCESS (Sent SearcherResume) - RAT(%d), currentTime(%u)
%s: SUCCESS (Sent RescheduleMeasurements) - RAT(%d), currentTime(%u)
%s: SUCCESS (Sent TX_REQ_RSP) - RAT(%d), TxResponse(%d), assignedTX(%x), currentTime(%u)
%s: SUCCESS (Sent Tx Change Request) - RAT(%d), assignedTX(%x)
%s: SUCCESS (Sent Con-Con Ind) - RAT(%d), isConCon(%d)
%s: SUCCESS (Sent Measure Response) - RAT(%d), rsp(%d), measType(%d)
%s: SUCCESS (Sent Gap Measure Pause) - RAT(%d)
%s: SUCCESS (Sent Gap Measure Resume) - RAT(%d)
%s: FAIL - Invalid msg Type %d
%s: FAIL - msg is NULL
%s: FAIL - srl1rcToUL1Msg is NULL
%s: FAIL - Invalid msg Type %s
%s: FAIL - Failed to send message to UL1
%s: FAIL - msg is NULL
%s: FAIL - srl1rcToGL1Msg is NULL
%s : FAIL - Invalid msg Type %s
%s: FAIL - Failed to send message to GL1
%s: FAIL - msg is NULL
%s: FAIL - srl1rcToUL1Msg is NULL
%s: FAIL - Invalid msg Type %s
%s: FAIL - Failed to send message to DS_UL1
%s: Stack%d FAIL - srl1rcToUrrcMsg is NULL
%s: FAIL - Wrong Stack Id in Dsl1rc to Urrc msg
%s: FAIL - Stack%d Failed to send message to URRC
%s: [PCA]Send CUPHY_PCH_CONFLICT_IND to URRC (Stack=%d)
%s: FAIL - Stack%d Failed to send message to URRC
%s: [PCA]Send CUPHY_PCH_CONFLICT_IND to URRC (Stack=%d)
%s: FAIL - this Pointer is NULL!!!
%s: FAIL - msg Pointer is NULL!!!
%s: FAIL - srl1rcToLteL1Msg Pointer is NULL!!!
%s :Invalid msg Type %d
%s: Sending IPC[0x%x] from SRL1RC to RSM...
%s: FAIL - Client RAT information is not LTE(%d)
%s: FAIL - Failed to send message to LTE L1(RSM)(%d)
%s: SUCCESS - sent(%d) RAT(%d)
%s: FAIL - msg is NULL
%s: FAIL - srl1rcToTL1Msg is NULL
%s: FAIL - Invalid msg Type %s
%s: FAIL - Failed to send message to TL1
%s: FAIL - msg is NULL
%s: FAIL - srl1rcToCDL1Msg is NULL
%s: FAIL - Invalid msg Type %s
%s: FAIL - msg is NULL
%s: FAIL - srl1rcToCDL1Msg is NULL
%s: FAIL - Invalid msg Type %s
%s: FAIL - Client RAT information is not NR(%d)
%s: FAIL - Failed to send message to NR(%d)
%s: FAIL - msg is NULL
%s: FAIL - Failed to send message to GL1 - Client Id (%d)
%s: SUCCESS - ClientId(%d), RAT(%d), State(%d), MsgType(%s)
%s: FAIL - RAT(%d) Failed to create message
%s: FAIL - Failed to send message to UL1 - Client Id (%d)
%s: FAIL - Failed to create UL1 message for clientId (%d)
%s: FAIL - Failed to send message to DS UL1 - Client Id (%d)
%s: SUCCESS - DS_WCDMA_ClientID(%d), RAT(%d), State(%d), MsgType(%s)
%s: FAIL - DS UL1 RAT Failed to create message
%s: FAIL - Failed to send message to LTE L1(DS Opt) - Client Id (%d)
%s: FAIL - Failed to create NRL1(DS Opt) message for clientId (%d)
%s: FAIL - Failed to send message to TL1 - Client Id (%d)
%s: FAIL - Failed to create TL1 message for clientId (%d)
%s: FAIL - Failed to send message to CDL1 - Client Id (%d)
%s: FAIL - Failed to create CDL1 message for clientId (%d)
%s: FAIL - Failed to send message to NRL1 - Client Id (%d)
%s: FAIL - Failed to create NRL1 message for clientId (%d)
%s: FAIL - Invalid RAT(%d) for ClientId (%d)
srl1rc_l1intfGetGrantReasonForRAT: FAIL - Invalid RAT(%d)
srl1rc_l1intfGetGrantReasonForRAT: FAIL - Unregistered RAT(%d)
srl1rc_l1intfGetGrantReasonForRAT: RAT(%d), grantReason(%d)
srl1rc_l1intfGetGrantReasonForClient: FAIL - Invalid clientId(%d)
srl1rc_l1intfGetGrantReasonForClient: FAIL - Unregistered Client(%d)
srl1rc_l1intfGetStateForClient: FAIL - Invalid clientId(%d)
srl1rc_l1intfGetStateForClient: FAIL - Unregistered Client(%d)
srl1rc_l1intfUpdatePICHRSN: FAIL - Invalid clientId(%d)
srl1rc_l1intfUpdatePICHRSN: FAIL - Unregistered Client(%d)
srl1rc_l1intfUpdatePICHRSN: FAIL - Not a WCDMA client
srl1rc_l1intfUpdatePICHRSN-Conflict resolution algo disabled by L1
srl1rc_l1intfGetPICHRSN: FAIL - Invalid clientId(%d)
srl1rc_l1intfGetPICHRSN: FAIL - Unregistered Client(%d)
srl1rc_l1intfGetPICHRSN: FAIL - Not a WCDMA client
%s: - clientDB object is NULL
srl1rc_l1intfGetRATModeForAutoPauseClient: ratMode = %d
%s: - NULL clientDB object
SRL1RC_Dbg - no client %s: SimId(%d)
SRL1RC_Dbg result %s: noOfClient(%d) SimId(%d)
RF Hogging STAT on PS: TotalRFRequestCnt %u, AvgSkipPercentage %u OverallSkipPercentage %u, ConsecRFSkipCnt %u
srl1rc_rfRejectStatsDMTrace: Rat (%d) RFRequestReason (%d) TotalRFRequest (%d)
srl1rc_rfRejectStatsDMTrace: SignallingRejectCnt (%d) L1HightPriorityRejectCnt (%d) SignallingRejectPerc (%d) L1HightPriorityRejectPerc (%d)
srl1rc_rfRejectStatsDMTrace: PagingRejectCnt (%d) SysInfoRejectCnt (%d) PagingRejectPerc (%d) SysInfoRejectPerc (%d)
srl1rc_rfRejectStatsDMTrace: CellSearchRejectCnt (%d) MeasurementRejectCnt (%d) PSCallRejectCnt (%d) CellSearchRejectPerc (%d) MeasurementRejectPerc (%d) PSCallRejectPerc (%d)
[SRL1RC_DRDSDS_StatDbg] %s: PagingCntDrmode and PagingCntAbnormal are initialized.
SRL1RC_REJ_RECOVERY_CODE - srl1rc_l1ConsecutiveReject_init
%s: pausedTimer Stopped
%s: pauseDoneTimer Stopped
%s: Cancel autoPauseResumeTimer
%s: Tx ChangeDone timer stop
%s: cleared tx memory
%s: meas PauseDone timer stop
%s: meas Paused timer stop
%s: cleared Meas memory
%s: SRL1RC cleared All the memory
%s: FAIL - Meas Pause Done received with NULL pointer
%s: FAIL - Meas Pause Done received with Invalid ClientId(%d)
%s: FAIL - Meas PauseDone received from Unregistered ClientId(%d), RAT(%d), State(%d)
%s: FAIL - Meas Pause Done received from non Active Client [%u]
%s: SUCCESS - RAT(%d), State(%d) MsgValid(%d)
%s: FAIL - Meas Manager failed to process meas PauseDone for ClientId(%d), RAT(%d), State(%d)
%s: FAIL - Meas Release received with NULL pointer
%s: FAIL - Meas Release received with Invalid ClientId (%d)
%s: - clientDB object is NULL
%s: - Release coming for meas Idle client
%s: FAIL - MeasManagerObj is NULL
%s: SRL1RC SUCCESS - RAT(%d)
%s: FAIL - RAT(%d), MeasManager failed to process Measure Release
%s: FAIL - Measure request received with NULL output pointer
%s: FAIL - Measure request received with NULL input pointer
%s: FAIL - Measure request received with Invalid ClientId(%d)
%s: - clientDB object is NULL
%s: FAIL - MeasManagerObj is NULL
Dereferenced NULL pointer : timeKeeperObj
SRL1RC Measure REQ - SUCCESS - RAT(%d), currentTime(%u)
%s: FAIL - RAT(%d), Measure Manager failed to grant resources for ClientId(%d), Response(%d)
%s: Measure Type Query requested
%s: Client Obj is NULL
%s: (%d) 0: idle / 1:wait / 2:active / 3:paused / 4:pausing
%s: OtherClientObj is NULL
%s: RF pause req and TX req cross-over case detected
%s: Tx not possible due to Resource manager Condition
%s: Tx not possible due to Measure Condition!!
%s: FAIL - Tx request received with NULL output pointer
%s: FAIL - Tx request received with NULL input pointer
%s: FAIL - Tx request received with Invalid ClientId(%d)
%s: - clientDB object is NULL
%s: - clientObj object is NULL
%s: FAIL - Tx Request received from ClientId(%d), RAT(%d), TxState(%d)
%s: FAIL - 2Tx request received from Lte, RAT(%d)
%s: FAIL - txManagerObj is NULL
Dereferenced NULL pointer : timeKeeperObj
SRL1RC Tx REQ - SUCCESS - RAT(%d), currentTime(%u)
SRL1RC Tx GRANT - RAT(%d), Response(%d), assignedTX(%x)
SRL1RC Tx REJ/WAIT/RETRY -RAT(%d), Response(%d)
%s: FAIL - RAT(%d), Tx Manager failed to grant resources for ClientId(%d), Response(%d)
%s: FAIL - Tx Release received with NULL pointer
%s: FAIL - Tx Release received with Invalid ClientId (%d)
%s: - clientDB object is NULL
%s: - clientObj object is NULL
%s: FAIL - Tx Release received from Tx Idle ClientId(%d), RAT(%d), TxState(%d)
%s: FAIL - txManagerObj is NULL
%s: SRL1RC SUCCESS - RAT(%d)
%s: FAIL - RAT(%d), TxManager failed to process Tx Release
%s: FAIL - TxChangeDone received with NULL pointer
%s: FAIL - TxChangeDone received with Invalid ClientId(%d)
%s: - clientDB object is NULL
%s: - clientObj object is NULL
%s: FAIL - TxChangeDone received from Tx Idle ClientId(%d), RAT(%d), TxState(%d)
%s: FAIL - TxChangeDone received from Tx Waiting ClientId(%d), RAT(%d), TxState(%d)
%s: FAIL - txManagerObj is NULL
%s: SUCCESS - RAT(%d), TxState(%d) MsgValid(%d), assignedTX(%x)
%s: FAIL - Tx Manager failed to process TxChangeDone for ClientId(%d), RAT(%d), TxState(%d)
srl1rc_l1intfUpdateSADRDb: FAIL - Invalid clientId(%d)
srl1rc_l1intfUpdateSADRDb: FAIL - Unregistered Client(%d)
srl1rc_l1intfUpdateSADRDb: FAIL - Not a LTE or Nr
srl1rc_l1intfUpdateDRDb: FAIL - Invalid clientId(%d)
srl1rc_l1intfUpdateDRDb: FAIL - Unregistered Client(%d)
srl1rc_l1intfUpdateDRDb: FAIL - Not a WCDMA client
%s: - clientDB object is NULL
srl1rc_l1intfIsDRImpossible: FAIL - Invalid clientId(%d)
srl1rc_l1intfIsDRImpossible: FAIL - Unregistered Client(%d)
srl1rc_l1intfIsDRImpossible: FAIL - Not a WCDMA client
%s: FAIL - Searcher request received with NULL output pointer
%s: FAIL - Searcher request received with NULL input pointer
%s: FAIL - Searcher request received with Invalid ClientId(%d)
%s: FAIL - RAT(%d) Searcher Request received from Unregistered ClientId(%d), State(%d)
%s: FAIL - dRManagerObj is NULL
Dereferenced NULL pointer : timeKeeperObj
%s: - clientDB object is NULL
SRL1RC SEARCHER REQ - SUCCESS - RAT(%d), RequestReason(%d), currentTime(%u) MinSearcherUseTime(%u),otherDrClientId(%u),otherSADrClientObj(%u)
SRL1RC REQ - Reset Scheduled event Info
SRL1RC SEARCHER GRANT - RAT(%d), RequestReason(%d), Response(%d), OtherDRClientRequestReason(%d)
SRL1RC SEARCHER GRANT - RAT(%d), RequestReason(%d), Response(%d)
SRL1RC SEARCHER REJ/WAIT/RETRY -RAT(%d), RequestReason(%d), Response(%d), RejectCause(%d)
%s: FAIL - RAT(%d), DR-Manager failed to grant resources for ClientId(%d), RequestReason(%d), MinResourceUseTime(%u), Response(%d), RejectCause(%d)
%s: FAIL - Searcher Pause Done received with NULL pointer
%s: FAIL - Searcher Pause Done received with Invalid ClientId(%d)
%s: FAIL - Searcher PauseDone received from Unregistered ClientId(%d), RAT(%d), State(%d)
%s: FAIL - dRManagerObj is NULL
%s: SUCCESS - RAT(%d), State(%d) MsgValid(%d)
%s: FAIL - DR-Manager failed to process PauseDone for ClientId(%d), RAT(%d), State(%d)
%s: FAIL - Searcher Resume ready received with NULL output pointer
%s: FAIL - Searcher Resume ready received with NULL pointer
%s: FAIL - Searcher Resume ready received with Invalid ClientId(%d)
%s: FAIL - Searcher Resume ready received from Unregistered ClientId(%d), RAT(%d), State(%d)
%s: FAIL - dRManagerObj is NULL
%s: SUCCESS - RAT(%d), resumeNow(%d)
%s: FAIL - DRManager failed to process ResumeReady for ClientId(%d), RAT(%d), State(%d)
%s: FAIL - Searcher Release received with NULL pointer
%s: FAIL - Searcher Release received with Invalid ClientId (%d)
%s: FAIL - Searcher Release received from Unregistered ClientId(%d), RAT(%d), State(%d)
%s: FAIL - dRManagerObj is NULL
Dereferenced NULL pointer : timeKeeperObj
%s: SUCCESS - RAT(%d)
%s: FAIL - RAT(%d), DR-Manager failed to process SearcherRelease
SRL1RC_REJ_RECOVERY_CODE - Resetting RFConsecutiveReject for rat %d, resetting LastOtherClientRFRequestReason to NULL
SRL1RC GRANT - RAT(%d), RequestReason(%d), Response(%d), clientId(%d), clientAITSkipped(%d)
SRL1RC GRANT - RAT(%d), RequestReason(%d), Response(%d), OtherClientRequestReason(%d), 3GFDRsimInfo(%d), isAITSetNeeded(%d)
SRL1RC_REJ_RECOVERY_CODE - First paging reject for rat %d, set LastOtherClientRFRequestReason to %d
SRL1RC_REJ_RECOVERY_CODE - Incremented RFConsecutiveReject[rat = %d] = %d
%s: Continuous paging rejects reached to max 200
SRL1RC_REJ_RECOVERY_CODE - Resetting RFConsecutiveReject for rat %d, resetting LastOtherClientRFRequestReason to NULL as otherclient reason changed or is not a valid reason
%s: Continuous all reason rejects reached to max 5000
S3GF_DRDSDS : Sim info [%u]
SA_DRDS : Sim info [%u]
%s: - NULL clientDB object
%s: - unexpected case - no active client in LTE, HEDGE case(%d)
%s: - no active client
%s: - NULL clientDB object
%s: - NULL clientDB object
%s: - NULL client object
%s: - NULL clientDB object
%s: SADR Info BackUp restored RAt (%d) SAchannelConfigured(%d) SADRsimInfo (%d) isSADRImpossible (%d) Is4RxPath (%d) updateSADRDBClientId(%d)
%s: SADR BPLMN started RAt (%d) SAchannelConfigured(%d) SADRsimInfo (%d) isSADRImpossible (%d) Is4RxPath (%d) updateSADRDBClientId(%d)
%s: SUCCESS - Initialization Complete
%s: scchOrderActThrotStatus getter function registered
%s: scchOrderActThrotStatus getter function NULL
%s: RFStackGetDrConfig getter function registered
%s: RFStackGetDrConfig getter function NULL
[SRL1RC_DRDSDS_StatDbg] %s: Invalid input
[SRL1RC_DRDSDS_StatDbg] %s: 3G DR-DSDS Available now, PCH-PCH count=%d, DrxCycle1=%d, DrxCycle2=%d
[SRL1RC_DRDSDS_StatDbg] %s: 3G DR-DSDS not Available due to AGC Diff(%d), PCH-PCH count=%d
