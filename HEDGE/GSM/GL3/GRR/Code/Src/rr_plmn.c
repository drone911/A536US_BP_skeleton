Cell Selection can not be proceed
rr_EndRegNOK: rr_RegRes_WaitPLMNSearch is Set
REG IND
<Selected LAI %x %x %x %x %x>
<Current LAI %x %x %x %x %x>
<Selected Plmn %x %x %x> - <Current Plmn %x %x %x>
<Eq Plmn %x %x %x> - <Current Plmn %x %x %x>
Forbidden LA for roaming!
Latin
Chn
Frequency Scan Mode (Bandmode : 850/900/1900)
Frequency Scan Mode (Bandmode : 850/900/1800)
GRR_MM_PLMN_SEARCH_REQ: %x %x %x and HPLMN %x %x %x
Sim Flag(1), ServThresh(%d)
Sim Flag is Not Set
Sim Flag G2T Set (%d)
Sim Flag G2T Not Set (%d)
SIM Status(%d), AnyPlmn(%d)
Non Emerg PLMN requested without SIM
Dedicated mode - reject PLMN search req
RR_WPLMN_LIST - reject PLMN search req
CellLocking: Enabled
Network controlled system select: Enabled
rr_MMPlmnFreqSearchMode: RR_STORED_CELL_SEARCH
rr_MMPlmnFreqSearchMode: RR_SAVED_FREQ_SEARCH
rr_MMPlmnFreqSearchMode: RR_FULL_SCAN_EXCLUDING_STORED_CELL_SEARCH
rr_MMPlmnFreqSearchMode: RR_FULL_SCAN_SEARCH
rr_QuickSearch: ManualSelection
rr_QuickSearch %d: RR_STORED_CELL_SEARCH
%x %x %x %d
IRAT Resel In Progress - Wait for SUSP_CON before sending PLMN search Fail
No Cell Selection Grant for IDLE
GRR_MM_RESEL_HOLD_REQ
IRAT Resel In Progress - Wait for SUSP_CON before sending RESEL_HOLD_CNF
GRR_MM_RESEL_HOLD_CNF
GRR_MM_PLMN_LIST_REQ: Background PLMN Search
GRR_MM_PLMN_LIST_REQ: Foreground PLMN Search
IdleReq pending, stop the timer before FG MPLMN starts
Dedicated mode - reject PLMN list req
Ignore PLMN List Req while already doing one!!!
IRAT Resel In Progress - reject PLMN List req
PLMN with PLMN id (0x%x)
Hold PLMN LIST REQ: ABORT_LIST_REQ_AND_PLMN_REQ_DURING_WPOWER
GRR_MM_PLMN_LIST_ABORT_REQ, wait for Power Resp
GRR_MM_PLMN_LIST_ABORT_REQ, Move to Resume-Null
Invalid state - ignore PLMN list abort req
Add PLMN to PLMN list: %x %x %x
Detected Band List %d %d
GRR_MM_PLMN_LIST_IND to MM
GRR_MM_PLMN_LIST_IND to MM during IRAT Proc
GRR_MM_PLMN_SEARCH_FAIL_IND
RR_SAVED_FREQ: Remove Plmn ID %d %d %d from Saved Freq list
ListSize: %d
RequestedPlmnId: %x %x %x
GRR_MM_NO_CELL_IND
2G Out of service event occurred
PlmnState %s->%s
SelectPlmn 0x%x 0x%x 0x%x
PLMN selection complete
CellSelec: SRCH CMPLTD
PLMN selection complete -> ON ANY
PLMN selection complete -> ON PLMN
BPLMN:Check ScellLai to rr_BPlmnListElem
BPLMN:Add ScellLai to rr_BPlmnListElem
BPLMN DS: Skip 1800 band: ScellBand(%s), BandInd(%d)
BPLMN DS: Skip 1900 band: ScellBand(%s), BandInd(%d)
rr_BplmnBandScanStatus: 850:%d 900:%d 1800:%d 1900:%d Ongoing:%s
BPLMN: <LIST REQ from MM> BPlmnDb %d
BPLMN: rr_PlmnListReq: SearchType %d, SingleRatSearch %d, PlmnReqForOldList %d
ReqBandNum = 0xFF send GRR_MM_PLMN_LIST_IND without search
BPLMN:Error:NonDrx CsNonDrx (%d) PsNonDrx(%d) rr_NonDrxTimInProg(%d) GmmAttachInProg(%d) AccInProg(%d) DlTbfProc(%d)
rr_WaitIdleCnfForImmResel is TRUE, Donot handle PLMN LIST REQ
WAIT for SRRC response
BPLMN Proc allowed
Bplmn request for Inactive rat, No DSRC grant required!!!
BPLMN:Error: Already BPLMN ongoing!!
rr_band_type:%s rr_BandInd:%d
BPLMN: Wait for IDLE_CNF (%d)
rr_NewIdleToL1 rr_IdleReqState:%d
BPLMN:Error: Unexpected Error!
Detected Band List %d %d
Active Rat(%d), InactiveRatDrxReceived(%d), Donot trigger HOLD IND.
GRR_MM_PLMN_LIST_IND to MM
ANR:MM_GRR_PREPARE_CGI_REQ from MM
Anr Error: in wrong state
CGI Parameters arfcn(%d) band_ind(%d) NCC (0x%x) BCC (0x%x)
rr_band_type:%s rr_BandInd:%d
ANR:Error: Unexpected Error!
rac present:%x, arfcn value:%d, band indicator:%x,
ncc:%x, bcc:%x, rac:%x,
lac:%x, cgi_cell_id:%x
plmnid[0]:%x, plmnid[1]:%x, plmnid[2]:%x,
GRR_MM_CGI_INFO_IND to MM
BPLMN:PlmnListInd.Cause(%d)!
GRR_MM_BACKGND_PLMN_LIST_FAIL_IND to MM
GSM_PLMN_list_count(%d) StartBPlmnlistValidTimer
BPLMN: Acquired PLMN ID!: %x %x %x
BPLMN: Comparing PLMN from LIST: %x %x %x
BPLMN: Requested BPLMN Id Found!: %x %x %x
BPLMN: Add PLMN to PLMN list: %x %x %x Arfcn:%d Rxlev:%d
ERROR RtkGetMemory returned NULL in rr_SetBplmnArfcnListToMM
Send Bplmn GSM cell to MM Count:%d, Arfcn %d, BandType %s
rr_InitBplmnArfcnListToMM
GRR_MM_NET_SCAN_IND to MM for PlmnId: %x %x %x
serving:%s lac:0x%x cid:0x%x rssi:%d
rr_UpdateBPlmnList, lac:0x%x cid:0x%x
BPLMN: Update PLMN to PLMN list: %x %x %x Arfcn:%d RxLev:%d
In BPlmnDb, ARFCN:%d, Is Arfcn-Bsic Entry Found:(%d)
In BPlmnDb, lac:0x%x cid:0x%x
BPlmnDb: Arfcn(%d) Bsic(%x) Age(%d) Plmn(%x %x %x) Band(%d)
BPLMN:Age of ARFCN(%d) Bsic(%d) Plmn(%x %x %x) expired
BPLMN DB has no more elements left
BPLMN: GRR_MM_ABORT_BACKGND_PLMN_LIST_REQ
BPLMN: Inactive 2G Bplmn was Running. Stopping BPLMN !
BPLMN:Error: BPLMN not Running, but got ABORT!
BPLMN:Error: Unexpected Error!
BPLMN: GRR_MM_ABORT_BACKGND_PLMN_LIST_CNF to MM
Stop BPLMN as Other stack is Busy
rr_StopBPlmnProcedure
BPLMN: Inactive 2G Bplmn was Running. Stopping BPLMN !
BPLMN:Error: Unexpected Error!
BPLMN:Error: Invalid state. Already state changed to other state when timer expired
BPLMN: Already Suspend or Stop Rx-lev Sent, ABORT Rxd:%d
BPLMN: Already Suspend Sent, ABORT Rxd:%d
BPLMN:Error:!Invalid BPLMN State
MissedBand: Scan Done rr_band_type=%s
BPLMN: 2G SingleRatSearch Done
BPLMN: rr_BPlmnResume
rr_band_type:%s rr_BandInd:%d
BPLMN:Error: Unexpected
rr_CbchState:%d
rr_CbchState:%d
CbchState:=> CBCH is STOPPED_DURING_BPLMN
BPLMN: SI 1 DecodedCellChnDesc
BPLMN: rr_SyncCellList.Lai(%x,%x,%x,%x,%x) Arfcn:%d
SyncCell Contains Same LAI as SCell: 0x%x 0x%x 0x%x
Arfcn:%d has Valid LAI, Remove from BPLMN Search
NCell Contains Invalid LAI: 0x%x 0x%x 0x%x
BPLMN: rr_State: %x rr_BPlmnState: %s:
BPLMN: rr_State: %x rr_BPlmnState: %s:
BPLMN:ERROR: Invalid status
BPLMN:ERROR: Invalid status
FPLMN: Invalid Valid Arfcn
BPLMN: %d) Req Channel %d
BPLMN: Valid Arfcn Added to List
FreqSearchMode = %d NetScanType = %d
BPLMN: BplmnListSize %d
BPLMN: Received PLMN from LIST: %x %x %x
BPLMN: BplmnListSize is ZERO
BPLMN: ReqBandNum %d
BPLMN: ReqBand %d: %s
BPLMN: ReqBand %d %d
FreqSearchMode = %d
FPLMN: NetScan Type:%s, ReqChannelNum:%d
BPLMN: ReqBandNum %d
BPLMN: ReqBand %d: %s
FPLMN: %d) Req Channel %d
FPLMN: Valid Arfcn Added to List
BPLMN: ReqBand %d %d
Existing HPLMN 0x%x 0x%x 0x%x
PLMN not valid
New HPLMN 0x%x 0x%x 0x%x
GRR_MM_UPDATE_ACTING_HPLMN_REQ : ActHplmnValid (%d)
GRR_MM_UPDATE_ACTING_HPLMN_REQ : %x %x %x
Active HPLMN Param is absent (%d)
MCC search: Stored Cell Search
Invalid FreqBand(%d) in function: rr_UpdateDetectedBandMask
MM has registered on an EMERGENCY cell!!!
SIM not read - IGNORE!!!
rr_AbortSearchStatus(%d)
Hold PLMN SEARCH: ABORT_LIST_REQ_AND_PLMN_REQ_DURING_WPOWER
Hold PLMN SEARCH: RR State is WPOWER
