pal_MemAlloc() failure
GL1 => MMC :: HEDGEL1_MMC_GSM_TIMING_LATCH_CNF Sending Fail
Failed to free the memory
GL1 => MMC :: HEDGEL1_MMC_GSM_TIMING_LATCH_CNF [SIM &D]
Mux Change to 2G will happen in %d frames
[GL1 Error] No Memory Allocated
GL1 => MMC :: HEDGEL1_MMC_LTE_SEARCHMEASURE_STOP_REQ (PWR DOWN) simno:%d
GL1 => MMC :: HEDGEL1_MMC_LTE_SEARCHMEASURE_STOP_REQ (PWR DOWN) Sending Fail
pal_MemFree failure
LMM: LTE_CELL_SEARCH/MEASURE canceled due to LTE measurement disabled / Invalid Latch State[simno %d] :%d
LMM: LTE_CELL_SEARCH/MEASURE canceled due to BCCH/PCH Read in PTM
[G2L] Warning! Latch Diff 1FN!, Meas Length is reduced as 1 FN.
[G2L] Warning! Latch TIme Diff too long, ignore measurement! ReqFn(%d) CnfFn(%d)
[G2L] LMM: l1x_LmmCellSearch_Adapter (FN %d) simno:%d
[GL1 Error] No Memory Allocated
[G2L] LMS_PTM_INDEX => Cell Search
[G2L] EARFCN %d not in List
[G2L] Adapt TIme :: DUR (%d %d) START (%d %d)
Target EARFCN not found
Target EARFCN not found
[G2L] 2G DELTA Latch Time Qb(%d) - mod 614400 x 6 (60ms) will be set.
[G2L] L Offset = (%d)
[G2L] == LTE TIME CALCULATION for Frame Position
[G2L] Result (%d)L_Offset = B-(A+a)
[G2L] Result (%d)L_Offset = mod 614400
[G2L] cellPtr->framePos(%d) LteDeltaFramePos(%d)
Cell ptr not found
[G2L] == LTE TIME CALCULATION for GAP Start Position
[G2L] 2G DELTA GAP (%d)Qb (%d)us LatchedSrchTime(%d) added_compensation (%d)
[G2L] LTE 1st Offset before Checking Roll-Back for Max Num (%d, %d, %d)
[G2L] CONVERTED TIME LTE START <SFN(%d) TTI(%d) Offset(%d)> DUR <TTI (%d) Offset(%d)>
LMS: LTE_CELL_SEARCH - DEFAULT AGC/AFC is updated
[G2L] LTE_CELL_SEARCH [%d] AGC1/2 (%d, %d) AFC (%d)
GL1 => MMC :: HEDGE_MMC_LTE_CELL_SEARCH_REQ Sending Fail
pal_MemFree failure
pal_MemFree failure
LMM: l1x_LmmCellMeasure_Adapter for Earfcn[%d] simno:%d
[GL1 Error] No Memory Allocated
[G2L] LMS_PTM_INDEX => Cell Measure
[G2L] Adapt TIme :: DUR (%d %d) START (%d %d)
[G2L] EARFCN %d not in List
[GL1 Error] EARFCN object is not found
########## GSM TIME CALCULATION for Frame Position
[G2L] 2G DELTA Latch Time Qb(%d) - mod 614400 x 6 (60ms) will be set.
[G2L] QB -> MicroSec(%d)
[G2L] mod 10ms = (%d)
[G2L] L Offset = (%d)
########## LTE TIME CALCULATION for Frame Position
[G2L] LTE Original Diff OFFSET (%d) = A+a
[G2L] LTE Original Diff (%d)L_Offset = mod 614400
[G2L] Result (%d)L_Offset = B-(A+a)
[G2L] Result (%d)L_Offset = mod 614400
[G2L] 2G DELTA GAP (%d)Qb (%d)us
[G2L] LTE_CELL_MEAS : Searching Frame Position Information
[G2L] LTE_CELL_MEAS : Target Cell ID (%d)
[G2L] LTE_CELL_MEAS : cellCounterMMC (%d)
[G2L] LTE_CELL_MEAS : Only Updating FrPos, not Meas Req element
[G2L] LTE_CELL_MEAS : Updating all values to to be included in MEAS REQ
[G2L] LTE_CELL_MEAS(lastTime %d) CellId (%d) FramePos Ori (%d) => New (%d) measBW(%d)
[GL1 Error] Cell object is not found
[G2L] LTE 1st Offset before Checking Roll-Back for Max Num (%d, %d, %d)
[G2L] CONVERTED TIME Delta to START Pos (G->L) SFN(%d) TTI(%d) Offset(%d) -> [Result Start Pos TTI(%d) Offset(%d)]
[G2L] CONVERTED TIME LTE START <SFN(%d) TTI(%d) Offset(%d)> DUR <TTI (%d) Offset(%d)>
[G2L] LTE_CELL_MEASURE EARFCN [%d] numOfCell (%d)
GL1 => MMC :: HEDGE_MMC_LTE_CELL_MEASURE_REQ Sending Fail
pal_MemFree failure
pal_MemFree failure
LMS: Earfcn(%d) is not found in DB so TimingLatch not build
LMS: l1x_LmmBuildTimingLatchReq TYPE (%d -<11:SRCH 12: MEAS>) LatchSim:%d
[GL1 Error] No Memory Allocated
GL1 => MMC :: HEDGE_MMC_LTE_TIMING_LATCH_REQ (CUR_FN %d)
GL1 => MMC :: HEDGE_MMC_LTE_TIMING_LATCH_REQ Sending Fail
pal_MemFree failure
LMS: l1x_LmmCellSrchMeas_Adapter for Earfcn[%d] simno:%d
LMS: LTE_CELL_SEARCH_MEASURE canceled as No EARFCN or LTE measurement disabled or L1C_WAIT l1x_toggle_pending %d
[GL1 Error] No Memory Allocated
GL1 => MMC :: HEDGE_MMC_LTE_TIMING_LATCH_REQ
GL1 => MMC :: HEDGE_MMC_LTE_TIMING_LATCH_REQ Sending Fail
pal_MemFree failure
LMS: [SIM1] last search&meas time is %d for EARFCN(%d)
LMS:[SIM2] last search&meas time is %d for EARFCN(%d)
LMS: Abort meas as Latch cnf %u is delayed, diff %u currTime %u
[GL1 Error] No Memory Allocated
[G2L] TimingLatchCnf - LMS_IDLE_INDEX => Cell Search Measure
GL1 => MMC :: HEDGE_MMC_LTE_SEARCHMEASURE_REQ
GL1 => MMC / G2L Measurement:: EARFCN (%d), MeasBandwidth (%d)
GL1 => MMC :: HEDGE_MMC_LTE_SEARCHMEASURE_REQ Sending Fail
pal_MemFree failure
LMS: last search&meas time is %d for EARFCN(%d)
LMS: EARFCN (%d) Not in Lmm DB
pal_MemFree failure
[G2L] Need to check SEARCHMEASURE scheduling
