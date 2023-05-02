GMCF::CTX::(%d)pPlmnSelectionDB->Data.FirstPlmnInitFlag : %d -> %d
GMCF::CTX::(%d)pPlmnSelectionDB->PlmnState.PrevPlmnState : %d -> %d
pPlmnSelectionDB->Data.PlmnState : %s -> %s (%d)
pPlmnSelectionDB->Data.PlmnSelectionState : %s -> %s (%d)
GMCF::CTX::(%d)pPlmnSelectionDB->PlmnState.PlmnSelStartedFlag : %d -> %d
GMCF::CTX::(%d)pPlmnSelectionDB->PlmnState.FirstPlmnSelFlag : %d -> %d
GMCF::CTX::(%d)pPlmnSelectionDB->PlmnState.PowerUpPlmnSelFlag : %d -> %d
GMCF::CTX::(%d)pPlmnSelectionDB->StoredFrqnSrchFlag : %d -> %d
GMCF::CTX::(%d)pPlmnSelectionDB->Data.LOCFlag : %d -> %d
GMCF::CTX::(%d)pPlmnSelectionDB->Data.TotalLOCFlag : %d -> %d
GMCF::CTX::(%d)pPlmnSelectionDB->Data.RecoveryAbandonedFlag : %d -> %d
GMCF::CTX::(%d)pPlmnSelectionDB->Data.RecoveryTimerNeededFlag : %d -> %d
GMCF::CTX::(%d)pPlmnSelectionDB->Data.AvailablePlmnListUpdateMethod : %d -> %d
GMCF::CTX::(%d)pPlmnSelectionDB->Data.ListReqCause : %d -> %d
GMCF::CTX::(%d)pPlmnSelectionDB->Data.KeepAllListsFlag : %d -> %d
GMCF::CTX::(%d)pPlmnSelectionDB->Data.RatChangeNeededForRPlmnFlag : %d -> %d
GMCF::CTX::(%d)pPlmnSelectionDB->Data.PreventSendingLastPlmnFlag : %d -> %d
GMCF::CTX::(%d)pPlmnSelectionDB->Data.PreventSendingLastPlmnEitherRatFlag : %d -> %d
GMCF::CTX::(%d)pPlmnSelectionDB->Data.CheckHPlmnInAvailablePlmnListFlag : %d -> %d
GMCF::CTX::(%d)pPlmnSelectionDB->Data.RPlmnInForbiddenListOrDeletedFlag : %d -> %d
Set SkipSearchRatMode : %s -> %s
Reset SkipSearchRatMode : %s
[W]Invalid value for ctrl : %d
GMCF::CTX::(%d)pPlmnSelectionDB->Data.SorReselection : %d -> %d
GMCF::CTX::(%d)pPlmnSelectionDB->Data.NeedToAvoidPlmn : %d -> %d
GMCF::CTX::(%d)pPlmnSelectionDB->Data.ContinuePlmnSelection : %d -> %d
GMCF::CTX::(%d)pPlmnSelectionDB->Data.checkHplmnSearchFlag : %d -> %d
GMCF::CTX::(%d)pPlmnSelectionDB->Data.AwaitingCellIndAfterPlmnSearchReqFlag : %d -> %d
GMCF::CTX::(%d)pPlmnSelectionDB->TryHPlmnAfterRPlmnSearchFailFlag : %d -> %d
[I]PLMN Selection in progress !
HPlmn Exists in List Given By RR
Stored Search is not ongoing....
%s : ManualPlmnSelRspNeeded (%d) powerUpSelection(%d) StopByModeSelChanged (%d)
Done with All RATs for Reg PLMN, Selecting ANY Plmn -- Manual Mode
HPLMN not found on all RATs, Selecting Any PLMN -- Manual Mode
ManualPlmnSelRspNeeded (%d) powerUpSelection(%d)
User selected PLMN not found on all RATs, Selecting Any PLMN -- Manual Mode
%s : EHPLMN found in available PLMN -> Start Fresh Home Plmn Search
%s : Result = %s
%s : TargetRat = %s, forcedSearch = %d
[W]Plmn Selection is in Progress in %s. So Wait for Search to Complete
[W]Mode changed or CSFB Call End in Manual Mode, No RPLMN available
%s
a. Invalid SIM. Trying for any PLMN
b. Automatic mode
Trying to Go back to Previous PLMN in Automatic Mode
Trying to Go back to Previous PLMN in Automatic Mode
Initiate HPLMN Search
Lists Already Exists. Start selection using List
c. Manual Mode
Trying to Go back to RPLMN in Manual Mode
Dont Have Any registered PLMN So Camp on to Limited Service
RecoveryAbandoned: TRUE
Current Procedure(%d). Start New Procedure After short deep sleep : %d
Current Procedure(%d). Start New Procedure After short deep sleep : %d
UE START fresh PLMN selection
[W]It Should Not come here
%s : %06x
[W]It Should Not come here
%s : %s
%s :
%s, RPlmnInForbiddenListOrDeletedFlag = %d
%s - PLMN : %06x -> %06x, RAT : %s -> %s
%s :
%s, RPlmnInForbiddenListOrDeletedFlag = %d
%s - PLMN : %06x -> %06x, RAT : %s -> %s
Stored RPLMN/HomePLMN scan failed after LAU Max Failure, trigger PLMN List request on all RATs
Share grant with other stack after stored scan on all RATs
%s : PlmnListSearch Started as %06x is blocked in %s.
%s:: Entry
SIM Absent. Try emergency
[W]SIM READ RSP not received yet.
SIM INVALID. Try emergency
%s : plmnSelectionCause %d,(MccProcedureNeeded: %d)
[W]Plmn Selection is not triggered -> Wrong plmnSelectionCause (%d) or Stack is not Initialized yet
[DSDS]: EUTRA Status: %d
[DSDS]: ServiceDomain: %d
Perform NR disable action for IMS not supported.
%s:: Exit
[W]Process deferred mode update for new_mode %s which is same with current_mode.(NSA only supported = %d)
Same Mode, Ignore Mode change request
%s :
Special Check for H3G Fast Camping/Recovery
H3G and 2G NRP Condition satisfied. Changing from 2G NRP (%06x) --> H3G PLMN (%06x)
H3G Condition satisfied. Changing from H3G PLMN (%06x) --> 2G NRP (%06x)
%s : %s -> %s (%d)
%s : newPlmnSelectionState - %s (%d)
%s : newPlmnSelectionState - %s -> %s (%d)
In DUAL/TRI Mode so Check Same PLMN in Other Rat also -- Manual Mode
In TRI Mode so Check Same PLMN in Other Rat also -- Manual Mode
In QUAD Mode so Check Same PLMN in Other Rat also -- Manual Mode
HPLMN present in list but not found at lower layers, try next -- Manual Mode
Check for HPLMN in 2nd Rat -- Manual Mode
HPLMN not found, try next RAT -- Manual Mode
Check for HPLMN in 3rd Rat -- Manual Mode
HPLMN not found, try next RAT -- Manual Mode
Check for HPLMN in 4th Rat -- Manual Mode
In TRI Mode User Selected PLMN 2nd RAT so Check User PLMN in Other Rat also -- Manual Mode
In TRI Mode User Selected PLMN 3rd RAT so Check User Selected PLMN in Other Rat also -- Manual Mode
In QUAD Mode User Selected PLMN 4th RAT so Check User Selected PLMN in Other Rat also -- Manual Mode
Stored Freq Scan. Check Same PLMN in Other Rat also -- Manual Mode
Stored Freq HPLMN Scan. Check Same PLMN in Other Rat also -- Manual Mode
%s : newPlmnSelectionState - %s (%d)
[W]%s - No PLMN recovery - NoSavedPlmnOption = %d
%s : Do power on optimization by releasing grant
