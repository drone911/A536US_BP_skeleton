[W :NR,%d] ~QmnrDbMngr
[W :NR,%d] DeleteQmData: pDbObj is nullptr, check!
[W :NR,%d] _DELETE_ DeleteDBobj 0x%X
[N :NR,%d] [Check] DeleteSaUplinkQmQ: gSaUplinkQmQ[%d] = 0x%X, Data Free for BitMapRbId(0x%X)
[D :NR,%d] QmnrDbMngr::CreateQmNrObj: SessionId(%d), QFI(%d), RbId(%d), CpState[%s]
[W :NR,%d] %%#EM CreateQmNrObj: Can't create New Db Obj
[N :NR,%d] %%#ST CreateQmNrObj: _NEW_ QmnrDbObj (0x%X)
[W :NR,%d] [Check]used Invalid QFI(%d)!!!
[N :NR,%d] %%#ST CreateQmNrObj: _NEW_ Create QFI (0x%X)
[W :NR,%d] %%#EM CreateQmNrObjBySdap: pQfiList is nullptr!
[D :NR,%d] CreateQmNrObjBySdap: [%d] QFI = (%d)
[W :NR,%d] %%#EM [Check] CreateQmNrObjBySdap: Fail to CreateQmNrObj
[W :NR,%d] %%#EM [Check]CreateQmNrObjBySdap: pQmDbObj is nullptr
[W :NR,%d] %%#EM [Check]CreateQmNrObjBySdap: No Valid QFI in pQfiList
[N :NR,%d] QmnrDbMngr::DeleteQmNrObjWithSessionId (%d)
[W :NR,%d] [Check] DeleteQmNrObjWithSessionId: pDbObj is nullptr, check!
[N :NR,%d] DeleteQmNrObjWithSessionId: Find Session and _DELETE_ pQmDb 0x%X
[W :NR,%d] DeleteQfiData: pQf is nullptr, check!
[N :NR,%d] DeleteQfiData:Find Proper QFI(%u) then Delete QFI[0x%X]
[W :NR,%d] [Check] DeleteQfiData: NOT found QFI(%d)
[W :NR,%d] %%#EM [Check] DeleteQmNrObjWithSesAndQfi: No Db for Sid(%d)
[N :NR,%d] %%#ST DeleteQmNrObjWithSesAndQfi: Not Delete QmnrDbObj due to RemainedQfiSize(%d)
[N :NR,%d] QmnrDbMngr::DumpQmNrDb: Size (%d)============================================
[N :NR,%d] QmnrDbMngr::============================================================
[D :NR,%d] Session (%d) Not Found!!!!!!!!!
[N :NR,%d] QmnrDbMngr::FindQmDbWithCId Find ==> Cid[%d]
[N :NR,%d] %%#EM pQmDb = nullptr
[D :NR,%d] Not Found!!!!!!!!!
[N :NR,%d] %%#EM [Check] FindQfiDbOnQmDbWithQfi: pQfis = nullptr
[D :NR,%d] FindQfiDbOnQmDbWithQfi: Qfi (%d) Not Found!!!!!!!!!
[N :NR,%d] QmnrDbMngr::FindQfiDbOnQmDbWithQfiPdutype: QFI(%d), PduType[%s]
[D :NR,%d] CurrDb ==> SessionId[%d] QFI[0x%X] Flag[0x%X]
[D :NR,%d] Not Found!!!!!!!!!
[D :NR,%d] %%#ST FindDefaultQfiDbOnQmDb: QFI List Size = 0 for SessionId(%d), so return nullptr
[D :NR,%d] %%#ST FindDefaultQfiDbOnQmDb: Default QFI(%d) for SessionId(%d), RbAssigned(%d)
[N :NR,%d] FindQmDbWithCIdQfiPdutype: for Cid(%d), QFI(%d), PduType[%s]
[D :NR,%d] CurrDb ==> Cid(%d), Flag(0x%X)
[N :NR,%d] %%#EM pQmDb = nullptr
[D :NR,%d] Not Found!!!!!!!!!
[N :NR,%d] FindQmDbWithCIdQfi: for Cid(%d), QFI(%d)
[D :NR,%d] CurrDb ==> Cid(%d), Flag(0x%X)
[N :NR,%d] %%#EM pQmDb = nullptr
[D :NR,%d] Not Found!!!!!!!!!
[N :NR,%d] QmnrDbMngr::FindQmDbWithSessionIdQfi: for SessionId(%d), QFI(%d)
[D :NR,%d] CurrDb ==> SessionId(%d), Flag(0x%X)
[N :NR,%d] %%#EM pQmDb = nullptr
[D :NR,%d] Not Found!!!!!!!!!
[D :NR,%d] QmnrDbMngr::CheckQmStateOnDbWithSId[%d]
[D :NR,%d] %%#ST CurrDb ==> SessionId[%d] CId[%d] QmState[%s] Flag[0x%X]
[N :NR,%d] %%#EM pQmDb = nullptr
[N :NR,%d] %%#RB AssignRbIdWithQfiAndSessionId: SessionId(%d), RbID(%d), bDefaultRb(%d), FullCfg(%d)
[W :NR,%d] %%#EM pQmNrDb = nullptr
[N :NR,%d] %%#RB --- Target QFI (%d)
[W :NR,%d] %%#RB [Check] Qfi(%d) is Only in SDAP (It means SM didn't get the message but Rb is allocated)
[D :NR,%d] %%#RB [Check] AssignRbIdWithQfiAndSessionId: DefaultRB Changed (%u) -> (%u)
[N :NR,%d] %%#RB DefaultRB(%d) will be used for QFI(%d)
[D :NR,%d] %%#RB [Check] AssignRbIdWithQfiAndSessionId: DefaultRB (%u) Disabled
[N :NR,%d] %%#RB ReleaseRbIdWithQfiAndSessionId: SessionId(%d), RbID(%d)
[W :NR,%d] %%#EM [Check] ReleaseRbIdWithQfiAndSessionId: Check Invalid RbID(%d)
[N :NR,%d] %%#RB ReleaseRbIdWithQfiAndSessionId: DefaultRb(%u) Release Case
[N :NR,%d] %%#RB --- [%d] Target QFI (%d) : DefaultRB Exist Case
[N :NR,%d] %%#RB --- [%d] Target QFI (%d) : No DefaultRB Case
[N :NR,%d] %%#RB ReleaseDefaultRbWithSessionId: SessionId(%d)
[N :NR,%d] %%#RB --- [%d] Target QFI (%d)
[N :NR,%d] %%#RB QmnrDbMngr::IsAvailableRbId
[D :NR,%d] %%#RB CurrDb ==> SessionId(%d), QFI(%d), PduType[%s], RbId(%d), Flag(0x%X)
[N :NR,%d] %%#EM pQmDb = nullptr
[D :NR,%d] %%#RB IsRb Available %d
[N :NR,%d] %%#SM UpdateNrDbWithSmInform: Sid(%d), Cid(%d), PduType[%s], QfiSize(%d)
[N :NR,%d] %%#SM ------ CpState[%s], OldSid(%d)
[N :NR,%d] %%#SM ------ QFI(%d), RbId(%d), OldSid(%d)
[W :NR,%d] %%#EM NR QM db is null
[W :NR,%d] %%#EM [Check] UpdateNrDbWithSmInform: No QmnrDbObj for OldSid(%d)
[W :NR,%d] %%#EM [Check] UpdateNrDbWithSmInform: Different Cid(%d) vs. OldCid(%d)
[N :NR,%d] %%#ST QmnrDbMngr::UpdateCpStateWithSmInform SessionId (%d) CpState(%s)
[D :NR,%d] %%#EM [Check] UpdateCpStateWithSmInform: No Valid Session, return!
[N :NR,%d] RemoveNrDbWithSmInform: Sid(%d), QfiSize(%d)
[W :NR,%d] %%#EM [Check] No Db for Sid (%d), Check
[W :NR,%d] %%#EM [Check] ReleaseRbWithSession: No QmNrDb for for SesId(%d), Mismatch Check!
[W :NR,%d] %%#EM [Check] ReleaseRbWithSession: Why Still RB_ASSIGNED for SesId(%d), QFI(%d)
[D :NR,%d] %%#DP ReleaseRbStateAllSession: bFullCfg(%d), gSaUplinkQmQ = %x, QmMainQueue EnqCount = %d
[W :NR,%d] %%#EM [Check] ReleaseRbStateAllSession: No Valid Session, return!
[W :NR,%d] %%#EM [Check] ReleaseRbStateAllSession: QmNrState[%s] for SesId(%d)
[W :NR,%d] %%#EM ReleaseRbStateAllSession: CnCommonDb = nullptr
[W :NR,%d] %%#EM ReleaseRbStateAllSession: pNrSmSesCtrl = nullptr
[D :NR,%d] %%#EM ReleaseRbStateAllSession: BitRemainSes(0x%X) / PendedSesId(%d) => Start BACKOFF_TIMER
[N :NR,%d] %%#ST [QM NR] UpdateQmNrMmState
[W :NR,%d] %%#EM common DB is null
[W :NR,%d] %%#EM NrSmCtrl is null
[D :NR,%d] %%#ST CurrDb ==> SessionId[%d] CpState[%s] Flag[0x%X] RbAssigned[%d] CpState(%s)
[N :NR,%d] %%#EM pQmDb = nullptr
[N :NR,%d] %%#ST UpdateCpStateBySid: Sid(%d), CpState[%s]
[W :NR,%d] %%#ST %s is nullptr, so return
[D :NR,%d] %%#ST -- CurrDb ==> Cid[%d] CpState[%s] Flag[0x%X]
[W :NR,%d] %%#ST -- NULL QFI size! Check!
[D :NR,%d] %%#ST ---- CurrDb ==> Cid[%d], QFI(%d), PduType[%s], RbState(%d), QmState[%s], Flag(0x%X)
[W :NR,%d] %%#ST [Check] -- Multi QFI and Different QmNrState Case
[W :NR,%d] %%#ST %s is nullptr, so return
[W :NR,%d] %%#ST %s is nullptr, so return
[W :NR,%d] %%#EM FindQfiOnlyOneData: pQfi is nullptr, so return 0
[D :NR,%d] %%#EM GetNumOfQfisWithoutDrb: No DRB for Qfi(%u) -> TotalCnt(%u)
[D :NR,%d] %%#ST [Check] SetPendingDataSession: Sid(%u) [%s] but Not Set UL Data Status
[D :NR,%d] %%#ST [Check] SetPendingDataSession: Not Actual UL Pending, Sid(%u) cannot Change to [QM_UL_PENDED]
[N :NR,%d] SetPendingDataSession: SessionId(%d): [%s] -> [%s]
[N :NR,%d] %%#ST QmnrDbMngr::ResetPendingDataSession
[N :NR,%d] GetPendingDataSession: Session[%d]: QM_UL_PENDED
[N :NR,%d] QmnrDbMngr::DumpPendingDataSession ----------
[N :NR,%d] -- SesId[%u]: PendingDataSessionState[%s], UlDataStatus(%u)
[N :NR,%d] --------------------------------------------------------
[W :NR,%d] SetQmNrState: Invalid SessionId (%d)
[N :NR,%d] SetQmNrState: SessionId(%d) = [%s] -> [%s]
[N :NR,%d] QmnrDbMngr::ResetQmNrState
[W :NR,%d] GetQmNrState: Invalid SessionId (%d), return QM_STATE_NONE
[N :NR,%d] QmnrDbMngr::DumpQmNrState ----------
[N :NR,%d] m_QmState[%d] = [%s]
[N :NR,%d] ----------------------------------------------
[N :NR,%d] QmnrDbMngr::SetFlagTypeBySessionId SessionId(%d) Flag(0x%x)
[N :NR,%d] %%#EM SetFlagTypeBySessionId pQmDb = nullptr
[N :NR,%d] QmnrDbMngr::ResetFlagTypeBySessionId SessionId(%d) Flag(0x%x)
[N :NR,%d] %%#EM ResetFlagTypeBySessionId pQmDb = nullptr
[N :NR,%d] QmnrDbMngr::ResetFlagTypeBySessionId SessionId(%d)
[N :NR,%d] %%#EM ResetFlagBySessionId pQmDb = nullptr
[N :NR,%d] QmnrDbMngr::GetFlagTypeBySid Sid(%d) Flag(0x%x) => result(%d)
[N :NR,%d] %%#EM GetFlagTypeBySid pQmDb = nullptr
[D :NR,%d] %%#ST HoldingDataSession: pDbObj is nullptr!
[D :NR,%d] %%#ST HoldingDataSession: SessionId (%d) / Hold? (%d)
[N :NR,%d] %%#EM GetFlagTypeBySid pQmDb = nullptr
[N :NR,%d] %%#EM GetFlagTypeBySid pQmDb = nullptr
[W :NR,%d] %%#EM [Check] GetPendingDataSessionState: Sid(%d) Error! Return QM_NO_UL_PENDED
[W :NR,%d] %%#EM [Check] CheckSrTriggered: Sid(%d) Error! Return false
[D :NR,%d] %%#ST ChangePendingDataSessionState: SessionId(%d): [%s] -> [%s]
[D :NR,%d] %%#ST ApplyPendingDataSession: ValidSes(0x%X), QmActiveSes(0x%X), EnqueuedSes(0x%X), RemainedSes(0x%X)
[W :NR,%d] %%#ST ApplyPendingDataSession: No Action since (null ValidSession || (null EnqueSession && null RemainSession))
[W :NR,%d] %%#EM [Check] ApplyPendingDataSession: Data in Not Valid Session(%d)
[D :NR,%d] %%#ST CheckAllDrbAssignedForSr: SrCntBefore (%d), RbNotAssignedCnt (%d), return %s
[D :NR,%d] GetAssignedRbBitMap: [0x%2X]
[W :NR,%d] %%#EM [Check] GetAssignedRb: Sid(%d) Error! Return RB_NOT_ASSIGNED(0)
[W :NR,%d] %%#EM CnCommonDb = nullptr
[W :NR,%d] %%#EM pNrSmSesCtrl = nullptr
[D :NR,%d] SetAssignedRb: Session[%d]: (%d) -> (%d)
[D :NR,%d] %%#EM SetImsSesId: (%d) -> (%d)
[D :NR,%d] %%#ST ImsCallingSesId: IMS Call is On-Going for SesId(%d)
[D :NR,%d] %%#EM SetImsCallStartSes: (%d) -> (%d)
[W :NR,%d] %%#EM ProcessingPendingQueueWithSes: CnCommonDb = nullptr
[W :NR,%d] %%#EM ProcessingPendingQueueWithSes: pNrSmSesCtrl = nullptr
[W :NR,%d] %%#EM ProcessingPendingQueueWithSes: No QmnrDb for SesId(%d)
[W :NR,%d] %%#DP [Check] ProcessingPendingQueueWithSes: No DRB even with QM_STATE_ACTIVE for SesId(%d), QFI(%d)
[N :NR,%d] %%#ST ProcessingPendingQueueWithSes: Start QFI_WDT_TIMER for Sid(%u)
[N :NR,%d] %%#ST ProcessingPendingQueueWithSes: Keep QFI_WDT_TIMER running for Sid(%u)
[W :NR,%d] %%#EM [Check] HandlePduReactResult: No Valid Session, return!
[D :NR,%d] %%#ST HandlePduReactResult: ReqSesId(%d): Cause(%d), RbState(%d), PendingDataSessionState[%s]
[D :NR,%d] %%#ST HandlePduReactResult: Triggered PDU Deact for SesId(%d)
[W :NR,%d] %%#ST HandlePduReactResult: RB Assigned Already for SesId(%d)
[W :NR,%d] %%#ST [Check] HandlePduReactResult: Not Requested but PDU React Error for SesId(%d), Cause(%d), RbState(%d), PendingDataSessionState[%s]
[D :NR,%d] %%#ST HandlePduReactResult: Stop BACKOFF_TIMER, and Start RETRY_TIMER
[D :NR,%d] %%#ST HandlePduReactResult: Success -> Stop RETRY_TIMER and ExtCheckPendingData
[D :NR,%d] %%#ST HandlePduReactResult: Stop RETRY_TIMER, and Start BACKOFF_TIMER
[W :NR,%d] %%#EM [Check] HandleEstRej: No Valid Session, return!
[W :NR,%d] %%#EM [Check] HandleEstRej: RETRY_TIMER or BACKOFF_TIMER Not Initialized
[D :NR,%d] %%#ST HandleEstRej: Change to QM_NO_UL_PENDED because Not Set UL Data Status for Sid(%u)
[D :NR,%d] %%#ST HandleEstRej: Stop BACKOFF_TIMER, and Start RETRY_TIMER
[D :NR,%d] %%#ST HandleEstRej: Just Start BACKOFF_TIMER because no QM_SR_TRIGGERED/QM_RESUME_TRIGGERED
[W :NR,%d] %%#EM [Check] HandleEstRej: Not Handle This RejCause
[W :NR,%d] %%#EM [Check] CheckIfActualPendingData: Sid(%d) Error! Return false
[W :NR,%d] %%#EM [Check] CheckIfActualPendingData: No DB for Sid(%d)
[D :NR,%d] %%#DP QM_SendDataToL2TX: Cid(%d), PduType[%s], SesId(%d), QFI(%d), EnqCount(P: %u, N: %u)
[W :NR,%d] %%#EM [Check] SetRemainedCntInNormalQ: Sid(%u) Range Error!
[W :NR,%d] %%#EM [Check] HandleSrErr: No QmnrDb for Sid(%d)
[D :NR,%d] %%#ST HandleSrErr: IMS Call is On-Going for Sid(%d) => Trigger PDU Rel, Not PDU Local Rel
[D :NR,%d] %%#ST HandleSrErr: Trigger PDU Local Release
[D :NR,%d] %%#ST HandleSrErr: IMS Call is On-Going for Sid(%d) => Not Trigger Local Release
[D :NR,%d] %%#ST HandleSrErr: IMS Call Started for Sid(%d) => Wait for IMS Action
[D :NR,%d] %%#ST HandleSrErr: Trigger Local Release to Trigger Re-Regi
[D :NR,%d] %%#ST HandleSrErr: Local Release Already Triggered for SesBitMap (0x%X)
[W :NR,%d] %%#EM [Check] HandlePduReactErr: No QmnrDb for Sid(%d)
[D :NR,%d] %%#ST HandlePduReactErr: Flush Queue and Reset PendingDataSession State for Sid(%d), RejectCause(%d)
[D :NR,%d] %%#ST HandlePduReactErr: TestSIM used => Do Nothing!
[D :NR,%d] %%#ST HandlePduReactErr: Error for IMS Sid(%d) => Trigger IRAT Change
[D :NR,%d] %%#ST HandlePduReactErr: Flush Queue and Trigger PDU Local Release for Sid(%d), RejectCause(%d)
[D :NR,%d] %%#ST HandlePduReactErr: Voice Call is On-Going for Sid(%d) => Trigger PDU Rel, Not PDU Local Rel
[W :NR,%d] %%#EM [Check] HandleQfiErr: No QmnrDb for Sid(%d)
[D :NR,%d] %%#EM [Check] HandleQfiErr: Trigger Flush for Sid(%u), Qfi(%u)
[W :NR,%d] %%#EM [Check] HandleRelCnfFail: No Valid Session, return!
[D :NR,%d] %%#ST HandleRelCnfFail: WdtRelTriggeredSesBitmap (0x%X)
[D :NR,%d] %%#ST HandleRelCnfFail: Allow SR Re-triggering for Sid(%u)
[D :NR,%d] %%#ST SetSimProvider: (%d) -> (%d) : TestSIM[%s]
[D :NR,%d] %%#ST SetStackInitialized: (%d) -> (%d)
[N :NR,%d] %%#ST UpdatePsCallOnGoingState: [0x%X] -> [0x%X]
[N :NR,%d] %%#ST ResetPsCallOnGoingState: [0x%X] -> [0x0000]
[W :NR,%d] %%#ST %s is nullptr, so return
[W :NR,%d] %%#ST %s is nullptr, so return
[D :NR,%d] %%#ST SetStallDetectorForDbMngr: pQmNrStallDetector (0x%X) -> (0x%X)
[W :NR,%d] %%#EM [Check] SetWdtRelTriggeredSesBitmap: Sid(%d) Range Error! -> (0x%X)
[D :NR,%d] %%#ST SetWdtRelTriggeredSesBitmap: Add Sid(%u) -> (0x%X)
[W :NR,%d] %%#EM [Check] ClearWdtRelTriggeredSesBitmap: Sid(%d) Range Error! -> (0x%X)
[D :NR,%d] %%#ST ClearWdtRelTriggeredSesBitmap: Reset BitmapWdtRelTriggeredSes (0x%X) -> (0x%X)
[D :NR,%d] %%#ST ClearWdtRelTriggeredSesBitmap: Clear Sid(%u) -> (0x%X)
[D :NR,%d] %%#ST GetPseudoBidirSes: HIT! m_BitmapInstantBidirSes(0x%X), m_BitmapPseudoBidirSes(0x%X)
[D :NR,%d] %%#ST SetPseudoBidirSes: m_BitmapInstantBidirSes(0x%X), m_BitmapPseudoBidirSes(0x%X)
[D :NR,%d] %%#ST UpdatePseudoBidirSesInfo: m_BitmapPseudoBidirSes(0x%X) -> (0x%X)
