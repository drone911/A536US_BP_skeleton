Initialisation of < GmmTimerManagement>, InitType=%d
....GMM_T3302 Expiry Saved
mm_PerformT3310ExpiryActions
Resetting values in mm_PerformT3310ExpiryActions
avoid triggering of attach in MM state MM_WAIT_FOR_RR_CON_LOC_UPD
Power off detach is pending Hence discarding ATTACH retrails
Abort PS attach in hedge rat due to non DDS stack.
For 2nd expiry of T3310 for PS only Attach, Attach will not be triggered inorder to avoid signaling blockage by one stack
Perform TbfRelAction, MM_COORD_TBF_REL_ACTION
Send RR_REL_GMM_COMMON to GMC, as Manual Search is pending
RAT Mode is neither GSM nor UMTS.
Resuming Signaling grant when T3310 expires in Suspended state
GMM_T3310 expiry in incompatible state - no action required.
avoid triggering of attach/RAU in MM state MM_WAIT_FOR_RR_CON_LOC_UPD
Power off detach is pending Hence discarding ATTACH retrails
Abort PS attach in hedge rat due to non DDS stack.
T3311 expired on 2G DTM/MM_WAIT_FOR_RR_CON_LOC_UPD, mm_GmmNeedAttachflag set to TRUE
PS Not Enabled : GMM_T3311 expiry, So ignoring it
T3311 expired on 2G DTM/MM_WAIT_FOR_RR_CON_LOC_UPD, RauNeeded flg set to TRUE
T3311 expired on no cell available state, rauNeededFlag is set to TRUE
Abort PS attach in hedge rat due to non DDS stack.
ERROR: GMM_T3311 expiry in unexpected mm_GmmState....
avoid triggering of RAU in MM state MM_WAIT_FOR_RR_CON_LOC_UPD
Periodic RAU Procedure not initiated in PMM_CONNECTED State [24.008] 4.7.2.3...
Periodic RAU procedure required on return to GMM_REGISTERED.GMM_NORMAL_SERVICE...
....GMM_T3312 expiry in incompatible state
mm_PerformT3314ExpiryActions():
Ready Timer (T3314) Timed out => Moving to GMM_STANDBY.
In GCF case, not Moving to GMM_STANDBY when GMM state moved from GMM_DEREGISTERED
Periodic RAU timer deactivated
Nothing to do in these States
Msg arrived in Incorrect State
mm_PerformT3316ExpiryActions
Deleting GMM Rand & Res...
mm_PerformT3317ExpiryActions
This was the only Connection (PMM_IDLE at the time Service Req Was Sent) -> Releasing GMM Signalling Connection ....[24.008]-4.7.13.5
QRB state:%s
mm_PerformT3318ExpiryActions
Performing Network Authentication Failure Actions...
mm_PerformT3320ExpiryActions
Performing Network Authentication Failure Actions...
mm_PerformT3321ExpiryActions
T3321 Expired in Suspended State, GMM State before Suspension %s
GMM State is %s
%s in mm_PerformT3330ExpiryActions
avoid triggering of RAU in MM state MM_WAIT_FOR_RR_CON_LOC_UPD
Resetting values in mm_PerformT3330ExpiryActions
Power off detach is pending Hence discarding RAU retrails
mm_GmmT3330ExpirationCount = %d
For 2nd expiry of T3330, RAU will not be triggered inorder to avoid signaling blockage by one stack
Resuming Signaling grant when T3330 expires in Suspended state
%s in mm_PerformT3340ExpiryActions
%s in mm_PerformT3319ExpiryActions
3319 Timer expired we can send Service req if needed.
mm_PerformDetachTryTimExpActions
Send
Set GMM REL REQ cause = RelAllResources
%s in mm_PerformGmmPsConnRelTimerExpiryActions
Ignoring Timer Expiry actions, Rat Mode %s, Functional State %s
MM Pending on Release request, Next Stop Req will trigger Suspension
NO release Request pending, BackGndSearchFlag %d
BackGndSearchFlag is FALSE, Next Stop Req will trigger suspension
Waiting for Suspend Rat Conform
Stop Request is pending due to some reason, Reg status triggered to NS to receive STOP_NETWORK_REQ
Stop Request not pending, Stop Request would have triggered
Rat Mode change state %s
%s in mm_PerformBlockUserDataTimerExpiryActions
....GMM_T3346 Expiry Saved
mm_GmmT3330ExpirationCount = %d
Reset mm_GmmT3330ExpirationCount.
Reset mm_GmmTimerExpirationCount.
....timer deactivated
....timer duration = %d(seconds)
....timer duration = %d(decihours)
....timer duration = %d(minutes)
mm_GmmT3302DurationInSeconds -> %d (0x%02X)
mm_GmmT3314DurationInSeconds -> %d(decimal)

%s -> RUNNING
No Timers are Running !
MS shall indicate a preferred READY timer value of...
TraceDummy1 =%d
MS shall NOT indicate a preferred READY timer value...
Network assigned READY timer value...
...differs from previously negotiated value
...does not differ from previously negotiated value
MS requested READY timer value shall be applied...
Preferred READY timer value NOT proposed by MS or network...
Both CS and PS Domains are barred, So No performing T3312 Expiry actions
Location Update is triggered
MM State is not Idle, So not performing Loc Upd
Last Update was Not Combined, So No need to perform Location Update
Wrong Action =%d
