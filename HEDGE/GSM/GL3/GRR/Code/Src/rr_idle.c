Allow NCell SI to be Read
!!!SI Read In Action Doesn't Match!!!SIQ Freq(%d) Recv Freq(%d)
SI for wrong cell
PSI not SI expected
Unsolicited SCell Read
Unsolicited NCell Read
Proceeding to read only NCell SI
[##DCXO_Recovery] MPH_NO_BCCH - ARFCN:%d Cause:%d Background_Read : %d, Rxlev : %d, isRepeatBCHReqEnabled %d
MPH_NO_BCCH - ARFCN:%d Cause:%d
LTE_Meas Ongoing at GL1, Pend STOP_BCCH READ %d
ARFCN: %d CONFLICT_PACCH_TX %d, retry BCCH_READ again
LTE_Meas Ongoing at GL1, Pend SCELL BCCH READ for %d Seconds
BPLMN: Foreground NO_BCCH %d RXVD. BPLMN BCCH Can be resumed
BPLMN: NumSIReadBuffered %d: rr_BPlmnNextBcchReq-> ProcessSIRead
BPLMN: Foreground NO_BCCH %d RXVD. BPLMN RXLEV Can be resumed
Immediate Assigment Ext
Immediate Assigment Normal
Immediate Assigment Length Error %d
MPH_ERROR_IND(cause %d)
MPH_ERROR_IND received for wrong cell(ARFCN %d), rr_ServCell (%d)
Resel In Prog
!!! DSF during full CCCH listening: set rr_WaitIdleCnfForImmResel and triggered IDLE REQ to GL1 in 2G/2G
MPH_ERROR_IND with invalid cause %d
Need SI1
rr_HandleIdleCnfPreEmption Error # Waiting for IDLE CNF
SCell is Handicapped! Trigger Resel
rr_ReselHoldforIdleCnf - Start RESEL
Resel or cell selection procedures is not ongoing
rr_WaitIdleCnfForImmResel %d - Start IMM RESEL
Invalid rr_WaitIdleCnfForImmResel cause
Sent RR_LBS_CELL_CHANGE_IND to LBS
LTE MRU Scan Supported : numofEarfcn(%d) rr_NumOfMRUEarfcn(%d)
Index (%d) Earfcn (%d) measBW(%d) priority(%d) ThreshEUTRANHigh (%d) ThreshEUTRANLow (%d) ThreshEUTRANQRxlevMin (%d)
Process Available Earfcn Information
L1 unable to process IDLE REQ
DL TBF is On, avoid sending IDLE REQ again
L1 reject IDLE REQ - Peer Stack ARFCN is same as requested ARFCN
MPH_START_NC_MEAS_REQ
RESEL from UTRAN Complete - IdleCnf
DTM: rr_SetDTMAccessStatusToRlc(T)
ACESS IND not sent (%d) (%d)
Needed PSI(0x%x)
No Needed PSI
GRR: MPH_[P]CCCH_IDLE_CNF
Idle Cnf received after PCCO Fail, Start RESEL to %d
First Idle SCell
QRB: Start! RLC suspension is done and in IDLE
RLC is not resumed as GPRS is OFF
Calling Process Reselection after Dedicated state
## SICell ## %d
## Ignore!! Sys Read Req for S cell Needed SI ## 0x%x
Status msg already in progresss
NCELL to be schd for BCCH %d bsic %d neededSI 0x%x
NCELL NOT schd for BCCH %d bsic %d neededSI 0x%x
#ACTUAL NCELL to be schd for BCCH %d bsic %d Rx level %d neededSI 0x%x
CCN has been initiated, no need of BcchReq
NO NCELLs to be schd for BCCH in PTM
Clear N rr_BcchReadArfcn (%d)
Clear S rr_BcchReadArfcn (%d)
Send Pening CELL Ind to MM
CSend Pening CELL Ind to MM ....... For CS Path
Earlier PendedMsgByLteMeas:%d BcchArfcn:%d StopBcchArfcn:%d
PendedMsgByLteMeas:%d BcchArfcn:%d StopBcchArfcn:%d
rr_WaitRecoveryFromDSF(%d)
Rxd MPH_NO_BCCH
MPH_NO_BCCH - ARFCN:%d Cause:%d Bckgnd %d)
ANR: Rxlev %d
BPLMN: BPlmnResultToMmPending, ignoring Msg
BPLMN:Error: Rxd MPH_NO_BCCH in not IDLE state, stop BPlmn procedure
BPLMN: L1_CAUSE_BPLMN_NOT_IN_IDLE_STATE: Stop BPLMN: L1 Cause:%d)
BPLMN:Error: BPLMN not Running, but got MPH_NO_BCCH!
BPLMN: Arfcn:%d was expected. Ignore NO_BCCH)
BPLMN: rr_BPowerMsg is NULL!)
BPLMN:Error: BCCH_READ for BPLMN failed L1_CAUSE_FN_OFFSET_CHANGE, send BCCH_READ again
BPLMN: NumSIReadBuffered %d: rr_BPlmnNextBcchReq-> ProcessSIRead
BPLMN:Error: BCCH_READ for BPLMN & PAGE READ conflict! Ignoring NO_BCCH, let BCCH_READ proceed
BPLMN: Include Retrylist due to ARFCN %d! Rxlev %d in Thresh
BPLMN: Not retry due to ARFCN %d! Rxlev %d not in Thresh
BPLMN: NumSIReadBuffered %d: rr_BPlmnNextBcchReq-> ProcessSIRead
BPLMN:Error: Unexpected Error!
***ERROR*** Debug this: NO_BCCH in WIDLE_CNF
LTE_Meas Ongoing at GL1, Pend BCCH READ %d
!!!Wrong entry in SyncCellList
DSDS L1 busy Avoid cell handicap on Cell (%d)
DSDS busy Avoid cell handicap and N2F on Cell (%d)
NO BCCH Recieved for wrong Cell (%d) , send BCCH again for (%d) sent (%d)
DSDS busy Stop Cell Resel on Cell (%d)
RLC is not resumed as GPRS is OFF
Stop BCCH READ REQ timer for cell search if running
MPH NO BCCH with DSDS error received for Arfcn (%d), Start timer to retry BCCH READ.
NO BCCH with DSDS Error is discarded
[##DCXO_Recovery] rr_SearchRedirectionFreq Called isRepeatBCHReqEnabled TRUE
[##DCXO_Recovery] Else case isRepeatBCHReqEnabled FALSE
[##DCXO_Recovery] L2G cell selec isRepeatBCHReqEnabled TRUE
[##DCXO_Recovery] L2G cell selec isRepeatBCHReqEnabled FALSE
[##DCXO_Recovery] cell selec ELSE CASE isRepeatBCHReqEnabled TRUE
[##DCXO_Recovery] cell selec ELSE CASE isRepeatBCHReqEnabled FALSE
!!! SyncErr %x on ServCell during NON DRX, set rr_WaitIdleCnfForImmResel and triggered IDLE REQ to GL1
!!! SyncErr %x on ServCell : Immed Resel
DSDS Error received: ServCell(%d), NeededSI(%x)
MPH_NO_BCCH received: Cell(%d), cause(%x)
!!! SyncErr %x on ServCell during rr_WaitSiAfterResel, SingleSim(%d)
DSDS Error received: ServCell(%d), NeededSI(%x)
DSDS Error received on Cell(%d), NeededSI(%x)
!!! SyncErr %x on ServCell : Stay on Scell
Decode Error
Extended, Request Reference 2
Extended, Request Reference 1
Normal, Request Reference 1
After time Freq Hopping
No after time CA FH failed
No after time Freq lists FH failed
After time Freq lists OK
IA_RO[0] %x Len %d
rr_use_compressed_IRAT_HO_INFO %d
IA_RO Absent
FreqLen: %d / IA_RO[%d]: %x
rr_use_compressed_IRAT_HO_INFO %d
BeforeTime FreqHop IA
No BeforeTime FreqHop
Channel Count %d
Hopping error - Number of Frequencies is 0
Channel List %d
AfterTimeHopStatus(0x%x), BeforeTimeHopStatus(0x%x)
Storing default val Channel_Information.ChanDescr for as 0xFF RequestRefNum (0x%x)
Storing default val Channel_Information.ChanDescrfor as 0xFF RequestRefNum (0x%x)
Storing default val Channel_Information.ChanDescrfor as 0xFF RequestRefNum (0x%x)
ImmASS: MPH_IMMED_ASSIGN_REQ
Hopping error
