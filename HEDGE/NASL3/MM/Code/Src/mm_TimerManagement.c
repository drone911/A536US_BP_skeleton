mm_PlmnFailedActionForETWS = %d
PlmnId = %d
In mm_CheckRatChgOngoingAndDelayTimerExpiryActions Rat change Req : %d, Rat mode Change state %s
%d TimeOuts During Rat Change. Action Delayed ...
%d TimeOuts During Rat Change. RAT Change Crashed !!!!! Timer Expiry Ignored....
(%s) Expired
DSDS proc in progress Delay Location Update Untill resume indication from other stack
TimeOuts During DSDS proc ongoing on the other Stack Action Delayed
mm_DecodeTimerExpiryMsg -> %s,%d
(%s) Expired
(%s) Expired, Actions are delayed
Timer Object ID -> %d
Current Stack -> %d, Timer ID -> %d
%s in mm_PerformT3210ExpiryActions [24.008]-4.4.4.9
Resetting in mm_PerformT3210ExpiryActions
Location Update Timed Out, RR Connection shall be released and Abnormal Cases D-H in [24.008]-4.4.4.9 Run
Unexpected event that MM connection exists and REL_REQ comes. Synchronizing MM/CC state
%s in mm_PerformT3211ExpiryActions
T3211 Timed Out but can not perform Loc Upd due to Loss of Coverage
T3211 Timed Out but can not perform Loc Upd due to Loss of Coverage
T3211 Timed Out, Performing Loc Upd...
%s in mm_PerformT3212ExpiryActions
Due to Access Barred or No Service or LTE RAT, Delay Location Update Untill a Good Cell is Found !
UpdateStatus Does Not Allow Location Update to Take Place
Due to UpdateStatus, Delay Location Update Untill a Good Plmn is Found... !
Improper Update Status for T3212 Expiry !
Saving Timer Msg Until Later......
T3212 Expired But Network Requested for No Location Update to be Done.
%s in mm_PerformT3213ExpiryActions
T3213 Timed Out but can not perform Loc Upd due PLMN Search Handle it after Cell Ind
%s in mm_PerformT3214ExpiryActions
T3214 expired during EMC call , Actions are ignored to avoid EMC call drop
%s in mm_PerformT3216ExpiryActions
T3216 expired during EMC call , Actions are ignored, to avoid Emergency call drop
%s in mm_PerformT3218ExpiryActions
%s in mm_PerformT3220ExpiryActions
CMCC: CS RB's are not released even after call disconnect
T3240 expired in PMM_IDLE & QRB_STANBY state : REL_REQ cause to REL_REQ_ALL_RESOURCES
%s in mm_PerformPlmnListsTimExpAction
mm_PerformMmLauBlockTimerExpiryActions
PAL Error : %x
PAL Error : %x
PAL Error : %x - %d
QRB is diabled.. MM_START_QRB_TIMER is not available
Set MM_T3210 timer value to 10s as per LTE DATA activated of other stack
Timer Duration: %d, mm_GetT3240DurationInSeconds: %d
Timer Duration: %d, mm_GetT3340DurationInSeconds: %d
Set ABORT_QRB timer value to 12 secs for DSDS case
Timer ID Error : %d
PAL Error : %x
timer_duration == ZERO in mm_StartGmmTimer not started
PAL Error : %x - %d
Request to Start a Timer (%s) that is Already Started !
%s -> RUNNING
%s -> Status - %d
PAL Error : %x
%s -> MM_TIMER_STOPPED
T3212 already expired, do not start T3212 again
T3212 value received in broadcast: %d seconds, Timer will be started after LAU ACCEPT
Attempt to Start T3212 Failed in mm_CheckCellDataAndStartT3212 since CellData.T3212 == 0
Attempt to Start T3212 Failed in mm_CheckCellDataAndStartT3212 since UpdateStatus is Not Suitable
Attempt to Start T3212 Failed in mm_CheckCellDataAndStartT3212 since T3212 is Already Running !!!!
Attempt to Start T3212 Failed in mm_CheckCellDataAndStartT3212 since T3211 or T3213 or T3210 is Already Running !!!!
Attempt to Start T3212 Failed in mm_CheckCellDataAndStartT3212 since MM is not IDLE or SIM is invalid !!!!
PAL Error : %x
timer_duration == ZERO in mm_StartGmmTimer -> GMM_T3302 not started
PAL Error : %x
Abnormal Failure - Ending PS DOMAIN SIG HERE
Request to Start a Timer (%s) that is Already Started !
%s -> RUNNING
%s -> Timer Status - %d
%s --> STOPPED
%s - %d

%s -> RUNNING
No Timers are Running !
pal_TmCreateMsgTimer did not return PAL_SUCCESS in mm_CreateTimers
%s timer Expired during RAT Change, Re-Starting it for a short while ... in %s , %s state
%s timer Expired and triggering RAU now.
Abnormal scenario on MM_WFRAU timer happens. reset the GMM CELL IND states..
RAU cannot be triggered, because state is not valid.
%s in mm_PerformWatchDogExpiryActions, cause = %d
Crash on Stuck is %d
MM send GAPI UNRECOVERD IND to restart stack
%s in mm_PerformGmmWatchDogExpiryActions, cause = %d
GMM send GAPI UNRECOVERD IND to restart stack
Timer for QrbForG2L is expired!So immediately MM will send LU/RAU request.
Timer for Quick Rollback is expired! Starting to rollback to LTE..
QRB State:%s
There is no LTE cell or no PDP context, so restarting timer
WARNING!! timer is invalid, so Ignoring this timer expiry
MM_WAIT_FOR_SCR_BEFORE_LAU timer expired or SCR is sent by NW, Perform LAU
CS domain access is not allowed or MM is not in Idle State, set LAU needed to TRUE for further registration
MM_WAIT_FOR_UNITDATA_IND_AFTER_L2UPSHO timer expired, No UNITDATA_IND after L2U PSHO
Discarding Saved Emergency Call.
Call Ended, releasing CS CALL Grant
CS procedure is not CS CALL, not expected
MM_DSDS_DELAY_STACK_RESUMPTION timer expired, Put MMC resume Request on to Main Queue
ERROR : MMC resume Request pointer is NULL
MM_DSDS_IMS_SIG_GAURD_TIMER timer expired, Clearing the IMS Signaling grant locally if not released yet
PS DETACH after CSFB call timer expiry
Condition is met, so starting QRB timer.
mm_T3246DurationInSeconds -> %d (0x%02X)
T3246 value -> %02X
T3246 value -> NOT included; Deactivated
mm_GmmT3346DurationInSeconds -> %d (0x%02X)
T3346 value -> %02X
T3346 value -> NOT included; Deactivated
RemainingT3246 value -> %d (%d)
Remaining T3346 value -> %d (%d)
No running T3246/T3346
ElapsedTime = %d sec
PLMN id for T3246/T3346 -> %x %x %x
Remaing T3246 value -> %x
Remaing T3246 value -> %x this value is not valid.
Remaing T3346 value -> %x
Remaing T3346 value -> %x this value is not valid.
Due to Access Barred or No Service, Delay Location Update Untill a Good Cell is Found !
....timer deactivated
....timer duration = %d(seconds)
....timer duration = %d(seconds)
....timer duration = %d(seconds)
....timer duration = %d(seconds)
....timer duration = %d(decihours)
....timer duration = %d(seconds)
T3212 Start Time %d, End Time %d secs.
T3212 will be started with remainng value = %d
T3212 value %d secs.
Timer out!!! MM is tired to wait for MM_REL_CNF. Sending it again!!
No response from URRC for REL_REQ, Suspending RAT due to STOP_NWK_REQ!!
Timer out!!! GMM is tired to wait for MM_REL_CNF. Sending it again!!
Timeout! U2L will be allowed now..
Didn't get DETACH_REQ
PAGING will not be retrieved
RRC Connection release was not received so QRB will be aborted
