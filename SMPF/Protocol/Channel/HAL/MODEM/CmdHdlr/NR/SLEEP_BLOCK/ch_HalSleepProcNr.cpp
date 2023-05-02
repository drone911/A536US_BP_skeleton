###[NR_SLEEP] Set Sleep ISR Timer - %d
###[NR_WAKEUP] WakeupLisrNr::IsrExpiry
###[NR_WAKEUP][WARNING] WakeupHisrNr EarlyWakeup, Sleep Cancel for Rat Suspend, domain_type(%d)
###[NR_SLEEP][WARNING] WakeupTimingCompensation: Unexpected TimeCompenMode(%d)
###[NR_SLEEP] WakeupSysParamInit: PathIdx(%d), dl_bw(%d), cp_type(%d), duplex_mode(%d), numerology(%d)
###[NR_WAKEUP][WARNING] SysValidConfigProc: SysValidNrCmd isn't running
###[NR_WAKEUP] SysValidConfigProc:: DrxMode(%d), WakeupRejcet(%d)
###[NR_WAKEUP][ProcTime] Timing Compensation
###[NR_WAKEUP][ProcTime] Timing Compensation
###[NR_WAKEUP] LcpuInitCnf
###[NR_WAKEUP] LcpuInitCnf
###[NR_SLEEP][ProcTime] SleepProc Start:: DrxMode(%d)
###[NR_SLEEP][ProcTime] SleepProc Start:: DrxMode(%d)
###[NR_SLEEP][ProcTime] SleepStartAction
###[NR_SLEEP][ProcTime] SleepStartActionForSwSleep
###[NR_SLEEP][WARNING] ProcSleepConfigCmd: Wrong RatType(%d)
###[NR_SLEEP] ProcDrxConfigCmd : OnOff(%d) Init(%d) DrxCycle(%d)
###[NR_SLEEP] ProcDrxMeasModeCmd:: DrxMeasMode(%d) demodCc(0x%x)
###[NR_SLEEP] ProcDrxMeasModeCnfIpc:: DrxMeasMode(%d)
###[NR_SLEEP] ProcWakeupTimeAcqCmd: timerType(%d), isIATOn(%d)
###[NR_SLEEP] ProcCdrxMacCmd : DrxCmdType(%d)
###[NR_SLEEP] ProcPhyResumeCmd
###[NR_SLEEP] ProcVoNrStatusInfoCmd:: VoNrEn(%d), modem_state(%d), domain_type(%d)
###[NR_SLEEP] InstallLisrHandler()
##[NR_SLEEP] SetLcpuState: State[prev(%d) -> curr(%d)], demod_cc(%d),
##[NR_SLEEP] DebugLcpuState: demod_cc(%d), lcpu_state(%d)
##[NR_SLEEP] LcpuInit(demod_cc(%d), cc_state(0x%x), lcpu_state(%d)) is not finished normally.
##[NR_WAKEUP] UpdateRtgOffsetDiff: WakeupRtgOffset(%d), RtgDiffBetwSleepWakeup(%d), FrameBoundary(%d)
##[NR_SLEEP] SetDemodCcState: cc(%d), state(%d->%d)
##[NR_SLEEP] GetDemodCcState: cc(%d), state(%d), demod(index:%d, state:%d), lcpu(index:%d, state:%d)
###[NR_SLEEP] CheckInitType(%d): ResumeType(%d) DrxMode(%d) LtePD(%d) LteStatus(%d) LteSleepState(%d) NrDcStatus(%d)
###[NR_SLEEP] CheckTimeCompenMode: TimeCompenMode(%d, 0:RtgDiff 1:ClkEst 2:OV), ResumeType(%d), DrxMode(%d)
###[NR_WAKEUP][ProcTime] %s -> %s :: processTime(%d/%d)us
###[NR_WAKEUP][ProcTime] WakeupLisrNr -> %s :: processTime(%d/%d)us
###[NR_SLEEP] TimingCompensationByClkEst: sleepTimeInModemClkDcxo(%d), sleepTimeInModemClkNsleep(%d), Diff(%d)
###[NR_SLEEP] TimingCompensationByClkEst: mode(%d), SleepMclk(%d), sleepTime(SFN %d, SubFrame %d, Offset %d), WakeupStrOffset(%d)
###[NR_SLEEP] TimingCompensationByClkEst: TotalSleepMclkCnt(%d), DrxStart_Ref_Cnt(0x%x), Xfr_ref_cnt(0x%x), rtg_diff(0x%x), SlpStart_Ref_Rtg(%d), SlpXfr_Ref_rtg(%d)
###[NR_SLEEP] RtgDiffBefSleep(%d) RtfDiffAftSleep(%d) RtgAlign(%d)
###[NR_SLEEP] CalculateSleepMclk: sleepCntSclk(%d), SceTotalModemClk(%d), sleepTimeInModemClk(%d)
###[NR_SLEEP][DCXO] CalculateSleepMclk: LpmCnt(0x%x -> 0x%x), sleepCntSclkLpm(%d), LpmCnt(%d), sleepCntSclk(%d), sleepCntSclkNormalMode(%d), sleepTimeInModemClk(%d)
###[NR_SLEEP][WARNING] CalculateSleepMclk: Unexpected mode(%d)
###[NR_SLEEP][WARNING] UpdateFeeRvalue:: Invalid Rvalue. BefSceModemClk(0x%x), SceModemClk(0x%x), FreqIntVal(%d), SceDiff(%d)
###[NR_SLEEP] UpdateFeeRvalue:: FilterGain(%d)(Cnt%d), BefSceModemClk(0x%x), AftSceModemClk(0x%x), SceModemClk(0x%x), FreqIntVal(%d), SceDiff(%d)
###[NR_SLEEP][DCXO] UpdateFeeRvalue:: ppm(%d), tune(%d), CTB(%d), FO_SEL(%d), FO_LPM(%d), DcxoLpmPpm(%d), MclkSclkRatio(%d)
###[NR_SLEEP][DCXO] UpdateFeeRvalue:: NormalRvalue(0x%x %08x), LpmRvalue(0x%x %08x), LpmDrxStatus(%d -> %d)
###[NR_SLEEP] ConfigFeeIntr:: m_NrDrxErrAccPeriod(%d), reset(%d)
###[NR_SLEEP][WARNING] ConfigFeeIntr:: sleepStatus(%d), sleepStatusCnt(%d)
###[NR_SLEEP] SleepStartAction: domain_type(%d)
###[NR_SLEEP] SleepStartAction: update SleepTime for 4RxPath (%d -> %d)
###[NR_SLEEP] SleepStartAction: Set SleepTime(%d)us by lack of SleepProc Margin
###[NR_SLEEP] SleepStartAction: SleepTimeUs(%d -> %d) elapsedTimeUs(%d)(%d, %d)
###[NR_SLEEP] SleepStartAction: NR/LTE wakeupIntr overlapped. LTE_sleeptime(%d) NR_sleeptime(%d) diff(%d) sleepTime_SlowClk(%d -> %d)
###[NR_SLEEP] RtgDiffBefSleep(%d) SleepStartPalTime(%d)
###[NR_SLEEP][WARNING] SleepStartAction:: Unexpected TimeCompenMode(%d)
###[NR_SLEEP][WARNING] SleepStartActionForSwSleep:: Unexpected TimeCompenMode(%d)
###[NR_SLEEP] UpdateWakeupStrOffset: NrWakeupStrOffset(%d) str_offset(%d)(%d, %d) RtgOffset(%d -> %d) NrRvalueUpdateCnt(%d)
##[NR_WAKEUP] SleepStartAction: servRtgIdx(%d) CurRtgOffset(%d)
###[NR_SLEEP] GetRemainLteSleepTime: LteSleepState(%d), LteSleepTime(%d)
###[NR_SLEEP] GetRemainSleepTime: ModemStatus(%d), NsleepState(%d), RemainTime(%d)
