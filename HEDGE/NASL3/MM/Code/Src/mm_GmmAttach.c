Initialisation of <Authentication>, InitType=%s
EncodedSizeinBits -> %d
Skip to send REG_STATUS_IND during Mode Change is progress.
Discard NS_MM_ATT_REQ
Cell Data Access Barred
Saving NS_MM_ATT_REQ for later ...
NMO=%d , GAPI Attach Req Type =%d
Request for GPRS Attach Only, mm_ProcessGmmGprsAttachReq
GMM Attached !
GMM NOT Attached !
GMM Attached !
GMM NOT Attached !
NMO II, Reg status ind should be pended under specific conditions(NMO II, U1 Updated, same LAI)
Skip to send REG_STATUS_IND in CS reject and PS accept case or Mode Change is progress.
Postponing Lau..
Attach will not be done, since we are in the process of Power Off
Ongoing proc on the other Stack: %s, Don't start another CS/PS sig
MM_DSNC - Sending StandbyReq when grant is not allowed, so that it gets updated in pending proc list at SRNC
GMM is in Suspended state or CS signal establishment is ongoing, So ATTACH should not be triggered. Setting ATTACH Needed flag
Attach cannot be performed since MM_ALLOW_PS_REGISTRATION is set to FALSE
Attach cannot be performed during T3346 running..
Attach Req will be delayed during Manual PLMN searching..
Attach Req is already pended, Waiting for completion of MPLMN
Fast display in-service under specific condtion(NMO I, U1 updated, same LAI)
MS network capability....length = %d, AttachType = %s
DRX parameter....
Old routing area identification @ EUtran ->
Old RAI @ SIM
MS radio access capability....length = %d
TMSI status = no valid TMSI available
UE Network Capability ->
PtmsiType = %d
HcommonNasRelVersion = %d
PtmsiType = %d
Resetting values in mm_DecodeGmmAttachCnfMsg
FOP is off so we wait for RR release
NewMCC : 0x%x, OldMCC : 0x%x
isMccChanged : %d, isEmerNumberBlank : %d, mm_GetLastSentMcc : 0x%x
Ignore Attach Accept in already REGISTERED State
NW gives Attach result as combined even thogh NMO 2
Discarding ATTACH_ACCEPT as contains semantically incorrect contents:< combined attach requested but GPRS only accepted and GMM cause IE not present >
Discarding ATTACH_ACCEPT as contains semantically incorrect contents:< combined attach requested but GPRS only accepted and abnormal GMM cause IE present >
Processing ATTACH_ACCEPT to get PS service eventhough it's NW issue:< GPRS attach only requested and GPRS only accepted but GMM cause IE is present >
NetworkFeatureSupport reset on ATTACH reject From network
Cause #25 received with out integrity protection, descard reject message
Power off detach is pending Hence discarding RAU retrails
Perform TbfRelAction, MM_COORD_TBF_REL_ACTION
Cause = %s (%x)
CSG Not supported, Invalid Cause : MM_NOT_AUTHORISED_FOR_CSG
ERROR!! LAC or RAC is not matched between cell_ind and accept msg

Eutran inter RAT handover information length shall not be over 255 octets..
Utran inter RAT handover information length shall not be over 248 octets..

Cipher State -> %s, PduId -> %04X
Resetting Attach attmept count (%d)
Invalid AttachReqAction(%x) in mm_GetGmmAttachReqFromReqAction, Selecting GMM_NET_GPRS_ONLY_ATT instead !!
Attach Request Action -> %s
mm_GmmAttachDb[MmStackId].mm_MsRadioCapability_PRR[0] in mm_GetMsRadioAccessIeData= %d , Temp_MmRadioAccessTechManagementDb->mm_MsRadioAccessCapIeBitLength_new in mm_GetMsRadioAccessIeData= %d
Attach Type -> %s
Attach Result FOP -> %s Attach Result Type -> %s
Gapi Attach Request Type -> %s
Gmm Retransmission Count = %d
Gmm Attach Attempt Count = %d
NO ATTACH ACTION:%s (line%d)
Wrong Action =%d
MM_DSNC - Discarding NS_MM_ATT_REQ due to CS CALL on other stack
MM_DSNC - Saving NS_MM_ATT_REQ, Ongoing proc on other stack: %s
MM_DSNC - Check if abnormaly PS proc is stuck in other stack
MM_DSNC - Sending StandbyReq when grant is not allowed, so that it gets updated in pending proc list at SRNC
Msg Saved For later because we have not yet received ACK for detach accept
MM Svc State: %d, RAT Change- %d, Request Type - %d, Gmm State - %d
Ignoring NS_MM_ATT_REQ as MM received INVALID Combination of service
RatChange: %d, MmcSuspensionOngoing: %d
QRB in progress
Discard NS_MM_ATT_REQ to prevent unexpected PS REG
Discard NS_MM_ATT_REQ to prevent unexpected combined RAU during T3311 running
CurrentTlliType = %s
detach with not re-attach type, So send clear queue to LLC
Force to Standby indicated = %s
Periodic RAU timer (GMM_T3312)...
ERROR: ATTACH_ACCEPT RAI IE does not match RAI of current cell....
Assigned GMM_T3319...
Assigned GMM_T3323...
Network Feature Support IE value : %d
NetworkFeatureSupport IE not received
T3312 Extended value received is: %d seconds
GMM Attached !
GMM NOT Attached !
Attch Action : GMM_COMBINED_ATT_ACTION...Abnormal Paging
Attch Action : GMM_PS_ATT_ACTION...Abnormal Paging
WARNING : DETACH procedure is on progress, so not sending REGI_STATUS
NMO II, Reg status ind should be pended under specific conditions(NMO II, U1 Updated, same LAI)
KSI = %d
GCKSN = %d
EUTRAN P-TMSI ->
IMSI....
P-TMSI.... 0x%x, 0x%x, 0x%x, 0x%x, 0x%x
P-TMSI....
Old P-TMSI signature....
Old P-TMSI signature....
Old P-TMSI signature....
Old P-TMSI signature....
Supported Codec Length is 0
Additional P-TMSI->
Additional RAU->
Voice_Domain_Pref_ENABLED = %d, CsServiceSupport =%d, VoiceDomainPref =%d
voice domain Pref-> %x
Extended T3312 is supported
Encode Old LAI IE

MSG Contents: %s

Cipher State -> %s, PduId -> %04X
skip to send Reg_ind_status at this point, and handle it after LU proc
QRB is considered and state:%s
FOP is On so we Can Send SM Data Directly
Network Sent Emergency List !!!
Emergency list length is 0 or more than 16, %d
Emergency List ptr is NULL!!!
Attach Accept is not Ciphered
Attach Accept is Ciphered
mm_SendGmmAttachCompleteMsg
MM_GPRS_ATTACH_COMPLETE_TBF_REL_ACTION set
Detach REQ is sent over REG_INIT state, invoke local detach
State Mismatch occurred and Retry ATTACH procedure..
Perform TBF release action in case of Attach complete is not sent
