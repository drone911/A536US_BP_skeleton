cc_ProcessSyncIndInRatChangeOngoingState
VCG Already Informed (VCG EST REQ Sent)
VCG Not Informed Yet (VCG EST REQ Not Sent)...
MM Sync IND will be saved and processed after CONN ACK
Accept Sync Ind, Inform VCG
Data Call, Do not inform VCG
VCG Already Informed (VCG EST REQ Sent)
Traffic channel assigned..Nothing needs to be done here
Only Signalling channel assigned, Wait for traffic channel to Arrive
VCG Not Informed Yet (VCG EST REQ Not Sent)...Saving the Message For later
MM Sync IND will be saved and processed after CONN ACK
Traffic channel assigned..Saving the Message For later
CC_SYNC_IND_RESOURCE_MODIFIED is ingored in CC_VCG_CALL_IDLE state
Only Signalling channel assigned, Wait for traffic channel to Arrive
CallType1 -> 0x%02X
MM Sync IND will be saved and processed after CONN ACK
MM Sync IND will be saved and processed after CONN ACK
VCG Action Needed But CC State is Incorrect in cc_DecodeMmSyncIndMsg...
CallType1 -> 0x%02X
No Need to Inform VCG
Entering cc_DecodeMmSyncIndMsg....
MM Sync IND saved as CC state is CC_CALL_WAIT_MM_SRVCC_CNF or IMSCC_VCE_STOP_IND is not received
MM Sync IND saved for MO call due to Ultra-Flash CSFB
Current Rat Mode taken to be -> UMTS in cc_DecodeMmSyncIndMsg...
Current Rat Mode taken to be -> GSM in cc_DecodeMmSyncIndMsg...
Traffic Channel Assigned in cc_DecodeMmSyncIndMsg...
Signalling Channel Assigned in cc_DecodeMmSyncIndMsg...
Invalid RAT mode received. So MM_SYNC_IND is not processed
RAT Mode is %d
CodecInfoPresent -> %s (Meaningless in GSM)
NasSyncInd -> 0x%02X
RabId -> 0x%02X
Old NasSyncInd -> 0x%02X
New NasSyncInd -> 0x%02X
SyncInd arrived when No Sessions Active Saving message in cc_DecodeMmSyncIndMsg...
SyncInd arrived when No Sessions Active Saving message in cc_DecodeMmSyncIndMsg...
Entering cc_ProcessCiqCauseIe
Memory Allocation Failed
Entering cc_DecodeMmEstErrMsg
TransactionId -> %d
Save CallDrop: Type=%d, Cause=%d
New Redial Code logic implementation
Redialing in MMCC_EST_ERR
One Active call present, Auto redial will not be done
Redialing in MMCC_EST_ERR for CSVT
over-writting Network cause on MM cause
State Error in cc_DecodeMmEstErrMsg
CallSession %d is NOT Active, in cc_DecodeMmEstErrMsg
In cc_DecodeMmEstErrMsg - cc_DecodeMmEstErrMsg been set
No Session Found to contain the given TI in cc_DecodeMmEstErrMsg, Message Ignored.
Entering cc_DecodeMmErrIndMsg....
TransactionId -> %d
Save CallDrop: Type=%d, Cause=%d
Discarding Saved MmSyncIndMsg
[OSS]: MPTY active in cc_DecodeMmErrIndMsg
CC_RELEASE_REQUESTED : over-writting Network cause on MM cause
MM cause (%d), Saved NetworkCause (%d)
CC_RELEASE_REQUESTED (EMR call) : CC_REL_IND is sent instead of CC_REJ_IND
CallSession %d is NOT Active, in cc_DecodeMmErrIndMsg
Requesting MM to Re-Establish the MM Connection in cc_DecodeMmErrIndMsg
Requesting MM Not to Re-Establish the MM Connection in cc_DecodeMmErrIndMsg
Neither Active Nor Establishing Calls are found in cc_DecodeMmErrIndMsg
Save CallDrop: Type=%d, Cause=%d
Displaying Message Contents: %s
CallType -> %d
Priority -> %d
Unable to Allocate Memory to Send %s Message in cc_SendMmEstReqMsg
Displaying Message Contents: %s
Unable to Allocate Memory to Send %s Message in cc_SendMmPromptCnfMsg
Displaying Message Contents: %s
Unable to Allocate Memory to Send %s Message in cc_SendMmPromptRejMsg
Displaying Message Contents: %s
Unable to Allocate Memory to Send %s Message in cc_SendCcEstIndMsg
Displaying Message Contents: %s
Unable to Allocate Memory to Send %s Message in cc_SendCcErrIndMsg
Displaying Message Contents: %s
CallTyp -> %d
Unable to Allocate Memory to Send %s Message in cc_SendMmEstOutReqMsg
Displaying Message Contents: %s
RabId -> 0x%02X
CodecInfoPresent -> %s
NasSyncInd -> 0x%02X
Unable to Allocate Memory to Send %s Message in cc_SendCcSyncIndMsg
Displaying Message Contents: %s
Silent CC redial Flag -> 0x%02X
Unable to Allocate Memory to Send %s Message in cc_SendMmNoRestReqMsg
Displaying Message Contents: %s
NumOfConnectionsToReestablish -> 0x%02X
Unable to Allocate Memory to Send %s Message in cc_SendMmRestReqMsg
Enteirng cc_DecodeMmRestCnfMsg...
Msg ignored in cc_DecodeMmRestCnfMsg
CallSession %d is NOT Active, in cc_DecodeMmRestCnfMsg
Entering cc_DecodeMmRestErrMsg..
Msg ignored in cc_DecodeMmRestErrMsg
CallSession %d is NOT Active, in cc_DecodeMmRestErrMsg
Entering cc_DecodeMmRelIndMsg...
Save CallDrop: Type=%d, Cause=%d
Discarding Saved MmSyncIndMsg
[OSS]: MPTY active in cc_DecodeMmRelIndMsg
Redialing in MMCC_REL_IND
No Actions Taken, CC State is CC NULL, Call Session Number %d
No need to send CC_REJECT_IND(Above layers doesn't have MT call ctxt)
over-writting Network cause on MM cause
No need to send CC_RELEASE_IND(Above layers doesn't have MT call ctxt)
CallSession %d is NOT Active, in cc_DecodeMmRelIndMsg
Displaying Message Contents: %s
CallTyp -> 0x%02X
Unable to Allocate Memory to Send %s Message in cc_SendMmEstInReqMsg
Displaying Message Contents: %s
CallTyp -> 0x%02X
Unable to Allocate Memory to Send %s Message in cc_SendMmReleaseReqMsg
Entering cc_DecodeMmPromptIndMsg...
Entering cc_DecodeMmRatHandoverIndMsg.....
All Sessions with RabId (0x%02X) To be Retained
Removing Session(%d) as its RabId (0x%02X) does not Match Requested RabId (0x%02X) to Retain
No need to send CC_RELEASE_IND(Above layers doesn't have MT call ctxt)
Maintain Session(%d) as its RabId (0x%02X) match Requested RabId (0x%02X) to Retain
CallSession(%d) maybe invalid OR This CallSession should not be removed in cc_DecodeMmRatHandoverIndMsg
Setting the RabId of All Voice Call Sessions to 1 in GSM
Informing VCG of the New RAT & RabId
VCG Not Informed Yet (VCG EST REQ Not Sent)... Skip
Setting the RabId of All Data Call Sessions to 1 in GSM
No Need to send Alter Codec since VCG has not been informed yet...
No Session Found with the given Seram Id in cc_DecodeMmRatHandoverIndMsg
Rat Mode change Request not successfull in cc_DecodeMmRatHandoverIndMsg
<<<< ALERTING >>>>
<<<< SETUP >>>>
<<<< CC_EST_CONFIRMED >>>>
<<<< CONNECT >>>>
<<<< CALL_CONFIRMED >>>>
<<<< START_CC >>>>
<<<< CONNECT_ACKNOWLEDGE >>>>
<<<< MODIFY_REJECT >>>>
Invalid MsgType (0x%02X) in cc_DecodeMmRetransmitIndMsg
<<<< MODIFY >>>>
<<<< HOLD >>>>
<<<< RETRIEVE >>>>
<<<< MODIFY_COMPLETE >>>>
Invalid MsgType (0x%02X) in cc_DecodeMmRetransmitIndMsg
<<<< DISCONNECT >>>>
<<<< RELEASE_COMPLETE >>>>
<<<< RELEASE >>>>
Invalid MsgType (0x%02X) in cc_DecodeMmRetransmitIndMsg
<<<< STOP_DTMF >>>>
<<<< START_DTMF >>>>
<<<< FACILITY >>>>
<<<< STATUS >>>>
<<<< NOTIFY >>>>
Invalid MsgType (0x%02X) in cc_DecodeMmRetransmitIndMsg
MM Requesting CC to re-transmit the given messages in cc_DecodeMmRetransmitIndMsg
%d Messages to be Re-transmitted by CC
Message (%d) --> %d bytes
No Session Found to contain the given TI in cc_DecodeMmRetransmitIndMsg, Message Ignored.
Entering cc_DecodeFacilityIndMsg.....
TransactionId -> %d
Saving Facility Ind message ...!!!!
[OSS]: MPTY active in cc_DecodeFacilityIndMsg
[OSS]: Invalid SS TAG, in cc_DecodeFacilityIndMsg
[OSS]: ECT were active in cc_DecodeFacilityIndMsg
[OSS]: Invalid SS TAG, in cc_DecodeFacilityIndMsg
[OSS]: MultiParty &ECT were not active in cc_DecodeFacilityIndMsg
FacilityIe Missing in cc_DecodeFacilityIndMsg
CallSession %d is NOT Active, in cc_DecodeFacilityIndMsg
No Session Found to contain the given TI in cc_DecodeFacilityIndMsg, Message Ignored.
[OSS]: Entering cc_SendCcNotifySsIndMsg...
SsCode = %d
SsNotification = %d
Unable to Allocate Memory to Send %s Message in cc_SendCcNotifySsIndMsg
Entering cc_DecodeNotifyIndMsg.....
TransactionId -> %d
Message ignored in cc_DecodeNotifyIndMsg
CallSession %d is NOT Active, in cc_DecodeNotifyIndMsg
Mandatory Element Missing in cc_DecodeNotifyIndMsg
No Session Found to contain the given TI in cc_DecodeNotifyIndMsg, Message Ignored.
Displaying Message Contents: %s
NotificationIndicator -> 0x%02X
Unable to Allocate Memory to Send %s Message in cc_SendCcNotifyIndMsg
[OSS]: cc_SendFacilityReqMsg: OSS encoded Success
[OSS]: Oss Encoded Msg Dump ->
Unable to Allocate Memory for FacilityEctReqPtr in cc_SendEctFacilityReqMsg
Unable to Allocate Memory for FacilityEctReqPtr in cc_SendEctFacilityReqMsg
[OSS]: cc_SendFacilityReqMsg: OSS encoded Failed
[OSS]: cc_SendFacilityReqMsg: OSS encoded Failed
Entering cc_DecodeUserInformationIndMsg...
<cc_redial> CSFB state = %d
<cc_redial> CC get the LTE RAT_MODE_CHANGE during CSFB!!, ignored..
Moved from HEDGE to LTE..status(%d)
No need to send CC_REJECT_IND(Above layers doesn't have MT call ctxt)
LTE / RAT Change Ended
Clearing any saved SRVCC Call Context.
Discarding Saved MmSyncIndMsg
CallType1 -> 0x%02X
RAT Change Failed, Back in UMTS...
Setting the RabId of All Voice Call Sessions to RabId(%d) in UMTS
Handover Failed and resumed back to 3G, Old Nas SyncInd = %d, New Sync Ind = %d
VCG Not Informed Yet (VCG EST REQ Not Sent)... Skip
Setting the RabId of All Data Call Sessions to RabId(%d) & StreamId (%d) in UMTS
No Voice calls OR Data Calls Active...
RAT Change Failed, Back in GSM...
No need to restore VCG since VCG data was not altered...
RAT Mode -> CC_UMTS_RAT_MODE
RAT Mode -> CC_GSM_RAT_MODE
Entering cc_DecodeMmRatModeChangeIndMsg...
RAT Change in Progress
Mis-match between states !!!!
RAT Change Ended
Mis-match between states !!!!
Invalid Status in cc_DecodeMmRatModeChangeIndMsg!!!!
MMCC_SRVCC_HO_CC_INFO is sent for MO call due to Ultra-Flash CSFB
MMCC_SRVCC_HO_CNF is received in wrong state for MO call due to Ultra-Flash CSFB
MMCC_SRVCC_HO_CC_INFO is sent for MT call due to Ultra-Flash CSFB
MMCC_SRVCC_HO_CNF is received without MM_SYNC_IND
Releasing All the calls...!!!
NumberOfVoiceCalls = > %d
R-SRVCC HO Failed Activate the VCG again...!!!
Vcg Data ......
Rat Mode =%d
VcgRefNumber = %d
RabId = %d
Skip VCG action for MT call
Entering cc_SendMmSrvccHoCallInfoMsg..
CallSessionNumber : %d
Displaying Message Contents: %s
CallTyp -> %d
Unable to Allocate Memory to Send %s Message in cc_SendMmSrvccHoCallInfoMsg
Displaying Message Contents: %s
Srvcc_Ho_Status -> %d
Unable to Allocate Memory to Send %s Message in cc_DecodeMmSrvccHoCnfMsg
Entering cc_DecodeMmSrvccHoCnfMsg cc_SrvccCallCntxtSetupFinished = %d,Srvcc_Ho_Status = %d
Displaying Message Contents: %s
Unable to Allocate Memory to Send %s Message in cc_SendCcImsInfoIndMsg
Entering cc_DecodeMmSrvccHoIndMsg : HandOverType : %d
Releasing VCG for Default Session
Wrong HO Type..!!!
Current RabId -> %d
NORMAL Initialisation <MM Management>
GSM to UMTS Initialisation of <MM Management>
UMTS to GSM Initialisation of <MM Management>
Unknown Initialisation Type (%d) in cc_InitialiseMmConManagement
RAT Mode is %s
Sync Status -> %s
cc_SendConfigurateIratToLteReq
Displaying Message Contents: %s
Unable to Allocate Memory to Send %s Message in cc_SendConfigurateIratToLteReq
Entering cc_SendMmSrvccHoCallInfoMsgforDummy..
Displaying Message Contents: %s
CallTyp -> %d
Unable to Allocate Memory to Send %s Message in cc_SendMmSrvccHoCallInfoMsgforDummy
Redialing in MMCC_ERR_IND
No need to send CC_REJECT_IND(Above layers doesn't have MT call ctxt)
over-writting Network cause on MM cause
