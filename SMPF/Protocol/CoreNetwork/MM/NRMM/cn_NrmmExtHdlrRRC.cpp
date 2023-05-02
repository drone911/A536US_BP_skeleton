[N :MM,%d] NrmmExtHdlrRRC::NrmmExtHdlrRRC
[N :MM,%d] MM_RRC_INACTIVE_IND_Handler
[N :MM,%d] %%!EM Inactive Ind only as Connected mode
[N :MM,%d] MM_RRC_BARRING_ALLEV_IND_Handler
[N :MM,%d] %%!CO allevAccessCategories : %X%X, BarredAccessCategories : %X%X
[DumpHex] [CELL INFO] NV Capa ID :
[N :MM,%d] Recovery from OOS or NR RAT resumed
[N :MM,%d] NR TAI Changed
[N :MM,%d] MICO RAAI enabled. Treat current cell in RTAI LIST
[N :MM,%d] Current TAI is not in TAI List
[N :MM,%d] MM_RRC_CELL_IND_Handler
[N :MM,%d] PLMN changed
[N :MM,%d] [CELL INFO] Previous Camped TAI : 0x%02X 0x%02X 0x%02X 0x%02X 0x%02X 0x%02X
[N :MM,%d] [CELL INFO] Current Camped TAI : 0x%02X 0x%02X 0x%02X 0x%02X 0x%02X 0x%02X
[MM|%d,CP] [CELL INFO] Current Camped TAI : 0x%02X 0x%02X 0x%02X 0x%02X 0x%02X 0x%02X
[N :MM,%d] [CELL INFO] Cell ID : 0x%X 0x%X
[MM|%d,CP] [CELL INFO] Cell ID : 0x%X 0x%X
[N :MM,%d] [CELL INFO] Camped on RTAI : %d
[N :MM,%d] [CELL INFO] Camped on FPLMN : %d
[N :MM,%d] [CELL INFO] Camped on FTAI : %d
[N :MM,%d] [CELL INFO] Camped on FTAI for RPS : %d
[N :MM,%d] [CELL INFO] Camped on Non Allowed Service Area : %d
[N :MM,%d] [CELL INFO] Selected PLMN is vaild : %d
[N :MM,%d] [CELL INFO] Plmn Selection Mode : %d
[N :MM,%d] [CELL INFO] N1 Mode Status : %d
[N :MM,%d] [CELL INFO] Cell Service Type : %d
[N :MM,%d] [CELL INFO] REG Required : %d
[N :MM,%d] [CELL INFO] SR Required : %d
[N :MM,%d] [CELL INFO] EMC available : %d
[N :MM,%d] [CELL INFO] FR Type : %d
[N :MM,%d] [CELL INFO] RNA Updated : %d
[N :MM,%d] [CELL INFO] VONR Support : %d
[N :MM,%d] [CELL INFO] AccBarringForEmergency[%d]
[DumpHex] [CELL INFO] BarringInfo :
[N :MM,%d] %%!EM UE camped on service restriction area, set sub state to SUB_NON_ALLOWED_SERV
[N :MM,%d] UE camped on service area, recover to previous sub state
[N :MM,%d] MM_RRC_DATA_CNF_Handler
[N :MM,%d] Unexpected message. Ignored. Current As State : %d
[N :MM,%d] wait for Rel ind and IRAT change req due to DATA CNF w/ redirection
[N :MM,%d] %%!RE Registration is needed(NRMM_MOBILITY_REG)
[N :MM,%d] NrmmExtHdlrRRC::MM_RRC_DATA_CNF_Handler : %d, Mui = %x, Cause = %x, Barred Cat = %x %x
[D :MM,%d] RRC connection resusme failed on RRC_CONNECTED_INACTIVE state, recovery REG procedure will be initiated
[N :MM,%d] %%!RE Registration is needed(NRMM_MOBILITY_REGSUB_RECOVERY_RRC_CON_FAIL)
[N :MM,%d] Keep current INACTIVE state as per DATA_CNF cause : %d
[N :MM,%d] MM_RRC_DATA_IND_Handler
[A :MM,%d] %%!EM MM_RRC_DATA_IND pData is NULL, Discard the message!!
[MM|%d,CP] %%!EM MM_RRC_DATA_IND pData is NULL, Discard the message!!
[N :MM,%d] MM_RRC_DATA_IND_Handler: dataLength: %d(Dump Max. 600)
[DumpHex] pData :
[N :MM,%d] Discard DATA_IND during POWER OFF DEREG in prgress!!
[N :MM,%d] DATA IND Len = %d
[N :MM,%d] RadioMsg[%s]
[A :MM,%d] %%!EM [Error] Ignore received 5GMM common message while DEREG in progress
[MM|%d,CP] %%!EM [Error] Ignore received 5GMM common message while DEREG in progress
[A :MM,%d] %%!EM [Error] Ignore received unexpected MM message !!
[MM|%d,CP] %%!EM [Error] Ignore received unexpected MM message !!
[N :MM,%d] PD Delete NSSAI : Type = %d
[N :MM,%d] PD Delete NSSAI : Default Configured NSSAI
[N :MM,%d] PD Delete NSSAI : Configured NSSAI = 0x%x %x %x
[N :MM,%d] PD Delete NSSAI : Allowed NSSAI = 0x%x %x %x
[N :MM,%d] Invalid Delete NSSAI Type.
[A :MM,%d] %%!EM [Error] MM_RRC_DATA_IND_Handler : EPD Mismatch!! Rcvd EPD = %d
[MM|%d,CP] %%!EM [Error] MM_RRC_DATA_IND_Handler : EPD Mismatch!! Rcvd EPD = %d
[A :MM,%d] %%!EM [Error] Nas Message Protection check failed
[MM|%d,CP] %%!EM [Error] Nas Message Protection check failed
[A :MM,%d] %%!EM [Error] Skip DATA_IND process not on CONNECTED state
[MM|%d,CP] %%!EM [Error] Skip DATA_IND process not on CONNECTED state
[N :MM,%d] MM_RRC_NAS_CONTAINER_IND_Handler
[N :MM,%d] MM_RRC_EST_CNF_Handler : %d
[N :MM,%d] MM_RRC_EST_REJ_Handler : %d
[N :MM,%d] RRC EST REJ Cause : [%d] [%x %x]
[N :MM,%d] MM_RRC_FALLBACK_IND_Handler
[W :MM,%d] %%!EM Fallback indication received NOT in connected state !!
[MM|%d,CP] %%!EM Fallback indication received NOT in connected state !!
[N :MM,%d] MM_RRC_INIT_CNF_Handler
[N :MM,%d] Set N1 mode disable UeUsage : Voice Centric, VOICE_PREF : %d, Volte_permanent_fail : %d
[N :MM,%d] SupportedBandMaxTime : %d
[N :MM,%d] Set default initial PLMN search time : %d
[N :MM,%d] MM_RRC_PLMN_SEARCH_CNF_Handler
[N :MM,%d] MM_RRC_PLMN_LIST_ABORT_CNF_Handler
[N :MM,%d] MM_RRC_PLMN_LIST_CNF_Handler
[N :MM,%d] MM_RRC_REL_IND_Handler
[N :MM,%d] RRC Release cause : [%d]
[N :MM,%d] RRC connection release during EMC FB in progress, perform forced IRAT change
[N :MM,%d] MM_RRC_REL_IND is ignored on NO_CELL state
[DumpHex] MM_RRC_NAS_SEC_UPDATE_REQ_Handler :
[DumpHex] : NasContainer :
[DumpHex] : LTE NH :
[N :MM,%d] INTRA N1_HO
[N :MM,%d] S1 TO N1 HO
[N :MM,%d] MM_RRC_NAS_SEC_UPDATE_REQ_Handler : Can not handle NasContainer with length dataLength
[DumpHex] MM_RRC_OOS_IND_Handler :
[MM|%d,CP] %%!EM Received MM_RRC_OOS_IND
[N :MM,%d] MM_RRC_RAT_SUSPEND_CNF_Handler
[N :MM,%d] %%!RT [ NR SUSPENDED ]
[N :MM,%d] MM_RRC_RAT_RESUME_CNF_Handler
[N :MM,%d] %%!DD [END] SRNC_REGISTER [%s]
[N :MM,%d] MM_RRC_STOP_CNF_Handler
[N :MM,%d] %%!RT [ NR STOP ]
[N :MM,%d] MM_RRC_PAGE_IND_Handler
[E :MM,%d] ERROR : Voice call on-going
[E :MM,%d] ERROR : PS on Emergency
[E :MM,%d] ERROR : IMS REGI on-going
[E :MM,%d] ERROR : Reg procedure on-going
[E :MM,%d] ERROR : RRC connection establishment in progress
[E :MM,%d] ERROR : Ignore paging. already SR done
[N :MM,%d] %%!EM MM_RRC_TERMINATE_CNF_Handler, Reject cause = %d
[MM|%d,CP] %%!EM MM_RRC_TERMINATE_CNF_Handler, Reject cause = %d
[N :MM,%d] %%!EM No matched REJ Cause for TERMINATE_CNF
[N :MM,%d] MM_RRC_CAPA_UPDATE_NEEDED_IND_Handler
[N :MM,%d] %%!RE Release RRC connection and initiate REG
[N :MM,%d] %%!RE initiate REG after IMS call end
[N :MM,%d] %%!RE initiate REG
[N :MM,%d] %%!RE Registration is needed(NRMM_MOBILITY_REGSUB_CAPA_UPDATE)
[N :MM,%d] MM_RRC_CONNECTED_IND_Handler
[N :MM,%d] MM_RRC_ETWS_PRIMARY_IND_Handler
[N :MM,%d] MM_RRC_ETWS_SECONDARY_IND_Handler
[N :MM,%d] MM_RRC_CMAS_IND_Handler
[N :MM,%d] MM_RRC_REL_CNF_Handler
[N :MM,%d] BEAM_LOCKON enabled!!
[N :MM,%d] %%!CO ServiceRequest is needed(NRMM_PENDING_SR_BEAM_LOCKON)
[N :MM,%d] RRC_REL_CNF while SR in progress, Abort SR procedure and get back to previous state
[N :MM,%d] RRC_REL_CNF while REG in progress, Abort REG procedure and get back to previous state
[N :MM,%d] NrmmExtHdlrRRC::CheckAndChangeAsState() : %s
[N :MM,%d] %%!ST Current AS State : %s
[N :MM,%d] RRC terminate procedure is in progress
[MM|%d,CP] MM_RRC_DATA_CNF NOT SUCCESS AccResult(%d)
[N :MM,%d] Next AS State : %d
[W :MM,%d] %%!EM Do nothing on DATA_CNF/EST_CNF
[MM|%d,CP] %%!EM Do nothing on DATA_CNF/EST_CNF
[N :MM,%d] IRAT RESULT : L2N RESELECTION SUCCESS
[N :MM,%d] IRAT RESULT : L2N RESELECTION FAIL, %d
[N :MM,%d] IRAT RESULT : L2N REDIRECTION SUCCESS
[N :MM,%d] IRAT RESULT : L2N REDIRECTION FAIL, %d
[N :MM,%d] IRAT RESULT : L2N HANDOVER SUCCESS
[N :MM,%d] IRAT RESULT : L2N HANDOVER FAIL, %d
[A :MM,%d] IRAT RESULT : Unknown IRAT Type = %d
[MM|%d,CP] IRAT RESULT : Unknown IRAT Type = %d
[N :MM,%d] MM_RRC_IRAT_CHANGE_REQ_Handler: Target RAT[%d] IRAT type[%d]
[N :MM,%d] Power off Detach is triggered. Ignore IRAT request
[N :MM,%d] Reject due to NR_RAT_SUSPEND_IN_PROGRESS
[A :MM,%d] %%!EM Invalid IRAT type[%d]
[MM|%d,CP] %%!EM Invalid IRAT type[%d]
[A :MM,%d] %%!EM IRAT triggered on NR only mode!! send CHANGE_CNF as failure : type = %d
[MM|%d,CP] %%!EM IRAT triggered on NR only mode!! send CHANGE_CNF as failure : type = %d
[A :MM,%d] Invalid rMsgBody.TargetRat[%d]
[MM|%d,CP] Invalid rMsgBody.TargetRat[%d]
[N :MM,%d] remove TAI as per N2N HO.
[N :MM,%d] UE camped on service restriction area, set sub state to SUB_NON_ALLOWED_SERV
[N :MM,%d] UE camped on service area, recover to previous sub state
[N :MM,%d] In manual mode, if user selects NR PLMN in N1 mode disable state NR REG can be peformed
[N :MM,%d] In manual mode, N1 mode is not enabled
[N :MM,%d] In manual mode, camped PLMN is in EPLMN list
[N :MM,%d] In manual mode, Camped PLMN ID is mateched with Selected PLMN ID
[N :MM,%d] In manual mode, Camped PLMN ID is not mateched with Selected PLMN ID
[W :MM,%d] %%!EM SIM is invalid!
[MM|%d,CP] %%!EM SIM is invalid!
[N :MM,%d] Camped on ANY PLMN state!
[N :MM,%d] %%!EM Camped on not acceptable cell!
[N :MM,%d] %%!EM Selected PLMN ID is not vaild from RRC !
