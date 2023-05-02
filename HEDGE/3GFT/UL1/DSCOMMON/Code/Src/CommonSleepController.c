3G3G: CommonSleepControllerRequestSleep: Invalid ClientID = %d
3G3G: CommonSleepControllerRequestSleep: Raw Wakeup = %d, clientId = %d
3G3G: CommonSleepControllerRequestSleep: SW Sleep Requested By ClientID = %d, HWStatus = 0x%x, CurrentRSN=%d, WakeupRSN=%d
3G3G: CommonSleepControllerRequestSleep: HW Sleep Requested By ClientID = %d, HWStatus = 0x%x, CurrentRSN=%d, WakeupRSN=%d
3G3G: CommonSleepControllerRequestSleep: WARNING!Wrong HW Status
3G3G: CommonSleepControllerRequestWakeup: ClientID = %d, HWStatus = 0x%x, isSw=%d isEarly = %d isForced = %d
3G3G: FEE start: iteration=%d. FEE running at rsn=%d
3G3G: FEE start: igoreFeeDrag =%d, clientID=%d
3G3G: EHalSleepFeeEnableCmd exec failure
3G3G: CommonSleepControllerStopFee Client ID= %d
3G3G: EHalSleepFeeDisableCmd exec failure
3G3G: setHWusage Client ID= %d
3G3G: clearHWusage Client ID= %d
3G3G: RegisterClient Client ID= %d
3G3G: DeregisterClient Client ID= %d
3G3G: Client ID= %d isClientRegistered = %d
3G3G:isModemSleeping= %d
3G3G:CommonSleepControllerGetWakeupRSN= %d
3G3G:CommonSleepControllerGetHWUsageStatus= %d
3G3G:CommonSleepControllerIsSleepIssued issueSleepToken = %d result = %d
3G3G:CommonSleepControllerGetRegisteredClientStatus= %d
3G3G:CommonSleepControllerSetRescheduleStatus status= %d pichRSN = %d, clientId = %d
3G3G:CommonSleepControllerGetRescheduleStatus status= %d clientId = %d
3G3G:CommonSleepControllerSetPICHSkipStatus status= %d clientId = %d
3G3G:CommonSleepControllerSetPICHSkipStatus status= %d clientId = %d
3G3G:CommonSleepControllerGetPICHSkipStatus status= %d clientId = %d
3G3G:CommonSleepControllerSetEarlyWakeupTimeInSlots slots= %d clientId = %d
3G3G:CommonSleepControllerGetEarlyWakeupTimeInSlots slots= %d clientId = %d
3G3G:CommonSleepControllerGetPichRSN status= %d clientId = %d
3G3G:CommonSleepControllerSetPichRSN pichRSN= %d clientId = %d
3G3G:CommonSleepControllerGetCollisionStatus isCollisionStatus %d
CommonSleepController: All stacks not in sleep, StackSleepReqStatus %d
3G3G: CommonSleepControllerRequestSleep: Shifting WakeupRSn of other client by -PREPOND_WAKEUP_IN_SLOTS slots wakeupRSN %d
3G3G: CommonSleepControllerRequestSleep: Shifting WakeupRSn by %d slots pichRSN %d wakeupRSN %d
3G3G: CommonSleepControllerRequestSleep: Shifting WakeupRSn of other client by +PREPOND_WAKEUP_IN_SLOTS slots wakeupRSN %d
3G3G: CommonSleepControllerRequestSleep: Shifting WakeupRSn of other client by -PREPOND_WAKEUP_IN_SLOTS slots wakeupRSN %d
3G3G: CommonSleepControllerHWAdjustSleepSlotCorrection: I/P RSN %d
3G3G: CommonSleepControllerHWAdjustSleepSlotCorrection: O/P RSN %d
CommonSleepController: All stacks not in sleep, StackSleepReqStatus %d
3G3G: CommonSleepControllerRequestSleep: Conflict identified reset optimization %d
3G3G: CommonSleepControllerRequestSleep: Conflict identified reset optimization %d
3G3G: scheduleSwWakeup: ClientID = %d, wakeupRSN = %d, currentRSN = %d
3G3G: checkNearestWakeup Collision Detected and WakeupTiming Adjusted: targetRSN = %d, targetClient = %d
3G3G: checkNearestWakeup Collision Detected and WakeupTiming Adjusted: targetRSN = %d, targetClient = %d
3G3G: checkNearestWakeup: targetRSN = %d, targetClient = %d
3G3G: IssueSleepCmd Client ID= %d, WakeUpRSN = %d
sleepStart - uhal_Cmd_exec
3G3G: CancelAllSwWakeupTokens Client ID= %d
3G3G: CFEE_EnableCallBack
3G3G: CommonSleepController_CPchAndDrxResourcesController_InitDone
3G3G: CommonSleepControllerProcessUrrcQueue
3G3G:CommonSleepControllerSetIsDRImpossible isDRImpossible= %d clientId = %d bitMask %d
3G3G:CommonSleepControllerSetRescheduleStatusforDR status= %d clientId = %d
3G3G:CommonSleepControllerGetRescheduleStatusforDR status= %d clientId = %d
3G3G:CommonSleepControllerCheckOverlappedWakingDuration: Other Client not Registered
3G3G:CommonSleepControllerCheckOverlappedWakingDuration: Other Client Not Updated Yet
3G3G:CommonSleepControllerCheckOverlappedWakingDuration: Client registered although wakeuptime not updated yet
firstClient %d firstWakeRsn %d secondClient %d secondWakeRsn %d
CommonSleepControllerCheckOverlappedWakingDuration: Insufficient Margin to prepond, Setting isDrImpossible
3G3G:CommonSleepControllerSetDrNotAvailableDuringScheduling isDRImpossible= %d clientId = %d
3G3G:CommonSleepControllerGetDrNotAvailableDuringScheduling isDRImpossible= %d clientId = %d
3G3G:CommonSleepControllerCheckandReturnPichRsnDifference: Client not Registered
3G3G:CommonSleepControllerCheckandReturnPichRsnDifference: Other Client PICH Rsn Not Updated Yet
3G3G:CommonSleepControllerCheckandReturnPichRsnDifference: PichRsn other client is second
3G3G:CommonSleepControllerCheckandReturnPichRsnDifference: ClientId %d WakeRsn is first although PICH Rsn is second, retval = %d
3G3G:CommonSleepControllerSetDrPichRsn: ClientId %d PichRsn %d
3G3G:CommonSleepControllerCheckandClearRescheduleStatusforDR: Postpone other client (%d) wakeup, OtherClientWakeupRSN %d
3G3G:CommonSleepControllerCheckandClearRescheduleStatus: Postpone other client (%d) wakeup, OtherClientWakeupRSN %d
3G3G: IsGreaterRsn Rsn1 %d Rsn2 %d returnval %d diff %d
3G3G: WakeUpCallBack: isPCHConfiguredForWakeupClient= %d
SMC Correction for client = %d,HwSfn = %d SwSfn = %d
SMC Correction for client = %d,HwSlot = %d PreviousSwSlot = %d
SMC Correction for client = %d,NewSwSlot = %d
3G3G: SleepStartCallBack: isPCHConfiguredForWakeupClient= %d
3G3G: EHalSleepStartCmd exec failed: errCode=%d addErrCode=%d
