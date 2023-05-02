[I]Plmn Selection Mode : %s
Set PlmnSelectionMode : (%d)
[W]Invalid value for ctrl : %d
Set PlmnSelectionMode : %s -> %s(%d)
[W]Invalid value for ctrl : %d
GMCF::CTX::(%d)pPlmnSelectionMode_DB->ModeChangePendingFlag : %d -> %d
Set CopiedPlmnSelectionMode : %s -> %s(%d)
[W]Invalid value for ctrl : %d
[W]Invalid value for ctrl : %d
Set plmn_userReselection flag : %d -> %d
GMCF::CTX::(%d)pPlmnSelectionMode_DB->PlmnSavedFlag : %d -> %d
%s : Write GMC_FLASH_PLMN_SEL_MODE from %s to %s(%d) (Current PlmnSelectionMode : %s)
Updated PLMN Selection Mode from %s to %s
%s : Cause = %d , LastCampCountryCode(%x)
[W]Invalid Action !
UE back in S. Korea. PLMN Selection Mode changed from MANUAL to AUTO
UE Either Already in AUTO Mode or Still in Last Camped Country
%s : Reset HPPlmnSearchFlag and Send HPPLMN search handoff noti with ended.
PLMN List Size = %d
Checking for PLMN received in Search Fail List[%d] : %06x
No S. Korean PLMN found in PLMN List
PLMN received in Cell Ind : %06x
LastCampCountryCode (%x) , CurrPlmnCountryCode (%x)
%s:: Entry
%s : New Mode = %s, Plmn State = %s
#1. Pre-Processing - Check Pending PLMN_SEL_REQ, PLMN_SE_RSP
Pending PLMN SEL REQ is not yet processed, mode changed to auto , delete the saved message
#3. Reconfig PLMN Selection Context
#4. Send PLMN Sel Mode Rsp
Mode Change Req is dummy for CSG Search in AT&T
#5. PLMN Sel Mode Change : %s -> %s
Other stack was using resources due to which Manual PLMN Procedure failed, dont't need to force assert.
PLMN Sel Mode Change Result - %d
#6. Update CSG Sel. Mode, and PLMN Sel. Mode
%s:: Exit
[W]Mode change request not supported. (SIM is absent)
[W]Mode change request not supported. (un-supported mode )
Man to Auto: CS Call Procedure in Progress, Proceed with user request
CS Call Procedure in Progress, reject user request
#2a. New mode is Auto, set plmn_userReselection flag and start PLMN_AUTO_AUTO_RESEL_TIMER
Already BPLMN List in Progress; Abort this & Start New List Req
#2b. New mode is Manual, Abort BPLMN
Already BPLMN List in Progress; Abort this & Start New List Req
#2c. New mode is Manual Background mode
MANUAL BACKGROUND MODE not expected when BPLMN scan running
Man to Man : %s
HPLMN Timer Not Running, So not Starting it again
Awaiting User Input
User Manual PLMN Re-Selection, Awaiting User Input
%s : Reset HPPlmnSearchFlag and Send HPPLMN search handoff noti with ended.
Man to Man BG : %s
Already ON_PLMN or RAT change in progress - Plmn State = %s
%s : %s
Invalid SIM state - Moved to limited state
Result = %d - Wake from DeepSleep due to mode change Initiate Plmn Search %s
Result = %d - Continue with PLMN actions for mode change %s
Result = %d - After OOS Timer expiry, UE will restart PLMN selection
Result = %d - User Request is high priority so ignoring old RAT Init Action
Result = %d - MCC procedure is ongoing. Do not take any action
Result = %d - Recovery Actions already running using BPLMN
ON_ANY_PLMN state, start recovery after recovery timer expiry
Updaing RPLMN with Saved PLMN
%s : %s
Invalid SIM state - Moved to limited state
Result = %d - Continue with PLMN actions for mode change %s
Start deepSleep timer to release grant and try recovery later
MCC procedure is ongoing. Do not take any action
On Any PLMN, actions will be taken after OOS expiry
[!]RecoveryTimer not Needed
[!]ON_PLMN state no actions needed
Man to Auto : %s
HPLMN Timer Not Running, So not Starting it again
Already ON_PLMN, Nothing more to do
PowerUp Routines in Progress. No need to take any action.
PowerUp Routines in Progress. No need to take any action.
SIM is invalid. No need to take any action.
MCC is going on, mode change to auto action will be ignored.
Auto 2 Auto pre-condition OK
Auto(Man BG) to Auto : %s
PLMN state: %s, plmn_HPPlmnSearch -> %s
