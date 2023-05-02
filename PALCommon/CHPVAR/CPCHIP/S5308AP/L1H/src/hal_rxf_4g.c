[WA] ADC SW RESET: RFD_RSNGEN_MODE_CC%d registers change (0x55->011->0x55->0x0)
[RXF][DUMP][%4d] I;%d; Q;%d;
[RXF] ChangeRfPath(CC%d): rf(%d), mxr(%d), rtg(%d), pgc(%d), mode(%x), bw(%d)
[RXF] GetSloSelList: rf(%d), mxr(%d, %d, %d, %d), mode(%d)
[RXF] SetRxFilterInput: rf(%d), dcr(%d), mode(%x), bw(%d)
[RXF] SetRxFilterSysTime: rf(%d), dcr(%d), mxr(%d), rtg(%d)
[WA] ADC SW RESET: RFD_RSNGEN_MODE_CC%d registers change (0x55->011->0x55->0x0)
[RXF_DEBUG] GAIN SPLITTER CONFIG(DCR %d), RXF_AGC_GAIN_SPLITTER_EN_x(0x%x), RXF_AGC_ANT_INPUT_5AB_SEL_x(0x%x), RXF_AGC_ANT_INPUT_AVG_SEL_x(0x%x), RXF_AGC_ANT_INPUT_x(0x%x)
[RXF_DEBUG] GAIN MODE CHANGE, RXF_GAIN_AVG_INPUTx[0](0x%x), [1](0x%x), [2](0x%x), [3](0x%x), RXF_AGC_SPLIT_HW_MODE(0x%x)
[RXF_DEBUG] RXF_AGC_SPLIT_HW_MODE(0x%x)
[RXF_DEBUG] rf path 0 is not considered for this WA
[RXF][DFS] EnablePathNum: cc(%d), 4Rx(%d), path(%d) samplingMode(0x%x)
[RXF] ChangeMxrSel(CC%d): rf(%d), mxr(%d), rtg(%d), pgc(%d), mode(%x), bw(%d)
[RXF][DFS] EnablePathNum: cc(%d), 4Rx(%d), path(%d), samplingMode(0x%x)
[RXF] ChangeRxMode(CC%d): rf(%d), mxr(%d), rtg(%d), pgc(%d), mode(%x), bw(%d)
[RXF] ChangeDlBw(CC%d): rf(%d), mxr(%d), rtg(%d), pgc(%d), mode(%x), bw(%d)
[RXF] Unknown DCR mode(%d)
[RXF] ConfigDCR: dcr(%d), mode(%d)
[RXF] Unknown IQC mode(%d)
[RXF] ConfigIQC: iqc(%d), mode(%d)
[RXF] SetAgcRmsValue: mxr(%d), rms(%d)
[RXF] GetAgcRmsValue: mxr(%d), rms(%d)
[RXF] SetAgcGainIdx: mxr(%d), gain(%d, %d), ovr(%d, %d)
[RXF] GetAgcDataDump: tti(%d), length(%d)
[RXF] DUMP0[0-4]: %08x %08x %08x %08x %08x
[RXF] DUMP1[0-4]: %08x %08x %08x %08x %08x
[RXF] DUMP0[5-9]: %08x %08x %08x %08x %08x
[RXF] DUMP1[5-9]: %08x %08x %08x %08x %08x
[RXF] [MAR] DCR: ANT%d(%d, %d), ANT%d(%d, %d), PWR_DB(%06d)
[RXF] [MAR] [RFD] DCR: ANT%d[0x%X], ANT%d[0x%X]
[RXF] IQC: TAP%d ANT%d COEF(%d, %d) I^2+Q^2(%d) Normal Range[0,630]
[RXF] IQC: TAP%d ANT%d COEF(%d, %d) I^2+Q^2(%d) Normal Range[0,630]
[RXF] rfd_dcr_sel_s [0x%08X 0x%08X 0x%08X 0x%08X 0x%08X 0x%08X]
[RXF][RFD] DB PWR: AGC0123(0x%08X), AGC4567(0x%08X), AGC89AB(0x%08X), AGCGH_DB(0x%08X)
[RXF] GetScellAgcValue(RXF_AGCx_VALUE): CC0(%x, %x) CC%d(%x, %x)
[RXF] SetRxfTddClockGating(%d)
[RXF][DFS] EnablePathNum: cc(%d), 4Rx(%d), path(%d), samplingMode(0x%x)
[RXF] ConfigRxFilter(CC%d): rf(%d), mxr(%d), rtg(%d), pgc(%d), mode(%x), bw(%d)
[RXF] Not supported CC path(%d) for D2D
[RXF] Not supported CC path(%d) for D2D
[RXF] Unknown AGC mode(%d)
[RXF] ConfigAGC: rf(%d), dcr(%d), mxr(%d), bw(%d), mode(%d)
[RXF] Do not read AGC value as RF is not available
[RXF] SetRxDmixerFreq for SCG: mxr(%d), mode(%d), freq(%d, %d), dmxr(%d, %d), bw(%d)
[RXF] SetRxDmixerFreq: mxr(%d), mode(%d), freq(%d, %d), dmxr(%d, %d), bw(%d)
[SC] HALRXF_4G_GetRxDmixerFreq for SCG during DRDS (%d)
[SC] HALRXF_4G_GetRxDmixerFreq (mode: %d), (freq: %d)
[SC] HALRXF_4G_GetRxDmixerFreq for SCG during DRDS (%d)
[SC] HALRXF_4G_GetRxDmixerFreq (mode: %d), (freq: %d)
[RXF] SetDmDataDump: Invalid DM DUMP MODE(%d)
[RXF] SetDmDataDump: mode(%d), dump(0x%x), max_size(%d)
[RXF] GetLnaStatus: dcr(%d), LnaStatus(%x), EXT_LNA_OUT(%x)
[RXF] ConfigGainSplitter: mode(%x), dcr(%d), reg32data(%x)
[4G_DRDS] SetAgcAntInputForEdvSpecialCase : RXF_AGC_ANT_INPUT_AVG_SEL_x.reg , input (%x)
[4G_DRDS] SetAgcAntInputForEdvSpecialCase : RXF_GAIN_AVG_INPUT , input (%x)
[4G_DRDS] SetAgcAntInputForEdvSpecialCase : RXF_AGC_ANT_INPUT, input (%x)
[RXF] SetAgcAntInputForEdvSpecialCase: avg_sel(%08x, %08x) avg_input(%08x, %08x) input(%08x, %08x)
[RXF][PWR_OPT] HALRXF_4G_ControlRxFilterClk (Hold:%d, RXF_TDD_CLK_GATE_ON:0x%X, RFD_QS_ON_TICK:0x%X, RFD_QS_OFF_TICK:0x%X)
[RXF][PWR_OPT] HALRXF_4G_ControlRxFilterClk (Hold:%d, RXF_TDD_CLK_GATE_ON:0x%X, RFD_QS_OFF_TICK:0x%X, RFD_QS_ON_TICK:0x%X)
[HAL] RfdDataBlock: rfd_path(%d) OUT_DATA_SEL(0x%X)
[RXF] AGC: ANT%d, PWR_DB(%d), GAIN(%d, %06d, %3d), HYS(%d), PGC(0x%x)
[RXF] DMIXER: CC0(%d), CC1(%d), CC2(%d), CC3(%d), CC4(%d), CC5(%d)
[RXF] Do not read AGC value as RF is not available
[HALRXF_4G][WARNING]NullFunc()!!
