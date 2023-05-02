
MmPlmnstate: %d, mm_callType %d
CM service req is triggered during LU on MM_UPDATED state, FOR set as 1 and CM service req will be pended
Saving Msg until the current MM Con is established
MmPlmnstate : %d, mm_callType %d
CallType = %d, mm_UpdateStatus = %s, Ti = %d in mm_DecodeMmEstReqMsg....[24.008]-4.5
During MO CSFB CM establishment, SMS EST_REQ shall be rejected!!AP shall retry later.
During MT CSFB call MM_EST_REQ can't be processed until MT Paging Response will be sent.
EST_REQ Will handle after MM_WAIT_FOR_UNITDATA_IND_AFTER_L2UPSHO
EST_REQ Saved.
EST_REQ Saved in NMO1.
EST_REQ Will be handled after REL_CNF or Combined Attach/RAU completed
NO_CELL_IND will come very soon. So cannot handle EST_REQ now
CC redial is now taken care of!
Cs call connection was establihed before T3340 expiry and do pended GmmCm procedure
If MM state is MM_IDLE, MM received REL_IND before MM_ESTOUT_REQ
IMSI paging succesful, Clear RAU needed flag
IMSI paging succesful, Clear LAU needed flag
Ultra-CSFB MT call : CC SETUP is received so clear CsfbCallState/Status.
mm_MmConCount = %d mm_MmConCountForCC = %d
Already one CS_CALL active, can't handle another CALL_REQ
Deleting Tmsi, Cksn, Lai due to CM Rej Msg [24.008]-4.5.1.1
MM Will Perform Location Update After RR Release...[24.008]-4.5.1.1
Unable to handle REEST_REQ due to either UMTS rat mode or State mismatch
Redial? = %d
CC Redialling is true and there is more than one MM CNX so not setting MM state to IDLE. CM_SERVICE_REQ will go as DATA_REQ
Network Aborting CM Layer Activity, Cause = %s
triggering Silent redial
Do not consider QRb and RAU retrying immedialty
mm_GmmExtraMsgInSameRrFailAction is initialized because RRC Con is released or PS Sig Con Rel comes 2times..
mm_AwaitingCmServiceReqRsp : %d
CC redial is aborted!!!
Signaling protection was ON, for CSFB+PSHO case, Releasing CS CALL Grant as part of Call Release from CC
CS procedure is not CS CALL, not expected
Pended MM_EST_REQ was removed, (TI=%d)
Signaling protection was ON, for CSFB+PSHO case, Releasing CS CALL Grant as part of Call Release from CC
CS procedure is not CS CALL, not expected
There was no pended EST_REQ for TI=%d.
DSDS : CC, SS or SMS Session is Active Sig End not Sent
Other CM Layer Data not allowed during this State
During RAT Change no CM REQ can be proccessed, message saving
Ongoing proc on the other Stack: %s, Don't start another CS/PS sig
Ongoing proc on the other Stack: %s, Reject the EST_REQ
CmServReqMsg is not available due to running T3246 or Call Type (%s)
Discarding Saved Cell Ind Msg ..
Mobile Identity as IMEI since IMSI_UNKNOWN_IN_VLR is received before
Network Lock Status TRUE..
Remove CmReqPriority IE under a condition of TMO LAB Test


CallDropCauseForDBGSCR = %d, mm_GetCallDropType() = %d




All saved Establishment Requests are cleared
QUEUE Not cleared Completely.
CallDropCauseForDBGSCR = %d, CallDropTypeForDBGSCR = %d
[ErrInd] CallDropCauseForDBGSCR = %d, CallDropTypeForDBGSCR = %d
ERR_IND to CC is not required.
Invalid Call Type in mm_CheckCallType, %d
PD: %d
Got Lower Layer failure, but currently no retransmission happens
Cannot retrieve MM_DATA_REQ, because there is no saved one
CallType : %d
Delete MM connection in No cell State !!
Reset mmConCountForCM (CC=%d, SS=%d, SMS=%d)
Number of MM Connections -> %d
Number of MM Connections For CC -> %d, For SMS -> %d, For SS -> %d
Number of MM Connections TO Be Ee-Established-> %d
Call Was Attempted Flag -> %s
Emergency Call Was Attempted Flag -> %s
CM Service Req Type -> %s
Call Type -> %s
CM Service Rej Cause -> %s
Current Transaction Identifier -> %d
Establishment Cause -> %s
Establishment Cause -> %s
Priority -> %s
RR UE ID -> %s
RRC UE ID Type -> %s
Id scope -> %s
NewLaiRaiVersusOld -> %s

URRC Data Request Msg Result -> %s
URRC Sync Ind Status -> %s
Converting UMTS only mode to UMTS + GSM, due to Emergency Mode operation
Skip for Checking Cell data
Rat is not GSM
PAL.EPD_MODE Registry (%d)
UMTS 1.28 TDD value (%d)
Eutra FDD value is set to 1 becuase EutraDisableFlag is false..
Vamos Registry (%d)
CSFB Call State -> %d, CSFB Call Type -> %d
Emergency Call was ended before Est Req received and Reposting Cell Ind
CSFB ID Type -> %d
Call Ended, releasing CS CALL Grant
CS procedure is not CS CALL, not expected
LTE Tin: %d
mm_CsfbCallState = %d
MM_DELAY_PS_DET_IN_NON_DDS_FLAG = %d
Changing Encoding due to EutranDisabled is changed to %d
EncodedSizeinBits -> %d
EncodedSizeinBits -> %d
mm_SetLastRegRatMode %d, mm_GetNeedLocalDetach %d
mm_SetLastCsRegRatMode %d, mm_GetNeedLocalDetach %d
Paging Id -
Mapping Paging Id -
WARNING : Cannot store MM_DATA_REQ - already saved one before
WARNING : Cannot store MM_DATA_REQ - memeory not allocated
mm_SRVCC_HO_Cause %d
SRVCC Handover : IMS CALL Continuation, %d
CS Procedure is DSDS CS CALL Already
Even CallWasAttempted is TRUE, EST_REQ for a call is sent, so it need be discarded.
Triggering silent redial ...
QRB is triggered about 3G normal voice call.
Retrieving the pending CS Procedure
CS EST Not Attempted or Not Retrieved
Wrong Action =%d
Set mm_CmServiceInProgress = %d
mm_MmConManageDb[%d].mm_CmServiceInProgress = %d
Cs call connection was establihed before T3340 expiry and do pended GmmCm procedure
LOSS_CVG during call, REL_REQ from CC, Clear all contexts
Discard if any saved data request
CS procedure is not CS CALL, not expected
No Calls Allowed During RAT Change...!!
GPRS only mode, so normal call cannot be done! ...
Check to see if same Reg. LAI before allowing call
Trigger IMSI attach and then call
Ongoing proc on the other Stack: %s, Don't start another CS/PS sig
MM_DSNC - Sending StandbyReq when grant is not allowed, so that it gets updated in pending proc list at SRNC
Ongoing proc on the other Stack: %s, Reject the EST_REQ : %d

