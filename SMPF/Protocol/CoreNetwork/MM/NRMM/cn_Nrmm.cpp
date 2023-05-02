[N :MM,%d] Nrmm::Nrmm
[A :MM,%d] %%!EM m_pMmContext is null
[MM|%d,CP] %%!EM m_pMmContext is null
[W :MM,%d] %%!EM No message handler found!! (Name: %s, result:%u)
[MM|%d,CP] %%!EM No message handler found!! (Name: %s, result:%u)
[D :MM,%d]
[N :MM,%d] | NRMM .... |
[N :MM,%d] NRMM DEBUG INFORMATION
[N :MM,%d] |=========================================================|
[N :MM,%d] | NRMM UPDATE STATUS: %d
[DumpHex] | IMSI:
[DumpHex] | GUTI:
[DumpHex] | HPLMN:
[DumpHex] | RPLMN:
[N :MM,%d] | MULTI MODE: %d, NR OP MODE: %s
[N :MM,%d] | EUTRA CAPA STATUS: %s, NR CAPA STATUS: %s
[N :MM,%d] | PLMN SEL MODE: %d
[N :MM,%d] | VOPS: %d, EMC: %d, EMF: %d, IWK_N26: %d
[N :MM,%d] | REG_TYPE: %d, REG_NEEDED: 0x%x
[N :MM,%d] | SR_NEEDED: %s, REL_NEEDED: %d
[N :MM,%d] | MM_DATA_STATE: %d, PDU STATUS: 0x%x, ACT_DRB_STATUS: 0x%x
[N :MM,%d] | REG STATUS: %d, REG FLAG: %d
[N :MM,%d] | REG REJ CAUSE: %d, SVC REJ CAUSE: %d
[N :MM,%d] | UAC_ID: %d, UAC_BARRING: 0x%x %x, UAC_CONNECTED: 0x%x %x
[N :MM,%d] | UE_USAGE: %d, UE_VOICE_PREF: %d, VOICE_SUPPORT TYPE: %d
[DumpHex] | SupportCodec :
[N :MM,%d] | SIM Provider : %s, SVC Provider : %s
[N :MM,%d] |=========================================================|
[N :MM,%d] |=========================================================|
[N :MM,%d] Nrmm::NrmmPostProcessMsg()
[A :MM,%d] %%!EM ERROR : State creation failed: (%s:%s). No Transition!
[MM|%d,CP] %%!EM ERROR : State creation failed: (%s:%s). No Transition!
[D :MM,%d] [POST ACTION] NRMM STATE: ( %s, %s ) -> ( %s, %s )
[D :MM,%d] [POST ACTION] AS STATE: ( %d ) -> ( %d )
[N :MM,%d] %%!EM Skip post procedure : NR RAT SUSPENDED or STATE_NULL
[A :MM,%d] %%!EM m_pMmContext is null
[MM|%d,CP] %%!EM m_pMmContext is null
[N :MM,%d] NrOpMode (%d), DEREG_REASON (%d)
[N :MM,%d] Skip sending SMT_MM_STATUS_IND while REG is in progress
[N :MM,%d] [NSSAI INFO] NUM : ConfNssai = %d, AllowedNssai = %d, RejectedNssai = %d
[DumpHex] [NSSAI INFO] CONFIGURED NSSAI :
[DumpHex] [NSSAI INFO] ALLOWED NSSAI :
[DumpHex] [NSSAI INFO] REJECTED NSSAI :
[A :MM,%d] %%!EM NssaiContext is null
[MM|%d,CP] %%!EM NssaiContext is null
[N :MM,%d] SIM INFO is not updated on EMERGECY_SERVICE state
[N :MM,%d] Process PostSimInfoChanged
[D :MM,%d] %%!ST [POST ACTION] NRMM STATE: ( %s, %s ) -> ( %s, %s )
[D :MM,%d] Delete NRMM Contexts as per state changed to DEREG : DEREG REASON = %d
[D :MM,%d] STATE TRANSITION WORK : to DEREG
[D :MM,%d] Init procedure is onoging!
[D :MM,%d] USIM REMOVED, NRMM Contexts Initialized!!
[MM|%d,CP] USIM REMOVED, NRMM Contexts Initialized!!
[D :MM,%d] STATE TRANSITION WORK : REG_INIT to REG
[D :MM,%d] STATE TRANSITION WORK : REG_INIT to NULL
[D :MM,%d] STATE TRANSITION WORK : to REG_INIT
[D :MM,%d] Error. Can't get IncreaseEmmUlcountFunc!
[D :MM,%d] STATE TRANSITION WORK : from REG_INIT
[D :MM,%d] STATE TRANSITION WORK : to SR_INIT
[N :MM,%d] %%!CO ServiceRequest is NO needed
[D :MM,%d] STATE TRANSITION WORK : to DEREG_ECALL_INACTIVE
[D :MM,%d] STATE TRANSITION WORK : to IDLE
[E :MM,%d] AS Idle during L2N HO! Change LAST IRAT TYPE to [IRAT HANDOVER FAIL TO IDLE]
[N :MM,%d] Skip sending SMT_MM_STATUS_IND while REG is in progress
[D :MM,%d] STATE TRANSITION WORK : to WAIT IDLE
[D :MM,%d] STATE TRANSITION WORK : to CONN
[D :MM,%d] STATE TRANSITION WORK : to INACTIVE
[D :MM,%d] STATE TRANSITION WORK : to NO CELL
[D :MM,%d] STATE TRANSITION WORK : NO CELL to IDLE
[D :MM,%d] STATE TRANSITION WORK : from CONN
[D :MM,%d] Update Status : %d
[D :MM,%d] REG Attempt Count : %d
[D :MM,%d] N1 MODE DISABLED after IMS/EMC call termination
