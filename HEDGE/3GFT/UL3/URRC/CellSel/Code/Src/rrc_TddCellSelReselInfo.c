rrc_TddCellSelReselInfo_GetR:PccpchRscp RSCP(%d) Rvalue(%d)
rrc_TddCellSelReselInfo_GetR:PccpchRscp RSCP(%d)
rrc_TddCellSelReselInfo_GetH:HValue(%i)
rrc_TddCellSelReselInfo_GetH:TddCellSelReselInfo_p->PccpchRscp = %d TddCellSelReselInfo_p->DeltaPccpchRscp = %d
rrc_TddCellSelReselInfo_GetH:MAP_PCCPCHRSCP(TddCellSelReselInfo_p->PccpchRscp+TddCellSelReselInfo_p->DeltaPccpchRscp) = %d
rrc_TddCellSelReselInfo_GetH:MAP_PCCPCHRSCP(TddCellSelReselInfo_p->common.Qhcs) = %d TddCellSelReselInfo_p->common.Qhcs = %d
rrc_TddCellSelReselInfo_GetH:TddCellSelReselInfo_p->common.TempOffset1 = %d TOn = %d, Ln = %d, Tn = %d
rrc_TddCellSelReselInfo_GetH:HValueP(%i)
rrc_TddCellSelReselInfo_GetH:TddCellSelReselInfo_p->PccpchRscp = %d TddCellSelReselInfo_p->DeltaPccpchRscp = %d
rrc_TddCellSelReselInfo_GetH:MAP_PCCPCHRSCP(TddCellSelReselInfo_p->PccpchRscp+TddCellSelReselInfo_p->DeltaPccpchRscp) = %d
rrc_TddCellSelReselInfo_GetH:MAP_PCCPCHRSCP(TddCellSelReselInfo_p->common.Qhcs) = %d TddCellSelReselInfo_p->common.Qhcs = %d
rrc_TddCellSelReselInfo_GetH:TddCellSelReselInfo_p->common.TempOffset1 = %d TOn = %d, Ln = %d, Tn = %d
rrc_TddCellSelReselInfo_RefreshTnTimerStatus: Tn timer not started for the ServingCell =%d
rrc_TddCellSelReselInfo_RefreshTnTimerStatus: TnTimerId =%d
Starting Tn timer for Tdd Cell:(%i,%i) HcsPrioN(%i) != HcsPrioS(%i) and QMeasn(%i) >= Qhcsn(%i)
Stopping Tn timer for Tdd Cell:(%i,%i) HcsPrioN(%i) != HcsPrioS(%i) and QMeasn(%i) >= Qhcsn(%i)
Starting Tn timer for Tdd Cell:(%i,%i) HcsPrioN(%i) == HcsPrioS(%i) and QMeasn(%i) > QMeasS(%i) + Qoffsetsn(%i)
Stopping Tn timer for Tdd Cell:(%i,%i) HcsPrioN(%i) == HcsPrioS(%i) and QMeasn(%i) <= QMeasS(%i) + Qoffsetsn(%i)
Started Tn timer for Tdd Cell:(%i,%i)
Tn timer for Tdd Cell:(%i,%i) is not started as PenaltyTime is ZERO
Stopped Tn timer for Tdd Cell:(%i,%i)
Cell (%i,%i) : Srxlev : %i, RSCP : %i dBm, PCompensation : %i dB
ERROR: Already actioning a request
ERROR Illegal State
ERROR: Already actioning a request
%s: Prepare subscription to MIB, Id(%i)
ERROR Illegal State
ERROR: Already actioning a request
ERROR Illegal State
%s: Prepare subscription to MIB, Id(%i)
ERROR Illegal State
[TddCellSelReselInfo] Created (CellParamId %d, Freq %d)
Invalid InterFreqCell frequency value (%i)
Invalid InterFreqCell frequency value (%i)
TddNetworkCacheInst is NULL (%i)
{%i} Cell (Freq: %i, Cpich: %i): Rn (Rscp) = -infinity, PENALTY_TIMEn = %i, Tn = %i
{%i} Cell (Freq: %i, Cpich: %i): Rn(%i) = QMeas(%i) dBm - QOffset1(%i) dB - ( TOn(%i) * ( 1 - Ln(0) ) )
{%i} Cell (Freq: %i, Cpich: %i): Rn(%i) = QMeas(%i) dBm - QOffset1(%i) dB - ( TOn(%i) * ( 1 - Ln(1) ) )
{%i} Cell (Freq: %i, Cpich: %i): Rn(%i) = QMeas(%i) dBm - QOffset1(%i) dB
{%i} Cell (Freq: %i, cellParamId: %i): Rn (Rscp) = %i
{%i} Cell (Freq: %i, cellParamId: %i): HCS_PRIOn = %i, Hn (Rscp) = -infinity, PENALTY_TIMEn = %i, Tn = %i
{%i} Cell (Freq: %i, cellParamId: %i): HCS_PRIOn = %i, Hn (Rscp) = %i
ERROR : MibPtr is NULL, so MIB is being subscribed with SIB3
ERROR Illegal AnrSubscriptionType(%d), just make it default subscription type
ERROR Illegal State
ERROR Illegal State
[URRC_ANR]: NotActive_AbortSibRead
MibId is Ok in ReadingMib_RecvMib
MibId is NULL in ReadingMib_RecvMib
ERROR Illegal State
Received Rscp = %d, Snr = %i
Received DeltaRscp = %i.
ERROR Illegal State
[rrc_TddFrequency::AwaitingMeasurementInd_RecvCellSelMeasCnf] INFO - Negative confirmation
[rrc_TddFrequency::AwaitingMeasurementInd_RecvCellSelMeasCnf] INFO - confirmation
ReadingValidSibs_RecvMib : MIB V-tag changed, give-up this cell
ReadingValidSibs_RecvMib : MIB V-tag changed, Nothing to do
[URRC BCH in DCH]: ReadingValidSibs_BchReadError received
ReadingValidSibs_BchReadError is ignored during SibReadingPause
ReadingValidSibs_RecvSib SIB1 received
ReadingValidSibs_RecvSib SIB3 received
ReadingValidSibs_RecvSib Unexpected SibId (%i)
ReadingValidSibs_RecvSib - All Necessary SIBs received
ReadingValidSibs_RecvSib:Calling SIB subscription Cancellation in ReadingSchedulingBlock_RecvMib after successfull SIB read
ReadingValidSibs_RecvSib: Cancel SIB(%d)
[URRC BCH in DCH]: ProcessSib1 called
[URRC BCH in DCH]: ProcessSib1 CS Domain
[URRC BCH in DCH]: ProcessSib1 PS Domain
[URRC BCH in DCH]: ProcessSib1 IsLacPresent:%d, LacId:%d, IsRacPresent:%d, RacId:%d
ProcessSib3 called CGI:%d
rrc_TddCellSelReselInfo_NecessarySibsRecved: Waiting for the NecessarySibsRecved Sibs [%d], Remaining SibCount %d
[URRC BCH in DCH]: ReadingValidSibs_AbortSibRead
[URRC BCH in DCH]: ERROR Illegal State in ReadingValidSibs_AbortSibRead
ReadingValidSibs_SibSubscriptionCanceled : SibReadingResult(%d) received
ReadingValidSibs_SibSubscriptionCanceled : unknown SibReadingResult %d received
[URRC BCH in DCH]: AbortingSibRead_SibSubscriptionCanceled received
ReadingSchedulingBlock_RecvMib Num_SharedPLMNs:%d
ReadingSchedulingBlock_RecvMib entered PlmnId: 0x%02X, 0x%02X, 0x%02X
ReadingSchedulingBlock_RecvMib Cell Not Shared Read PlmnId: 0x%02X, 0x%02X, 0x%02X to head of the list
ReadingSchedulingBlock_RecvMib:Calling SIB subscription Cancellation in ReadingSchedulingBlock_RecvMib after successfull SIB read
ReadingSchedulingBlock_RecvMib: Cancel SIB(%d)
ERROR Illegal State in ReadingSchedulingBlock_RecvMib
ERROR Illegal State in ReadingSchedulingBlock_RecvMib
ReadingSchedulingBlock_RecvMib : MibId is NULL in ReadingValidSibs_RecvMib
UmtsCellSelectionMeasurement: Config message add cell:(%i,%i)
Unexpected Sib with Id (%i) received
[URRC_ANR]: SysInfoReadCallback MIB received
Msg is NULL. Cannot Signal RecvSib to TddCellSelReselInfo
[URRC_ANR]: SysInfoReadCallback SIB received
[URRC_ANR]: SysInfoReadCallback SYSINFOMGR_BCHREADERROR received
Msg is NULL. Cannot Signal AbortDetection to TddCellSelReselInfo
[URRC_ANR]: SysInfoReadCallback SYSINFOMGR_SIBDECODEERROR received
Msg is NULL. Cannot Signal AbortDetection to TddCellSelReselInfo
