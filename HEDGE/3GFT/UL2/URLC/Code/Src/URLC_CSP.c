CSP Reason: Poll Sufi Rcvd in Rx PDU [RbId = %d], siminstance %d
Record the trigger for status prohibit expiry: RbId %d, CspState %d, StatusAckPduTxed %d, TimerStatusProhibitToken %X, CSP Reason %d
CSP trigger ignored due to pending REQ [RbId = %d] New Reason = %d Pending Reason = %d
CSP Reason: MAC-hs reset indicated by UMAC [RbId = %d]
CSP Reason: Poll Bit Set in Rx PDU [RbId = %d]
CSP Reason: MrwExpiry [RbId = %d]
CSP Reason: StatusProhibitExpiry [RbId = %d]
CSP Reason: StatusPeriodicExpiry [RbId = %d]
CSP Reason: DetectedMissingPdu [RbId = %d]
CSP Reason: Poll Sufi Rcvd in Rx PDU [RbId = %d]
CSP Reason: MRW_ACK triggered in [RbId = %d]
Error detected: Unknown status report trigger reason %d [RbId = %d]
DEBUG_CODE(EUrlcurlc_CspStatusReportTooLarge): RbId %d, RequiredReportSize %d
Unsafe to process or IIM failure: urlc_CspCreateStatusReport RbId=%d
Create Status Rep Fail: Report Creation ALREADY in progress RbId=%d
DEBUG_CODE(EUrlcurlc_CspActiveSufiListNotNULL): RbId %d, ActiveSufiListRoot 0x%x
urlc_CspCreateStatusReport:(After urlc_CspAddPduRxSufis)No entries created in ACTIVE SUFI list RbId=%d
Error detected: RbId %d status PDU list entry creation failed
urlc_CspCreateStatusReport: End of the status report creation (empty sdu list case) !! RbId=%d payload = %x
Malloc returned NULL for NewEntry(urlc_CspReportPdu_t)
urlc_CspCreateStatusReport: End of the status report creation !! RbId=%d
Created MRW ACK SUFI RbId=%d, PduSn=%d, NLength=%d
CurrWorkingSufiEntry > CSP_WORKING_SUFI_SIZE, Reset to Zero RbId=%d CurrWorkingSufiEntry=%d
CSP_WORKING_SUFI_SIZE out of bound
CSP_WORKING_SUFI_SIZE is zero
CSP_WORKING_SUFI_SIZE out of bound
CSP_WORKING_SUFI_SIZE is zero
CSP_WORKING_SUFI_SIZE out of bound
CSP_WORKING_SUFI_SIZE out of bound
CSP_WORKING_SUFI_SIZE is zero
Error detected: RbId %d TimerMrwToken is NULL.
Unsafe to process or IIM failure: urlc_CspTimerMrwExpiry RbId=%d
Initiate Reset VT(MRW)=0 [RbId=%d]
Trigger Status Rep: Retx MRW SUFI RbId=%d
urlc_CspMrwAckRx - Invalid MRW_ACK rxed
CspStat StatusRep=%d NegStatusRep=%d
Error detected: Malloc returned NULL for NewEntry
urlc_CspAddPduRxSufis: Status report is not created TxAckSufis = %d(RbId =%d)
urlc_CspAddPduRxSufis: Delay Status PDU, VR_R:%d, VR_H:%d, VR_R_backup:%d, VR_H_backup:%d, NumOfMissingPdus:%d
CSP(NumOfMissingPdus): RbId %d, NumOfMissingPdus %d, SufiFsn %d, VR_R %d, VR_H %d (%d %d)
CSP NumOfMissingPdus > AmEis->RxWindowSize: RbId %d, NumOfMissingPdus %d, SufiFsn %d, VR_R %d, VR_H %d (%d %d)
urlc_CspNumOfMissingPDUs: NumOfMissingPdus = %d
Error detected: SufiFsn %d is larger than AM_MAX_SN
urlc_CspListSufiAddPdu: ListSufiStarted = %d, SufiFsn = %d, Burst = %d,(RbId =%d)
urlc_CspSufiFinish: SufiLength = %d, Type = %d, (%x %x)
Created ACK SUFI RbId=%d AckLsn=%d
Error detected: NewEntry memory allocation failed.
Error detected: Sufi is NULL.
Error detected: NewEntry memory allocation failed.
TX SUFI:
Created Status Report SUFIs RbId = %d
urlc_CspExtractSufisFromActiveList met CurrEntry->Type is unknown in RbId = %d
No entry of MRW: NumEntries %d, NLength %d
TX SUFI_NO_MORE: RbId = %d
TX SUFI_WINDOW: RbId = %d
TX SUFI_ACK: RbId = %d
TX SUFI_LIST: RbId = %d
TX SUFI_BITMAP: RbId = %d
TX SUFI_RLIST: RbId = %d
TX SUFI_MRW: RbId = %d
TX SUFI_MRW_ACK: RbId = %d
Error detected: RbId %d unsupported SUFI type %d
