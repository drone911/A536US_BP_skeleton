Initialisation of <RoutingAreaUpdate>, InitType=%d
If T3323 is expired and UE comes back to NMO1, RAU type should be set as combined LA/RA updating with IMSI attach(0x02)
If T3323 is expired and UE comes back to NMO1, RAU type should be set as normal RAU updating (0x00)
After recovery from OOS, RAU type should be set as combined LA/RA updating with IMSI attach(0x02), previousCell no service flag = %d
If ISR is activated in NMO1, RAU type should be set as combined LA/RA updating with IMSI attach(0x02)
Required 'update type' -> Periodic updating
Required 'update type' -> RA updating (%s)
Required 'update type' -> RA updating (MM_MOBILE_CLASS_C_PS)
If T3423 starts after T3412expiry, RAU type should be set as combined LA/RA updating with IMSI attach(0x02)
If T3423 starts after T3412expiry, RAU type should be set as normal RAU updating (0x00)
Network operation mode change from %s to MM_NETWORK_MODE_1...
Required 'update type' -> combined RA/LA updating with IMSI attach
Required 'update type' -> combined RA/LA updating
MM in MM_LOC_UPD_INITIATED due to previous combined RAU procedure...
Required 'update type' -> %s
Required 'update type' -> RA updating (CS connection already exists)
Periodic RAU procedure to update both LA and RA (i.e. CS and PS domain)
Periodic RAU procedure to update RA only (i.e. PS domain)
Ongoing proc on the other Stack: %s, Don't start another CS/PS sig
MM_DSNC - Sending StandbyReq when grant is not allowed, so that it gets updated in pending proc list at SRNC
GMM is in Suspended state, So RAU should not be triggered. Setting RAU Needed flag
RAU Req cannot be performed during T3346 running..
RAU is not processed
RAU procedure with combined type last_update_is_not_combined is FALSE
RAU procedure with combined type last_update_is_not_combined is TRUE
RAU procedure with Update Type of %s not initiated due to %s
GMM_GSM_CELL_UPD_REQD_FOR_DTM set to FALSE
%s shall be used for RAU procedure
RAU_REQUEST message contents:
Update type -> %s
MS Radio Access Capability ->
Requested READY timer value (GPRS Format) -> %02X
DRX parameter ->
TMSI status -> MS performing a combined RAU and no valid TMSI is available
MS Network Capability ->
PtmsiType = %d
HcommonNasRelVersion = %d
RAU_ACCEPT discarded due to semantically incorrect contents:
< 'RA updating' or 'Periodic updating' (for RA updating only) requested >
< but update result of 'RA updated' and GMM cause IE is present >
Processing RAU_ACCEPT to get PS service eventhough it's NW issue
RAU_ACCEPT discarded due to semantically incorrect contents:
< 'combined RA/LA updating' or 'combined RA/LA updating with IMSI attach' requested >
< but update result of 'RA updated' and GMM cause IE not present >
Update result is mismatched but bypass it to cover TE script error
RAU_ACCEPT discarded due to semantically incorrect contents:
< 'combined RA/LA updating' or 'combined RA/LA updating with IMSI attach' requested >
< but update result of 'RA updated' and abnormal GMM cause IE is present >
RAU_ACCEPT discarded due to integrity conditions failure: 4.1.1.1.1 @ 24.008
Force to standby -> Force to standby indicated
Force to standby -> Force to standby not indicated
Periodic RA update timer -> %02X
Periodic RA update timer will be last received value-> %02X
Routing area identification ->
ERROR: RAU_ACCEPT RAI IE does not match RAI of current cell ->
P-TMSI signature ->
P-TMSI signature -> NOT included
Allocated P-TMSI ->
Allocated P-TMSI -> NOT included
MS identity ->
MS identity -> NOT included
Network has Sent NPD-U List. Attempting to Get SNDCP's Version of this List....
List of Receive N-PDU Numbers -> NOT included
Negotiated READY timer value -> %02X
Negotiated READY timer value -> NOT included
GMM cause -> %s
GMM cause -> NOT included
mm_RauAccCheckAndSetMSInfoIe Value(utran-%d)(Eutran-%d)
T3302 value -> %02X
T3302 value -> NOT included; Setting default value
T3323 value -> %02X
T3323 value -> NOT included
Cell Notification IE (GSM only) included by SGSN to indicate the ability to support Cell Notification
Cell Notification IE (GSM only) NOT included by SGSN
Assigned GMM_T3319...
Equivalent PLMNs ->
Equivalent PLMNs -> NOT included
PDP context status ->
PDP context status -> NOT included
Network Sent Emergency List !!!
Emergency list length is 0 or more than 16, %d
Emergency List ptr is NULL!!!
isMccChanged : %d, isEmerNumberBlank : %d, mm_GetLastSentMcc : 0x%x
Set TbfRelAction to MM_COORD_TBF_REL_ACTION
Perform TBF release action in case of RAU complete is not sent
Resetting values in mm_DecodeRauAccMsg
Update result -> %s
NewMCC : 0x%x, OldMCC : 0x%x
NetworkFeatureSupport IE value received is: %d
NetworkFeatureSupport IE not received
T3312 Extended value received is: %d seconds
SendRauCompleteMsg = %s ||| SendNPduNumbersIe = %s
NwExtUtbf= %d
Re-initiation of the Aborted GRPS Detach Procedure....
skip to send Reg_ind_status at this point, and handle it after LU proc
NwExtUtbf= %d
MM_GPRS_RAU_COMPLETE_TBF_REL_ACTION set
mm_ExtractMCC =%d
SM informed of regained radio coverage....
CS call had been attempted, retry now...
QRB state:%s
FOP is On so we Can Send SM Data Directly
mm_SendRauCompleteMsg:EutranInterRAtInfo(%d) UTRANInterRatInfo(%d)
List of Receive N-PDU Numbers ->
Length -> %02X
Value ->
EutranInterRAtInfo set in RAU complete Msg...
Eutran inter RAT handover information length shall not be over 255 octets..
UtranIratInfo set in RAU complete Msg...
Utran inter RAT handover information length shall not be over 248 octets..
LLGMM_UNITDATA_REQ Cipher = %s
PduId -> %04X
PduId -> %04X
Processing RAU Accept Cause
Cause = %s
RAU_REJECT discarded due to semantically incorrect contents:
< 'RA updating' or 'Periodic updating' requested >
< but network responded with RAU_REJECT containing an abnormal GMM cause value >
RAU_REJECT discarded due to semantically incorrect contents:
< 'combined RA/LA updating' or 'combined RA/LA updating with IMSI attach' requested >
< but network responded with RAU_REJECT containing an abnormal GMM cause value >
NetworkFeatureSupport reset on RAU reject From network
Power off detach is pending Hence discarding RAU retrails
Cause #25 received with out integrity protection, descard reject message
GMM cause -> %s
Force to standby -> Force to standby indicated
Force to standby -> Force to standby not indicated
Perform TbfRelAction, MM_COORD_TBF_REL_ACTION
Regi status ind will be sent later
mm_GetLocUpdRejCause =%d
Invalid Cause : MM_NOT_AUTHORISED_FOR_CSG, CSG NOT SUPPORTED
RegistrationNeeded =%d
Serving cell RAI : Stored RAI
GPRS update status -> %s
Rau Request Type is Combined but Rau Upd Result is RA Update only. -> Keep GmmUpdateStatus and GPRS_ATTACH_FLG.
Set mm_RauRejCause: %d
mm_ResetRauRejCause: %d
Invalid RauType (0x%x) in mm_SetRauType().
RAU attempt count -> %d
RAU update type -> %s
pkthndIsUlTrf= %d
Prev: Uldata NSAPI 5= %d, NSAPI 6=%d
Current: Uldata NSAPI 5= %d, NSAPI 6=%d
FOR -> Follow-on request pending
We will not set FOR!!!
Wrong Action =%d
RAU Req will be delayed during Manual PLMN searching..(for FT TEST)
RAU is already pended, dont send DRX again and Wait for MPLMN completion
RAU REQ is not triggered since MM has sent a RESEL_HOLD to GRR
Inside mm_PerformRoutingAreaUpdate() function, PrevCSAD = %d, CurrentCSAD = %d
RAU update type -> %s cannot be performed since MM_ALLOW_PS_REGISTRATION is set to FALSE
RAU Type Before Domain Restrictions analysis %d
DSAC for CS and PS are not barred
Previous update is not combined
Previous update is combined
RAU Type After Domain Restrictions analysis %d
(PREVENTION) When setting CSMT flag, we will set FOR in RAU (1411591)
GPRS Key Set Identifier (KSI) -> %d
Invalidating GMM CKSN for CRC Failure in GSM Only Mode
GPRS Cipher algo(%d), GmmCksm(%d) .... ALGO NOT PRESENT
GPRS ciphering key sequence number -> %d
Old routing area identification @ Eutran ->
Old routing area identification @ SIM ->
Old P-TMSI signature....
Old P-TMSI signature....
P-TMSI @ EUtran ->
P-TMSI @ SIM->
Supported Codec Length is 0
UE Network Capability ->
ADD P-TMSI->
ADD RAU->
voice domain Pref->
Extended T3312 is supported
Encode Old LAI IE



Cipher State -> %s
PduId -> %04X
