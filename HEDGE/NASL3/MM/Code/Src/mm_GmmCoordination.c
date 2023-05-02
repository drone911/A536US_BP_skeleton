Initialisation of <MmGmmCoordination>, InitType=%d
mm_MsOperationMode = %d
Unknown Initialisation Type (%x) in mm_InitialiseGmmCoordination
Network did not send Equivalent Plmn List!!, But, RPLMN is in EHPLMN list.Save EHPLMN list as Equivalent PLMN list
Cause = %s
FLAI list is not sent to AS for normal cell selection
No ID (%x) used in mm_CoordinateCombinedAttCnf
Network did not send Equivalent Plmn List!!, But, RPLMN is in EHPLMN list.Save EHPLMN list as Equivalent PLMN list
Network has accepted the Follow On Req, RR Con will be Kept Alive !!!
Combined Attach Confirm Cause = %s in mm_ProcessCombinedAttCnfCause ...[24.008]-4.7.3.2.3.2
Combined Attach Reject Cause = %s
CoordinateCombinedAttRej, MM Update status = %d
Switching to MM_NETWORK_MODE_2 !
FLAI list is not sent to AS for normal cell selection
mm_GetGmmAttachType = %d
Fast display in-service under specific condtion(NMO II, U1 updated, same LAI), LU Attempt cnt = %d, MM Update status = %d
mm_CoordinateCsOrMode2CsPsAtt
Set mm_UrrcGmmRelReqSentFlag to FALSE, release request will be sent during power off detach
No Need to release existing RR Connection, we can directly trigger IMSI detach
CS Not Enabled, Operatio Aborted in mm_CoordinateNetworkImsiDetReq
Detach Cause = %s
Switching to MM_NETWORK_MODE_2
Switching to MM_NETWORK_MODE_2
dont perform network fail actions for network initiated detach with cause NETWORK FAILURE
No Coordination Necessary for this Cause
%s in mm_CoordinateUncombinedRauCnf
Network did not send Equivalent Plmn List!!, But, RPLMN is in EHPLMN list.Save EHPLMN list as Equivalent PLMN list
Deletion of equivalent PLMN list..
No coordination action required.
No coordination action required for this cause.
Uncombined Attach Reject with Cause #25 but not integrity protected or Not UMTS or Not camped CSG cell
CSG Not supported, Invalid Cause : MM_NOT_AUTHORISED_FOR_CSG
FLAI list is not sent to AS for normal cell selection
Retrieving the old TMSI : %x %x %x %x, LAI : %x %x %x
Indicate other stack about stopping of T3246 on Combined RAU accept
Stopping CS Congestion Timer in COM RAU ACC
The Combined RAU proc. was caused by a Call setup req. Now it can be Processed
Network will keep PS connection alive, so should try the pended call immediately
Network will give release. CM service request will fail even it tries to send. Call will be tried when MM gets CELL_IND
Network did not send Equivalent Plmn List!!, But, RPLMN is in EHPLMN list.Save EHPLMN list as Equivalent PLMN list
Cause = %s
RAU Attempt Count >= MAX, Switching to MM_NETWORK_MODE_2
Cause = %s
Cause = %s
FLAI list is not sent to AS for normal cell selection
CSG Not supported, Invalid Cause : MM_NOT_AUTHORISED_FOR_CSG
Combined RAU Reject with Cause #25 but not integrity protected
Deleting sim data
RAU attempt count -> %d
Stored LAI ->
Serving cell LAI ->
Saving the TMSI : %x %x %x %x, LAI : %x %x %x
Deletion of equivalent PLMN list..
Cause = %s
No Coordinate Necessary for this Cause
Transition from GMM_SUSPENDED to %s on successful GSM to UMTS RAT change...
Transition from GMM_SUSPENDED to %s on successful GSM to UMTS RAT change...
Final Cause for MM-GMM Cordination : (0x%X)....
mm_CordinateActionsForPsRelease : (0x%X)....
mm_InitRrRelCoordActionParams - Action: %d, Cause: %d
Doesn't need to save action : (0x%X)....
ERROR: Invalid proposed Action (0x%X)....
Doesn't need to save action : (0x%X)....
Set mm_RrRelCoordActionCause: %d
mm_ResetRrRelCoordActionCause: %d
mm_RrRelCoordAction = %d
Invalid Rr Rel Coord Action (%x) in mm_InitRrRelCoordActionParams !!
Invalid RejCause in mm_GetUrrcCellRejType ...!
Setting Network mode -> %s
Unknown Network Mode (0x%02X), Setting it to NETWORK_MODE_2 in mm_SetNetworkMode
Invalid MsOperationMode (%x) in mm_GetCurrentMobileClassMode
GMM state was %s prior to suspension of GPRS
Checking for active GMM procedures in %s.%s
Resetting values in mm_AbortAnyGmmActiveProcedure
...no action required
...no action required
GMM state is back to DEREG from REG.INIT , so reset GmmRegistStatusCause
...no action required
ERROR: Undefined GMM state
mm_InitExtraMsgInSameRrFailActionParams:
No Actions to perform in mm_InitExtraMsgInSameRrFailActionParams
mm_ExtraMsgInSameRrFailAction = %d
mm_GmmExtraMsgInSameRrFailAction = %d
ERROR: Invalid proposed Action (0x%02X)....
GCF mode is enable or mm_GmmExtraMsgInSameRrFailAction is zero ( %d )
mm_ExtraMsgInSameRrFailAction -> %s in mm_PerformExtraMsgInSameRrFailAction
mm_GmmExtraMsgInSameRrFailAction -> %s in mm_PerformExtraMsgInSameRrFailAction
NeedCellInd: %d
Foreground PLMN search is going on. Do not perform extra msg in same RR fail actions
Gmm State is not GMM_SERVICE_REQUEST_INITIATED, in mm_PerformExtraMsgInSameRrFailAction
Ongoing proc on the other Stack: %s, Reject the EST_REQ
mm_GmmExtraMsgInSameRrFailAction is initialized because RRC Con is released or PS Sig Con Rel comes 2times..
Current Ms Operation Mode: %s
mm_RrRelCoordAction: %d
MM NetworkMode -> %s
Ms Operation Mode: %s
...GMM procedure shall NOT be progressed on same RRC connection
...GMM procedure shall NOT be progressed on same RRC connection
...GMM procedure may be progressed on same RRC connection
...GMM procedure may be progressed on same RRC connection on %s expiration
...GMM procedure shall NOT be progressed on same RRC connection
SameRrConnexFailAction -> %d in mm_CoordinateGmmProcSameRrConn but it will not be executed..
Checking for IMSI/GPRS detach procedure on same RRC connection actions...
IMSI detach procedure has not yet completed.
GPRS detach procedure has not yet completed.
Both IMSI and GPRS detach procedure has not yet completed.
but detach action is not GMM_CS_AND_PS_DET_ACTION.
mm_CordinateActionsForCsPsRelease: MmCause: %d, GmmCause: %d, CordinateCause:%d
No Coordination Necessary for this Cause
