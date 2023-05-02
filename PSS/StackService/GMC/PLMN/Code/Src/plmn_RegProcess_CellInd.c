GMCF::CTX::(%d)pPlmn_CellIndDb->AcceptRrPlmnFlag : %d -> %d
GMCF::CTX::(%d)pPlmn_CellIndDb->CellIndRcvdAfterPowerOn : %d -> %d
Plmn_CellIndDb.NCellRAT : %s -> %s
%s : Reject Cause[%d]
Plmn Selection already started. Don't take actions for CEll Reject Ind
[I]Plmn State : %s (%s)
%s : %s(%d)
CellIndCause : %d
%s : PLMN State Invalid (%s)
AwaitingCellIndAfterPlmnSearchReqFlag == TRUE
LRPLMSI is TRUE; Accept Cell_Ind
Special Case for TC 26.7.4.5.5.1 -- GRR doesn't detected PLMN on different bands with BPLMN
skipCellIndAction - %d, silentManToAutoChange - %d
skipCellIndAction - %d -> %d
[W]%s : Ignore Autonomous CELL_IND during SEARCH_REQ.
[W]%s : Ignore CELL_IND due to invalid PLMN State (%s)
All Rats suspended, Ignore Cell Ind
Ignoring cell ind as it is not received from current RAT(%s)
[W]Invalid Action!!!
[I]Selected Plmn : %06x (%s)
[W]%s : Ignore CELL_IND - Received PLMN ID is not in Eq PLMN list / USA SPEC Eq PLMN List / not equal to the Selected PLMN.
Accept Cell_Ind - Cell Ind PLMN is Eq PLMN of selected PLMN.
%s : CSG id = 0x%08X
PerfomActions->CsgSelStatus = FALSE in CSG_MANUAL_MODE, Roll back to saved PLMN
PLMN received in Cell Ind : %06x
LastCampCountryCode (%x) , CurrPlmnCountryCode (%x)
%s :
RAT Change Cause Not 0 -> Save Plmn Given By RR(C) = %06x
User Plmn Selection Mode Change Requested
%s : Reset HPPlmnSearchFlag and Send HPPLMN search handoff noti with ended.
SIM INVALID ,Dont Start OOS Timer Camp on Limited Service
[!]RecoveryTimerNeeded = %s, So OOS Timer not started
UE registered on VPLMN, Restart HPPLMN Search timer with 2 mins
No need to start HPLMN Scan Timer; HPLMN Srch Prd is %d
Plmn Given By RR Exists -> Copy to Selected Plmn Id
[I]Selected Plmn : %06x (%s)
UE in limited camping state and PLMN in CELL_IND is HPLMN or RPLMN, need to start PLMN search for recovery
PLMN Found is Valid PLMN So try for Normal Service on this PLMN
Found RPLMN when Tried for Limited Service:CurrRatMode - %s , RPlmnRat - %s
Rplmn != HPlmn, Try HPlmn, Found HPLMN when Tried for Limited Service
PLMN(%06x) Valid for %s
[W]Invalid Action!!!
Sending Gmss_HandlePlmnSearchRsp to GMSS with result : MMC_SUCCESS, MMC state(%s)
CELL IND received in MMC REGISTERED state
CELL IND received -> Change to Registering
Neighboring Cell Rat Info : %s , SkipRatMode : %s
%s : EmergencyCallSupport = %d, EmcRatNotified = %s, CellInd RAT = %s
EmerCallPending = %d, RatModeChangeState = %d
EMC Call being handled through CSFB.
EMC Call being handled through EPSFB.
china-EMC Call being handled through IMS normal bearer.
Rat notified as 2G/3G, wait for CSFB request
for 3GPP2 mode, actions will be taken in GMSS
CTC SIM: Wait for stack restart from SIT
TMO/canada/VZW E911 : sent EMC rat info after attach result
[W]Emergency Call is Pending, but the current Cell does not support Emergency
Continue search on remaining RATs or Send notification to AP
Trigger any PLMN Selection
[W]AP is already notified with EMC_RAT_INFO with Rat (%d)
TMO/canada/VZW E911 : sent EMC rat info after attach result
[W]Invalid PlmnRat Mode (%d) for EmergencySupport Actions
