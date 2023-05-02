RrmBlkL1cMsgBuildNr::Build_L1C_RRM_ALL_STOP_REQ
pArg is nullptr
RrmBlkL1cMsgBuildNr::Build_L1C_RRM_AS_STATE_IND - State:%d
RrmBlkL1cMsgBuildNr::Build_L1C_RRM_BPLMN_START_REQ
>>DstRat:%d, SrcRat:%d, avail_time:%d, start_time:%d
RrmBlkL1cMsgBuildNr::Build_L1C_RRM_BPLMN_STOP_REQ
RrmBlkL1cMsgBuildNr::Build_L1C_RRM_CGI_START_REQ
>>DstRat:%d, SrcRat:%d, avail_time:%d, StartTime:%d, CgiConfigNr:%d
RrmBlkL1cMsgBuildNr::Build_L1C_RRM_CGI_STOP_REQ
RrmBlkL1cMsgBuildNr::Build_L1C_RRM_DRX_STATUS_IND
pArg is nullptr
>>DrxAvailable:%d(bool), PendingCause:%d(enum) RemainTime:%d[ms]
RrmBlkL1cMsgBuildNr::Build_L1C_RRM_FEDV_STATE_IND
pArg is nullptr
>>IsFeDvOn:%d
RrmBlkL1cMsgBuildNr::Build_L1C_RRM_FREQ_SCAN_REQ
pArg is nullptr
FreqScanReq Param: BAND - band:%d scs:%d
FreqScanReq Param: ARRAY - [%d] band:%d scs:%d freq:%d
FreqScanReq Param: INTERVAL - band:%d scs:%d freq(start:%d end:%d step%d) IslinearStepSize:(bool)%d
FreqScanReq Param: INVALID FreqListType(%d)
FreqScanReq Param: NumBlackFreq(%d)
FreqScanReq Param: BlackFreqList[%d](%d)
RrmBlkL1cMsgBuildNr::Build_L1C_RRM_FREQ_SCAN_STOP_REQ
RrmBlkL1cMsgBuildNr::Build_L1C_RRM_GAP_CONFIG_REQ
>> NumSsbIndex:%d(FR2)
>> NumSsbIndex:%d(FR1)
>>GapSetupReleaseChoice:(bool)%d NsaConfig:(bool)%d GapType:(enum):%d
>>NsaGap - NsaMeasGapPattern:%d GapOffset:(enum)%d Fr1Gap:(enum)%d Mgta:(enum)%d
>>NrGap - GapOffset:%d Mgl:(enum)%d Mgrp:(enum)%d Mgta:(enum)%d
RrmBlkL1cMsgBuildNr::Build_L1C_RRM_INIT_MEAS_REQ
[Check] pArg is nullptr
>> RAT:(enum)%d, Band:%d, SsbFrequency:%d, SsbPeriodicity:%d[ms], SsbScs:(enum)%d, NumSsbMeasInput:%d, RxBeamIdx(%d)
>> AgcGain0(%d/%d), AgcGain1(%d/%d), Lmax(%d)
>> ssbPositionsInBurst(0x%08X%08X)
>> HypoFO(%d) ssbPositionsInBurst(0x%08X%08X)
::[%d]CellId:%d, BeamTimingOffset:%d, BeamIndex:%d
RrmBlkL1cMsgBuildNr::Build_L1C_RRM_INIT_SEARCH_REQ
>> RAT:(enum)%d, Band:%d, SsbFrequency:%d, SsbPeriodicity:%d[ms], SsbScs:(enum)%d
>> EnableSpecificCellId:(bool)%d, SpecificCellId:%d
>> EnableSpecifiHypoFO:(bool)%d, SpecifiHypoFO:%d
RrmBlkL1cMsgBuildNr::Build_L1C_RRM_MEAS_REQ
pArg is nullptr
>>MeasType:%s(%d), ObjectId:%d, AgcGain:[0]%d[1]%d
>>EutraConfig - AllowedMeasBandwidth:(enum)mbw%d, CarrierFreq:%d
>>NumSsbMeasInput:%d
::EutraMeasInput[%d] - CpType:%d, CellIndexEutra:%d, PhysCellId:%d, CellIndividualOffset:%d, TimingOffset:%d
>>MeasType:%s(%d) ObjectId:%d CarrierFreq:%d
>>NumUtraMeasInput:%d
::UtraMeasInput[%d] - CellIndex:%d PhysCellId:%d TimingOffset:%d
>>MeasType:%s(%d), ObjectId:%d, RsType:%s(%d), AgcGain:[0]%d[1]%d
>>SsbConfig - BandId:%d, SsbFrequency:%d, SubcarrierSpacing:(enum)%d, Periodicity:%d[ms], DeriveSsbIdxFromPCell:(bool)%d
>>SsbConfig - NumSsbToMeasure:%d, SsbToMeasure:[1]0x%08x[0]0x%08x
>>SsbConfig - SmtcIncluded:(bool)%d, Smtc.Offset:%d[ms], Smtc.Duration:%d[ms], SsRssiMeasurementIncluded:(bool)%d
>>NumSsbMeasInput:%d
::SsbMeasInput[%d] - CellId:%d, BeamIndex:%d, BeamTimingOffset:%d, RxBeamIdx:%d, NumHF:%d
>>CsiConfig - BandId:%d RefFreqCsiRs:%d, SubcarrierSpacing:%d
>>CsiConfig - AssociatedSsbFrequency:%d, AssociatedSsbSubcarrierSpacing:%d, AssociatedSsbPeriodicity:%d
>>CsiConfig - RefServCellSsbFrequency:%d, RefServCellSsbSubcarrierSpacing:%d, RefServCellSsbPeriodicity:%d
>>NumCsiMeasInput:%d
>>CsiMeasInput[%d] - CellId:%d, CsiRsMeasBw[StartPRB:%d, NrOfPRBs:%d], DensityPresent:(bool)%d, Density:%d, CsiRsResourceListMobilityCnt:%d
::CsiRsIndex:%d, AssociatedSsbIndex:%d, SsbTimingOffset:%d, SlotConfig:(enum)%d, FreqDomain:(enum)%d, FirstOfdmSymbol:%d, Sequence:%d
>>Unexpected RsType:%s(%d)
>>Unexpected MeasType:%s(%d)
%s::Build_L1C_RRM_MEAS_RESULT_IND (NumCell:%d) Pcell(CellId:%d) PrxBestSsb(Index:%d Rsrp:%d) AdaptiveIW(isValid:(bool)%d Rsrp:%d)
RrmBlkL1cMsgBuildNr::Build_L1C_RRM_MEAS_STOP_REQ
RrmBlkL1cMsgBuildNr::Build_L1C_RRM_MEAS_CONFIG_UPDATE_IND
RrmBlkL1cMsgBuildNr::Build_L1C_RRM_PBCH_DECODE_REQ
[Check] pArg is nullptr
>> Band:%d, SsbFrequency:%d, HypoFO:%d, CellId:%d
>> BeamIndex:%d, BeamTimingOffset:%d, SsbPeriodicity:%d[ms], SsbScs:(enum)%d, RxBeamIdx(%d), AgcGain(%d, %d)
RrmBlkL1cMsgBuildNr::Build_L1C_RRM_PHY_CHANGE_INFO_REQ
pArg is nullptr
>>IsNrUeIdentityModified:(bool)%d NrUeIdentity:%d IsOverHeatStateModified:(bool):%d OverHeatState:%d IsNeedStopPhyTx:(bool)%d
RrmBlkL1cMsgBuildNr::Build_L1C_RRM_PHY_CONFIG_REQ
pArg is nullptr
>>NrUeCapaInfo - Band:%d, MaxUlLayers:%d, isBwpSwitchingEnable:(bool)%d
>>reportUplinkTxDirectCurrentV1530:%d
>>IsCRntiValid:(bool)%d, cRnti:%d
>>SelectedPlmnId Status:(enum)%d, MCC:%x %x %x, MNC:%x %x %x
RrmBlkL1cMsgBuildNr::Build_L1C_RRM_PREPARE_IRAT_CHANGE_REQ
pArg is nullptr
RatType:%d, NumOfNeighborCell:%d
>>IratChangeCellIndex:%d - Arfcn:%d, CellId:%d, CpType:%d, TimingOffset:%d
RrmBlkL1cMsgBuildNr::Build_L1C_RRM_RAT_RESUME_REQ
pArg is nullptr
RrmBlkL1cMsgBuildNr::Build_L1C_RRM_RAT_RESUME_REQ::TargetRat(%d),Type(%d),IsFeDvOn(%d),IsInitial(%d)
RrmBlkL1cMsgBuildNr::Build_L1C_RRM_RAT_RESUME_REQ::BplmnAvailTime(%d),BplmnAvailTime(%d)
>>CompliantType:%d
>>Compliant:NULL
RrmBlkL1cMsgBuildNr::Build_L1C_RRM_RAT_SUSPEND_REQ
pArg is nullptr
RrmBlkL1cMsgBuildNr::Build_L1C_RRM_RAT_SUSPEND_REQ::TargetRat(%d),Type(%d)
RrmBlkL1cMsgBuildNr::Build_L1C_RRM_SCELL_STATUS_IND
pArg is nullptr
>>SCellActivationSlot:0x%X
>>numOfScellInfoList:%d
::ScellInfoList[%d] - act_deact:%d, ScellIndex:%d, SsbIndex:%d, TimingOffset:%d, RxBeamIdx:%d
:: target_slot:%d, AgcGain[0]:%d, AgcGain[1]:%d
>>Crnti: %d(0x%x)
RrmBlkL1cMsgBuildNr::Build_L1C_RRM_SERVING_CELL_CHANGE_REQ
pArg is nullptr
>> Band:%d, SsbFrequency:%d, HypoFO:%d, CellId:%d, NumHF:%d
>> BeamIndex:%d, BeamTimingOffset:%d, SsbPeriodicity:%d[ms], SsbScs:(enum)%d, RxBeamIdx(%d), AgcGain(%d, %d)
>> IsReturnToServCell:%d, MibInfoIncluded:%d
RrmBlkL1cMsgBuildNr::Build_L1C_RRM_TIMING_UPDATE_IND
pArg is nullptr
>> MeasRatType:%d, SCellIdx:%d, SsbIdx:%d, TimingOffset:%d
RrmBlkMsgBuildNr::L1C_RRM_LOW_PWR_MODE_IND
pArg is nullptr
>>rMsg.Cause:%d
RrmBlkL1cMsgBuildNr::Build_L1C_RRM_POS_MEAS_ABORT_IND
RrmBlkL1cMsgBuildNr::Build_L1C_RRM_POS_MEAS_CONFIG_REQ
pArg is nullptr
transactionNumber: %d reportingAmount: %d reportingInterval:%d responseTimeEarlyFix:%d bit_mask:%d
RrmBlkL1cMsgBuildNr::Build_L1C_RRM_POS_MEAS_RESULT_IND
