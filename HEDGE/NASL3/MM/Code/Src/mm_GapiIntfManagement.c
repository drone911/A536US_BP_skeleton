Initialisation of <GapiIntfManagement>, InitType=%d
%s in mm_DecodeGapiMmAttachReqMsg
Gapi Attach Request Type -> %s
GAPI ReadyTimerValue is %d
Discard PS detach in Hedge as UE moved to Hedge as part of CSFB call Or Duplex Mode CHange..
Detach Request saved OR Local Detach is performed because of ongoing Rat Resumption/Suspension.
Detach Message with type %d will be processed
Gapi Detach Request Type -> %s, IsThisInternalDetach -> %d, DelayedForDetach -> %d
mm_GetCurrTime() %ld, mm_GetPdpDeactRequestedTime() =%ld,
PS_DET_PSOFF is delayed, set it to internal detach for further processing
MM_DSNC - Ongoing proc on the other Stack: %s, Don't start another CS/PS sig
MM_DSNC - Saving Detach Msg : DSDS proc ongoing on the other stack: %s
MM_DSNC - Sending StandbyReq when grant is not allowed, so that it gets updated in pending proc list at SRNC
MM state is NULL process detach request internally
On-going redirection from 3G so process detach request internally
Saving Detach Msg Until CELL_IND comes
U2L is disabled due to silent redial
U2L is enabled due to silent redial
Clearing CSFB Flags
Putting Saved Cell Ind Msg to Message Queue..
QRB New Design: mm_IsCsfb is set to FALSE
Perform RAU when CSFB call is aborted before starting
mm_DecodeGapiVtCallIndMsg: %d
VT call started, so stop the QRB start timer
mm_DecodeGapiHDVoiceSettingReqMsg: %d
HDVoice on:%d
Status = %d in mm_SendGapiMmU2LReselectionInd
mm_DecodeGapiMplmnInd: %d
Pended Attach during manual plmn searching will be performed on GSM RAT
Manual PLMN search is finished but not ready to do Attach, set mm_GmmNeedAttachflag to TRUE
Pended RAU during manual plmn searching will be performed on GSM RAT
Manual PLMN search is finished but not ready to do RAU, set RauNeededFlag to TRUE
IsConnected = %d mm_GetCellBandInfo = %d
PsConActiveState = %d FrequencyInfo = %d in mm_SendGapiScellAsInfoInd()
EmergListLen = %d
Emergency Number Type = %d
Emergency Number Length = %d
Emergency Number
NW RESET REJECT IND for %s.(cause = %d)
CMCC NW RESET ACCEPT IND for %s.
mm_GetNWRejTypeForNS Unhandled Procedure (#d) REJ cause (%d) .
mm_GetNWRejTypeForNS Undefined Reject type %d .
Sent REJECT IND to NS Procedure = %d.(cause = %d)
Sent CSFB Status indication message(Currently this is only for MT Call)
[SRVCC] GAPI HANDOVER STATUS IND -> Status = %s.
[SRVCC] GAPI HANDOVER STATUS IND -> HandoverType = %s.
PS Support Info : %s.

Received Int DDS %d IMS DDS %d
Current Stack Internet Available %d IMS Available %d
Operating mode is %d
UE is not in GSM RAT
%s in mm_DecodeNsMmVoicePriorityReqMsg
ATT voice priority, send PS SCRI under specific condition(CS+PS mRAB, ANT BAR 1, SCR off 1s~)
Discard NS_MM_VOICE_PRIORITY_REQ
VoiceDomainPreferenece old: %d, new: %d
Sensor State Req(Feature = %d, Sensor state = %d)

mm_DecodeNsMmDrxSetReqMsg changed Drxlength - %d
mm_SendUrrcDrxCoefficentValue specific Drx coefficent - %d
Wrong Action =%d
Frequency Aiding Req (Start = %d, Rat = %d, Tcxo_Type = %d)
Because active RAT is neither 3G nor 2G so Frequency Aiding fails.
Wrong Action =%d
Ongoing proc on the other Stack: %s, IMS Signaling started will be pended
MM_DSNC - Sending StandbyReq when grant is not allowed, so that it gets updated in pending proc list at SRNC
IMS Grant is not taken now, as it was taken already, IMS Procedure is %d
SIG Start triggered for IMS Domain as IMS procedure is signaling already
IMS Signaling is released already IMS Proc is %d
mm_DecodeMmImsSignalOperationReqMsg : Signal %d
UE is not in UMTS or GSM Rat modes
MT CALL END Cause %d
NeedCellInd is TRUE while power off detach initiated, start GMM_DETACH_RESET_NEED_CELL_TIMER
MM_DELAY_DETACH_ON_DUPLEX_MODE_CHANGE_ON_NON_DDS_STACK_FLAG = %d
Multimode;%d
Pssupport;%d
Old;%d New;%d
Duplex:%d
rat:%d
Setting Delay det flag for Duplex Mode Change
Resetting Delay det flag for Duplex Mode Change
TIN value -> %d
No Need to process detach, So performing Local detach
