activeStackId %d phych type does not belong to Sccpch : cctrchnr %d, phychNr %d, phych Type %d
TFCI: guiding_trch_nr = %d, tbSize %d
TFCI: guided_trch_nr = %d
uhal_HmcpBtfdFindChannelTypes: tfc_num %d, trch number %d, tf %d, tb_number %d, tb size %d
Warning !! BTFD format not found
uhal_HmcpDlCctrchBtfdSetTfiValues, cfn %d, guiding channel is %d
Power Ratio Btfd: Pd %d Pc %d Ptpc %d
activeStackId %d phychStr is NULL
[%s] static_pars.trch_num %d, isDummyPsChConfigured %d, trch_num %d, tb_number %d, tb_size %d, amr_configured %d
[RegWrite] uhal_HmcpDlCctrchCalcStaticPars Max TF : %d (%d)
uhal_HmcpDlCctrchCalcStaticPars Array out of bound%d
Max number of TFs for explicitly detectable channels exceeds 16!!!
uhal_HmcpDlCctrchCalcStaticPars:Array index out of bound hmcpCctrchPtr->static_pars.trch_num=%d
[RegWrite] LVIT TrCH0 : %d (tb size : %d)
[RegWrite] LVIT TrCH1 : %d (tb size : %d)
[AMR Slot Decoding::uhal_HmcpDlCctrchUpdateStaticInfo] isAmrSlotDecodingRegistryOn %d, isStaticConditionSatisfied %d, amrNData %d, slot_format %d, MinBtfdTrchNum %d
[uhal_HmcpDlCctrchWriteBtfdPars] btfd_trch_nr %d, n_tf %d, code_len0 %d, code_len1 %d, code_len2 %d
[RegWrite] List Viterbi TrCH Selection2 : %i
Set PCDRS only cctrch_nr=%d
[TTI] CcTrCH %d - trch_nr: %d, hw trch_nr: %d, tti: %d, dlTrchString: %x
[AMR Slot Decoding::uhal_HmcpAmrSlotDecodingInfoAndRegReset] uhal_HmcpAmrSlotDecodingInfoAndRegReset called
activeStackId %d [AMR Slot Decoding::uhal_HmcpAmrSlotDecodingModeOff] uhal_HmcpAmrSlotDecodingModeOff called
activeStackId %d [AMR Slot Decoding::AmrSlotDecodingSync10InterruptHandler] even frame, cfn=%d, isCrcGoodForAmr = %d, slotDecodingUpToSlotNumberTTI = %d
activeStackId %d [AMR Slot Decoding::(Even)] slot decoding success at slotNumber %d of previous TTI (or this is first frame of AMR)
activeStackId %d [AMR Slot Decoding::(Even)] slot decoding fail at prev frame up to %d. full slot decoding start, skip=%d
activeStackId %d [AMR Slot Decoding::(Even)] uhal_CHmcpIsAmrSlotDecodingEnabledTTI is changed ( FALSE -> TRUE ) normal decoding will start.
activeStackId %d [AMR Slot Decoding::(Even)] RF is on. buffer start.
activeStackId %d [AMR Slot Decoding::AmrSlotDecodingSync10InterruptHandler] odd frame, cfn=%d, isCrcGoodForAmr = %d, slotDecodingUpToSlotNumberTTI = %d
activeStackId %d [AMR Slot Decoding::(Odd)] decoding already successed at previous even frame, uhal_CHmcpIsAmrSlotDecodingEnabled() == TRUE, SP_START will be omitted
activeStackId %d [AMR Slot Decoding::(Odd)] decoding already successed at previous even frame, uhal_CHmcpIsAmrSlotDecodingEnabled() == FALSE
activeStackId %d [AMR Slot Decoding::(Odd)] isCrcGoodForAmr is FALSE at slotNumber %d
activeStackId %d [AMR Slot Decoding::AmrSlotDecodingDecodingDoneInterruptHandler] Slot Dec to Normal Dec transition
activeStackId %d [AMR Slot Decoding::AmrSlotDecodingDecodingDoneInterruptHandler] Full slot (Prev 30 Slot) decoding done
activeStackId %d [AMR Slot Decoding::AmrSlotDecodingDecodingDoneInterruptHandler] AMR slot decoding Done
[AMR Slot Decoding::%s] FQM of guided channel is lower than TF0/1 of guiding channel. Set isCrcGoodForAmr to False.
activeStackId %d [AMR Slot Decoding::AmrSlotDecodingDecodingDoneInterruptHandler] RF will be off at slot %2d
[AMR Slot Decoding::AmrSlotDecodingDecodingDoneInterruptHandler] RF will not off (isSlotDectoNormalDecTransition = %d)
[AMR Slot Decoding::AmrSlotDecodingDecodingDoneInterruptHandler] RF will not off (slotDecodingUpToSlotNumberTTI = %2d , isAmrSlotDecodingEnabled = %d , isSrchBuffering = %d, isSlotDectoNormalDecTransition = %d)
activeStackId %d [AMR Slot Decoding::AmrSlotDecodingDecodingDoneInterruptHandler] Good CRC at slotNumber: %2d
activeStackId %d [AMR Slot Decoding::AmrSlotDecodingDecodingDoneInterruptHandler] isCrcGoodForAmr = FALSE up to SlotNumber=%d, Retry slot decoding including the next slot
[AMR Slot Decoding::uhal_CHmcpIsAmrSlotDecodingEnabled] isStaticConditionSatisfied %d, isNormalBchOrBchForRefCellConfigured %d, isHspaOrCompressedModeConfigured %d, isHHOorRollbackTakingPlace %d, isSrbDetected %d, isWeakSignalArea %d, result %d
[AMR Slot Decoding::uhal_CHmcpIsAmrSlotDecodingEnabled] isStaticConditionSatisfied %d, isFirstSRBReceive %d, result %d
activeStackId %d [AMR Slot Decoding::uhal_CHmcpIsAmrSlotDecodingEnabledTTI] uhal_CHmcpIsAmrSlotDecodingEnabledTTI %d return_value %d
activeStackId %d [AMR Slot Decoding::uhal_CHmcpIsAmrSlotDecodingParmSet] type %d, value %d
activeStackId %d [AMR Slot Decoding::uhal_CHmcpIsAmrSlotDecodingParmSet] Unknown flagType %d, value %d
[AMR Slot Decoding::uhal_CHmcpIsAmrSlotDecodingParmGet] Unknown flagType %d
uhal_HmcpDlCctrchWriteChDecoderPars_1 - cctrch_nr %d, trch_nr %d, reg_nr %d, trch_tfi %d, tb_number %d, tb_size %d, crc_size %d
uhal_HmcpDlCctrchWriteChDecoderPars_2 - code_unit %d, code_len %d, filler_bits %d, codeType %d, code_rate %d
[IPC:IPC_CONSUMER_ACTION_ID_DSP_CMINFO_UPDATE_REQUEST] execution=%d
Next frame is GAP and send IPC(with tgl): %d
activeStackId %d TGNR Error!
activeStackId %d TGPosition Error!
tgNr=%d tgsn=%d tgl=%d cm_method=%d frameCompressionMode=%d
uhal_HmcpDlCctrchCalcCmPcdrs: cm_N_tr=%d dlFrameType=%d, ulDlCompressedMode=%d
cm_slot_format=%d n_data1=%d n_data2=%d n_tpc=%d n_tfci=%d n_pilot=%d
uhal_HmcpDlCctrchWriteCmPcdrs: dpch_data_gap=0x%x, n_tfci_slot_cm =%d
activeStackId %d synch_buf_ptr is %d
activeStackId %d uhal_HmcpDlCctrchWriteCmPcdrs Array index out of bound %d
activeStackId %d [Before Start ASCC] Abnormal operation has detected for ALT SCR CODE Change scheme
activeStackId %d uhal_HmcpDlCctrchWriteCmPcdrs: RL=%d sf=%d ovsf_code=%d current_cfn=%d
activeStackId %d Wrong phyChNr (%d). Compressed mode is possible in a dedicated mode when phyChNr is 0
U-HAL DL BTFD: Could not detect tfci value! Force tfci to 0!
[RegWrite] CcTrCH%d - (data1, data2, tfci, tpc, pl) : %x, %x, %x, %x, %x
activeStackId %d Restore: RL%d - slotformat=%d sf=%d ovsf_code=%d
activeStackId %d [DBG ALT SCC] Come in by scramblingCodeChange %d, scramblingCodeChangeDone %d & StopAltScrCodeChange %d
activeStackId %d [DEBUG SIR DROP] Restore is not working correctly due to wrong PhychStr 0x%x
DLPC: targetSIR=%d(%d[dBx1000]), delta_i=%d(dBx1000), targetSIR in CM=%d[dB*1000], sir_offset=%d sir_target=%d
frameCompressionMode %d, tgNr %d, P1_coding %d, P2_coding %d, delta_i %d
SYNC10_0_HISR execution failure
SYNC10_1_HISR execution failure
SYNC10_2_HISR execution failure
SYNC10_3_HISR execution failure
SYNC10_14_HISR execution failure
SYNC10_15_HISR execution failure
DSDS_SYNC10_0_HISR execution failure
DSDS_SYNC10_1_HISR execution failure
DSDS_SYNC10_2_HISR execution failure
WAKEUP_AFTER_SLOT_DECODING_HISR execution failure
activeStackId %d uhal_SetDchRfPauseReceived : %d
activeStackId %d sync10_0, cctrch 0, PCH / FACH / DCH / CBS 0
activeStackId %d, Warning!! Phych released but sync10_0 was triggered
activeStackId %d frame_boundary_toggle=%d, isBtfdInterruptEnabled=%d
activeStackId %d sync10_1, cctrch 3, BCH
DLA: rlStr_active=0x%x, nRl_total=%d, rlStr_total=0x%x
DLA: nRl_total (%d) is over range: active RL(rlStr=%x0x)
sync10_2
sync10_3 is called
activeStackId %d sync10_14, cctrch 1, BG_PCH / CBS 1
activeStackId %d sync10_1: Token scheduled for stop decoding currentSFN = %d currentRSN = %d
activeStackId %d sync10_1: cbsLevel2FrameCount = %d
activeStackId %d sync10_15, cctrch 2, CBS 2
activeStackId %d dsds_sync10_0, cctrch 4, SUB_SIM PCH
uhal_HmcpDsdsSync10_1_HISR is called
activeStackId %d dsds_sync10_2, cctrch 5, SUB_SIM BCH
activeStackId %d Set static param at first sync10
activeStackId %d uhal_HmcpDecoderParamSet: cctrch_nr %d, hwSfn %d, frameIndex %d, current_cfn %d
activeStackId %d Waring !! BTFD status buffer values are the same. Trch Number %d, TF %d, btfdRegValue[%d] is 0x%x, btfdRegValue[%d] is 0x%x
activeStackId %d SRB: Trch Number %d, TF is %d, TB number: %d, TB size: %d, crc of candidate tf: %d,
activeStackId %d SRB: Zm: %d, maxPm: %d, ZeroPm: %d, minPm: %d, FQM: %d, listIdx: %d
activeStackId %d AMR: Trch Number %d, TF is %d, TB number: %d, TB size: %d, crc of candidate tf: %d,
activeStackId %d AMR: Zm: %d, maxPm: %d, ZeroPm: %d, minPm: %d, FQM: %d, listIdx: %d
activeStackId %d Warning !!: all the Zm's are less than or equal to 0. max Zm is %d and good crc, forcely assign TFI %d
Best TF index : %d (good crcs : %d) : Zm : %d, maxPm : %d, zeroPm : %d, minPm : %d
BTFD (No good crcs) : TF %d, Zm: %d, maxPm: %d, minPm: %d, zeroPm: %d
[AMR Slot Decoding::uhal_HmcpBtfdDoneHISR] check other explictily detectable channel trch[%d], btfd_ch_type 0x%x, slot_dec_mode 0x%x
[AMR Slot Decoding::uhal_HmcpBtfdDoneHISR] guidingTrchNo %d, static_pars.guiding_trch_nr %d slot_dec_mode_guiding_trch_nr %d
[3GF SLP] uhal_HmcpEntireDecoderBlockReset (SP_CS_SW_RESET, SP_CCH_3G_SW_RESET)
activeStackId %d Clear DCH flag
CM reset buf CFN=%d num=%d synchro buf set to false
CheckIsAllBadOnBch : received_trbks= %d good_crc = %d bad_crc = %d trch_nr = %d
[uhal_HmcpSrbDetection] activeStackId %d, SrbTrchNo %d, isAmrSlotModeOn %d, isCrcGoodForAmr %d, slotDecodingUpToSlotNumberTTI %d
[uhal_HmcpSrbDetection] PM_BUF_RD_DATA_EVEN %d, PM_BUF_RD_DATA_ODD %d
[uhal_HmcpSrbDetection] slotDecodingUpToSlotNumberTTI %d, accumulated_SRB_power %d, PM_BUF_RD_DATA %d
[uhal_HmcpSrbDetection] PM_BUF_RD_DATA %d, RDM_IN %d, SrbTrchTTI %d, P_srb %d, P_pilot %d, isSRB %d
[uhal_HmcpSrbDetection] FQM %d, APM %d, isSRB %d
[AMR Slot Decoding::uhal_HmcpChConditionDetection] fa0ant0_rssi %d, ecIo %d, RSSI_IND %d, EcIo_IND %d, isWeakSignal %d
DifModeSetDone
[AMR Slot Decoding::uhal_HmcpAmrSlotDecoding_RfOn] numOfWakeupAfterSlotDecodingInterrupt %d
activeStackId = %d, remainingFrames = %d, current_Cfn = %d, srbTTI = %d, srbTfci = 0x%x, swTfci = %d
uhal_set_cfn_afterresume: refRl %d, frameOffset %d hwSlot %d offset %d updated_cfn %d, PauseReceived %d
activeStackId %d Adjust UL CFN with DL CFN: DL_CFN=%d, nextUlCfn=%d
Warning !! activeStackId=%d, trch_num=%d
activeStackId %d uhal_HmcpDlCctrchUpdateStaticInfo Array out of bound trch_num %d
activeStackId %d uhal_HmcpDlCctrchUpdateStaticInfo Array out of bound tfc_num %d
activeStackId %d Changing TF format for BTFD: trch_nr %d, %th TF
activeStackId %d uhal_HmcpDlCctrchUpdateStaticInfo: Not arranged : trch number %d, tf %d, tb_number %d, tb_size %d
activeStackId %d uhal_HmcpDlCctrchUpdateStaticInfo: Arranged: trch number %d, tf %d, tb_number %d, tb_size %d
static_pars.trch_num %d, isDummyPsChConfigured %d, trch_num %d, tb_number %d, tb_size %d
activeStackId %d uhal_HmcpDlCctrchUpdateStaticInfo: tfc %d, trchNr %d, tfi %d, tb_number %d, tb_size %3d, ctfc_value %d
Before srbTfci %d j %d
After srbTfci %d j %d
[CHECK] btfd_on %d, rmc12_2KbpsConfigured %d, hsdpaStarted %d, amr_configured %d, trch_num %d
[AMR Slot Decoding::uhal_HmcpDlCctrchUpdateStaticInfo] isAmrSlotDecodingRegistryOn %d, secScrCodeUsed %d, SrbTrchNo %d, SrbTrchTTI %d, btfd_on %d
[AMR Slot Decoding::uhal_HmcpDlCctrchUpdateStaticInfo] amr_configured %d, wideband_amr_configured %d, trchNumOfClassA 0x%x, trchNumOfClassB 0x%x, trchNumOfClassC 0x%x
activeStackId %d [AMR Slot Decoding::uhal_HmcpAmrSlotDecodingInfoInit] uhal_HmcpAmrSlotDecodingInfoInit called
[AMR Slot Decoding::%s] fqmOfClassB %d, fqmOfClassA[0] %d, fqmOfClassA[1] %d
[AMR Slot Decoding::%s] fqmOfClassC %d, fqmOfClassA[0] %d, fqmOfClassA[1] %d
DifModeSetStart
[AMR Slot Decoding::uhal_HmcpAmrSlotDecoding_RfOff] Intr_WakeupVoice status %d
[UHAL_test] rdm_out_size = N_tti[%d] is %d, delta_Nij = delta_n_max[%d] is %d, rdm[%d] is %d
[UHAL_test] N_tti[%d] is %d, delta_Nij is %d, tmp_mul is %d
[UHAL_test] rdmmax[%d] is %d, 8*rdmmax[] is %d, tmp_div is %d
[UHAL_test] rdmdiff[%d] is %d, 1/2*eplus[%d] is %d, 1/2*eminus[%d] is %d
[UHAL_test] fdint_out[%d] is %d, dN_tti is %d, q is %d, r is %d
[UHAL_test] fdint_dtx_num[][0] is %d, fdint_dtx_num[][1] is %d, fdint_dtx_num[][2] is %d, fdint_dtx_num[][3] is %d
[UHAL_test] fdint_dtx_num[][4] is %d, fdint_dtx_num[][5] is %d, fdint_dtx_num[][6] is %d, fdint_dtx_num[][7] is %d
[DEC ibuf Viterbi] trch %d, rdm_out_off[%d] is %d
[DEC ibuf Turbo] cctrchNr %d, trch %d, rdm_out_off[%d] is %d
[DEC obuf] cctrchNr %d, trch %d, tfi is %d, dec_out_buf[%d] is %d (64 bit)
[DEC obuf] cctrch_nr %d, rdm_out_off %d
activeStackId %d Set CFN: DOFF %d, HW SFN %d, HW CFN %d, New CFN %d
activeStackId %d Check CFN-SFN: HW SFN %d, HW CFN %d, SW SFN %d
activeStackId %d [Debugging] uhal_HmcpSync10_0_HISR CFN upper %d
Set CFN: isDOFF %d, DOFF %d, HW SFN %d(chip_count %d), HW CFN %d, SW SFN %d, SW CFN %d
activeStackId %d CFN is mismatched: current_hw_cfn = %d rx_dpc_tm_cfn =%d
activeStackId %d sync10_0: Token scheduled for stop decoding currentSFN = %d currentRSN = %d
activeStackId %d sync10_0: cbsLevel2FrameCount = %d
DLA: rlStr_active=0x%x, nRl_active=%d, rlStr_nbr=0x%x, nRl_nbr=%d, rlStr_total=0x%x, nRl_total=%d
DLA: nRl_total (%d) is over range: active RL(rlStr=%x0x, nRl=%d, rlStr_nbr=%x0x, nRl_nbr=%d
uhal_HmcpDlCctrchSetOlpcCtrlCh trChIdTemp: %d, quality Targets[trChIdTemp]:%d, qualityTargetTrChId:%d
uhal_HmcpDlCctrchSetOlpcCtrlCh Setting the DL OLPC Control channel here as TrCH ID:%d
activeStackId %d [AMR Slot Decoding::uhal_HmcpDecoderParamSet] skipSymbProcStart %d
[AMR Slot Decoding::uhal_CHmcpIsSRBPwrAvailable] SRBDetection[0] %d, SRBDetection[1] %d, ConsecutiveSRBDetectionTrueCnt %d, ConsecutiveSRBDetectionFalseCnt %d, FQMSRBDetectionEnable %d
uhal_HmcpDecoderParamSet: uhal_HmcpHpcm_GetUmtsModemStatus() is FALSE
Warning!!! cctrch_index is %d at uhal_HmcpDecoderParamSet
activeStackId %d uhal_HmcpDecoderParamSet: NULL synch_buf_ptr for SF by 2
activeStackId %d uhal_HmcpDecoderParamSet: NULL synch_buf_ptr for HLS
previous frame is compressed (HLS) : cm_N_tr=%d, n_data1=%d, n_data2=%d, n_data_frame_for_hls=%d
previous frame is normal : n_data1=%d, n_data2=%d, n_tfci=%d
******TFCI Error at Cfn %d SMC fwk %d: cctrch %d: TFCI Error = %d: TFCI reset to %d, TFCI correlation energy : %d
CcTrCH Nr: %d, CcTrCH Type: %d, sw tfci: %d, hw tfci: %d, prev tfci: %d, tfci_max %d, tfci energy: %d
BTFD sccpch CcTrCH Nr: %d, CcTrCH Type: %d, SW TFCI: %d, current_sfn: %d
activeStackId %d ******cctrch0 decoding is now getting started: normailized data_pwr_acc_rd %d, normailized pilot_pwr_acc_rd %d, tpc_pwr_acc_rd %d
activeStackId %d ******cctrch0 decoding is now getting started: symAccValue0_dch %d, hwSfn0 %d, cfn0 %d, frameIndex0 %d, frame count0 %d, hwSfnMod8AndFramdIndexDiff0 %d
activeStackId %d ******cctrch0 decoding is now getting started: sccpchRMS %d, symAccValue_sccpch %d, hwSfn0 %d, frameIndex0 %d, frame count0 %d, hwSfnMod8AndFramdIndexDiff0 %d
activeStackId %d ******cctrch1 decoding is now getting started: symAccValue1 %d, hwSfn1 %d, hwSfn1 mod 8 %d, frameIndex1 %d, hwSfnMod8AndFramdIndexDiff1 %d, frame count1 %d
activeStackId %d ******cctrch2 decoding is now getting started: symAccValue2 %d, hwSfn2 %d, frameIndex2 %d
activeStackId %d ******cctrch3 decoding is now getting started: symAccValue3 %d, hwSfn3 %d, frameIndex3 %d, pccpchPwr %d
activeStackId %d ******cctrch4 decoding is now getting started: sccpchRMS %d, symAccValue_sccpch %d, hwSfn0 %d, frameIndex0 %d, frame count0 %d, hwSfnMod8AndFramdIndexDiff0 %d
activeStackId %d ******cctrch5 decoding is now getting started: symAccValue5 %d, hwSfn5 %d, frameIndex5 %d, pccpchPwr %d
activeStackId %d Warning!! Abnormal Cctrch Index %d !!
[AMR Slot Decoding::uhal_HmcpBtfdDoneHISR] numOfConsecutiveGoodCrcsForAmr %d, pAmrSlotDecodingInfo->bestTfIdxCmp %d, bestTfIdx %d
[AMR Slot Decoding::%s] FQM or PM value of current TF is not the best value. Best TF index %d, FQM %d, zeroPm - minPm %d
[AMR Slot Decoding::uhal_HmcpBtfdDoneHISR] numOfConsecutiveGoodCrcsForAmr %d, numOfConsecutiveCrcCheck %d, dynamic_pars.sumOfCrcBtfd[guidingTrchNo] %d, slotDecodingUpToSlotNumberTTI %d, isCrcGoodForAmr %d
[uhal_HmcpSrbTrchNoDetection] Warning! SrbTrchNo %d
isSingleFormatDetectionWithMoreThanOneTrch = %d
Wrong code type for RDM mode
