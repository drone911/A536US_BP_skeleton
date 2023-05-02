Initialisation of <RatManagement>, InitType=%d
State exceeds the limit
RAT Change is Happening in Connected Mode from GSM to UMTS So we need to Map Connected Mode to State
GMM Functional State set to %d
State exceeds the limit
mm_SetMmcHedgeRatChangeCause -> Cause = %d
RAT Change is Necessary, Initiating RR Suspension / Resumption Procedures..
RAT Suspension Requested..
RAT Resumption Requested instead of Suspension Requested..
Discarding Saved Cell Ind Msg ..
SUSPEND_RAT_REQ UnconditionalSuspend = TRUE due to detach
SUSPEND_RAT_REQ UnconditionalSuspend = TRUE due to mode selection
SUSPEND_RAT_REQ dsdsCallStatus= TRUE due to CS call on other stack
SUSPEND_RAT_REQ dsdsCallStatus= FALSE
mm_UnconditionalSuspend = %d
%d message id
Suspending due to CS call on other stack Resetting current stack SRNC states
SUSPEND REQ ignored due to RAT CHANGE IN PROGRESS
%s in mm_DecodeRrSuspendRatCnfMsg
Old
GSM is disabled
Not resuming GSM RAT, considering MM is Suspended, NEW RAT init actions are responded back
New
Stack Has Been Suspended...
Sending Stop Network Rsp to NS.
Sending MM Stop Req to AS
SUSPEND_RAT_CNF Not Allowed in this mm_RatModeChageState !!!
SRVCC Kc128 ->
TLLI generation for GPRS suspension procedure
Indiicating GRR as MM_NO_IMS_OR_INTERNET_AVAILABLE

Lai = %02X %02X %02X %02X %02X
Tlli = %02X %02X %02X %02X
Sending CS keys as 0xFF in RESUME_RAT
Sending PS keys as 0xFF in RESUME_RAT
UmtsMode = %d 0:FDD 1:TDD 2:FDD&TDD
isUsimPresent = %d
Indiicating URRC as MM_NO_IMS_OR_INTERNET_AVAILABLE
PS Support indication = %d, PDP Status %d
PlmnSelectionMode(Auto) = %d
Entering mm_SendRrResumeRatReqMsg
Handle RR Resume Request after SIM CNF
Handle RR Resume Request after SIM CNF
Sending Reseume Rat Req (U)RRC...in mm_SendRrResumeRatReqMsg

RESUME_RAT_REQ Not Allowed in this mm_RatModeChageState !!!
%s in mm_DecodeRrResumeRatCnfMsg
New
RESUME_RAT_CNF Not Allowed in this mm_RatModeChageState !!!

MM Had already started a Procedure.. Aborting All MM Procedures!!!!

RAT Mode change state is %s, Not processing the HO Request

RabId -> 0x%02X
CodecInfoPresent -> 0x%02X
NasSyncInd -> 0x%02X
in mm_UrrcRetransmitMessages
Unknown Message PD %d

NumOfMessagesToRetransmit -> %d
Message %d -> ...
Message Size -> %d
Message -> ...
Saving UrrcRetransmitInd to be sent to CM Layer later
Protocol Descriminators for Unconfirmned Messages to be Re-transmitted....
RAT Mode change state is %s, Not processing the HO Request
U2G redirection blocked, Saved PLMN selection procedure will be initiated
MM sent CELL_REJ to URRC so Redirection is aborted.
Redirection is discarded during Hedge Rat suspension.
UMTS to GSM cell reselection in %s
MM Had already started a Procedure.. Aborting All MM Procedures!!!!
URRC_MM_RAT_RESELECTION_TO_GSM_IND Ignored as MM has started a RAT Change !!!!
G2U IRAT reselection UMTS MODE = %d
Blocking G2U reselection since CELL_REJ was sent and PLMN search will come.
MM Had already started a Procedure.. Aborting All MM Procedures!!!!
GRR_MM_RAT_RESELECTION_TO_UMTS_IND Ignored as MM has started a RAT Change !!!!


Block to send MMC_RAT_MODE_CHANGE_IND with forced LTE/NR RAT mode for multimode

mm_SendGapiRatModeChangeIndMsg Cause : %d





mm_SendRatCellChangeToUmtsRspMsg..Status(%d)
mm_SendRatReselectionToUmtsRspMsg..Status(%d)
mm_SendRatHandoverToUmtsRspMsg..Status(%d)
Rat Mode Change (Initiated by (U)RRC) was Successful
URRC_MM_RAT_CHANGE_COMPLETE_IND Not Allowed in this mm_RatModeChageState !!!
Setting GMM Service states as %s
Rat Mode Change (Initiated by (U)RRC) Failed ! Reverting Back to Old Rat ..
Discarding Saved Cell Ind Msg ..
Discarding Saved Urrc Retransmit Ind Msg ..
URRC_MM_RAT_CHANGE_COMPLETE_IND Not Allowed in this mm_RatModeChageState !!!

RabId -> 0x%02X
CodecInfoPresent -> 0x%02X
NasSyncInd -> 0x%02X
GSM to UMTS Initialisation of <GMM Functional State>
UMTS to GSM Initialisation of <GMM Functional State>
MM RATMode : %s -> %s
RAT Mode is %s
Attempt to write to mm_RatModeChangeState Using Invalid State (%d)
RatModeChangeState -> %s
Rat Change Cause -> %s
Invalid Cause in mm_SetReStartProcOnOtherRatCause
RAT Change Window State -> %s
serving_access_type = %d
mm_UeSupportRATechType = %d
Result : %d
mm_NwAndRadioCapsData.AccessTechInfo[%d] = %d
Network sends All Unsupported Bands in PUA MAC Message So send Default RA Type = %s
Invalid BCCH Access Type = %s
Temp_GmmPduCodecDb->mm_NwAndRadioCapsData.AccessTechInfo values are corrupted
mm_RacBandCheckProc:mm_UeSupportRATechType = %d
Total Size Required for Encoding RA Capabilities %d
Number of RA Capabilities for Encoding = %d
Num = %d
type[%d] = %d
available_size given by MAC %d
GMSK 900 Registry value of PowerClass is invalid. Check AccessTechInfo in registry
GMSK 1800 Registry value of PowerClass is invalid. Check AccessTechInfo in registry
GMSK 1900 Registry value of PowerClass is invalid. Check AccessTechInfo in registry
8PSK 900 Registry value of PowerClass is invalid. Check AccessTechInfo in registry
8PSK 1800 Registry value of PowerClass is invalid. Check AccessTechInfo in registry
8PSK 1900Registry value of PowerClass is invalid. Check AccessTechInfo in registry
8PSK 850Registry value of PowerClass is invalid. Check AccessTechInfo in registry
LTE RAT : Our received mode is LTE_HEDGE_EMC_MODE_MM
Mode: Curr(%d) -> New(%d)
RatMode(%d) EutranDisabled(%d)
NrCapbDisableState: %d
Proceed with Mode Update procedure
When mode changes then UE capabilites gets changed, Encode MSRAC due to mode change
EncodedSizeinBits -> %d
QRB is aborted.
Entered Funtion mm_DecodeMmcMccReqMsg
Call triggered on other stack when reselection/redirection/HO / CCO ongoing on current stack. Proceed with suspension.
Suspension is postponed until BPLMN procedure completion.
Entered Funtion mm_DecodeMmcSuspendReqMsg
mm_SuspendReq_PowerDown = %d
We are already in Suspended state.
MM_DSDS_DELAY_STACK_RESUMPTION Timer is still Running and we received a Suspension, So triggering suspend Cnf Back
MMC resume Request Pointer is NULL already
Discarding MM DATA REQ message due to HEDGE suspension
gsm_valid_info: %d, umts_valid_info: %d
IsLimitedService: %d
Redirect UMTS RAT: %d
RAT MODE: %d
Redirection Done So delete the Redirect Info received from MMC.
Sending MMC Redirection Status = %d
Entered Funtion mm_DecodeMmcLteTo2G3GReselectionReqMsg
IsLimitedService: %d
Resel UMTS RAT: %d
Number of Cells Given By MMC are Zero
Number of Cells Given By MMC = %d
ARFCN = %d
SC = %d
mm_HandleHedgeIratSuccess: IratType = %d DestRat = %d
Resetting mm_DsIgnoreNewCellInd on moving to non Hedge rat
IratType = %d is not handled in this function.
Discarding MM DATA REQ message due to NO SERVICE
Warning: RAT Mode is LTE / Reselection Cnf received twice from LTE
mm_HandleHedgeIratFailure: IratType = %d, ResultCause = %d, t_barred = %d
IratType = %d is not handled in this function.
Triggering QRB to LTE as QRB to NR has failed.
Discard mm_DecodeMmc2G3GToLteReselectionCnfMsg as there is no context exists
mm_DecodeMmc2G3GToLteReselectionCnfMsg -> Result = %d, t_barred = %d
Discard mm_DecodeMmc2G3GToLteRedirectionCnfMsg as there is no context exists
Entered Funtion mm_DecodeMmc2G3GToLteRedirectionCnfMsg, Result = %d
Discard mm_DecodeMmc2G3GToLteCellChgCnfMsg as there is no context exists
Entered Funtion mm_DecodeMmc2G3GToLteCellChgCnfMsg: Result = %d
MM Had already started a Procedure.. Aborting All MM Procedures!!!!
Number of Cells Given By MMC are Zero
Stack Resumed After CS CALL, Stack is in GSM rat mode, Delay Resumption for 3 Seconds

RESUME with MMC_CPU_POWER_ON
Ignore the saved ATT_REQ during stack suspension
On Hedge Suspenstion, Release the call
Release CSCALL grant..
Number of UMTS Cells Given By MMC = %d
Number of Cells Given to URRC = %d
ARFCN = %d
SC = %d
ARFCN = %d
SC = %d
CELL_CHANGE_REQ_TO_GSM
NetworkColourCode : %d BaseStaionColourCode : %d
Arfcn : %d BandIndicator : %d
num_of_gsm_si_info : %d
Number of GSM Cells Given By MMC = %d
Number of Cells Given to GRR = %d
BSIC = %d
SC = %d
BSIC = %d
ARFCN = %d



mm_SendRrCellReselToEUtranFailMsg : reason : %d, t_barred : %d




mm_SendRrCellReselToEUtranFailMsg : reason : %d, t_barred : %d


U2L Redirection Failed. NeedCellIndAfterRelInd is set to TRUE.


Not sending RrCellChgToEutranFailMsg : it is in 3G RAT

Entered Funtion mm_DecodeRrReselectionTo2G3GCnfMsg
Received From URRC :: CSG Cell PlmnId -> 0x%x 0x%x 0x%x, CsgId = 0x%x
Received From URRC :: Reselection Status = %d, Btimer : %d, cause : %d
Received From GRR :: Reselection Status = %d, Btimer : %d, cause : %d
CELL_CHANGE_CNF Result: %d Cause : %d
Entered Funtion mm_CheckRrCellReselToEUtranOrNrAllowed
Power off detach is pending Hence discarding G2N RESELECTION
Power off detach is pending Hence discarding G2L RESELECTION
Hedge to NR inter RAT cell reselection happened while power off detach is in progress, discards it
Hedge to EUTRAN inter RAT cell reselection happened while power off detach is in progress, discards it
RAT Mode change state is %s, Not processing Resel to EUTRA
Discarding G2N since NS required not to go to NR
Discarding G2L since NS required not to go to LTE
Discarding G2N since CELL_REJ was sent and PLMN search will come.
Discarding G2L since CELL_REJ was sent and PLMN search will come.
Discarding G2N since PLMN_RAT_CHANGE requested.(already sent GRR_SUSPEND_REQ)
Discarding G2L since PLMN_RAT_CHANGE requested.(already sent GRR_SUSPEND_REQ)
Entered Funtion mm_DecodeRrCellReselToEUtranMsg
mm_CheckRrCellReselToEUtranOrNrAllowed Retured False as G2L Resel not possible
mm_CheckRrCellReselToEUtranOrNrAllowed Retured False as G2L Resel not possible
Clearing Cell Congestion flag
earfcn from RRC=%d PcellID = %d
RR set wrong cause value in redirection info. MM handle it as normal redirection
Entered Funtion mm_DecodeRrCellChgToEUtranMsg
Power off detach is pending Hence discarding G2L CCO
RAT Mode change state is %s, Not processing CELL Change to EUTRA
earfcn from RRC=%d PcellID = %d
Clearing Cell Congestion flag
Entered Funtion mm_DecodeUrrcCellReselToEUtranReqMsg
Power off detach is pending Hence discarding U2L RESELECTION
RAT Mode change state is %s, Not processing Resel to EUTRA req
MM_BLOCK_IRAT_DURING_CELL_REJECT flag=%d
Discarding U2L since NS required not to go to LTE or MO/MT call is on-progress
earfcn from RRC=%d PcellID = %d
Power off detach is pending Hence discarding U2N
Power off detach is pending Hence discarding U2L
U2N redirection blocked, PLMN selection procedure will be initiated due to LAU or RAU reject
U2L redirection blocked, PLMN selection procedure will be initiated due to LAU or RAU reject
U2N redirection is discarded during Hedge Rat suspendion.
U2L redirection is discarded during Hedge Rat suspendion.
U2N redirection blocked, PLMN selection procedure will be initiated due to abnormal LAU failure
U2L redirection blocked, PLMN selection procedure will be initiated due to abnormal LAU failure
U2N redirection blocked, Saved PLMN selection procedure will be initiated
U2L redirection blocked, Saved PLMN selection procedure will be initiated
Discarding U2N since NS required not to go to NR
Discarding U2L since NS required not to go to LTE
Entered Funtion mm_DecodeUrrcCellReDirectToEUtranReqMsg
Discarding U2L since NS required not to go to LTE
Invalid Cause : URRC_CR_CSG_CELL_BARRED, CSG NOT SUPPORTED
Sending MMC Reselection Status = %d, bar timer : %d
Sending MMC CSG Cell PlmnId -> 0x%x 0x%x 0x%x, CsgId = 0x%x
No CSG CELL info in Reselecion CNF message
Earfcn=%d PcellID=%d
Selected PlmnId = 0x%x 0x%x 0x%x,
Sending MMC Reselection Req for HEDGE to LTE
Selected PlmnId = 0x%x 0x%x 0x%x, Num of Frequencies %d
IsQRB = %d
Sending MMC Redirection Req from HEDGE to LTE
Sending MMC Reselection Req for HEDGE to LTE
Invalid Cause (0x%02X) in mm_SetRatChangeCause
mm_DecodeMmPlmnRatChangeReq
Ignoring RAT change received from GMC, Current resumed Rat is same as Requested Rat
GSM is Disabled
Converting SUSPEND Current RAT to NO RAT Suspension



BPLMN procedure is ongoing, so save the RAT change
Cross over of IRAT and MMC_SUSPEND_REQ occured, Ignore IRAT and proceed with SUSPENSION
RatMode = %s

LAC = 0x %x %x %x %x %x
Current cell is AT & T network
LAC Belong to AT&T FemtoCell
LTE info present in SIB 19 = %d in mm_DecodeUrrcMmLteRatInfoInd
No LTE cell in neighbor. Giving up quick rollback to LTE..
In mm_SendUrrcMmIratStatusIndMsg .... Block LTE Measurements %d
Mm_UrrcIratStatusInd.GsmDisabled: %d and Mm_UrrcIratStatusInd.UmtsDisabled: %d
mm_RrIratStatusInd.GsmDisabled: %d and mm_RrIratStatusInd.UmtsDisabled: %d
In mm_SendRrMmIratStatusIndMsg .... EutranDisabled : %d, RAT : %d Block LTE Measurements %d,Capability changed: %d
mm_RatChangeCauseForFailInd = %d
RrcSearchMode = %d
RrcSearchMode = %d
Entered Funtion mm_DecodeUrrcInitialPlmnCnfMsg
MCC Response status =%d
PlmnId = 0x%x 0x%x 0x%x,
Sending MMC UrrcInitialPlmnCnfMsg
Entered Funtion mm_DecodeRrInitialPlmnCnfMsg
MCC Response status =%d
PlmnId = 0x%x 0x%x 0x%x,
Sending RrInitialPlmnCnfMsg
Making MM to Ready for Switch Off
MCC : 0x%x, MNC : 0x%x
2 digit
PlmnId : 0x%x


Ultra CSFB was triggered..

Convert SRVCC HANDOVER CAUSE from AS to CC..
Unexpected Current RAT...
mm_DetermineCapaUpdate function NrSupportFlag [%d], NrModeChanged [%d]
LastRegRatMode [%d], NrCapaChangedFlag [%d]
MM/GMM will not send any regi message on this case. Need to send Registration indication to NS for MODE_UPDATE
LAU needed flag : %d, Cause : %d:GmmState : %d
RAU needed flag : %d, Cause : %d, NMO: %d
RegType : %d, CapaChange : %d
RegType After CS/PS Enabled Check : %d
[L2U] Dedicated Priority Info to URRC Duration=%d StartTime=%d
num of GeranList=%d num of Utra_tdd List=%d num of Utra_fdd List=%d num of EutraList=%d
[U2L] Dedicated Priority Info to MMC Duration=%d StartTime=%d
num of GeranList=%d num of Utra_tdd List=%d num of Utra_fdd List=%d num of EutraList=%d
Status = %d, TargetRat = %d in mm_DecodeUrrcMmRedirectionStatusInd
MM_EmergencyMode : %d
[SRVCC] L2G SRVCC Handover Start!!
[SRVCC] Invalid L2G Handover type!!
[SRVCC] L2U SRVCC Handover Start!!
[SRVCC] L2U SRVCC + PS Handover Start!!
[SRVCC] L2U PS Handover Start!!
[SRVCC] Invalid L2G Handover type!!
MM will not handle AS Info in LTE RAT mode!! in mm_DecodeRrMmSCellAsInfoInd
PreviousBandId = %d, CurrentBandId = %d
PreviousFrequencyInfo = %d, CurrentFrequencyInfo = %d in mm_DecodeRrMmSCellAsInfoInd
Band or Frequency info is changed
Updating CSFB registries in MM
Disabling EUTRA capability
Error Case : EutranDisable Flag is False
As part of OPERATING MODE change EUTRA is Enabled
NMO(%d) CSDomainAllowedLau(%d) PSDomainAllowedrau(%d) PDPInProg(%d)
RATChgInProg(%d) SMInProgress(%d)
ATT SIM and ENS enabled. Do not Perform CS/PS registration
NEW and Old Modes are same
Mode change request is saved
ModeIndex: %d, RatMode: %d
mm_IsCurrentRatSupportedInMode: %d
mm_DecodeRrCandidateRplmnScanReq - %d s
mm_RedirectionStatusFromAS : %d
Wrong Action =%d
mm_DecodeUrrcMmReadyForNasRequestInd Saved PlmnAction will be performed
mm_DecodeUrrcMmReadyForNasRequestInd Saved PlmnAction was empty
ATT SIM and ENS enabled. Do not Perform CS/PS registration
Target Rat for QRB:%d (0:QRB_UMTS_TO_LTE,1:QRB_UMTS_TO_NR,2:QRB_MODE_UPDATE_UMTS_TO_NR, 3:QRB_NO_QRB)
Target Rat for QRB:%d (0:QRB_UMTS_TO_LTE,1:QRB_UMTS_TO_NR,2:QRB_MODE_UPDATE_UMTS_TO_NR, 3:QRB_NO_QRB)
Indicate QRB Needed as TRUE to GMC in MMC SUSPEND CNF




In case of G2U HO, we might don't get UNIT_DATA_IND. So, at this point, MM should let NS and PLMN
In L2U SRVCC and U2G CS Handover case we need to set IsSrvccFlg for G2L QRB here.
RAT MODE CHANGE complete received, Triggering LOC_UPD perform actions
RAT MODE CHANGE complete received, Triggering LOC_UPD perform actions
mm_HedgeRatResumeByMmc is %d, %d in mm_SendRrResumeRatReqMsg
Stack suspension requested due to CS call on other stack, Ignore REJECT action if waiting for release
Standby Request Not sent GRR
Before performing release actions,Suspend is received due to CSCALL on other stack
Set mm_PsConnectedInUmts and mm_CellCoverageLost
Changing GMM REL CNF action to LOCAL DETACH
Changing GMM REL CNF action to LOCAL DETACH
Clearing Cell Congestion flag
Entered Funtion mm_DecodeRrCellReselToNrMsg
mm_CheckRrCellReselToEUtranOrNrAllowed returned False As G2N resel not possible
G2N resel not possible
Clearing Cell Congestion flag
Discard mm_DecodeMmc2G3GToNrRedirectionCnfMsg as there is no context exists
Entered Funtion mm_DecodeMmc2G3GToNrRedirectionCnfMsg, Result = %d
Entered Funtion mm_DecodeUrrcCellReDirectToNrReqMsg
Discarding U2N since NS required not to go to NR
Entered Funtion mm_DecodeUrrcCellReselToNRReqMsg
MM_BLOCK_IRAT_DURING_CELL_REJECT flag=%d
Power off detach is pending Hence discarding U2N RESELECTION
Discarding U2L since NS required not to go to LTE or MO/MT call is on-progress
mm_SendRrCellReDirectToNrFailMsg : reason : %d, t_barred : %d
U2N Redirection Failed. NeedCellIndAfterRelInd is set to TRUE.




Selected PlmnId = 0x%x 0x%x 0x%x,
Sending MMC Reselection Req for HEDGE to NR
mm_SetH2NQrbOnModeUpdate : %d

mm_SendUrrcCellReselToNRFailMsg : reason : %d, t_barred : %d


mm_HedgeRatResumeByMmc is %d and %d in mm_PreHandlerUrrcResumeRatReq
mm_ModeSelection_RrInitialised is set as MM_RAT_INITIALIZED
Current HPLMN -> 0x%02X 0x%02X 0x%02X
Last Inserted HPLMN -> 0x%02X 0x%02X 0x%02X
NOTI what Sim changed to URRC
Last Umts HPLMN -> 0x%02X 0x%02X 0x%02X
mm_ModeSelection_RrcInitialised is set as MM_RAT_INITIALIZED
Key is not updated, so let URRC use the old key!
Setting GMM_STANDBY
GmmState(%d) FunctionalState(%d)
NW gave different LAI in TAU_ACCEPT



GmmState(%d) FunctionalState(%d)
Reset MM_CS_CALL_RESUMED_FLAG
Resetting mm_DsIgnoreNewCellInd on suspenstion of edge rat
Cross over of IRAT and MMC_SUSPEND_REQ occured, Ignore IRAT and proceed with SUSPENSION
Discarding GMM Service Request due to MMC suspend Request

Critical Error: RAT=%d
Set LAU needed
CELL_IND is changed into UNIT_DATA_IND to perform RAU during PMM_Connected.
1. RAU needed flag : %d
Release PS signalling connection before RAU procedure initiation.
RAU procedure 'interupts' service request procedure...
2. RAU needed flag : %d
MM/GMM will not send any regi message on this case. Need to send Registration indication to NS for MODE_UPDATE
