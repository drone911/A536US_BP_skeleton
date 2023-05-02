%s in cc_DecodeVcgCallEstablishCnfMsg
CallSessionNumber = %d in cc_DecodeVcgCallEstablishCnfMsg
TransactionId -> %d
No need to send CC_RELEASE_IND(Above layers doesn't have MT call ctxt)
Status : VCG_CALL_REQ_INVALID - cc_DecodeVcgCallEstablishCnfMsg...
Releasing VCG - cc_DecodeVcgCallEstablishCnfMsg...
VCG_CALLESTABLISH_REQ not sent - cc_DecodeVcgCallEstablishCnfMsg...
Releasing VCG - cc_DecodeVcgCallEstablishCnfMsg...
Duplicated VCG_CALLESTABLISH_CNF is ignored - cc_DecodeVcgCallEstablishCnfMsg...
Entering cc_DecodeVcgAlterCodecCnfMsg
VcgRefNumber = %d in cc_DecodeVcgAlterCodecCnfMsg
No need to send CC_RELEASE_IND(Above layers doesn't have MT call ctxt)
VCG_ALTERCODEC_REQ not Send - cc_DecodeVcgAlterCodecCnfMsg...
Entering cc_SendVcgCallEstablishReqMsg
Displaying Vcg Call Estb Req Message Contents: %s
VcgRefNumber -> %d
NasSyncInd -> 0x%02X
RabId -> 0x%02X
VcgRatMode -> 0x%02X
CC_Stack No -> 0x%02X
Unable to Allocate Memory to Send %s Message in cc_SendVcgCallEstablishReqMsg
Entering cc_SendVcgCallActivateIndMsg
Displaying VCG Call Activate Ind Message Contents: %s
VcgRefNumber -> %d
CC Stack No. -> %d
Entering cc_SendVcgCallReleaseReqMsg - Releasing VCG
Clearing All Global VCG Data
CC Stack No. %d
Entering cc_SendVcgAlterCodecReqMsg
Displaying VCG Alter Codec Req Message Contents: %s
VcgRefNumber -> %d
NasSyncInd -> 0x%02X
RabId -> 0x%02X
VcgRatMode -> 0x%02X
CC Stack No -> 0x%02X
Unable to Allocate Memory to Send %s Message in cc_SendVcgAlterCodecReqMsg
Entering cc_DecodeVcgCallReleaseIndMsg
There is no VCG context. No Action
Entering cc_DetermineVcgAction
VcgRefNumber -> %d
RabId -> %d
RatMode -> CC_UMTS_RAT_MODE
SyncInd Status -> ASSIGNED
SyncInd Status -> ALTERED
Duplicated VCG_ALTERCODEC_REQ is not sent
VCG_ALTERCODEC_REQ is not sent before VCG_CALLACTIVATE_IND
RatMode -> CC_GSM_RAT_MODE
SyncInd Status -> ASSIGNED
SyncInd Status -> ALTERED
Duplicated VCG_ALTERCODEC_REQ is not sent
VCG_ALTERCODEC_REQ is not sent before VCG_CALLACTIVATE_IND
RatMode -> Unexpected RAT mode
cc_DetermineSrvccVcgActivateAction State = %d,RsrvccHoFail =%d
VCG Status Response -> %s
cc_SrvccVcgReleaseStatus -> %d
cc_SrvccVcgReleaseStatus -> %d
VcgCallState -> %d : %s
Vcg Ref Number -> %d
Vcg RabId -> %d
NORMAL Initialisation of <VCG Management> stack %d
GSM to UMTS Initialisation of <VCG Management>
UMTS to GSM Initialisation of <VCG Management>
Unknown Initialisation Type (%d) in cc_InitialiseVcgManagement
Deleting VCG Flags in cc_ResetVcgData
Calling vcg_RemoveCall(%d)
cc_DecodeImsccVcgStopIndMsg : Vcg Stop Status from IMSCC = %d
cc_DecodeImsccVcgStopIndMsg : SRVCC HO CNF or MM SYNC IND is not received
