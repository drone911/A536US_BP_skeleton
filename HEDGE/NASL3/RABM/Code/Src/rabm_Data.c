[CONTROLCHANNEL] rabm_SetState: New Rabm State %01X
[CONTROLCHANNEL] rabm_DataInitialise: rabm_State = %d, Received_AS_EST_IND = %d
[CONTROLCHANNEL] rabm_RbReset: RbId = %d, RabId = %d, DomainType = %d, SubFlowId = %d
[CONTROLCHANNEL] rabm_PsSetState(%01X,%d)
[ERROR_CHANNEL] rabm_PsSetState: invalid State %d(Rab:%01X)
[ERROR_CHANNEL] rabm_PsSetState: Invalid(RabId:%01X)
[ERROR_CHANNEL] rabm_PsSetActivationParameters: pRcvMsg is NULL pointer
[CONTROLCHANNEL] Nsapi : %d, Dual PDP : CID %d has 1st SID active %d 2nd SID inactive %d
[CONTROLCHANNEL] Nsapi : %d, Dual PDP : CID has 2 SIDs active SID 1 %d SID 2 %d
[CONTROLCHANNEL] rabm_PsSetActivationParameters: Nsapi : %d, Primary PDP : %d , IP Type : %d SID : %d, TFT num : %d
[CONTROLCHANNEL] ==========================================================
[CONTROLCHANNEL] TFT INFO(%X) : FilterDirection %d, FilterIdentifier %d
[CONTROLCHANNEL] TOS : %X, %X, %X
[CONTROLCHANNEL] Protocol : %X, %X, Next : %X, %X
[CONTROLCHANNEL] Flow Label: %X, %X
[CONTROLCHANNEL] RemoteAddr : %X, %X, %X
[CONTROLCHANNEL] RemoteAddrV6 : %X,
IPv6 Addr
IPv6 Mask
[CONTROLCHANNEL] Single Local port : %X, %X
[CONTROLCHANNEL] Local port range : %X, %d ~ %d
[CONTROLCHANNEL] Single Remote port : %X, %X
[CONTROLCHANNEL] Remote port range : %X, %d ~ %d
[CONTROLCHANNEL] Security : %X,
[CONTROLCHANNEL] Evaluation : %X,
[CONTROLCHANNEL] TftType : %X,
[CONTROLCHANNEL] ==========================================================
[ERROR_CHANNEL] rabm_PsSetActivationParameters: Invalid RabId: %01X
[ERROR_CHANNEL] rabm_PsSetDeactivateCause: Invalid RabId: %01X
[CONTROLCHANNEL] rabm_DeactivateAllPsData
[CONTROLCHANNEL] Reset the state of RABM to SUSPENDED if PDP %d for which REEST_REQ is sent , is deactivated before Response is received.
[PS_UPLINK] rabm_DeactivatePsData : RAB(%d) buffer freed!
[ERROR_CHANNEL] rabm_DeactivatePsData: Invalid RabId: %01X
[FLOWCONTROL] rabm_PsQueueData : Queuing Buffer %08X for Rab %01X
[ERROR_CHANNEL] rabm_PsQueueData : PsData->BufferQueue is NULL
[ERROR_CHANNEL] rabm_PsQueueData : Invalid Buffer for RabId: %01X - buffer &08X
[ERROR_CHANNEL] rabm_PsQueueData : Invalid RabId: %01X for buffer &08X
[FLOWCONTROL] rabm_PsDeQueueData : (%01X) = %08X
[ERROR_CHANNEL] rabm_PsDeQueueData : PsData->BufferQueue is NULL
[ERROR_CHANNEL] rabm_PsDeQueueData : Invalid RabId: %d
[CONTROLCHANNEL] rabm_PsSetRbId: RabId = %d, RbId = %d
[CONTROLCHANNEL] rabm_PsSetRbId: [OLD] DomainType = %d, RabId = %d, SubFlowId
[CONTROLCHANNEL] rabm_PsSetRbId: [NEW] DomainType = %d, RabId = %d, SubFlowId
[ERROR_CHANNEL] rabm_PsSetRb: Invalid RabId %01X
[ERROR_CHANNEL] Not a PS Rb %02X, type %d for RabId %01X
[ERROR_CHANNEL] Invalid RabId: %X
[INTERNAL_CHANNEL] rabm_GetTimerId, Domain %d, Rab %01X
[ERROR_CHANNEL] Invalid PS RabId: %01X
[ERROR_CHANNEL] Invalid CS RabId: %01X
[ERROR_CHANNEL] Invalid Domain: %d
[INTERNAL_CHANNEL] rabm_SetTimerId, Domain %d, Rab %01X, Timer %08X
[ERROR_CHANNEL] Invalid PS RabId: %01X
[ERROR_CHANNEL] Invalid CS RabId: %01X
[ERROR_CHANNEL] Invalid Domain: %d
[ERROR_CHANNEL] Not a PS Rb %02X
[ERROR_CHANNEL] Not a valid Rb %X
[ERROR_CHANNEL] rabm_CsGetState: Invalid RabId: %01X
[CONTROLCHANNEL] rabm_CsSetState (%d, %d)
[ERROR_CHANNEL] Invalid Rab: %01X
[ERROR_CHANNEL] Invalid State: %d
[ERROR_CHANNEL] Invalid SubFlowId: %01X for Rab %01X
[ERROR_CHANNEL] Invalid Rab: %01X
[ERROR_CHANNEL] rabm_CsGetTotalUiBits: Invalid Rab: %01X
[ERROR_CHANNEL] rabm_CsGetTotalUiBits: Invalid Rab: %01X
[CONTROLCHANNEL] rabm_DeactivateAllCsData
[ERROR_CHANNEL] rabm_DeactivateCsData: Invalid SI: %01X
[CONTROLCHANNEL] rabm_CsSetDataType() : RabId %01X, CallSessionNumber %d, SyncStatus %d, DataType : %d)
[ERROR_CHANNEL] Invalid DataType: %d
[ERROR_CHANNEL] Invalid Rab: %01X
[CONTROLCHANNEL] rabm_CsSetDataType CDH Current RAT != UMTS .. Forcefully SET
[ERROR_CHANNEL] rabm_CsGetDataType: Invalid Rab: %01X
[ERROR_CHANNEL] rabm_CsDataType: Invalid Rab: %01X
[ERROR_CHANNEL] rabm_CsGetRabId: Invalid RbId: %X
[ERROR_CHANNEL] rabm_CsGetRabId: Invalid RbId: %X
[CONTROLCHANNEL] rabm_CsAddRbId: Rab %01X, Rb %02X, SubFlow %d
[ERROR_CHANNEL] Invalid SI: %01X
[ERROR_CHANNEL] Invalid Rb: %X
[ERROR_CHANNEL] Invalid SubFlowId: %d
[CONTROLCHANNEL] rabm_CsAddRbId: [CsData] RbId %d, SubFlowId %d
[CONTROLCHANNEL] rabm_CsAddRbId: [RbData] RabId %d, SubFlowId %d, DomainType %d
[INTERNAL_CHANNEL] rabm_CsReleaseRbId (%d)
[ERROR_CHANNEL] Invalid Rb: %02X
[ERROR_CHANNEL] Invalid Rab: %01X for Rb %02X
[CONTROLCHANNEL] [CsData] RbId %d
[CONTROLCHANNEL] [RbData] RabId %d, SubFlowId %d, DomainType %d
[ERROR_CHANNEL] Invalid type %d for Rb: %02X
[FLOWCONTROL] rabm_CsUlQueueData
[ERROR_CHANNEL] rabm_CsUlQueueData : CsData->BufferQueue is NULL
[CS_UPLINK] rabm_CsQueueUlData: Rab %01X, Empty buffer received
[ERROR_CHANNEL] RabId: %01X Not ACTIVE: %d
[ERROR_CHANNEL] Invalid RabId: %01X for buffer &08X
[CS_UPLINK] rabm_CsUlSendData: queuedBits: %d, DlDataSent: %d, SubFlowID : %d, RabId %d RbId %d
[ERROR_CHANNEL] Invalid SubFlowID %d, HardCode for Defence
[ERROR_CHANNEL] rabm_CsUlGetPacket failed
[ERROR_CHANNEL] rabm_CsSetPadding(): CsData is NULL
[ERROR_CHANNEL] Rabm_CsUlTimer_STF() RABM_CSData_Struct = NULL, RabId = %d, CSData = %x
[CONTROLCHANNEL] ========== RABM Status ==========
[CONTROLCHANNEL] ========== Configured PS Rabs ==========
[CONTROLCHANNEL] isUtranCommercialPlmnId : %d
[CONTROLCHANNEL] SimInstance : %d
[CONTROLCHANNEL] PS Rab: %01X, State: %01X, Rb: %01X, Timer %08X, UplinkQ: %08X
[CONTROLCHANNEL] ========== Configured CS Rabs ==========
[ERROR_CHANNEL] CS Rab: %01X, State: %01X, Type: %01X, Timer: %08X, SubFlowID : %d
[ERROR_CHANNEL] -- Rbs: %01X %01X %01X %01X
[CONTROLCHANNEL] ========== Configured Rbs ==========
[CONTROLCHANNEL] Rb: %01X, Domain: %01X, Rab: %01X, SubFlow: %01X
[INTERNAL_CHANNEL] Rabm_FindNsapi : IPversion(%d) [1:IPV4. 2:IPV6] Received SID (%d) CID %d
[INTERNAL_CHANNEL] Rabm_FindNsapi : SID(%d) is same as first SID(%d)
[INTERNAL_CHANNEL] Rabm_FindNsapi : SID (%d) is not same as first SID(%d) Hence set SID to second SID(%d)
[ERROR_CHANNEL] Rabm_FindNsapi : Invalid FilterDirection %d
[INTERNAL_CHANNEL] TOS : %x, %x, %x
[INTERNAL_CHANNEL] Protocol : %x, %x
[INTERNAL_CHANNEL] RemoteAddr : %X, %X, %X
[INTERNAL_CHANNEL] Remote port : %X, %X
[INTERNAL_CHANNEL] Local port range: %X, %X, %X
[INTERNAL_CHANNEL] Dst port range: %X, %X, %X
[INTERNAL_CHANNEL] Skip Local port : %X, %X
[INTERNAL_CHANNEL] Rabm_FindNsapi : NSAPI : %d, Invalid IP Type : %d
[INTERNAL_CHANNEL] Rabm_FindNsapi : Primary Nsapi (%01X), SID (%d)
[INTERNAL_CHANNEL] Rabm_FindNsapi : NSAPI %d, TFT idx %d, iFind %d, higer_precedence_value %d, precedence_value %d
[ERROR_CHANNEL] Rabm_FindNsapi : Invalid FilterDirection %d, %d
[INTERNAL_CHANNEL] check precedence: higer %d, cur %d, Find %d
[INTERNAL_CHANNEL] TFT MATCH : Keep nsapi %d
[INTERNAL_CHANNEL] TFT MATCH : Find, temp nsapi %d
[INTERNAL_CHANNEL] TFT MATCH : Current Nsapi (%01X), Primary is %01X, %d
[INTERNAL_CHANNEL] need to check another pdp context %d %d
[INTERNAL_CHANNEL] Rabm_FindNsapi : %01X, %d
[INTERNAL_CHANNEL] Rabm_FindNsapi : %01X, %d
[INTERNAL_CHANNEL] Rabm_FindNsapi : %01X
[INTERNAL_CHANNEL] Rabm_FindNsapiIPv6 : NSAPI : %d, Invalid IP Type : %d
[INTERNAL_CHANNEL] Next Header: %X, %X
[INTERNAL_CHANNEL] Flow label: %X%X%X, %X, %X
[INTERNAL_CHANNEL] Remote IPv6:
IPv6 Addr
[INTERNAL_CHANNEL] Local port : %X, %X
[INTERNAL_CHANNEL] Remote port : %X, %X
[INTERNAL_CHANNEL] Local port range: %X, %X, %X
[INTERNAL_CHANNEL] Dst port range: %X, %X, %X
[INTERNAL_CHANNEL] Rabm_FindNsapiIPv6: %01X, %d
[INTERNAL_CHANNEL] Rabm_FindNsapiIPv6: %01X, %d
[INTERNAL_CHANNEL] Rabm_FindNsapiIPv6 : Primary Nsapi (%01X), SID (%d) TFT (%d)
[INTERNAL_CHANNEL] Rabm_FindNsapiIPv6 : Primary Nsapi (%01X), SID (%d) TFT (%d)
[INTERNAL_CHANNEL] Rabm_FindNsapiIPv6 : NSAPI %d, TFT idx %d, iFind %d, higer_precedence_value %d, precedence_value %d
[INTERNAL_CHANNEL] check precedence: higer %d, cur %d, Find %d
[INTERNAL_CHANNEL] TFT MATCH : Keep nsapi %d
[INTERNAL_CHANNEL] TFT MATCH : Find, temp nsapi %d
[INTERNAL_CHANNEL] TFT MATCH : Current Nsapi (%01X), Primary is %01X, %d
[INTERNAL_CHANNEL] need to check another pdp context %d %d
[INTERNAL_CHANNEL] Rabm_FindNsapiIPv6 : %01X
[ERROR_CHANNEL] Rabm_PsGetSIDFromNsapi : Invalid Nsapi : %d
[CONTROLCHANNEL] rabmGetVCPState : GCF MODE!!!, VCP : %d
[CONTROLCHANNEL] rabm_SetSupportLocalPdpReset : Set Local Pdp reset %d
[CONTROLCHANNEL] rabm_SetMultiRbExistence : Current Value %d
[CONTROLCHANNEL] rabm_GetMultiRbExistence : Current Value %d
[CONTROLCHANNEL] rabm_CheckCSRabPresent: TRUE CS Rab %01X is Active
[CONTROLCHANNEL] rabm_PsQueueFlush: pBuffer(0x%X) free (NSAPI %d)
[CONTROLCHANNEL] rabm_CalcCurPdpCnt: Active Pdp %d, %d, %d
[CONTROLCHANNEL] rabm_CalcCurPdpCnt: cnt %d
[ERROR_CHANNEL] rabm_GetAllocatedRabId: Idx is out of range %d
[CONTROLCHANNEL] ======== NSAPI %d UL/DL statistic (SID %d, State %d, SIM Type %d) ==========
[CONTROLCHANNEL] DL data counts : %d
[CONTROLCHANNEL] =========================================================
[INTERNAL_CHANNEL] rabm_GetDomesticSimCardType : %d
[INTERNAL_CHANNEL] rabm_SetIsFDTriggered : %d
[CONTROLCHANNEL] rabm_SetDl_counts : %d, %d
[CONTROLCHANNEL] rabm_KeepFD_Req : %d
[CONTROLCHANNEL] rabm_CheckActiveRabAndMultiplePdp(): NSAPI = %d, ntPdp = %d, RAB RAB_ACTIVE
[CONTROLCHANNEL] rabm_CheckActiveRabAndMultiplePdp(): RAB state = %d, CntPdp = %d
[CONTROLCHANNEL] DeactivationInProgress for NSAPI %d
[CONTROLCHANNEL] more than two Active PDP contexts (%d)
[CONTROLCHANNEL] Rabm_CsUlTimerStart
[CONTROLCHANNEL] Rb %02X, Size %d, No %d, TTI %d
[ERROR_CHANNEL] OutNoOfPackets --> 1
[CONTROLCHANNEL] Rb %02X, TTI Changed to %d, Count to %d
[ERROR_CHANNEL] Invalid OutPacketSize = %d
[ERROR_CHANNEL] Invalid OutNoOfPackets = %d
[ERROR_CHANNEL] Invalid OutTti = %d
[CONTROLCHANNEL] BitsPerPacket %d, PacketsPerTti %d, FramesPerTti %d, TicksPerSecond %d, TicksElapsed %d
[CONTROLCHANNEL] Rabm_CsUlTimerStop: Rb %02X
[CS_UPLINK] rabm_CsUlGetPacket: RbId %d, Rab %d Rab State %d
[ERROR_CHANNEL] BitsNeeded == 0
[ERROR_CHANNEL] RbId is UNUSED_RB, RAB released already Ignore CS UL Data
[ERROR_CHANNEL] smc_MemNewMob failed
[ERROR_CHANNEL] Too many loops, needed: %d, added %d
[ERROR_CHANNEL] rabm_CsUlGetNextBuffer: Cannot attach handle
