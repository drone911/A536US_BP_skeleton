mm_NeedCellIndAfterRelInd -> %d
mm_NeedGmmRelInd -> %d
Stopping Timers T3311, T3302 in order to do an Attach Immediately ...[24.008]-4.2.4.2.2
Saving Msg for later as GMM is due to service a CELL_IND
Msg Not Accepted in this Service State, Rejecting CM Req
Saving Msg for later

Initiating GMM Service Req Procedure
RAU before uplink signalling/data transmission following intersystem change between cells belonging to same RA
Already in PMM_CONNECTED State -> Confirming CM Layer Est Req Immediately
Invalid Functional State -> PMM_DETACHED
Confirming CM Layer Est Req Immediately
GMM_CM_EST_CNF_FLG was already set by (%s) or Nsapi (%d).
Saving Msg for later
Msg Not Allowed in this State, Rejecting CM Req
Unable to Stop HPlmn Search Immediately -> Saving CM Layer Req Msg for Later Use
Saving Msg for later
Saving Msg for later: SCRI pending
Saving Msg for later: Registration ongoing
Saving Msg for later: SERVICE_REQ_INIT state
URRC_GMM_EST_CNF Not Allowed in PMM_CONNECTED, Ignoring Msg
Service_Request here is: %d
Service_Request here is: %d
EST CNF received in GMM DEREGISTERED State
LAU triggered because of CSFB call release
Redirection to GSM is received,
Reselection from U2L is received
Network redirection to LTE is received, so need not process Same RR connection actions
GMM functional state is not matched with URRC, need to release current RRC connection once again
Checking release type : %d
RRC connection is still alive : Will not wait for CELL_IND
T3311 restarted to sync with T3211
Network redirection to LTE is received, so need not process Same RR connection actions
Message crossover: URRC_GMM_REL_IND ignored as GMM has already requested release, await URRC_GMM_REL_CNF
Reset MM_CS_CALL_RESUMED_FLAG
Message crossover: URRC_GMM_REL_IND in while in GSM RAT No Need to do Any Actions Keep it as it is
Network redirection to LTE is received, so need not process Same RR connection actions
Not Expected in This State in mm_DecodeGmmAsRelCnfMsg:
CS and PS both release, so quick rollback to LTE will be done Immediately:
QRB state:%s
Resetting values in mm_PerformGmmRegInitAbnormalRelActions
Power off detach is pending Hence discarding Attach retrails
Resetting values in mm_PerformGmmRauInitAbnormalRelActions
Power off detach is pending Hence discarding RAU retrails

Reset MM_CS_CALL_RESUMED_FLAG
Fast Return is required to URRC in REL_REQ
Fast Return is required to URRC in REL_REQ
Send GMM REL REQ with REL_REQ_ALL_RESOURCES
REL_REQ sent already, Updating GMM Release Cnf Action.. as no action or low Priority action was set
Overwriting PrevAction:%d with New Action:%d
Saving Msg for later

Update Status : GU1 But Cell RAI != SIM RAI
DataReq Not Allowed
RAU procedure 'interupts' service request procedure...
Service State is GMM_REG_ATTEMPTING_TO_UPDATE, SM will send Data after RAU is done
Data Req Received in incorrect State, Aborting Operations
SR Triggered for Data Pending in PMM_CONNECTED
DataReq Not Allowed in This State, stored
entered mm_DecodeGmmAsDataCnfMsg in State = %s
Sending Reject to RABM becaue SR has Failed
GMM Functional state is %s, so ignorning upper layer message
Network Sent FOP False, But received UnitData Ind for SM So make this Flag False
Network Sent FOP False, But MOD_PDP_CONTEXT is sent by NW while CS call is in progress
Network Sent FOP False, But received UnitData Ind for SMS So make this Flag False
Ignoring GMM_PAGE_IND because MPLMN search is on-going
If GmmPageInd is received, T3346 shall be stopped.
If GmmPageInd is received with IMSI, T3346 shall be stopped.
RAT suspension has been requested -> ...paging request ignored
Not Attached to PS Domain Yet -> Paging Response Not Allowed.
mm_SendGmmCmEstRejMsg() -> Source: %d, Cause: %d, DiscardStoredRequest: %d
Req Not Allowed -> GmmServiceState Not Correct
Req Not Allowed -> GmmServiceState Not Correct
Req Not Allowed -> GmmServiceState Not Correct
Access Allowed for Registration since MM_ALLOW_PS_REGISTRATION is TRUE
Access Allowed for Registration since MM_ALLOW_PS_REGISTRATION is TRUE
RAI NOT Part of Any Forbidden List -> OK (9 of 9)
Req Not Allowed -> RAI Part of Forbidden Lists
Req Not Allowed -> GMM_PS_ACCESS_NOT_ALLOWED !
Req Not Allowed -> GMM_RAT_CHANGE_IN_PROGRESS_ERR !
Req Not Allowed -> GPRS Not Allowed in HPlmn
Req Not Allowed -> GMM_NOT_REGISTERED_ERR
Req Not Allowed -> GMM_COVERAGE_LOST_ERR !
Req Not Allowed -> GMM_SIM_CONSIDERED_INVALID_ERR
Req Not Allowed -> MM_ACCESS_BARRED
Req Not Allowed -> GMM_INCORRECT_STATE_ERR !
New Cell Data MM_RR_NO_SERVICE_CELL_FLG -> %s - PS Domain Access Is Not Allowed
User PLMN will be retrieved after URRC_MM_REL_CNF
User PLMN will be retrieved after GRR_MM_RESEL_HOLD_CNF
SUSPEND REQ will be sent after URRC_MM_REL_CNF
MM is not IDLE handle perform LAU after moving to IDLE


GMM RR Release Cnf Action Name -> %s
GMM CM Layer Error Cause -> %s
mm_GmmFollowOnRequested -> %d
mm_GmmFollowOnRequested -> %d
QuickRollbackStatus %d in mm_DecodeGmmAsReleaseIndMsg
QRB state:
WARNING : Fail to turn on FastReturn Status or MM/GMM state is not valid.. (MM state : %d, GMM Functional state : %d)
RRC requested to stop Quick Rollback! Giving up to rollback to LTE..
Quick rollback to LTE will be done, so discarding GMM CM request.
Wrong Action =%d
Set mm_GmmCmReqInProgress = %d
mm_GmmIntfManagementDb[%d].mm_GmmCmReqInProgress = %d
mm_PerformExtraMsgInSameRrFailAction should be reset
mm_PerformExtraMsgInSameRrFailAction should be reset
Discarding Saved GMM SM EST REQ-PDPD DEACT as PDP context status shows Nsapi is deactivated
QRB state:%s
Access allowed for Paging Since MM_PPAC_ALLOW_PS_PAGING is TRUE
Access NOT allowed for Paging Since MM_PPAC_ALLOW_PS_PAGING is FALSE
We are Already in connected mode, So ignoring Paging indication.
PS Domain is Supported by Current Cell -> Paging Response Not Allowed.
Access Class Barred -> Paging Response Not Allowed.
Current Mobile Operation Mode == MM_MOBILE_CLASS_C_CS -> Paging Response Not Allowed
Incorrect Plmn State, != MM_ON_PLMN -> Paging Response Not Allowed.
UpdateStatus == GMM_NO_IMSI_UPD_STATUS -> Paging Response Not Allowed.
GMM SIM State is NOT Valid -> Paging Response Not Allowed.
ServiceState != GMM_NORMAL_SERVICE && ServiceState != GMM_ATTEMPTING_TO_UPDATE_MM -> Paging Response Not Allowed.
Paging Using IMSI -> ...Paging Response Not Allowed.
Incorrect GMM Service State -> ...Paging Response Not Allowed.
P-TMSI is Valid -> O.K...
P-TMSI is NOT Valid -> Paging Response Not Allowed
Paging Using IMSI -> Paging Response Not Allowed
Neither P-TMSI Nor IMSI USed -> ...Paging Response Not Allowed
Paging Using IMSI -> ...Paging Response Not Allowed.
Paging During GMM Specific Procedures -> ...Paging Response Not Allowed.
Incorrect GMM State -> ...Paging Response Not Allowed.
