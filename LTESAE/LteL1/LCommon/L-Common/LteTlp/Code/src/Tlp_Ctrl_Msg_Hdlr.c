Received length value in Mode A parameter is %d
Mode A is received: Number of BIts received is Out of Range by SS, ignoring DRB[%d] and Continuing with nxt DRB
Mode A is received: Number of BIts received is not multiple of 8 DRB ID %d received, Value: %d
Mode A is received: DRB ID %d received in LBSetup IE is not configured by SS, ignoring DRB and Continuing with nxt DRB
Mode A is received: Scaling configured for DRB ID %d,Scaled UL SDU size %d
Mode B received: T Delay timer value changed from %d -> %d
T Delay Timer stopped and re-started in state %d
TDelay Timer cannot be stopped in state %d
TDelay Timer stopped in state %d
TDelay Timer cannot be stopped in state %d
Cannot Delete the T Delay timer in state %d;
Mode B received: T Delay timer got configured with value %d;buffer the received data till timer expiry
Mode B received : T Delay Timer got created successfully
pal_TmCreateMsgTimer did not return PAL_SUCCESS while creating T Delay Timer
Mode B received :T Delay timer not configured; Timer value : 0;fwd the received data directly in UL
IsEpsPresentInRelBuff(LBID:%d)) == TRUE: RBID:%d, EPSbearedID:%d, TempEPSBearedID:%d
LBID:%d, RBID:%d, EPSbearerID:%d, DrbState of LB ModeB is set to be ENABLED in TLP_ACTIVE.
MAX DRB's are already configured in Test Loop Mode, ignore the msg
Ignore release DRB for NR DRB. u8LbIndex(%d)
LTE_EMM_LB_DATA_REQ malloc error
LTE_EMM_LB_DATA_REQ : MBMS_PACKET_COUNTER_RSP malloc error
Posting the PKT CNT to EMM as case %d
The Packet Counter which is send to EMM equals to %d
LTE_EMM_LB_DATA_REQ : ss_complete malloc error
LTE_EMM_LB_DATA_REQ : ss_complete malloc error
LTE_EMM_LB_DATA_REQ : ss_complete malloc error
Posting the message %d to DS_EMM
Posting the message %d to EMM
LTE_EMM_LB_DATA_REQ : Msg Sending error
Tlp_SendMessageToLBS Malloc error
Posting the message %d to LBS
Tlp_SendMessageToLBS : MsgSendTo Fail
Tlp_SendMessageToRRC Malloc error
Posting the message %d to RRC_DS
Posting the message %d to RRC
[ERROR] pal_Malloc Fail!
Send NRPDCP_LTETLP_CONFIG_SYNC_IND to NR L2
pal_MsgSendToNrL2 fail! rst(%d)
[ERROR] pal_Malloc Fail!
Send NRPDCP_LTETLP_CONFIG_MSG_IND to NR TMC. u32MsgType(%d) u8Data(%d)
pal_MsgSendToNrL2 fail! rst(%d)
Tlp_ProcActivateTestMode : Data is NULL
Received Invalid Mode Value %d in Activate Test Mode Message
Received valid Mode Value %d in Activate Test Mode Message
TLP Configured in Mode %d in Activate Test Mode Message
Posting the message LTE_TLP_ACTIVATE_TEST_MODE_COMPLETE to EMM
Received Invalid SI Value in Activate Test Mode Message
Tlp_ProcModeCPktCountReq : Data is NULL
TLP-MBSFN PCT - Processing MBSFN mode C packet counter request Message
[ERROR] MODE-C is not active
TLP-MBSFN PCT - Received Invalid SI Value in MBSFN mode C packet counter request Message
Tlp_ProcDeActivateTestMode : Data is NULL
Resetting the TLP Context struct: Tlp_ResetTlp() called from De-Activate Test Mode Message
Posting the message LTE_TLP_DEACTIVATE_TEST_MODE_COMPLETE to EMM
Received Invalid SI Value in De-Activate Test Mode Message
Tlp_ProcOpenUeTestLoop : Data is NULL
Resetting the TLP Context struct: Tlp_ResetTlp() called from Open UE Test Loop Message
Posting the message LTE_TLP_OPEN_UE_TEST_LOOP_COMPLETE to EMM
Received Invalid SI Value in Open UE Test Loop Message
Tlp_ProcOpenUeTestLoop : Data is NULL
Posting the message LTE_TLP_OPEN_UE_TEST_LOOP_COMPLETE to EMM
Received Invalid SI Value in Open UE Test Loop Message
Case UNIDIRECTIONAL: Reconfig of DRB ID %d; DRB has got reconfigured from Bi-Directional to UNI-Directional.
Case UNIDIRECTIONAL: Establishment of DRB ID %d;Ignore the Drb Id, going to process next DRb.
Case BIDIRECTIONAL: Establishment of DRB ID %d, EPS ID: %d;
Case BIDIRECTIONAL: Reconfig of DRB ID %d; No need to update, going to process next DRb.
Case BIDIRECTIONAL: DRB ID %d requested to release, Not found in LB array; Ignoring and going to process next DRB
Case BIDIRECTIONAL: DRB ID %d requested to release,found in LB array; Going to release the DRB
Invalid Case: Received Invalid ReconfigType Value in LTE_RRC_LB_DRB_IND Message
ALL DRB's in LB functional Mode got released
Resetting the TLP Context struct: Tlp_ResetTlp() called from RRC DRB IND Message
There exist EPS bearer in established state, So not resetting the Context Struct.
Total Num of DRB's configured: %d
Num DRB's in LB Mode: %d, Num DRB's Not in LB Mode %d
Loop Back Functon already Active, ignore the msg
This is an error condition; TLP should be in INIT state
Loop Back Functon already Active, ignore the msg
Loop Back Functon already Active, ignore the msg
Tlp_ProcCloseUeTestLoop : Data is NULL
Mode A is received: Bi-dir DRB est. going to configure Mode A params received
Mode A got configured: LB setup list IE is not included;i.e. No scaling configured
Mode A is received: LB setup list IE included
Posting the message LTE_TLP_CLOSE_UE_TEST_LOOP_COMPLETE to EMM
Mode A is received: Invalid total Msg Length; Length IE value %d
Mode A is received: No bi-dir DRB est. ignore the msg
Mode B is received: Going to Check whether atleast one EPS bearer is in established state or not
Mode B is received: Going to configure Mode B params received
Posting the message LTE_TLP_CLOSE_UE_TEST_LOOP_COMPLETE to EMM
Mode B is received: No bi-dir EPS Bearer est. ignore the msg
Received Mode value(%d) in Close Ue Test Loop != Mode value received in Activate Test Loop Message
Received Invalid SI Value in Close UE Test Loop Message
Tlp_ProcResetUePositioingStoredInfo : Data is NULL
Tlp_ProcResetUePositioingStoredInfo in state %d
PI_SI %x, PosTech %x
Received Invalid SI Value inReset UE Positioning Stored Information message
Tlp_ProcUpdateUeLocationInfo : Data is NULL
Tlp_ProcUpdateUeLocationInfo in state %d
Received Invalid SI Value inReset Tlp_ProcUpdateUeLocationInfo message
[ERROR] Tlp_ProcActivateBeamLock : Data is NULL
[ERROR] Received Invalid SI Value
[ERROR] UBF is already running!
[ERROR] not support FrType(%d)!
Posting the message LTE_TLP_ACTIVATE_BEAMLOCK_COMPLETE to EMM
[ERROR] Tlp_ProcDeActivateBeamLock : Data is NULL
[ERROR] Received Invalid SI Value
[ERROR] UBF is already off!
Posting the message LTE_TLP_DEACTIVATE_BEAMLOCK_COMPLETE to EMM
Posting the message LTE_TLP_DEACTIVATE_BEAMLOCK_COMPLETE to EMM
UBF is not running. Ignore LTE_EMM_UBF_FORCE_UNLOCK_IND.
