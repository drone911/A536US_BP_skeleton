NoSvc variable is reset
rr_CellInd->Lai %d %d %d %d %d
RxLev(%d) rxev_min(%d) plmnState(%d)
rr_ResumedForCsfbCall:%d NetworkMode:%d
NwExtUtbf:%d
DataResumption:%d
GRR_MM_CELL_IND Type(%d) T3212(%d) Attach (%d) NMO(%d) AccessClassBarred(%d) EMC Barred(%d)
Band is changed... Stored EST REQ is freed
Band is changed during ReEst... Stored EST REQ is freed
rr_MMPlmnFreqSearchMode to RR_FULL_SCAN_SEARCH
Dtm: Indicate CellUpdateRequired %d
DTM: PacketServiceType %d
GRR_MM_DEDI_CELL_IND LAI(%x %x %x %x %x)
GRR_MM_INITIAL_PLMN_CNF:Fail
INITIAL_PLMN_CNF:Success -> Scell Lai(%x,%x,%x,%x,%x)
GRR_MM_NO_CELL_IND
Release to MM (Cause:%x)
GRR=>GRR_MM_REL_CNF
GRR=>GRR_MM_REL_IND
GRR=>GRR_MM_ABORT_IND (Cause:%d)
GRR_MM_PAGE_IND (Cause:%d Identity:%d)
rr_HandlePagingReq: Paging for Serv Cell PseudoLength(%d)
Skipped P1 Rest Octets: pktPagingInd1:%d, pktPagingInd2:%d
Handling PCK_NOTI
rr_HandlePagingReq: IMSI matched
CS paging for us - send Paging Indication to GMM
P-TMSI matched
Decoder error, msg_type(0x%x)
Error Possible with MobId[0] :%d
Dummy PACKET PAGING REQUEST MSG for PRIVACY at BT
EST_REQ RecSysInfo = 0x%x/ rr_SI1_needed = 0x%x
Store EST_REQ - Waiting for Idle Cnf
Clear rr_BcchReadArfcn in EST REQ (%d)
GRR_MM_EST_REQ(TypReq %x) - rr_State : 0x%x
Check DSRC state to know if CS EST is possible
WAIT for SRRC gran to proceed with NAS signaling
rr_NewIdleToL1 & Store EST_REQ - Delayed for REEST, rr_IdleReqState:%d
Stop Old Reselection and start Reselection due to Re-estb
Store EST_REQ - Waiting for Idle Cnf
Store EST_REQ - Waiting for Cell Cnf
Store EST_REQ - PostReselFailReadNBCCH is set %d
Avoid reading SI13 to handle pending CS EST faster
Store EST_REQ - Cell Reselection in progress (Reason %d)
EST_REQ - CCO (%d) or IRAT (%d) in progress:Type (%d)
Go EST_REQ - though PCCO not cleared
Store EST_REQ - Delayed for REEST
EST_REQ RecSysInfo = 0x%x rr_SI1_needed = 0x%x
Store EST_REQ - Need SI
No LAU
CellSelec: SRCH CMPLTD
REORG Mode Avoid DSRC to go to IDLE after CELL RSP
Dedi: Bar the ARFCN received from NAS: %d
Bar the ARFCN received from NAS: %d
GRR_MM_UPD_FLAI_LIST_REQ : %d
MPH_STOP_NC_MEAS_REQ
[CandSrch] rr_RecGmmAssignReq: TlliType(%d)
GRR_GMM_START_DRX_REQ
Partial Search will be performed in PTM
rr_AttachCompleted -- UARFCN_SCAN_TRIGGERED
UARFCN_SCAN_TRIGGERED SKIPPED % %
GRR_GMM_STOP_DRX_REQ
Suspend Acquisition Guard Timer
Start SysGuardTimer
GRR_MM_INIT_REQ Src:%x
BPLMN: GRR_MM_BACKGND_TIMER_IND. Sleep_Time=%ld ms, Start_Time = %ld
BPLMN:Error:NonDrx CsNonDrx (%d) PsNonDrx(%d) rr_NonDrxTimInProg(%d) AttachInProg(%d)
BPLMN:Error: BPLMN State Mismatch!
GRR_MM_DRX_UPD_REQ in invalid state, IdleReqState:%d
BPLMN:Error:NonDrx CsNonDrx (%d) PsNonDrx(%d) rr_NonDrxTimInProg(%d) GmmAttachInProg(%d) AccInProg(%d) DlTbfProc(%d)
rr_WaitIdleCnfForImmResel is TRUE, Donot handle UPD DRX REQ
WAIT for SRRC response
BPLMN: Wait for IDLE_CNF
rr_NewIdleToL1 rr_IdleReqState:%d
BPLMN: Unexpected BACKGND_START_IND from MM
BPLMN: GRR_MM_BACKGND_START_IND: Sleep_Time:%ld, Start_Time=%ld
BPLMN:Error: RR state is NOT RR_RAT_SUSPEND_NULL!
BPLMN:Error:! Waiting for SUSPEND_CNF!
BPLMN:Error: Unexpected Error!
BPLMN:Error:!Invalid BPLMN State
BPLMN: RR_BPLMN_DRX_TIMER Sleep_Time (%d)ms
BPLMN: Sleep_Time (%ld)ms
BPLMN: RR_BPLMN_DRX_TIMER Sleep_Time (%d)ms
BPLMN: Sleep_Time (%ld)ms
BPLMN:Error: Unexpected Error!
BPLMN: GRR_MM_BACKGND_STOP_REQ
SI2qInd: %d <-Org %d
SI2qInd: NeededSI
SI2qInd: %d
GRR_MM_MODE_UPDATE_IND: EPD_Mode Changed from %d to %d
EDP mode is Hedge or Multimode:%d
LTE Support is set by EPD, rr_EutranMeasCtrlFromLte:%d made TRUE
LTE Support is reset by EPD, rr_EutranMeasCtrlFromLte:%d made FALSE
Warning! rr_ServCell=NULL
Warning! rr_ServCell=NULL
GRR_MM_LCS_FREQ_AID_REQ start =%d
GRR_MM_SRVCC_HO_CNF cause (%d)
SRVCC Req TO GSM %d
Save IRAT Param and Wait for SRRC grant
IR HO Cell creation error
IR HO Message type not valid
IR HO Empty GSM message
IR HO GSM message pointer is NULL
GRR_MM_HANDOVER_TYPE_IND (%d)
Send MM GRR_MM_CGI_HOLD_IND
Send MM GRR_MM_CGI_STOP_CNF ANR Rxlev %d
MM_GRR_CGI_STOP_REQ: STOP ANR : ANR Ongoing (%d)
Anr: RR state is NOT RR_RAT_SUSPEND_NULL!
Anr: ANR procedure was already stopped. Send confim now
MPH_SUSPEND_RAT_REQ
MPH_SUSPEND_RAT_REQ already sent. Avoid sending another Req
Anr: MM_GRR_START_CGI_IND: Sleep_Time:%d Start_Time:%ld
Anr: RR state is NOT RR_RAT_SUSPEND_NULL!
Anr Error Waiting for SUSPEND_CNF
BckGrndMode Anr/BPLMN:Error: Unexpected Error!
BckGrndMode Anr/BPLMN:Error:!Invalid BPLMN State
Anr Sleep_Time (%d)
BckGrndMode Anr/BPLMN: Sleep_Time Less than %d: Not enough
BckGrndMode Anr/BPLMN:Error: Unexpected Error!
CS Signalling Start, This ILM is not used
rr_GrrStartDsSignaling: Signaling Type %d, rr_DsdsNasSignalingOngoing[StackId] : %x
PS/IMS NAS SIG is triggered from MM
PS Signalling start, Resume RLC
CS Signalling Start, This ILM is not used
rr_GrrStopDsSignaling: typeofproc %d, rr_DsdsNasSignalingOngoing : %x
CS Signalling Stop, ILM is not used
Moving SRRC state to PS DATA after PS NAS SIG Completion
SIG STOP received in rr_State(%d)
Suspend RLC/MAC, NAS signaling is ended
SIG END received in Idle State
rr_GrrHandlePsSupportInd: PsSupported: %d
rr_GrrHandlePsSupportInd: PsSupported: %d
PS Service Disabled, Suspend RLC/MAC
Invalid Case: PS Support True came when GRR already on C-Tran mode
PS Service (%d) received in RR State (%d) rr_RlcSuspensionState (%d)
Resume RLC after DSDS Suspend
rr_StartQrbProcedure (bForced(%d))
QRB: Pending! IRAT measurement is ongoing in L1
QRB: Pending! RLC suspension is ongoing
QRB: Pending! RLC suspension is triggered
QRB: Reject! RLC suspension is failed
QRB: Reject! IRAT measurement is ongoing in L1
QRB: Dtm release is ongoing %d
QRB: Reject! QRB START recieved in invalid state %d
rr_StopQrbProcedure
QRB: QRB STOP recieved in invalid state %d
QRB: GRR_MM_QRB_MODE_IND [Mode(%d)/0:STOP,1:START,2:FORCED], [QrbState(%d)/0:STOP,1:START,else:PENDING], [TargetRat: %d]
QRB: Start!
QRB: Start! Forced!
QRB: Unexpected QrbMode(%d)
QRB: Ignore! QRB procedure is ongoing
QRB: Ignore! QRB procedure is pending
QRB: Unexpected QrbState(%d)
QRB: Ignore! QRB procedure is not running
QRB: Stop!
QRB: Stop! QRB procedure is pending
QRB: Unexpected QrbState(%d)
QRB: Unexpected QrbMode(%d)
QRB: Send GRR_MM_QRB_ABORT_IND(QrbState %d)
QRB: rr_QrbEutranSacnStatus (%d)
QRB: Not initiated
GRR_MM_UPDATE_DUPLEX_MODE_IND(%d->%d)
GRR_MM_POWER_OFF_IND
Invalid Band in function: rr_SendMmSupportBandListInd
Send GRR_MM_SUPPORT_BAND_LIST_IND(%d %d)
[CandSrch] rr_SemRecCandRplmnScanRsp: Result(%d)
[CandSrch] rr_SendCandRplmnScanReq rr_State(%d)
[CandSrch] GuardT(%d), PeriodicT(%d), NAS Reg(%d) rr_state(%d)
[CandSrch] NeedSI2Q(%d), RxSI2Q(%d), EPD(%d) Earfcn cnt(%d)
[CandSrch] Abort: EPD:%d
[CandSrch] Abort: GRR_MM_DRX_UPD_REQ in invalid state, IdleReqState:%d
[CandSrch] Abort: PLMN:Error:NonDrx CsNonDrx (%d) PsNonDrx(%d) rr_NonDrxTimInProg(%d) GmmAttachInProg(%d) AccInProg(%d) DlTbfProc(%d)
[CandSrch] Abort: rr_InterRatStatus = %d
rr_ResumedForCsfbCall set, RPLMN SCAN not required
[CandSrch] No 4G Info in Si2Q Complete Set..
[CandSrch] 4G Info Present in Si2Q Complete Set.. Reset timers
GRR_MM_BATT_CAPACITY_SET_REQ battCapacity = %d
EutranMeasCtrlFromLte:%d rr_UtranCapaCtrlFromNas:%d GsmDisabled:%d
candidateCellInfo afcPdm(%d)
candidateCellInfo[%d] band(%d) arfcn(%d) bsic(%d) fn(%d) qb(%d) net_fn(%d)
HO cell found in candidateCellInfo[%d], put it in MPH_MULTICTX_REQ
SRVCC HO from LTE Arfcn:%d, rr_BandInd:%d, rr_band_type:%s
IR HO Inconsistant BANDs
AfterTimeHopStatus(0x%x)/ BeforeTimeHopStatus(0x%x)
Ciphering Change on new channel
Non Synch Handover
Synch Handover
Pseudo Synch Handover
RTD = %d
Pre Synch Handover
SYNC with VCG
IR HO Message error
IR HO Hopping list error
IR HO Cell creation error
