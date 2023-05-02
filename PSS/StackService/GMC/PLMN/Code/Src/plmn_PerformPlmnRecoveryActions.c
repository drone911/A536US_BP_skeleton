Candidate PLMN detected. No actions required!
Only stored scan performed. Restart OOS Timer
Stored BPLMN scan failed. Do not start blind BPLMN scan
Start blind BPLMN scan after stored BPLMN is completed
%s :
%s:: Entry
%s: ForcePerform = %s
RPLMN Invalid - start HPLMN search
RPLMN Valid - start RPLMN search
#4. Start PLMN recovery action
%s:: Exit
#1. Pre-condition check - BPLMN, LGU MCC done, PLMN search in-progress...
[!]Abort PLMN recovery action! - BPLMN action for Normal service already going on !
Ignore PLMN recovery action! - LGU MCC scan is not completed. Start with a fresh MCC procedure
Ignore PLMN recovery action! - Plmn Search already in Porgress
[!]Abort PLMN recovery action due to loss_cov! - Mode update is going on, waiting for NR mode update rsp !
#2. Recovery exception Check - limited camping instead of normal recovery - No SIM, Auth Rej, illegal ME, EMC call pending ...
SIM Not Present or SIM Read not finished -> Try Any Plmn
plmn_PlmnRecoveryAbandoned -> Try Any Plmn in Auto Mode
plmn_PlmnRecoveryAbandoned -> PLMN_TRY_ANY_PLMN_AFTER_DELAY_RECOVERY_ABANDONED_METHOD
EMC call pending -> Try Any Plmn
#3. Recovery exception - continue PLMN selection after SR grant - continue MCC scan, Blind scan ...
%s : Background Search Started to gain Normal Service
[I]Plmn State : %s (%s)
OOS Recovery Opt. precondition check fail (%d)
PLMN Recovery Action in Automatic Mode
HPPLMN search in progress -> continue in other RATs
RPlmn Exists or plmn_RegisteredInForeignCountry -> TRUE
No RPlmn -> Back to PLMN_PLMN_SELECTION_USING_HPLMN_1ST_RAT
No RPlmn -> Back to PLMN_START_PLMN_SELECTION_USING_HPLMN
plmn_NoCellIndReceivedFlag: TRUE (RecoveryType = %d (RPLMN/HPLMN)); Store List From RRC and continue search on other RAT
Block ANY PLMN search after immediate LOSS_COV for LGU
PLMN Recovery Action in Manual Mode StopByModeSelChanged (%d)
No RPlmn, Check for HPLMN
No RPlmn, No HPLMN in LIST, Try ANY PLMN
Trying RPlmn.
Block ANY PLMN search after immediate LOSS_COV for LGU
