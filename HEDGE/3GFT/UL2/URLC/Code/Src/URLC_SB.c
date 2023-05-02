urlc_SbPurgeSduBuffer() : MUI %d, RbId %d
urlc_SbPurgePdcpSduBuffer(1) : Null pointer
urlc_SbPurgePdcpSduBuffer(2) : Null pointer
urlc_SbCancelSdu : RbId=%d, Mode=%d, Mui=%d
DEBUG_CODE(SDUBuffVars is NULL): Mode %d
urlc_SbCancelSdu: RbId %d, SduId %d
SDUBuff_Modif_in_Progress(TM)
DEBUG_CODE(SDUBuffVars is NULL): Mode %d
urlc_SbGetSdu() - No SDU: Mode %d
SduBuffer mismatch with ListRoot: Mode %d, SduBufferSize %d
urlc_SbGetSdu (Delete timer): Mode %d, SduBufferSize %d, SduIdentifier %d, DiscardTimerId %x
DEBUG_CODE(SDUBuffVars is NULL): Mode %d
Discard UL SDU(NewSDUHandle is NULL): RbId %d, Mode %d
Error: not supported Mode %d
[SEC] Security Mode Complete received in URLC : RbId %d, Mode %d
AM Mode: New SDU being submitted for segmentation New Buffer Occupancy %d, New SDU Size %d, RbId %d, Mui %d, SduIdentifier %d, SIMInstance %d
Previously unrecoverrable error happened: RbId %d
AM Mode: New SDU being submitted for segmentation New Buffer Occupancy -%d, New SDU Size - %d, RbId %d, Mui %d, SduIdentifier %d, SIMInstance %d
UM Mode: New Buffer Occupancy - %d, New SDU Size - %d, RbId - %d, SduIdentifier - %d
UM Mode: New Buffer Occupancy - %d, New SDU Size - %d, RbId - %d, SduIdentifier - %d
TM Mode: BufferOccupancy %d, SDU Size %d, RbId %d, SduIdentifier %d, TtiCount %d SIMInstance %d
TM Mode: New Buffer Occupancy - %d, New SDU Size - %d, RbId - %d, SduIdentifier - %d, SDU TtiCount - %d SIMInstance %d
TM Mode: New Buffer Occupancy - %d, New SDU Size - %d, RbId - %d, SduIdentifier - %d, SDU TtiCount - %d SIMInstance %d
TM Mode: New Buffer Occupancy - %d, New SDU Size - %d, RbId - %d, SduIdentifier - %d, SDU TtiCount - %d
TM Mode: New Buffer Occupancy - %d, New SDU Size - %d, RbId - %d, SduIdentifier - %d, SDU TtiCount - %d
Error: not supported Mode %d
DEBUG_CODE (EUrlcurlc_SegCreatePduB): RbId %d, Mui %d
urlc_SbMarkPduDelivered() : MUI %d, RbId %d
urlc_SbMarkPduDelivered: RbId %d, SduId %d
DEBUG_CODE(EUrlcurlc_SegCreatePduB): State %d, Mode %d, SduIdentifier %d
DEBUG_CODE(SduHandle is NULL): Mode=%d, SduIdentifier=%d
Restore SDU: SduId %d, StartSeg %d, iDataP %x, NasuBuffDesPtr %x
Not from Upperlayer SDU : iDataP %x, NasubuffDesPtr %x
urlc_SbSduListDeleteSdu (SduHandle is NULL): Mode %d
urlc_SbSduListDeleteSdu(TM) - Already deleted. SduIdentifier=%d, SduListRoot=0x%X, SduDeleteCnt=%d
Mismatch ListRoot & BO - Mode=%d, SduIdentifier=%d
urlc_SbSduListDeleteSdu (SDU DiscardTimer Stop): RbId=%d, Mode=%d, SduIdentifier=%d, DiscardTimerId=0x%x
Discarded ReTxSrbSdu: Mui %d, ReTxSrbSdu %x
urlc_SbDiscardSdu - SduBuffVars is NULL
urlc_SbDiscardSdu - Invalid SDU Identifier RbId=%d
AM Mode: SDU being discarded RbId %d, Mui %d, SduIdentifier %d
AM Mode: SDU being discarded RbId %d, Mui %d, SduIdentifier %d
UM Mode: SDU being discarded RbId %d, Mui %d, SduIdentifier %d
UM Mode: SDU being discarded RbId %d, Mui %d, SduIdentifier %d
TM Mode: SDU being discarded RbId %d, Mui %d, SduIdentifier %d
TM Mode: SDU being discarded RbId -%d, Mui -%d, SduIdentifier -%d
Just delete TimerId: RbId %d, SduIdentifier %d, State %d, DiscardTimerId %x
urlc_SbDiscardSdu(): MUI %d, RbId %d
urlc_SbDiscardSdu: RbId %d, SduId %d
Error: not supported Mode %d
urlc_SbDiscardTxedSdus() : MUI %d, RbId %d
urlc_SbDiscardTxedSdus : RbId=%d, Mui=%d, InstId=%d(Txed=%d, StartSeg=%d)
Restore SRB data: RbId %d, Mui %d, InstanceId %d, SduData %X, ReestInd %d
urlc_SbDiscardTxedSdus : RbId=%d, Mui=%d, InstId=%d(Txed=%d, StartSeg=%d)
urlc_SbResubmitSdus(Begin): RbId %d, SduListRoot %X, SegmentationFlowCntrlFifo %X, TCPSegmentationFlowCntrlFifo %X, TCPAckSduSegmentationFlowCntrlFifo %X, SduHandleList %X
urlc_SbResubmitSdus() : RbId %d, SduState %d, Mui %d, SduData %X, SduDataCopy %X
urlc_SbResubmitSdus() : RbId %d, SduData %X, SduId %d, Mui %d, SduState %d, StartSeg %d
urlc_SbResubmitSdus() : RbId %d, SduCnt %d, SduBufferOccupancy %d
urlc_SbSduTimerDiscardExpiry: RbId=%d
Unsafe to process or IIM failure: urlc_SbSduTimerDiscardExpiry RbId=%d, sdu_exp_timerId %x
SDU's discard timer not matching with Expired timer RbId=%d, Sdu->DiscardTimer = %x, sdu_exp_timer=%x
Inconsistant state of SDU discard timer RbId=%d, Sdu->DiscardTimer = %x, State=%d
SDU Discard mui=%d, Token= 0x%x
TM Mode: SDU Discard SDU TtiCount - %d, Current TtiCount - %d, RbId - %d, SduIdentifier - %d
TM Mode: SDU Discard SDU TtiCount - %d, Current TtiCount - %d, RbId - %d, SduIdentifier - %d
urlc_SbDiscardSdusTtiCnt Purge all SDUs in the segmentation buffer in TM mode
Error: not supported Mode %d
urlc_SbStartTimerDiscardTimer: RbId %d, SduIdentifier %d, DiscardTimerId %x, TimerDiscardExp %d
