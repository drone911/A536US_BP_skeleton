Set gDrxL1_Flag[%d](%d->%d)[%d, %d] @%s()
HALDRX_DisablePagingIntr
[DRX] curTimeSFN=%d, curTimeTti=%d, curTimeOffset=%d)
[DRX] remain time is zero!!! ---> invoke pagingrcvintr 2ms later!!
[DRX] EnablePagingRcvIntr : PagingRcvIntrTime (%d us)
[DRX] HALDRX_EnablePagingRcvIntr: PreponePagingRFReqTime(%d)
[DRX] curTimeSFN=%d, curTimeTti=%d, curTimeOffset=%d)
[DRX] remain time is zero!!! ---> invoke pagingrcvintr 2ms later!!
[DRX] remaining time for SCG pagingrcvIntr (%d) > invalid threshold (%d)
[DRX] Invalid remaining time(%d)!!! ---> Skip PagingRcvIntr Enable(%d)
[DRX] remaining time for SCG pagingrcvIntr (%d) > invalid threshold (%d)
[DRX] Invalid remaining time(%d)!!! ---> invoke pagingrcvintr 2ms later!!
[DRX] EnablePagingRcvIntrSCG : PagingRcvIntrTime (%d us)
[DRX] HALDRX_EnablePagingRcvIntr: PreponePagingRFReqTime(%d)
[DRX] DisablePagingRcvIntr, prepone(%d)
[DRX] Modem is off, so do not control CQI int regster
[DRX] Modem is off, so do not control CQI int regster
[DRX] ProcFreqErrIntr: FreqErrIntr Disable returns FALSE, Stop processing
ProcFreqErrIntr: diff(%d) freq_int_value(%d) gDrx_Pre_FreqIntVal(%d)
ProcFreqErrIntr: gDrx_Pre_FreqIntVal(%d), gDrx_ChangeDrxCycle(%d), drx_T(%d) gDrxCycleChangeCnt(%d)
[DRX] ProcFreqErrIntr: gDrx_FreqIntVal(%d), FREQ_INT_VALUE(%d)
[DRX] ProcFreqErrIntr(freq_int_value:%d gSceTotalModemClk:%u gDrxErrAccPeriod:%d gDrx_Rvalue:%u)
[DRX] ProcSysValidIntr
Wakeup LISR Fn()
[NRDS] RfAvailForNr state but NR is during PAUSE. Set PauseFlag for LTE pause after Wakeup.
[Debug] Is_Drx_Wakeup_ongoing = %d
[NRDS] set IsLteWakeupStarted(%d)
[DRX] request cpu/mif clock raise in ProcWakeupIntr
[DRX] Already request cpu/mif clock raise
[DRX] Force Wakeup
[DRX] Force Wakeup(IsForResume : %d)
[DRX] No SoC Warmup time
[DRX] wakeup from non-Hsleep
[DRX] Time diff(%d us), Elapsed SleepCnt(%d slp_clk), Expected SleepCnt(%d slp_clk), Soc Warmup time(%d us)
[DRX] Soc warmup finished too early. Keep sleep for (%d us)
[DRX] Soc warmup finished
[4G_DRDS] Skip SCG wakeup intr, make SCG 1. IsRfAvailable(%d) and 2. gDrx_HW_PowerOn_flag(%d)
[4G_DRDS] 4G_DRDS will be activated after PBCH decoding
[NRDS] set NrOnlyGranted(%d).
[NRDS] Other stack's IsLteWakeupPended(%d). Next Wakeup stack is other stack.
[NRDS] Other stack's IsLteWakeupPended(%d). Next Wakeup stack is other stack.
[NRDS] pend HALDRX_ProcWakeupIntr - NrdsSleepState(%d), set IsLteWakeupPended(%d)
[DRX] gL1LC_DsdsWakeupIntrTmr was expired
[DRX] Delay current stack wakeup procedure as its sleep is on-going
[DRX] Delay current stack wakeup procedure as IsWaitResponse flag is TRUE
[NRDS] DRDS cannot be activated. But Nr2RxChanged is TRUE
[NRDS] request NR to change : 2rx -> 4rx
[DRX] Sleep Time : ST%d (Previous %d [100us])
[DRX] Sleep Time : ST%d (Current %d [100us])
[DRX] ProcWakeupIntr: MIF INTR Status ON
[SC] LteMifFreq(%d)
[DRX] Current Stack %d // Current Stack gDsdsIsWakeupResume = %d // Other Stack gDsdsIsWakeupResume = %d
[SLEEP] DisableDrxIntr: intr(2)
[DRX] Ignore ProcWakeupIntr as Suspend processing is in progress!!
[NRDS] reset ProcWakeupByMsg(%d)
[DRX] ProcWakeupIntr: System Stable Start Time(%u)
[HAL => L1LC] Decode HAL_L1LC_CDRX_RESTORE_REQ, but no IsRfAvailable
Avoid scell activation as IPC_ACTION_ID_RESET is pending
[DRX] ProcReSyncIntr: sfn(%d), SWSFNload(%d)
[DRX] gDrxResync_cnt(%d)
[DRX] rtg_counter_start(%d)
[DRX] AFC/STR start(%d)
[DRX] System stable end time(%d), stable time diff(%d)
[DRX] stable_time_diff = %d, gDrx_SysStableTime = %d, gDrx_ScellMargin = %d, 4RX_Margin = %d
[DRX] gL1LC_CheckLastPagingIntrTmr started for %d ms
[DRX] Expected Fisrt pagingintr(%d): sfn(%d), tti(%d), Expected sfn(%d), tti(%d)
[PWR_OPT]Start Intra Srch/Meas in Resync[%d]!!!
[PWR_OPT] !!! pNextMeasElem is NULL !!!
[NRDS] reset IsLteWakeupStarted [%d]
HALDRX_ProcMODEMsetting
LMAC Init
DSP setting
Avoid scell activation as IPC_ACTION_ID_RESET is pending
Update UL Timing at last paging interrupt. (ta_acc:%d)
End of %s
[DRX] ProcPagingIntr(%d): sfn(%d), tti(%d)
[DRX] Paging channel Rx
[DRX] Otherstack's CellBoundary: %d, Diff: %d
[DRX] ProcPagingIntr(%d): sfn(%d), tti(%d), Expected sfn(%d), tti(%d)
[DRX] SFN is zero[%d,%d], Expected SFN_Tti[%d,%d], HWSFNload[%d], SWSFNload[%d]
[DRX] SFN is zero, Reinit due to abnormal
[4GDRDS] Skip pal_D_PagingHCB
Update UL Timing before 2ms last paging interrupt. (ta_acc:%d)
[PWR_OPT]Start Intra Srch/Meas in Resync[%d]!!!
[PWR_OPT] !!! pNextMeasElem is NULL !!!
Release LTE DRX cpu clock for volte
[DRX] Paging channel Rx : current sfn(%d,%d), current tti(%d), PF(%d), PO(%d)
Set gDrxLmacReady(%d), dspWakeup(DSP_STATE_WAKEUP)
[DRX] Otherstack's CellBoundary: %d, Diff: %d
[Debug] Is_Drx_Wakeup_ongoing = %d
[DRX] HALDRX_ProcPagingRcvIntr, IsRfAvailable(%d) Preponed(%d)
[DRX] Preponed HALDRX_ProcPagingRcvIntr: sfn(%d), tti(%d), Preponed(%d)
[DRX] ProcPagingRcvIntr: sfn(%d), tti(%d)
[DRX] Saved AGC Index(%d, %d)
[DRX] Saved AGC Index(%d, %d)
[DRX] SFN cal, Update and Interrupt Setting start
[DRX] curTimeSFN(%d), curTimeTti(%d), reset_offset(%d)
[DRX] time_diff(%d) drx_wakeup_time_tti(%d) drx_wakeup_time_mclk(%d) drx_tti_mclk(%d) gDrx_WakeupTimeforUpdate(%d), gDrx_WakeupStartTime(%d), gDrx_WakeupEndTime(%d)
[DRX] RTG update Check curTimeTti(%d), reset_offset(%d), gDrx_WakeupTimeforUpdate(%d), Mclk(%d)
[DRX] EnableSfnUpdateIntr: tti(%d), offset(%d), current_time(%d, %d, %d), pal_time(%d, %d)
[DRX] EnableSfnUpdateIntr: tti(%d), offset(%d), current_time(%d, %d, %d), pal_time(%d, %d)
[DRX] SFN_LOAD_VALUE(%d), SWSFNload(%d)
[4G_DRDS] %s (eDV_Active: %d, Semi_cc_info_save: %d)
[4G_DRDS] path: %d
[SC] pre_cc_info[CC%d.before]rf(%d),mxr(%d),rtg(%d),demod(%d),pgc(%d),dcr(%d) - semi DR
[SC] pre_cc_info[CC%d.after]rf(%d),mxr(%d),rtg(%d),demod(%d),pgc(%d),dcr(%d) - semi DR
[DRX] Cellboundary(SCG: %d): %d, Otherstack(MCG): %d, Diff: %d, RxDelay: %d
[4G_DRDS] SCG: curTimeTti(%d), curTimeOffset(%d)
[4G_DRDS] SCG: time_diff(%d) blackout_time_tti(%d) blackout_time_mclk(%d) blackout_tti_mclk(%d) Updated_tti(%d), RFReleasePalTime(%d), RFGrantPalTime(%d)
[DSDS] RTG update Check!!! curTimeTti(%d), curTimeOffset(%d), Updated_tti(%d), Mclk(%d)
[DRX] paging_frame(%d), paging_offset(%d), curTimeSFN(%d, %d), HWSFNload(%d), SWSFNload(%d)
[DRX] RemainingTime to PagingRcvIntr(%d, %d, %d)
[DRX] paging_frame(%d), paging_offset(%d), curTimeSFN(%d, %d), SFNload(%d)
[DRX] Invalid paging_frame(%d)!!! ---> Skip PagingRcvIntr Enable(%d)
[DRX] curTimeSFN(%d)
[DRX] SCG paging_frame(%d), paging_offset(%d), curTimeSFN(%d, %d), HWSFNload(%d), SWSFNload(%d)
[DRX] SCG SI start SFN-TTI(%d, %d), SI End SFN-TTI(%d, %d)
[DRX] Skip setting Paging Rcv Intr and trigger Paging done from Last Paging Intr
[DRX] Soc Warmup timer start(%d us)
[DRX] Soc Warmup timer can't start(%d us)
[DRX] Init
[DRX] SysStableTime(%d), WakeupSocTime(%d)
[DRX] SysStableTime(%d), WakeupSocTime(%d), gDrx_Debug_Level_delay(%d)
[DRX][PWR_OPT] RF adaptive ON/OFF disable
[DRX] StartSlowClkEst: freq_int_value(%d)
[DRX] StartSlowClkEst: 1st
[DRX] StartSlowClkEst: 2nd
[DRX] StartSlowClkEst: 3rd Drx_clk_est_temp(%d)
[DRX] WakeupSendIPCtoDSP
[DRX] IPC end
[DRX] WakeupSendIPCtoDSPforSCG
[4G_DRDS] Stop SCG ST(%d) Retry Timer !
[4G_DRDS] Stop SCG ST(%d) PagingRequestTimer !
[4G_DRDS] SCG TDP state was not HW_IDLE @ DRDS-Activated(%d)
[4G_DRDS] MCG SetTdpState(CC%d): state(%d -> %d)
[4G_DRDS] disable Dynamic QS (4G_DRDS act)
[4G_DRDS]Add Scell: cid(%d), band(%d), dl_earfcn(%d), ul_earfcn(%d), dl_bw(%d), ul_bw(%d)
Instant SCell configuration&activation for 4G_DRDS SCG (TTI:%d)
[4G_DRDS] SetTdpState(SCG:CC0):state(%d->%d)
[4G_DRDS] SetTdpState(MCG:CC%d):state(%d->%d)
[DRX] IPC for SCG end
----- Start:_AddScellinfoForSCG
[4G_DRDS] Can't Add Scell due to Semi DRDS
[4G_DRDS] set Int lock for Add Scell
[4G_DRDS]Add Scell(DR): cid(%d), band(%d), dl_earfcn(%d), ul_earfcn(%d), dl_bw(%d), ul_bw(%d)
[4G_DRDS] reset Int lock for Add Scell
----- Start:_RemoveScellinfoForSCG
[4G_DRDS] set Int lock for Remove Scell
[4G_DRDS] Remove Scell(DR): cid(%d), dl_earfcn(%d)
[4G_DRDS] reset Int lock for Remove Scell
[4G_DRDS] abnormal case!! Remove Scell: cid(%d), dl_earfcn(%d)
[4G_DRDS] For clearing abnormal case, RFBandlist is done
----- End:_RemoveScellinfoForSCG
----- Start:_AddRemoveSCellForSCG
[4G_DRDS] Remove RFband of SCG from RFbandlist due to MIMO conflict
----- End:_AddRemoveSCellForSCG
[4G_DRDS] ----- Start _SetSemiDrds (eDV_Active: %d, Semi_cc_info_save: %d)
[4G_DRDS] Can not enable 4G_DRDS because CC = (%d)
[4G_DRDS] SCG TDP state was not HW_IDLE @ DRDS-Activated(%d)
[4G_DRDS] MCG SetTdpState(CC%d): state(%d -> %d)
[SC] pre_cc_info[CC%d.before]rf(%d),mxr(%d),rtg(%d),demod(%d),pgc(%d),dcr(%d) - semi DR
[SC] pre_cc_info[CC%d.after]rf(%d),mxr(%d),rtg(%d),demod(%d),pgc(%d),dcr(%d) - semi DR
[ckdgus] During HALDRX_SetSemiDrds, other stack wakeup and edv activated.
[4G_DRDS] eDV_AvailableforEPT(%d -> %d)
[4G_DRDS] set EptCheckForARFC(%d)
[ckdgus] Tune Semi DRDS band %d, dl_earfcn %d
[4G_DRDS] ----- End _SetSemiDrds
[4G_DRDS] ----- Start _ResetSemiDrds
[SC]cc_info[CC%d.before]rf(%d),mxr(%d),rtg(%d),demod(%d),pgc(%d),dcr(%d)
[4G_DRDS] pLTE_OHE->SemiDrds_Available (%d)
[4G_DRDS] End Semi Drds
[4G_DRDS] Tune Semi band %d, dl_earfcn %d
[4G_DRDS] Semi Drds End - restore CC0 end
[4G_DRDS] ----- Start _ResetSemiDrds (CA / 4rx)
[4G_DRDS] ----- End _ResetSemiDrds (CA / 4rx) end
[SC]cc_info[CC%d.after]rf(%d),mxr(%d),rtg(%d),demod(%d),pgc(%d),dcr(%d)
[4G_DRDS] ----- End _ResetSemiDrds
[4G_DRDS] Start of %s()
End of %s() : Semi DRDS disabled if not ENDC case
[4G_DRDS] End of %s() = (0), (MCG rf band == MCG Scell rfband == SCG rf band) case
End of %s() : Semi DRDS not allowed in only NR active state
[4G_DRDS] End of %s() = (%d)
[DRX] Simulate gL1LC_DrxControl->sleepFlag = TRUE
HALDRX_CheckUpperLayerFlag(Idle DRX skip)(AlpssCfg->IdleDrx_en:%d gDrxEmm_Flag:%d gDrxEsm_Flag:%d gDrxRrc_Flag=%d gSecStateFlag:T%dR%d HALTX_SleepOkFlag:%d)
[DRX] PagingDone!!
[DRX] L1LC_DrxProcSleepReq sleepState(%d)
[DRX] DRX_PAGING_INIT
[DRX] DRX_WAIT_MEAS_PAGING -> DRX_PAGING_DONE
[DRX] Paging/meas Done, Sleep start, DRX_WAIT_MEAS_PAGING
[DRX] Paging Done Meas Done, but didn't meet sleep condition, DRX_MEAS_DONE->DRX_PAGING_INIT
[DRX] Extend gL1LC_DrdsAbnormalCheckTmr (gDrxRrcFlag case)
[DRX] Paging Done, Abnormal Case(%d) ->DRX_PAGING_INIT
[DRX] ResyncTime_SEF(MBSFN config): cinr(%d, %d), gDrxResync_cnt(%d) SavedSINR(%d)
[DRX] ResyncTime_SEF: cinr(%d, %d, %d), gDrxResync_cnt(%d) SavedSINR(%d)
(HALDRX_ResyncTime_SEF)(change to 1)((%d->%d) CINR:%d(%d))
(HALDRX_ResyncTime_SEF)(change to 2)((%d->%d) CINR:%d(%d))
(HALDRX_ResyncTime_SEF)(change to 2 due to MBSFN)((%d->%d) CINR:%d(%d))
(HALDRX_ResyncTime_SEF)(change to 2 due to CDRX)((%d->%d) CINR:%d(%d))
[DRX] (RxAdaptation): SINR(%d, %d, %d, %d), rx_mode(%x -> %x)
[DRX] (RxAdaptation): Skip Rx adaptation due to good SINR(%d)
[DRX] (RxAdaptation): CycleCnt(%d), MonPeriod(%d), Rx monitoring is triggered!
[DRX] (RxAdaptation): CycleCnt(%d), MonPeriod(%d)
[DRX] Sleep Time : ST%d (Previous %d [100us])
[DRX] Sleep Time : ST%d (Current %d [100us])
[DRX] Sleep time is small hal_sleepTime : (%d)
[DRX] ActiveStackID(%d), pLTE_OHE->SleepTime(%d), DRX_SLEEP_MARGIN+time_diff/100(%d), hw_ApActiveStateGet(%d)
[DRX] SleepAbort is already triggered
[DRX] Stop ST%d DsdsWakeupIntrTmr before starting it again!
[DRX] State(%d) Error in Abort
[DRX] 1-Set SleepAbortFlag as TRUE.
Set DSDSwakeupintr timer (1ms)!!
[DRX]2-Set SleepAbortFlag as TRUE.
[DRX] SocWarmupTimer of ST%d is running! Set DsdsWakeupintr timer in %d us later
[DRX] Current Stack %d // Current Stack gDsdsIsWakeupResume = %d // Other Stack gDsdsIsWakeupResume = %d
[DRX] SleepAbort is already tried
[DRX] SleepAbort is Failed (Modem is currently POWER ON)(%d, %d)
[DRX] 3-Set SleepAbortFlag as TRUE.
[DRX] SleepAbort is Failed (Minimun Sleep Abort Allowable Time[ST: %d, %d, %d])
[DRX] SleepAbort Failed due to not enough sleep abort allowable time (Minimun Sleep Abort Allowable Time[ST:%d, %d, %d])
[DRX] 4-Set SleepAbortFlag as TRUE.
[DRX] Stop Current ST%d DsdsWakeupIntrTmr!
[DRX] Sleep Start Time : (Previous %d us) vs (Current %d us)
[DRX] Set Other ST%d DsdsWakeupIntrTmr!
[DRX] Other stack already doing sleep abort!
[DRX] Set Current ST%d DsdsWakeupIntrTmr!
[DRX] Wakeup delayed/Soc Warmup Tmr running, do nothing!!
[DRX] corner case, 4G + non-4G SW sleep state.
[DRX] request cpu/mif clock raise in SleepAbort
[DRX] SleepAbort (Early Wakeup Time is %d.%d ms)
[DRX] SleepAbort_nosync
[DRX] DisableIntr_Suspend
[DRX] Reset CFO flag as Interrupt is disabled!
[DRX] HALDRX_DisableIntr_RFRelease
HALDRX_DisableIntr_RFRelease: Modem is not power on
[DRX] HALDRX_DisableIntr_RFRelease for SCG
HALDRX_DisableIntr_RFRelease: Modem is not power on
[DRX] HALDRX_SleepAbortOfSuspendNormal
[DRX] SleepAbort_suspend
[DRX] Disable FreqErrIntr when suspend DRX_CLKEST!
[DRX] Reset CFO flag and disable FreqErrIntr when suspend CfoEnable!
[DRX] Other ST(%d)'s remaining time is %d (100us)
[DRX] Sleep Start Time : (Previous %d us) vs (Current %d us)
[DRX] Other ST(%d)'s remaining time is %d (100us)
[DRX] Stop Other ST%d DsdsWakeupIntrTmr!
[DRX] Set Other ST%d H/W Intr : %d Slp Cnt
[DRX] Do nothing!There is no enough sleep time! Other ST [%d]'s remaining sleep time is %d!
[DRX] Do nothing!Timer is already expired! Other ST [%d] is waiting for GRANT!
[LTE DS]Start RetryTimer(ST: %d, %d ms)!!
[DRX] Stop Current ST%d DsdsWakeupIntrTmr!
[DRX] Stop Other ST%d DsdsWakeupIntrTmr!
[DRX] Add sleep Time (%d) for another ST: %d !
[DRX] Add Sleep Time is Failed (Minimun Sleep Abort Allowable Time[%d, %d])
[DRX] Set Other ST%d H/W Intr : %d [Slp Cnt]
[DRX] Do nothing!Waiting the expiry of DsdsWakeupIntrTmr (ST%d)
[DRX] Stop Current ST%d DsdsWakeupIntrTmr!
[DRX] Is_Drx_Wakeup_ongoing(%d). Update current stack's Pre CellBoundary first
[DRX] Change RTG for other STACK LTE
[DRX] Do nothing!Other STACK status is ACTIVE
[DRX] Do nothing!LTE of other STACK is turned on because of Latch!
[DRX] Sleep Abort - OTDOA Measurement Ongoing!!!
[DRX] SleepStart_A start!!! sfn(%d), tti(%d), offset(%d)
[DRX] SLP CNT Start sleepTime(%d), PowerDown(%d)
[DRX] gDrx_SavedSFN(%d) gDrx_SavedTTI(%d)
[DRX] sleep start!!! sleepTime[%d:%d], margin:%d(%d), SleepStart_A end
[DRX] gDrx_PowerDown[%d][%d]
[DRX] ST%d Modem/HAL Parameter Saving
Set gDrxLmacReady(%d)
[DRX] (Before %s sleep start) Saved AGC Index(%d, %d)
[DRX] Reset CFO flag as Interrupt is disabled!
[DRX] SetTdpState(CC0): state(%d -> %d)
[DRX] gL1LC_CheckLastPagingIntrTmr is running, but sleep procedure is started
[DRX] UeState(%d) First Sleep Start
[4G_DRDS] ST%d Modem/HAL Parameter Saving, SCG CC(%d)
Set gDrxLmacReady(%d))
[DRX] Cell ID(%d), DL BW (%d), UL BW (%d), UL CP TYPE (%d)
[DRX] Release Resource during sleep
[NRDS] NR Proc is Current Proc. No need to update or release RF.
[NRDS] NR Proc is not Current Proc. Need to update RF cause as NR Proc.
Early Pause Timer stop
[DRX] Sleep Abort - OTDOA Measurement Ongoing!!!
[SADS] RfRequestForDR is TRUE when Sleep start
[DRX] Sleep : stored dc value (%d, %d)(%d, %d)
[DRX] %s Hard SleepStart start!!! sfn(%d), tti(%d), offset(%d)
[DRX:dbg] %d,%d,%d,%d
[DRX] gDrx_PowerDown(%d)
[DRX] %s Hard SleepStart end!!! NextWakeupStack(%d), sleepTime(%d(100us), %d(slowclk)), reaminslowclk(%d), margin(%d, %d, %d) WakeupSocTime(%d)
[DRX] ResetConnDrxParam
[DRX] PowerResetForReSync
[DRX]gDrx_ActiveRat_[0][1]=%d,%d (%d)
[DRX] Illegal Modem Access on POWER OFF (stackId: %d)
[DRX] HALDRX_SetModemPowerOnFlag Stack-1[%d], Stack-2[%d]
[DRX] HALDRX_SetModemPowerOnFlagSCG Stack-1[%d], Stack-2[%d]
[DRX] HALDRX_SetModemPowerOffFlag Stack-1[%d], Stack-2[%d]
[DRX] InitPowerUpModemHW start
[DRX] Skip Modem/Dsp power on
[DRX] InitPowerUpModemHW end
[DRX] PowerOnResume
[DRX] PowerDownSuspend
EPT time diff %d ms, IsEarlyPauseFlag
Before RF powerdown, check dualsim(%d), call(%d), rf(%d), earlypause(%d), otherstack_rf(%d)
[DRX] Avoid RF power down.
[DRX] Modem is already off
[DRX] PowerOnIratMeas(%d) start
[DRX] PowerOnIratMeas: LTE power domain ON
[DRX] PowerOnIratMeas end
[DRX] LTE_InitLatchPowerUp
[DRX] PowerDownIratMeas(%d)
[DRX] Modem is already off, so do not power down
[DRX][RTG] Save Temp Diff(%d) PPM Diff(%d)
[DRX] Change HALDRX state(%d => %d)
[SHORTMODE] wakeup_time(%d, %d), gDrxShortStableTime(%d)
[SHORTMODE] GAP: sfn(%d) tti(%d) length(%d)
[SHORTMODE] GAP: sfn(%d) tti(%d) length(%d) is too short
[DRX] CC0 SLO disable on CGI, scell_config_info CC(%d) dl_earfcn(%d)
[DRX] StoreSccInfo: mode(%d), scc_cnt(%d)
[DRX] StoreSCGInfo: mode(%d)
[4G_DRDS] HALDRX_ClearSccForSemiDR
---Release Scell RF path start@_HALDRX_ClearSccForSemiDR
cc(%d):release scell --
---Release Scell RF path done@_HALDRX_ClearSccForSemiDR
[RF] Failed to get RF grant. Need to check!!!
[4G_DRDS] HALDRX_RestoreSccForSemiDR
cc(%d):restore scell --
[SC] Update ExtLna Ctrl for SLO & 4Rx: cc(%d) div_cc(%d) div_rf(%d) div_dcr(%d) div_rx_mode(%d)
[DRX] RestoreSccInfo: restore reduced mode(0x%x)
[DRX] RestoreSccInfo: mode(%d), scc_cnt(%d)
[DRX] UpdateIdleRxMode: mode(%d), 1RxOffFlag(%d, %d)
[DRX] UpdateIdleRxMode: RxAdaptMode(%x)
[DRX] DrxConfirmInd: current_sfn_tti(%d), sleep_time_tti(%d), cell_group(%d)
[DRX] DrxConfirmInd_SCG: current_sfn_tti(%d), sleep_time_tti(%d), cell_group(%d)
[DRX] Sleep Calculation Considering Next PRS Occassion :: CurSfnTti(%d), PrsOcc(%d), PrsSfnOffset(%d)
[DRX] Do not sleep, RSTD measurement needs to happen, sleep_time_tti(%d), prsSfnOffset(%d)
[DRX] Sleep Time Modified to Wakeup early to measure RSTD. Updated Sleep time(%d)
[4G_DRDS] DrxConfirmInd: 4G_DRDS ongoing, Set CdrxRecoveryFlag(%d) pLTE_OHE->eDV_Active(%d) pLTE_OHE->eDV_AvailableforEPT(%d)
[DRX][PWR_OPT] (SCG) DrxConfirmInd
[DRX] abnormal case: sleep_time_tti(%d)
[DRX] DrxConfirmInd: wrong DRX state(%d) gDrxRachStateFlag(%d) gHalDrx_State(%d)
[DRX][PWR_OPT] DrxConfirmInd: No P-RNTI, trigger sleep!!!
[EDV] DrxConfirmInd: EDV ongoing
[DRX][PWR_OPT] Last paging is not invoked yet!!!
[DRX] Saved AGC Index(%d, %d)
[DRX] Wakeup is still ongoing, don't process PagingRcv yet!!!
[DRX] DrxConfirmInd: gL1LC_DRXinSibFlag(%d)
[DRX] Saved AGC Index(%d, %d)
[DRX][PWR_OPT] DrxConfirmInd: UE state(%d) wrong sleep time(%d)
[DRX] Hand-over cell change is in progress, do not CDRX
[DRX] Is_Drx_Wakeup_ongoing = %d, gL1LC_CheckLastPagingIntrTmr = %d
[DRX] DrxConfirmInd: wrong UE state(%d)
[DRX] gDrx_GnssWakeupTime(%d) curtime(%d) remaintime(%d)
[DRX] gsleepTime_inSlowClk(%d) current_sleep_cnt(%d) remaintime(%d)
[DRX] CheckDRXinSIB (%d)
4Rx mode case!
Not support HALDRX_ProcDrxRfRxPathOnOffCtrl
Abnormal case!! Modem Power [%d], RF Available[%d]
[DRX][PWR_OPT] HALDRX_ProcDrxRfRxPathOnOffCtrl(on/off:%d, backup:%d, sfn(%d), tti(%d), offset(%d))
[DRX][PWR_OPT] HALDRX_ProcDrxRfRxPathOff: backup#%d dm_update(%d)
[DRX][PWR_OPT] Skip HALDRX_ProcDrxRfRxPathOnOffCtrl: Force wakeup(%d) / RACH(%d) case
[DRX][PWR_OPT] Skip HALDRX_ProcDrxRfRxPathOnOffCtrl: SIB DRX(%d)
[DRX][PWR_OPT] HALDRX_ProcDrxRfRxPathOnOffCtrl: Store CC0 system parameter
[DRX][PWR_OPT] HALDRX_ProcDrxRfRxPathOnOffCtrl: CC#%d saved AGC(%d, %d)
[DRX][PWR_OPT] HALDRX_ProcDrxRfRxPathOn: backup#%d dm_update(%d)
[4G_DRDS] UE_STATE [cur(%d)other(%d)], OHE_STATE [cur(%d)other(%d)]
[NRDS] NR is alive. state can be CDRX_IDLE
[4G_DRDS] 4G_DRDS state Check done: Possible state: %d
[4G_DRDS] UE_STATE [cur(%d)other(%d)], OHE_STATE [cur(%d)other(%d)]
[4G_DRDS] HALDRX_PerformEdvStateCheckBeforeSleep : SleepTime [cur(%d)other(%d)conflict(%d)], DRX_SLEEP_MARGIN[cur:(%d),other:(%d)]
[4G_DRDS] 4G_DRDS state Check done(before sleep) : Possible state: %d
[4G_DRDS] Semi_DRDS available
[4G_DRDS] 4G_DRDS band check status(%d)
[4G_DRDS] TargetStack(ST%d)::INACTIVE[%d][%d]! 4G_DRDS is impossible
[4G_DRDS] Num of RF Band List is already over 5. cannot activate DRDS.(num_rf_band = %d)
[4G_DRDS] DR_BE_REMOVED state! 4G_DRDS is impossible
[4G_DRDS] ConflictwithMIMO! 4G_DRDS is impossible
[4G_DRDS] DRDS_ENABLE Registry is FALSE
[4G_DRDS] Stack is inactive, UE states of Current stack (%d), Other Stack (%d)
[4G_DRDS] On Other stack MBMS is on-going, MBMS stack cannot be SCG
[4G_DRDS] Target Stack waits GRANT. if IsWaitResponse TRUE, SCG cannot proceed meas. Return here.
[4G_DRDS] NR/LTE FD Buff Not Enough(NotEnoughBWtoDR). Cannot do DRDS.
[4G_DRDS] HALDRX_CheckEdvStackOrder: source[%d], target[%d] (NumCA: %d, %d), (%d, %d)
[4G_DRDS] HALDRX_CheckEdvStackOrder: LTE used over or equal 6 CC, try to release InterFreq Scells first
[4G_DRDS] HALDRX_CheckEdvStackOrder: num of scell (%d) -> (%d)
[DRDS] num of scell(%d), NrBandNum(%d), dr_added_check(%d), ca_check_range(%d), ret_val(%d)
[4G_DRDS] HALDRX_CheckEdvStackOrder: Source_Band[0]: rat(%d), band(%d), earfcn(%d)
[4G_DRDS] HALDRX_CheckEdvStackOrder: Source_Band[%d]: rat(%d), band(%d), earfcn(%d), is_4rx_path(%d)
[4G_DRDS] HALDRX_CheckEdvStackOrder: CC%d is for SLO. don't add source list
[4G_DRDS] HALDRX_CheckEdvStackOrder: Source_Band[%d]: rat(%d), band(%d), earfcn(%d), is_4rx_path(%d)
[4G_DRDS] HALDRX_CheckEdvStackOrder: Source_Band[%d]: rat(%d), band(%d), earfcn(%d), is_4rx_path(%d)
[NRDS] debuging : gL1lc_DsdsDB.IsEndc = %d
[NRDS] HALDRX_CheckEdvStackOrder: CC[%d] Source_Band[%d]: rat(%d), band(%d), is_4rx_path(%d)
[4G_DRDS] (ST%d)Target_Band: band(%d), earfcn(%d), Num_CaConfig(%d), MCG_NumCA_Source(%d), MCG_NumCA_Target(%d)
[Bandlist] Is4RxReleaseNeededForDr : (%d) -> (%d)
[NRDS] DRDS RF return value is 4
[NRDS] Due to NR 4Rx, DRDS unavailable state. set IsNr4RxBlockDrds TRUE
[NRDS] NR changed 4Rx -> 2Rx. eDRDS available state
[NRDS] DRDS is not blocked by Nr4Rx. reset IsNr4RxBlockDrds TRUE
[4G_DRDS] HALDRX_CheckEdvStackOrder : status (%d), special_case(%d), special case MCG_CC(%d)
[4G_DRDS] HALDRX_CheckEdvStackOrder : %d. However, don't eDRDS because SCG is in weak signal area
[EDRDS] Can't eDRDS due to eDV_Enable = %d
[EDRDS] Can't eDRDS due to ARFC (ARFC: %d)
[EDRDS] Can't eDRDS due to MIMO!!(CC%d)
[4G_DRDS] HALDRX_CheckEdvStackOrder: DRDS -> eDRDS case
[4G_DRDS] Sub_DR = TRUE
[4G_DRDS] Sub_DR = TRUE
[EDRDS] can't special case due to AGC diff. eDV_Enable = %d
[DRDS] num of scell = %d, NrBandNum = %d, dr_added_check = %d, total = %d, cannot do DRDS
[4G_DRDS] End of %s()
[4G_DRDS] pLTE_OHE->SemiDrds_Available (%d)
[4G_DRDS] 4G_DRDS is feasible for state(%d)
[4G_DRDS] 4G_DRDS is not feasible
[4G_DRDS] RemainPreponePagingTime [%u] MBMSEndTime [%u]
[LTE L1LC DSL1RC] Cell change done for BPLMN return. SINR : %d
[LTE L1LC DSL1RC] 4G_DRDS will be trigger after PBCH decoding! PBCH Mode[%u] IsBplmnReturn[%u]
[4G_DRDS] HALDRX_InitEDV
[4G_DRDS] SCG_CC resereved status updated to FALSE
[4G_DRDS] %s(eDV=%d,Semi=%d /(%d,%d,%d))
[4G_DRDS] Start pending procedure on other stack is case of suspend !!!
[LTE L1LC DSL1RC] Saved RRM Message, process that first
[4G_DRDS] On Other stack MBMS is on-going, MBMS stack cannot be SCG
[4G_DRDS] On Current stack MBMS is on-going, MBMS stack cannot be SCG
[4G_DRDS] Do not activate 4G_DRDS as Signaling is going to start on other stack gRspNeeded(0x%x)
[4G_DRDS] Do not activate 4G_DRDS as eDV_state[%d] and gDrxRrc_Flag [%d, %d]
[4G_DRDS] Do not activate 4G_DRDS as eDV_state[%d] and current or Other stack is in sleep state(%d, %d) or in measurement(curmode:(%d, %d) iratcurmode:(%d, %d) state
[4G_DRDS] 4G_DRDS is not activated while sleep abort case (ST%d: %d, ST%d: %d), HALDRX_GetState(%d), HALDRX_GetOtherStackState(%d)
[4G_DRDS] 4G_DRDS is not activated. IsForBplmn(%d), IsForResume(%d)
[4G_DRDS] 4G_DRDS is not activated. OtherStack(%d) sets PauseFlag(%d)
[4G_DRDS] 4G_DRDS is not activated. IsDuringScellConfig
[4G_DRDS] 4G_DRDS is not activated. OtherStackID is in L2X BPLMN state
[4G_DRDS] 4G_DRDS is not activated. RACH is ongoing [%d][%d] Other Stack[%d] Curr Stack[%d]
[4G_DRDS] 4G_DRDS is not activated. VoLTE is ongoing [current: %d][other: %d]
[4G_DRDS] 4G_DRDS is not activated. Current stack is in paused state
[4G_DRDS] 4G_DRDS is not activated. IsHoSync [%d][%d]
[4G_DRDS] Do not activate 4G_DRDS as PBCH Decode on-going on conn stack. PBCH Mode(%d)
[4G_DRDS] 4G_DRDS is not activated. SCG stack HoldRrmMsgFlag[%d] or gL1LC_ReInitDrxTriggered is set [%d][%d]
[4G_DRDS] Do not activate 4G_DRDS as PBCH Decode on-going on conn stack. PBCH Mode(%d)
[4G_DRDS] RF release is ongoing. Don't activate DRDS [d][%d]
[Debug] Is_Drx_Wakeup_ongoing = %d
[EnableDsdsMask] -> 0x%x (0x%x)
[4G_DRDS] eDV_AvailableforEPT(%d -> %d)
[Debug] Is_Drx_Wakeup_ongoing = %d
[EnableDsdsMask] -> 0x%x (0x%x)
HALDRX_ProcEdvStateNone
[4G_DRDS] other stack's sleep time(%d)
[EDRDS] edrds_prev_rxmode[CC%d] = (%d)
[4G_DRDS] ACTIVATED (IDLE-IDLE [AIT stack:%d]) :: Mcg/Scg(St%d/St%d), pLTE_OHE->SCG_CC(%d), [4G_DR_STAT] ActiveCnt(%d), TrialCnt(%d) ===
Do not enable 4G_DRDS(Active-Idle-Idle) as BPLMN on-going(%d, %d)
[4G_DRDS] ACTIVATED (ACTIVE IDLE-IDLE [AIT stack:%d]) :: Mcg/Scg(St%d/St%d), pLTE_OHE->SCG_CC(%d), [4G_DR_STAT] ActiveCnt(%d), TrialCnt(%d) ===
[4G_DRDS] Can not enable 4G_DRDS(Conn -Idle) as RFband was not added in RFbandlist
[4G_DRDS] Can not enable 4G_DRDS because NoOfScell = (%d) ConnDR State (%d)
[4G_DRDS] Can not enable 4G_DRDS because CC = (%d)
[EDRDS] edrds_prev_rxmode[CC%d] = (%d)
[EDRDS] edrds_prev_rxmode[CC%d] = (%d)
[4G_DRDS] EPT was checked before, Set AIT to SCG : EptCheckForARFC(%d)
[4G_DRDS] ARFC(or Signalling) case, Set AIT to MCG : EptCheckForARFC(%d)
[4G_DRDS] ACTIVATED (CONN-IDLE [AIT stack:%d]) :: Mcg/Scg(St%d/St%d), pLTE_OHE->SCG_CC(%d), [4G_DR_STAT] ActiveCnt(%d), TrialCnt(%d) ===
[4G_DRDS] Can not enable 4G_DRDS because NoOfScell = (%d) ConnDR State (%d)
[4G_DRDS] Can not enable 4G_DRDS because CC = (%d)
[EDRDS] edrds_prev_rxmode[CC%d] = (%d)
[EDRDS] edrds_prev_rxmode[CC%d] = (%d)
[4G_DRDS] ACTIVATED (CDRX-IDLE [AIT stack:%d]) :: Mcg/Scg(St%d/St%d), pLTE_OHE->SCG_CC(%d), [4G_DR_STAT] ActiveCnt(%d), TrialCnt(%d) ===
[4G_DRDS] %s
[4G_DRDS] Register state [Other: %d][Curr: %d]
[4G_DRDS] Other stack is inactive, UE state of other stack (%d)
[4G_DRDS] Stack is in suspend state
[4G_DRDS] Waiting Resume_Ind from SRL1RC [%d][%d]
[4G_DRDS] Waiting RF GRANT CNF [%d][%d]
[4G_DRDS] eDV_Available (%d)
[4G_DRDS] DRDS unavailable : reset EptCheckForARFC(%d)
[4G_DR_STAT] Add only LteDrdsTrialCnt(%d), conflict(%d), eDV_state(%d)
[4G_DR_STAT] reset conflict(%d)
[4G_DR_STAT] Not Add LteDrdsTrialCnt(%d), conflict(%d), eDV_state(%d)
[4G_DR_STAT] Add only LteDrdsTrialCnt(%d), eDV_state(%d)
[4G_DR_STAT] Not Add LteDrdsTrialCnt(%d), eDV_state(%d)
[4G_DRDS] OHE Status : CurrentStack (%d) OtherStack (%d)
[4G_DRDS] UE State : CurrentStack (%d) OtherStack (%d)
[4G_DRDS] 4G_DRDS is already activated (%d)
HALDRX_ProcEdvDeactive
ST%d Is_Drx_Wakeup_ongoing = TRUE. So, last paging is first
[4G_DRDS] Modem is in power-on state
[4G_DRDS] Modem is in power-down state. Clear Scell config
Remove Scell: cid(%d), dl_earfcn(%d)
[4G_DRDS] HALDRX_ClearEDVForMCG, EDV special case (%d) reset (%d),eDV_Active(%d)
[4G_DRDS] restore Dynamic QS
[4G_DRDS] DEACTIVATED From DR_State(%d) /HALDRX_ClearEDVForMCG ===
Stop DrdsAbnormalCheckTmr
[4G_DRDS] RF_Update_DR_Band_info(clear)
[NRDS] request NR to change : 2rx -> 4rx
[DRX] gL1LC_CheckLastPagingIntrTmr started for %d ms
[4G_DRDS] Already ConnDR_state: DR_ADDED
[OHE]ST-%d(%d) => OHE_StackStatus[0][1] (%d, %d)
[4G_DRDS] Proc HALDRX_CheckCdrxIdleEdvAvailable eDV_AvailableforEPT(%d)
[4G_DRDS](conflict) Current ST%d SleepTime(CONN) = %d . Other ST%d(IDLE) SleepTime = %d, current-other = %d, SLEEP_MARGIN+80 = %d
[4G_DRDS] 4G_DRDS (Cdrx - Idle) is not available. Go for 4G_DRDS (Conn - Idle)
[NRDS] NR alive and other stack will wakeup soon. Go for 4G_DRDS (Conn - Idle)
[4G_DRDS] (No conflict) Current ST%d SleepTime(CONN) = %d . Other ST%d(IDLE) SleepTime = %d, current-other = %d, SLEEP_MARGIN+80 = %d
[NRDS] NR alive and other stack will wakeup soon. Go for 4G_DRDS (Conn - Idle)
[NRDS] NR alive and other stack will wakeup soon. Go for 4G_DRDS (Conn - Idle)
[NRDS] NR alive and other stack will wakeup soon. Go for 4G_DRDS (Conn - Idle)
[4G_DRDS] Proc HALDRX_CheckConnEdvAvailable
[NRDS] set NRDS conflict case - CDRX/IDLE
[4G_DRDS] Available2(CASE1) Current IDLE ST%d SleepTime = %d . Other CONN ST%d() SleepTime = %d, other-current = %d, SLEEP_MARGIN+80 = %d
[4G_DRDS] Current ST%d SleepTime(IDLE) is Shorter but make Other ST%d(CONN) SleepTime shorter
[DRX] Stop Other ST%d DsdsWakeupIntrTmr and enable H/W wakeupintr for other ST%d
[4G_DRDS] Set Other ST%d H/W Intr : %d [Slp Cnt], %d [100us]
[4G_DRDS] Set Current ST%d DsdsWakeupIntrTmr : %d [100us]
[4G_DR_STAT] set conflict(%d) - CDRX/IDLE
[4G_DRDS] Available2(CASE2) Current CONN ST%d SleepTime = %d . Other IDLE ST%d SleepTime = %d, current-other = %d, SLEEP_MARGIN+80 = %d
[4G_DRDS] Set Other ST%d H/W Intr : %d [Slp Cnt], %d [100us]
[NRDS] set NRDS debug - (%d),(%d),(%d),(%d)
[NRDS] set NRDS conflict case - CDRX/IDLE
[4G_DRDS] Available2(CASE3) Current CONN ST%d SleepTime = %d . Other IDLE ST%d SleepTime = %d, current-other = %d, SLEEP_MARGIN+80 = %d
[4G_DRDS] Other ST%d SleepTime(IDLE) is Shorter but make Current ST%d(CONN) SleepTime shorter
[4G_DRDS] Set Current ST%d H/W Intr : %d [Slp Cnt], %d [100us]
[4G_DRDS] Set Other ST%d DsdsWakeupIntrTmr : %d [100us]
[4G_DR_STAT] set conflict(%d) - CDRX/IDLE
[4G_DRDS] Available2(CASE4) Current IDLE ST%d SleepTime = %d . Other CONN ST%d SleepTime = %d, other-current = %d, SLEEP_MARGIN+80 = %d
[DRX] Stop Other ST%d DsdsWakeupIntrTmr and enable H/W wakeupintr for other ST%d
[4G_DRDS] Set Other ST%d H/W Intr : %d [Slp Cnt], %d [100us]
[4G_DRDS] Set Current ST%d DsdsWakeupIntrTmr : %d [100us]
RTG(ST:%d) is saved: SFN(%d), TTI(%d) RTGoffset(%d), ReleasePalTime(%d)
[4G_DRDS] Clear Lte_OHE dm values
[4G_DRDS]%s(eDV_Active:%d)
[4G_DRDS] During Lisr, activate DrdsTmrIntrHCB
Start DrdsAbnormalCheckTmr (%d ms)
[DRX] During Lisr, deactivate ModemOffTmrHCB
[DRX] Stop ModemOffAbnormalTmr (ST:%d)
[DRX] During Lisr, activate ModemOffTmrHCB
Start ModemOffAbnormalTmr (ST:%d, %d ms)
BPLMN or resetection on-going. gDrx_BplmnStarted: %d, IsCellResel: %d
Reinit DRX on-going. gL1LC_PbchMode: %d, gL1LC_ReInitDrxTriggered: %d
BPLMN Return on-going. gL1lc DsdsDB.IsBplmnReturn: %d, gL1LC_PbchMode: %d
HALDRX_GetWakeupInitType - CurrntSt: NrDsState(%d) / OtherSt(%d): IsDrxSleep(%d) IsEndc(%d) NrDsState(%d) / NR: NrSetupInfo(%d) NsleepState(%d)
[SADS]HALDRX_GetWakeupInitType - SrIf_Api_Srl1rc_DBIsSADRAvailable(%d)
HALDRX_GetWakeupInitType - CurrentStackSleepTime(%d) OtherStackSleepTime(%d)
HALDRX_GetWakeupInitType - Result = %d
[SaveDrxTimeStamp] funcName = %s timeStamp = %d us
[DRX] uncName = %s, ST[%d] Hold Type(%d), hold_count(%d), hold_time(%d)
[DRX] ST-%d gCpuPwrDownHoldInd(true -> %d)
[DRX] funcName = %s : pal_PowerDownHoldingCntReset
HALDRX_ProcPagingIntr
[DRX] ProcSfnUpdateIntr
[DRX] Cancel Rvalue update!rtg counter did not start yet
[DRX] rtg_counter_start(%d) rtg_counter_end(%d) time_offset_str(%d)
[DRX] AA gDrx_CfoValue(%u), gDrx_FreqIntVal(%u), gDrxErrAccPeriod(%u), gSceTotalModemClk(%u), gDrx_Rvalue(%u)
(Abnormal R value) gSceTotalModemClk = %d, gDrx_CfoValue = %d
[DRX] BB gSceTotalModemClk(%u), gDrx_CfoValue(%u), gDrx_StrOffsetVal(%d), rvalue_filter_gain(%d), pHALDRX_Db->gDrx_rvalue_filter_gain_cnt(%d)
[DRX] CC gDrx_StrOffsetVal(%d), time_offset_str(%d), CFO_STR_OFFSET_LOOP_GAIN(%d)
[DRX] gSceTotalModemClk(%u), time_offset_str(%d), prev_sleepTimeInSlowClk(%d)
DRX wakeup completed. So, CPU clock MIN lock released
[DRX] ProcDrxPagingRcvHisr: gHalDrx_SleepState(%d), gHalDrx_NonPaging(%d)
[Debug] Is_Drx_Wakeup_ongoing = %d
[Debug] Is_Drx_Wakeup_ongoing = %d
[DRX] Sleep Abort - OTDOA Measurement Ongoing!!!
[DRX] gL1LC_DrxControl->state = DRX_CLKEST
[DRX] gHalDrx_ConnDrxBlock is true
[DRX] ProcDrxConnSleepStartHisr: gHalDrx_ConnDrxState(%d)
[DRX] Don't Sleep before MEAS DONE, gHalDrx_ConnDrxState = DRX_CONN_DSP_DONE
[DRX, 4GDS] Don't Set measconfig as HALSC_MEAS_CONFIG_CONN_DRX now(IsDuringGsmMeas:%d)
[DRX, 4GDS] Don't Set measconfig as HALSC_MEAS_CONFIG_CONN_DRX now(L2N gap measurement is ongoing)
[DRX, 4GDS, NRDS] Don't Set measconfig as HALSC_MEAS_CONFIG_CONN_DRX now(IsEndc:%d)
[DRX, 4GDS] Set measconfig as HALSC_MEAS_CONFIG_CONN_DRX
[DRX] Abnormal Case(%d) : gHalDrx_ConnDrxState = DRX_CONN_INIT
[DRX] DSP done : gHalDrx_SleepState(%d)
[DRX] ProcD_ModemWakeupHisr is invoked(gDrx_PowerDown[%d][%d]
[DRX] Initialize pLTE_OHE->SleepType to H_SLEEP
[DRX] HW is not off actually
[DRX] Set pLTE_OHE->SleepType to S_SLEEP
[DRX] InitSystemTime at SW wakeup. NrFullResetInfo(1)
[DRX] Check-Point-3 (Rat(%d)/ TimingLatch[CurrStack: %d][OtherStack: %d]
[DRX] ProcD_DSPWakeupHisr: Modem Stable Time(%d)
[DRX] StartSlowClkEstForCFO: ERR_ACC_PERIOD(%d)
[DRX] ProcD_RF1WakeupHisr: Wakeupinit Stable Time(%d)
[DRX] ProcD_RF2WakeupHisr
[DRX] ProcD_RF3WakeupHisr
[DRX] ProcD_RF4WakeupHisr
[DRX] ProcD_RF5WakeupHisr
[DRX] RF InitFromSleepIdle end
[DRX] ProcD_InitWakeupHisr: DSP Stable Time(%d)
[DRX][PWR_OPT] RF adaptive ON/OFF enable
Set gDrxLmacReady(%d)
[DRX] before DrxSysValid, Saved AGC Index(%d, %d)
[DRX] RTG update start: sfn(%d), tti(%d), offset(%d)
[DRX] gSceTotalModemClk(%d): sleepCnt(%d), modemCnt(%d), sleepTime(%d, %d, %d), RC(0x%x)
[DRX] slp_ref_cnt(0x%x), xfr_ref_cnt(0x%x)
[DRX] Do not update RTG, because HW is not sleep actually!
[DRX] RTG update end: sfn(%d), tti(%d), offset(%d)
[DRX] NrFullReset RTG recovery case.(stack changed)
[DRX] Cellboundary: %d, Otherstack: %d, Diff: %d
[DRX] NrFullReset RTG recovery case.(same stack)
[DRX] ProcD_SysValidHisr: RF stable Time(%d)
[DRX] ProcD_SysValidHisr: RF stable Time(%d)
[DRX] RTG is recovered!
[Debug] Is_Drx_Wakeup_ongoing = %d
[DRX] Diff cellboundary is zero!
[DRX] Otherstack's CellBoundary: %d, Diff: %d
[OHE]ST-%d(%d) => OHE_StackStatus[0][1] (%d, %d)
[DRX][PWR_OPT] RF CC0 Rx path ON
[DRX] [Before AGC start] Turned on Rx diversity paths according to the current Rx mode(%x)
[DRX] [Before AGC start] Turned on Rx diversity paths according to the current Rx mode(%x)
[DRX] AGC gain recovery(%d, %d)
[DRX] (Adaptation): Changed to 4Rx for monitoring
[DRX] AGC start
[DRX] Resync Interrupt set
[DRX] EnableReSyncIntr: tti(%d), offset(%d), current_time(%d, %d, %d)
Set gDrxLmacReady(%d), dspWakeup(DSP_STATE_WAKEUP)
[DRX][PWR_OPT] Tigger intra-freq measure
[DRX] ProcD_SysValidHisr: Sys Valid Time(%d)
[DRX] current_pf(%d),current_po(%d),diff_pf(%d),diff_po(%d)
[DRX] UpdateBigDataPMLI
HALDRX_ProcDS_IntrHisr gHALSC_dsdsIntrState(%d)
Unknown DSDS mode(%d)
HALDRX_ProcDS_SCGIntrHisr gHALSC_dsdsIntrState(%d)
HALDRX_ProcDS_DrdsTmrHisr, invoke set DrdsAbnormalTmr
Set CheckWakeupAvailable timer (1ms)!!
Set CheckWakeupAvailable timer (1ms)!!
[DRX] ProcD_SfnUpdateHisr
[DRX] ProcD_SfnUpdateHisr: gDrx_WakeupStartTime(%d), gDrx_WakeupEndTime(%d)
[DRX] ProcD_SfnUpdateHisr: gDrx_WakeupStartTime(%d), gDrx_WakeupEndTime(%d)
[DRX] ProcD_SfnUpdateHisr: Current HW time SFN(%d), TTI(%d), offset(%d)
[DRX] ProcD_SfnUpdateHisr: SFN_LOAD_VALUE(%d)
[DRX] ProcD_NoPRntiHisr: gHalDrx_SleepState(%d), gHalDrx_NonPaging(%d)
HALDRX_ProcDS_ModemOffTmrHisr, invoke set ModemOffAbnormalTmr
[DRX] InitFromSleepIdle start
[DRX] Skip RF init during 2G call suspend
[DRX] InitFromSleepIdle end
[DRX] ActiveStackID(%d), hal_sleepTime(%d), gDrx_PowerDown(%d) gDrx_GnssWakeupTime(%d)
[DRX] RF_DSP_PowerDown start
[DRX] RF_DSP_PowerDown end
[DRX] RF_PowerDown start,NASU_MODE_SELECT(%d)
[DRX] RF ClearHpcmOwnMask in BplmnSrchStartLteActive(%d)
[DRX] RF_PowerDown end
[DRX] Set Sleep
[DRX] Sleep Start Time : (Previous %d.%d) vs (Current %d.%d) [100us]
[DRX] ST%d DsdsWakeupIntr Timer is Running
[DRX] SleepTime : Current %d vs Other %d [100us]
[4G_DR_STAT] set conflict(%d) - IDLE/IDLE
[DRX] Current ST%d SleepTime preponed by %d [100us]
[DRX] Other ST%d SleepTime preponed to %d [100us], MCG-SCG swap
[4G_DR_STAT] set conflict(%d) - IDLE/IDLE
[DRX] Other ST%d SleepTime preponed by %d [100us]
[DRX] Current ST%d SleepTime preponed to %d [100us], MCG-SCG swap
[DRX] 4G_DRDS feasibility for IDLE-IDLE after wakeup(%d)
[DRX] Current ST%d SleepTime is Shorter
[DRX] Set Current ST%d H/W Intr : %d [Slp Cnt]
[DRX] Other ST%d SleepTime is Shorter
[DRX] Stop Other ST%d DsdsWakeupIntrTmr
[DRX] Set Other ST%d H/W Intr : %d [Slp Cnt]
[DRX] Set Current ST%d DsdsWakeupIntrTmr : %d, pLTE_OHE->SleepTime: %d, gDrx_WakeupSocTime: %d [100us]
[DRX] Current ST%d Going to Sleep and Other ST%d wake timer expired
[DRX] Set Current ST%d DsdsWakeupIntrTmr : %d, pLTE_OHE->SleepTime: %d, gDrx_WakeupSocTime: %d [100us]
[DRX] Set Current ST%d H/W Intr : %d [Slp Cnt]
[DRX][Single SIM] Set Current ST%d H/W Intr : %d [100us]
[DRX] gDrx_SavedSFN(%d), gDrx_SavedTTI(%d), gDrx_SavedOffset(%d)
