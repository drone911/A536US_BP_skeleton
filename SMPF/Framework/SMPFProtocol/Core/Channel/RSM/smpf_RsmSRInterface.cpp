[RSM(SRIF)] : RegisterClient, wrong RatType[%u]
[RSM(SRIF)] : (F) ERROR: Register Client Fail
[RSM(SRIF)] : (I) RegisterClient, ID:%d
[RSM(SRIF)] : RegisterClient, ID:%d, Already done!!
[RSM(SRIF)] : (F) ERROR: DeRegisterClient, Already done!!
[RSM(SRIF)] : DeRegisterClient RatType:%s
[RSM(SRIF)] : (I) DeRegisterClient ID:%d
[RSM(SRIF)] : DeRegisterClient after RegisterRetryTmr
[RSM(SRIF)] : (F) ERROR: DeRegisterClient deregi fail!!
[RSM(SRIF)] : (I)(F) GrantDataUpdate. Already Deregister
[RSM(SRIF)] : (I)(DR) SimInfo(%u), PagingConflict(%u), FakeWakeupMode(%u), FakePeerStackNextWakeupTime(%u)
[RSM(SRIF)] : (I)(F) RequestResourceToResourceController. Already Deregister.
[RSM(SRIF)] : (F) Null Reason is not supported. return RESOURCE_DENIED
[RSM(SRIF)] : (F) client is not registered. return RESOURCE_DENIED
[RSM(SRIF)] : Update the reason in PSPS Reject retry.
[RSM(SRIF)] : (I) RequestResourceToSRL1RC wait[%d], Rat[%s], Event[%s]
[RSM(SRIF)] : (I) RequestResourceToSRL1RC. Rat[%s], Event[%s]
[RSM(SRIF)] : (I)(F) UpdateWakeUpReasonToResourceController. Already Deregister
[RSM(SRIF)] : (F) client is not registered. do not anything in ReleaseResource
[RSM(SRIF)] : (I)(S) ReleaseResourceToSRL1RC
[RSM(SRIF)] : (S)ReleaseResourceToSRL1RC: (NO GRANT, %s)
[RSM(SRIF)] : UpdateReason Request. Granted:(%s,%s), RatType:%s, WakeUpReason:%s
[RSM(SRIF)] : (I)(F) UpdateReason. Already Deregister.
[RSM(SRIF)] : (I) [RSM_RSRC_MEAS] UpdateReason during GapMeasurePause, DrBreakByOneself[%u]
[RSM(SRIF)] : (I)(DR) DrBreakByOneself[%u]. Do Force release. GrantState is changed to RESOURCE_DENIED
[RSM(SRIF)] : no has grant. update is skip.
[RSM(SRIF)] : (I)(F) ForceRelease. Already Deregister.
[RSM(SRIF)] : (I) Force release mode. force denied mode.
[RSM(SRIF)] : (I) Force release fail. force granted mode.
[RSM(SRIF)] : (I)(S) ReceiveUseRespFromSRL1RC[%s]
[RSM(SRIF)] : (I)(F) ReceiveUseResp. Already Deregister.
[RSM(SRIF)] : ReceiveResumeFromSRL1RC: already get GRANT
[RSM(SRIF)] : (F) need to check Granted[%s].
[RSM(SRIF)] : (I)(S) ReceivePauseFromSRL1RC
[RSM(SRIF)] : (I)(F) ReceivePause. Already Deregister.
[RSM(SRIF)] : (I)(S) ReceiveResumeFromSRL1RC Granted[%s]
[RSM(SRIF)] : (I)(F) ReceiveResume. Already Deregister.
[RSM(SRIF)] : ReceiveResumeFromSRL1RC: already get GRANT
[RSM(SRIF)] : (S)(DP) bIsPsPsConnected(%u), OtherDutyCycle(%u)
[RSM(SRIF)] : (F) need to check Granted[%s].
[RSM(SRIF)] : (I)(S) ReceiveEarlyPauseTimerStartFromSRL1RC
[RSM(SRIF)] : (I)(F) ReceiverEarlyPause. Already Deregister.
[RSM(SRIF)] : ReceiveEarlyPauseTimerStartFromSRL1RC didn't get grant[%s]
[RSM(SRIF)] : (S)(DP) ReceivePspsStatusIndFromSRL1RC, IsPsPsEnabled(%s), ResumeReadyPeriod(%u)
[RSM(SRIF)] : (I)(F) ReceivePspsStatusInd. Already Deregister.
[RSM(SRIF)] : GetDrSimInfo - this[0x%x] Rat[%s] SimInfo[%u](0:none, 1:main, 2:sub)
[RSM(SRIF)] : SetDrSimInfo - SimInfo[%u]
[RSM(SRIF)] : SetDrBandInfo - Rat[%s] DrBandInfo(%u) (%u) (%u) (%u), NumBand[%u], Is4RxPath[%u]
[RSM(SRIF)] : (I) SetDrBandInfo Same band update, Skip updateSADRDb - Rat[%s] IsDrAvailable[%u]
[RSM(SRIF)] : (I) SetDrBandInfo(updateSADRDb) - Rat[%s] DrImpossible[%u] DrChannelState[%u]
[RSM(SRIF)] : (I) SetDrBandInfo(UpdateReason) - Rat[%s] IsDrAvailable[%u]->[%u]
[RSM(SRIF)] : SetDrChannelState - Rat[%s] ChannelState[%u] Is4RxPath[%u]
[RSM(SRIF)] : (I) SetDrChannelState(updateSADRDb) - Rat[%s] DrImpossible[%u] DrChannelState[%u]
[RSM(SRIF)] : (I) SetDrChannelState(UpdateReason) - Rat[%s] IsDrAvailable[%u]->[%u]
[RSM(SRIF)] : SetDrInfo - ChannelState[%u], DrBandInfo(%u) (%u), NumBand[%u], Is4RxPath[%u]
[RSM(SRIF)] : (I) SetDrInfo(UpdateReason) - Rat[%s] IsDrAvailable[%u]->[%u]
[RSM(SRIF)] : SetDrTxNumber - Rat[%s] TxNum[%u]
[RSM(SRIF)] : GetIsDrAvailable - Rat[%s] IsDrAvailable[%u]
[RSM(SRIF)] : (I) ReleaseTxResourceToSRL1RC. Rat[%s], ResourceId[%u]
[RSM(SRIF)] : (I)(F) ReleaseTxResourceToSRL1RC. Already Deregister.
[RSM(SRIF)] : (I) [RSM_RSRC_MEAS] ReleaseMeasureResourceToSRL1RC. Rat[%s], ResourceId[%u]
[RSM(SRIF)] : (I)(F) ReleaseMeasureResourceToSRL1RC. Already Deregister.
[RSM(SRIF)] : (I) [RSM_RSRC_MEAS] ReleaseMeasureResourceToSRL1RC is ignored in GapMeasPause
[RSM(SRIF)] : (I) ReleaseMeasureResourceToSRL1RC. Rat[%s], MEAS is already released
[RSM(SRIF)] : (I) [RSM_RSRC_MEAS] ReleaseMeasureResourceToSRL1RC. Skip MeasureRelease
[RSM(SRIF)] : (I) CommonResourceChangeDoneToSRL1RC. Rat[%s], ResourceId[%u], IsTxChangeRequest[%u]
[RSM(SRIF)] : (I)(F) CommonResourceChangeDone. Already Deregister.
[RSM(SRIF)] : (I) CommonResourceChangeDoneToSRL1RC. Rat[%s], TX_MODE Changedone
[RSM(SRIF)] : (I)(F) RequestCommonResource. Already Deregister.
[RSM(SRIF)] : (I) RequestCommonResourceToSRL1RC. Rat[%s], ResourceId[%u], ResourceType[%u], txRequestResponse[%u], ResultResponse[%u], AssignedPath[0x%x]
[RSM(SRIF)] : (I)(F) RequestMeasureResource. Already Deregister.
[RSM(SRIF)] : (I) [RSM_RSRC_MEAS] RequestMeasureResourceToSRL1RC. skip MeasureReq, ReqRat[%s], ResourceId[%u], CurMeasResponse[%u]
[RSM(SRIF)] : (I) [RSM_RSRC_MEAS] RequestMeasureResourceToSRL1RC. ReqRat[%s], ResourceId[%u], MeasRat[%s], MeasBand[%u], MinUseTime[%d], ResultResponse[%u], Srl1rcMeasResponse[%u]
[RSM(SRIF)] : (I)(F) QueryMeasureType. Already Deregister.
[RSM(SRIF)] : (I) [RSM_RSRC_MEAS] QueryMeasureTypeToSRL1RC. skip QueryMeasure, ReqRat[%s], CurMeasResponse[%u]
[RSM(SRIF)] : (I) [RSM_RSRC_MEAS] QueryMeasureTypeToSRL1RC. ReqRat[%s], MeasRat[%s], MeasBand[%u], ResultResponse[%u]
[RSM(SRIF)] : (I)(F) GetCurrentMeasResponse. Already Deregister.
[RSM(SRIF)] : (F) [RSM_RSRC_MEAS] GetCurrentMeasResponse. Mismatch error. MeasResponse[%u] SearchResponse[%u]
[RSM(SRIF)] : (I) [RSM_RSRC_MEAS] GetCurrentMeasResponse. CurrentMeasResponse[%u] MeasResponse[%u] SearchResponse[%u]
[RSM(SRIF)] : (I) [RSM_RSRC_MEAS] DirectMeasureRequest. response[%u] measType[%u]
[RSM(SRIF)] : (I) [RSM_RSRC_MEAS] DirectMeasureRelease.
[RSM(SRIF)] : (I) [RSM_RSRC_MEAS] DirectMeasureRelease is ignored in GapMeasPause
[RSM(SRIF)] : (I) DirectTxRequest. is2TxRequest[%u] TxResponse[%u]
[RSM(SRIF)] : (I) DirectTxRelease.
[RSM(SRIF)] : (I)(F) ReceiveTxUseResp. Already Deregister.
[RSM(SRIF)] : (F) ERROR: TxUseResp Fail
[RSM(SRIF)] : (I) ReceiveTxUseRespFromSRL1RC. Rat[%s], txRequestResponse[%u], ResultResponse[%u], AssignedPath[0x%x]
[RSM(SRIF)] : (I)(F) ReceiveTxChange. Already Deregister.
[RSM(SRIF)] : (I) ReceiveTxChangeFromSRL1RC. Rat[%s], TX is already released
[RSM(SRIF)] : (I) ReceiveTxChangeFromSRL1RC. Rat[%s], PrevResponse[%u], ReqResponse[%u], AssignedPath[0x%x]
[RSM(SRIF)] : (I) [RSM_RSRC_MEAS] ReceiveGapMeasureUseRespFromSRL1RC.
[RSM(SRIF)] : (I)(F) ReceiveGapMeasureUseResp. Already Deregister.
[RSM(SRIF)] : (I) [RSM_RSRC_MEAS] ReceiveGapMeasurePauseFromSRL1RC.
[RSM(SRIF)] : (I) [RSM_RSRC_MEAS] Granted[%s] ignore GapMeasurePause
[RSM(SRIF)] : (I)(F) ReceiveGapMeasurePause. Already Deregister.
[RSM(SRIF)] : (I) [RSM_RSRC_MEAS] ReceiveGapMeasureResumeFromSRL1RC.
[RSM(SRIF)] : (I)(F) ReceiveGapMeasureResume. Already Deregister.
[RSM(SRIF)] : ReceiveGapMeasureResumeFromSRL1RC: already get GRANT
[RSM(SRIF)] : (F) need to check Granted[%s].
[RSM(SRIF)] : (I) [RSM_RSRC_MEAS] GapMeasurePauseDoneToSRL1RC.
[RSM(SRIF)] : (I)(F) GapMeasurePauseDone. Already Deregister.
[RSM(SRIF)] : (I)(F) GapMeasurePauseDone. is not GapMeasPause.
[RSM(SRIF)] : (I)(F) PauseDone. Already Deregister.
[RSM(SRIF)] : CurTime:%u,SRL1RCPauseTime:%u
[RSM(SRIF)] : StartPauseTmr CurTime:%u, DurationUs:%u
[RSM(SRIF)] : (I)(S) SRL1RC Pause Timer is not created.
[RSM(SRIF)] : (S)(DP)(F) Other Duty Cycle is zero. resume ready timer starts with default duration
[RSM(SRIF)] : (I)(F) ReceivePauseAck. Already Deregister.
[RSM(SRIF)] : no operate. no need to receive pause ack[%s]
[RSM(SRIF)] : (I)(F) ReceiveResumeAck. Already Deregister.
[RSM(SRIF)] : (I)(F) ResumeReady. Already Deregister.
[RSM(SRIF)] : ResumeReady m_GrantState[%s]
[RSM(SRIF)] : (I) Resume now.
[RSM(SRIF)] : (DP) retry ResumeReady, Other RAT Duty Cycle is %u
[RSM(SRIF)] : ResumeReady can not resume now
[RSM(SRIF)] : (I)(F) UpdateTime. Already Deregister.
[RSM(SRIF)] : (I)(F) UpdateTime. Already Deregister.
[RSM(SRIF)] : (I)(F) SetNextEvent. Already Deregister.
[RSM(SRIF)] : (I)(S) SRL1RCTmrCb Expired
[RSM(SRIF)] : (I)(S) RegisterRetryTmrCb Expired
[RSM(SRIF)] : (I)(S) ResumeReadyTmrCb Expired
[RSM(SRIF)] : (I)(S) ForceReleaseDelayTmr Expired
[RSM(SRIF)] : StartResumeReadyTmr CurTime:%u, DurationUs:%u
[RSM(SRIF)] : StartRegisterRetryTmr: Register Client Fail
[RSM(SRIF)] : StopRegisterRetryTmr
[RSM(SRIF)] : (I)(F) FindNextEvent. Already Deregister.
[RSM(SRIF)] : SetNextEvent CurTime:%u, Nr:%u
