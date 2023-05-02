[HALSRCH] SrchStatus = 0x%x
[Step1] overwrite mode set !!!
activeStackId %d [FA%d] requestPschMultipath(isFirst=%d, s1_post_acc=%d, readPostAcc=%d)
HALSRCH_3G_PschMultiPath_GetBitGain: ScdRxDivBitSel=%d ScdCorrBitSel=%d ScdEcBitSel=%d ScdDataBitSel=%d
[FA%d] HALSRCH_3G_SschScrCodeGroup_StartStep2Searcher: pathOffset=%d, post_acc=%d, CombinedSlot=%d, AccMode=%d rxDiv=%d
[read reg] HALSRCH_3G_SschScrCodeGroup_StartStep2Searcher: pathOffset(halfchip)=%d, Scd3GFS2RefCtnDump (slot, half chip) = (%d, %d), ScdSrchMode=%d(3:step2)
activeStackId %d Step2 DMA: ScdSrchS2Buffer[0]:(%d) ScdSrchS2Buffer[1](%d)
HALSRCH_3G_CpichScrCode_SelectStep3SearcherMode : Please check mode = %d
ItgTime is invalid.(%d)
[FH][%d] phaseIdx=%d, idx=%d, offset=%d, ENG=%d
HALSRCH_3G_SearcherBuffer_CalculateAndSetBufferStartPositionInGap: activeStackId %d MP index start_slot %d start_pos(%d)
HALSRCH_3G_SearcherBuffer_CalculateAndSetBufferStartPositionInGap: activeStackId %d current_slot %d current_chip %d
HALSRCH_3G_SearcherBuffer_CalculateAndSetBufferStartPositionInGap: activeStackId %d meas_start %d meas_end %d size %d bufferStartDelay %d
HALSRCH_3G_SearcherBuffer_CalculateAndSetBufferStartPositionInGap: activeStackId %d RTG index start_slot %d start_pos(%d)
HALSRCH_3G_SearcherBuffer_CalculateAndSetBufferStartPositionInGap: activeStackId %d start_slot %d start_pos(%d)
HALSRCH_3G_SearcherBuffer_CalculateAndSetBufferStartPositionInAmrSlotDecodingMode: activeStackId %d
activeStackId %d HALSRCH_3G_SearcherBuffer_CalculateAndSetBufferStartPositionInCM: meas_start=%d > meas_end=%d
activeStackId %d Size Over *size %d
activeStackId %d size %d
srchBufStart--> slot=%d chip=%d bufferSize=%d, buf_start_index(%d) FixedBufStart(%d), BufStartSlot(%d)
HALSRCH_3G_SearcherCommon_ResetSrchSCDFuncClk is called
HALSRCH_3G_SearcherCommon_SearcherReset is called reset_l 0x%x
HALSRCH_3G_SearcherCommon_SearcherReset is called reset_h 0x%x
HALSRCH_3G_SearcherCommon_ResetSrchMPFuncClk is called
HALSRCH_3G_SearcherCommon_ResetSrchDMAIFFuncClk is called
HALSRCH_3G_SearcherCommon_ResetSrchMPOFFFuncClk is called
HALSRCH_3G_SearcherCommon_ClockOn: reg = 0x%x, read_reg = 0x%x
------------------------------------------------------------- ScdSrchRegDump Start -------------------------------------------------------------
SrchStatus = 0x%x, SrchTestCtrl = 0x%x, SrchClkCtrl = 0x%x, SrchClkCtrl1 = 0x%x
ScdStop = 0x%x, ScdStart = 0x%x, ScdPostAcc = 0x%x, ScdAccCnt = 0x%x, ScdCtrl = 0x%x, ScdBitSelCtrl = 0x%x, ScdSlotCnt = 0x%x
Scd3GFS2Ctrl = 0x%x, Scd3GFS2RefCtnDump = 0x%x, ScdPwrThr = 0x%x, Scd3GFS2AccSlotCnt = 0x%x, Scd3GFRxDivSelect = 0x%x
SrchMemCtrl = 0x%x, SrchMemStartAddress = 0x%x, SrchMemIO = 0x%x, SrchMemReadyStatus = 0x%x, ExternalMemAddrPss = 0x%x, ExternalMemAddrSss= 0x%x
ExternalMemAddr3GFStep1 = 0x%x, ExternalMemAddr3GFStep2 = 0x%x, ExternalMemAddr3GTStep1 = 0x%x, ExternalMemAddr3GTStep2 = 0x%x
ExternalMemAddrDED = 0x%x, ExternalMemAddr3GFMp = 0x%x, ExternalMemAddr3GTMp = 0x%x, ExternalMemAddr3GCMp = 0x%x
------------------------------------------------------------- ScdSrchRegDump End ---------------------------------------------------------------
----------------------------------------------------------------------------------------------Start
SrchStatus = 0x%x, SrchTestCtrl = 0x%x, SrchClkCtrl = 0x%x, SrchClkCtrl1 = 0x%x
SrchMemCtrl = 0x%x, SrchMemStartAddress = 0x%x, SrchMemIO = 0x%x, SrchMemReadyStatus = 0x%x, ExternalMemAddrPss = 0x%x, ExternalMemAddrSss= 0x%x
ExternalMemAddr3GFStep1 = 0x%x, ExternalMemAddr3GFStep2 = 0x%x, ExternalMemAddr3GTStep1 = 0x%x, ExternalMemAddr3GTStep2 = 0x%x
ExternalMemAddrDED = 0x%x, ExternalMemAddr3GFMp = 0x%x, ExternalMemAddr3GTMp = 0x%x, ExternalMemAddr3GCMp = 0x%x
MpStart = 0x%x, MpStop = 0x%x, MpCtrl1 = 0x%x, MpCtrl2 = 0x%x, MpDataBufStartEn = 0x%x, MpDataBufStart = 0x%x
MpBufCtrl1 = 0x%x, MpBufCtrl2 = 0x%x, MpBitSelCtrl = 0x%x, MpBqCtrl1 = 0x%x, MpCellDoneCnt = 0x%x
MpIndexDump = 0x%x, MpCurrentIndex = 0x%x, MpCtrl3 = 0x%x, SrchStatus1 = 0x%x
----------------------------------------------------------------------------------------------End
--------------------------------------------------------------- SrchRegDump Start ---------------------------------------------------------------
SrchStatus = 0x%x, SrchTestCtrl = 0x%x, SrchClkCtrl = 0x%x, SrchClkCtrl1 = 0x%x
ScdStop = 0x%x, ScdStart = 0x%x, ScdPostAcc = 0x%x, ScdAccCnt = 0x%x, ScdCtrl = 0x%x, ScdBitSelCtrl = 0x%x, ScdSlotCnt = 0x%x
Scd3GFS2Ctrl = 0x%x, Scd3GFS2RefCtnDump = 0x%x, ScdPwrThr = 0x%x, Scd3GFS2AccSlotCnt = 0x%x, Scd3GFRxDivSelect = 0x%x
SrchMemCtrl = 0x%x, SrchMemStartAddress = 0x%x, SrchMemIO = 0x%x, SrchMemReadyStatus = 0x%x, ExternalMemAddrPss = 0x%x, ExternalMemAddrSss= 0x%x
ExternalMemAddr3GFStep1 = 0x%x, ExternalMemAddr3GFStep2 = 0x%x, ExternalMemAddr3GTStep1 = 0x%x, ExternalMemAddr3GTStep2 = 0x%x
ExternalMemAddrDED = 0x%x, ExternalMemAddr3GFMp = 0x%x, ExternalMemAddr3GTMp = 0x%x, ExternalMemAddr3GCMp = 0x%x
MpStart = 0x%x, MpStop = 0x%x, MpCtrl1 = 0x%x, MpCtrl2 = 0x%x, MpDataBufStartEn = 0x%x, MpDataBufStart = 0x%x
MpBufCtrl1 = 0x%x, MpBufCtrl2 = 0x%x, MpBitSelCtrl = 0x%x, MpBqCtrl1 = 0x%x, MpCellDoneCnt = 0x%x
MpIndexDump = 0x%x, MpCurrentIndex = 0x%x, MpCtrl3 = 0x%x, SrchStatus1 = 0x%x
--------------------------------------------------------------- SrchRegDump End -----------------------------------------------------------------
[HALSRCH_3G][WARNING]NullFunc()!!
