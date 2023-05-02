rr_StoreScellPageMode: rr_ServSupp.page_mode(%d)
### IDLE CNF not received Ignore change is page mode
rr_PostCsNonDrxPeriod(%d), WAITING_FOR_SERV_SI1(StackId)(%d)
(Reorg) SYS3 & 13 --> CCCH_IDLE_REQ
(Reorg) Wait for end of PS non-DRX period
SI13 not received, but for DSDS case send CCCH_IDLE_REQ
(Reorg) SYS3 --> CCCH_IDLE_REQ
SI Msg Ignored rr_State(%d)
Near Ccch:Resel Reason(%d)
Use SIs saved in SI-DB
[GRR][FAKE] HandicapCell reason: FAKE_CELL
Pick Next Best Cell
# SI Msg on NCELL Ignored: State(%d) #
GRR:IMM_ASS ccch
GRR not proper state to handle DL TBF
SCELL Misc MsgType 0x%x Ignored!!
!***WARNING***!NCELL Misc MsgType 0x%x rxd when waiting for SI 7,8!!
BPLMN: Foreground NO_BCCH %d RXVD. BPLMN BCCH Can be resumed
BPLMN: NumSIReadBuffered %d: rr_BPlmnNextBcchReq-> ProcessSIRead
BPLMN: Foreground NO_BCCH %d RXVD. BPLMN RXLEV Can be resumed
!!NCELL Misc MsgType 0x%x Ignored!!
Rcvsd SI (%d) Send BCCH Read again
FrgrndBcchOngoing=FALSE ARFCN %d No Pending SIs %x
ARFCN %d Pending SIs %x
SBCCH_READ_PTM
NO PTM SBCCH/NBCCH sched
NBCCH_READ_PTM
FrgrndBcchOngoing=FALSE ARFCN %d No Pending SIs %x
ARFCN %d Pending SIs %x
MPH_DATA_IND for arfcn %d, Bsic %x, BackGnd = %d, curr page_mode %d, msg_type %x, TC %d
BPLMN: FG MPH_DATA_IND comes on inactive rat
BPLMN: rr_BPowerMsg is NULL!
### Serious Error rr_ServCell is NULL
rr_ServCell P(0x%02X) arfcn(%d)
Bsic %x got changed for Arfcn %d, during Cell Selection. Start SI reading fresh
Wrong SI cell being read Arfcn %d, Bsic %x
Foreground BCCH %d RXVD
BPLMN: NumSIReadBuffered %d: rr_BPlmnNextBcchReq-> ProcessSIRead
BPLMN: Foreground BCCH %d RXVD. BPLMN RXLEV Can be resumed
Message type(0x%x)
Unexpected PSI while on CCCH
During Resel Discard PBCCH
PSI Read Un-Successfull
PSI13 Recv on TrCcch:
PSI Ignored on TrCcch: MsgID(0x%x)
PSI Msg Ignored rr_State(%d)
Unexpected PSI on NCELL
PACKET_CELL_CHANGE_ORDER
PACKET_MEASUREMENT_ORDER
PACKET_CELL_CHANGE_CONTINUE
PACKET_NEIGHBOUR_CELL_DATA
PACKET_SERVING_CELL_DATA
# MISC Msg on SCELL Ignored #
# MISC Msg on NCELL Ignored!! -> msg_type(0x%x) #
Handle MAC_GRR_DATA_IND
unexpected ARFCN(%d) for MAC_GRR_DATA_IND
(CIQ)##DL Message - In HandleMacGrrDataInd, TID : 0x%x, PD : %d, MSG_Type : 0x%x, CHANNEL : %d, Message : %d
MAC_GRR_DATA_IND Ignored!! Msg:0x%x, ChnType:%d
MAC_GRR_DATA_IND during RACH (Msg:0x%x, ChnType:%d)
MAC_GRR_DATA_IND Ignored - Wrong Channel!! Msg:0x%x, ChnType:%d
MAC_GRR_DATA_IND Ignored - Not the Serving Cell!
MAC_GRR_DATA_IND Wrong Arfcn(%d)
MAC_GRR_DATA_IND Wrong L1_Cause(%d)
OngoingBandScan:%s Arfcn%d Band:%s
rr_UpdateBplmnArfcnListToMM
Count:%d Arfcn:%d BandType:%s
BPLMN: Ignored MPH_DATA_IND with arfcn %d! rr_CheckSysInfLength, msg_type(0x%x)
BPLMN: BcellCid(%x,%x)
BPLMN: BcellLai(%x,%x,%x,%x,%x)
BPLMN: SI 3/4 acquired, MaxArfcnTry(%d)
BPLMN:Error: Unnecessary SI with msg_type %d acquired
BPLMN: NumSIReadBuffered %d: rr_BPlmnNextBcchReq-> ProcessSIRead
BPLMN: +Jumping! Skip FirstIndex %d
BPLMN: +Jumping! For Selection Index %d Arfcn %d Rxlev %d
BPLMN: +Jumping! AddRetryList Last %d Current %d - SelIndex %d MaxRxlev %d
BPLMN: +Jumping! Skip Last %d Current %d
BPLMN: +Jumping! Skip DbComplete %d CurBandBCCHAttemptNum %d
BPLMN: State: rr_State: %x rr_BActiveState: %s: rr_BInactiveState: %s:
BPLMN: NumSIReadBuffered %d: rr_BPlmnNextBcchReq-> ProcessSIRead
BPLMN: BPlmnResultToMmPending, ignoring Msg
BPLMN:Error: Rxd MPH_DATA_IND in not IDLE state, stop BPlmn procedure
BPLMN: NumSIReadBuffered %d: rr_BPlmnNextBcchReq-> ProcessSIRead
BPLMN:Error!Expected Arfcn %d, Received %d
BPLMN: NumSIReadBuffered %d: rr_BPlmnNextBcchReq-> ProcessSIRead
BPLMN:Error! MPH_DATA_IND with arfcn %d received wrong BPLMN sub state
BPLMN: Ignored MPH_DATA_IND with arfcn %d! rr_CheckSysInfLength, msg_type(0x%x)
BPLMN: BcellCid(%x,%x)
BPLMN: BcellLai(%x,%x,%x,%x,%x)
MaxArfcnTry(%d) -> %d, Retry scan from beginning for this band
DCS1800 BAND_SCAN_NOT_REQUIRED, ServCellBand %s CellBand %s
PCS1900 BAND_SCAN_NOT_REQUIRED, ServCellBand %s CellBand %s
ANR MPH_DATA_IND
ANR: Ignored MPH_DATA_IND after timer expiry
ANR: Rxlev %d
ANR: Ignored MPH_DATA_IND with arfcn %d! rr_CheckSysInfLength, msg_type(0x%x)
GRR: SI 3(%d)
GRR: SI 4(%d)
GRR: SI 13(%d)
ANR: Ignored MPH_DATA_IND with arfcn %d! Decoder error, msg_type(0x%x)
ANR: Error: Ignored MPH_DATA_IND with arfcn %d! L1 error - cause(%d)
BPLMN:Error!Expected Arfcn %d, Received %d
ANR:Error! MPH_DATA_IND with arfcn %d received wrong BPLMN sub state
MPH_SUSPEND_RAT_REQ already sent. Avoid sending another Req
Remove Mobile Identity including IMSI, Paging Request Type 1
Remove Mobile Identity including IMSI, Paging Request Type 2
Rcvsd SI (%d) Send BCCH Read again
Try BCCH_READ for (%d) Rxlev (%d)
Ongoing BCCH_READ for (%d)
Ongoing BCCH_READ for (%d)
1 Target Cell (%d) Softsum (%d) CI(%d) SCell Softsum (%d) CI(%d): Go for Resel
1 rr_TargetCellForBcchRead (%d) Softsum (%d) < 900
2.1 Check for BCCH read on Suitable Cell (%d) (%d)
2 Target Cell (%d) Softsum (%d) CI(%d) SCell Softsum (%d) CI(%d): Go for Resel
2 (%d) rr_TargetCellForBcchRead : Softsum (%d) < 900
No Cell with Valid C1 C2 so Find one
1.3 Found N Cell ,Add rr_TargetCellForBcchRead CellToSIQHead (%d) Rxlev (%d)
rr_TargetCellForBcchRead Done on (%d) Softsum (%d)
Page blocks received on logical channel BCCH(10 times) during rr_InterRatStatus (%d)
Cell ARFCN[%d]BSIC[0x%x] not suitable to camp
(CIQ)## DL Message - In HandleMphDataInd, TID : 0x%x, PD : %d, MSG_Type : 0x%x, CHANNEL : %d, Message : %d
Unexpected MPH_DATA_IND with MSG TYPE:%x, ignored
Not storing Page mode Chn_Type %d
Decoder error, msg_type(0x%x)
Ignored!!! L1 error - cause(%d)
Ignored - Wrong Channel!! Msg:0x%x, ChnType:%d
