[N :MM,%d] NrmmMessage::SendExtMsg : %s
[N :MM,%d] %%!EM Unexpected Msg ID
[N :MM,%d] NrmmMessage::SendEstCnfMsg, Source Task = %s, Mui = %x
[DumpHex] QM_MM_EST_CNF :
[N :MM,%d] %%!EM Unknown Source Task !!
[N :MM,%d] NrmmMessage::SendEstErrMsg, Source Task = %x, Mui = %x, Cause = %x
[N :MM,%d] %%!EM Unknown Source Task !!
[N :MM,%d] NrmmMessage::SendDataCnf, Source Task = %x, Mui = %x, Cause = %x
[N :MM,%d] %%!EM Unknown Source Task !!
[N :MM,%d] NrmmMessage::SendMultiPayloadMsg
[W :MM,%d] ERROR : current length has excceeded total length
[MM|%d,CP] ERROR : current length has excceeded total length
[N :MM,%d] MULTI PAYLOAD[%d] : Payload type = %d, Number Of Optional Ie = %d
[W :MM,%d] ERROR : invalid UPU Result = %d
[MM|%d,CP] ERROR : invalid UPU Result = %d
[N :MM,%d] %%!EM Unknown Payload Type !!
[N :MM,%d] %%!EM Unknown type : %d
[N :MM,%d] %%!EM Unknown type : %d
[DumpHex] Send N2L IRAT CHANGE CNF as failure :
[DumpHex] Send X2N IRAT CHANGE CNF as failure :
[N :MM,%d] SendGrantTriggeredIndMsg : Mui %d SvcType %d
[DumpHex] Send GMC ESFB CNF as failure :
[N :MM,%d] Get RRC NSSAI Info, Nssai Inclusion Mode : %x, MSG : %d
[N :MM,%d] RegType : %d, RegNeeded : %d
[N :MM,%d] Emergency registration, no NSSAI is provided to the lower layers
[A :MM,%d] MEM COPY size over !! [Num = %d, MaxNum = %d]
[MM|%d,CP] MEM COPY size over !! [Num = %d, MaxNum = %d]
[N :MM,%d] Emergency registration, no NSSAI is provided to the lower layers
[N :MM,%d] NSSAI Inclusion Mode is D, no NSSAI provided
[N :MM,%d] NSSAI Inclusion Mode is NONE, no NSSAI provided
[A :MM,%d] %%!EM ERROR: RRC_MM_EST_REQ alloc failed
[MM|%d,CP] %%!EM ERROR: RRC_MM_EST_REQ alloc failed
[N :MM,%d] RRC EST REQ : RrcEstCause = %d, UAC ID = 0x%x, ACC CAT = 0x%x %x, SkipBarring = %d
[A :MM,%d] MEM COPY size over !! [Num = %d, MaxNum = %d]
[MM|%d,CP] MEM COPY size over !! [Num = %d, MaxNum = %d]
[DumpHex] EST REQ :
[A :MM,%d] %%!EM No data in EST_REQ message
[MM|%d,CP] %%!EM No data in EST_REQ message
[A :MM,%d] %%!EM ERROR: RRC_MM_DATA_REQ alloc failed
[MM|%d,CP] %%!EM ERROR: RRC_MM_DATA_REQ alloc failed
[N :MM,%d] RRC DATA REQ : RrcEstCause = %d, UAC ID = 0x%x, ACC CAT = 0x%x %x, SkipBarring = %d
[N :MM,%d] Send UL NAS COUNT to RRC for REG or SR REQ if NAS SMC is not completed yet : count = %d
[DumpHex] DATA REQ :
[N :MM,%d] Supported RAT : %x
[N :MM,%d] NrmmMessage::SendIntMsg: Unexpected Msg ID
[A :MM,%d] %%!EM ERROR : m_pNrmmContext->m_pRecvExtMsgHdr = nullptr
[MM|%d,CP] %%!EM ERROR : m_pNrmmContext->m_pRecvExtMsgHdr = nullptr
[N :MM,%d] MM_MM_NRMM_NSSAI_DELETE_REQ : Default Configured NSSAI
[D :MM,%d] Delete NSSAI Type : %d
[DumpHex] Send MM_MM_NRMM_NSSAI_DELETE_REQ_IND :
[N :MM,%d] ConstructSmtModeUpdateIndMsg MultiMode %d
[N :MM,%d] Discard sending SMT_MM_REL_IND if NR RAT suspended
[N :MM,%d] ConstructSmtReleaseIndMsg MSG_ID : %d , REREG_FLAG : %d
[N :MM,%d] ConstructSmtReleaseIndMsg RelType [%d] ReRegRequired [%d]
[N :MM,%d] Send SMT_MM_NW_SESSION_INFO_IND : PDU session = 0x%X, Cause = %d
[DumpHex] Send Msg DUMP :
[N :MM,%d] NrmmMessage::ConstructSmtIratChangeIndMsg : TargetRat = %d, Type = %d, Status = %d
[N :MM,%d] ConstructSmtInitIndMsg pCnCommonDb 0x%x
[A :MM,%d] %%!EM ERROR : MM_RRC_DATA_IND_T alloc failed
[MM|%d,CP] %%!EM ERROR : MM_RRC_DATA_IND_T alloc failed
[N :MM,%d] SMT DATA IND : PDU Session ID = %d, PayLoad Length = %d
[A :MM,%d] %%!EM PDU Session ID is not vaild !!
[MM|%d,CP] %%!EM PDU Session ID is not vaild !!
[N :MM,%d] SMT DATA IND : Cause = %d
[N :MM,%d] SMT DATA IND : Congestion timer value = %d
[A :MM,%d] %%!EM ERROR : PduSessionId is not available even payload container has been loaded !!
[MM|%d,CP] %%!EM ERROR : PduSessionId is not available even payload container has been loaded !!
[N :MM,%d] SMT_MM_STATUS_IND : RegType = %d, Status = %d, IwkN26 = %d, AsState = %d, Emc = %d
[N :MM,%d] SMT_MM_STATUS_IND : VoNR = %d
[D :MM,%d] SMT_MM_AUTH_PROCESS_CNF SessionId : %d
[DumpHex] EAP_MSG :
[A :MM,%d] MEM COPY size over !! [Num = %d, MaxNum = %d]
[MM|%d,CP] MEM COPY size over !! [Num = %d, MaxNum = %d]
[DumpHex] Construct GMC_MM_PLMN_SEARCH_FAIL_IND :
[N :MM,%d] Send GMC_MM_PLMN_LIST_IND as failure
[A :MM,%d] MEM COPY size over !! [Num = %d, MaxNum = %d]
[MM|%d,CP] MEM COPY size over !! [Num = %d, MaxNum = %d]
[DumpHex] Construct GMC_MM_PLMN_LIST_IND :
[N :MM,%d] trigger NrmmMessage:: ConstructGmcPlmnListAbortCnfMsg (%p)
[A :MM,%d] %%!EM ERROR : ConstructGmcPlmnListAbortCnfMsg::pNrmmRcvMsgFromMm = nullptr
[MM|%d,CP] %%!EM ERROR : ConstructGmcPlmnListAbortCnfMsg::pNrmmRcvMsgFromMm = nullptr
[N :MM,%d] NrmmMessage:: ConstructGmcPlmnListAbortCnfMsg Result(%d) Status(%d) NumPlmns(%d) FreqNum(%d)
[A :MM,%d] MEM COPY size over !! [Num = %d, MaxNum = %d]
[MM|%d,CP] MEM COPY size over !! [Num = %d, MaxNum = %d]
[A :MM,%d] %%!EM ERROR : MM rejecting to un-suitable state
[MM|%d,CP] %%!EM ERROR : MM rejecting to un-suitable state
[A :MM,%d] MEM COPY size over !! [Num = %d, MaxNum = %d]
[MM|%d,CP] MEM COPY size over !! [Num = %d, MaxNum = %d]
[DumpHex] Construct GMC_MM_BPLMN_LIST_FAIL_IND :
[DumpHex] Construct GMC_MM_N1_MODE_UPDATE_IND :
[A :MM,%d] %%!EM ERROR : m_pNrmmContext->m_pRecvExtMsgHdr = nullptr
[MM|%d,CP] %%!EM ERROR : m_pNrmmContext->m_pRecvExtMsgHdr = nullptr
[A :MM,%d] %%!EM IRAT Type is not correct!! : %d
[MM|%d,CP] %%!EM IRAT Type is not correct!! : %d
[DumpHex] Send GMC_MM_IRAT_CHANGE_REQ :
[A :MM,%d] %%!EM ERROR : m_pNrmmContext->m_pRecvExtMsgHdr = nullptr
[MM|%d,CP] %%!EM ERROR : m_pNrmmContext->m_pRecvExtMsgHdr = nullptr
[N :MM,%d] Recieved RRC_MM_IRAT_CHANGE_CNF : Type = %d
[DumpHex] Dump :
[N :MM,%d] %%!EM Unknown Msg ID !!
[N :MM,%d] RAT change needed without NR RAT search
[N :MM,%d] PLMN_PERFORM_ACTION_Handler, Reject cause = %d
[N :MM,%d] PLMN PERFORM ACTION : %d, cause : %d, EMC : %d, EMF : %d, VoPS : %d
[N :MM,%d] PLMN PERFORM ACTION : EmergencyCallSupport %d IsEMCOnlyBearer %d
[N :MM,%d] PLMN PERFORM ACTION : SOR RESULT %d
[DumpHex] Send Msg DUMP :
[N :MM,%d] Skip sending GMC_MM_EPLMN_LIST_UPD_IND during mode update
[N :MM,%d] Equivalent PLMN list : %d
[DumpHex] HEX :
[DumpHex] GMC_INIT_CNF :
[A :MM,%d] %%!EM ERROR : ConstructGmcMmcCnfMsg::m_pNrmmMessage->GetRcvMsgBodyPtr() = nullptr
[MM|%d,CP] %%!EM ERROR : ConstructGmcMmcCnfMsg::m_pNrmmMessage->GetRcvMsgBodyPtr() = nullptr
[DumpHex] GMC_MMC_CNF :
[N :MM,%d] Equivalent PLMN list : %d
[DumpHex] HEX :
[A :MM,%d] MEM COPY size over !! [Num = %d, MaxNum = %d]
[MM|%d,CP] MEM COPY size over !! [Num = %d, MaxNum = %d]
[E :MM,%d] FTAI LIST size excceded!
[DumpHex] RRC_MM_UPDATE_FTAI_LIST_IND :
[DumpHex] RRC_MM_INIT_REQ :
[A :MM,%d] %%!EM ERROR : ConstructRrcMccReqMsg::pNrmmRcvMsgFromMm = nullptr
[MM|%d,CP] %%!EM ERROR : ConstructRrcMccReqMsg::pNrmmRcvMsgFromMm = nullptr
[N :MM,%d] RrcSearchMode %d
[D :MM,%d] RRC_MM_CURR_MODE_UPDATE_IND : MultiMode = %d, N1 Mode = %d, S1 Mode = %d, VoiceSupportType = %d
[N :MM,%d] NrmmMessageExtRrc::ConstructRrcTermReq, RRC_TERMINATE_REQ cause = %d
[N :MM,%d] %%!EM Unknown Reject Cause !!
[N :MM,%d] %%!EM In test case. Do not send RRC_MM_PROC_STATUS_IND
[D :MM,%d] RRC_MM_PROC_STATUS_IND : Result = %d Band = %d, Narfcn= %d, PhyCellId = %d
[DumpHex] Send Msg DUMP :
[N :MM,%d] Block to send PLMN SEARCH REQ, NRMM TH is activated
[DumpHex] Received MM_GMC_PLMN_SEARCH_REQ :
[DumpHex] RRC_MM_PLMN_SEARCH_REQ :
[A :MM,%d] %%!EM ERROR : ConstructRrcPlmnListReqMsg::pNrmmRcvMsgFromMm = nullptr
[MM|%d,CP] %%!EM ERROR : ConstructRrcPlmnListReqMsg::pNrmmRcvMsgFromMm = nullptr
[DumpHex] RRC_MM_PLMN_LIST_REQ :
[N :MM,%d] %%!DD [BEGIN] SRNC_REGISTER [%s]
[A :MM,%d] %%!EM Already RRC SUSPEND IN PROGRESS. Do not send msg
[MM|%d,CP] %%!EM Already RRC SUSPEND IN PROGRESS. Do not send msg
[A :MM,%d] %%!EM ERROR : m_pNrmmContext->m_pRecvExtMsgHdr = nullptr
[MM|%d,CP] %%!EM ERROR : m_pNrmmContext->m_pRecvExtMsgHdr = nullptr
[A :MM,%d] %%!EM IRAT Type is not correct!! : %d
[MM|%d,CP] %%!EM IRAT Type is not correct!! : %d
[DumpHex] Send RRC_MM_IRAT_CHANGE_REQ :
[A :MM,%d] %%!EM ERROR : m_pNrmmContext->m_pRecvExtMsgHdr = nullptr
[MM|%d,CP] %%!EM ERROR : m_pNrmmContext->m_pRecvExtMsgHdr = nullptr
[N :MM,%d] Received MM_GMC_IRAT_CHANGE_CNF : Type = %d
[DumpHex] Dump :
[DumpHex] RRC_MM_IRAT_CHANGE_CNF :
[A :MM,%d] %%!EM ERROR : RRC_MM_SECURITY_CONTEXT_IND NasSecurityContext not activated
[MM|%d,CP] %%!EM ERROR : RRC_MM_SECURITY_CONTEXT_IND NasSecurityContext not activated
[A :MM,%d] %%!EM ERROR : RRC_MM_SECURITY_CONTEXT_IND alloc failed
[MM|%d,CP] %%!EM ERROR : RRC_MM_SECURITY_CONTEXT_IND alloc failed
[A :MM,%d] %%!EM ERROR : RRC_MM_FEDV_STATE_IND_T alloc failed
[MM|%d,CP] %%!EM ERROR : RRC_MM_FEDV_STATE_IND_T alloc failed
[N :MM,%d] SendMsg IsFeDvOn: %d
[D :MM,%d] RRC_MM_SPECIFIC_DRX_IND : DRX LENGTH = %d
[D :MM,%d] RRC_MM_CAPA_UPDATE_IND : RACS Type = %d
[DumpHex] RRC_MM_IMS_SERVICE_STATUS_IND:
[D :MM,%d] RRC_MM_LOW_PWR_MODcn_NrmmMessageE_IND : TempCtrl = %d, Cause = %d
[D :MM,%d] EENLV %d
[DumpHex] RM_MM_EMERGENCY_NUM_IND :
[DumpHex] RM_MM_REGISTRATION_STATUS_IND :
[A :MM,%d] %%!EM ERROR : m_pNrmmContext->m_pRecvExtMsgHdr = nullptr
[MM|%d,CP] %%!EM ERROR : m_pNrmmContext->m_pRecvExtMsgHdr = nullptr
[D :MM,%d] RM_MM_CELL_INFO_IND : CurrAic = 0x%x, Aic = 0x%x
[D :MM,%d] RM_MM_CELL_INFO_IND : AccBarringForEmergency = %d, NARFCN(Earfcn) = %d
[D :MM,%d] RM_MM_CELL_INFO_IND : BarringInfoForDelayTolerant : uacBarringFactor = %d, uacBarringTime = %d , uacBarringAccessIdentity = %d, IsBarred = %d
[D :MM,%d] RM_MM_CELL_INFO_IND : BarringInfoForEmergency : uacBarringFactor = %d, uacBarringTime = %d , uacBarringAccessIdentity = %d, IsBarred = %d
[D :MM,%d] RM_MM_CELL_INFO_IND : BarringInfoForMoSig : uacBarringFactor = %d, uacBarringTime = %d , uacBarringAccessIdentity = %d, IsBarred = %d
[D :MM,%d] RM_MM_CELL_INFO_IND : BarringInfoForMoMMtelVoice : uacBarringFactor = %d, uacBarringTime = %d , uacBarringAccessIdentity = %d, IsBarred = %d
[D :MM,%d] RM_MM_CELL_INFO_IND : BarringInfoForMoMMtelVideo : uacBarringFactor = %d, uacBarringTime = %d , uacBarringAccessIdentity = %d, IsBarred = %d
[D :MM,%d] RM_MM_CELL_INFO_IND : BarringInfoForMoSms : uacBarringFactor = %d, uacBarringTime = %d , uacBarringAccessIdentity = %d, IsBarred = %d
[D :MM,%d] RM_MM_CELL_INFO_IND : BarringInfoForMoData : uacBarringFactor = %d, uacBarringTime = %d , uacBarringAccessIdentity = %d, IsBarred = %d
[D :MM,%d] RM_MM_CELL_INFO_IND : BarringInfoForImsReg : uacBarringFactor = %d, uacBarringTime = %d , uacBarringAccessIdentity = %d, IsBarred = %d
[DumpHex] RM_MM_CELL_INFO_IND :
[N :MM,%d] Revert target RAT : NR as per IRAT change failed
[N :MM,%d] %%!DD [END] SRNC_DEREGISTER [%s]
[N :MM,%d] RM_MM_PS_CALL_FAIL_IND : cause = %d
[DumpHex] RM_MM_NETSVC_DATA_IND :
[D :MM,%d] RM_MM_REG_RESULT_IND : Cause [%d] , RegResultType [%d]
[DumpHex] SimReaReq element :
[N :MM,%d] NrmmMessageExtSim::ConstructSimUpdateReqMsg : RequestorId(%2X), SimFile(%02X),
[DumpHex] SimEFData
[N :MM,%d] NrmmMessageExtSim::ConstructSimMultiReadReqMsg, [%d] : RequestorId(%2X), SimFile(%02X),
[A :MM,%d] %%!EM ERROR : Cannot find received RAND(%p) or AUTN(%p)
[MM|%d,CP] %%!EM ERROR : Cannot find received RAND(%p) or AUTN(%p)
[A :MM,%d] %%!EM ERROR : SIM_MM_USIM_AUTH_REQ alloc failed
[MM|%d,CP] %%!EM ERROR : SIM_MM_USIM_AUTH_REQ alloc failed
[D :MM,%d] Send Usim Auth Req : AuthContext[%d], TransactionId[%d]
[DumpHex] RAND :
[DumpHex] AUTN :
[DumpHex] QM_MM_EST_IND :
[N :MM,%d] NrmmMessageExtQm::ConstructQmIratChangeIndMsg : TargetRat = %d, Type = %d, Status = %d, Result = %d
[W :MM,%d] %%!EM data is NULL!!
[MM|%d,CP] %%!EM data is NULL!!
[W :MM,%d] %%!EM data is NULL!!
[MM|%d,CP] %%!EM data is NULL!!
[A :MM,%d] %%!EM ERROR : Unsupported payload type : %d
[MM|%d,CP] %%!EM ERROR : Unsupported payload type : %d
[A :MM,%d] %%!EM ERROR : Message length limit to 1560 bytes. MsgLen : %d
[MM|%d,CP] %%!EM ERROR : Message length limit to 1560 bytes. MsgLen : %d
[A :MM,%d] %%!EM ERROR : Payload data is not stored in procedure context
[MM|%d,CP] %%!EM ERROR : Payload data is not stored in procedure context
[A :MM,%d] %%!EM ERROR : ConstructSmsEtwsPrimaryInd::pRcvMsg = nullptr, m_pNrmmMessage->GetRcvMsgBodyPtr()(%p)
[MM|%d,CP] %%!EM ERROR : ConstructSmsEtwsPrimaryInd::pRcvMsg = nullptr, m_pNrmmMessage->GetRcvMsgBodyPtr()(%p)
[A :MM,%d] %%!EM ERROR : CNS_MM_SMS_ETWS_PRIMARY_IND_T alloc failed
[MM|%d,CP] %%!EM ERROR : CNS_MM_SMS_ETWS_PRIMARY_IND_T alloc failed
[N :MM,%d] ETWS MsgId(%d) SN(%d) Type(0x%02x%02x) WarnSecuInfoSizeInByte(%d)
[A :MM,%d] %%!EM ERROR : ConstructSmsEtwsSecondaryInd::pRcvMsg = nullptr, m_pNrmmMessage->GetRcvMsgBodyPtr()(%p)
[MM|%d,CP] %%!EM ERROR : ConstructSmsEtwsSecondaryInd::pRcvMsg = nullptr, m_pNrmmMessage->GetRcvMsgBodyPtr()(%p)
[A :MM,%d] %%!EM ERROR : CNS_MM_SMS_ETWS_SECONDARY_IND_T alloc failed
[MM|%d,CP] %%!EM ERROR : CNS_MM_SMS_ETWS_SECONDARY_IND_T alloc failed
[N :MM,%d] ETWS MsgId(%d) SN(%d) WarningMsgLen(%d) WarningMsg(%p) DataCodingScheme(%d)
[A :MM,%d] %%!EM ERROR : ConstructSmsCmasInfoInd::pRcvMsg = nullptr, m_pNrmmMessage->GetRcvMsgBodyPtr()(%p)
[MM|%d,CP] %%!EM ERROR : ConstructSmsCmasInfoInd::pRcvMsg = nullptr, m_pNrmmMessage->GetRcvMsgBodyPtr()(%p)
[A :MM,%d] %%!EM ERROR : CNS_MM_SMS_CMAS_INFO_IND_T alloc failed
[MM|%d,CP] %%!EM ERROR : CNS_MM_SMS_CMAS_INFO_IND_T alloc failed
[N :MM,%d] CMAS MsgId(%d) SN(%d) WarningMsgLen(%d) WarningMsg(%p) DataCodingScheme(%d)
[DumpHex] EMM_MM_REG_INFO_UPD_IND_T :
[A :MM,%d] %%!EM ERROR : ConstructEmmSecInfoUpdateInd::currentNSC is not activated
[MM|%d,CP] %%!EM ERROR : ConstructEmmSecInfoUpdateInd::currentNSC is not activated
[A :MM,%d] EMM_MM_SEC_INFO_UPDATE_IND : ngKSI[%d] NrIntAlg[%d] EpsIntAlg[%d] EpsEncAlg[%d]
[MM|%d,CP] EMM_MM_SEC_INFO_UPDATE_IND : ngKSI[%d] NrIntAlg[%d] EpsIntAlg[%d] EpsEncAlg[%d]
[A :MM,%d] EMM_MM_SEC_INFO_UPDATE_IND : UlCount[%d] DlCount[%d]
[MM|%d,CP] EMM_MM_SEC_INFO_UPDATE_IND : UlCount[%d] DlCount[%d]
[DumpHex] EMM_MM_REG_INFO_UPD_IND : K_AMF
[DumpHex] EMM_MM_REG_INFO_UPD_IND : K_INT_NR
[DumpHex] EMM_MM_LTE_NAS_MSG_REQ :
[A :MM,%d] %%!EM ERROR : Payload data is not stored in procedure context
[MM|%d,CP] %%!EM ERROR : Payload data is not stored in procedure context
[N :MM,%d] Revert target RAT : NR as per IRAT change failed
[A :MM,%d] %%!EM ERROR : m_pNrmmContext->m_pRecvExtMsgHdr = nullptr
[MM|%d,CP] %%!EM ERROR : m_pNrmmContext->m_pRecvExtMsgHdr = nullptr
[A :MM,%d] %%!EM ERROR : NasMsgLength is over than MAX_NR_TMC_MSG_PAYLOAD!!!
[MM|%d,CP] %%!EM ERROR : NasMsgLength is over than MAX_NR_TMC_MSG_PAYLOAD!!!
[N :MM,%d] NumberOfFiles[%d], RefreshAppTypes[%d], Name[%s]
[N :MM,%d] simFile[%X], FileList[%X]
[DumpHex] SAT_MM_REGISTER_REQ_T :
[DumpHex] SAT_MM_FILE_CHANGE_CNF_T :
[DumpHex] MM_HMM_SEC_INFO_UPD_IND_T :
[DumpHex] MM_HMM_REG_INFO_UPD_IND_T :
[A :MM,%d] %%!EM ERROR : Payload data is not stored in procedure context
[MM|%d,CP] %%!EM ERROR : Payload data is not stored in procedure context
[A :MM,%d] %%!EM ERROR : Payload data is not stored in procedure context
[MM|%d,CP] %%!EM ERROR : Payload data is not stored in procedure context
