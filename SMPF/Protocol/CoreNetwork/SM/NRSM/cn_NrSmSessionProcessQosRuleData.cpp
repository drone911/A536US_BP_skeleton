[N :NR,%d] (fn) %s
[W :NR,%d] %%@EM return (void) %s = nullptr in %s
[D :NR,%d] QFI 0x%02X / QRP 0x%02X
[D :NR,%d] rule op is not AIR_QOS_RULE_OP_BIT_CREATE_QOS so that QFI 0x%02X / QRP 0x%02X
[D :NR,%d] Detect to semantic or syntactical error in CheckErrorInQosRule()
[D :NR,%d] [OPcode=0x%02X(%s)] QRI=%d IsDefaultQR=%d PFNum=%d
[D :NR,%d] [Qos Error handling - EST proc.] 6.4.1.3.a.2 there is no default QoS rule
[N :NR,%d] (fn) %s
[D :NR,%d] Find QFI=%d Duplicated=true
[W :NR,%d] %%@EM Error %s alloc failed in %s
[E :NR,%d] (_new_) %s=0x%X in %s
[D :NR,%d] >> RULE_OP_BIT_DELETE_EXIST_QOS
[D :NR,%d] QFI %d / NumOfQRs %d
[D :NR,%d] Can't find Qos Rule QRI(0x%x)
[D :NR,%d] >> RULE_OP_BIT_MODIFY_EXIST_QOS_ADD_FILTER
[W :NR,%d] %%@EM (pQosRule != nullptr) QFI = %d
[D :NR,%d] >> RULE_OP_BIT_MODIFY_EXIST_QOS_REPLACE_ALL_FILTER
[W :NR,%d] %%@EM (pQosRule == nullptr)
[D :NR,%d] >> RULE_OP_BIT_MODIFY_EXIST_QOS_DELETE_FILTER
[W :NR,%d] %%@EM (pQosRule == nullptr)
[W :NR,%d] %%@EM >> %s (0x%02X), Not implementation
[W :NR,%d] %%@EM >> %s (0x%02X), Not implementation
[W :NR,%d] %%@EM >> %s (0x%02X), Not implementation
[W :NR,%d] %%@EM >> %s (0x%02X), Not implementation
[A :NR,%d] %%@EM Unknown OPcode[0x%02X]
[SM|%d,CP] Unknown OPcode[0x%02X]
[N :NR,%d] (fn) ProcessRQosRule Op(%d) RQFI(%d) bExistPf(%d) TimerInx(%d)
[W :NR,%d] %%@EM - Qos Iter Null ptr
[D :NR,%d] Create RQoS Can't find PacketFilter then need to add RQos rule and PacketFilter from SDAP
[D :NR,%d] Delete RQoS
[D :NR,%d] Unknown OPcode
[W :NR,%d] %%@EM return (void) %s = nullptr in %s
[D :NR,%d]
[N :NR,%d] (( DumpQosRules ))
[D :NR,%d] m_QFIList.empty()
[D :NR,%d] - QFI Iter Null ptr
[D :NR,%d] > QFI[%d] ,isDefault(%d), EBID(%d), EPSParamFlag(0x%x) RBId(%d)
[D :NR,%d] -----------------------------------
[D :NR,%d] QRI | #of PF | QRP
[D :NR,%d] %d(0x%02X) %d %d(0x%02X)
[D :NR,%d] ----------------------------------------------------------
[D :NR,%d] SQR | #of PF | QRP | QFI
[W :NR,%d] %%@EM - SQos Iter Null ptr
[D :NR,%d] %d(0x%02X) %d %d(0x%02X) %d
[D :NR,%d] RefQRI | #of PF | QRP | QFI
[W :NR,%d] %%@EM - RQos Iter Null ptr
[D :NR,%d] %d(0x%02X) %d %d(0x%02X) %d
[D :NR,%d] ----------------------------------------------------------
[D :NR,%d]
[N :NR,%d] (( DumpQosCALRules ))
[D :NR,%d] m_QFIforDecideNotify.empty()
[D :NR,%d] ----------------------------------------------------------
[D :NR,%d] ----------------------------------------------------------
[D :NR,%d]
[N :NR,%d] (( DumpQfiOnQosRules ))
[D :NR,%d] m_QFIList.empty()
[D :NR,%d] ----------------------------------------------------------
[D :NR,%d] ----------------------------------------------------------
[D :NR,%d] - QFI Iter Null ptr
[D :NR,%d] > QFI[%d] isDefault(%d) isModified(%d) QosFlowOp=0x%X CreatedBy(%s)
[D :NR,%d] -----------------------------------
[D :NR,%d] QRI | #ofPF | QRP
[D :NR,%d] %d %d %d(0x%02X)
[D :NR,%d] -----------------------------------
[D :NR,%d] QRI | #ofPF | QRP
[D :NR,%d] %d(0x%02X) %d %d(0x%02X)
[D :NR,%d]
[N :NR,%d] (( DumpOrderedQR ))
[D :NR,%d] m_OrderedQrList.empty()
[D :NR,%d] -----------------------------------
[D :NR,%d] QRP | QRI | QFI | Type
[D :NR,%d] - OrderedQR Iter Null ptr
[D :NR,%d] 0x%x 0x%x 0x%x %d
[D :NR,%d] -----------------------------------
[N :NR,%d] (fn) %s
[D :NR,%d] SQRI [0x%x]
[D :NR,%d] RQRI [0x%x]
[N :NR,%d] (fn) DeleteQosRuleWithQFI (%d) Size (%d)
[N :NR,%d] (fn) %s
[E :NR,%d] (_delete_) %s=0x%X in %s
[N :NR,%d] (fn) DeletePacketFiltersFromQos : QRI=%d NumOfPF=%d
[W :NR,%d] %%@EM return %s = nullptr in %s
[W :NR,%d] %%@EM return %s = nullptr in %s
[N :NR,%d] (fn) %s
[W :NR,%d] %%@EM return (void) %s = nullptr in %s
[E :NR,%d] %s is already nullptr. So can't _DELETE_ in %s
[E :NR,%d] (_delete_) %s=0x%X in %s
[W :NR,%d] %%@EM return (void) %s = nullptr in %s
[N :NR,%d] (fn) RQosOnDeleteQosRule : pQoSRule[%d] = 0x%X TimerInx=%d bRqos=%d
[E :NR,%d] %s is already nullptr. So can't _DELETE_ in %s
[E :NR,%d] (_delete_) %s=0x%X in %s
[N :NR,%d] (fn) %s
[D :NR,%d] %s = %d(0x%X) in %s
[W :NR,%d] %%@EM Can't found QRI at current session
[D :NR,%d] QRI [0x%x]
[D :NR,%d] pQoSRule[%d] = 0x%x
[E :NR,%d] (_delete_) %s=0x%X in %s
[N :NR,%d] (fn) %s
[D :NR,%d] %s = %d(0x%X) in %s
[D :NR,%d] QRI[%d]=0x%X bRQos=%d
[E :NR,%d] (_delete_) %s=0x%X in %s
[W :NR,%d] %%@EM (pQosRule == nullptr)
[N :NR,%d] (fn) %s
[W :NR,%d] %%@EM - Qos Iter Null ptr
[E :NR,%d] (_delete_) %s=0x%X in %s
[W :NR,%d] %%@EM SignallingQoS pQfi(%d) %d exist
[W :NR,%d] %%@EM SignallingQoS pQfi(%d) is null
[N :NR,%d] (fn) RemoveOrderedQR QFI(%d) QRI(0x%x) QRP(0x%x)
[D :NR,%d] qosType = %d (%s) in %s
[E :NR,%d] (_delete_) %s=0x%X in %s
[W :NR,%d] %%@EM RemoveOrderedQR Not find!!
[N :NR,%d] (fn) MarkForDeleteQosRule : QRI = %d qosType = %d (%s) in %s
[N :NR,%d] Total number of QRIs in this session = %d
[W :NR,%d] %%@EM Can't found QRI[0x%x] at current session
[N :NR,%d] (fn) AddQosRule : QFI=%d, QRI=%d QRP=%d IsDefault(%d)
[W :NR,%d] %%@EM return %s = nullptr in %s
[W :NR,%d] %%@EM return %s = nullptr in %s
[W :NR,%d] %%@EM Error %s alloc failed in %s
[E :NR,%d] (_new_) %s=0x%X in %s
[W :NR,%d] %%@EM QRI[0x%x] already exist
[E :NR,%d] %s is already nullptr. So can't _DELETE_ in %s
[E :NR,%d] (_delete_) %s=0x%X in %s
[W :NR,%d] %%@EM Error %s alloc failed in %s
[E :NR,%d] (_new_) %s=0x%X in %s
[W :NR,%d] %%@EM return %s = nullptr in %s
[A :NR,%d] %%@EM AddPacketFilter() fail...
[SM|%d,CP] AddPacketFilter() fail...
[E :NR,%d] (_delete_) %s=0x%X in %s
[E :NR,%d] (_delete_) %s=0x%X in %s
[D :NR,%d] m_bSegregation(%d)
[E :NR,%d] %s is already nullptr. So can't _DELETE_ in %s
[E :NR,%d] (_delete_) %s=0x%X in %s
[E :NR,%d] (_delete_) %s=0x%X in %s
[N :NR,%d] (fn) AddReflectiveQos TimerInx=%d IsDefault(%d)
[D :NR,%d] QFI=%d, QRI=%d QRP=%d IsDefault(%d)
[W :NR,%d] %%@EM QRI[0x%x] already exist
[W :NR,%d] %%@EM Error %s alloc failed in %s
[E :NR,%d] (_new_) %s=0x%X in %s
[W :NR,%d] %%@EM return %s = nullptr in %s
[N :NR,%d] (set) %s = %d(0x%X)->%d(0x%X) (Changed) in %s
[N :NR,%d] (set) %s = %d(0x%X) (Already) in %s
[N :NR,%d] (set) %s = %d(0x%X)->%d(0x%X) (Changed) in %s
[N :NR,%d] (set) %s = %d(0x%X) (Already) in %s
[N :NR,%d] (set) %s = %d(0x%X)->%d(0x%X) (Changed) in %s
[N :NR,%d] (set) %s = %d(0x%X) (Already) in %s
[N :NR,%d] (set) %s = %d(0x%X)->%d(0x%X) (Changed) in %s
[N :NR,%d] (set) %s = %d(0x%X) (Already) in %s
[D :NR,%d] (fn) AddPacketFiltersToQos: QRI=%d IsDelAllPF=%d QosRuleLen=%d NumOfPF=%d
[W :NR,%d] %%@EM return %s = nullptr in %s
[W :NR,%d] %%@EM return %s = nullptr in %s
[N :NR,%d] (fn) %s
[W :NR,%d] %%@EM Error pQosRule=0x%X due to invalid QosType=%d(%s)
[D :NR,%d] (find) pRQosRule=0x%X by QRI=%d in %s
[D :NR,%d] (find) pSQosRule=0x%X by QRI=%d in %s
[D :NR,%d] (find) pSQosRule=0x%X by QFI=%d in %s
[D :NR,%d] (find) QRI=%d by m_NeedToRemoveAndReport=%d in %s
[N :NR,%d] (set) %s = %d(0x%X)->%d(0x%X) (Changed) in %s
[N :NR,%d] (set) %s = %d(0x%X) (Already) in %s
[W :NR,%d] %%@EM (pQosRule == nullptr)
[N :NR,%d] (fn) %s
[N :NR,%d] (fn) %s
[D :NR,%d] pQosFlow is null and QCI is 0xFF)
[W :NR,%d] %%@EM [Qos Error handling - EST proc.] 6.4.1.3.a.1 there is already a default QoS rule
[W :NR,%d] %%@EM [Qos Error handling - EST proc.] 6.4.1.3.a.5 duplicated QRI
[W :NR,%d] %%@EM [Qos Error handling - EST proc.] 6.4.1.3.a.3 duplicated QRP
[W :NR,%d] %%@EM [Qos Error handling - EST proc.] 6.4.1.3.b.1 packet filter list is empty
[W :NR,%d] %%@EM default QoS rule
[W :NR,%d] %%@EM no default QoS rule
[D :NR,%d] GBR QoS flow
[W :NR,%d] %%@EM [Qos Error handling - EST proc.] 6.4.1.3.a.4 RuleOpCode is not AIR_QOS_RULE_OP_BIT_CREATE_QOS
[W :NR,%d] %%@EM it's default QoS rule
[W :NR,%d] %%@EM it's not default QoS rule
[N :NR,%d] (fn) %s
[D :NR,%d] pQosFlow is null and QCI is 0xFF)
[W :NR,%d] %%@EM [Qos Error handling - MOD proc.] 6.3.2.4.b.5 QoS rule identifier does not exist
[W :NR,%d] %%@EM [Qos Error handling - MOD proc.] 6.3.2.4.a.1~2 default QoS rule mismatch
[W :NR,%d] %%@EM [Qos Error handling - MOD proc.] 6.3.2.4.a.3 default QoS rule mismatch
[W :NR,%d] %%@EM [Qos Error handling - MOD proc.] 6.3.2.4.a.7 Identical QoS rule identifier values
[W :NR,%d] %%@EM Existing QoS rule and new QoS are no default QoS rule
[W :NR,%d] %%@EM Existing QoS rule or new QoS are default QoS rule
[W :NR,%d] %%@EM [Qos Error handling - MOD proc.] 6.3.2.4.a.4 delete default QoS rule
[W :NR,%d] %%@EM [Qos Error handling - MOD proc.] 6.3.2.4.a.6 packet filter list is empty
[W :NR,%d] %%@EM packet filter list is empty and default QoS rule
[W :NR,%d] %%@EM packet filter list is empty and no default QoS rule
[W :NR,%d] %%@EM [Qos Error handling - MOD proc.] 6.3.2.4.a.5 duplicated QRP
[W :NR,%d] %%@EM duplicated QRP and default QoS rule
[W :NR,%d] %%@EM duplicated QRP and no default QoS rule
[D :NR,%d] recieving QosRule with duplicated QRP from LTE side, add new QosRule and delete old QosRule
[D :NR,%d] Total QoS Rule Count %d /QFI %d / NumOfQRs %d
[D :NR,%d] GBR QoS flow
[W :NR,%d] %%@EM [Qos Error handling - MOD proc.] 6.3.2.4.b.1 packet filter list is empty
[W :NR,%d] %%@EM [Qos Error handling - MOD proc.] 6.3.2.4.b.2 packet filter list is non-empty
[N :NR,%d] (fn) %s
[N :NR,%d] (fn) CheckErrorInPacketFilters QRI = %d | isDefault? (%d)
[W :NR,%d] %%@EM it's default QoS rule
[W :NR,%d] %%@EM it's not default QoS rule
[N :NR,%d] (fn) %s
[W :NR,%d] %%@EM In HandleNewQosRuleErrors: PktComMask = %d PktComIpMask = %d
[W :NR,%d] %%@EM Error in Default QOS Rule | QRI = %d
[W :NR,%d] %%@EM No Error in Default QOS Rule | QRI = %d
[W :NR,%d] %%@EM Error in Non-Default QOS Rule | QRI = %d
[W :NR,%d] %%@EM No Error in Non-Default QOS Rule | QRI = %d
[W :NR,%d] %%@EM PDU Session Release Needed ? %d
[N :NR,%d] (fn) %s
[W :NR,%d] %%@EM reached the maximum Qos rule or packet filter number
[D :NR,%d] qosType = %d (%s) in %s
[D :NR,%d] QFI=%d QRI=%d NumOfPF=%d QRP=%d isDefault=%d
[W :NR,%d] %%@EM Error %s alloc failed in %s
[E :NR,%d] (_new_) %s=0x%X in %s
[N :NR,%d] Already exist! QRI=%d QRP=%d NumOfPF=%d
[E :NR,%d] %s is already nullptr. So can't _DELETE_ in %s
[E :NR,%d] (_delete_) %s=0x%X in %s
[W :NR,%d] %%@EM Error %s alloc failed in %s
[E :NR,%d] (_new_) %s=0x%X in %s
[N :NR,%d] Already exist! QRI=%d QRP=%d NumOfPF=%d
[E :NR,%d] %s is already nullptr. So can't _DELETE_ in %s
[E :NR,%d] (_delete_) %s=0x%X in %s
[D :NR,%d] (get) %s = %d(0x%X) in %s
[N :NR,%d] (fn) UpdateQRIsOnQFIFlow eQosType %s
[D :NR,%d] UpdateQRIsOnQFIFlow QFI [%d]
[D :NR,%d] QFI(%d) QRI(0x%x) QRP (%d)
[W :NR,%d] %%@EM Error %s alloc failed in %s
[E :NR,%d] (_new_) %s=0x%X in %s
[W :NR,%d] %%@EM return (void) %s = nullptr in %s
[D :NR,%d] pOrderedQR->QRI=(%d) QRI=(%d) pOrderedQR->Type=(%d) Type=(%s)
[E :NR,%d] (_delete_) %s=0x%X in %s
[D :NR,%d] Precedence(0x%X) S(0x%X) E(0x%X) C(0x%X) in %s
[D :NR,%d] QrSize=%d
[E :NR,%d] (_delete_) %s=0x%X in %s
[D :NR,%d] (find) bExistRQosRule=%d on QRI=%d by RQoSTimerId=%d in %s
