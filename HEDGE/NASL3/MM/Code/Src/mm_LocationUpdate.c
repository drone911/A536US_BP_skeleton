No need to set MM_NULL state Detach will be triggered
Location Update Type -> %s Cannot be performed due to T3246 Running
Postpoing the Location Update Attempt as Emergency call is pending. LAU Type: %d
We are waiting for REL CNF from RR/RRC
Location Update Type -> %s Cannot be performed, Since MM_ALLOW_CS_REGISTRATION is set to FALSE
Ongoing proc on the other stack: %s, Don't start another CS/PS sig
MM_DSNC - Sending StandbyReq when grant is not allowed, so that it gets updated in pending proc list at SRNC
Attempting to Perform Location Update.....[24.008]-4.4.1
Sending CSFB Status indication to NS, to indicate to SIPC
Mobile ID is Present in Loc Upd Acc
Network sent IMSI as Mobile ID!!, so delete TMSI
Network sent TMSI as Mobile ID.....
Old
New
Network Sent NO_ID_TYPE Mobile ID !!!
Mobile ID is NOT Present in Loc Upd Acc
Received LAI -> 0x%02X 0x%02X 0x%02X 0x%02X 0x%02X
The Loc-upd proc. was caused by a Call setup req. Now it can be Processed
Network has accepted the Follow On Req, RR Con will be Kept Alive !!!
Network has NOT Accepted the Follow On Req, CM Req has to bs Sent After RR Con is Released
Network Sent Equivalent Plmn List !!!
Network did not send Equivalent Plmn List!!, But, RPLMN is in EHPLMN list.Save EHPLMN list as Equivalent PLMN list
EPLMN list of LU Accept is different from one of ATTACH/RAU accept.. Don't remove Equivalent PLMN list
Starting T3212 with the value given in Per MS T3212 IE: %d secs
Starting T3212 with the value received from broadcast
%s in mm_DecodeLocUpdAccMsg ...[24.008]-4.4.4.6
mm_SimDb[MmStackId].mm_UpdateStatus = %s
Resetting values in mm_DecodeLocUpdAccMsg
Loc Upd Acc should not be received in this state !!??
Loc Upd Acc should not be received in this state !!??
%s in mm_DecodeLocUpdRejMsg....[24.008]-4.4.4.7
mm_UpdateStatus = %s
Loc Upd Reject Cause -> %s
Entering mm_CheckAndPerformLocUpdForCmReq...
Entering mm_DetermineLocUpdActionForCmReq...
Sending IMSI Detach Message, Establishing RR Connection
Sending IMSI Detach Message, Not Establishing RR Connection

Sending IMSI Detach Message, Establishing URRC Connection


Sending IMSI Detach Message, Not Establishing URRC Connection
Sending of IMSI Detach Message Not Required
copying RAI information, since it might not be saved as part of LAU.
MM will adding this PLMN to FPLMN list
Deleting PS information also
Deleting EPS information also in NON LTE operating mode
FLAI list is not sent to AS for normal cell selection
Performing Location Update Reject Actions...[24.008]-4.4.4.7
Replacing LU reject cause with Network Failure for attempting emer call.
Location Update shall be performed when a New Cell is entered
CSG Not supported, Invalid Cause : MM_NOT_AUTHORISED_FOR_CSG
Entering mm_ProcessLocUpdRejAbnCaseAToC
Cause Received RR_CELL_CONGEST
2 Consecutive Failures Detected in mm_DetermineLocUpdFailureCause
Processing LocUpdRej Abonrmal Case D To H
Loc Upd Reject Cause -> %s
RrRelCoordActionCause -> %s
Not deleting equivalent list when cell data lai is equivalent plmn but not selected PLMN
No need sync with T3211 due to Orange requirement
T3311 restarted to sync with T3211
No need sync with T3211 due to Orange requirement
T3311 restarted to sync with T3211
LAU_ACCEPT discarded due to integrity conditions failure: 4.1.1.1.1 @ 24.008

REGNOK_NOSEL is sent because PLMN search will be triggered.
%s in mm_DecodeLcsIndMsg
mm_UpdateStatus = %s
NewLcsState =%d
Invalid Location Update Request, %d
Location Update Attempt Count Reset
Location Update Type -> %s
Location Update Attempt Count = %d
RR Registration Result -> %s
Location Update Action -> 0x%02X
Location Update Action -> %s
Allow CS Registration Access since MM_ALLOW_CS_REGISTRATION is TRUE
Do Not Allow CS Registration Access since MM_ALLOW_CS_REGISTRATION is FALSE
Network Mode is 1 & GMM Not Registered or Network Mode is 2 -> OK (6 of 6)
CS Domain Access Not Allowed -> Network Mode is 1 & GMM Registered
Cell in FORBIDDEN list
CS Domain Access Not Allowed -> Cell Does Not Support CS !
CS Domain Access Not Allowed -> MM_NOT_REGISTERED_ERR !
CS Domain Access Not Allowed -> GMM_COVERAGE_LOST_ERR !
CS Domain Access Not Allowed -> MM_SIM_CONSIDERED_INVALID_ERR !
CS Domain Access Not Allowed -> MM_ACCESS_BARRED !
Skip for Checking Cell data
Cell Supports CS Domain -> OK (6 of 6)
CS Domain Access Not Allowed -> Cell Does Not Support CS
CS Domain Access Not Allowed -> MM_NOT_REGISTERED_ERR
CS Domain Access Not Allowed -> GMM_COVERAGE_LOST_ERR
CS Domain Access Not Allowed -> SIM update status is %s
CS Domain Access Not Allowed -> MM_SIM_CONSIDERED_INVALID_ERR
CS Domain Access Not Allowed -> MM_ACCESS_BARRED
Reject Cause -> 0x%02X in mm_PerformGprsAttachRejectCauseProcessing()
AttachType -> %d
NewMNC : 0x%x
(PREVENTION) Don't send LAU_REQ when REL_IND if NW gave wrong LAI. ()
(PREVENTION) Don't send LAU_REQ when REL_IND if NW gave wrong LAI. ()
mm_LaiMismatchCounter is %d
SIM LAI and Cell Data LAI Matching
in mm_ProcessPostPerformLocUpdRejActions
PMM_CONNECTED -> mm_PerformLocUpdFailPlmnActions Delayed
Sending Invalid Cksn (7) as Update Status is MM_NO_IMSI
AdditionalUpdateParam = %d
HcommonNasRelVersion = %d
Extended T3212 is supported
mm_SendLocUpdReqMsg .... Type -> NORMAL
mm_SendLocUpdReqMsg .... Type -> PERIODIC
mm_SendLocUpdReqMsg .... Type -> IMSI_ATTACH
mm_SendLocUpdReqMsg .... Type -> Invalid LocUpdType in rat mode %d



Starting T3240 timer only for 3 seconds for CMCC Network
T3240 duration in seconds %d
Network Sent Emergency List !!!
Emergency list length is 0 or more than 16, %d
Emergency List ptr is NULL!!!
NewMCC : 0x%x, OldMCC : 0x%x
isMccChanged : %d, isEmerNumberBlank : %d, mm_GetLastSentMcc : 0x%x
