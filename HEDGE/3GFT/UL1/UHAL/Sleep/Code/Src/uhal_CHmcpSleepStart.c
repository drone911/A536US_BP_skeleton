activeStackId %d RfConfigAfterSleep : HW destination control(Wake-up)
activeStackId %d HWConfigAfterSWWakeup : HW destination control(Wake-up)
activeStackId %d [Sleep Wake]Modem Initialize...
[Sleep]%s , cancelSleepingVal : %d
[Sleep]%s
activeStackId %d [Sleep]%s
currentRefCounterSlot=%d, currentRefCounterChip =%d, temSfn %d, newSlot %d, currentSlot %d, currentChipInSlot %d, deltaCellkTm %d
[Sleep] uhal_CHmcpSleepStart_WakeUpLisr: MifFreq(%d) CpuFreq(%d) slp_cnt(%d) reqd_sleep_time(%d) Diff(%d) mifTime(%d) socTime(%d)
Wrong WakeUp Int
[Sleep]%s
uhal_CHmcpSleepStart_SysValidLisr
rejectByDsl1rc = %d isOtherRatCDMA = %d rejectByCdma = %d
activeStackId %d [Sleep]%s, relativeTimeStamp %d
activeStackId %d HW destination control(uhal_CHmcpSleepStart_IratMeasurement)
activeStackId %d [Sleep]%s
[Sleep Wake] refcnt_frame_sleep %d, refcnt_slot_sleep %d, refcnt_chip_sleep %d, refcnt_chipx8_sleep %d refCnt_beforesleep %d, frameRake %d
[Sleep Wake] New Time compensation
[Sleep Wake]RSN adjustment : boundaryRSN: %d currentRSN= %d currentSlot =%d,newCurrentSlot =%d , framesElapsed= %d
activeStackId %d txTmFrameCnt = %d, txTmChipCnt = %d, txTmChipX8Cnt = %d
activeStackId %d [Sleep Wake]sleepClockCounterDuringSleep: %d
activeStackId %d [Sleep Wake]elapsedChipx8TimeInSleepWithoutActualSleeping: %d
activeStackId %d [Sleep Wake]beforeslot: %u
activeStackId %d [Sleep Wake]beforechip: %u
activeStackId %d [Sleep Wake]chipx8ClocksOverSleep: %u
activeStackId %d [Sleep Wake]elapsedChipx8TimeToComputeSfn: %u
activeStackId %d [Sleep Wake]elapsedFrames: %d
activeStackId %d [Sleep Wake]chipx8ClocksOverSleepRelative : %d
activeStackId %d [Sleep Wake]swSFN : %d ElapsedSlots: %d ElapsedChips : %d
activeStackId %d [Sleep Wake]slotRake : %d chipRake: %d chipx8Rake : %d
activeStackId %d Do 3G RF initialization
activeStackId %d Reset wakeAfterSleep in sys valid hisr
activeStackId %d [Sleep Wake]Modem Initialize...
activeStackId %d [Sleep Wake]Early wakeup SwSFN : %d , WakeUpTime : %d
activeStackId %d Rf Init not needed during wakeup %d:%d
activeStackId %d [Sleep Wake]normal wakeup SwSFN : %d , WakeUpTime : %d
activeStackId %d [Sleep]%s
activeStackId %d [Sleep Req]No cell in sleeping :RerRl = %d
activeStackId %d [Sleep Req]Uhal return: Invaild state: StartStopState %d
[Sleep Req]Uhal return: Cancel sleeping: bchUsed %d, cancelSleeping %d, isCbs %d
activeStackId %d [Sleep Req]Uhal sleep: too long (%d - %d = %d)
activeStackId %d [Sleep Req]adjust (%d - %d = %d)
[Sleep Req]uhal_CHmcpSleepStart using SlotWakeUpEn=%d, SlotsBeforePQ=%d, CPUSleepOverheadChips=%d, CpuModemSleepDiffUsec=%d
[Sleep Req] currentAdjustSleepSlot(%d) updatedAdjustSleepSlot(%d) isUtranCommercialPlmnId(%d) isFngEcIo(%d) numLockedFingersIIR(%d) rssiBeforeSleep(%d) rssiThreshold(%d)
[Sleep Req]Befor sleep: WakeAndPqSlotDiff = %d,adjustSleepSlot= %d, FingAllocationSlot= %d, isMpInfoExisted %d
[Sleep Req]Before sleep: adjustSleepSlot= %d weakSignal = %d
adjustSleepSlot(%d) + WAKEUPMARGIN_LOGGING_SLOT(%d)
adjustSleepSlot(%d) + WAKEUPMARGIN_OPTIMIZED_SLOT(%d)
[Sleep Req]Before sleep: adjustSleepSlot %d minResUseTimeAdjust %d
[Sleep Req]Before sleep: adjustSleepSlot(%d) = adjustSleepSlot - palWakeUpSocTime_slot(%d) PAL WAKE_UP_SOC_TIME(%u)slow
[Sleep Req] SleepDuration = %d
[Sleep Req]uhal_CHmcpSleepStart_request (%d - %d = %d),swSlot %d, hwSlot %d, pichSfn %d
[Sleep Req]Befor sleep: lastAfcPdm= %d
[Sleep Req] interrupt destroy skipped due to Reject on HW wakeup/ongoing IRAT on other stack
[Sleep Req]Uhal sleep Started normally: start SFN %d wakeup SFN %d sleepDuration %d(sfn) %d(slot) requestedSleepClockLength %d , WAKING_MARGIN %d
[Sleep Req]beforesfn = %d, beforeslot= %d, beforechip= %d smc_TimeCurrentSFNactiveStackId %d rfReconfigDoneAfterWakeup %d
activeStackId %d [Sleep Req]uhal_CHmcpSleepStart_request: Cancel WakeUptimer 0x%x
activeStackId %d [Sleep Req]Uhal sleep: not enough reacqire time : beforesfn = %d, wakeupSfn = %d
[Sleep]%s PowerOn %d
[SleepDbg]RefCnt:CELLk_RTG_TIME %d, TIME_REF_CNT %d, TX_TM_CPI_TIMER_R %d
[SleepDbg]PAL Time - palTimeAfterWakeUP %d, palTimeBeforeSleep %d, palTimeDiff %d (us)
[SleepDbg]PAL Time - estPalFrameCnt %d, estPalSlotCnt %d, estPalChipCnt %d
[SleepDbg]PrevRef Time - PrevRefFrameCnt %d, PrevRefSlotCnt %d, PrevRefChipCnt %d
[SleepDbg]Compare Refcnt and Pal - TotalHWChips %d, TotalPFChips %d, Diff(Ref-Pal) %d
[SleepDbg]Warning Diff chips(Ref-Pal) %d
[SleepDbg]Expected WakeUp Time - SFN %d, SLOT %d
[SleepDbg]Ref_cnt - refcnt_frame_sleep %d, refcnt_slot_sleep %d, refcnt_chip_sleep %d, refcnt_chipx8_sleep %d
uhal_CHmcpSleepStart using warmup_time=%d, clocks=%d, min_catnap_length=%d
Remaining cur_slp_time = %d, %d(us)
[WDCXOLPM] wakeup: lastAfcPdmByWakeup(%d) lastAfcPdmBySleep(%d)
[WDCXOLPM] wakeup: tune(%d) dcxoCalFo(%d) dcxoCalFoLpm(%d)
[WDCXOLPM] wakeup: dcxoPpm_Normal(%d) dcxoPpm_Lpm(%d)
[WDCXOLPM] wakeup: lpmRtcDiff(%d) lpmCntDiff(%d)
[WDCXOLPM] wakeup: SclkSlpCnt_Normal(%d) SclkSlpCnt_Lpm(%d)
[WDCXOLPM] wakeup: Rvalue_Normal(0x%X, 0x%X) Rvalue_Lpm(0x%X, 0x%X)
[WDCXOLPM] wakeup: MclkSlpCnt_Total(%d) in case of 32.768Khz slow clock
[WDCXOLPM] wakeup: dcxoSclkMode(0x%x)
[WDCXOLPM] wakeup: MclkSlpCnt_Total(%d) in case of 32.764Khz slow clock
[WDCXOLPM] wakeup: sumDelta(%d) DeltaCorrection(%d)
[WDCXOLPM] wakeup: MclkSlpCnt_Total(%d) final value
activeStackId %d Uhal sleep exit: sfn %d slot %d chip %d time by uhal_CHmcpRlInfo_FastSfnSlotChip_RefRl
[Sleep Req]uhal_CHmcpSleepStart_CalcWakeAndPqSlotDiff: piSymbolLength=%d, piSymbolOffsetToPich=%d, PqSlot=%d,pichSlotOffsetToCpich=%d, WakeAndPqSlotDiff %d, newPqSlot %d
