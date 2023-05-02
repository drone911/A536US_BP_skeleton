GMCF::CTX::(%d)pPlmn_ManualNetworkScanDB->ListReqFromNsFlag : %d -> %d
GMCF::CTX::(%d)pPlmn_ManualNetworkScanDB->ForcedListReqFromNsFlag : %d -> %d
GMCF::CTX::(%d)pPlmn_ManualNetworkScanDB->UserReqType : %d -> %d
GMCF::CTX::(%d)pPlmn_ManualNetworkScanDB->UserSelectedPlmnFlag : %d -> %d
GMCF::CTX::(%d)pPlmn_ManualNetworkScanDB->ManualPlmnSelRspNeededFlag : %d -> %d
GMCF::CTX::(%d)pPlmn_ManualNetworkScanDB->AP_band : %d -> %d
GMCF::CTX::(%d)pPlmn_ManualNetworkScanDB->ListReqAllowedFlag : %d -> %d
ManualSearchState : %d
Sending forced manual PLMN selection response
%s
Replace RPLMN with saved PLMN
[I]Saved Plmn : %06x (%s)
[W]savedPlmnRat (%s) not supported !
Start deepSleep timer to release grant and try recovery later
Rejecting GAPI PLMN Selection due to cause : %d
SIM is invalid. No need to take any action.
Plmn_ChkSavedMsgStatus: PLMN_USERACTION_MSG == TRUE
CS Call Procedure in Progress, reject user request
IS_DEVICE_MAKETYPE_2_F DEVICE AND plmn_DsOtherStackManualListStatusFlag == TRUE
%s:: Entry
PLMN::MANSCAN: Step1. MANUAL PLMN search start
PLMN::MANSCAN: Step1.b MANUAL PLMN search abort
PLMN::MANSCAN: Step3. USER PLMN selection
PLMN::MANSCAN: Step4. USER PLMN selection rsp
PLMN::MANSCAN: Step0. AUTO/MANUAL Mode change
%s:: Exit
%s :
Start PLMN list req. timer and send PLMN list request
BPLMN List in Progress; Abort this & Start New List Req
%s : Reset HPPlmnSearchFlag and Send HPPLMN search handoff noti with ended.
Initiating Req to RR(C) for a Complete Scan
Search shall be performed when PLMN is in IDLE.
Search is ongoing. Suspend - Resume current RAT to send LIST_REQ
SimPresent = %d, SimRspStatus = %d
%s : deferred -> Power up Routines in progress. NS_MMC_PLMN_LIST_REQ Msg Saved Until Later.
PLMN list request on %s only is invalid in current operating mode.
IMS Call Procedure in Progress, reject user request
plmnListReqAllowed = %d, PlmnSelStartedFlag= %d
%s : deferred -> PLMN status is busy. NS_MMC_PLMN_LIST_REQ Msg Saved Until Later.
GAPI PLMN list request already in progress
%s :
[!]PLMN LIST REQ is not yet processed so, delete the saved message
PLMN has actions Cleared! Resetting PLMN List Data
Recovery Actions will be taken after receiving abort cnf
PlmnState != PLMN_WAIT_FOR_PLMN_LIST, So No need of sending abort
On Any PLMN, actions will be taken after OOS expiry
PLMN selection already in progress !
Auto Mode : Start PLMN Recovery Action
Manual Mode : Trying to Go back to RPLMN
Manual Mode : Start PLMN selection or OOS Recovery Timer
%s :
Triggering Search for User Selected Plmn.
User Selected Plmn is -> %06x Requested Rat Mode -> %s
%s is: %06x
Write UserSelected PLMN Id to flash : %06x(0x%x)
%s : %06x, %s
User Requesting a Plmn UE already attached to
%s : Cause(%s), HoldPlmnRsp (%d)
[W]Manual List Req pending, giving more priority to Manual PLMN list request
[W]Manual User Selected PLMN Response expected, but camped on diff PLMN
[W]%s: Requested RAT %s is not selected for Scan
Temporary Reject cause received in Manual mode PLMN selection. MM will retry Registration
UE rejected for PS, Try CS registration and only then update user
Inform GAPI that RR(C) has camped on a Cell in Requested Plmn
LGU RoamingInitialize: %s
LGU, PLMN sel mode change in PLMN_NOT_INITIALISED state
LGU, RoamingInitialize -> TRUE
