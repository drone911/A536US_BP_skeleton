ati_FwHandlers_HandleUnsolicitedMessage
NS_RRC_STATE_IND
NS_NOTIFY_SS_IND
NS_NETWORK_SELECT_MENU : %d
NS_REJ_CAUSE_IND
NS_ECT_RSP
NS_USSD_TERMINATE_IND(%d)
ati_FwHandlers_HandleUnsolicitedMessage: Signal [%04X] NOT IMPLEMENTED.
Received NS_NETWORK_SELECT_MENU : NS_STOP_NETWORK_RSP - clearing all PS and CS contexts !!
NS_NSATI_COMMAND_REQ
NS_PDN_DISCONNECT_IND
NS_NETWORK_REGISTRATION_NTF received: EpsAttacthStatus [%d]
NS_EPS_DEDICATED_PDP_ACTIVATE_IND
NS_PDP_UPDATE_SID_IND
NS_EPS_PDP_ACTIVATE_CNF
NS_USB_CABLE_DISCONNECT_IND
block_3gpp is updated to %d
[NS_CBST_PARAMS_SET_IND]bearer type %d, Speed %d, Name %d, Ce %d
ImsRegistrationStatus : %d ImsFeature : %d
NS_SIM_ALL_SLOT_INFO_IND
ati_FwHandlers_HandleUnsolicitedMessage: UNKNOWN [%04X]
MemAlloc fail
- CodingScheme = %d, CodingGroup = %d
- Coding Group = %d - NOT SUPPORTED
AtiHandleNsInformationInd
FullNetworkName
ShortNetworkName
Time Zone = %d : %d
UAL Time = %d : %d
Time Zone Sign = %d
Default case : No local date conversion is needed
LocalDay= %d/%d/%d
LocalTime = %d : %d
%d-%d-
Local Date %d-%d-
LocalTimeHStr
LocalTimeMStr
TimeType
GMT: TimeZoneHourStr
GMT : TimeZoneMinStr
CDT: cdtHStr
cdtMStr
TimeTypecdt
TimeZoneHourStr
TimeZoneMinStr
TimeType
AtiHandleUpgradeCTMInd Type:%d
Command Timer Stopped [%s] [%d]
AtiRspPlusCTMEDIT: SUCCESS CTM
Command Timer Executed [%s] [%d]
Cannot find out cidIndex Sid[%d]
pAtiCB->cid_idx:%d, Sid:%d
CID table NsSID:%d Rcvd From NS SID:%d
Rcvd Eps Bearer Id:%d Cid:%d, Sid:%d
Cid_idx Out of Bound [%d]
Invalid bearer Type=%d
No Matched Linked SID in AtiHandleEpsDedBearerInd
AtiHandleEpsDedBearerInd: NS_EPS_DEDICATED_PDP_ACTIVATE_IND received for invalid default bearer CID: %d
Free CID not available for TempSID: %d
sec_cid:%d, p_cid:%d, tempSid:%d, LinkedSid:%d
Updating the call status for dedicated baearer CID = %d
cid_sec_idx Out of Bound[%d]
AtiHandleNsPdpUpdateSidInd secondary index %d , Tempsid %d
AtiHandlePdnDisconnectInd(): BearerType: %d, Sid: %d
Default: Context Status: Cid=%d, state= %d
Context Status updated: Cid = %d, state: %d
AtiHandlePdnDisconnectInd: Received Disconnect for invalid Primary Cid: %d
LinkedSid:%d LinkedCid in ATI: %d
pNsMsg->isTempSID: %d
Sec Cid Index: %d
Sec Cid Index: %d
Dedicated Bearer Deactivated with Sec_CID:%d
AtiHandlePdnDisconnectInd: Received Disconnect for invalid Sec Sid: %d
AtiHandlePdnDisconnectInd: Received Disconnect for invalid LinkedSid: %d
LTE ATTACHED in PCT Case Base Ns SID:%d!!!!
Length = %d Invalid IP Address Range received
AtiHandleNsEGPRSPDPType: pAtiCB->CID_table[%d].PDP_Params.cid=%d
PdpType=%d, ApnLength=%d, AccessPointName
Cid_idx Out of Bound [%d]
Dedicated Bearer CID = %d, Linked CID = %d
NS_EPS_PDP_ACTIVATE_IND Msg, ApnLength=%d, PdpAddressInfoLength=%d,tftlen=%d
[AtiHandleNsEGPRSPDPType: pAtiCB->CID_sec_table[%d].PDP_Sec_Params.cid=%d
cid_sec_idx Out of Bound[%d]
cid_sec_idx Out of Bound[%d]
Delegating NS_EPS_PDP_ACTIVATE_IND to generic handler
[AtiHandleNsEGPRSPDPType SId=%d, TempSid =: %d
CID context 1 is not used, so allocating
FreeCid = %d found for allocating
Could not allocate CID for TempSID = %d. No free CID available
Wrong TempSId[%d]
Wrong TempSId[%d]
Wanted : AtiExtError( pAtiCB, E_ME_UNKNOWN, AT_ERROR )
NS_REL_IND,SId=%u, Cause=%u
AtiUnsoliciteH: Received NS_PDP_ACTIVATE_REJ
atiLteAttachTriggered - PDP activate rej.
MemAlloc fail
MemAlloc fail
MemAlloc fail
CGEREPMode value %d
+CGEV: ME PDN ACT %d
+CGEV: NW PDN DEACT %d
+CGEV: ME PDN DEACT %d
+CGEV: NW MODIFY %d, %d, %d
+CGEV: NW ACT %d, %d, %d
+CGEV: NW DEACT %d, %d, %d
CGEREPMode value %d
+CGEV: ME DETACH
atiLteAttachTriggered - PDP deactivate Cnf.
Send Host LINK DOWN message to HOSTIF
MemAlloc fail
MemAlloc fail
Current DDS (INT:%d, IMS:%d)
MemAlloc fail
MemAlloc fail
Command Timer Stopped [%s] [%d]
isSimInserted %d, bSimOnePresent %d, bSimTwoPresent %d
ePinType =%d, PIN1Status = %d, UNBLKPIN1Status = %d, PIN2Status = %d, UNBLKPIN2Status = %d
PIN1RemainCnt = %d, PIN2RemainCnt = %d, UNBLKPIN1RemainCnt = %d, UNBLKPIN2RemainCnt = %d, SimPresent = %d
[ATI] NS Init. PCT enabled. atiInternalAttachValid = TRUE
[ATI] NS Init. PCT disabled. atiInternalAttachValid = FALSE
NO SIM
Command Timer Stopped [%s] [%d]
Command Timer Stopped [%s] [%d]
Command Timer Stopped [%s] [%d]
Invalid UNBLKPIN1Status =%d
Command Timer Stopped [%s] [%d]
Command Timer Stopped [%s] [%d]
[GCF_AUTO] NsSimInsertInd in ATI_HANDLERS : Start Network
Invalid PIN1Status =%d
isSimInserted %d, bSimOnePresent %d, bSimTwoPresent %d
ePinType =%d, PIN1Status = %d, UNBLKPIN1Status = %d, PIN2Status = %d, UNBLKPIN2Status = %d
PIN1RemainCnt = %d, PIN2RemainCnt = %d, UNBLKPIN1RemainCnt = %d, UNBLKPIN2RemainCnt = %d, SimPresent = %d
[ATI] NS Init. PCT enabled. atiInternalAttachValid = TRUE
[ATI] NS Init. PCT disabled. atiInternalAttachValid = FALSE
NO SIM
Command Timer Stopped [%s] [%d]
Command Timer Stopped [%s] [%d]
Command Timer Stopped [%s] [%d]
Invalid UNBLKPIN1Status =%d
Command Timer Stopped [%s] [%d]
Command Timer Stopped [%s] [%d]
[GCF_AUTO] NsInitCnf in ATI_HANDLERS : Start Network
Invalid PIN1Status =%d
MemAlloc fail
AtiHandleNsServiceInd(): MmServiceState %d, GmmServiceState %d, EmmServiceState %d, EmmState %d
PrevGmmNwState = %d, PrevMmNwState = %d
AtiHandleHedgeStateToCM(): unknown GprsStatus
AtiHandleHedgeStateToCM(): Imsi Attach Status %d, Gprs Attach Status = %d
PlmnAttribute = %d,EmmStatus = %d
setEmmStatus = %d
PlmnAttribute = %d ,set EmmStatus = %d
set EmmStatus = %d
PlmnAttribute = %d,set EmmStatus = %d
Unknown PlmnAttribute = %d ,Current EmmStatus = %d
NS_REGISTRATION_STATUS_IND, Rat %d, GprsStatus = %d, ImsiStatus = %d,MmServiceState = %d, GmmServiceState = %d
EmmStatus (ATTACH/DETACH) = %d, RegStatus = %d,EmmCause = %d, cell_id = %d
NrmmStatus (ATTACH/DETACH) = %d, NrmmRegStatus = %d,NrmmCause = %d, cell_id = %d
Unknown GPRS status (%d)
ATI_NRMM_Registration_Status:%d
ImsiStatus:%d ,GPRSStatus:%d ,EpsAttacthStatus : %d
ATI_MM_Registration_Status:%d
ATI_GMM_Registration_Status:%d
ATI_EMM_Registration_Status:%d
MemAlloc fail
[ATI] LinkDown, Attatch = %d
Msg Send Error
pstNsMsg->Body.NsRegistrationStatusInd.SmsOverNasSupport = %d
NS_MM_PS_TYPE_IND, MmPsType %d, eActRatMode %d
AtiHandleNsServingCellInfoCnf: loc = %4X, cellid = %4X pAtiCB->PSC=%d
Sending NS_ABORT_PLMN_LIST_REQ
MemAlloc fail
Command Timer Executed [%s] [%d]
nAtiState %d
TransferMode %d, InfoTransferCapabilty %d
Calling Party length = %d out of range
telNumber length = %d toa=%d
Already call present
First Call
NS_MODE_SELECT_IND:Mode %d
NS_ACTIVE_RAT_IND:Rat %d
ATI_PIN_INFO_UPDATE_IND
Pin_State_Update ePinType: %d, PinCnt: %d, Puk1Cnt: %d, Puk2Cnt: %d
Disconnect received with Progress Indicator set to in-band info
MemAlloc fail
AtiSendCregCgregCereg: MmStatus = %d, GmmStatus = %d, EmmStatus = %d, ActiveRat = %d, CREGn = %d, CGREGn = %d, CEREGn = %d
lac = %04X, ci = %04X, Act = %d, rac = %04X
unknown Creg mode (%d)
unknown Creg mode (%d)
unknown Cgreg mode (%d)
unknown Cereg mode (%d)
ns_RegisterClient() from ATI
FreeCid = %d found for allocating
MemAlloc fail
Mem free Error(PtrMsg)
Memory allocation failure
AtiSendNsSecPdpActivateRejRsp, Cause =%d
MemAlloc fail
Unsolicited: NS_PDP_ACTIVATE_SEC_CNF, call_mode %d, call_state %d
AtiHandleNsSecPdpActivateRej: call_mode %d, call_state %d
AtiSendUartStatusChangeInd msg to MBX=%d State=%d
MemAlloc fail
atiLteAttachTriggered - Pdp deactivate ind.
Wrong Sid :%d in AtiHandleNsPdpDeactivateInd
AtiHandleNsUSBCableDisconnectInd: Hang up the current PPP connection!
[ATI] Rcv AtiHandleNsNcMisMatchInd:Result %d, NCKType %d, NCKLockByDiffCard %d
ePinType %d
NS_AT_NC_NET_DEPERSON_IND,ePinType %d, NCK count %d
NS_AS_TYPE_IND, AsType %d
pAtiCB->eActRatMode, [%d]
NS_POWER_OFF_CNF
NS_RAT_MODE_CHANGE_IND: Status %d, RatMode %d
AtiHandleAutoStartRsp: pstNsMsg->Body.NsPlmnSelectionModeChangeRsp.Result: %d
Auto mode PLMN selection fail
ucActiveRat %d
unknown ActiveRat mode (%d)
Received ActiveRat %d ->Changed ActiveRat %d
AtiHandleNetworkNameChangeInd: Network Name is changed
PrimaryCid = %d
pAtiCB->CID_table[%d].PDP_Params.cid = %d, pAtiCB->CID_table[%d].PDP_Params.ActState = %d
SecCid = %d
unknown ActiveRat %d
Received ActiveRat %d ->Changed ActiveRat %d
unknown ActiveRat %d
NS-> ATI Received ActiveRat %d ->Changed ActiveRat %d
NS_NETWORK_REGISTRATION_NTF received: ACT=0x%X, SVC Domain=0x%X, Reg Status=0x%X, Cell Id=0x%X, REJ Cause=0x%X, TAC=%X-%X)
eActRatMode 0x%X, EMMServiceState 0x%X, MMServiceState 0x%X, GMMServiceState 0x%X)
EPS Registration Status unknown :%d
ATI Context block: EMMServiceState =%d, EPS Registration Status =%d, Attach State=%d
Invalid Result=%d
AtiSubtractDate
AtiAddDate
slot%d 's slotId %d, state %d, eSimPresent %d, bActivated %d, bEnabled %d, stackId %d
ATRLength %d, EidLength %d
