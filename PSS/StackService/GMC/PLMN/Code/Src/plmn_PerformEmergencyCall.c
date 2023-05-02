GMCF::CTX::(%d)pEmcCallStatusData->EmcCallInNoSimFlag : %d -> %d
GMCF::CTX::(%d)pEmcCallStatusData->EmcCallRcvdBeforeMmInitCnfFlag : %d -> %d
GMCF::CTX::(%d)pEmcCallStatusData->RetryEmergencyScanonLTEFlag : %d -> %d
GMCF::CTX::(%d)pEmcCallStatusData->EmergencyPlmnAvailableFlag : %d -> %d
GMCF::CTX::(%d)pEmcCallStatusData->MmeEmcSupported : %d -> %d
GMCF::CTX::(%d)pEmcCallStatusData->EmcFallbackSupported : %d -> %d
GMCF::CTX::(%d)pEmcCallStatusData->ImsVoPSSupportedFlag : %d -> %d
EmcCallSupport : %d, VoPS : %d
GMCF::CTX::(%d)pEmcCallStatusData->MOEsfbFlag : %d -> %d
PrefRat : %s -> %s
Invalid value for status
PrefRat : %s -> %s
Invalid value for status
Emergency call Status : CALL_START (1) in %s, PrefRat : %s
Emergency call Status : CALL_END (2) in %s
Emergency call Status : CALL_CANCELED (3) in %s
Emergency call Status : CALL_FAIL (4) in %s
Emergency call Status : ECBM Enter (5) in %s
[!]Emergency call Status : INVALID ( %d )
Recovery to be started through deepsleep timer as its running/start/expiry in progress
Emergency Call END, resetting plmn selection state
No Action needed as PLMN state is %s !
Emergency Call END, resetting plmn selection state
OOS Recovery timer is running, and MM Non-Idle State, perform actions after IDLE and TIMER expiry
Emergency Call END, starting DeepSleep timer to perform PLMN recovery action after timer expiry
Emergency Call END during any plmn search, starting DeepSleep timer to perform PLMN recovery action after timer expiry
[W]InValid SIM / Search is already going on so no need to try for Normal service
[I]Plmn State : %s (%s)
plmn_PlmnSelectionStarted -> %s
[W]Registration is already going on so no need to try for Normal service
EMC Call ended and MCC procedure is Incomplete. Start MCC procedure
%s : EMC Call Status = %d, AttemptedRatType: %s, mmcActPrefRat: %s
Single Mode operation and MMC_EMERGENCY_CALL_FAIL in current RAT, Treat as Call END
EMC Call Status %d -> %d
[!]Cause not handled in %s
%s:: Entry
%s:: Exit
%s :
[W]Cant accept CM Request During a RAT CHANGE
[W]RR init Req has been sent, NOT received Confirmation yet
RR init Req has been sent.
Selecting Any Plmn For Emergency Use Only : EmcCallNoSimPlmnAction flag = %d
HPPLMN search in progress -> return to saved PLMN or Try Any PLMN
HPLMN Search is on going & UE moving back to RPLMN -> NS
No HPPLMN search in progress -> normal PLMN selection
Aborting PLMN_LIST_REQ (or Abandoning Waiting for User), and selecting any Plmn
Emergency Plmn Available -> %s
Any PLMN search is already in progress !
PLMN_GET_PLMN_TRY_ANYPLMN_CAUSE = %d
%s
tryAnyPlmnCause = %d, Result = %d
%s : EmcRat = %s, ActiveRat = %s, %s
Emergency Call start (not during power on cases)
EmergencyPlmnAvailable - %d, isCanadaE911Exception - %d, isLguException - %d
Enable EUTRA (and perform LTE search) for NTT device
EmergencyPlmnAvailable is TRUE. Sending EMC RAT Info
[W]EmcRat == MMC_NONE_MODE !
NTT device, Set RAT tried with LTE !
CTC SIM: Wait for stack restart from SIT
EmergencyPlmnAvailable is %s. Sending Dummy EMC RAT Info
%s : uCase %d handled - StartPlmnSelCause %d
AP Already has EMC_RAT_INFO %X !Not Performing any actions.
Stack initialisation ongoing!
BPLMNEnabled = TRUE && BPLMN search == TRUE , Postponing EMC Call handling
EMC Call deferred -> after BPLMN Abort
Wait for MCC procedure to complete
AP requested mmcActPrefRat : %s
powerOn lte search ongoing, Wait for Response
CpowerOn lte attach ongoing, Wait for attach Response
Emergency Call notification received immediately after powerOn initialization... Start RPLMN search after init is complete
setting LTE as prefRat for ATT/KT for airplane mode on EMC call case
EMC Call skip -> PLMN Selection already going on, Wait for Response from the corresponding RAT
PLMN Search on %s ongoing, suspend and try on UMTS
Foreground LIST procedure is going on, ABORT and process EMC call
EMC Call deferred -> after NEW_RAT_INITIAL_PLMN_ACTION
BPLMNEnabled = TRUE && BPLMN search == TRUE , Postponing EMC Call handling
EMC Call deferred -> after BPLMN Abort
Abort ongoing MCC scan and take EMC actions
setting LTE as prefRat for ATT/KT for airplane mode on EMC call case
Current camped cell supports EMC, send EMC RAT info
Stored scan on going, continue the search
Start anyPlmn search
RPLMN is present in tempBlockedList. Try normal service on 3G/ 2G
Start deepSleep timer to suspend the current search and start search on same rat
EMC Call skip -> PLMN Selection already going on, Wait for Response from the corresponding RAT
%s : uCase : %d | LteBlocked : %d | NrBlocked : %d
RPLMN in NR tempBlockedList
RPLMN in LTE tempBlockedList
Is registered SIM card ? : %s , isUeInSK :%s
VoPS is not supported. Prioritze CS call
IMS is not registered. Prioritze CS call
In UK give preference to PS domain for EMC call
VoNR not supported
Call fail received... Already next plmn search ongoing
After EPSFB(N2L), send EMC_RAT_INFO(LTE)
Call fail received... start next plmn search
CTC SIM: Wait for stack restart from SIT
NTT device, Update RAT tried with 3G !
NTT device, Do not disturb ongoing PLMN search !
Trigger search for next RAT for TMO
Any Plmn Search is already going on, wait for result to take further action
LastEmcRat (%d) is different from the current RAT(%d), use current RAT for EMC
NTT device, skip EMC scan !
Start deepSleep timer to suspend the current RAT and start search on same rat
%s : uCase %d handled - StartPlmnSelCause %d
%s : Esfb %s
Wait the LTE attach result.
Invalid Esfb FailCause : %d
[W]Invalid Esfb result value : %d
