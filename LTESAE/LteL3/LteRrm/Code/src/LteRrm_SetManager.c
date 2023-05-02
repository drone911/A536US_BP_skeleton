LteRrm_AllocFreqInfoBuf - alloc fail
ALLOC:LteRrm_AllocFreqInfoBuf(%d, 0x%x)
Free:LteRrm_FreeFreqInfoBuf(%d, RAT:%d, Freq:%d, Addr:0x%x)
LteRrm_AllocCellInfoBuf_Debug - alloc fail
LteRrm_AllocCellInfoBuf_Debug - nr_meas_rslt alloc fail
ALLOC: CellInfoBufNum(%d)
FREE: CellInfoBufNum(%d), earfcn(%d), cell_id(%d)
Warning!! UTRAN FreqInfo NUM(%d) > (%d)
GERAN FreqInfo NUM(%d)
LteRrm_AddCdmaFreqInfoToList
FreqInfo is Null(%d, %d)
CDMA FreqInfo NUM(%d)
LteRrm_AddNrFreqInfoToList - NrFreqNum:%d
LteRrm_AddFreqInfoToList : pNewElem NULL
AddFreqInfoToList - pFreqList is empty : Add pNewElem as the Last element
AddFreqInfoToList - pFreqList isn't empty : Sorting InterFreq
LteRrm_RemoveFreqInfoFromList(RAT_type:%d, earfcn:%d)
>> InterFreqNum:%d, InterFreqCellNum:%d
>> UtraFreqNum:%d
>> GeranFreqNum:%d
>> CdmaFreqNum:%d
>> NrFreqNum:%d
Wrong input: RAT_type(%d) is not for LteRrm_RemoveFreqInfoFromScellList
LteRrm_RemoveFreqInfoFromScellList(earfcn:%d)
Scell freq(%d) is removed.(ScellFreqNum:%d)
Warning!! pFreqInfo is NULL in LteRrm_AddUnidListedCellToList
Warning!! pListedCell is NULL
Add Unid-Listed cell (PCID:%d, earfcn:%d, RAT_type:LTE)
Remove Unid-Listed cell(earfcn:%d, cell_ID:%d) from list
LteRrm_RemoveCellInfoFromSet - empty set (%d)
Scell(%d, %d) is not removed
LTE cell(earfcn:%d, PCID:%d, setType:%d,) is modified in listed set.
Scell(earfcn:%d, PCID:%d, setType:%d) is not removed
LTE cell(earfcn:%d, PCID:%d, setType:%d) is moved to ID_DETECTED set
LTE cell(earfcn:%d, PCID:%d, setType:%d) is moved to CANDI_DETECTED set
UMTS cell(arfcn:%d, scrCode:%d, setType:%d,) is modified in listed set.
GSM cell(arfcn:%d, setType:%d,) is modified in listed set.
Scell(%d, %d) is not removed
LteRrm_GetMatchedCellInfo warning!!! - RAT_type:%d, CellId:%d
LteRrm_GetMatchedCellInfo : Cell %d is empty in the set %d freq %d
Warning! pFreqInfo NULL in LteRrm_GetMatchedUnidListedCell
Warning! RAT_type(%d) not expected in LteRrm_GetMatchedUnidListedCell
Warning! CellId:%d in LteRrm_GetMatchedUnidListedCell
pMatchedFreqInfo is NULL (pFreqList:0x%x, pFreqInfo:0x%x
No NR Freq Info so far
No UTRA Freq Info so far
No GERAN Freq Info so far
LteRrm_GetMatchedGeranCellInfo : Cell %d is empty in the set %d freq %d
No CDMA Freq Info so far
Invalid CC mode(%d)
pNewServingCellInfo->cell_ID != LTERRM->Set.pPrimaryCell->cell_ID
Intra-Freq blind HO
Inter-frequency cell
Inter-Freq blind HO
IntraFreq NULL
LteRrm_ChangeServingCellInfo - invalid State (%d)
pNewServingCellInfo is NULL
SameCellRevisit:%d
prevServCellId:%d, newServCellId:%d
SameCellRevisit:%d
IRAT HO ServingCellInfo Update
IntraFreq NULL
PrimaryCell NULL
IntraFreq NULL
Pcell Qoffset (%d -> %d)
Pcell IndOff (%d -> %d)
Listed cell (PCID:%d, Qoffset/IndOff:%d, set_type:%d)
Listed cell (PCID:%d, Qoffset/IndOff:%d, set_type:%d)
Listed cell (PCID:%d, Qoffset/IndOff:%d, set_type:%d)
Cell info is NULL
Blacklisted cell detected (earfcn : %d, cell ID : %d)
ServCellID but different CP => Ignore search_result->Candidate[%d] (Cell(%d), CP(%d))
Invalid set_type(%d) : cell ID=%d, cp=%d
No neighbor cell update : earfcn(%d), cell ID(%d), time_offset(%d), search_position(%d)
Warning! CellInfo NULL in LteRrm_UpdateDetectedNeighborCellInfo
Unid-Listed cell --> buffer ALLOC. Added to CANDI_LISTED set (PCID:%d, earfcn:%d, RAT_type:LTE)
Unid-Listed cell detected but ignore it(%d, type:%d),[%d, %d], %d
pWeakestCell m0(%d), m1(%d), m0_m1(%d)
pWeakestCell freed but not still exist : earfcn=%d, cell ID=%d
pWeakestCell corr_energy(%d)
pWeakestCell freed but not still exist : earfcn=%d, cell ID=%d
NARFCN : %d, CellId : %d, Offset : %d
LteRrm_UpdateNrCellInfo: pFreqInfo is NULL
NR SRCH RESULT[%d](earfcn:%d, cell_id:%d, frame_position:%d, rxbeam_index:0x%04x)
[DeriveSsbIndexFromCell] SRCH RESULT(ARFCN:%d PCID:%d) Failed derive SsbIndex
[DeriveSsbIndexFromCell] SRCH RESULT(ARFCN:%d PCID:%d)
Listed cell detected but ignore it(cell_id:%d, beam_timing_offset:%d corr_energy:%d)
Invalid set_type(%d) : cell ID=%d
LteRrm_ReverseBitOrderSsbBitmap : LenSsbBitmap (%d), SsbBitmap (0x%08X %08X), ReversedSsbBitmap (0x%08X %08X)
PrimaryCell=0x%x, IntraFreq=0x%x
EARFCN : %d, (max_m0 = %d, max_m1 = %d),(MaxM0 : %d, MaxM1 : %d)
SRCH Result[%d]: Cell_Id(%d) CpType(%d) frame_position(%d) CurPcellPos(%d)
[TDD only] primary cell(%d), neighbor cell(%d) - removed
SCell time offset Not Update(Primary:%d, Old:%d, New:%d, Diff:%d)
[CHECK] LteRrm_UpdateDetectedCellInfo_Scell is NULL(earfcn=%d, index:%d)
SCell time offset Update(Primary:%d, Old:%d, New:%d, Diff:%d)
pFreqInfo is NULL
EARFCN : %d, (max_m0 = %d, max_m1 = %d),(MaxM0 : %d, MaxM1 : %d)
Warning! BlackList includes SCell(earfcn:%d, pci:%d) --> Not removed from cell buffer
LteRrm_UpdateBlackList - check black_list(%d)
LteRrm_UpdateAltTttCellList
- %d. cellIndex(%d) startPCI(%d) rangePCI(%d)
LteRrm_UpdateAltTttCellList - check altTTT_list(%d)
alt-TTT cellList numGroup(%d) numTotalCells(%d)
Blacklisted cell ignored (earfcn : %d, cell ID : %d)
alternative-TTT cell detected (earfcn(%d) cell ID(%d) cellIndex(%d))
LteRrm_ResetCsgReservedList
This is CSG Reserved List Cell (EARFCN : %d, Cell ID : %d)
LteRrm_UpdateCsgCellList(), EARFCN:%d
LteRrm_UpdateCsgCellList - cell num(%d) -> MAX
LteRrm_UpdateCsgCellList - alloc fail
LteRrm_UpdateCsgProximityCellList(), EARFCN:%d
LteRrm_UpdateCsgProximityCellList - cell num(%d) -> MAX
LteRrm_UpdateCsgProximityCellList - alloc fail
LteRrm_UpdateCsgProximityUtraCellList(), UARFCN:%d
LteRrm_UpdateCsgProximityUtraCellList - cell num(%d) -> MAX
LteRrm_UpdateCsgProximityUtraCellList - alloc fail
This is CSG Cell (EARFCN : %d, Cell ID : %d)
LteRrm_ResetCsgCellList(), EARFCN:%d
LteRrm_ResetCsgCellList - abnormal num_csg_cells
LteRrm_ResetCsgCellList - abnormal csg_cell_list
This is CSG Cell (EARFCN : %d, Cell ID : %d)
LteRrm_RemoveCsgMeasList
Remove CSG Meas Request Intra EARFCN : %d
Remove CSG Meas Request Inter EARFCN : %d
Remove CSG Meas(ONLY) Request Inter EARFCN : %d
LteRrm_RemoveCsgUtraMeasList
Remove CSG Meas Request UARFCN : %d
Remove CSG Meas(ONLY) Request UARFCN : %d
LteRrm_UpdateCSGBarredList: EUTRA_List(%d),UTRA_List(%d), Restore List(%d)
LteRrm_UpdateCSGBarredList - abnormal eutra_list_size(%d) with no list
LteRrm_UpdateCSGBarredList - abnormal utra_list_size(%d) with no list
Restore cell list(i): RAT_Type(%d), (E)ARFCN(%d), Cell_ID(%d)
Unsupported RAT Type:(%d)
LteRrm_UpdateCSGBarredList - abnormal restore_cell_list_num(%d) with no list
Initialized Pcell Qoffset (%d -> 0)
num of intRA F n: %d
num of intRA F black: %d
Warning : pSIB4->csg_pci_range_present = %d
InterFreq: earfcn(%d) q_rxlevmin(%d) t_resel(%d) thresh_x_high(%d) thresh_x_low(%d) qoffset_freq(%d)
cell_resel_prio_present(%d) cell_resel_prio(%d) resel_sub_priority_present(%d) resel_sub_priority(%d)
q_qualmin_present(%d) q_qualmin(%d) thresh_x_Q_present(%d) thresh_x_Q(%d)
This Freq is not support(eNB error)(Earfcn:%d)
ERROR: Freq in SIB5 is same as Serv Freq (eNB error)
pFreqInfo NULL
pFreqInfo NULL
SIB5: q_QualPresent=(%d), q_QualMin=(%d), q_Qualminoffset=(%d), q_QualMinWBPresent=(%d), q_QualMinAllSymbolPresent=(%d)
num of inter Freq : %d
num of inter Freq black : %d
Buffer overflow: TempNewNeighFreq buffer size is 8(LTE_RRC_MAX_FREQ)
Total EUTRAN Inter FreqInfo Num(%d)
SIB6 NTF: Start UTRA FDD Config
UtraFreq FDD: arfcn(%d) q_rxlevmin(%d) q_qualmin(%d) thresh_x_high(%d) thresh_x_low(%d) cell_resel_priority(%d)(present:%d)
qthresh_x_Q_present(%d) thresh_x_Q(%d)
pFreqInfo NULL
Cannot Allocate FreqInfo buffer
UtraFreq TDD: arfcn(%d) q_rxlevmin(%d) thresh_x_high(%d) thresh_x_low(%d) cell_resel_priority(present:%d)(%d)
pFreqInfo NULL
Cannot Allocate FreqInfo buffer
Arfcn(%d), Band_Indicator(%d), AccessTechIndex(%d), Band_Supported(%d)
UnSupported GSM Band(%d), Set Default Pmax(%d)
SIB7 NTF: Start GERAN Config
( %d)[%s] SupportBand(%d), PowerClass(%d)
GeranFreq: band(%d) starting_arfcn(%d) num_of_arfcns(%d) q_rxlevmin(%d) thresh_x_high(%d) thresh_x_low(%d)
cell_resel_priority(present:%d)(%d)
pFreqInfo NULL
Cannot Allocate FreqInfo buffer
pCellInfo is NULL as a result of LteRrm_AllocCellInfoBuf()
Bandclass is empty(%d)
Cdma(HRPD) Freq: band(%d) arfcn(%d) thresh_x_high(%d) thresh_x_low(%d)
cell_resel_priority(present:%d)(%d)
pFreqInfo NULL
Cannot Allocate FreqInfo buffer
num of CDMA HRPD neighbor: %d
Bandclass is empty(%d)
Cdma(1xRTT) Freq: band(%d) arfcn(%d) thresh_x_high(%d) thresh_x_low(%d)
cell_resel_priority(present:%d)(%d)
pFreqInfo NULL
Cannot Allocate FreqInfo buffer
num of CDMA 1xRTT neighbor: %d
SIB8 NTF: Start CDMA HRPD Config
SIB8 Ptr is NULL
NULL HRPD info in SIB8
NULL 1xRTT info in SIB8
CSG Freq: earfcn(%d) cell_resel_prio(%d) q_rxlevmin(%d) q_qualmin(%d)
num of IntraFreq(earfcn:%d) CSG Cell: %d
num of InterFreq(earfcn:%d) CSG Cell: %d
pFreqInfo NULL
num of InterFreq(earfcn:%d) CSG Cell: %d
CSG Meas Req: Start CSG UTRA FDD Config
UtraFreq: arfcn(%d) cell_resel_priority(%d) q_rxlevmin(%d) q_QualMin(%d)
num of Utra Freq(uarfcn:%d) CSG Cell: %d
Cannot Allocate FreqInfo buffer
num of Utra Freq(uarfcn:%d) CSG Cell: %d
LteRrm_SortRsrpToList : pNewSortedCellInfo is NULL
LteRrm_SortRsrqToList : pNewSortedCellInfo is NULL
LteRrm_SortRssinrToList : pNewSortedCellInfo is NULL
LteRrm_SortRssiToList : pNewSortedCellInfo is NULL
LteRrm_InitGrayCellList
Not gray cell : earfcn = %d, cell id = %d
LteRrm_RemoveGrayCellList[%d]:earfcn(%d) cell_id(%d) cause(%d) startTime(%d) lastTime(%d)
Invalid cell : earfcn = %d, cell id = %d
LteRrm_FindGrayCellList[%d][cnt:%d]:earfcn(%d) cell_id(%d) cause(%d) startTime(%d) lastTime(%d)
Not gray cell : earfcn = %d, cell id = %d
LteRrm_CheckGrayCellList(EXIST MR)[%d]:earfcn(%d) cell_id(%d) cause(%d) startTime(%d) lastTime(%d)
LteRrm_CheckGrayCellList(EXIST)[%d]:earfcn(%d) cell_id(%d) cause(%d) startTime(%d) lastTime(%d)
LteRrm_CheckGrayCellList(NO TIME OUT)[%d]:earfcn(%d) cell_id(%d) cause(%d) startTime(%d) lastTime(%d)
gray cell index error
LteRrm_ReArrangeGrayCellList(%d)
Cell(Freq:%d, PCID:%d, L1_filter_length:%d) is not included in RSRP sorted list
Cell(Freq:%d, PCID:%d, L1_filter_length:%d) is not included in RSRQ sorted list
Cell(Freq:%d, PCID:%d, L1_filter_length:%d) is not included in RSSINR sorted list
NCC for GERAN cell(Arfcn:%d, BSIC:%d, RSSI:%d) is not permitted.(Set Freq:%d, ncc_permitted:0x%X)
HRPD Cell(Freq:%d, PCID:%d, RSRP:%d) is removed in RRM RSRP sorted list
1xRTT Cell(Freq:%d, PCID:%d, RSRP:%d) is removed in RRM RSRP sorted list
Cell(PCID:%d, RSRP:%d) is removed in RRM RSRP sorted list.(Freq:%d, best RSRP:%d, RSRP_Threshold:%d))
NR Cell(PCID:%d, RSRP:%d) is removed in RRM RSRP sorted list.(Freq:%d, best RSRP:%d))
LteRrm_ArrangeSortedList - default RAT(%d)
Cell(PCID:%d, RSRP:%d) is removed in RRM RSRQ sorted list.(Freq:%d, best RSRP:%d, RSRP_Threshold:%d)
LteRrm_IsCandiAndIDSetsEmpty : NR LTERRM_CANDI_DETECTED has pbch decode done cell
IDLE_S(%d)(%d) %d , (%d %d), %d, (RSRQ: %d)
CONN_S(%d)(%d) %d , (%d %d), %d, (RSRQ: %d)
%s State (%d)(%d) %d , m0(%d), TO:%d, (RSRQ: %d)
(INTRA)(EARFCN:%d)(PCID:%d) (RSRP:%4d), to:%d, (RSRQ: %4d)
(INTER)(EARFCN:%d)(PCID:%d) (RSRP:%4d), to:%d, (RSRQ: %4d)
(UTRA_FDD)(UARFCN:%d)(PSC:%d) (RSCP:%4d), to:%d, (EcNo: %4d)
(UTRA_TDD)(UARFCN:%d)(PSC:%d) (RSCP:%4d), to:%d
(GERAN)(ARFCN:%d) (BI:%d) (BSIC:%d), (RSSI:%d), To:%d
(CDMA_HRPD)(BC:%d) (BSID:%d), (PN_Strength:%d), (PN_Phase:%d)
(CDMA_1x)(BC:%d) (BSID:%d), (PN_Strength:%d), (PN_Phase:%d)
(NR)(NR-ARFCN:%d)(PCID:%d) (RSRP:%4d), to:%d, (RSRQ: %4d)
EARFCN(%d) timing change(sleep) : %d
N pos change(sleep):(%d) %d -> %d
S pos change(sleep) : %d
PrimaryCell is NULL
Updated MRU(%d) : %d
Invalid EARFCN(0x%x) received, Don't update MRU table
LteRrm_GetDlBand: NOT Supported DL_EARFCN %d!!!
LteRrm_GetUlBand: NOT Supported UL_EARFCN %d!!!
SupportEarfcnList[%d] = %d
Common Support PCI(Lock) = %d
LteRrm_CheckSupportBand: NOT Supported DL_EARFCN %d!!!
HALEXP_CheckRFBandValid: NOT Supported DL_EARFCN %d!!!
gLteRrm_SupportEarfcnList: NOT Supported DL_EARFCN %d!!!
LteRrm_CheckSupportBand: NOT Supported DL_EARFCN %d!!!
PCID(%d) could not found in LteRrm_FindEutranSCellInfo
Cannot Allocate MeasList buffer
Cannot Allocate MeasList buffer
Cannot Allocate MeasList buffer
serving cell : earfcn(%d), band(%d), PCID(%d), DL(%d), UL(%d)
Eutran(intra:%d) : PCID(%d), RSRP(%d), RSRQ(%d)
Eutran(inter:%d) : earfcn(%d) PCID(%d), RSRP(%d), RSRQ(%d)
LteRrm_InitServCellInfo
ServCellInfo: bNormalCell(%d), earfcn(%d), pcid(%d)
Set ServCellInfo.startTime(%d) - mobility history Tmr START
Set ServCellInfo.lastTime(%d)
Set ServCellInfo.spentTime(%d) - bSpentTimeMax(%d)
Update plmn-id, cell-id in ServCellInfo
Monitor ServCellInfo
- CGI:%8x, MCC:%d, MNC:%d%x, EARFCN:%d
- pcid:%d, startTime:%d, lastTime:%d
NumVisitedCell would be %d > 16 (Max size)
- removed an oldest cell(earfcn:%d, pcid:%d)
NumVisitedCell(%d)
VisitedCellList is NULL
First camp-on: bFirstVisitedCell changes (1->0)
Add current cell to VisitedCellList
- added cell(earfcn:%d, pcid:%d)
- NumVisitedCell++: %d->%d
VisitedCellList(Num:%d) ---
%d. Earfcn:%d - cellId:%d, Mcc:%d, Mnc:%d%x
- GlobalCID:%8x, spentTime:%d
LteRrm_InitVisitedCellList
LteRrm_FreeVisitedCellList
bNormalCell(%d)
- NULL information is stored in ServCellInfo
Error: bNormalCell(%d) in UpdateVisitedCellList out of range
Same cell revisit: no update for visitedCellList
LTERRM->Set.pVisitedCellList is NULL
Suspend cause(%d)
- Visited Cell list index(%d) out of range
Warning! pFreqInfo is NULL
Warning! pci(%d) out of range
LteRrm_UpdateGapFaInfo : search_result is NULL
LteRrm_UpdateGapFaInfotoL1 : NULL
LteRrm_InitGapFaInfotoL1 : NULL
LteRrm_AddNrPbchCandiList : narfcn(%d) pcid(%d) beam_index(%d) beam_timing_offset(%d) rx_beam_index(0x%04x) isSFTD(%d)
NR SFTD running in PBCH Candi List - arfcn:%d, cell_id:%d
LteRrm_RemoveNrPbchCandiFreq pNrPbchCandiList is NULL
LteRrm_RemoveNrPbchCandiFreq pNrPbchCandiList is NULL
Remove NR SFTD in PBCH candidate list - arfcn:%d, PCID:%d
LteRrm_ReleaseEndcServingFreq : NrSCellInfo[%d] - narfcn:%d is NULL
LteRrm_ReleaseEndcServingFreq : measID(%d) associated with EN-DC freq(%d)
SIB24 NTF: Start NR Config
freq_list_nr[%d] is null
NR : arfcn(%d) q_rxlevmin(%d) q_qualmin(%d) thresh_x_high(%d) thresh_x_low(%d) cell_resel_priority(%d)
thresh_x_Q_present(%d) thresh_x_Q(%d)
pFreqInfo NULL
Cannot Allocate FreqInfo buffer
LteRrm_SetNrFreqInfo : subcarrier_spacing %d meas_timing_present %d periodicity %d offset %d ssb_duration %d
>>SsbToMeasurePresent is present - NumSsbToMeasure:%d SsbToMeasure:[1]0x%08x[0]0x%08x
>>SsbToMeasurePresent is not present - NumSsbToMeasure:%d SsbToMeasure:[1]0x%08x[0]0x%08x
Unexpected freqBandIndicatorNR_r15:%d
LteRrm_GetNrDuplexMode - freqBandIndicatorNR_r15:%d duplexMode:%s((enum)%d)
LteRrm_IsAllowedDeriveSsbIndexForFreq - Arfcn:%d
>>bAllowed:(bool)%d - bTargetCellFound:(bool)%d duplexMode:%s((enum)%d) bDeriveSsbIndexFromCell:(bool)%d
LteRrm_DeriveSsbIndexUsingSrchResult - search_position:%d
>>pTargetCell is null
>>twoSsbSymbolLength:%d(SCS:(enum)%d)
LteRrm_DeriveSsbIndex - SsbTimingOffset:%d Tolerence:%d
>>FOUND SsbIndex:%d(TimingOffset:%d) - VERIFY difference:%d with Tolerence:%d
>>INVALID - Difference exceed Tolerence
LteRrm_CheckBlindDetectedNrCell - cell ID(%d) is blind detection done
