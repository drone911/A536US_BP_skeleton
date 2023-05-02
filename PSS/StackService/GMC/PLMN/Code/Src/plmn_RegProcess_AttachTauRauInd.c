LTE attach with VoPS = 0. Reinitialse to LTE CDMA mode!
%s : %s(%d)
[W]#18 Reject on roaming network(No underlying 3GPP network) -Consider as reject and move to next system
[W]%s
[W]%s ignored - plmn_State = %s, PlmnSelectionInProgress = %d, DEEPSLEEP_TIMER_STARTED = %d
[W]%s ignored - Manual List Req pending or Manual User Selected PLMN Response expected
EmergencySupported TRUE, send LTE rat
EmergencySupported FALSE, send dummy rat for pending EMC call
CTC SIM: Wait for stack restart from SIT
TMO EMC call pending, as EMC is not supported after attach cnf, go to next system
[W]AP is already notified with EMC_RAT_INFO with Rat (%d)
%s : %s, LteCsVoiceSupport = %d
Starting Periodic CS Search Timer!
%s : %s, IsEMCOnlyBearer: %d
Only EMC PDN accepted. Change to limited state
UE Attached for Emergency services in LTE/NR
EPS only Registration notified, Gather list from current RAT and TRY for Selected PLMN on 2G/3G !
EPS only Registration during HPPLMN, Restore back to RPLMN (Restart HPLMN Timer for 2 min for next recovery) !
%s : %s, %s(%d), BlockPlmnActions[%d]
PLMN_NO_PDP_CONTEXT_ACTIVATED_ERR
%s Blocking duplicate actions as SelectionInProgress / RatChangeInProgress / DeepSleepTimer is going on
%s during ongoing Power-off..Add Rplmn to FPLMN list..Further PLMN selection related actions not expected!
%s during ongoing Power-off..Further PLMN selection related actions not expected!
%s during ongoing Power-off..Add Rplmn to GMM FPLMN list..Further PLMN selection related actions not expected!
Default Case - %s
%s fail during ongoing Power-off..Further PLMN selection related actions not expected!
CTC SIM: Wait for stack restart from SIT
TMO EMC call pending, as attach fail with default cause, go to next system
LTE HEDGE EMC Mode and HPLMN is in temp Blocked PLMN List try Any PLMN Camping
No Actions taken in LGU LTE roaming, Wait for NO_CELL_IND / EUTRA_DISABLE to trigger search !
Wait for NO_CELL_IND / EUTRA_DISABLE to trigger search !
PS Only device perform Plmn Selection after max attempts
Wait for NO_CELL_IND / EUTRA_DISABLE to trigger search !
No actions are triggered for default cause but registration failed, so set PlmnState to TryRegistered
