[MBSFN] IPC: MBSFNSfAssign(cc(%d), scellAIdx(%d)): pattern0~7(0x%08x/0x%08x/0x%08x/0x%08x)
pattern8~15(0x%08x/0x%08x/0x%08x/0x%08x)
[MBSFN] IPC: mbmsMCCHSched(cmd:%d)
[MBSFNN] Cc/Df(0x%08x), earfcn(%d), aIndex/aId(0x%08x), nMbsfnRL/NotiInd(0x%08x), rPeriod/offset(0x%08x), modPeriod/sfAlloc(0x%08x), MCS/aSet(0x%08x)
[MBSFN](F) _cfg_status is zero!!!
[MBSFN] IPC: mbmsNotifySched: cmd(%d), Cc/scellAI(0x%08x), notiRepCoeff/notiOffset(0x%08x), notiSFindex(0x%08x)
[MBSFN](F) _cfg_status is zero!!!
[MBSFN] ScellInfoIdx(%d)
[MBSFN] >NotiCfg: Coef(%d), off(%d), SFIndex(%d)
[MBSFN] >NofiPeriod: mchIndex(%d), mchModP(%d), shortModP(%d)
[MBSFN] >NotiBegin: Coef(%d), off(%d), SFIndex(%d), shortMP(%d), effMP(%d)
[MBSFN] >NotiStop
[MBSFN](F) Invalid command(%d)!!!
[MBSFN] IPC: mbmsAreaSched : Cc/aIndex(0x%08x), comSFallocP/tAllocLen(0x%08x), sf_pattern0~7(0x%08x/0x%08x/0x%08x/0x%08x)
[MBSFN] sf_pattern8~15(0x%08x/0x%08x/0x%08x/0x%08x)
[MBSFN](F) _cfg_status is zero!!!
[MBSFN](F) Invalid Index: ScellInfoIdx(%d), McchInfoIdx(%d)
[MBSFN](F) Invalid MCCH: ScellInfoIdx(%d), McchInfoIdx(%d)
[MBSFN] >AreaSched[scellInfoIdx(%d), mcchInfoIdx(%d)]: areaIdx(%d), period(%d), totLen(%d), state(%d), pt0(0x%x)
[MBSFN] IPC: mbmsPMCHSched(cmd:%d) : Cc/aIndex(0x%08x), pIndex(0x%x), sfOffset/sfAllocEnd(0x%08x), MCS/SchedP(0x%08x)
[MBSFN](F) _cfg_status is zero!!!
[MBSFN] IPC: mbmsMSIsched : CC/aIndex(0x%08x), pIndex/numMTCH(0x%08x), sfAllocStart/End(0~3)(0x%08x/0x%08x/0x%08x/0x%08x)
[MBSFN] sfAllocStart/End(4~9)(0x%08x/0x%08x/0x%08x/0x%08x/0x%08x/0x%08x)
[MBSFN] sfAllocStart/End(10~15)(0x%08x/0x%08x/0x%08x/0x%08x/0x%08x/0x%08x)
[MBSFN](F) _cfg_status is zero!!!
[MBSFN](F) Invalid NumberOfMtch(%d)
[MBSFN] mbmsMSISched info: ScellInfoIdx(%d), AreaIdx(%d), PMCH(%d), NumMTCH(%d), State(%d)
[MBSFN] MTCH info updated: PmchInfoIndex(%d), MtchInfoIndex(%d), Start(%d), End(%d)
[MBSFN] Empty MTCH not found !!!
[MBSFN](F) Matched PMCH not found !!!
[MBSFN] MBSFN is released: ScellInfoIdx(%d)
[MBSFN] MBSFN Configured: ScellInfoIdx(%d), ScellIdx(%d), CcIdx(%d)
[MBSFN](W) MCCHAdd Fail: ScellInfoIdx(%d), McchInfoIdx(%d), state(%d)
[MBSFN] >MCCHAddReq: ScellInfoIdx/McchInfoIdx(%d), AreaID(%d), repP(%d), offset(%d), modP(%d), sfAlloc(0x%x), smcs(%d)
[MBSFN] >MCCHRemove: ScellInfoIdx(%d), AreaIdx(%d), McchValidity(%d)
[MBSFN](W) MCCHUpdate Fail: ScellInfoIdx(%d), McchInfoIdx(%d), state(%d)
[MBSFN] >MCCHUpdate: ScellInfoIdx(%d), McchInfoIdx(%d), state(%d)
[MBSFN](F) MCCH StateChange Fail: ScellInfoIdx(%d), McchInfoIdx(%d), state(%d)
[MBSFN] MCCHStateChange: ScellInfoIdx(%d), McchInfoIdx(%d), state(%d)
[MBSFN] MCCH Recover: ScellInfoIdx(%d), ScellIdx(%d), ccIdx(%d)
[MBSFN] MCCH Recover(McchInfo): ScellInfoIdx(%d), AreaID(%d), repP(%d), offset(%d), modP(%d), sfAlloc(0x%x), smcs(%d)
[MBSFN] MCCH Recover(NotiInfo): Coef(%d), off(%d), SFIndex(%d), shortMP(%d), effMP(%d)
[MBSFN] MCCH Recover(AreaSched): AreaIdx(%d), period(%d), totLen(%d), state(%d), pt0(0x%x)
[MBSFN] pt1(0x%x), pt2(0x%x), pt3(0x%x), pt4(0x%x), pt5(0x%x), pt6(0x%x), pt7(0x%x)
[MBSFN] MCCH Recover(PmchInfo): AreaIndex(%d), PMCHIndex(%d)
[MBSFN] MCCH Recover(PmchInfo): PmchInfoIdx(%d), numPmch(%d), offset(%d), end(%d), dmcs(%d), MSP(%d)
[MBSFN] MCCH Recover(MSISched): AreaIdx(%d), PmchIdx(%d), NumMTCH(%d), State(%d)
[MBSFN] MCCH Recover(MtchInfo): PmchInfoIdx(%d), MtchInfoIdx(%d), Start(%d), End(%d)
[MBSFN] ValidMtchCnt reaches MAX !!!
[MBSFN] Empty MTCH not found !!!
[MBSFN](F) Matched PMCH not found !!!
[MBSFN] PMCH state updated: PmchInfoIdx(%d) !!
[MBSFN] MCCHRemoveSet: ScellInfoIndex(%d), ScellIndex(%d), bitmap(0x%x)
[MBSFN] MCCHStopSet: ScellIndex(%d), bitmap(0x%x)
[MBSFN] PMCHAdd: From HAL (AreaIdx(%d), PmchIdx(%d))
[MBSFN](F) Invaild AreaIndex(%d)
[MBSFN](F) Invalid PmchIndex(%d)
[MBSFN](F) Invalid Area State
[MBSFN] PMCHAdd: ScellInfoIdx(%d), PmchInfoIdx(%d), numPmch(%d), offset(%d), end(%d), dmcs(%d), MSP(%d)
[MBSFN](F) Matched PMCH not found !!!
[MBSFN] PMCHRemove: From HAL (AreaIdx(%d), PmchIdx(%d))
[MBSFN](F) Invalid AreaIdx(%d)
[MBSFN](F) Invalid PmchIndex(%d)
[MBSFN] PMCHRemove: ScellInfoIdx(%d), PmchInfoIdx(%d), numPmch(%d), list(0x%x, 0x%x)
[MBSFN](F) Matched PMCH not found !!!
[MBSFN] PMCHUpdate: From HAL (AreaIdx(%d), PmchIdx(%d))
[MBSFN](F) Invalid AreaIdx(%d)
[MBSFN](F) Invalid PmchIndex(%d)
[MBSFN](F) Invalid PmchState(%d)
[MBSFN] PMCHUpdate: ScellInfoIdx(%d), PmchIdx(%d), numPmch(%d), offset(%d), end(%d), mcs(%d), period(%d)
[MBSFN](F) Matched PMCH not found !!!
[MBSFN](F) Invalid Index: AreaIndex(0%xX), pmchIndex(0%xX)
[MBSFN] PmchMsiVal: cc/mInfoIdx(0x%x), aIdx/aInfoIdx(0x%x), pIdx/pInfoIdx(0x%x), start/end(0x%x), offset(%d)
[MBSFN] MSI Begin
[MBSFN] MSI End
[MBSFN] gap more than MSP: diff(%d)
[MBSFN](I) MBSFN_UpdatePeriods(Gap): fn0(%d), fn(%d), gap(%d, %d), slip(%d), msp_exist(%d)
[MBSFN](I) update MSP: AreaIdx(%d), pmchIndex(%d), MSI ModP Indicator(%d)
[MBSFN](F) Invalid ScellInfoIndex(%d)
[MBSFN](F) PMCH List broken
[MBSFN](I) build_csp_info, Area is over: cnt_trace(%d), total_len(%d), ScellIndex(%d)
[MBSFN](I) build_csp_info: fn(%d), sfn(%d), period(%d), total_len(%d), pmch_offset(%d), ScellIndex(%d)
[MBSFN](F) GetDecInfo: Invalid Index (ScellIdx(%d), ScellInfoIdx(%d))
[MBSFN] GetDecoInfo: cc(%d), asfn(%d), bit(0x%x), duplex(%d)
[MBSFN] Look MCCH notification
[MBSFN] No Areas mapped: MBSFN Decoding State(%d)
[MBSFN] MIB decoding not completed yet)
[MBSFN] commonSF_AllocPeriod is zero
[MBSFN] AreaInfo(%d): cc(%d), aIndex/aId(0x%08x), state/nPmch(0x%08x), allocP/totL(0x%08x), pattern(0x%08x), cntTrace/curOffser(0x%08x)
[MBSFN](I) MCCH MODP Toggle:%d
[MBSFN] MCCH SUSP, Skip : McchInfoIndex(%d)
[MBSFN] Wakeup from SUSP
[MBSFN] McchInfo(%d): cc(%d), aIndex/aId(0x%08x), mcfi/modiPeriod(0x%08x), repPeriod/offset(0x%08x), sfAlloc/mcs(0x%08x)
[MBSFN] PmchInfo: PmchIdx(%d), modP_Ind/msiInd/state(%03d), offset(%d), end(%d), mcs(%d), msp(%d), cnt_trace(%d)
[MBSFN] MSI Info: type(%c), mbsfnId(%d), cfi(%d), mcs(%d)
[MBSFN](F) Invalid Index: PmchIdx(%d)
[MBSFN] MSI Index Info: areaIdx(%d), pmchIdx(%d), AreaInfoIdx(%d), PmchInfoIdx(%d)
[MBSFN](F) Invalid Index: AreaIdx(0x%X), PmchIdx(0x%X)
[MBSFN] Number of MTCH: %d
[MBSFN] Remove MTCH: MtchInfoIdx(%d)
[MBSFN](F) Matched PMCH not found
[MBSFN] MBSFN_ResetMBSFN
[MBSFN] Change Notification: cch_noti(0x%x)
[MBSFN](F) Invalid ScellInfoIdx(%d)
[MBSFN](F) Invalid ScellInfoIdx(%d)
[MBSFN](F) Invalid ScellInfoIdx(%d)
[MBSFN](F) Mismatch SubframeIndex: Rec(%d), DB(%d)
[MBSFN](F) Invalid ScellnfoIdx(%d)
[MBSFN](F) Invalid ScellInfoIdx(%d)
[MBSFN](F) Invalid ScellInfoIdx(%d)
[MBSFN](F) Invalid ScellInfoIdx(%d)
[MBSFN](F) Invalid ScellInfoIdx(%d)
(F)meas_type = %d is INVALID!!
(F)meas_type = %d is INVALID!!
[MBSFN](F) Invalid ScellInfoIdx(%d)
[MBSFN](F) Invalid Status(%d)
[MBSFN] cspRebuildStatus(%d)
[MBSFN](F) Invalid Index: ScellIdx(%d), CcIdx(%d)
[MBSFN](F) Invalid Index for Pcell: ScellIdx(%d), CcIdx(%d)
[MBSFN] No Empty sCellInfoIdx: ScellIdx(%d), CcIdx(%d)
[MBSFN] ScellInfo: ScellInfoIdx(%d), ScellIdx(%d), CcIdx(%d)
[MBSFN](F) Invalid Index : ScellInfoIdx(%d), ScellIdx(%d), CcIdx(%d)
[MBSFN] Recover ScellInfo: ScellInfoIdx(%d), ScellIdx(%d), CcIdx(%d)
