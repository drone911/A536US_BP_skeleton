MacEhsInit Procedure
[Warning] MAC-ehs PDU Macehs disassembly is not ready, discard PDU cnt : %d
LmacDoneISR Missing : %d, numOfUmacMacEhsPdu: %d
Inside Disassembly, MAC-EHS PDU Count %d
T1 timer start Q[%d] T1TSN:%d
T1 timer stop Q[%d] T1TSN:%d
Running T1Timer Token although T1 stop
WARNING: QueueId is out of bounds
WARNING: T1 Timer Expiry when queue list is NULL
Inside T1TimerExpire, QueueId: %d
[Error] T1_TSN(%d) == NET(%d) !!!
WARNING: MacehsQueueList is NULL
[ECF] WARNING: QueueId %d is out of bound
[ECF] WARNING: TReset Expiry: QueueId %d, TresetTimerEnable = %d, pTresetTimerSetEhs = %x
Inside TresetStop, QueueId: %d
Warning: Running TresetTimer Token, although Treset stopped
(Umac_MacehsReassembly) More than %d SDU
WARNING: CombineIndex is out of bound
(Reassembly) SI:%d, SDU Cnt %d TSN %d
SI Field Invalid TSN %d
(Umac_MacehsReassembly) More than 400 SDU %d
(Umac_MacehsReassembly) too many handle passed: %d
(Umac_MacehsReassembly) SduCount %d is out of bound
(Umac_MacehsReassembly) Giving SDUs to Demux, SduCount: %d
MacehsTsnFieldExt(0:TSN6bit mode)
MacehsWindowMaxnum:%d, MacEhsParam_p->MacehsTsnModulo:%d, MacehsMaxReorderSduPerTTI:%d, RcvWindowUpperEdgeEhs:%d
MacehsTsnFieldExt(1:TSN14bit mode)
MacehsWindowMaxnum:%d, MacEhsParam_p->MacehsTsnModulo:%d, MacehsMaxReorderSduPerTTI:%d, RcvWindowUpperEdgeEhs:%d
Reset isCommonhrntipresent flag.
MacehsTsnFieldExt(0:TSN6bit mode), MacehsWindowMaxnum:%d (Configured:%d), MacEhsParam_p->MacehsTsnModulo:%d, MacehsMaxReorderSduPerTTI:%d
MacehsTsnFieldExt(1:TSN14bit mode), MacehsWindowMaxnum:%d (Configured:%d), MacehsTsnModulo[SIMInstance]:%d, MacehsMaxReorderSduPerTTI:%d
Initial configuration for HS-DSCH , isMacEhsReqForFach %d
Reconfiguration for HS-DSCH , isMacEhsReqForFach %d
After Add. Configured Mac-ehs QueueID:%d, WindowSize:%d
After delete. Configured Mac-ehs QueueID is zero
After delete. Configured Mac-ehs QueueID:%d
Reconfiguration(shorten) of Receive_Window_Size in Q[%d]
[HS-DPCCH ACK DSDS Opt] gT1Value2DSP = %d, Rcvd new T1 = %d
Reset or Release QueueId mapping to HSDSCH. MacehsResetInfo: %d, MacehsReleaseInfo: %d, MacehsPdu Rcvd: %d, Duplicated: %d, DuplicateRate: %d (x100)
Error: Queue ID:% is out of bound
[HS-DPCCH ACK DSDS Opt] Reset Shared T1 Value to DSP
UPHY not ready to process EHS data
MacehsPDU_num: %d, Reorder PDU Count is: %d, DataSize = %d
Error case MAX no of Reorder PDU can be 3. Currently received %d.
Duplicate detected
After disassembly: (%d,%d) bytes remaining
MacehsPdu Rcvd: %d, Duplicated: %d, DuplicateRate: %d (x100)
WARNING: QueueId is out of bound
WARNING: MacehsQueueInfo is NULL
Inside Umac_MacehsSetReorderingParams, Stopping Treset for QueueId: %d
New UpperEdge:%d
Starting Treset Timer for Queue Id: %d
Error case MAX no of SDU per reorderPDU can be %d. Currently recieved %d.
PDU disassembly (SDU count = %d)
**Critical Error**: Lch Not valid (LCHID = %d)
SDU disassembly (SDU length = %d)
Error: Data Recived for a LCH[%d] not configured
Inside Disassembly, Stored BCCH HRNTI is: [%d]
Error case: H-RNTI for BCCH is not present and Logical Channel Id equals to LCH_ID_ECFACH
Error case: QueueID out of bound: %d
Inside Disassembly, Handling DXCH or CCCH case, LCH Id: %d, Queue Id: %d
Error case: Logical Channel id is not mapped to DXCH or CCCH
[Error] DBGetHsdschInfo !!!
T1 timer expiry from SMC : Q[%d] NET:%d, UE:%d, T1TSN:%d
WARNING: MacehsQueueList is NULL
Inside TresetTimerExpire, QueueId: %d
Inside TresetTimerExpire, Queue Id: %d, NET: %d, isUtranCommercialPlmnId: %d, UE: %d
Inside TresetTimerExpire, Queue Id: %d, NET: %d, isUtranCommercialPlmnId: %d, UE: %d
T1 timer stop Q[%d] T1TSN:%d
Running T1Timer Token although T1 stop
Warning: Null pointer
Deleting Segments %d
Waring: issue in CombineSdu
SegmentCnt is too many: SduCount %d, TotalSduSize %Bytes, LmacModeCheck %x
Waring: issue in CombineSdu
Deleting Segments %d
Warning: Discarding
WARNING: QueueId is out of bound : %d, LCHID: %d
Inside Reassembly, Lch Id Not valid
Inside Reassembly, Deleted Mob (LCHid Not valid)
Inside Reassembly, UeId Value received from URRC: %d, UeId Value received from Header for SDU No: %d is: %d
Inside Reassembly, Error case: U-RNTI is invalid for SDU NO: %d
Inside Reassembly, Deleted Mob (Not our UeId)
Inside Reassembly, Mapped to CCCH
Inside Reassembly, Num of SDU's having same UeId as configured by URRC is: %d
(Umac_MacehsDemultiplexing) One reordering mapped more RB: queueID%d, PrevRbId %d, RbId %d
RbCount out of bound
queue ID or LchId is out of bound
WARNING: RbInfo[%d] is NULL
Rbid for BCCH: %d
Error Case: LchId equals to LCH_ID_ECFACH, but BCCH or PCCH hrnti is not present
queue ID or LchId is out of bound
WARNING: RbId[%d] is NULL
[HS-DPCCH ACK DSDS Opt] gT1Value2DSP = %d, Rcvd new T1 = %d
Error: Queue ID:%d is out of bound
NoAddOrReconfMacehsQueue %d
[HS-DPCCH ACK DSDS Opt] gT1Value2DSP = %d, Rcvd new T1 = %d
WARNING: Queue ID:% is out of bound
Override queue id[%d]
WARNING: AddCnt is out of bound
[HS-DPCCH ACK DSDS Opt] gT1Value2DSP = %d, Rcvd new T1 = %d
Error: Queue ID:% is out of bound
Invalid indx %d
Invalid queue id %d
Invalid indx %d
