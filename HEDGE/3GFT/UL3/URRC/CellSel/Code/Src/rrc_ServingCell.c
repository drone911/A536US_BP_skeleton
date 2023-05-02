ERROR creating TPeriodicInterFReselMeas Timer
ERROR unable to register for CnxMgr state change notification!
ERROR creating TBcchModification Timer
ERROR deleting TBcchModification timer
ERROR deleting TPeriodicInterFReselMeas timer
ERROR stopping TBcchModification Timer
ServingCell_CommonChannelChange Barred=%d S5=%d S6=%d S11=%d S12=%d
Invalid BandId of ServingCell (%d)
ServingFreq %d: SirMeasured %d (SirStored %d - BandOffset(%d))
PeriodicInterFreqCellResel is disabled for CS
TPeriodicInterFReselMeasExpired & ImmediateInterFReselRequired -> Delay PeriodicInterFResel
ERROR starting TPeriodicInterFReselMeas timer
TPeriodicInterFReselMeas timer started (TmId=%d) : %i sec
ERROR starting TPeriodicInterFReselMeas timer
TPeriodicInterFReselMeas timer started (TmId=%d) : %i sec
Cannot find Mib. Maybe CSFB case where Serving cell is empty. Ignore SysInfoChange
Notified of SysInfoChange, CurrentMibTag: %i, NewMibValueTag: %i
BCCH Modfication Info present: CurrentSFN: %d, SFNDiff: %d, BcchModificationTime: %d
ERROR stopping TBcchModification Timer
ERROR starting TBcchModification timer
TBcchModification timer started (TmId=%d) : %i ms for (UARFCN%i/PSC%i)
Class:ServingCell: Unrequested SibId (%i) received
Class:ServingCell: Unrequested SibId (%i) received
SendServCellInfoInd : Serv_BandId(%d), Serving_Uarfcn(%d), PSC(%d), RAC(%d), LAC(%d)
Wrong UARFCN(%d), BandId(%d) were detected so it won't be updated to SIPC
ERROR Illegal State
ERROR Illegal State
BchReleased at Status %d
ServingCell: ERROR Illegal State
ServingCell: ERROR Illegal State
SIB 15 present
SIB 15 not present
SIB 15.1 present
SIB 15.2 present
SIB 15.3 present
Clear PeriodicInterFReselMeas
PeriodicInterFReselMeasCount is already zero
Ignore SIB19 read request during CellSelection in Progress
SIB19 Subscription Not Required (SIB19 Sched %d, SIB19 %d)
UpdateSib19 Not Available (state %d)
neighbourBandIds = %d
[PConflict] PchConflictInd
PeriodicInterFreqCellResel is disabled for CS
ERROR stopping TPeriodicInterFReselMeas Timer
ERROR starting TPeriodicInterFReselMeas timer
TPeriodicInterFReselMeas timer started (TmId=%d) : %i sec
ERROR starting TPeriodicInterFReselMeas timer
TPeriodicInterFReselMeas timer started (TmId=%d) : %i sec
CellToAssim is NULL
Reselected to new Serving Cell (%i,%i)
Reselected to new Serving Cell DL UARFCN %i, CPICH %i
Selected new Serving Cell (%i,%i)
Selected new Serving Cell DL UARFCN %i, CPICH %i
CellToAssim->CellSelReselInfoPtr is NULL
ERROR : Cannot register CallBack to CellReselecter_p->CellReselNotificnSubsr for ServingCell
ERROR Illegal State
rrc_ServingCell_AssimilateCandidate: We don't need to update VisitedCsgList for same cell
LastSourCellInfo present: RatType(%d) Arfcn(%d) PhyCellId(%d) CellId(%d)
LastSourCellInfo from OtherRat is present: RatType(%d) Arfcn(%d) PhyCellId(%d) CellId(%d)
AssimilatedCell is already stored ActiveCsgList in VisitedCsgList
Cannot get SourceCellInfo
AssimilateCandidate => Old (Uarfcn %d, Cpich%d), Current (Uarfcn %d, Cpich %d)
Not use the sys info container to update the ServingCellSysInfoCache
OOS in RRC Cnx Establishing : only need Idle mode SIBs
CellReselection parameters: IsHcsInUse (%s)
Null pointer: Sib11bis
HOLD ON SIB11bis as SIB 11 is not present
SIB19 Scheduled %d
ERROR MibPtr is NULL
No SIB19Ptr W2L_Threshold Reset
[DM Update] SIB3 CellId(0x%X)
[DM Update] CN DrxCycleLengthCoef(%d)
LTE Supported
ProcessLTERatInfo: No LTE Rat Info(SIB19) in ServingCell_p 3G Cell -> IsLTERatInfoIncluded(%d)
Processing SIB 1
SIB 1 process constants/timers.
PrivProcessSib1: IdleModeIE is NULL
PrivProcessSib1: IdleModeIE is NULL
ProcessCellSelReselInfo: ASN.1 Value - Non HCS Mode - Ncr(%d) TcrMax(%d) TcrMaxHyst(%d)
ProcessCellSelReselInfo: ASN.1 Value TReselectionSPch(%d) TReselSFach(%d)
CellReselection parameters: QualityMeasure (%s), TReselection (%i)
>>> access control class : %d
SelPlmnId PLMN Id: MCC(%d%d%d) MNC(%d%d)
MIBPlmnId PLMN Id: MCC(%d%d%d) MNC(%d%d)
rrc_MIB_IsMultiplePLMNPresent is FALSE
rrc_MIB_IsMultiplePLMNPresent is TRUE
[DSAC]Selected PLMN id is equal to PLMN id in MIB (with multi PLMN list)
[DSAC]Selected PLMN id is equal to PLMN id in Multiple PLMN list
[DSAC]ProcessCellSelReselInfoCurrent Dsac SIB VAlue %d,Previous Dsac SIB value is %d
[DSAC]ProcessCellSelReselInfoDomain Access Class is present %d
[DSAC]ProcessCellSelReselInfoPsDomainAccessRestriction %d CsDomainAccessRestriction = %d
[DSAC]ProcessCellSelReselInfoDomain Access Class is NOT present %d
[PPAC]ProcessCellSelReselInfoLoc/Reg barred for Domain %d
[PPAC]ProcessCellSelReselInfoPagingPermission barred for Domain %d
[PPAC]ProcessCellSelReselInfoNo Domain barred for Loc/Reg or Paging
[PPAC]ProcessCellSelReselInfoCurrent PPAC Value %d,Previous PPAC value is %d
ProcessCellSelReselInfo:ServingCell Qrxlevmin(%d) = Qrxlevmin(%d) + DeltaQrxlevmin(%d)
ServingCell parameters: MaxAllowedUlTxPower (%i) dBm, Qrxlevmin (%i) dBm, Qqualmin (%i) dB
ProcessCellSelReselInfo:ServingCell Qhcs(%d) = Qhcs(%d) + DeltaQhcs(%d)
ServingCell HcsPrio set to %d
ServingCell: ERROR Illegal State
ServingCell: Clear ForcedSib11Sib12Skipping
NumSysInfoContainer == 0
GenMsg(GenerateEstablishingRrcCnx) is NULL
GenMsg(GenerateSIB7Received) is NULL
ERROR Illegal State
ServingCell: RRC CNX in progress, SIB7 requested & EarlySIbReading in progress => Abort Early SIB Reading
ServingCell::ReadSib: GenMsg is NULL
SIB 12 read from SCellSysInfoCache
SIB12 present in SCellSysInfoCache
SIB12 not present in SCellSysInfoCache
copy SIB12 from the SCellSysInfoCache
ERROR Illegal State
GenMsg is NULL
copy in the SCellSysInfoCache : %d
Critical : No sib in CampedSysInfoContainer : %d
Class:ServingCell: SibId (%i) for unknown Freq: %i, Cpich: %i
copy SIB7 in the SCellSysInfoCache
GenMsg(GenerateSIB7Received) is NULL
Critical : No SIB7 in CampedSysInfoContainer
ServingCell: RRC CNX in progress, SIB7 requested & EarlySIbReading in progress => Abort Early SIB Reading
ServingCell::ReadSib: GenMsg is NULL
Ignore SIB19 reading in Cnx Establishing
Ignore SIB18 reading in Cnx Establishing
ERROR Illegal State
WARNING: ReadSib request Sib: %s not actioned as it is not valid in the current state
WARNING: ReadSib request Sib: %s not actioned as it is not valid in the current state
AwaitingSibReadRequest_NotifySysInfoChange: Ignore this during RRC Connection Req in Progress
AwaitingSibReadRequest_NotifySysInfoChange: Ignore this cause of mismatchbetween TBcchModification_Uarfcn%i PSC%i <-> Current Uarfcn%i Psc%i
AwaitingSibReadRequest_NotifySysInfoChange: Ignore this during CellSelection in Progress
AwaitingSibReadRequest_NotifySysInfoChange: Ignore this in Cell_DCH
PrivSubscribeToSibs: Unable to Generate AgpsSibReadStatus Message
PrivSubscribeToSibs: his->UpdateAgpsSibsRecvd is not Set
ServingCell: ERROR Illegal State
set Deferred Meas. Status in Serving Cell
Clear subordinated SIB with SIB%d
ERROR Illegal State
ServingCell: ERROR Illegal State
ReadingValidSibs_BchReadError: GenMsg is NULL
[ReadingValidSibs] CancelSibSubscription already in progress (WaitingForUpdatedSibs flag %d)
ERROR Illegal State
Connected Mode SIBs are taken from SCellSysInfoCache
No outstanding SIB subscription
ERROR Illegal State
copy SIB11 from the SCellSysInfoCache
SIB11 not present in SCellSysInfoCache
copy SIB12 from the SCellSysInfoCache
SIB12 not present in SCellSysInfoCache
copy SIB11bis from the SCellSysInfoCache
SIB11bis not present in SCellSysInfoCache
copy SIB4 from the SCellSysInfoCache
SIB4 not present in SCellSysInfoCache
copy SIB6 from the SCellSysInfoCache
SIB6 not present in SCellSysInfoCache
ReadingValidSibs_ReadAgpsSibs
SIB15 Not Scheduled
SIB15.1 Scheduled
SIB15.1 Not Scheduled
SIB15.2 Scheduled
SIB15.2 Not Scheduled
SIB15.3 Scheduled
SIB15.2 Not Scheduled
No outstanding SIB subscription
ERROR Illegal State
AGPS Sibs not scheduled. Inform MeasController
Error creating AgpsSibReadStatus Message
GenMsg(GenerateEstablishingRrcCnx) is NULL
copy SIB7 in the SCellSysInfoCache
Critical : No SIB7 in CampedSysInfoContainer
copy SIB12 in the SCellSysInfoCache
No SIB12 in CampedSysInfoContainer. Maybe not scheduled
GenMsg(GenerateSIB7Received) is NULL
Cancel Current Subscription & Wait in Same State for release
[ReadingValidSibs] CancelSibSubscription already in progress (WaitingForUpdatedSibs flag %d)
ERROR Illegal State
ServingCell: RRC CNX in progress, SIB7 requested & EarlySIbReading in progress => Abort Early SIB Reading
ServingCell::ReadSib: GenMsg is NULL
Ignore SIB19 reading in Cnx Establishing
Ignore SIB7 reading that is already requested
isResubscribReq = %d
ReadingValidSibs_NotifySysInfoChange: Ignore this during RRC Connection Req in Progress
ReadingValidSibs_NotifySysInfoChange: Ignore this cause of mismatchbetween TBcchModification_Uarfcn%i PSC%i <-> Current Uarfcn%i Psc%i
ServingCell_p->common.NewMibPtr is NULL
MIB value tag=%d
Received new Mib tag <%i> which matches that received in SysInfo Change notification. Current Mib tag <%i>
Received new Mib tag <%i> which not matches that received in SysInfo Change notification(%d). Current Mib tag <%i>
Received new Mib tag <%i>different to SysInfo Change notification <%i>. Current Mib tag <%i>
Received new Mib tag <%i>. Current Mib tag <%i>
Old PLMN Id is part of the Shared Network
Shared PLMN rejected due to PlmnId not matching Target PlmnId
None of the new PLMNs in the Shared list are selectable, triggering PLMN Search internally
New PLMN Id from New MIB is Different from Old PLMN Id
New PLMNs in MIB is not selectable, triggering PLMN Search internally
ServingCell_p->common.NewMibPtr is NULL
Resubscribing to Mib. Resubscripton number: %i Maximum number of resubscriptions: %i
Maximum number of Mib resubscriptions: %i has been reached - stopping Mib resubscriptions
Ptr: ServingCell_p->common.NewMibPtr == NULL
ServingCell: ERROR Illegal State
Creating entry and saving SIBs after VT Change successful
ServingCell: ERROR Illegal State
Creating entry and saving SIBs after VT Change successful
All Agps Sibs received. Send AgpsSibReadStatus to Meascontroller
PrivSubscribeToSibs: Unable to Generate AgpsSibReadStatus Message
NumMibResubscriptions %d
ServingCell: ERROR Illegal State
GenMsg is NULL
Sib Received is %d and Ignored
Sib Received is %d
Sib Received is %d
Class:ServingCell: Unexpected Extension SibId (%i)
Class:ServingCell: Unexpected SibId (%i)
GenMsg is NULL
GenMsg is NULL
ProcessCellSelReselInfoCurrent Dsac SIB VAlue %d,Previous Dsac SIB value is %d
PrivProcessSib3or4Current PPAC Value %d,Previous PPAC value is %d
HOLD ON SIB11bis as SIB 11 is not present
ReadingValidSibs_BchReadError: GenMsg is NULL
ServingCell received Bch Read Error whilst waiting for Sib7 - informing CnxMgr
ServingCell received Bch Read Error and not waiting for Sib7 so starting Out Of Service processing
PrivSubscribeToSibs: Unable to Generate AgpsSibReadStatus Message
PrivSubscribeToSibs: his->UpdateAgpsSibsRecvd is not Set
ERROR Illegal State
[ReadingValidSibs] CancelSibSubscription already in progress (WaitingForUpdatedSibs flag %d)
Clear subordinated SIB with SIB%d
ServingCell: ERROR Illegal State
GenMsg is NULL
[ReadingValidSibs] CancelSibSubscription already in progress (WaitingForUpdatedSibs flag %d)
ServingCell: ERROR Illegal State
ServingCell: ERROR Illegal State
Subscription Cancelled while Waiting in Same State for release
SIB 12 read from SCellSysInfoCache
SIB12 present in SCellSysInfoCache
SIB12 not present in SCellSysInfoCache
copy SIB12 from the SCellSysInfoCache
ERROR Illegal State
[ReadingValidSibs] CancelSibSubscription already in progress (WaitingForUpdatedSibs flag %d)
ERROR Illegal State
Connected Mode SIBs are taken from SCellSysInfoCache
No outstanding SIB subscription
[ReadingValidSibs] CancelSibSubscription already in progress (WaitingForUpdatedSibs flag %d)
ERROR Illegal State
ReadingValidSibs_ReadAgpsSibs
SIB15 Scheduled
SIB15 Not Scheduled
SIB15.1 Scheduled
SIB15.1 Not Scheduled
SIB15.2 Scheduled
SIB15.2 Not Scheduled
SIB15.3 Scheduled
SIB15.2 Not Scheduled
No outstanding SIB subscription
ERROR Illegal State
AGPS Sibs not scheduled. Inform MeasController
Error creating AgpsSibReadStatus Message
>> Clear subordinated SIB with SIB%d
ServingCell: ERROR Illegal State
ServingCell: ERROR Illegal State
Class:ServingCell: %s, Id(%i) is no longer scheduled
Class:ServingCell: %s, Id(%i) tag has changed
ServingCell: ERROR Illegal State
ServingCell: ERROR Illegal State
ServingCell: ERROR Illegal State
ERROR Illegal State
Invalid CnxMgr Pending state: CellDch - using CellFach as the pending state instead
[ProcessUtraPrioInfo] Error : SCSelInfoInstId is NULL..!!
[ProcessUtraPrioInfo] SYS_INFO_PRIORITY selected. ServPriority(%d) was from SIB19
[ProcessUtraPrioInfo] DEDICATED_PRIORITY / ServPriority(%d) was from PriorityInfoList
DEDICATED_PRIORITY / Error to get Priority from UARFCN(%d) of PriorityInfoList. So Clearing the ServingPriority(%d)
ERROR stopping TBcchModification Timer
PeriodicInterFreqCellResel is disabled for CS
Class:ServingCell:Unexpected State Change Notification
ERROR stopping TPeriodicInterFReselMeas Timer
ERROR starting TPeriodicInterFReselMeas timer
TPeriodicInterFReselMeas timer started (TmId=%d) : %i sec
ERROR starting TPeriodicInterFReselMeas timer
TPeriodicInterFReselMeas timer started (TmId=%d) : %i sec
CellReselection parameters: IsHcsInUse (%s)
[NotifyCellReselInProgress] ERROR: GenMsg is returned as NULL
FTM IntraFreqCells uarfcn = %d, cpich = %d, rscp = %d, ecNo = %d
FTM IntraFreqCells uarfcn = %d, cpich = %d, rscp = %d, ecNo = %d
FTM :: NeighbCellINfo NON_DCH state numIntraFreqCells %d numInterFreqCells %d
FTM :: neighCellArrIter %d
