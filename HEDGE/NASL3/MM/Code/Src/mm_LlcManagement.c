ProtDisc: %d
LLGMM_TRIGGER_IND received in GMM_SUSPENDED state...
...processing according to pre-suspension state of %s
No specific actions on transmission of %s...
LLGMM_TRIGGER_IND containing unmatched PduId in GMM_DEREGISTERED
READY timer is deactivated and shall run without expiry
Network has forced MS to STANDBY state -> READY timer not started
PDP Context Status is %d %d
READY timer (re)started
No specific actions on transmission failure of %s...
LLGMM_STATUS_IND containing unmatched PduId in GMM_DEREGISTERED...
Resetting values in mm_GmmProcessLlGmmStatusIndMsgInRegInitState
LLGMM_STATUS_IND containing unmatched PduId, GPRS attach fail actions not performed...
Lower layer failure during GPRS detach procedure for IMSI only...
LLGMM_STATUS_IND indicating GMM PDU transmission failure before DETACH_REQUEST transmission attempt, no actions performed...
LLGMM_STATUS_IND containing unmatched PduId or corresponds to a non-GMM SAPI-1 PDU, no actions performed...
Resetting values in mm_GmmProcessLlGmmStatusIndMsgInRauInitState
Reject UE Pending Req because RAU Failed due to Lower Layer Failure.
LLGMM_STATUS_IND containing unmatched PduId, RAU fail actions not performed...
Lower layer failure during GPRS detach procedure...
LLGMM_STATUS_IND indicating GMM PDU transmission failure before DETACH_REQUEST transmission attempt, no actions performed...
LLGMM_STATUS_IND containing unmatched PduId, no actions performed...
Cause = %s
LLGMM_STATUS_IND received for authenticaiton or identity message, do not abort the complete procedure
LLGMM_STATUS_IND received in GMM_SUSPENDED state...
...processing according to pre-suspension state of %s
Perform TbfRelAction, MM_COORD_TBF_REL_ACTION
Perform TbfRelAction, MM_COORD_TBF_REL_ACTION
mm_PerformLlGmmGmmMsgTxActions in GMM_SUSPENDED state...
...processing according to pre-suspension state of %s
GPRS attach / RAU procedure completed, start DRX and resume LLC...
Received ACK For RAU/ATTACH COMPLETE So Stop Timer and Set the State
Performing actions following DETACH_REQUEST transmission (or failure)...
Indication of GPRS detach procedure completion delayed until reception of RLC_GMM_SAPI_ONE_TX_COMPLETE...
GMM_DETACH_TRY_TIMER not running on LLC indication of DETACH_REQUEST transmission, no actions performed...
Performing actions following DETACH_ACCEPT transmission (or failure)...
SAPI-1 Tx table entry %d has been reserved with PduId %04X...
...for transmission of %s message
...for transmission of a non-GMM message
ERROR: Table is already full...
PduId %04X confirmed as entry %d in SAPI-1 Tx table
ERROR: PduId %04X does NOT match appropriate table entry...
ERROR: PduId submitted for confirmation has the value NOT_SAPI1_PDU...
Checking SAPI-1 Tx table for PduId match...
PduId 0x%04X matched...
...corresponding to %s
...corresponding to a non-GMM SAPI-1 PDU
ERROR: PduId 0x%04X does not match that of first active entry...
PduId 0x%04X matched...
...corresponding to %s
...corresponding to a non-GMM SAPI-1 PDU
PduId -> NOT_SAPI1_PDU
First active entry removed from the SAPI-1 Tx table...
PduId %04X does not match first active entry in the SAPI-1 Tx table...
active entry matched in the SAPI-1 Tx table at %d
%s currently occupies position %d in the SAPI-1 Tx table...
Flushing the following %d active entries from the SAPI-1 submit table...
-------------
No active entries to flush from the SAPI-1 submit table...
Entry number %d corresponds to PduId = %04X
==> GMM PDU
==> %s
==> Non-GMM PDU
-------------
mm_AssignNewTlli:
mm_AssignNewAndOldTlli:
mm_OldTlliType = %s, mm_TlliOld = %02X %02X %02X %02X
mm_CurrentTlliType = %s, mm_Tlli = %02X %02X %02X %02X
mm_UnassignTlli:
ERROR: ReqdTlliType is not GMM_LOCAL_TLLI or GMM_FOREIGN_TLLI...
TLLI change reqd for RAU procedure as P-TMSI has changed since previous TLLI assignment to LLC...
TLLI assignment/change reqd for RAU procedure as TLLI assigned to LLC not of reqd type...
mm_DecodeLlGmmUnitDataIndMsg:

Invalid SMS Protocol Discriminator. No SMS Msg in GSM / GPRS to GMM !
Invalid ProtocolDisc (0x%x) in mm_DecodeLlGmmUnitDataIndMsg
No action required in this State in mm_DecodeLlGmmUnitDataIndMsg
Invalid mm_GmmState in mm_DecodeLlGmmUnitDataIndMsg
GS31(SM/SMS/SS): ucTransactionID = 0x%02X, ucProtocol =%s, ucSendSeqNum =0x%02X
GS31(SM/SMS/SS): ucMessageType =0x%02X, ucChannel =0x%02X
GS31(SM/SMS/SS): Raw data length =%d

Cipher = %s
PduId = 0x%04X

LLC requested to suspend....
LLC is already suspended....
LLC Resumption is avoided as current Operating mode is MM_MOBILE_CLASS_C_CS
LLC requested to resume....
Cant Resume LLC At this Time Ignored
LLC is not suspended....

ERROR: Invalid NewTlliType in mm_SetNewTlli....
mm_Tlli = %02X %02X %02X %02X
mm_TlliOld = %02X %02X %02X %02X
mm_CurrentTlliType = %s
mm_OldTlliType = %s
Cause -> %s
IsCrcFailure -> %d
