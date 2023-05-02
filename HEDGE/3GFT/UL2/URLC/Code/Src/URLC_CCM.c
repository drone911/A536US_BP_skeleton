urlc_CcmInitialiseUl():CcmVars - Error detected, NULL Pointer
urlc_CcmInitialiseDl():CcmVars - Error detected
Decipher check: TotalNumofRbs %d, head %d, tail %d
urlc_CcmPurgeUl() : CcmVars - Error detected, NULL Pointer RbId %d
urlc_Flush_CipherConfig CipherConfigDisposalRoot[%d]=0x%X
urlc_Flush_CipherConfig: No Entry was in CipherConfigDisposalRoot[%d]
0x%X is freed
urlc_CcmNewCipherConfig Asn_CipheringAlgorithm_r7: %d
CipherKey
CipherKey is NULL
Error detected: urlc_CcmNewCipherConfig: NewCipherConfig memory allocation failed.
Create New Ciphering Configuration: Present %d, Algorithm %d, CipherConfigListRoot %x, NewCipherConfig %x
urlc_CcmRbGetUlCipherConfig() :CcmVars - Error detected, NULL Pointer RbId %d
urlc_CcmRbGetUlCipherConfig: UL Pending Config NULL, returning active %x, RbId=%d, PduSn=%d, HFN=%d
UL: RbId %d, PduSn(%d)== UlActivationTime of %d, Pending configuration would be used(HfnTobeUsed = %d)
UL Returning active config ConfigPtr=%x, HFN=%d
urlc_CcmRbGetDlAmCipherConfig(): CcmVars - Error detected, NULL Pointer RbId %d
DL PendingA activation time meet(I): PduSn %d, DlPendingActivationTime %d, RxWindowSize %d
DL PendingA activation time meet(II): PduSn %d, DlPendingActivationTime %d, RxWindowSize %d
DL PendingA Config (VR_R == DlPendingActivationTime): RbId %d, PduSn %d, DlPendingActivationTime %d, DlPendingAHfn %d
DL PendingA Config is NOT NULL, RbId %d, PduSn %d, DlPendingActivationTime %d, DlPendingAHfn %d
DL Pending Activation time meet(I): PduSn %d, DlActivationTime %d, RxWindowSize %d
DL Pending Activation time meet(II): PduSn %d, DlActivationTime %d, RxWindowSize %d
DL Pending Config is NOT NULL, RbId %d, PduSn %d, VR_R %d, VR_TempR %d, Activation time %d, PendingPtr %x, PendingHfn %d
DL Pending & PendingA are same: RbId %d, PduSn %d, Activation time %d, DlPendingAPtr %x, DlPendingAHfn %d
DL PendingA->Pending, PendingA deleted.(NextActivationTime=%d, NewPendingHfn=%d)
Use new cipher config: RbId %d, PduSn %d, ActTime %d, PendingPtr(new)%x, Hfn %d
AM MODE: Adjusted active HFN for SN=%d is HFN=%d, VR_R=%d
AM MODE: Adjusted active HFN for SN=%d is HFN=%d, VR_R=%d
Error detected: urlc_CcmRbGetDlUmCipherConfig: PduSn %d, UmEis is NULL!
Error detected: urlc_CcmRbGetDlUmCipherConfig: RbId %d, CcmVars is NULL!
DL Pending Config is NOT NULL, RbId %d, PduSn %d, Activation time %d, PendingPtr %x, PendingHfn %d
DL Pending & PendingA are same: RbId %d, PduSn %d, Activation time %d, DlPendingAPtr %x, DlPendingAHfn %d
DL PendingA->Pending, PendingA deleted.(NextActivationTime=%d, NewPendingHfn=%d)
UM MODE: SN Wrap Increment HFN(RbId=%d, VR_US=%d, SN=%d, HFN=%d)
ActivationTime met Included & wrap Increment HFN (RbId %d, VR_US %d, SN %d, HFN %d, DlActivationTime %d)
ActivationTime met Included & No HFN Increment(RbId %d, VR_US %d, SN %d, HFN %d, DlActivationTime %d, ReestablishInd %d
urlc_CcmRbPendingCipherConfigMetrics() : CcmVars - Error detected, NULL Pointer RbId %d
urlc_CcmRbReestResetCipherConfig() : CcmVars - Error detected, NULL Pointer RbId %d
urlc_CcmRbAlterHfnCipherConfig UL(Old HFN %d, New HFN %d, UlActivePtr %x)
urlc_CcmRbAlterHfnCipherConfig DL(Old HFN %d, New HFN %d, DlListEntry %d, DlActivePtr %x)
Error detected: urlc_CcmRbAddCipherConfig: RbId=%d, CcmVars/CipherConfig is NULL
Error detected: urlc_CcmRbAddCipherConfig: RbId=%d, AmEis is NULL
urlc_CcmRbAddCipherConfig(): Need to delete DlPendingPtr (DlPendingPtr %X, DlActivationTime=%d, DlPendingHfn=%d)
DL PendingA->Pending, PendingA deleted.(NewDlPendingAPtr %X, NewActivationTime=%d, NewPendingHfn=%d)
Update current cipherConfigInfo at DlPendingPtr(Activation time is same): RbId %d, DlActivationTime %d
urlc_CcmRbAddCipherConfig(DL Pending): RbId=%d, HFN=%d, Activation=%d, RbAccessCnt %d, CipherConfig %x
SMC rollback: RbId %d, VR_R %d, VR_H %d, DlActivationTime %d, RxWindowSize %d
CURLC_CIPHERCONFIGERR_IND (RbId=2)
urlc_CcmRbAddCipherConfig(DL PendingA): RbId=%d, HFN=%d, Activation=%d, RbAccessCnt %d, CipherConfig %x
urlc_CcmRbAddCipherConfig(UL Pending): RbId=%d, HFN=%d, Activation=%d, RbAccessCnt %d, CipherConfig %x
urlc_CcmRbAddCipherConfig(UL PendingA): RbId=%d, HFN=%d, Activation=%d, RbAccessCnt %d, CipherConfig %x
urlc_CcmRbSortDlCipherConfig() : CcmVars - Error detected, NULL Pointer RbId %d
urlc_CcmRbIncrementActiveHfn(): CcmVars - Error detected, NULL Pointer RbId %d
urlc_CcmRbIncrementActiveHfn UL: RbId %d, HFN %d
No Active CipherConfigs: RbId %d
urlc_CcmRbIncrementActiveHfn DL: RbId %d, HFN %d, Config %d, CipherConfig %x
urlc_DecipherPendingTransaction(%d): PendingRbList[%d] %d, head, %d, tail %d, NoOfRbs %d
urlc_DecipherPendingTransaction(%d): IsScheduledDecipherSTF %d
urlc_DecipherPendingTransaction(): Scheduled Deciphering for RbId %d
urlc_DecipherPendingTransaction(%d): IsScheduledDecipherSTF %d
urlc_DecipherPendingTransaction(): Scheduled Deciphering for RbId %d
urlc_DecipherPendingTransaction(): Mode %d for RbId %d, tail %d, head %d, EIS 0x%x
Invalid pending RB idx %d, PendingRbList[Rbindex] %d.
urlc_DecipherPendingTransaction() %d, PendingRbList[Rbindex] %d.
urlc_DecipherTransactionScheduling(RbId %d)Received wrong parameter : Transaction=NULL, Eis=%x
urlc_DecipherTransactionScheduling(RbId %d)Received wrong parameter : Transaction=%x, Eis=%x, Xact'n->Eis=%x
LTE LMAC MODE!!!: RbId %d
urlc_DecipherTransactionScheduling: RbId %d Transaction %x
RxLmacQueueStatus (%u)
urlc_RxDecipherTimerStart: RbId %d, Transaction %x, TotalSizeCipher %d
LMAC BUSY(decipher transaction) RxLmacQueueStatus (%u)
LMAC BUSY(decipher transaction): RbId %d PollingCnt %d
urlc_CcmUea1AddToTransaction: RbId %d, PduSn %d, UL HFN %d, CipherConfig %x, DataRbCnt %d
CipherKey(Current)
CipherKey(Config)
NgCnt is higher than 2: RbId %d, Ngcnt %d, CipherConfig %x
CipherConfig is different(Ngruop): RbId %d, OldCipherConfig %x, CipherConfig %x
NgCnt Count is BIG %d
UL Transaction->ArrayCnt is out of bound %d
NgCnt Count is BIG %d
CurrPduHandle==NULL: RbId %d
Snow3G : RbId %d, PduSn %d, HFN %d, CkIndex %d
TX Cipher Only Done(SRBs): RbId %d, CipherConfig %x, PduNum %d, PduSn %d, Snow3G %d, HFN %d, PaySize %d
TX Cipher Info(DataRBs): RbId %d, CipherConfig %x, PduNum %d, PduSn %d, Snow3G %d, HFN %d, CKSrcIdx %d
Error detected: RbId %d CipherTransaction ArrayCnt %d exceeds URLC_MAX_CIPHER_REQUESTS
ERROR::urlc_CcmUea1AddToDlTransaction::not supported mode(%)!
NumOfNgroup is higher than max: RbId %d, NumOfNgroup %d
NumOfNgroup value out of bounds : %d(RbId %d)
RX decipher only(New Cipher Config): RbId %d, Algorithm %d, CkIdx %d, NgrCnt %d, NumOfPdu(ForOldConfig)%d, CipherConfig %x, OldCipherConfig %x
NumOfNgroup value out of bounds : %d(RbId %d)
DL Transaction->ArrayCnt is out of bound %d
RX decipher only: RbId %d, PduSn %d, Snow3G %d, HFN %d, CipherConfig %x, PduNum %d, AutoCountc %d
Error detected: RbId %d CipherTransaction ArrayCnt %d exceeds URLC_MAX_CIPHER_REQUESTS
TX urlc_CcmUea1ProcessUlTransaction() : RbId %d, CipheredPdus %d, TransactionTID 0x%x, Snow3G %d, TxGlobalCnt %d
urlc_CcmUea1ProcessDlTransaction(): LMACnotSafe %d , QueuedTransactionNum %d , IsRunningTimer %d , TotalNumOfRbs %d
Start queueing (decipher transaction): RbId %d, Mode %d, TokensTaken %d, TokensTakenMax %d
Push to TransactionInfo: RbId %d, Mode %d, QueuedTransactionNum %d, TotalNumOfRbs stored %d
LTE LMAC MODE!!!: RbId %d, Mode %d, QueuedTransactionNum %d, MaxQCntCipherTransaction %d
urlc_CcmReceiveCipherCnf_UL TID=%d
Remove UL Transaction for inactive RB %d
Remove DL Transaction for inactive RB %d
Resetting IsScheduledDecipherSTF
LTE LMAC MODE!!!
urlc_CcmReceiveCipherCnf_DL() RbId %d, LMACnotSafe %d
End queueing(decipher transaction): RbId %d, AM, QueuedTransactionNum %d, LMACnotSafe %d
End queueing(decipher transaction): RbId %d, UM, QueuedTransactionNum %d, LMACnotSafe %d
Scheduled next deciphering for RbId %d, PendingQueuedTransNum %d
urlc_CcmReceiveCipherCnf_DL(): head %d, tail %d, TotalNumOfPendingRbs %d
Scheduled Deciphering for Rb Index %d, RBId %d, Pending list head %d
urlc_CcmAbortCiphering(): CcmVars - Error detected, NULL Pointer RbId %d
urlc_CcmAbortCiphering UL RbId=%d
urlc_EmGetUlEis debugging test
urlc_CcmAbortCiphering DL RbId=%d
........No Active Configs, return NULL: RbId %d, PduSn%d
Error detected: RbId %d, UlCiphernfo memory allocation failed.
Allocate transaction dynamically(UL): RbId %d, iUlDynamicAllocCnt %d
Allocate transaction dynamically(DL): RbId %d, iDlDynamicAllocCnt %d
urlc_CcmRemoveDatabaseTransaction: RbId %d Transaction %x
Already Free for Transaction
stackId : %d is already disabled. do nothing
other stackId : %d is enabled. do nothing
urlc_Destroy_DecpherTime freed complete
Created pal_TmCreateTimer for decipher: RbId %d, UrlcDecipherTimer 0x%x
UrlcDecipherTimer is already exist!! UrlcDecipherTimer 0x%x
Do not initiate pal_TmCreateTimer: RbId %d
urlc_RxDecipherTimerExpiry(Eis is NULL): RbId %d
urlc_RxDecipherTimerExpiry : RxDecipherTimer is not running!
TransactionId->Eis == NULL: RbId %d
TransactionId->Eis == NULL: RbId %d
urlc_RxDecipherTimerExpiry(Invalid Mode): RbId %d, Mode %d
urlc_RxDecipherTimerExpiry: RbId %d, Mode %d, TransactionId %x, QueuedTransactionNum %d
urlc_RxDecipherTimerExpiry: RbId %d, Mode %d, TransactionId %x, QueuedTransactionNum %d
urlc_CcmDeleteCipherTransactionAndPduhandle: RbId =%d, RB In Timer %d, IsScheduledDecipherSTF %d, IsRunningTimer %d
Decipher flags are reset : RbId %d, IsScheduledDecipherSTF = %d
Free the CipherTransaction: RbId %d, NumOfTransaction %d, Id %d, NumOfPdus %d
Invalid direction: RbId %d
Rearragned Pending Rb List Info, head %d , tail %d
RbId %d in the pending list removed as transaction is freed, isRbPresent 0x%x
URLC requires Pause delay: IsScheduledDecipherSTF %d, PendingRbs[SIMInstance].TotalNumOfRbs = %d
LMAC Decipher failed, Using SW Deciphering: RbId:%d, Algorithm %d, PduSn %d
SW decipher data:
PASS through LMAC decipher:
LMAC Decipher Busy, Using SW Deciphering RbId:%d, Algorithm %d, PduSn %d
SW decipher data:
Both SIM present: SW decipher: RbId:%d, Algorithm %d, PduSn %d
SW decipher data:
urlc_CcmExcuteCipherAndCheckLI: Null pointer (RbId =%d)
LI indicates out of PDU range: RbId %d, HFN %d, PduSn %d, %dth, LiSize %d, LiValue 0x%x, payloadSize %d
urlc_CcmSmcRollback(): CcmVars - Error detected, NULL Pointer RbId %d, No Previous Configuration to Roll back!
Suspend state (1,3,4) and LI in PDU
[SEC] SecModComp pending for Tx, Activation time met(RbId=2), Deciphering failed. Discard PDU : %d
[SEC] SecModComp pending for Tx, Activation time met(RbId=2), Deciphering passed. PDU : %d
Decipher check: RbId %d, PduSn %d, OldHfn %d, NewHfn %d
Decipher check: RbId %d, PduSn %d, OldHfnCipherErr %d, NewHfnCipherErr %d, PaddingLIforOldHfn %d, PaddingLIforNewHfn %d
Decipher failure[New cipher config]: RbId %d, PduSn %d, Activation time %d, OldHfn %d, PendingPtr %d, NewHfn %d
CURLC_CIPHERCONFIGERR_IND (RbId=2)
Decipher failure[New cipher config]: RbId %d, PduSn %d, Activation time %d, OldHfn %d, PendingPtr %x, NewHfn %d
CURLC_CIPHERCONFIGERR_IND (RbId=2)
urlc_CcmSmcRollback: RB3 Eis is NULL
Data RB Count is BIG, DataRbCnt %d
urlc_CcmRbRemoveCipherConfig: RbId%d, CallerId %d, CkIndex %d, RbAccessCnt %d, CipherConfig %x, PrevEntry %x, NextEntry %x
urlc_CcmRbRemoveCipherConfig(Remove): CkIndex %d, CipherConfig(Remove)%x
Error detected: New Active List Entry memory allocation failed RbId %d.
urlc_CcmAddToDlActiveList: RbId %d, DlActivePtr %x, DlActiveHfn %d, NewEntryListPtr %x, NewEntry->DlActivePtr %x, NewEntry->DlActiveHfn %d
urlc_CcmRemoveFromDlActiveList: RbId %d, CallerId %d, OldEntryPtr %x, OldDlActivePtr %x
