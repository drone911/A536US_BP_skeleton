[I]plmn_CsgSelectionMode : %s
[!]Invalid Mode (%d) in %s
pPlmn_CsgDb->CsgSelectionMode : %s -> %s
pPlmn_CsgDb->SavedPlmnSelectionMode : %d -> %d
[I]%s : CSG Feature Not Supported. Ignore the message
Emergency PDN is connected. Reject Manual CSG Selection
Rejecting GAPI CSG Selection due to User Plmn Action Already Saved, Awaiting RR Release
Rejecting GAPI PLMN Selection due to Sim State being PLMN_SIM_INVALID
Manual Selection Not Allowed in AUTO Mode !!!
PLMN LIST REQ is in Progress. No Manual PLMN selection Allowed !!!
pPlmn_CsgDb->SelectedCsgId : %d -> %d
GMCF::CTX::(%d)pPlmn_CsgDb->CsgSelectStatus : %d -> %d
GMCF::CTX::(%d)pPlmn_CsgDb->CsgSelectionInProg : %d -> %d
GMCF::CTX::(%d)pPlmn_CsgDb->CsgListInProg : %d -> %d
GMCF::CTX::(%d)pPlmn_CsgDb->CsgDisplayInd : %d -> %d
GMCF::CTX::(%d)pPlmn_CsgDb->SimCSGlistsUpdated : %d -> %d
GMCF::CTX::(%d)pPlmn_CsgDb->CsgListReqCause : %d -> %d
GMCF::CTX::(%d)pPlmn_CsgDb->UeCsgAwareness : %d -> %d
GMCF::CTX::(%d)pPlmn_CsgDb->UiccCsgAwareness : %d -> %d
GMCF::CTX::(%d)pPlmn_CsgDb->CsgType : %d -> %d
GMCF::CTX::(%d)pPlmn_CsgDb->IsLteCsgDisable : %d -> %d
[I]%s : CSG Feature Not Supported. Do not Clear Selected CSG
GMCF::CTX::(%d)pPlmn_CsgDb->CsgCampedStatusForCSG : %d -> %d
[I]%s : CSG Feature Not Supported. Do not Initialise CSG variables
%s
%s with Result :- %s
pPlmn_CsgDb->CsgListReqCause -> %d
AvailableCsgLists Before Sorting ::
AvailableCsgLists After Sorting ::
[W]Invalid pPlmn_CsgDb->CsgListReqCause !!
%s
[W]Invalid List Req Cause : %d; Not starting List Req on other RAT's;
CSG in background
SelectedRat = %s
CSG in Foreground
[I]RatMode -> %s
[!]Compiled for Single Mode Operation So perform Actions
%s :: pPlmn_CsgDb->CsgListInProg = (%d),
CSG in background
SelectedRat = %s
CSG in Foreground
%s
ActiveRat -> %s, BplmnListRatMode -> %s
CSG in background
CSG in Foreground
BPLMN not possible, first move to SRLTE mode
%s :
[W]Old PLMN Selection Mode is not saved !!
%s :
[I] %s : CSG Not Supported. Ignoring the Msg
PerformPeriodicCsgScan not Initiated!! Plmn_CsgListDb.OperatorCsgListCount: %d
%s :
Saved PLMN RatMode: %s
%s :
%s
Selected CSG Id : %X , CSG selected : %s, Csg cell Type : %d (none / closed / hybrid)
CSG Cell Type is not Closed, Not adding in to ACSG list
Selected CSG ID is already present in the White list
[W]Invalid CSG Selection Mode
Selected CSG ID is not present in the White list
%s
Selected CSG Id : %X , CSG selected : %s, Csg cell Type : %d (none /closed /hybrid)
[I]%s : CSG Not Supported. Ignoring the Msg
%s : Result = %s, CsgSelectionInProg = %s, CsgSelectStatus: %s
Sending CSG User Selection Response to GAPI
HOLD RSP TRUE. Attach Accept might have received with SMSOnly/CSFB not preferred
[W]%s : CSG Feature Not Supported
%s:: Entry
Current Camped CSG details are saved and CSG Selection status is cleared
GMC_EV_PLMN_CSG_SAVE_CURRENT_CAMPED_CSG not Supported Yet
UE was camped on a LTE CSG before CSFB call was initiated, Triggering Fast return to the LTE CSG
GMC_EV_PLMN_CSG_RETURN_TO_LAST_CAMPED_CSG not Supported Yet
%s:: Exit
[I]%s : CSG Feature Not Supported
CSG ID not found in 3G. Send SEL Response to NS and roll back to RPLMN, Enable EUTRA
MAnual CSG in progress and EUTRA is disabled. Search same CSG in 3G
[I]------------------------- Displaying CSG Data ----------------------------
[I]CSG Aware UE : %s, CSG Aware UICC : %s
[I]CSG Selected : %s, CSG ID : 0x%08X
[I]CSG Selection in Progress : %s , CSG List in progress : %s CSGListReqCasue : %d
%s Found Complete CSG Lists Proceed with Combine Actions
%s Complete List not Found so Send List Req for Next Rat
CSG List going on in Active RAT
SendStartDrxInfoShareInd : %s SendBplmnSrchStopInd : %s
CSG was going on Non-Active RAT, Send BplmnSrchStopInd
Sending IND to RRC:Start DrxInfo Ind
%s : ACSG Count = %d , OCSG count = %d
------Allowed CSG List ------
PlmnId : %06x
%d > 0x%08X : ACSGLCount(%d), allowed CsgIdCount(%d)
------Operator CSG List ------ (allowed CSG cnt(%d))
Duplicate Entry not allowed in White List !!
OCSG found in Forbidden CSG List
PlmnId : %06x
%d > 0x%08X
SelectedRat = %s
%s
[W]ERROR: Should not come here in %s ; Plmn_CsgListDb.AvailCsgListDb.RatSearched : %d
%s : ActiveRat - %s
[W]WARNING : pPlmn_CsgListDb->AvailCsgListDb.RatSearched (%d) is not PLMN_CSG_LTE_DONE in DUAL mode
%s :
Already camped on same CSG ID / Rat mode combination
Manual CSG Selection not allowed in this state.
Manual CSG Selection not allowed in this state.
PLMN SEARCH is in Progress. GAPI_PLMN_CSG_SEL_REQ Msg Saved Until Later.
For ATT, CSG mode cannot be changed to MANUAL
Plmn_CsgListDb.OperatorCsgListCount = 0, Forceful CSG-SEL-REQ accepted
pPlmn_CsgListDb->OperatorCsgListCount = 0, Not taking any actions
CSG_SEL_REQ :: PLMN ID : %06x CSG ID : 0x%X
Perform CSG search for selected CSG id
Search is ongoing. Suspend - Suspend RAT to send SEARCH_REQ
[W]Unexpected value received from NS in CsgModeChangeReq
Saved Plmn Selection Mode : %s
Reading Plmn List Sent by %s. Please Wait....
Ignoring the CSG_LIST_RSP !!!!!! List Req Cause: %d
Rejecting CSG_LIST_RSP, Wrong plmn_PlmnState !
User Plmn Selection Mode Change Request processing from Queue Triggered
%s :: TBD
