withSIB1: %d, num: %d, imme: %d
SI update after SI modification timer expired
LteRrm_AllocCellInfoBuf: TargetCell
please check: TargetCell(0x%X) or PrimaryCell(0x%X) is NULL!!
SI READ SUCCESS
LteRrmIdle_GoToSleep() due to SI_READ_SUCCESS
Skip LteRrmIdle_GoToSleep() due to SI modification
ESS SI READ FAIL
ConnToIdleLastCell: TRUE to FALSE
LteRrm_AllocCellInfoBuf:LteRrm_FreeCellInfoBuf
Try Cell selection to next cell (idx:%d)
ESS SI READ FAIL when IdleProc, LTERRM_PLMN_SCAN
SI READ stop already(%s)
ESS SI READ FAIL when IdleProc==LTERRM_IDLE (SI update?)
LTE_CPHY_CELL_RESEL_EVAL_IND with FAIL
LteRrm_ProcSiStopReadReq - Invalid IdleProc(%d)
SIB3 received:ReselPriorityOfPCell(%d).(%d)
speed_dep_resel_present received - t_eval(%d) t_hyst(%d), nMed(%d), nHigh(%d)
SameCellSelect:%d
SIB3: q_QualPresent=(%d), q_QualMin=(%d), q_Qualminoffset=(%d), q_QualMinWBPresent=(%d), q_QualMinAllSymbolPresent=(%d)
SIB3,4,5 received before SIB2
IntraFreq NULL
SIB4 received
SIB5 received (PPP: %d)
SIB5 received
Invalid SYNC/ASYNC SYSTEM TIME[0:SYNC/1:ASYNC], received(%d), noupdate
cdma_EUTRA_Synchronisation(%d), [0:SYNC/1:ASYNC](%d), system_time(0x%x%08x), LTE End sfn(%d)
systemTimeInfoCDMAPresent in SIB8 is FALSE, no update
ERROR: Invalid Ns(%d) and i_s(%d)
LteRrm_ConfigPch - Invalid PO - Ns(%d), is(%d)
LteRrm_ConfigSCellPch i_s(%d), N(%d), Ns(%d) , index (%d), isServingCell(%d)
ERROR: Invalid Ns(%d) and i_s(%d)
LteRrm_ConfigSCellPch - Invalid PO - Ns(%d), is(%d)
[RRM-MBSFN] Serving Cell PCH Valid[%d]
LteRrm_ConfigSCell Pch drx_T(%d), PF(%d), PO(%d)
LteRrm_ProcUpdateCsgReservedListReq - pCsglist alloc fail
Update CSG Reserved List : %d
[%d] EARFCN:%d, StartPCI:%d, RangePCI:%d
previously CsgMeasReq is already received (%d), stop previous CsgMeasReq
LteRrm_ProcCsgMeasReq - (%d) eutra_meas_list NULL
LteRrm_ProcCsgMeasReq - (%d) utra_list_size NULL
Stop CSG Meas(%d)
CSG Meas is Already Stopped (LTERRM_NO_CSG_MEAS)
Request CSG Proximity Meas
LteRrm_ProcCsgProximityMeasReq is reconfigured (%d)
LteRrm_ProcCsgProximityStopMeasReq()
(ignored)LPP(ECID) is already scheduled
LteRrm_ProcEcidMeasReq : reportingAmount[%d], reportingInterval[%d]
(ignored)LPP(ECID) is already aborted
(ignored)LPP(OTDOA) is already scheduled
LteRrm_ProcOtdoaMeasReq : RA[%d], RI[%d], EarlyFix{%d]
Reference cell Info in LPP(OTDOA) is different from serving cell
Replace optional field(Ref Cell earfcn) by serving cell earfcn
optional field(Ref Cell earfcn) = %d
(ignored)LPP(OTDOA) is already aborted
(ignored)LPP(OTDOA) is already aborted
Warning!! bScgConfigFlag(1) but PSCell remains configured --> process deact/release
Warning!! bScgConfigFlag(1) but SCG SCell remains configured --> process deact/release
LteRrm_ProcLoggedMeasEutranResult - eutra_meas_result_list2 alloc fail
MDT EUTRAN - no Ncell
LteRrm_ProcLoggedMeasEutranResult - eutra_meas_result_list2->eutra_freq_meas alloc fail
LteRrm_ProcLoggedMeasEutranResult - utra_meas_result_list2 alloc fail
MDT UTRAN - no Ncell
LteRrm_ProcLoggedMeasEutranResult - utra_meas_result_list2->utra_freq_meas alloc fail
MDT UTRAN RAT type(%d) is not valid -> FDD set
LteRrm_ProcLoggedMeasEutranResult - gsm_meas_result_list2 alloc fail
MDT GERAN - no Ncell
LteRrm_ProcLoggedMeasEutranResult - gsm_meas_result_list2->gsm_cell_meas_list alloc fail
MDT GERAN RAT - num(%d)t
LteRrm_ProcLoggedMeasEutranResult - gsm_cell_meas alloc fail
MDT GERAN RAT - (arfcn:%d, rssi:%d)
bImmediate1(%d), MDT.usMeasRat(0x%x)
bImmediate2(%d), MDT.usMeasRat(0x%x)
bImmediate3(%d), MDT.usMeasRat(0x%x)
LteRrm_InitPscellBlindSrchMngr
LteRrm_SaveRrmCfgMsgPSCell: pMsg is NULL
Warning! same RRM_CONFIG_REQ message already stored in LteRrm_SaveRrmCfgMsgPSCell
Cannot Allocate Message buffer
save pSaveRrmCfgMsgPSCell (rrm_config_flag:0x%x)
Warning!! NOT Supported DL_EARFCN %d!!! in LteRrm_StartBlindSrchPSCell
Warning!! pPSCellFreq: NULL in LteRrm_StartBlindSrchPSCell
Warning!! PSCell not found but pscellStatus:KNOWN_DETECTED in LteRrm_StartBlindSrchPSCell
Start Measurement: PSCell Frequency Blind search(earfcn:%d)
Warning! bSrchFlag: FALSE in LteRrm_ProcPSCellBlindSrchResult
Warning! pPSCellFreq: NULL in LteRrm_ProcPSCellBlindSrchResult
LteRrm_ProcPSCellBlindSrchResult (doneCnt:%d / maxCnt:%d)
Resume processing LTE_CPHY_RRM_CONFIG_REQ without SCG config
Warning!! pMeasCnf: NULL in LteRrm_ProcPSCellInitMeasResult
Warning!! pPSCell: NULL in LteRrm_ProcPSCellInitMeasResult
Warning!! pPSCellFreq: NULL in LteRrm_ProcPSCellInitMeasResult
Warning!! measResult->earfcn(%d) different to pPSCell->earfcn(%d) in LteRrm_ProcPSCellInitMeasResult
Warning!! pPSCellFreq->earfcn(%d) different to pPSCell->earfcn(%d) in LteRrm_ProcPSCellInitMeasResult
Resume processing LTE_CPHY_RRM_CONFIG_REQ without SCG config
Warning!! Unexpected meas result (cell_ID:%d)
PSCell - rsrp(%d)
Resume processing LTE_CPHY_RRM_CONFIG_REQ with measured PSCell
- pFreqInfo NULL
- PScell FreqInfo(earfcn=%d) is created newly
Warning!! LteRrm_StartBlindSrchPSCell: pFreqInfo not found --> check pscellStatus(%d)
Config - rrm_config_flag(%d)
- MCG SCell num_add(%d) num_rel(%d)
- meas_sf_pattern_pcell setup (%d)
- crs_assistance_info setup (%d)
- SCG PSCell setup (%d)
- SCG SCell num_add(%d) num_rel(%d)
- EN-DC setup (%d)
[EN-DC CONFIG] Nr Serving Cell(%d) - ARFCN(%d) CellId(%d)
pFreqInfo is NULL as a result of LteRrm_AllocFreqInfoBuf()
pCellInfo is NULL as a result of LteRrm_AllocCellInfoBuf()
measSubframePatternPcell: meas_mode(%d)
feICIC crs_assistance_info: Setup
- NeighCellsCRS-Info is setup again by RRC before release
- NeighCellsCRS-Info not configured, num_cell(%d)
- NeighCellsCRS-Info configured, num_cell(%d)
feICIC crs_assistance_info: Release
- num_cell from RRC is not 0 : need to check in RRC
- SCellIndex(%d) for PSCell: out of range
PSCell: setup (SCellIndex:%d)
PSCell: release
SCellActivationfromMAC = 0x%x, SCellActivationTTI = %d
UE has already full supported Scell(%d)
Support the activation for ONLY one SCell !!!(%d->%d)
LteRrm_ProcRemovePSCell
Warning! sCellIndex(%d)
Warning! PSCell(%x) or PSCellFreq(%x) is NULL
Warning! Received SCellIndex(%d) is not configured for PSCell
Deactivate PSCell (SCellIndex:%d, Earfcn:%d, CellID: %d) !!!
LteRrm_ProcRemoveSCell
LteRrm_ProcRemoveMcgScgSCell(cellGroup: %d)
Invalid cellGroup
Warning! SCG SCell not added <-- pPSCell(%d) pPSCellFreq(%d)
Wrong input in LteRrm_ProcAddSCellCellGroup. Check cellGroup(%d) rrm_config_flag(%d)
- SCellIndex(%d) is out of range - need to check (earfcn:%d, pcid:%d)
SCell Freq(%d) is abnormal -> discard.
MCG: num_seccell(%d), num_remove_seccell(%d)
SCG: num_seccell(%d), num_remove_seccell(%d)
- configured in SCG
Mismatch SCell Index[%d] : Cell ID[%d | %d] & DL EARFCN[%d | %d]
- Warning! This band is not for LAA but configured as LAA by RRC --> ignore the field
- LAA SCell configured
SCell(ID:%d, earfcn=%d is added in ScellmeasList
Wrong cellGroup(%d) value used -> SCell(index:%d) is not configured
Intra Freq Scell is not supported
InterFreq -> SCellFreq
Inter Freq does not have the measurement list!!!
previously the same earfcn(%d_%d) is configured as Scell(%d)
TempFreqInfo NULL
Scell FreqInfo(earfcn=%d) is created newly
Scell(%d_PCID:%d) is already configured - ignore
the same freq(%d) and index but diff cell ID (%d_%d) -> discard
the same freq(%d) but diff index(%d_%d) -> discard
there is no candidated cell(%d) with index(%d) -> discard
pTCellInfo NULL
Scell CellInfo(earfcn=%d, PCID=%d) is created newly
Warning!! pConfig(%x) in LteRrm_SetConfigKnownPSCell
Warning! pPrimaryCell : NULL in LteRrm_SetConfigKnownPSCell
LteRrm_SetConfigKnownPSCell
same cell with previous PSCell
Warning!! no matched pCellInfo
Mismatch SCell Index[%d] : Cell ID[%d | %d] & DL EARFCN[%d | %d]
Warning! LTERRM could not support SCell(%d) more than %d. CHECK!!!
- Warning! filtered_rsrp_pc: invalid for PSCell in LteRrm_SetConfigKnownPSCell
Activate PSCell (SCellIndex:%d, Earfcn:%d, CellID: %d) !!!
LTERRM could not support SCell(%d) more than %d. CHECK!!!
SecondaryCell could not found([%d] Cell ID:%d, earfcn:%d)
[%d] Freq(%d) Cell(%d) earfcn values are different
Wrong Scell info2(%x:%x)
SCellFreq NULL
SCell Activation : Cell ID[%d], DL EARFCN[%d]
Activate SCell (SCellIndex:%d, Earfcn:%d, CellID: %d) !!!
LTERRM could not find SCell(index:%d). CHECK!!!
config(%d), earfcn(%d), PCID(%d)
Deactivate Scell(%d) by Deactivation Timer expiry
Deactivate SCell (SCellIndex:%d, Earfcn:%d, CellID: %d) !!!
SCell is deactivated(SCellIndex: %d, CellID: %d, SCellActivationCMD: 0x%x)
Deactivate SCell (SCellIndex:%d, Earfcn:%d, CellID: %d) !!!
SCell Deactivation is ignored(index:%d(%d))
Scell(%d) configured but not found FreqInfo in gpLteRrm_SCellFreqList
Scell(%d) configured but not found CellInfo in SCellFreq
SCell Config is removed(SCellIndex: %d, CellID: %d)
SCellFreq -> InterFreq
SCell is not configured(%d)
LTE_REL12_DUALC is not defined but cellgroup(%d) is used -> changed to 0
All SCells(cellgroup:%d) are deactivated !!!
SCellConfig.SCellActivationCMD(%d)
All SCells are already deactivated !!!
LTE_REL12_DUALC is not defined but cellgroup(%d) is used -> changed to 0
LteRrm_CheckScellTiming (earfcn:%d, result:%d)
Scell list is Empty
Scell(%d) Doesn't have correct timing info
Scell(%d) has correct timing info
All Scells have correct timing info
- Warning! pFreqInfo is NULL
- Warning! PrimaryCell is NULL
- Warning! pci(%d) out of range
- Warning! PCell NOT expected in measSubframeCellList
- measSubframePattern for PCell already configured
- measSubframePatternPcell: meas_mode(%d)
-%d. pci(%d) configured
- earfcn(%d) meas_mode(%d) num_meas_pattern_ncell(%d)
NeighPatternList NULL(%d) or empty
Meas Neigh Pattern Update (earfcn:%d, meas_mode:%d)
Warning! pFreqInfo is NULL
Warning! LteRrm_RemoveMeasNeighPattern: NumOfNeighPatt is 0
Remove MeasNeighPattern(Freq:%d) from List(num:%d)
Cannot Allocate PatternList buffer
- new measSubframePatternNeigh (earfcn:%d, meas_mode:%d, num:%d)
MeasSubframePatternNeigh List is updated
- (%d) earfcn(%d) meas_mode(%d)
Curr. feicic activation state
Error: gLteRrmDB_NeighborCrsInfo_r11.num_cell is out of range(%d)
- %d. FeicicActBitmap[%d]:%d (pci:%d)
crs_info: NULL in LteRrm_UpdateFeicicTmpCell
%d. Pci(%d) found in Sorted list
-- Out of bound: FeicicTmpCellList.num_cell(%d)
-- ant_num(%d), cp_type(%d)
-- mbsfn_valid(1), mbsfn_config_cnt(%d)
-- mbsfn_valid(0)
-> Crs-Assi cell(pci:%d) detected and selected as SIC candidate
-> Crs-Assi cell(pci:%d) detected BUT not satisfied with SIC conditions
-- No valid Ncell in Intra-freq Sorted-list
LteRrm_CheckFeicicCandiChange
- Error: Need to check crsAssistActivated change. FeicicActCellList.num_cell is (%d)
- no any target cell observed - Deactivates feicic
- no change in dominant candidate cell
feicic check: crsAssistConfigured(%d) crsAssistActivated(%d)
Activates feicic
Updates feicic
[TDD(%d)] PC3 (%d)
[WARN] Need to check PowerClass -> set PowerClass 3
Warning! PSCell earfcn = PCell earfcn(%d) in LteRrm_GetPSCellStatus - Need to check in RRC
- PSCell: Unknown (no such pFreqInfo)
- PSCell: Known
- PSCell: Unknown (no such pCellInfo)
