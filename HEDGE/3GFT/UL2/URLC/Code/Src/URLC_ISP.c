Status Report Invalid [RbId=%d, InvalidCnt =%d]
URLC reset Proc initiated by UE Status Report Invalid [RbId=%d]
Status PDU's raw data is not correct: RbId %d, ReportSize %d
Ignore/Inconsitence receiving SUFIs :RbId %d, ReportStatus %d
Unsafe to process or IIM failure: urlc_IspRxStatusPdu RbId=%d
Receive Status PDU SUFIs: RbId = %d
Previous Status PDU is still processing(Discard): RbId %d, SUFI TYPE %d
BitOffset of Status PDU is not vaild(Discard): RbId %d, BitOffset %d, ReportSize %d
SUFI_RLIST(End):
BitOffset of Status PDU is not vaild(SUFI_LIST): RbId %d, BitOffset %d, ReportSize %d
SUFI_LIST: Length = %d
Discard STATUS PDU: invalid Length value in LIST SUFI
BitOffsetError(SUFI_MRW): RbId %d, ReportSize %d
Unknown SUFI - Discard: Invalid [RbId=%d]
SUFI_NO_MORE
Unknown SUFI: Invalid format [RbId %d]
[Detection of HS-SCCH Order missed] Resetting Consecutive poll expiry Counters. Rbid=%d
Received only SUFI_NO_MORE [RbId=%d]
PDU Segmentation can start II(by StatusReport): RbId %d, VT_A %d, VT_S %d
urlc_IspStatusStateInvokedReturnFunc() : RbId %d, DataSize %d, NumTxReq %d, NumRetxReq %d, SDU Buffer(Remaining)%d
POLL SUFI Handler: RbId %d, PollSN %d, VR_H %d
POLL SUFI updated VR_H: RbId %d, VR_H %d
urlc_IspStatusClearPollFlags: Cancelling Poll_Prohibit_Timer(RbId=%d)
BitOffset of Status PDU is not vaild(RLIST): RbId %d, BitOffset %d, ReportSize %d
RLIST_SUFI:
RX SUFI_RLIST: RbId %d, FSN = %d, LENGTH = %d
Invalid/Inconsistent
BitOffset of Status PDU is not vaild(RLIST): RbId %d, BitOffset %d, ReportSize %d
Status PDU is not vaild(RLIST), Error Burst: RbId %d, RListLength %d, RListData %d
Status PDU is not vaild(RLIST): RbId %d, RListLength %d, RListData %d
Invalid/Inconsistent
CW %d, RListSn %d
RLIST_SUFI(Invalid)OutWin: RbId %d, RListSn %d, VT_A %d, VT_S(-1):%d, InvalidStatusPduCnt %d
RLIST_SUFI(Invalid)OutWin: RbId %d, RListSn %d, VT_A %d, VT_S(-1):%d, InvalidStatusPduCnt %d
BitOffset of Status PDU is not vaild(MRW): RbId %d, BitOffset %d, ReportSize %d
SUFI_MRW: MRW Length = %d
MRW SN = %d
BitOffset of Status PDU is not vaild(MRW): RbId %d, BitOffset %d, ReportSize %d
MRW SN = %d
BitOffset of Status PDU is not vaild(MRW): RbId %d, BitOffset %d, ReportSize %d
NLength = %d
BitOffset of Status PDU is not vaild(MRW_ACK): RbId %d, BitOffset %d, ReportSize %d
SUFI_MRW_ACK: NLength = %d SN_Ack = %d
BitOffset of Status PDU is not vaild(POLL): RbId %d, BitOffset %d, ReportSize %d
Error detected: RbId %d Poll_pdu_ind_timer is NULL.
POLL SUFI: RbId %d, PollSN %d, VR_H %d Timer started for 1 milisecond.
POLL SUFI: Event not posted as PollSn %d is same as last received %d
POLL SUFI: RbId %d, PollSN %d, VR_H %d Message Posted directly
POLL SUFI: Event not posted as PollSn %d is same as last received %d
BitOffset of Status PDU is not vaild(ACK): RbId %d, BitOffset %d, ReportSize %d
RX SUFI_ACK: RbId = %d, LSN = %d
ACK_SUFI(In window,Ignored): RbId %d, VT_A %d, VT_S %d, LowerEdge %d, AckLsn %d, InvalidStatusPduCnt %d
ACK_SUFI(out window):RbId %d, VT_A %d, VT_S %d, LowerEdge %d, AckLsn %d
ACK_SUFI WaitMrwAckSufi is TRUE(Ignore): RbId %d, VT_A %d, VT_S %d, AckLsn %d
ACK_SUFI(Inconsistent): RbId %d, PduSn %d
No Data in PduBuffVars. All PDU recieved ACK: RbId %d
BitOffset of Status PDU is not vaild(LIST): RbId %d, BitOffset %d, ReportSize %d
RX SUFI_LIST: RbId = %d, SnValue = %d, LValue = %d, ListLength = %d
LIST_SUFI(Invalid)OutWin: RbId %d, PduSn %d, LValue %d, VT_A %d, VT_S(-1):%d, InvalidStatusPduCnt %d
LIST_SUFI(Inconsistent)_No match SN, Re-Seaching now: RbId %d, PduSn %d, VT_A %d, VT_S %d
LIST_SUFI(Inconsistent)_No match twice. Invalid NACK: RbId %d, PduSn %d, VT_A %d, VT_S %d
LIST_SUFI(Inconsistent): RbId %d, PduSn %d
LIST_SUFI(Inconsistent): RbId %d, PduSn %d
BitOffset of Status PDU is not vaild(BITMAP): RbId %d, BitOffset %d, ReportSize %d
Invalid bitmap Sufi: RbId %d, FSN %d, VT_A %d, VT_S %d
BitOffset of Status PDU is not vaild(BITMAP): RbId %d, BitOffset %d, ReportSize %d
RX SUFI_BITMAP: RbId %d, Length %d, FSN %d, Byte %X, ReportedLastSn %d, VT_A %d, VT_S %d
SUFI_BITMAP(Invalid)OutWin: RbId %d, PduSn %d, VT_A %d, VT_S:%d, InvalidStatusPduCnt %d
PDU SN was found: FSN %d, PduSn %d
PduHandle is NULL: FSN %d
FSN is in window: FSN %d, PduSn %d
Already deleted: FSN %d
Ignore(Already deleted): FSN %d
BitOffset of Status PDU is not vaild(BITMAP): RbId %d, BitOffset %d, ReportSize %d
SUFI_BITMAP: RbId %d, Length %d, FSN %d, Byte %X, ReportedLastSn %d, VT_A %d, VT_S %d
PduHandle is NULL
Inconsistent: SN %d
Pdu already deleted(Nack): PduSn %d
PduHandle is NULL
Inconsistent, PduSn %d
Pdu already deleted(Ack): PduSn %d
BitOffset of Status PDU is not vaild(WINDOW): RbId %d, BitOffset %d, ReportSize %d
SUFI_WINDOW: WSN = %d
urlc_IspInterpretWindowSufi - WSN = 0 [INVALID Case!!]
