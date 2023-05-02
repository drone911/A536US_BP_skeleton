[L1LC_EnableDsdsMask] -> 0x%x (0x%x)
[L1LC_DisableDsdsMask] -> 0x%x (0x%x)
[L1LC_SetNrPathConfigPending] %d -> %d
[L1LC_IsAnyDsdsMaskSet] DSDS Mask(0x%x)
[LTE DSDS] Undefined option for display RFBO
[LTE DSDS] Already IsDrxSleep = TRUE.
[LTE DSDS] Already IsDrxSleep = FALSE.
[LTE DSDS] gL1lc_DsdsDB.IsDrxSleep = [%d][%d]
[LTE DSDS] Already PauseFlag = TRUE.
[LTE_DSDS]RF Pause Flag set
[LTE DSDS] Start LongPauseCheckTmr.(60 sec)
[LTE DSDS] Already PauseFlag = FALSE.
[LTE_DSDS]RF Pause Flag reset
[LTE DSDS] Stop LongPauseCheckTmr.
[LTE DSDS] gL1lc_DsdsDB.PauseFlag = [%d][%d]
[LTE DSDS] Already PauseIndFlag = TRUE.
[LTE DSDS] Already PauseIndFlag = FALSE.
[LTE DSDS] gL1lc DsdsDB.PauseIndFlag = [%d][%d]
[LTE DSDS] Undefined option for display RFBO
[SADS] Tx Req during SleepAbort, L1tx(%d), L2tx(%d)
[SADS] Tx Req before ReconfigL1C (in conn state)
[4G_DRDS] Set gEarlyPauseFlag as FALSE
[LTE L1LC DSL1RC] HALSC_GetUeState(%d)@%s IsRfAvailable[%s]
RESET gL1lc_DsdsDB.HalParamSaved = %d
[NRDS] reset NrOnlyGranted(%d).
[LTE L1LC DSL1RC] IsReConfigL1C(%d)
[LTE L1LC DSL1RC] PagingRequestTimer Stopped!
[LTE L1LC DSL1RC] Retrigger MIB_READ!
[LTE L1LC DSL1RC] MIB_READ will be triggered after processing PbchDecodeReq in RRM Saved Msg!
[LTE L1LC DSL1RC] Retrigger SI_READ!
[SADS] Reset SaDrBreakInLteTddIdle
[LTE L1LC DSL1RC] L1LC_StartResumeProcedure: Pre Meas Processing - Meas Config(%d)!!!
[LTE L1LC DSL1RC] L1LC_StartResumeProcedure: Post Processing -PendingFromSetDlFreq!!!
[LTE L1LC DSL1RC] L1LC_StartResumeProcedure: Post Processing -PendingFromSearchReq!!!
[SADS] L1LC_StartResumeProcedure >> There is L2 msg pending
[L1LC] Reset` Update4RxPended
[SADS] Wait Measure GRANT because NR Measure pause ongoing
[SADS] Set SaMeasureTimer 20ms
[SADS] Wrong response (%d)
[SADS] L1LC_ProcSrIfMeasureRsp (%d)
Can't Start Measure due to RF is unavailable
Can't Start Measure due to other meas is ongoing (curMode: %, curIratMode: %d)
[SADS] SADR_MEAS_PAUSE or MEAS_PAUSE_DONE >> Do not release the Measure
[SADS] SADRMeasState (%d => %d)
[LTE L1LC DSL1RC] Waiting For Resume (%d), Ignore Response (%d) Early Pause Timer stopped!!!
[SADS] isNextPagingConflict(%d)
[LTE L1LC DSL1RC] Response type is wrong!!!
[LTE L1LC DSL1RC] IsWaitResponse (%d), No retry on RSM side for PAGING REJECT.
[SADS] Rf Request for DR REJECTED
[LTE L1LC DSL1RC] retryCntForPSConflict (%d)!!!
[LTE L1LC DSL1RC] retryCntForPS (%d)!!!
[LTE L1LC DSL1RC] Next time, L1LC will request RF with updated RF reason!!!
[LTE L1LC DSL1RC] Continous reject for Reinit DRX. Next time, L1LC will request RF with updated RF reason!!!
[LTE L1LC DSL1RC] OtherStackOHEStatus(%u) OtherStackRFReason(%u) Int_Stack(%d)
[LTE L1LC DSL1RC] SA is using interPDN, Dose not enable retry timer
[LTE L1LC] NextPagingReqTime(%d)
[LTE L1LC DSL1RC] Retry Timer not started as RF will be requested for Paging/wakeup in %d us !
[LTE L1LC DSL1RC] CurrentTime(%u) PagingPALTime(%u) RemainTimeToPaging(%u)
[LTE L1LC DSL1RC] Paging request timer should start for next paging occasion
[LTE L1LC DSL1RC] Paging request timer should start for current paging occasion
[LTE L1LC DSL1RC] Paging occasion skipped! RemainTimeToNextPaging(%u) UpdateTime(%u)
[LTE L1LC DSL1RC] Set Paging Request Timer (setting: %d us)
[LTE L1LC DSL1RC] PreponePagingRFReqTime(%d) is updated!
[LTE L1LC DSL1RC] Wakelock, CPU/MIF clk reset for DRX wakeup due to PO skip
[LTE L1LC DSL1RC] Remaining time for next Paging Req Timer expiry is %d us
[DEBUG] gL1LC_DrxControl->state = [%d, %d], gDrxL1_Flag = [%d, %d]
[LTE L1LC DSL1RC] ILM pause received when Wakeup is on hold due to nearby early pause timer expiry!!!
[LTE L1LC DSL1RC] CauseUpdate is Pended!
[LTE L1LC DSL1RC] Pause request received when RF (%s) and DRX Sleep (%s)!!!
[LTE L1LC DSL1RC] Ignore PAUSE_REQ as IsWaitResponse = TRUE!!!
[LTE L1LC DSL1RC] Ignore Pause Req as MBMS is ongoing and RF is already released!!!
[SADS] Tx Rsp Waiting >> delay Pause
[LTE L1LC DSL1RC] Pause Request recieved when L1 is already in waiting state for Resume!!!
[4G_DRDS] Pause request received for SCG stack during edv active, ignore it
[LTE L1LC DSL1RC] Pause Request recieved when L1 is doing wakeup procedure!!!
[LTE L1LC DSL1RC] MBMS is ongoing, delay pause done by time = %d ms
[4G_DRDS] Pause request received for SCG stack during edv active, ignore it
[4G_DRDS] During 4G_DRDS, Pause procedure should be done
[SADS] Tx Rsp Waiting >> delay Pause
[4G_DRDS] Perform RF Pause as RF is available only for NR
[LTE L1LC DSL1RC] Mandatory SIBs are decoded, execute Pause
[LTE L1LC DSL1RC] PAUSE :: Time[%dms] Pause Flag [%s] RF[%s] Current Proc[%s], UE state(%d), DsdsMask(0x%x))
[LTE L1LC DSL1RC] In CONN mode, RF not available... DSDS Timer started for 10s!!!
[LTE L1LC DSL1RC] Resume Recieved while in DRX Sleep!!! Issue Rsrc Release to DSL1C
gL1LC_DsdsReleaseAndReqTmr Timer stop
gL1LC_DsdsTmr Timer stop
[NRDS] IsDrxSleep is TRUE. HalWakeupStartInd is TRUE. Do StartResumeProcedure
[NRDS] skip StartResumeProcedure because RF RESUME for only NR, just set IsRfAvailable(%d), IsRfAvailForNr(%d).
[NRDS] (SW sleep case) After DS operation, Dmover release / init is required.
[4G_DRDS] Do not update RF cause, eDV_Active(%d)
[LTE L1LC DSL1RC] Do not update RF cause as Paging Rcv Timer is running
[LTE L1LC DSL1RC] Do not request RF with lower priority than PAGING due to nearby e.p.t (%d)!
Measurement ongoing. Hence do not change RF request to PS Data
Measurement/Wakeup is ongoing. Hence do not change RF reason
RACH is ongoing. Hence do not release
[LTE L1LC] Do not pause as Pause Delay timer running due to MBMS
[LTE L1LC] pause_done (%d)
Set IsMandatarySibsReadReq as TRUE.
Set IsMandatarySibsReadReq as FALSE.
[LTE L1LC] IsHoSync(%d)-> FALSE
[4G_DRDS] During 4G_DRDS, rf is unavailable. So, request RF (RACH)
[4G_DRDS] Receive Intra meas!! result[%d]
Reset PauseFlag to ignore early pause timer (Signalling Start)
[LTE L1LC] IsHoSync(%d)-> TRUE
Early Pause Timer stop
[LTE L1LC] Signalling for Handover!!!
[LTE L1LC] Signalling for CSFB!!!
[LTE L1LC] IsHoSync(%d)-> FALSE
[LTE L1LC DSL1RC] Updated RF reason!!
[LTE L1LC DSL1RC] Can be PS conflict (4G-HEDGE) situation!!!
[LTE L1LC] High Priority end. Result is MMC_L1LC_REQUESTREASON_NULL!No Action!
[LTE L1LC] Do not request RF as 4G_DRDS is active
[LTE L1LC] Do not update RF case as 4G_DRDS is active
RESET gL1lc DsdsDB.IsSuspend
RF not released as Measurement ongoing.
[LTE L1LC] IsHoSync(%d)-> TRUE
Early Pause Timer stop
Set IsMandatarySibsReadReq as FALSE.
(L1LC_DecodeRrmConnSleepReq) (R value no update for long time)
[LTE L1LC DSL1RC] Doesn't request RF! Check Req ID[%d]!!!!)
[LTE L1LC DSL1RC] Pre result[%d])
[NRDS] Proc RRM : result is changed because NrCurProc is higher.(result:%d->%d)
[L1LC @%s] Final result[%d]: (DsdsMask[0x%x], Pause[%s], Req ID[%d], HO Flag[%s], gCurProc[%d])
[SIB_DRX] Restore SIB_DRX after PBCH_DONE for Reinit DRX (%d -> %d)
[L1LC @%s] Do not Process HAL_L1LC_RXMODE_REQ_IND otherwise RF will be released. Pause Ind (%d), Pause Flag (%d)
[L1LC @%s]Pre Processing (DsdsMask[0x%x], Pause[%s], Current Proc[%s], Req ID[%d])
[L1LC @%s]Pre Processing (Result[%s], Cause[%s], IsConn(%d))
There is no ongoing Search/Meas !!!!!!!
Don't perform RF Pause/Release, gL1LC_DrxControl.state: %d, Is_Drx_Wakeup_ongoing: %d, gDrx_CfoEnable: %d
Don't perform RF Pause/Release, gL1LC_DrxControl.state: %d, Is_Drx_Wakeup_ongoing: %d, gDrx_CfoEnable: %d, RACH ongoing status: (%d, %d)
[LTE L1LC] Pause will be performed as part of EPT expiry handling
[L1LC @%s] Post Processing (DsdsMask[0x%x], Pause[%s], Current Proc[%s], Req ID[%d] Result[%s])
[L1LC @%s]Pre Processing (DsdsMask[0x%x], Pause[%s], Current Proc[%s], Req ID[%d])
Wakeup procedure is not completed. Hence do not send pause done yet!
Wakeup procedure is not completed. Hence do not send pause done yet!
[L1LC @%s] Post Processing (DsdsMask[0x%x], Pause[%s], Current Proc[%s], Req ID[%d] Result[%s])
L1LC_DsdsCheckPauseIndAction
[4G_DRDS] 4G_DRDS ongoing, don't do L1LC_DsdsCheckPauseIndAction !!!
L1LC_DsdsCheckPauseIndAction >> Wakeup procedure is not completed. Hence do not send pause done yet!
[LTE L1LC DSL1RC] L1LC_DsdsCheckPauseIndAction >> RF released due to Pause Ind action
[LTE L1LC DSL1RC] Signaling mask already set, request RF with signaling
[LTE DRDS] EDV_ACTIVE_IDLE_IDLE mode will be activated! do not request RF!!
[LTE DRDS] Set HalWakeupStartInd = TRUE to decode wakeup start without RF req !!
[NRDS] RF became available during HAL => L1lC message sending. make HalWakeupStartInd as TRUE for process wakeup procedure. -n.c
[LTE L1LC DSL1RC] 4G_DRDS is activated already
[LTE L1LC DSL1RC] Waiting for resume, hence Release RF before activating 4G_DRDS
[L1LC @%s] (DsdsMask[0x%x] ,Pause[%s], Current Proc[%s], Req ID[%d], Result[%s], Cause[%s])
RF aquired for power on(BPLMN_SRCH_START_IND)
RESET gL1lc DsdsDB_[%d].IsSuspend
RF request triggered before power on(BPLMN_SRCH_START_IND)
Already suspended. So, BPLMN was aborted. So, no need register
[L1LC @%s] Post Processing (DsdsMask[0x%x], Pause[%s], Current Proc[%s], msg_id[%d], Cause[%s])
[LTE L1LC DSL1RC] RF Available [%s] Req Reason [%s] IratMeasFlag[%d]
RF will not be requested because RRM_L1LC_SIGNALLING_IND comes in Modem off state
[LTE L1LC DSL1RC] DRDS deactivation is ongoing, hold the force wakeup processing. Saved RRM Msg[%s] Msg ID[%d]
[LTE L1LC DSL1RC] Saved RRM Msg[%s] Msg ID[%d]
[LTE L1LC DSL1RC] RRM Msg Waiting for Pause Done/Resume/Response :: Pause[%s] Resume[%s], PauseIndFlag[%s], RetryTimerRunning[%s]
[LTE L1LC DSL1RC] Saved RRM Msg[%s] Msg ID[%d] IsEDV_Active[%d] for MCG
Pending RRM suspend as eDV deactive operation is ongoing
[NRDS] isProcOngoing re-checked due to NR-DS. result:%d (gCurProc:%d, NrCurProc:%d)
[LTE L1LC DSL1RC] Do not request RF with lower priority than PAGING due to nearby e.p.t (%d)!
[LTE L1LC DSL1RC] Do not request RF with lower priority than PAGING due to nearby paging timing of other stack (%d)!
[LTE L1LC DSL1RC] Do not hold RRM msg because DRDS will be triggered (%d)!
gL1LC_DrxControl->state: %d, gDrx_CfoEnable: %d
[L1LC @%s] Saved RRM Msg[%s] Msg ID[%d] isProcOngoing [0x%x] isRFUpdate [%d]
[LTE L1LC DSL1RC] Saved RRM Msg[%s] Msg ID[%d] IsEDV_Active[%d] for SCG without MEASURE_REQ
[L1LC @%s] RRM_NOHOLDMSG[%d], NO_PAUSE_RESUME[%d], gL1LC_DsdsRetryTmr [%d], IsRfCauseUpdatePending[%d], CurrMeasFlag[%d], isRFUpdate[%d]
[L1LC @%s] gHALSC_IdleGapOnGoing[%d] gHALSC_PrepareGapMeas[%d] gL1LC_DrxControl->state[%d] gL1LC_DsdsPagingRcvIntrTmr [%d] IsPreponePagingRcvIntrReq[%d] DuringClkest[%d]
[LTE L1LC DSL1RC] Free HAL message [%u] before saving new [%u]
[LTE_DSDS] HAL saved message [%d]
[LTE L1LC DSL1RC] Wakeup Start Indication Recieved from HAL
[NRDS] LTE : sleep -> wakeup, NR : paused, release RF first. -n.c
[LTE L1LC DSL1RC] HOLD PAGING_DONE_IND due to pauseindflag
[LTE L1LC DSL1RC] Stop Retry Timer and Requests for RF
[LTE L1LC DSL1RC] DSDS_RRM_NOHOLDMSG[%d] DSDS_NO_PAUSE_RESUME[%d],IsRfCauseUpdatePending(%d)
[L1LC @%s] RRM Saved Msg [%d] is not freed !
[L1LC @%s] RRM Saved Msg [%d] is freed !
[L1LC @%s] HAL Saved Msg [%d] is freed !
[L1LC @%s] MMC Saved Msg [%d] is freed !
[LTE DSDS] Stop LongPauseCheckTmr.
[L1LC @%s] L1LC_DsdsDB cleared !
[L1LC PSPS] PS Protection is not valid as no Autopause timer is running!
[L1LC PSPS] Don't Release RF during Sleep! PS Protection is valid. SleepTime[%u], EarlyPauseTime[%u]
[L1LC PSPS] Release RF during Sleep! SleepTime[%u], EarlyPauseTime[%u]
[LTE L1LC DSL1RC] L2LRX_L1LC_IDLE_PAGING_DONE_IND :: eDV_Active[%d] CurrentStack[%d] is MCG STACK
[LTE L1LC DSL1RC] L1LC_ProcWakeUpStart :: RF Available[%s] Wakeup from Sleep[%s]
[NRDS] set ProcWakeupByMsg(%d)
[LTE L1LC DSL1RC] L1LC_ProcConfigGapInt :: RF Available[%s]
[LTE L1LC DSL1RC] L1LC_ProcReConfigL1C (prev_rat : %d, IsEndc of current/other STACK: %d/%d, NrFullResetFlag : %d
[LTE L1LC DSL1RC] L1LC_ProcReConfigL1C (gDrx_ActiveRat : %d)
[Debug] Full reset on prev rat 5G case. (NrFullResetFlag : 1)
[Debug] Full reset on prev rat 4G case. (NrFullResetFlag : 1)
[SADS] Skip Modem setting
[LTE L1LC DSL1RC] Cannot Restore L1LC Parameters!!! (Sync Mode[%d] Meas Mode[%d] gDrx_ActiveRat[%d])
[SADS] Sync RFD RTG with BB RTG!
[LTE L1LC DSL1RC] L1LC_ProcReConfigL1C (gDrx_ActiveRat : %d)
[4G_DRDS] Already ConnDR_state: DR_ADDED
[4G_DRDS] Already ConnDR_state: DR_ADDED
[4G_DRDS] Pending ResetSemiDr case.
End of %s
HAL parameters were already saved. Don't save HAL parameters again.(gL1lc_DsdsDB.HalParamSaved = %d)
[LTE L1LC DSL1RC] Cannot Store L1LC Parameters!!! (Sync Mode[%d] Meas Mode[%d])
[LTE L1LC DSL1RC]L1LC_ProcStoreL1CParameters (gDrx_ActiveRat : %d)
SET gL1lc_DsdsDB.HalParamSaved = %d
[LTE L1LC DSL1RC] Cannot Store L1LC Parameters!!! (Sync Mode[%d] Meas Mode[%d])
[LTE L1LC DSL1RC]L1LC_ProcStoreL1CParameters (gDrx_ActiveRat : %d)
Sync Timer running for curMode(%d)
Meas Timer running for curMode(%d)
GSM measure stop!
UMTS measure stop!
RTG(ST:%d) is saved: SFN(%d), TTI(%d) RTGoffset(%d), ReleasePalTime(%d)
[SADS] NR sleep ongoing >> wait NR sleep DONE
L1LC_DsdsPerformRFRelease
[NRDS] Send UPDATE_CNF with REJECT to NR.
[NRDS] Wait NR before send RELEASE_IND.
[NRDS] GRANT_CNF will be sent after RF request and GRANT
[NRDS] Send PAUSE_REQ to NR.
[NRDS] Wait NR before send RELEASE_IND.
[NRDS] Wait NR before send RELEASE_IND.
[SC] CC%d: earfcn(%d), type(%d), pair_cc(%02x), tdp_state(%d), rx_mode(%x), rf_path(%x)
[4G_DRDS] No more procedure is needed to release RF in ScgStackId (%d)
RF is not initialized yet (RfAvailable[%d] WaitResponse[%d]). Dont perform RF Release procedure!
[NRDS] LTE RF will be backup later. Set RfBackupNeeded(1)
[LTE L1LC DSL1RC] Release RF during SI_READ!
[LTE L1LC DSL1RC] Paused during Conn SIB READ!
[Debug] ConfigRxFilter - for fix
Early Pause Timer stop
gL1LC_DsdsReleaseAndReqTmr Timer stop
[SADS] Set Prev Rat to NR
[NRDS] Wait NR before send RELEASE_IND.
Don't update RF cause for otherstack(Is_ResumeReq(%d), IsWaitResponse(%d), remain_time(%d))
[SC] CC%d: earfcn(%d), type(%d), pair_cc(%02x), tdp_state(%d), rx_mode(%x), rf_path(%x)
[LTE L1LC DSL1RC] Retrigger srch(%d) after DS resume
[LTE L1LC DSL1RC] gHALSC_MeasMode(%d)
[LTE L1LC DSL1RC] NR Meas element also active/picked: gHALSC_MeasMode(%d)
[LTE L1LC DSL1RC] Retrigger meas(%d) after DS resume
L1LC_DsdsPerformRFPause
[NRDS] Send UPDATE_CNF with REJECT to NR.
[NRDS] Wait NR before send PAUSE_DONE_CNF.
[NRDS] GRANT_CNF will be sent after RF RESUME
[NRDS] Send PAUSE_REQ to NR.
[NRDS] Wait NR before send PAUSE_DONE_CNF.
[NRDS] Wait NR before send PAUSE_DONE_CNF.
[SC] CC%d: earfcn(%d), type(%d), pair_cc(%02x), tdp_state(%d), rx_mode(%x), rf_path(%x)
[4G_DRDS] No more procedure is needed to Pause RF in ScgStackId (%d)
[LTE L1LC DSL1RC] During Conn-Conn State, L1LC should release RF!!
[NRDS] LTE RF will be backup later. Set RfBackupNeeded(1)
[LTE L1LC DSL1RC] To retrigger pended Meas/Srch(%d), make a curMode NULL
[LTE L1LC DSL1RC] Paused during SI_READ!
[LTE L1LC DSL1RC] Paused during Conn SIB READ!
[Debug] ConfigRxFilter - for fix
[SADS] Set Prev Rat to NR
[NRDS] Wait NR before send PAUSE_DONE_CNF.
gL1LC_DsdsReleaseAndReqTmr started for 500ms
Not early pause case. Check other stack's PagingRequestTimer / PreponePagingRcvIntr
Don't update RF cause for otherstack(Is_ResumeReq(%d), IsWaitResponse(%d), remain_time(%d))
Early pause case. Don't update other stack's RF cause
[SC] CC%d: earfcn(%d), type(%d), pair_cc(%02x), tdp_state(%d), rx_mode(%x), rf_path(%x)
[LTE L1LC DSL1RC] 10s DSDS TIMER EXPIRED in CONN mode!!!
[LTE L1LC DSL1RC] SUSPEND FLAG is Set!Return....
[LTE DS]Start RetryTimer(%d) again during NR pausing!!
[LTE L1LC DSL1RC] Updated RF reason!!
[LTE L1LC DSL1RC] Updated RF reason!!
[LTE L1LC DSL1RC] Retry with measurement cause as other stack is having RF for NR !!
[LTE L1LC DSL1RC] Abnormal case!!
[LTE L1LC DSL1RC] Reinit DRX case. Update result as MEASUREMENT to prevent permanant REJECT
[LTE L1LC DSL1RC] Running Proc[0x%x], RRM Result[%u], Result[%u] !
[LTE L1LC DSL1RC] PAUSE_IND, Wait RESUME_IND from RRM.
[LTE L1LC DSL1RC] DSDS PAGING REQUEST TIMER EXPIRED!!!
ARFC case So, DRDS is unavailable!!
ARFC case So, DRDS is unavailable!!
[LTE L1LC DSL1RC] 4G_DRDS is activated hence free HAL_L1LC_RF_RSRC_REQ_IND for SCG stack!
[4G_DRDS] No need to Update RF reason for SCG stack as 4G_DRDS is activated!
[LTE L1LC DSL1RC] Abnormal Case ! RF is not requested !
current_sfn_tti[%d], gDrxSiRnti[%d]
[LTE L1LC DSL1RC] Timer started for %d !!!
[LTE L1LC DSL1RC] Timer started for %d !!!
UE state[%d], Rnti[%d], Rf available[%d]
Don't request RF grant because eDV_Active is TRUE and MCG.
[LTE_DSDS]Wake up ongoing hence not doing pause even Early timer expired
[PG] wakeupintrTmr(%d), Lwakeup_Intr(%d)
[LTE L1LC DSL1RC] DRX sleep / CLKEST ongoing (State: %d), hence not doing pause even Early timer expired!!!
[NRDS] Wakeup is ongoing, hence not doing pause even Early timer expired!!!
[LTE_DSDS]Initial Search/ measure hence not doing pause even Early timer expired
[LTE_DSDS]During GAP hence not doing pause even Early timer expired
[LTE_DSDS]Irat measure(%d) hence not doing pause even Early timer expired
[LTE_DSDS]Scell srch/meas(%d) hence not doing pause even Early timer expired
[LTE_DSDS]Inter srch/meas(%d) hence not doing pause even Early timer expired
[LTE_DSDS]Handover(%d)/CSFB(%d) already in progress. Hence not doing pause even Early timer expired
[4G_DRDS] Don't do early pause as pauseFlag is not set ! gL1lc_DsdsDB.PauseFlag [%d]
[LTE DSDS] Don't do early pause because RF was requested with SIGNALLING and waiting RESPONSE
[4G_DRDS] L1LC_CheckEarlyPauseFeasibility is FALSE, return!! PauseFlag(%d)
[4G_DRDS] Do early pause! 4G_DRDS is not activated. RACH is ongoing [%d][%d][%d][%d]
[4G_DRDS] 4G_DRDS is not possible due on-going PBCH. Hence perform Pause
[4G_DRDS] 4G_DRDS is not activated due to SCG stack is paused. Do early pause!
[4G_DRDS] Can not enable 4G_DRDS because CC = (%d)
[4G_DRDS] 4G_DRDS is not possible due to RRC flag and hence perform Pause
[4G_DRDS] eDV_AvailableforEPT(%d -> %d)
[4G_DRDS] set EptCheckForARFC(%d)
[4G_DRDS] Can not enable 4G_DRDS because CC = (%d)
[4G_DRDS] pLTE_OHE->SemiDrds_Available (%d)
[4G_DRDS] Can't Semi DRDS (%d, %d, %d)
[4G_DRDS] Don't do early pause ! EDV_Active [%u] EDV_State [%d]
[NRDS] request NR to change : 4rx -> 2rx
[LTE_DSDS] LTE Conn-Conn state and MeasPending is TRUE. Stack requesting for early pause is not LTE. Current stack is paused
[LTE_DSDS] LTE Conn-Conn state and MeasPending is TRUE. Current stack was paused before. Hence skip EPT for now !
[LTE_DSDS] LTE Conn-Conn state and MeasPending is TRUE. Current stack is paused this time!
[LTE_DSDS] Other ST is in Conn state, and Stack status is Active! False E.P.T!
[LTE_DSDS] e.p.t expired, pause done not sent. Send RF request as IsRfCauseUpdatePending is TRUE, RF Requet[%s]
gL1LC_PbchMode[%d]
Send Pause done on 4G BCH conflict with Other SIM IsLastRejectOnConflict[%d]
Do not send pause Done as there is 4G BCH conflict with Other SIM IsLastRejectOnConflict[%d]
Send Pause done on 4G BCH conflict with Other SIM IsLastRejectOnConflict[%d]
Do not send pause Done as there is 4G BCH conflict with Other SIM IsLastRejectOnConflict[%d]
[LTE_DSDS] Volte is ongoing [%d]. Hence not doing pause even Early timer expired
[LTE_DSDS] PDCCH Ordered RACH is ongoing, do not perform Pause done
[MBMS RF Throttling] randValue(%u)
[MBMS RF Throttling] Do not send pause done confirm, randValue(%u)
[LTE_DSDS] Pause(%d), Resume(%d)
[LTE_DSDS] e.p.t expired, pause done not sent. Send RF request as IsRfCauseUpdatePending is TRUE, RF Requet[%s]
[LTE L1LC DSL1RC] L1LC_StartResumeProcedure: Post Processing -PendingFromSearchReq!!!
[LTE L1LC DSL1RC] L1LC_StartResumeProcedure: Post Processing -PendingFromSetDlFreq!!!
[LTE_DSDS]Wait for Resume[%s] Wait for RF RSRC RSP[%s]
[DSP] Modem Status: % d, gL1LC_DrxControl->state: %d, DSDS_RF_AVAILABLE(): %d
[LTE L1LC DSL1RC] Request RF for Saved RRM msg
[LTE L1LC DSL1RC] Do not request RF for Reason[%u] as RRC is in Paused state!
[LTE L1LC DSL1RC] IsAnyDsdsMaskSet: %d UE_state: %d
ignore ModemOffAbnormalTimerExpired. StackStatus = %d
[LTE L1LC DSL1RC] GetRemainEarlyPauseTime(%u)
[LTE L1LC DSL1RC] GetRemainEarlyPauseTime(%u)
[LTE L1LC DSL1RC] L1LC_ProcIsWakeUpPossible() Returned %d
[LTE L1LC DSL1RC] Wake up Possible. Conn-Conn state.
[NRDS] L1LC_ProcIsWakeUpPossible : already eDV_Active == TRUE, return TRUE -n.c
[LTE L1LC] Wakeup skipped due to nearby Early Pause Time!
[LTE L1LC] Start RetryTimer (Default)
Stop gL1LC_DsdsBplmnDurationTmr at L1LC on reception of RF grant
[LTE L1LC] : error Case! BplmnDurationTimer should have expired
gL1LC_DrxState is NOT DRX_STATE_SUSPEND_MEAS
%s: Irat pending Dont release RF and Dont update RF cause since measure activity is pending(%d) or wakeup procedure(%d)!!!
[LTE L1LC] Signalling End!Paging ongoing. Switch RF cause to Paging
[LTE L1LC] Signalling End!Sys Info Read ongoing. Switch RF cause to SysInfo
[LTE L1LC] Signalling End!Measurement ongoing. Switch RF cause to MEAS
[LTE L1LC] Signalling End!Cell search ongoing. Switch RF cause to CellSearch
[LTE L1LC] Signalling End!MBMS ongoing. Switch RF cause to PSCALL
[NRDS] isProcOngoing re-checked due to NR-DS. result:%d
[LTE L1LC DSL1RC] L1LC_DsdsUpdateRfCause Prev(%d), New (%d), Rf Status(%d),Meas Status (%d)!!!
Retry Timer is running. Stop the timer!!
Procedure with higher priority is ongoing!!
Measurement on going, RETURN!!! RequestReason(%d), CurrMeasFlag(%d) gL1LC_DrxControl->state(%d)
Clkest is ongoing, RETURN!!!
Waiting for RESUME_REQ from RSM, Don't send another request now, RETURN!!!
[4G_DRDS] Don't RF cause update until paging rcv intr !!!
[LTE L1LC DSL1RC] Can be PS conflict (4G-HEDGE) situation!!!
L1LC_DsdsUpdateRfCause: isRFReqSent(%d), Current Procedure(%d)!!!
There is no case
L1LC_IsConflictWithBCH: Check SI scheduling for any conflict
There is conflict between BCH(4G) with PCH(other SIM) for index in SIB-1[%d] CurrentSfnTTI(%d) CurrentSfnTTI + EPT windowLength(%d) NextSiSfnTTI(%d) PrevSiSfnTTI(%d), si_WindowLength(%d)
Conflict in SI-Win(%d) and GAP. CurrentSfnTTI(%d) NextSiSfnTTI(%d) + SI windowLength(%d) gap_sfn_tti(%d)
SI-Window ongoing in SI-Win(%d). CurrentSfnTTI(%d) NextSiSfnTTI(%d) + SI windowLength(%d) gap_sfn_tti(%d)
Pre cellboundary is changed from %d to %d
Pre cellboundary is %d
Pre cellboundary of MCG Stack (%d) is changed from %d to %d
Pre cellboundary of MCG Stack (%d) is %d
Pre cellboundary of SCG Stack (%d) is changed from %d to %d
Pre cellboundary of SCG Stack (%d) is %d
[4G_DRDS] SCG (%d) Difference of cellboundary is changed from %d to %d
[4G_DRDS] SCG (%d) Difference of cellboundary is %d
Diff value was changed from %d to %d due to IsUpdatedDuringWakeup case
Difference of cellboundary is changed from %d to %d
Difference of cellboundary is %d
[OHE] Stack Status (%d to %d) => OHE_StackStatus[0][1] (%d, %d)
[DSDS]%s() Start
[DRX] Otherstack's CellBoundary: %d, Diff: %d
[DRX] Cellboundary: %d, Otherstack: %d, Diff: %d
[DSDS] curTimeTti(%d), curTimeOffset(%d)
[DSDS] time_diff(%d) blackout_time_tti(%d) blackout_time_mclk(%d) blackout_tti_mclk(%d) Updated_tti(%d), RFReleasePalTime(%d), RFGrantPalTime(%d)
[DSDS] RTG update Check!!! curTimeTti(%d), curTimeOffset(%d), Updated_tti(%d), Mclk(%d)
[DSDS]%s() End
RF release(ST: %d) in conn - conn state! And STACK(%d) didn't have RF yet!!
Retry Timer is already running. Stop the timer and request again!!
In conn - conn state, Request Rf with Measurement as ENDC is enabled on other stack
L1LC_DsdsMbmsReset
[DSDS]Dose not need to update ealry_pause_timer
[DSDS]calculated remaining_time was short(%d->500ms)
[DSDS]remaining_time(%d->%d),ca_deact_time(%d),type_4rx_deact_time(%d), gL1lc_DsdsDB.early_pause_duration(%u->%u)
[DSDS]DSDS_CA_count(%d)->(%d),DSDS_4RX_count(%d)->(%d)
[DSDS]remaining_time was short(%d)
[LTE L1LC DSL1RC] Int_Stack = %d, Ims_Stack = %d,
[LTE L1LC DSL1RC] time diff (%d ms) from RF reconfiguration
[LTE L1LC DSL1RC] There is no Ims_Stack: %d
[LTE L1LC DSL1RC] SINR of Ims_Stack: %d, change_mode: %d
[LTE L1LC DSL1RC] Period of RF change: mode: %d (IMS:INT = %d:%d)!
[LTE L1LC DSL1RC] (IMS DDS) Other stack has saved Rrm message, process that first
[LTE L1LC DSL1RC] (IMS DDS) Sends Msg to another RRM stacks, mode: %d, IsMeasReqPending: %d, Is_ResumeReq: %d
Other stack gL1LC_DsdsConnConnRfTmr started for %d
[LTE L1LC DSL1RC] (INT DDS) Other stack has saved Rrm message, process that first
[LTE L1LC DSL1RC] (INT DDS) Sends Msg to another RRM stacks, mode: %d, IsMeasReqPending: %d, Is_ResumeReq: %d
Other stack gL1LC_DsdsConnConnRfTmr started for %d
[LTE L1LC DSL1RC] Check the scenario!
[LTE L1LC DSL1RC] (IMS DDS) Other stack has saved Rrm message, process that first
[LTE L1LC DSL1RC] (IMS DDS) Sends Msg to another RRM stacks, mode: %d
Other stack gL1LC_DsdsConnConnRfTmr started for %d
Set Scheduled/Requested RAT [%d], srlte_support = %d
Get Scheduled/Requested RAT [%d]
L1LC_ProcEdvRrmHoldMsg
[NRDS] request NR to change : 2rx -> 4rx
[4G_DRDS] L1LC_ProcEdvRrmHoldMsg - PendingFromSetDlFreq!!!
[4G_DRDS] L1LC_ProcEdvRrmHoldMsg - PendingFromSearchReq!!!
[4G_DRDS] L1LC_ProcEdvRrmHoldMsg -PendingFromMeasReq[%d]!!!
[4G_DRDS] L1LC_ProcEdvRrmHoldMsg -IsDuringMeas[%d]!!!
[4G_DRDS] !!! pNextMeasElem is NULL !!!
[4G_DRDS] DrxConfirmInd: 4G_DRDS end, Reset CdrxRecoveryFlag(%d)
[4G_DRDS] Processing the Saved RRM message after eDV end
[4G_DRDS] @%s (%d)
[4G_DRDS] DEACTIVATED From DR_State(%d) /SendRrmMeasScheduleInd ===
Stop DrdsAbnormalCheckTmr
[NRDS] request NR to change : 2rx -> 4rx
[FEDV] Change MCG ST (%d -> %d)
[EDRDS] end eDRDS RFAPI_SetRfBandList: (CC%d) rx_mode(%d)
[EDRDS] end eDRDS RFAPI_SetRfBandList: (CC%d) rx_mode(%d)
[DSDS Recovery] IsMeasReqPending (0 -> 1)
[LTE L1LC] Pended NR meas element[%d] cannot be picked as NR RF resume is in progress
[LTE L1LC] PendingFromIsDuringMeas[%d]!!!
[LTE L1LC] !!! pNextMeasElem is NULL !!!
[LTE L1LC] Do not grant resource as DR-DS is active
[DEBUG] L1LC_ReleaseSearchMeasureResource: NrDsState is WAIT_PAUSE_CNF, Do not give resource to NR, SearchConfiguredflag(0x%x)
[4G_DRDS] HALDRX_CheckEdvStackOrder : don't eDRDS because SCG is in weak signal area
[EDRDS] Can't eDRDS due to ARFC ( ARFC: %d)
remain time to other stack WakeupIntrTimer (%d)
remain time to other stack PagingReqTimer (%d)
remain time to other stack PagingReqTimer (%d)
[LTE L1LC DSL1RC] [4G_DRDS] Remain time to other stack's paging timing (%d)
No Pending LMAC operation for L2
L1LC_DsdsPerformRFRelease count(%d), cipher pending(%d) Decipher Pending(%d)
Cipher/Decipher Reach Max Count(%d)
[Debug] L1LC_UpdateL1tunnelStackIdForPendingCase : Set NrInfoReqPath = %d
[Debug] L1LC_UpdateL1tunnelStackIdForPendingCase : Set NrInfoReqSearch = %d
[Debug] L1LC_UpdateL1tunnelStackIdForPendingCase : Set NrInfoReqMeasure = %d
[Debug] L1LC_UpdateL1tunnelStackIdForPendingCase : Set NrRfGrantReq = %d
[Debug] L1LC_UpdateL1tunnelStackIdForPendingCase : Set NrRfUpdateReq = %d
[Debug] L1LC_CheckL1tunnelStackId(INFO_CNF) : Set StackId as NrInfoReqPath = %d
[Debug] L1LC_CheckL1tunnelStackId(INFO_CNF) : Set StackId as NrInfoReqSearch = %d
[Debug] L1LC_CheckL1tunnelStackId(INFO_CNF) : Set StackId as NrInfoReqMeasure = %d
[Debug] L1LC_CheckL1tunnelStackId(INFO_CNF) : Set StackId as gHALSC_L1tunnelStackId = %d
[Debug] L1LC_CheckL1tunnelStackId(GRANT_CNF) : Set StackId as NrRfGrantReq = %d
[Debug] L1LC_CheckL1tunnelStackId(GRANT_CNF) : Set StackId as gHALSC_L1tunnelStackId = %d
[Debug] L1LC_CheckL1tunnelStackId(UPDATE_CNF) : Set StackId as NrRfUpdateReq = %d
[Debug] L1LC_CheckL1tunnelStackId(UPDATE_CNF) : Set StackId as gHALSC_L1tunnelStackId = %d
[Debug] L1LC_CheckL1tunnelStackId(default) : Set StackId as gHALSC_L1tunnelStackId = %d
[NRDS] L1LC_NrdsProcRfGrantReq
[NRDS] LTE is Suspend state. Ignore RfGrantReq from NR
[NRDS] NrGrantPendedByCdrxMeas set to TRUE
[NRDS] GRANT_REQ comes on unexpected state, Check NrDsState:%d !!!!!
[NRDS] == ENDC START == (IsEndc:%d)
[NRDS] LTE has RF GRANT and RF update is not needed. Send GRANT_CNF immediatly.(curProc:%d, NrCurProc:%d, ept:%d)
[NRDS] LTE waits RESUME. GRANT_CNF will be sent after RESUME.(NrDsState:%d)
[NRDS] LTE waits RSRC_RSP. GRANT_CNF will be sent after LTE get GRANT.(NrDsState:%d)
[NRDS] LTE will release RF. GRANT_CNF will be sent after LTE get GRANT.(NrDsState:%d)
[NRDS] LTE will wakeup. Then, send GRNAT_CNF So, Ignore NR release pending
[NRDS] LTE is during wakeup. GRANT_CNF will be sent after wakeupSendIPC done.(NrDsState:%d)
[NRDS] LTE is during sleep procedure. GRANT_CNF will be sent after wakeupSendIPC done.(NrDsState:%d)
[NRDS] LTE PauseFlag is TRUE. GRANT_CNF will be sent after LTE pause done and resume.(NrDsState:%d)
[NRDS] L1LC_NrdsProcRfUpdateReq
[NRDS] LTE is Suspend state. Ignore RfUpdateReq from NR
[NRDS] UPDATE_REQ comes on unexpected state, Check NrDsState:%d !!!!!
[NRDS] Waiting NR PAUSE_CNF. Send UPDATE_CNF with REJECT
[NRDS] RfUpdate is not needed. Send update cnf.(curProc:%d, NrCurProc:%d, ept:%d)
[NRDS] LTE waits RESUME. UPDATE_CNF will be sent after RESUME.(NrDsState:%d)
[NRDS] LTE waits RSRC_RSP. UPDATE_CNF will be sent after LTE get GRANT.(NrDsState:%d)
[NRDS] LTE will release RF. UPDATE_CNF will be sent after LTE get GRANT.(NrDsState:%d)
[NRDS] ReqReason of NR is %d. Request RF even if during DRDS.
[NRDS] RF update (RSRC_REQ) is not sent as IsWakeupOngoing/is_meas_ongoing(%d) eDV_Active(%d) DuringClkest(%d) DSDS_NO_PAUSE_RESUME(%d) DuringGap(%d) ReqReason(%d)
[NRDS] Update RF is not done.
[NRDS] LTE has RF GRANT and RF update is not needed. Send UPDATE_CNF immediatly.(curProc:%d, NrCurProc:%d, ept:%d)
[NRDS] L1LC_NrdsProcRfResumeCnf
[NRDS] L1LC_NrdsProcRfPauseCnf
[NRDS] LTE is Suspend state. Ignore RfPauseCnf from NR
[NRDS] L1LC_NrdsProcSleepInd - LTE Wakeup was pended. reset IsLteWakeupPended(%d) and process wakeup
[NRDS] L1LC_NrdsProcSleepInd(other stack) - LTE Wakeup was pended. reset IsLteWakeupPended(%d) and process wakeup
[NRDS] L1LC_NrdsProcSleepInd(other stack) - LTE Wakeup was pended. reset IsLteWakeupPended(%d) and process wakeup
[NRDS] L1LC_NrdsProcSleepInd(endc stack) - LTE Wakeup was pended. reset IsLteWakeupPended(%d) and process wakeup
[NRDS] LTE RF backup. Reset RfBackupNeeded(0)
[NRDS] LTE is ready to release. Send RELEASE_IND
[LTE DS]Start RetryTimer(%d)!!
[NRDS] LTE RF backup. Reset RfBackupNeeded(0)
[NRDS] LTE is ready to pause. Send PAUSE_DONE_CNF
[NRDS] Reset WaitNrForRelease, when RF is available
[NRDS] Reset WaitNrForPause, when RF is available
[NRDS] LTE is not ready to pause. Wait LTE pause
[NRDS] LTE is sleepstate and NrOnlyGranted. Send pause_done only for NR. -n.c
[NRDS] set NrOnlyGranted(%d).
[NRDS] L1LC_NrdsProcRfReleaseInd
[NRDS] LTE is Suspend state. Ignore RfReleaseInd from NR
[NRDS] LTE wakeup intr can be occured. So, pending NR RfReleaseInd
[NRDS] LTE RF backup. Reset RfBackupNeeded(0)
[NRDS] LTE is ready to release. Send RELEASE_IND
[LTE DS]Start RetryTimer(%d)!!
[NRDS] LTE RF backup. Reset RfBackupNeeded(0)
[NRDS] LTE is ready to pause. Send PAUSE_DONE_CNF
[NRDS] Reset WaitNrForRelease, when RF is available
[NRDS] Reset WaitNrForPause, when RF is available
[NRDS] LTE wakeup has started. No need to update RF cause or release RF
[NRDS] LTE Proc is Current Proc. No need to update RF cause.
[NRDS] NR Proc is Current Proc. Need to update RF cause.
Early Pause Timer stop
[NRDS] LTE is sleepstate and NrOnlyGranted. Send release_ind only for NR. -n.c
[NRDS] set NrOnlyGranted(%d).
[NRDS] LTE waits NR's wakeup done. But NR sent RfReleaseInd.
[NRDS] LTE waits NR's sleep done. But NR sent RfReleaseInd.
[NRDS] == ENDC END == (IsEndc:%d)
[NRDS] == Reset gL1lc_DsdsDB.NrDsInfo ==
[NRDS] L1LC_NrdsProcAutoPauseDoneInd
[NRDS] LTE is Suspend state. Ignore AutoPauseDoneInd from NR
[NRDS] LTE RF backup. Reset RfBackupNeeded(0)
[NRDS] LTE is ready to release. Send RELEASE_IND
[NRDS] LTE RF backup. Reset RfBackupNeeded(0)
[NRDS] LTE is ready to pause. Send PAUSE_DONE_CNF
[NRDS] LTE is ready to pause. Send PAUSE_DONE_CNF(abnormal case)
[NRDS] LTE is sleepstate and NrOnlyGranted. Send pause_done only for NR. gResumeReadyTimer: (%d) -n.c
[NRDS] LTE is sleepstate. Do pause for NR. ResumeReadyTimer: (%d) -n.c
[NRDS] LTE early pause timer is running, pause will be done after early pause timer expiry
[NRDS] Trigger RF pause actions when WAKEUP_START_IND is saved.
[NRDS] gRspNeeded(%d), Send NrRfResumeReq in no auto pause CASE
[NRDS] LTE is not ready to pause. But Pause_Flag is TRUE. LTE will do pause after unit action.
[NRDS] LTE is not ready to pause. Wait LTE pause
[NRDS] LTE waits NR's wakeup done. But NR sent AutoPauseDone.
[NRDS] LTE waits NR's sleep done. But NR sent AutoPauseDone.
[NRDS] Don't change NrdsState %d -> %d , IsEndc is FALSE.
[NRDS] Don't change NrdsState %d -> %d , NR is already RF_RELEASE state.
[NRDS] SET NrdsState %d -> %d
[NRDS] LTE L1 ignored EPT. Send RESUME_REQ to RSM
[NRDS] L1LC_NrdsProcEptIgnoreCheck (curProc:%d, NrCurProc:%d, ept:%d)
[NRDS] L1LC_NrdsProcRfAvailableRsp
[NRDS] PauseFlag was set. LTE will do pause later. Do nothing here
[NRDS] NR is PAUSE state, send RESUME_REQ to RSM.
[NRDS] NR is WAIT_PAUSE state, but send RESUME_REQ to RSM anyway.
[NRDS] set NrOnlyGranted(%d).
[NRDS] NR is WAIT_GRANT_CNF state, send GRANT_CNF to RSM.
[NRDS] set NrOnlyGranted(%d).
[NRDS] NR is WAIT_UPDATE_CNF state, send UPDATE_CNF to RSM.
[NRDS] NR is SLEEP state, no need to let NR know RF available.
[NRDS] NR is GRANT state, no need to let NR know RF available.
[NRDS] Check NrDsState(%d)!!!!!
[NRDS] L1LC_NrdsProcSleepInd(%d)
[NRDS] L1LC_NrdsProcSleepInd(%d) - NR updated Wakeup ongoing. skip
[LTE L1LC DSL1RC] RF release >> Sleep state during Reconfig Pend
[NRDS] L1LC_NrdsProcSleepInd - LTE Wakeup was pended. reset IsLteWakeupPended(%d) and process wakeup
[NRDS] L1LC_NrdsProcSleepInd(other stack) - LTE Wakeup was pended. reset IsLteWakeupPended(%d) and process wakeup
[NRDS] L1LC_NrdsProcSleepInd(other stack) - LTE Wakeup was pended. reset IsLteWakeupPended(%d) and process wakeup
[NRDS] L1LC_NrdsProcSleepInd(endc stack) - LTE Wakeup was pended. reset IsLteWakeupPended(%d) and process wakeup
[NRDS] L1LC_NrdsProcSleepInd - LTE Sleep was pended. reset IsLteWakeupPended(%d) and process conn sleep
[NRDS] L1LC_NrdsProcWakeupInd(%d)
[NRDS] L1LC_NrdsProcWakeupInd(%d) - NR updated Sleep ongoing. skip
[LTE L1LC DSL1RC] RF release >> Sleep state during Reconfig Pend
[NRDS] L1LC_NrdsProcSleepInd - LTE Wakeup was pended. reset IsLteWakeupPended(%d) and process wakeup
[NRDS] L1LC_NrdsProcSleepInd(other stack) - LTE Wakeup was pended. reset IsLteWakeupPended(%d) and process wakeup
[NRDS] L1LC_NrdsProcSleepInd(other stack) - LTE Wakeup was pended. reset IsLteWakeupPended(%d) and process wakeup
[NRDS] L1LC_NrdsProcSleepInd(endc stack) - LTE Wakeup was pended. reset IsLteWakeupPended(%d) and process wakeup
[NRDS] L1LC_NrdsProcSleepInd - LTE Sleep was pended. reset IsLteWakeupPended(%d) and process conn sleep
[NRDS] SET NrdsSleepState %d -> %d
[NRDS] SET IsRfAvailForNr %d -> %d
[NRDS] L1LC_NrdsProcSuspendHold
[NRDS] Send SUSPEND_CNF here. Reset SuspendHold(0). dsdsDB can be reset
[NRDS] L1LC_NrdsRecalcAutoPause - eDV active case. return 0 - n.c
[NRDS] Gap ongoing do not check for DR or eDRDS feasibility to avoid RF band update
[NRDS] Set AutoPauseTime to 0 (DR_ADDED:%d, eDRDS_Avail:%d)
[NRDS] Set AutoPauseTime to 0 (pLTE_OHE->IsNr4RxBlockDrds is TRUE)
[NRDS] Set AutoPauseTime to 0 (pLTE_OHE->SemiDrds_Available is TRUE)
Don't change SemiDrds_Available(%d) value because value was set in EPT expired function.
[NRDS] Set AutoPauseTime to 0 (DR_ADDED:%d, eDRDS_Avail:%d)
[NRDS] Set AutoPauseTime to 0 (DR_ADDED:%d, eDRDS_Avail:%d)
[NRDS] LTE already stopped autopause timer. Set AutoPauseTime to 0 (DR_ADDED:%d)
[NRDS] L1LC_NrdsRecalcAutoPause : %u -> %u
[NRDS] NR EPT time updated (%u->%u)
[SADS] Same EARFCN case on SET_DL_FREQ_REQ.(current:%d, SetDlFreqReq:%d)
[SADS] Should req to SRL1RC for all meas (meas_mode %d)
[SADS] Signaling when DR >> update to DSDS
[SADS] SET RfRequestForDR (%d) -> (%d)
[SADS] SET other stack RfRequestForDR (%d) -> (%d)
[SADS] LTE-LTE >> Do not RfRequestForDR (%d)
[SADS] SET SADRAvailable (%d) -> (%d)
[SADS] SET isSADRImpossible %d -> %d
[SADS] SET bandlist (CC%d)
[SADS] SET bandlist (%d: %d)
[SADS] SET bandlist (%d: %d)
[SADS] SET bandlist (%d: %d)
[SADS] SET bandlist (%d: %d)
[SADS] SET channelConfigured (%d) -> (%d)
[SADS] GetChannelConfigure(%d)
[NRDS] SET SADSSleepState %d -> %d
[SADS] GetSADSSleepState(%d)
[SADS] L1LC_GetSADSOtherStackSleepState(%d)
[SADS] SET LteReconfigPend %d -> %d
[SADS] Get LteReconfigPend(%d)
[SADS] SET LteWakeupPend %d -> %d
[SADS] Get LteWakeupPend(%d)
[SADS] SET LteIdleSleepPend %d -> %d
[SADS] Get LteIdleSleepPend(%d)
[SADS] SET LteConnSleepPend %d -> %d
[SADS] Get LteConnSleepPend(%d)
[SADS] Restore Ulconfiguration Start
[SADS] Restore Ulconfiguration >> RFAPI_SetChannelFrequency(ul_freq:%d)
[SADS] Restore RFAPI_PowerOnTxPath
[SADS] Restore Ulconfiguration End
[SADS] RrmSaveMsg is Null
[SADS] RrmSaveMsg is not MEASURE_REQ
[SADS] Inter Band Measure REJECT >> Update Band List to valid, SADRAvailable(%d)
[SADS] Tx Set IsTxWaitResponse(%d -> %d)
[SADS] Tx GetTxRequestResponse(%d)
[SADS] Tx Set TxRequestResponse(%d -> %d)
[SADS] Tx Set pLTE_OHE->IsTxAvailable(%d -> %d)
[SADS] Tx Set NeedTxReconfig (%d->%d)
[SADS] Tx is Available
[SADS] Tx is Unavailable
[SADS] Tx Save req_id(0x%x) Message (0x%x) >> [L1TX(0x%x), L2TX(0x%x)]
[SADS] L1LC_ReConfigL1LCTx
[SADS] Tx Reconfig >> After PAUSE
[SADS] Tx Reconfig >> LTE CONN
[SADS] Tx Reconfig >> Rach REJECTED before
[SADS] Tx Reconfig >> There is L2 msg pedding
[SADS] Tx Reconfig >> There is L1TX req
[SADS] Tx Reconfig >> MTM Mode
[SADS] Tx Reconfig >> Do not need Reconfig
[SADS] Tx Reconfig >> delayed Reconfig
[SADS] Tx IsSrifTxReqEnable(%d)
[SADS] Tx InitSrifTxReq
[SADS] Tx Not Request to SRIF >> Modem Power OFF(%d), gDrx_ActiveRat(%d)
[SADS] Tx Not Available, req_id(0x%x) TxSaveMsg(0x%x)
[SADS] REJECT >> Measurement (%d), or wakeup (%d) ongoing RETURN!!!
[SADS] REJECT >> Clkest is ongoing, RETURN!!!
[SADS] REJECT >> Don't RF cause update until paging rcv intr !!!
[SADS] Set Pause flag >> Can not process REJECT response
[SADS] WAIT >> Wait the SRL1RC grant
[SADS] RF Req >> No reason so Masking Check(0x%x), result(%d)
[SADS] SADR is broken, Release measure resource
[SADS] RF Req >> RequestReason(%d)
[SADS] RF Req >> RequestReason(%d), skip SendSrIfReq.
[4G_DRDS] Remove RFband of SCG from RFbandlist due to MIMO conflict
[Bandlist] L1LC_CheckRFBandupdateForScellConfig(numCC:%d) start
[Bandlist] Same EARFCN for Scell exist. Skip checking this earfcn(%d)
[Bandlist] L1LC_FindRfPathForDrBand (earfcn : %d)
[Bandlist] DR RF band(%d)
[Bandlist] L1LC_RemoveDrBandList : release_rf_path(%d).!!!
[Bandlist] L1LC_RemoveDrBandList : wrong RF path(%d). skip!!!
[Bandlist] L1LC_RemoveDrBandList : wrong RF path(%d). skip!!!
[Bandlist] L1LC_RemoveDrBandListAll(%d) : num(%d) / release_rf_path(%d)!!!
[Bandlist] RF_Set_CA_Release : release_rf_num(%d)
[DS_OPT] gL1lc_DsdsDB.MeasState = %d -> %d
[DS_OPT] gL1lc_DsdsDB.SrchState = %d -> %d
[DS_OPT] Stop abnormal timer. Remain time = %dms
[DS_OPT] Start abnormal timer. Remain time = %dms
[NRDS] pend L1LC_DrxProcConnSleepReq - NrdsSleepState(%d)
[NRDS] IsLteWakeupPended(%d)
[4GDS] Conn - Conn >> Update Rf Cause to PSCALL
gL1LC_DsdsReleaseAndReqTmr Timer stop
[LTE L1LC DSL1RC] gDrx_SocWarmupTimerState = %d
[LTE L1LC DSL1RC] Response Recieved while in DRX Sleep!!! IsWakeupOnGoing: %d, IsWakeupDelayed: %d
[PG] wakeupintrTmr(%d), Lwakeup_Intr(%d)
[NRDS] IsDrxSleep is TRUE. But HalWakeupStartInd is TRUE. Do StartResumeProcedure
[NRDS] SIGNALLING_IND was processed during LTE sleep and NR active.
[NRDS] (SW sleep case) After DS operation, Dmover release / init is required.
[NRDS] skip StartResumeProcedure because RF RESUME for only NR, just set IsRfAvailable(%d), IsRfAvailForNr(%d).
[LTE L1LC DSL1RC] Do not pause RF as some procedure is ongoing Is_Drx_Wakeup_ongoing[%d] DsdsMask[0x%x]
[LTE L1LC DSL1RC] L1LC_ProcMmcIf_RFUnavailableRsp DsdsMask[0x%x]!!!
[4G_DRDS] Skip Edv Deactive for RF waiting
[4G_DRDS] No more procedure is needed to release RF in ScgStackId (%d)
[NRDS] Send UPDATE_CNF with REJECT to NR.
[LTE L1LC DSL1RC] In CONN mode, RF not available... DSDS Timer started for 10s!!!
[LTE DS]Start RetryTimer(%d)!!
[LTE L1LC DSL1RC] ILM pause is not done since measure activity is pending(%d) or wakeup procedure(%d)!!!
[LTE L1LC DSL1RC] In CONN mode, RF not available... DSDS Timer started for 10s!!!
PAUSE in CGI case
[LTE L1LC DSL1RC] Mandatory SIBs are decoded, execute Pause
[LTE L1LC DSL1RC] PauseFlag(%d) + SignalMask(yes) + gCurProc(%d)
[LTE L1LC DSL1RC] PauseFlag(%d) + SignalMask(yes) + gCurProc(%d). Try RF request.
[LTE L1LC DSL1RC] ILM pause is not done since activity (0x%x) is pending!!!
[LTE L1LC] pause_ind action
[4G_DRDS] Deactivate 4G_DRDS as PauseInd is received in SCG stack!
Stop DrdsAbnormalCheckTmr
