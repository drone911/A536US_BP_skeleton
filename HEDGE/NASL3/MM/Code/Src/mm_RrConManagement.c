Clearing Cell Congestion flag
Timer MM_WFNWC is not started, Since GCF Mode is enabled
in case of 2G GSM only cell to 3G CS+PS cell, PS cell data should be processed
URRC_MM_REL_IND came after REL_CNF while MM_WAIT_FOR_SCR_BEFORE_LAU time is running, perform LAU
CS procedure is not CS CALL, not expected
G2L redirection will be initiated.
G2U redirection will be initiated.
PS resumption failure in GSM, so ISR status change to deactivate & TIN to P-TMSI
URRC_MM_REL_IND came faster than CC Release complete.. NW issue but we handle call release..
LAU is tried on MT CSFB procedure, but SETUP_IND didn't come. So, canceling QRB and wait for paging from 3G NW
Message crossover: RR_MM_REL_IND ignored as MM has already requested release, await RR_MM_REL_CNF
Cause Received RR_CELL_CONGEST
WARNING : REL_IND comes abnormally. MM triggers SMS's retrial by Setting cause as MM_EST_REQ_REJ_CAUSE_UNSPECIFIED
GRR indicated as No cell, so regard the previous CELL_IND as a new one and not waiting for CELL_IND
CallDropCauseForDBGSCR = %d, CallDropTypeForDBGSCR = %d
MM Connection Lost due to No service
CS procedure is not CS CALL, not expected
LAU is tried on MT CSFB procedure, but SETUP_IND didn't come. So, canceling QRB and wait for paging from 3G NW
Sending PagingResponse due to URRC_MM_REL_IND
Invalid Message in this Protocol State
FD will be delayed until RAU completed
mm State = %d ; mm_GetDsDelayCsIdleEntry = %d
QRB New Design: mm_IsCsfb is set to FALSE
LAU is tried on MT CSFB procedure, but SETUP_IND didn't come. So, canceling QRB and wait for paging from 3G NW
Unexpected event that MM connection exists and REL_CNF comes. Synchronizing MM/CC state
WARNING : this REL_CNF is duplicated one, so ignoring it
QRB State:%s
cRAU will be pended until GMM_REL_CNF + CELL_IND comes
mm_GetRrMmRelReqSentFlag = %d, so ingoring DATA_IND
Paging will be pended unitl SCR or CELL_IND
MT paging is received during PS detach, invoke local detach to avoid delay
SIM is opening status and MT cause is not SMS, so discard the PAGE_IND (cause :%d)
Paging with same type of ID comes -Waiting for call, but NW is still paging, so extend T3240 and wait for NW's response
Paging with different type of ID comes -Waiting for call, but NW is still paging, so extend T3240 and wait for NW's response
Current Paging is for MT call , so ignoring previous paging for Low priority Signalling !!
NMO1 and GMM was attempting to update case.
Mobile Id is Valid -> O.K.....
TMSI is NOT Valid -> Paging Response Not Allowed.
Mobile Id is NOT Valid -> Paging Response Not Allowed.
RAT suspension has been requested -> ...paging request ignored
SIM State is NOT Valid -> Paging Response Not Allowed.
UpdateStatus != MM_UPDATED && ServiceState() != MM_ATTEMPTING_TO_UPDATE -> Paging Response Not Allowed.
UpdateStatus == MM_NO_IMSI -> Paging Response Not Allowed.
Incorrect Plmn State, != MM_ON_PLMN -> Paging Response Not Allowed.
Current Mobile Operation Mode == MM_MOBILE_CLASS_C_PS -> Paging Response Not Allowed
Access Class Barred -> Paging Response Not Allowed.
CS Domain is Supported by Current Cell -> Paging Response Not Allowed.
Not Attached to CS Domain Yet -> Paging Response Not Allowed.
CS and PS detach procedure is in progress
MM State != MM_IDLE (Or) mm_RrMmRelReqSentFlag is TRUE -> Paging Response Not Allowed.

T3212 Timeout detected and probably LAU not triggered since MM_CELL_CONG_WAIT_3122_EXP_FLG was set, So performing T3212 expiry actions
Ignoring Sequence Number in mm_SendRrDataReqMsg. Current Sequence Number -> %d
WARNING : Not sending REL_REQ, because it is already sent before
FD will be delayed until RAU completed
Delay 2G QRB action under PLMN searching period as per LAU abnormal failure over max attempt count
Paging will be retrieve
Trigeering LAU after Cs connection release
EMER CALL: MM_CM_SERV_REJ_IMSI_UNK_FLG will be cleared later
MM_CM_SERV_REJ_IMSI_UNK_FLG: Set LAU_NEEDED flag to TRUE
QRB state:%s
QRB state:%s
Power off detach is pending Hence discarding LAU retrails
Not sending MM_CC_ERR_IND for attempting emer call.
Resetting TBF Release Actions
Not sending EST_ERR to CM, because the resource is already released
Changing RATs Due To RR Est Rej Cause, Please Wait..... !!!
Wait for RR Release Before Requesting a RAT Change ..
Resetting values in mm_PerformLocUpdAbnormalRelActions
LU procedure is failed due to U2L Inter rat reselection and LU should be re-tried on CELL IND..
Rat Change failure happened and LU procedure should be cancled..
Sim: %d, Compile RAT: %d
Location Update Triggered, during D to H handling
RR Rel Cnf Action = %x, CsDomainAccessIsAllowed =%d
Invalid RR Rel Cnf Action (%x) in mm_InitRrRelCoordActionParams !!
We will do RAU in REL_IND
RR release cause -> %s
CmCause = %x
CmCause = %x
URRC EST REJ cause -> %s
URRC release cause -> %s
Paging ID Type -> IMSI
Paging ID Type -> PTMSI
Paging ID Type -> IMEI
Paging ID Type -> TMSI
Paging ID Type -> IMSI
Paging ID Type -> PTMSI
Paging ID Type -> IMEI
Paging ID Type -> IMEISV
Paging ID Type -> TMSI
Paging ID Type -> NO ID
Call is re-started, and Quick RB was on-going, so make it stand-by.
QRB is pended and call is trigger. GmmCellInfo will be processed after call release.
QRB is triggered about 3G normal MT voice call.
UrrcRelReqSentFlag is reset in mm_SendUrrcDataResumeOnGsmInd

mm_GetEnableIratToLte = %d, mm_GetCcRedialing = %d, mm_GetQrbForCallAbort = %d, ,mm_GetQrbPendingForEutraEnabled = %d
mm_GetQuickRollbackG2LEnabled = %d, mm_GetG2LQrbEnableRPlmn = %d, mm_GetPendingQrbFromAP = %d, mm_GetIsCsfb = %d
Setting IS CSFB to False
QRB_G2L is triggered after L2G CSFB call or due to Eutra enabling after PS switching
QRB_G2L is not triggered.
QRB_G2L is not enabled.
QRB_G2L is aborted..
QRB_G2L is aborted by GRR..
QRB_G2L is triggered. Mode = %d :: 0 Stop 1 Start 2 QRB triggered by AP
Target Rat for qrb = %d ::0: QRB_RAT_LTE 1: QRB_RAT_NR
U2L QRB mode updated in RPLMN, Mode = %d :: 0 Disabled 1 Enabled
mm_DecodeRrMmTbfStatusInd: PDP Context Status is %d %d
Tbf Status received: %d
mm_UmtsMode : %d in mm_SendMmRrcUpdateDuplexModeInd
PS Support %d, PDP Active %d
mm_RrRelIndAction: (%d)
Invalid RR Rel Ind Action (%d)
Invalid RR Rel Ind Action (%d)
Wrong Action =%d
RRC PDU Tx table entry %d has been reserved with PduId %04X...
...for transmission of %s message
...for transmission of a non-GMM message
ERROR: Table is already full...
PduId %04X confirmed as entry %d in RRC PDU Tx table
ERROR: PduId %04X does NOT match appropriate table entry...
ERROR: PduId submitted for confirmation has the value NOT_RRC_PDU...
Checking RRC PDU Tx table for PduId match...
PduId 0x%04X matched...
...corresponding to %s
...corresponding to a non-GMM RRC PDU
ERROR: PduId 0x%04X does not match that of first active entry...
PduId 0x%04X matched...
...corresponding to %s
...corresponding to a non-GMM RRC PDU
PduId -> NOT_RRC_PDU
First active entry removed from the RRC PDU Tx table...
PduId %04X does not match first active entry in the RRC PDU Tx table...
active entry matched in the RRC PDU Tx table at %d
Flushing the following %d active entries from the RRC PDU submit table...
-------------
No active entries to flush from the RRC PDU submit table...
Entry number %d corresponds to PduId = %04X
==> GMM PDU
==> %s
==> Non-GMM PDU
-------------
No more CS call exist on Non Internet DDS stack so trigger to release PS sig con.
2G DTM : Set GMM state to previous one
Need to trigger Cell update as UE moved from CS Idle to CS dedi in P.Idle Mode
[GET]mm_NrQrbNeeded flag is :%d
[SET]mm_NrQrbNeeded flag is :%d
mm_IsNrQrbNeeded returns :%d
Current QRB State:%s,Current QRB Event:%s
Setting state to MM_QRB_IDLE due to check mm_Check2GQRBForSKTKT()
RPLMN_QRB_CONTROL feature is enabled
G2L QRB enabled in this RPLMN
U2L QRB enabled in this RPLMN
Setting state to MM_QRB_IDLE due to U2LQrbEnable:%d or G2LQrbEnable:%d
After RAU accpet during CSFB, Registered PLMN was changed Need to clear QRB flag.
Setting state to MM_QRB_NOT_ALLOWED as QRB based On RPLMN is disbled
Keping MM_QRB_READY to do ModeUpdate or Ps switch QRB
Keping MM_QRB_READY to do ModeUpdate or Ps switch QRB
RPLMN_QRB_CONTROL feature is disabled, So setting state to MM_QRB_NOT_ALLOWED
QRB Feature is already enabled by registry
QRB Feature is enabled as per registry , Setting QRB state to MM_QRB_IDLE
QRB Feature is disabled as per registry , Setting QRB state to MM_QRB_NOT_ALLOWED
Keping MM_QRB_READY to do ModeUpdate or Ps switch QRB
QRB Feature is enabled on AP request , Setting QRB state to MM_QRB_IDLE
QRB Feature is disabled after completion of AP request , Setting QRB state to MM_QRB_NOT_ALLOWED if needed
Keping MM_QRB_READY to do ModeUpdate or Ps switch QRB
Putting back saved cell ind pointer inside mm_HandleNextActionOnQrbStop
QRB_G2L is aborted by G2L redirection.
QRB not ongoing!! Ignore..
Timer for Quick Rollback is expired! Giving up to rollback to LTE..
QRB not ongoing!! Ignore..
QRB Event is not acccepted in current QRB state ,So Ignoring Event
QRB feature is disabled .
QRB not possible due to ongoing Rat Mode Change Procedure or UE is not camped on cell
mm_IsCsfb is set to %d for emergency call during Limited Camping,QRB not triggered
mm_GetEnableIratToLte = %d, mm_GetCcRedialing = %d, mm_GetQrbForCallAbort = %d, ,mm_GetQrbPendingForEutraEnabled = %d
mm_GetIsCsfb = %d, mm_GetIsSrvcc = %d
QRB Conditions are not met.
QRB not possible for event received or QRB is already initated
QRB feature is disabled .
QRB is paused on new call trigger. GmmCellInfo will be processed after call release.
Trigger QRB Init Req from mm_TriggerQrbInitReq
QRB Init Req cannot be triggered in non UMTS rat mode
State Transition from %s==>%s
RRC Connection Released.. Wait for Cell Ind
Signaling Connection Released.. No need to Wait for Cell Ind
Sending PagingResponse due to URRC_MM_REL_IND
[HongKong Network]Clearing QRB, inorder to Trigger LAU in this abnormal scenario, to receive Setup From network
WARNING : REL_IND comes abnormally. MM triggers SMS's retrial by Setting cause as MM_EST_REQ_REJ_CAUSE_UNSPECIFIED
Silent re-dial!!! PAGING RSP failed with URRC_EST_REJ Retry Paging Responce
QRB New Design: mm_IsCsfb is set to FALSE
mm_IsCsfb is kept for silent redialin..
QRB New Design: mm_IsCsfb is set to FALSE
QRB State:%s
Set attachNeeded Flg to TRUE, waiting for CELL_IND
MM_IDLE: LAU will be triggered after timer expired, to avoid a collision of REL_IND
EMER CALL: MM_CM_SERV_REJ_IMSI_UNK_FLG will be cleared later
User PLMN will be retrieved after URRC_GMM_REL_CNF
User PLMN will be retrieved after GRR_MM_RESEL_HOLD_CNF
N/W intiated IMSI detach while CS conn active for class A MS in Network Mode I -> GMM Shall Re-attach to Non-GPRS Service by Performing the Combined Routing Area Updating Procedure with IMSI attach
SUSPEND REQ will be sent after URRC_GMM_REL_CNF
SUSPEND REQ will be sent after URRC_GMM_REL_CNF
AP disabled QRB so event is ingored.
QRB is triggered due to PS enabled in Global mode/ModeUpdate to LTE .
After CSFB release, QRB will be trigered .
After Rel Cnf QRB will be triggered due to PS enabled in Global mode/ModeUpdate to LTE.
MM not in Idle, QRB will be initiated after moving to Idle
QRB Due to PS switch/ModeUpdate is not possible as Rat is not 2G/3G
Previously set Qrb Cause is retained(EitherPSswitch or ModeUpdate
QRB not possibe for event received
