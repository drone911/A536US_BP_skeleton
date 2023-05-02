Init begin
Init end
Re-mapping init begin init will be called
Re-mapping init end
Shut down
Reset
TxInterruptT4a %d, TxInterrupt4a %d, TxInterruptT4b %d, TxInterrupt4b %d
RACH can be interrupted
RACH cannot be interrupted
Retrieve MeasId %i details from DB (TransactId %i)
Removing meas
Adding new or modifying existing meas
All TrChs in meas object
Looking for DCHs mapped
Looking if RACH mapped
Selected TrChs in meas object
Do (RACH 0 DCH 1 E-DCH 2 USCH 3:%d) measurements
(RACH 0 DCH 1 E-DCH 2 USCH 3:%d) meas
(RACH 0 DCH 1 E-DCH 2 USCH 3:%d) Inc PendingTimeT4a %i
(RACH 0 DCH 1 E-DCH 2 USCH 3:%d) Inc PendingTimeT4b %i
(RACH 0 DCH 1 E-DCH 2 USCH 3:%d) Inc TxInterruptT4a %i %i
(RACH 0 DCH 1 E-DCH 2 USCH 3:%d) Inc TxInterruptT4b %i %i
(RACH 0 DCH 1 E-DCH 2 USCH 3:%d) TotalBO %i
Includes event trigger and applies to specific TrCh
Includes event trigger and applies to all TrCh
No transport channels listed!
Doesn't include event trigger and thus applies to all TrCh
Adding meas for DCH (RACH 0 DCH 1 E-DCH 2 USCH 3:%d) %d
WARNING: TrChMeasInfoTail->Next is NULL
WARNING: TrChMeasInfoTail or TrChMeasInfoHead is NULL
Copying MeasParams, Mode %i, ReportingInt %i
UpperThreshold set %i
LowerThreshold set %i
TimeToTrigger4a set %i
PendingTime4a set %i, PendingTimeT4a set %i
TxInterrupt4a set %i
TimeToTrigger4b set %i
PendingTime4b set %i, PendingTimeT4b set %i
TxInterrupt4b set %i
Setting up for E-DCH TVM (NO 0 YES 1: %i) MeasId %i
WARNING: Receive RemoveRB(RbId %d) and MeasurementConfig at the same time
RB %i LC %i mapped to TrCh (non-TM): Finally storing in RbMeas structure E-DCH TVM: (NO 0 YES 1: %i)
MeasId %i, Rb %i, LC %i
RlcBuffPlMeas %i, AveOfRlcBuffPlMeas %i, AveTimeInt %i, VarOfRlcBuffPlMeas %i
RB %i LC %i mapped to TrCh (non-TM) but no action
WARNING: RbMeasDataTail->Next is NULL
WARNING: RbMeasDataTail is NULL
Reset Meas list
Reset RbMeas list
(RACH 0 DCH 1 E-DCH 2 USCH 3:%d) Timer check for periodical tests: ReportingIntCtr: %d ReportingInt / (gMinTtiIndex * 10): %d
(RACH 0 DCH 1 E-DCH 2 USCH 3:%d) Do periodical test
(RACH 0 DCH 1 E-DCH 2 USCH 3:%d) Suppressing periodical test
(RACH 0 DCH 1 E-DCH 2 USCH 3:%d) Do trigger test
(Periodical 0 or Triggered 1:%d)Test MeasInd, MeasId %i (-1!), UlTrChType %i, UlTrChId %i
(RACH 0 DCH 1 E-DCH 2 USCH 3:%d) Trigger test
(RACH 0 DCH 1 E-DCH 2 USCH 3:%d) %x Test, Bo %i, Thresh %i, Trigger %i, PendingTime %i, TimeToTrigger %i
..., ThresValid %i, PendingTimeT %i TimeToTriggerT %i
(RACH 0 DCH 1 E-DCH 2 USCH 3:%d) Trigger %x BuffPl Report %i, RB %i
(RACH 0 DCH 1 E-DCH 2 USCH 3:%d) Trigger %x AveOfBuffPl Report %i, RB %i
(RACH 0 DCH 1 E-DCH 2 USCH 3:%d) Trigger %x VarOfBuffPl Report %i, RB %i
(RACH 0 DCH 1 E-DCH 2 USCH 3:%d) Report %x!
Sending 4a report to U-RRC
Sending 4b report to U-RRC
umac_tv_meas_SendOutReport: Null pointer, PrimHandle
(RACH 0 DCH 1 E-DCH 2 USCH 3:%d) Periodical test
(RACH 0 DCH 1 E-DCH 2 USCH 3:%d) MeasId %i, RbId %i, BuffPlPres %i, BuffPl %i, AveBuffPlPres %i, AveBuffPl %i,
... VarBuffPlPres %i, VarBuffPl %i
Sending periodical report to U-RRC
(%i) RB %i, LC ?, U-RLC BO = %i
(%i) RB %i, LC ?, U-RLC BO = %i
RB %i, LC %i, Calc AveOfRlcBuffPl %i
RB %i, LC %i, Calc VarOfRlcBuffPl %i
