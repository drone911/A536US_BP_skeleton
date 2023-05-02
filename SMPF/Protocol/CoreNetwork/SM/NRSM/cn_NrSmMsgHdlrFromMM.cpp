[N :NR,%d] (fn) %s
[W :NR,%d] %%@EM rMsgBody.pAirMsg == nullptr
[W :NR,%d] %%@EM rMsgBody.AirMsgLength== 0
[N :NR,%d] (fn) %s
[N :NR,%d] (fn) %s
[W :NR,%d] %%@EM Can't found session instance
[W :NR,%d] %%@EM Error : %s(0x%X) is not nullptr. Memmory leakage case
[W :NR,%d] %%@EM So DELETE %s and NEW again
[E :NR,%d] %s is already nullptr. So can't _DELETE_ in %s
[E :NR,%d] (_delete_) %s=0x%X in %s
[W :NR,%d] %%@EM Error %s alloc failed in %s
[E :NR,%d] (_new_) %s=0x%X in %s
[D :NR,%d] _NEW_ m_pSessionForDecoding 0x%x
[W :NR,%d] %%@EM (pTempContext == nullptr)
[E :NR,%d] (_delete_) %s=0x%X in %s
[W :NR,%d] %%@EM (pTempSession == nullptr)
[N :NR,%d] (fn) %s
[D :NR,%d]
[E :NR,%d] *** %s ***
[N :NR,%d] SMT_MM_DATA_IND (P=%d L=%d C=%d(0x%X))
[D :NR,%d] Option Length %d
[W :NR,%d] %%@EM If the PSI (%d) is a reserved or unassigned value, the UE shall ignore the message
[W :NR,%d] %%@EM Error : %s(0x%X) is not nullptr. Memmory leakage case
[W :NR,%d] %%@EM So DELETE %s and NEW again
[E :NR,%d] %s is already nullptr. So can't _DELETE_ in %s
[E :NR,%d] (_delete_) %s=0x%X in %s
[W :NR,%d] %%@EM Error %s alloc failed in %s
[E :NR,%d] (_new_) %s=0x%X in %s
[W :NR,%d] %%@EM MandatoryIe is not matched!!!!
[N :NR,%d] (set) %s = %d(0x%X)->%d(0x%X) (Changed) in %s
[N :NR,%d] (set) %s = %d(0x%X) (Already) in %s
[W :NR,%d] %%@EM Stop DATA_IND!!!!
[D :NR,%d]
[E :NR,%d] *** %s ***
[W :NR,%d] %%@EM return %s(%d) due to %s = nullptr in %s
[N :NR,%d] SMT_MM_DATA_CNF (T=%d C=%d(0x%X))
[N :NR,%d] SMT_MM_DATA_CNF_Handler : [SSC] OperationCode(%s)
[D :NR,%d]
[E :NR,%d] *** %s ***
[N :NR,%d] SMT_MM_EST_CNF (T=%d)
[W :NR,%d] %%@EM return %s(%d) due to %s = nullptr in %s
[D :NR,%d] Extract PendedMsg(%s)
[W :NR,%d] %%@EM return %s(%d) due to %s = nullptr in %s
[D :NR,%d]
[E :NR,%d] *** %s ***
[N :NR,%d] SMT_MM_DATA_REJ (T=%d R=%d)
[W :NR,%d] %%@EM pPendedMsg = nullptr in %s
[D :NR,%d]
[E :NR,%d] *** %s ***
[W :NR,%d] %%@EM return %s(%d) due to %s = nullptr in %s
[N :NR,%d] SMT_MM_EST_REJ (T=%d C=%d(%s))
[W :NR,%d] %%@EM return %s(%d) due to %s = nullptr in %s
[W :NR,%d] %%@EM Ignore rxCause=%d(OUTSIDE_LADN_AREA|EMC_FALLBACK) due to RejMsgId=0x%X pSession=%d
[W :NR,%d] %%@EM Ignore rxCause=%d(TEMP_NOT_READY) due to RejMsgId=0x%X pSession=%d
[D :NR,%d]
[E :NR,%d] *** %s ***
[D :NR,%d] RelType=%d if 2 needs to send REL_REQ to NW, reregi = %d
[W :NR,%d] %%@EM return %s(%d) due to %s = nullptr in %s
[D :NR,%d]
[E :NR,%d] *** %s ***
[D :NR,%d] Cause=%d SessionStatus=0x%X NumOfRejSessId=%d
[D :NR,%d] EPS status 0x%x
[D :NR,%d] No changed NSSAI
[N :NR,%d] [%02d] No.ofRejCause %s
[D :NR,%d]
[E :NR,%d] *** %s ***
[N :NR,%d] Status=%d-->%d(%s) IwkN26=%d AsState=%d RegType=%d
[SM|%d,CP] Status=%d-->%d(%s) IwkN26=%d,AsState=%d
[D :NR,%d] Status=%d(%s) IwkN26=%d AsState= %d RegType=%d
[N :NR,%d] Update SM Codec: [%s] -> [%s]
[D :NR,%d] Skip smt_ProcessPendingMsg due to pPendingIdList=nullptr
[D :NR,%d] PendingId=%d RejectedSize=%d
[E :NR,%d] (_delete_arr_) %s=0x%X in %s
[W :NR,%d] %%@EM return %s(%d) due to %s = nullptr in %s
[E :NR,%d] (_delete_arr_) %s=0x%X in %s
[D :NR,%d]
[E :NR,%d] *** %s ***
[N :NR,%d] AuthType %d
[W :NR,%d] %%@EM return %s(%d) due to %s = nullptr in %s
[W :NR,%d] %%@EM return %s(%d) due to %s = nullptr in %s
[D :NR,%d]
[E :NR,%d] *** %s ***
[D :NR,%d] SM task already initialized
[D :NR,%d] NrSM : Core init
[W :NR,%d] %%@EM SMT_MM_INIT_IND_Handler //rMsgBody.pCnCommonDb == nullptr
[D :NR,%d] DB addr 0x%x
