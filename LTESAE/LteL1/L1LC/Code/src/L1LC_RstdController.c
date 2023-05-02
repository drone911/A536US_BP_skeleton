[RSTD] L1LC State Changed [%s --> %s]
[RSTD] FLAGS :: LPP PROFILE [0x%x] FT[%d] ATT_FT[%d] TMO_FT[%d] LGU_FT[%d] VZW[%d] KDDI[%d]
[RSTD] [RRM => L1LC] Enter L1LC_ProcessOtdoaMeasReq
[RSTD] ERROR!!! Received NULL L1LC_ProcessOtdoaMeasReq...
[RSTD] Recieved OTDOA Measurement Request while already processing another request...
[RSTD] [SAME CELL FILTER] Freq Count [%d] Cell Count [%d] - Cell ID [%d] earfcn [%d] Iprs [%d] Nprs [%d] PrsBw [%d]
[RSTD] |>>>--------------------------------OTDOA MEASUREMENT REQUEST-------------------------------->>>
[RSTD] |>>>---OTDOA MEASUREMENT REQUEST Report Interval [%d ms] Report Amount [%d] ResponseTimeEarlyFix [%d ms] ------->>>
[RSTD] Freq Count [%d] :: Cell Count0 [%d] Cell Count1 [%d] Cell Count2[%d] Max Attempt[%d]
[RSTD] IC Count0 [%d][0x%x] IC Count1 [%d][0x%x] IC Count2[%d[0x%x]]
[RSTD] No Serving Cell Found in Assistance Data
[RSTD] :: Send Available OTDOA Measurement response
[RSTD] Process HAL_L1LC_RSTD_MEASURE_DONE_IND
[RSTD] Meas Results are discarded for the Assisted Data Cell[%d][%d] = %d, Cell ID [%d], RstdMeasDone [%d], peak[%d], max_peak[%d]
[RSTD] NCell[%d][%d] PCID[%d] peak[%d] FinalThr[%d] mute_pattern[0x%x] OccIn16bit[0x%x]
[RSTD] Results are discarded for all the N cells, since gL1LC_RstdDB.Now_MeasuringCells_Cnt = %d
[RSTD] RefCell PCID[%d] Measured[%d] valid[%d] mute_pattern[0x%x] OccIn16bit[0x%x]
[RSTD] Process HAL_L1LC_RSTD_SCHEDULE_IND: State[ %s ]
[RSTD] Sending RSTD Measurement for the measured Neighbours
[RSTD] gL1LC_Report_Count[%d]
[RSTD] Reporting to LPP is completed
[RSTD] State[ %s ] HO Triggered(earfcn:%d, Cell ID:%d) During RSTD Measurement
[RSTD] State[ %s ] Serving Cell(earfcn:%d, Cell ID:%d) Reference Cell(earfcn:%d, Cell ID:%d)
[RSTD] SCell(earfcn:%d, Cell ID:%d) is found, No need of exchanging the Reference cell
[RSTD] --------Reference Exchange Success---------
[RSTD] No Cell found in Assistance Data Cell
[RSTD] Next PRS Occ - prsSfnTti[%d] prsElem[%d] Iprs[%d] Tprs[%d] CurSfnTti[%d]
[RSTD] AT CMD: OTDOA REQ Processing[CMD:%d]
[RSTD] REFERENCE CELL CONFIG : Cell ID[%d] EARFCN[%d] I_PRS[%d] CP/ANT/PRS_BW/NPRS[%04d]
[RSTD] NEIGHBOUR CELL CONFIG[%d][%d]: Cell ID[%d] EARFCN[%d] I_PRS[%d] CP/ANT/PRS_BW/NPRS[%04d] E RSTD[%d]
[RSTD] AT CMD: OTDOA ACTIVATION[%d]
[RSTD] AT CMD: OTDOA DE-ACTIVATION[%d]
[RSTD] Invalid OTDOA Sub Command[%d]
[RSTD] ADD GAP Element(%d) : freq layer[%d], cell idx[%d], earfcn[%d], prsOffset[%d]
[RSTD] ADD GAP Element(%d) : freq layer[%d], cell idx[%d], earfcn[%d], prsOffset[%d]
[RSTD] Error: Update OTDOA_UNABLE_TO_MEASURE_SOME_NEIGHBOURS Layer[%d], numMeasuredCells[%d], AssistanceData Cells[%d] !!!
[RSTD] L1LC_ProcOtdoaMeasureRsp : Layer[%d] Number Of Cells Reporting [%d], Total Measured Cells [%d]
[RSTD] Response Cell ID[%d] - RSTD[%d], Prs Max Peak[%d], MeasQuality[Resolution:%d, ErrorValue:%d, NumSample:%d]
[RSTD] Error: Update OTDOA_UNABLE_TO_MEASURE_ALL_NEIGHBOURS (totalMeasuredCells:%d) !!!
[RSTD] OTDOA AT CMD REQ[%d]: RSP is not sent to RRM
[RSTD] UpdateFap : cell id:%d, fapIdx:%d, max_peak:%d, cellpeak:%d peakRemovedSampleCnt:%d
[RSTD] UpdateFap : Cell ID:%d, Fap:%d, Num Samples:%d, Max Peak:%d, Total Peak:%d
[RSTD] UpdateFap : error.resolution:%d, error.value:%d, error.num_sample:%d, error.sub_resolution: %d, error.sub_num_sample: %d peakRemovedSampleCnt: %d
[RSTD] STDEV_FAP_DB : Cell ID[%d] Earfcn[%d] index[%d] Fap[%d] DEBUG[%d %d]
[RSTD] ============= STDEV_FAP_DB: PCID[%d], Resolution[%d], Value[%d], numSample[%d], removedNumSample[%d] =============
[RSTD] ============= STDEV_FAP_DB: error_stdev[%d], avg_square[%d], square_avg[%d] =============
[RSTD] ========================== L1LC_RstdRemoveAbruptFapDebugDb: numCells[%d] ==============================
[RSTD] -----------------------------------Remove Abrupt Fap: PCI[%d] numFap[%d]-------------------------------------
[RSTD] change best_fap1 Best Fap1[Fap:%d, total:%d, cnt:%d]
[RSTD] Remove Abrupt Fap: Fap1_Selected[%d], Best Fap1[Fap:%d, num:%d], Best Fap2[Fap:%d, num:%d]
[RSTD] Remove Abrupt Fap: Fap1_Selected[%d], Best Fap1[%d, %d], Best Fap2[%d, %d], fapWin[%d to %d]
[RSTD] Remove Abrupt Fap: Discard Index[%d], Fap[%d]
[RSTD] Remove Abrupt Fap: Discard Index Range[%d to %d], Fap[%d]
[RSTD] [DEBUG]SUB_STDEV_FAP_DB: PCID[%d], avg_square[%d], square_avg[%d], innerSampleCnt[%d], Fap[%d]
[RSTD] [DEBUG]SUB_STDEV_FAP_DB(remove): PCID[%d], numSample[%d], MeasCnt[%d]
[RSTD] ============= SUB_STDEV_FAP_DB: PCID[%d], Resolution[%d], innerSampleCnt[%d], FapWindow[%d]=============
[RSTD] ============= SUB_STDEV_FAP_DB: error_stdev[%d], avg_square[%d], square_avg[%d]=============
[RSTD] FAP_DB : Cell ID[%d] Earfcn[%d] index[%d] Fap[%d] Peak[%d] total_meas[%d]
[RSTD] L1LC_RstdFilterOtdoaMeasuredCells : AllCellsMeasCnt[%d]
[RSTD] [DEBUG] Measurement Cnt too few(%d) Cell ID:%d, Num Samples:%d
[RSTD] NumSample Normalize : Cell ID:%d, Num Samples:%d, Normalized Samples:%d, Peak:%d, Fap:%d, resolution:%d, Total Sample:%d
[RSTD] Filtered Response List : Cell ID:%d, Num Samples:%d, Peak:%d, Fap:%d, numCellsReporting:%d, Ts delta offset:%d
[RSTD] Filtered Response List :peakRemovedNumSample(%d), error_sample(%d)
[RSTD] Removed 1: Cell ID:%d, Num Samples:%d, Peak:%d, Fap:%d, numCellsReporting:%d, Max Peak:%d
[RSTD] Removed 2: Cell ID:%d, num_meas:%d, ignored:%d, big_fap_diff:%d, num_meas_avgd:%d, num_meas_avgd_max:%d, num_meas_reinit:%d
[RSTD] Reporting 1: Cell ID:%d, Num Samples:%d, Peak:%d, Fap:%d, numCellsReporting:%d, Max Peak:%d, minPeak:%d
[RSTD] Reporting 2: Cell ID:%d, Num Samples:%d, Peak:%d, Fap:%d, numCellsReporting:%d, Max Peak:%d, minPeak:%d
[RSTD] Reporting 3: Cell ID:%d, Num Samples:%d, Peak:%d, Fap:%d, numCellsReporting:%d, Max Peak:%d, RefMaxPeak:%d
[RSTD] Reporting 4: Cell ID:%d, Num Samples:%d, Peak:%d, Fap:%d, numCellsReporting:%d, Max Peak:%d, minPeak:%d
[RSTD] Removed 3: Cell ID:%d, Num Samples:%d, Peak:%d, Fap:%d, numCellsReporting:%d, Max Peak:%d
[RSTD] Filtered Response List : Resolution:%d, expectedRstd:%d, Nw e_rstd:%d, Num Samples:%d, numCellsReporting: %d, numCellThrPass: %d, sub_Resolution:%d
[RSTD] Sort by Peak Value and then by Num Samples: Layer[%d], Measured N Cells [%d]
[RSTD] Sorting Not Required : numCellCount[%d]
[RSTD] Sort by Num Samples and then by Peak Value : Layer[%d], Measured N Cells [%d]
[RSTD] Sorting Not Required : numCellCount[%d]
[RSTD] ============= PRS Error: PCID[%d], Peak[%d], serving snr[%d], ref peak[%d][%d] =============
[RSTD] ============= PRS Error: PCID[%d], Resolution[%d], Value[%d], PRS SINR[%d][%d][%d][%d] =============
[RSTD] Response Last Measured SFN : %d
[RSTD] L1LC_RstdUpdateRefRspInfo : Send OTDOA_UNABLE_TO_MEASURE_REFERENCE (NumOfAttempts:%d, numOfValid:%d)
[RSTD] Reference FAP[Avg:%d, Total:%d, numSample:%d, numAttempts:%d]
[RSTD] Neighbour Cell ID[%d] - RSTD[%d], Prs Max Peak[%d], MeasQuality[Resolution:%d, ErrorValue:%d, NumSample:%d], numMeasuredCells[%d]
[RSTD] Discard Far Cell ID[%d] - RSTD[%d], Prs Max Peak[%d], MeasQuality[Resolution:%d, ErrorValue:%d, NumSample:%d], numMeasuredCells[%d]
[RSTD] Post-Discard Final freq_index[%d] numCellsReporting[%d]
[RSTD] Sort by AssistanceData: Layer[%d], Measured N Cells [%d]
[RSTD] State[ %s ] RRE/HO/RELEASE Triggered During RSTD Measurement
[RSTD] Error Cause Updated [0x%x]
[RSTD] Entering in L1LC_StartRstdMeasurement
[RSTD] Periodic Timer has started. Timer Expires in (%d) mS
[RSTD] No Response time from LPP. Default Periodic Timer has started. Timer Expires in 1900 mS
[RSTD] Need to early response according to ResponseTimeEarlyFix[%d ms] - AvailablePRSOccForEarlyRsp [%d]
[RSTD] Current State:DRX(Idle or Connected): Wakeup Modem and Measure RSTD
[RSTD] Available PRS Occassions[%d] Estimated Time for Measurement [%d ms], localPrsOcc[%d]
[RSTD] -----------SCHEDULER -> Gap Req Ind (%d), Measured Freq Layers (%d) -------------
[RSTD] No Layer has been selected for next PRS Occasion
[RSTD] No Measurement Element
[RSTD] Start Forced Sync: mode(%d) earfcn(%d) bw(%d)
[RSTD] L1LC_RstdGetNextInterFreq: nextGapBoundary > GAP_READY_HW_OFFSET
[RSTD] L1LC_RstdGetNextInterFreq: GapEnable[%d], GapPeriod[%d]
[RSTD] Inter-Frequency Layer[%d]-Neigh freq[%d] Gap freq [%d] - Measure Layer
[RSTD] Inter-Frequency Layer[%d]-Neigh freq[%d] Gap freq [%d] - Skip Layer
[RSTD] pal_GetChipName (%x), serving_BW (%d), prs_Info.bandwidth(%d),numDLsubframe(%d)
[RSTD] L1LC_RstdScheduleNeighCells: reducing maxNeighCnt
[RSTD] | STATISTICS - LAYER [%d] CELL COUNT [%d] MEASURED COUNT [%d], isIntraMeasure[%d], measReference[%d] maxNeighCnt[%d]
[RSTD] L1LC_RstdScheduleNeighCells: gL1LC_RstdDB.Now_MeasuringCells_Cnt[%d]
[RSTD] L1LC_RstdScheduleNeighCells: PRS_OCC_IN_16BIT:0x%x prsElem:%d
[RSTD] L1LC_RstdGetNeighCells : Layer [%d] NonMeasuredCells[%d] maxNeighCnt[%d] Measuring Cell Cnt[%d]
[RSTD] SCHEDULED NEIGHBOUR CELL [%d][%d] Cell ID [%d] for the PRS OCCASION SFN[%d]
[RSTD] CANDIDATE NEIGHBOUR CELL [%d][%d] CELL ID [%d] HAS MUTING IN NEXT PO SFN[%d] PRS ELEMENT [%d]
[RSTD] CellIndex[%d] Not Scheduled Again
[RSTD] Intra-Frequency Gap Invalid - Layer[%d]-Neigh freq[%d] Ref freq[%d] - Skip Layer
[RSTD] Intra-Frequency Layer[%d]-Neigh freq[%d] Serv freq[%d] - Measure Layer
[RSTD] Layer[%d]-Neigh freq[%d] - Skip this Freq Layer for current Measurement Interation due to Gap Non Availability
[RSTD] L1LC_RstdAllNCellsMeasured : AllCellsMeasCnt[%d], MaxAttempts[%d]
[RSTD] L1LC_RstdCheckPrsOccElapsed: Available PRS Occasions for measurements[%d] Available PRS Occasions for early response[%d]
[RSTD] Available PRS Occasions for measurements have elapsed!!! Sending the Response...
[RSTD] Available PRS Occasions for measurements have elapsed!!! Sending the early Response...
[RSTD] Meas Referece Cell : prsElem[%d], prsSfnTti[%d], muteLen[%d], mutePattern[%d]
[RSTD] Enter L1LC_ProcOtdoaMeasureEarlyRsp
[RSTD] L1LC_ProcOtdoaMeasureEarlyRsp : Layer[%d] Number Of Cells Reporting [%d], Total Measured Cells [%d]
[RSTD] Early Response Cell ID[%d] - RSTD[%d], Prs Max Peak[%d], MeasQuality[Resolution:%d, ErrorValue:%d, NumSample:%d, sub_error_num_sample(prev_num_sample):%d]
[RSTD] Error: Update OTDOA_UNABLE_TO_MEASURE_ALL_NEIGHBOURS (totalMeasuredCells:%d) !!!
[RSTD] OTDOA AT CMD REQ[%d]: RSP is not sent to RRM
[LTE DSDS] assert condition : RSTD nCellCount >= L1LC_RSTD_MAX_NEIGH
[LTE DSDS] assert condition : Input data pRstdCell[%d] is NULL
[RSTD] CELL#0 ID [%d], CELL#1 ID [%d], CELL#2 ID [%d], CELL#3 ID [%d]
[RSTD] CELL#4 ID [%d], CELL#5 ID [%d], CELL#6 ID [%d]
[RSTD] CONFIGURED CELL :: CELL %d : TS OFFSET(%d) ERSTD(%d) ERSTD UNCER(%d) MUTING(%d))
[RSTD] WARNING!!! First PRS TTI ISN'T DL SubFrame!! TD-Config [%d], PRS TTI StartOffset [%d]
[RSTD] L1LC_RstdSendDspPRSInfo() : CurSfnTti [%d]
[RSTD] CC%d Cell ID(%d) PRS_Elem [%d]: Muted for Next Occasion
[RSTD] CheckRstdInterFreq : Inter-Frequency cells have not been configured
[RSTD] CheckRstdInterFreq : Layer[%d] earfcn[%d] is still being measured, hence no additional request
[RSTD] Gaps are sufficient to measure the Next Layer [%d] Earfcn [%d]
[RSTD] CheckRstdInterFreq Layer[%d] -Neigh freq[%d] interFreqFound[%d] reqInterGap[%d]
[RSTD] Gaps are sufficient to measure the Next Layer [%d] Earfcn [%d]
[RSTD] CheckRstdInterFreq Layer[%d] -Neigh freq[%d] reqInterGap[%d] interFreqFound[%d] reqLayers[%d]
[RSTD] Command[%d] Earfcn[%d] GapCheck[%d] PrsInterval[%d to %d] GapInterval[%d to %d]
[RSTD] EARFCN[%d] PCID[%d] General RstdICOnOff[%d] RefCurMeasured[%d] fap_Results[%d] compensated noIC[%d]
[RSTD] Cell ID [%d] Measured Cell[%d][%d] Update with NEW Results - [Fap_Results = %d, peak_value = %d] reinit=%d
[RSTD] Cell ID [%d] Measured Cell[%d][%d] Keep OLD Results - NEW[Fap_Results = %d, peak_value = %d] ignored=%d bigdiff=%d
[RSTD] Cell ID [%d] Measured Cell[%d][%d] Fap_Results = %d, peak_value = %d, avgd=%d(max=%d)
[RSTD] Cell ID [%d] Measured Cell[%d][%d] Fap_Results = %d, peak_value = %d, cellFound = %d, num_sample/ErrorValue = %06d
[RSTD] OTDOA REFERENCE CELL Start : Cell ID [%d] earfcn [%d] Iprs[%d] Nprs [%d] PrsBw [%d] Ant Port[%d]
[RSTD] MuteLen [%d] MutePattern [0x%X] ERstd[%d] Erstd_Un [%d] timeOffset [%d]
[RSTD] --------------------------------OTDOA NEIGHBOUR CELLS--------------------------------
[RSTD] Freq Count [%d] Cell Count [%d] - Cell ID [%d] earfcn [%d] Iprs [%d] Nprs [%d] PrsBw [%d]
[RSTD] MuteLen [%d] MutePattern [0x%X] ERstd[%d] Erstd_Un [%d] timeOffset [%d] PrsSfOffset [%d], Ant Port[%d]
[RSTD] Same Cell as Reference has been received in the Neighbour List !!!!!
[RSTD] ------------------------------------------------------------------------
[RSTD] Found MFBI Earfcn: Layer[%d] AssistanceEarfcn[%d], ServingEarfcn[%d], Frequency[%d]
[RSTD] CA Info: CC%d[found:%d], PRS[Iprs:%d, Nprs:%d, bw:%d]
[RSTD] FAP_DB MAXIUM CELL NUMBER : Cell ID[%d] Earfcn[%d] index[%d]
[RSTD] Validate: Invalid Cell ID[%d]
[RSTD] Validate: Invalid Antenna Config[%d]
[RSTD] Validate: Invalid CP Type[%d]
[RSTD] Validate: Invalid PRS BW[%d]
[RSTD] Validate: Invalid I PRS[%d]
[RSTD] Validate: Invalid N PRS[%d]
[RSTD] Validate: Invalid Muting Size[%d]
[RSTD] L1LC_RstdExchangeReferenceCell: Target earfcn[%d] Cel ID[%d]
[RSTD] Exchange REF: Inter-Frequency. Src earfcn[%d] Target earfcn[%d]
[RSTD] Exchange Measured Results: No Response Cell found : pRstdCell[%d], Cur Serving Num Sample[%d]
[RSTD] L1LC_RstdGetMatchedCell: Cell Found: layer[%d], cell idx[%d]
[RSTD] L1LC_RstdGetPrsElem : Iprs[%d], Dprs[%d], Tprs[%d], CurSfnTti[%d], prsElem[%d], prsSfnTti[%d]
