[I]ResumeBplmnList (N-L-U-G): %d - %d - %d - %d
[I]ResumeBplmnList (L-U-G): %d - %d - %d
[I]Bplmn State: %s, Procedure: %s
GMCF::CTX::(%d)pPlmn_BplmnDb->IsEnabled : %d -> %d
GMCF::CTX::(%d)pPlmn_BplmnDb->BplmnState : %d -> %d
GMCF::CTX::(%d)pPlmn_BplmnDb->BplmnProc : %d -> %d
BCKGND List Abort Cause : 0x%x, 0x%x -> 0x%x (%s)
BCKGND Resume Rat Info : Flag, 0x%x -> 0x%x
%s : unexpected req value : %d
pPlmn_BplmnDb->CandidatePlmn : %06x -> %06x
GMCF::CTX::(%d)pPlmn_BplmnDb->SearchingRat : %d -> %d
GMCF::CTX::(%d)pPlmn_BplmnDb->CandidateScanSrcRat : %d -> %d
GMCF::CTX::(%d)pPlmn_BplmnDb->BplmnScanMode : %d -> %d
GMCF::CTX::(%d)pPlmn_BplmnDb->BplmnScanRequestType : %d -> %d
GMCF::CTX::(%d)pPlmn_BplmnDb->IsBplmnListPartial : %d -> %d
GMCF::CTX::(%d)pPlmn_BplmnDb->PlmnRecovTimExpActionFlag : %d -> %d
GMCF::CTX::(%d)pPlmn_BplmnDb->FastScanInProgress : %d -> %d
Bplmn procedure is going on !
%s : EMM State: %d , SRTimerType:%d
MO/MT call/Service Request/Detach triggered; abort BPLMN if running on other RATs
No BPLMN Action Taken. Wait for BPLMN_FAIL_IND from L-RRC
TAU or RA proc in progress; Start Recovery timer
Already BPLMN recovery timer running or abort initiated
No Action taken in EMM/MM State: %s
%s : BPlmnState = 0x%x
%s : NRMM State: %d , SRTimerType:%d
MO/MT call/Service Request/Detach triggered; abort BPLMN if running on other RATs
No BPLMN Action Taken. Wait for BPLMN_FAIL_IND from NR RRC
TAU or RA proc in progress; Start Recovery timer
Already BPLMN recovery timer running or abort initiated
No Action taken in NRMM State: %s
%s : BPlmnState = 0x%x
LIST REQ aborted/to be aborted if collision case.
ABORT_REQ sent, Wait for ABORT_CNF to perform Recovery Actions
BPLMN already aborted. BPLMN Timer running /BPLMN operations set for actions after release
CELL LOST & BPLMN_RECOVERY_TMR not running, Send Abort
BPLMN scan was running on Active RAT, AS will perform internal Abort. Do PLMN abort confirm actions
ABORT_REQ sent, Wait for ABORT_CNF to perform Recovery Actions
ABORT not sent, perform Recovery Actions immediately
%s : %s (%d)
BPLMN state(%d) is NOT Active or candidate PLMN for BPLMN is Empty (%06x)
Found candidate PLMN (%06x) in RR List -> Stop BPLMN AvailStatus : %d
Found equivalent PLMN in RR List, -> Stop BPLMN
%s : %s (%d)
%s :
BPLMN Not enabled or No Background search in progress
[!]BPLMN scan triggered for recovery in Manual / Manual Background when RPLMN is Empty. Setting candidate PLMN to HPLMN to Avoid Stuck
[I]Registered Plmn : %06x (%s)
[!]Invalid Selection mode
[!]GMSS_HPPLMN_SCAN : Set Candidate PLMN to HPLMN
[!]GMSS_HPPLMN_SCAN : Set Candidate PLMN to OPLMN
%s - Candidate Plmn %06x, Rat %s
%s : AbortCause - %s (0x%x), RatChangeListReqBlock - %d
[W]Should not come here BPLMN search is %s
Invalid RAT mode: %s, Should not come here!!!!
Active RAT is %s and BPLMN search ongoing on other RAT (%s);
BPLMN scan was running on Active RAT, AS will perform internal Abort. Do PLMN abort confirm actions
Manual List Req pending, giving more priority to Manual PLMN list request
Eutra Disabled. Perform EUTRA Disable actions
Manual List Req pending, giving more priority to Manual PLMN list request
NR Disabled. Perform NR Disable actions
Abort Cause: %d not handled; Not taking any actions
%s uCase = %d
%s : Cause[0x%x]
PLMN_BCK_GND_LIST_FAIL_SIG_PROC_IN_PROGRESS
%s : Reset HPPlmnSearchFlag and Send HPPLMN search handoff noti with ended.
PLMN_BCK_GND_LIST_FAIL_USER_DATA_IN_PROGRESS
%s : Reset HPPlmnSearchFlag and Send HPPLMN search handoff noti with ended.
PLMN_BACKGND_ABORT_PAGE_IND
PLMN_BACKGND_ABORT_DUE_TO_RESEL. RatChangeListReqBlock: %d
PLMN_BACKGND_ABORT_CELL_CHANGE
PLMN_BACKGND_ABORT_LIST_NOCELL_IND
PLMN_BACKGND_ABORT_RRC_GUARD_TIMER_EXP
PLMN_BACKGND_ABORT_DSDS_FRESH_SCAN
PLMN_BACKGND_ABORT_LIST_FAIL_EUTRA_DISABLED_TEMP
[W]Invalid cause
[W]Unknown Bplmn Init Type (0x%02X)
[I]Plmn State : %s (%s)
bplmn enabled = %d, ENS enabled = %d
Starting BPLMN Search on RAT: %s
List Req is sent Passive RAT; Send DRX stop first
[W]Bplmn is on-going, ABORT ongoing BPLMN procedure and process CALL_REQ after Abort completion !
Restarting HPLMN timer for 2 mins
Abort BPLMN procedure for user action in peer stack
Reset BPLMN Context
Restarting OOS recovery timer
%s:
%s : Reset HPPlmnSearchFlag and Send HPPLMN search handoff noti with ended.
%s -%d
%s, %s, %s
Found Complete List for %s
Recovery actions are taken. No additional actions required!
%s : Reset HPPlmnSearchFlag and Send HPPLMN search handoff noti with ended.
[W]Search must be in foreground ( BPLMN Enabled : %s, Bplmn Searching: %s )
Complete List not Found so Send List Req for Next Rat
List Req is sent on Act Rat; Send Stop if already sent StartDrxInd
Do not send DrxInfo IND to RRC since this is Internal Loopback optimization, so dummy list_ind will be sent to GMC internally
List Req is sent on Act Rat; Send Stop if already sent StartDrxInd
BPLMN Flag on registry not set, so not setting Abort flags
%s : CurrentRat : %s , AbortCause - %s (0x%x)
%s : AbortCause[%s][0x%x]
%s : ListReqCause[0x%x], CsgListProg[%d]
Invalid state to handle BplmnAbortCnf ! SEARCH_FLAG(%d) BACKGND_PLMN_LIST_REQ_CAUSE(%d)
%s : Reset HPPlmnSearchFlag and Send HPPLMN search handoff noti with ended.
Manual List Req pending, giving more priority to Manual PLMN list request
Performing Pending ProSe action (resume LTE)
3GPP2 Mode -Abort BPLMN completely
Invalid cause
After No Cell Ind & abort procedure without FAIL_IND Start PLMN Search
Save available List Locally
Retreive the locally saved available List and update list
BPLMN recovery failed in BPLMN, Ignore Foreground recovery actions.
PLMN_BACKGND_ABORT_PAGE_IND and SavedOperatingMode != NONE
Performing Pending mode change
Stand by indication actions pending. Performing actions
EMC call pending !
Periodic HPLMN actions pending !
FG Search will be triggered after DeepSleep timer expiry
PS disabled during BPLMN procedures
Wait for PLMN_LIST_REQ from GAPI.
%s
No available LTE PLMN
PLMN is present in EHPLMN List and is suitable for PLMN selection
Suitable PLMN not found in abort cnf
%s:: Entry
[W]Restarting PLMN_BPLMN_RECOVERY_TIMER since MM / PLMN states are not yet suitable
ON_ANY_PLMN, CoverageLost = TRUE Need to Perform BPLMN Rec actions
[W]plmn state / BackGndPlmnListReqCause mismatch Reset BPLMN variables
[W]CsgListInProg == TRUE
%s : Result=%d, uCase=%d
%s:: Exit
%s
%s : Reset HPPlmnSearchFlag and Send HPPLMN search handoff noti with ended.
[I]PlmnListReqCause : %s, CSGListReqCause : %d
[!]!!Invalid ListReqCause. For Recovery send List to user in manual mode
[W]Warning !! CSG BplmnSearchRat : %s
%s:: Entry
%s : %d, (%s , %s)
Fast scan in progress. Change Cause to PLMN_BACKGND_ABORT_CELL_CHANGE
%s : Result = 0x%x
%s:: Exit
%s :
Ignore PLMN_LIST_IND !! LTE PLMN List Rsp present!
Ignore PLMN_LIST_IND !! NR PLMN List Rsp present!
[W]Invalid RAT in plmn_RatSearched: %s
Reading Plmn List Sent from %s
Abort Cnf from RR/RRC:Rat Searched - %d, 3G List Size - %d, 2G List size - %d
[W]Ignore Abort Cnf, Wrong plmn_PlmnState !
Fail Ind from RR : Rat Searched - %d, 3G List size- %d, 2G List size - %d
Candidate PLMN not found in any of the RATs
Backgnd Abort flag value = 0x%X
[W]Not handled Request Type(%d)
%s :
SrcRat : %s, RatsToScan : %s, GuardTimer: %d, isFastScan : %d. isStoredSearch : %d
Preconditions not satisfied. Sending failure response
%s :
Abort ongoing BPLMN procedure
[W]No active BPLMN session in progress
