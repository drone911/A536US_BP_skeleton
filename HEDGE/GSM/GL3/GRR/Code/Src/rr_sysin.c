Unexpected: rr_NbNear(%d) + rr_NbFar(%d) >= %d, Arfcn:%d
rr_HandleIdleBa
Change in BA list
SI 2bis Ba is extended (rr_StoreBaList)
SI 2bis BA list is not extended for this message
SI 2ter Ba Int_BaList extended (rr_StoreBaList)
ArfcnList: BA
ServCell Arfcn is in BA list no more
rr_PrevDediSCellNowOtherBandCell:%d
rr_PrevDediSCellNowOtherBandCell:%d
Changing SYS 5
New SYS 5 contents
NccPermitted(0x%x)
_DPTLV(StackId,ISI6_REST) %x byte %x
Changing SYS 5bis
New SYS 5bis contents
rr_PrevDediSCellNowOtherBandCell:%d
Changing SYS 5ter
Old SYS 5ter contents
Old SYS 5 contents
Overwriting old SYS 5 with old SYS 5ter
Copied SYS 5 contents
New SYS 5ter contents
GPRS support? %d, SYSINFO 13 REC? %d
<Wanted Plmn 0x%x,0x%x,0x%x>-<ServCell PLMN 0x%x,0x%x,0x%x>
rr_WaitSiAfterResel(1), If all madatory SIs received then move to IDLE state. NeededSI(%x), RecSysInfo(%x)
FOUND SERVING CELL
rr_WaitSiAfterResel %d
Update Previous Cell 3G List
BPLMN: Stop RXLEV
AddCellToSIQ %d
Process SI Read, In Action = 0x%x, BcchFreq %d
REJ BcchReadReq(Dedicated)
REJ BcchReadReq(WSYSINFO)
REJ BcchReadReq(Access in progress = %d) tbf_state = %d
REJ BcchReadReq(Idle Confirm pending)
REJ BcchReadReq CsNonDrx (%d) PsNonDrx(%d) rr_NonDrxTimInProg(%d)
REJ BcchReadReq(rr_TryAnotherReselWithSI3_4)
BPLMN: RR_WB_SEND_BCCH. Bplmn resume
BPLMN: RR_WB_SEND_RXLEV. Bplmn resume
BPLMN: No Frg SI to readl! RR_WB_SEND_BCCH. Bplmn resume
Fce:%d NeededSI:0x%x InAction:%x PMode:%x
Stop SI Fce(%d)
PLMN with PLMN id (0x%x)
Net Scan Type %d
FastRPLMN: %x %x %x Arfcn:%d RxLev:%d
ERROR RtkGetMemory returned NULL
ERROR RtkGetMemory returned NULL
PLMN 0x%x,0x%x,0x%x found
[GRR][FAKE][ARFCN %d] NOT a FAKE Cell
[GRR][FAKE] CAlist Count(%d)
[GRR][FAKE][ARFCN %d] NOT a FAKE Cell
[GRR][FAKE][ARFCN %d] Cell->Fake = 0x%X
[GRR][FAKE] A FAKE CELL FOUND. AVOID the Cell %d
[GRR][FAKE] A FAKE CELL FOUND. AVOID the Cell %d
ArfcnList: CA
BandInd %d in SI1 doesn't match %d
Ignore BandInd Change during CELL SELECTION: BandInd:%d
BandInd verified as %d
BandInd conflict %d
BandInd conflict %d
BandInd conflict %d
BandInd conflict %d
Change Band for L1 %d
GRR: SI 1(%d)
GRR: SI 2(%d)
GRR: SI 2b(%d)
GRR: SI 2TER(%d)
SI2B is needed but only SI2T was received so SI2B is not supported
SI2bisCount(%d)
GRR: SI 2QTER(%d)
GRR: SI 3(%d)
GRR: SI 4(%d)
GRR: SI 7(%d)
GRR: SI 8(%d)
GRR: SI 9(%d)
GRR: SI 13(%d)
FIRST SI 13
Ignore SI13(GPRSSvcNotAllowed) Arfcn(%d) - processing BCCH Change Mark
SI13 contents not valid Arfcn(%d)
!!!Invalid SI(Type:%d)
GRR ## NeedSI(0x%x) RecSI(0x%x) ##
SI6RO
SI6RO: PCH and NCH info
SI6RO: Call priority
SI6RO: VBS/VGCS options
SI6RO: DTM supported in current cell, RegiDtm %d
DTM: rr_SetDTMAccessStatusToRlc(T)
SI6RO: MaxLAPDm %d to %d
SI6RO: Rac %d to %d
SI6RO: DTM not supported in current cell, RegiDtm %d
DTM: rr_SetDTMAccessStatusToRlc(F)
Scell is 1900 due to rr_forceBandInd
BandInd %d in SI6 doesn't match %d. Changing is pended
Error: ServCellBand %s, Cur BandInd %d is wrong. Changing to %d is pended
BandInd %d in SI6 doesn't match %d, but BandInd not changed as ServCellBand:%s
BandInd verified as %d
SI6RO: GPRS_MS_TXPWR_MAX_CCH
Delete NCells from Old BandInd
Delete NCell:%d
Reset SYS 5ter contents
Reset SYS 2ter contents
rr_CheckAndAddTargetCell
ValidNCellToRead (%d) Rxlev (%d)
No ValidNCellToRead
NCellToRead (%d) Rxlev (%d)
No NCellToRead
Found Cell with Valid Bsic but Invalid Resel Param (%d) Rxlev (%d)
No ValidNCellToRead
rr_CountNCellWithBsic:%d rr_NbNear:%d
BaFreqList:%d
SICell not in sync list
ServCell BCCHReadReq not sent during reselection
Ignore NCell BCCH read triggering in full stationary condition
BPlmn: Ongoing, Avoid BCCH_READ of Cell with INVALID_BSIC
No SI to read
No SI to read arfcn %d
BPLMN: No Frg SI to readl! RR_WB_SEND_BCCH. Bplmn resume
Paging Reorg mode ,rr_PostCsNonDrxPeriod= %d rr_PostPsNonDrxPeriod=%d rr_ServSupp.page_mode=%d
For Cell %d BCCHReadReq in idle bisc %d need si 0x%x
REJ BcchReadReq page_mode (%d) rr_ReselectionReason(%d) rr_State(%d), BcchFreq(%d)
ArfcnList: BA
ArfcnList: BA
ArfcnList: BA
(GSM) Change in CCCH
si4_acs (%d)
PLMN_LIST - Next cell
CELL_SELECTION - Cell not suitable
MCC mismatch Found, Abort PLMN Search procedure
rr_WaitSiAfterResel reset, stop BCCH READ REQ WDT if running
set rr_WaitIdleCnfForImmResel and triggered IDLE REQ to GL1
!!! Immed Resel !!!
Cell is Suitable
!!NCELL diff PLMN(Arfcn:%d)!!
#NW cntrl mode %d#
Store SI 13 RO
PBCCH present: Setting PBCCH as Absent
PBCCH not present
No Change In SI13 PwrCtrlParam
Don't send New Idle Req for GPRS on CS only stack
SI13 contents Not present: Set SI13 Neededed
