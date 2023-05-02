GMCF::CTX::(%d)pHPPlmnSearchData->HPPlmnTimerActionPendingFlag : %d -> %d
GMCF::CTX::(%d)pHPPlmnSearchData->HPPlmnSearchFlag : %d -> %d
HPlmn Search In Progress
%s : Reset HPPlmnSearchFlag and Send HPPLMN search handoff noti with ended.
plmn_HPPlmnSearch=TRUE in MANUAL PLMN SELECTION MODE
Received HPPLMN Search STOP Req After PLMN_SEARCH_REQ, Must wait for Cell-Ind and then ReturnToSavedPlmn
HPPLMN search for SOR not performed.(HplmnSearchCondition=%d)
%s :
%s : Reset HPPlmnSearchFlag and Send HPPLMN search handoff noti with ended.
Stopping HPlmn Search : %s(%d)
%s : Reset HPPlmnSearchFlag and Send HPPLMN search handoff noti with ended.
Aborting BPLMN completely, Next HPPLMN actions will be taken after HPLMN timer expiry !
%s : Reset HPPlmnSearchFlag and Send HPPLMN search handoff noti with ended.
%s:: Entry
%s : Reset HPPlmnSearchFlag and Send HPPLMN search handoff noti with ended.
No Higher Priority Plmn Found..Aborting HPlmn Search Procedure
Initiating Periodic Higher Priority PLMN Search
%s : Set HPPlmnSearchFlag and Send HPPLMN search handoff noti with started.
%s:: Exit (%d)
[I]----------------------- Displaying HPPLMN Search -------------------------------------------
[I]HPPlmnSearchFlag : %d, UseFastHPlmnSearch : %d, Pending : %d
[I]----------------------------------------------------------------------------------------
GMCF::CTX::(%d)pHPPlmnSearchData->UseFastHPlmnSearch : %d -> %d
Checking HPlmn Search Conditions
> ProSe direct communication is ongoing
3GPP2 operating mode! Do not take actions!
#1 Emergency PDN is connected
#2 Search Delay After Power Up not Elapsed Yet
#3 Can only be done in PLMN_AUTO_PLMN_SEL_MODE !!
#4 BPLMN due to EARFCN Ongoing, Restart HPLMN Timer for short duration
#5 Special Case, HPPLMN need to be done for enabling CS service
#6 Special case, Restart HPLMN Timer for short duration
#7 H3G HPLMN Timer expired when Action is already ongoing
[W]#8 Incorrect PlmnState/Loss of Cov: plmn_PlmnCoverageLost = %s
[I]Plmn State : %s (%s)
[I]RatModeChangeState -> %s
#8 Camped on HPLMN but not yet registered.
#9 Already High Priority Plmn(Home/Equivalent/Pref/OPref PLMN !!
#10 Refresh_RatMode change pending, Start HPLMN Short Timer
#11 RR Release action is already set to PLMN_SEND_HPLMN_LIST_REQ_RR_REL.
#12 Can only be done in PLMN_IDLE
[I]RatModeChangeState -> %s
Periodic HP-PLMN search Not Initiated.
#13 ATT Manual CSG Search in progress!
#14 CSG Mode is CSG Manual !
#15 BPLMN Procedure for CSG is on -going, abort and process HPLMN actions
%s:: Entry
%s : BPLMN %s
HPPlmnSearchConditions %s -> %d
%s : Set HPPlmnSearchFlag and Send HPPLMN search handoff noti with started.
H3G Hack, do not send HO end notification
%s : Reset HPPlmnSearchFlag and Send HPPLMN search handoff noti with ended.
Abort Higher Priority PLMN search
Defer HPLMN list req action after RR connection release
%s:: Exit (%d)
%s: HPPlmnSearchConditions -> %d
[W]PDP context is activated.
Defer HPLMN list req action after RR connection release
HPLMN_SEARCH_START_MM_STATE_NOT_OK - Restart for short duration
Special case, Restart for short duration
