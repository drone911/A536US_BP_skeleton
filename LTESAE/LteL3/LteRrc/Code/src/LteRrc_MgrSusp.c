[%s]Update Last Irat Barred Info. Cell's RAT Type(%d) Freq(%d) PCI(%d) (Time:%d, Result:%d)
[%s]Cell(%d) i-RAT barred as NON_MEMBER_CSG_CELL, but RAT Type (%d) is not UTRAN. Check!
[%s]Redirect to Other RAT failure => Go to LTE INIT
[%s]Candidate cell list (reselection) is exhausted => Go to IDLE
[%s][I-MDT] LeavingLte - Stop LocationInfoReq
[%s]Pending NAS Msg still pending.. Free the Msg
[%s] CSFB Call Status(%d), TauEstFailCount(%d)
[%s]Trigger IRAT cell reselection to UTRAN
[%s]U candi [%d %d]
[%s]Different RAT type(%d) => Send LTE_RRC_RESEL_TO_UMTS_IND
[%s]Candidate cell list is exhausted
[%s]Candidate cell list is exhausted
[%s]No valid candidate for UMTS => NOT send LTE_RRC_RESEL_TO_UMTS_IND
[%s]Trigger IRAT cell reselection to GERAN
[%s]G candi [%d %d]
[%s]Different RAT type(%d) => Send LTE_RRC_RESEL_TO_GSM_IND
[%s]Candidate cell list is exhausted
[%s]Candidate cell list is exhausted
[%s]No valid candidate for GSM => NOT send LTE_RRC_RESEL_TO_GSM_IND
[%s]Trigger IRAT cell reselection to HRPD
[%s]H candi [%d %d]
[%s]Different RAT type(%d) => Send LTE_RRC_RESEL_TO_EHRPD_IND
[%s]Candidate cell list is exhausted
[%s]Candidate cell list is exhausted
[%s]No valid candidate for HRPD => NOT send LTE_RRC_RESEL_TO_EHRPD_IND
[%s]Trigger IRAT cell reselection to 1XRTT
[%s]C candi [%d %d]
[%s]Different RAT type(%d) => Send LTE_RRC_RESEL_TO_1XRTT_IND
[%s]Candidate cell list is exhausted
[%s]Candidate cell list is exhausted
[%s]No valid candidate for 1xRTT => NOT send LTE_RRC_RESEL_TO_1XRTT_IND
[%s]Trigger IRAT cell reselection to NR
[%s]N candi [%d %d %d]
[%s]Different RAT type(%d) => Send LTE_RRC_MOB_CMD_TO_IRAT_REQ with NR
[%s]Candidate cell list is exhausted
[%s]Candidate cell list is exhausted
[%s]No valid candidate for NR => NOT send LTE_RRC_MOB_CMD_TO_IRAT_REQ with NR
[%s]IRAT CR: Idx(%d) Rat(%d)
[%s]Invalid CurrentIratCandiIdx
[%s]Trigger IRAT cell reselection to EUTRAN
[%s]LTE cell should not be included in CandiList
[%s]Invalid RAT type (No more candidate cell) => Send CELL RESEL REQ to LteRrm
[%s]Candidate Cell's RAT type: Garbage RAT type(%d)
[%s]Send LTE_RRC_REDIRECT_TO_GSM_IND band_indicator %d
[%s]With Cell Info List Num(%d)
[%s]Geran First Cell Info:
[%s]Send LTE_RRC_REDIRECT_TO_UMTS_IND
[%s]With Cell Info List Num(%d)
[%s]UMTS FDD First Cell Info:
[%s]With Cell Info List Num(%d)
[%s]UMTS TDD First Cell Info:
[%s]With Cell Info List
[%s]LTERRC_MALLOC_FAIL : FILE:%s LINE:%d FUNC:%s
[%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
[%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
[%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
[%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
[%s]Process LTERRC_INT_TRANSITION_TO_SUSP with cause(%d) LteActive(%d)
[%s]CLEAR OPFLAG :(%s-%s)
[%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
[%s]Invalid Transition Cause(%d)
[%s]PLMN_LIST_REQ received while LastTransitionCause(%d) LteActive(%d)
[%s]MsgHdlrCsgListReq :: Invalid request. from_other_rat flag is set by FALSE. ignore this message.
[%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
[%s]Process LTE_RRC_RESUME_RAT_REQ
[%s]SET OPFLAG :(%s-%s)
[%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
[%s]Suspend request is received after resumed
[%s]LTE_RRC_SUSPEND_RAT_REQ received in suspend state.. Go to Suspend again
[%s]CLEAR OPFLAG :(%s-%s)
[%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
[%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
[%s]Process LTE_RRC_RESEL_TO_UMTS_RSP Result(%d) Tbarred(%d)
[%s]Resel to UMTS: Success
[%s]Resel to UMTS Failure. Status(%d), T_bar(%d), Csg_id(%d),
[%s]and PLMN_ID(%d %d %d %d %d %d)
[%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
[%s]Process LTE_RRC_RESEL_TO_GSM_RSP
[%s]Resel to GSM: Success
[%s]Resel to GSM: Failure => Check next candidate cell
[%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
[%s]Process LTE_RRC_RESEL_TO_EHRPD_RSP
[%s]Resel to HRPD: Success
[%s]Resel to HRPD: Failure => Check next candidate cell
[%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
[%s]Process LTE_RRC_RESEL_TO_1XRTT_RSP
[%s]Resel to 1XRTT: Success
[%s]Resel to 1XRTT: Failure => Check next candidate cell
[%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
[%s]Process LTE_REDIRECT_TO_UMTS_RSP
[%s]Redirect to UMTS: Success => Remain in SUSP
[%s]Redirect to UMTS: Failure => Trigger LTE cell selection
[%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
[%s]Process LTE_REDIRECT_TO_GSM_RSP
[%s]Redirect to GSM: Success => Remain in SUSP
[%s]Redirect to GSM: Failure => Trigger LTE cell selection
[%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
[%s]Process LTE_REDIRECT_TO_EHRPD_RSP
[%s]Redirect to HRPD: Success => Remain in SUSP
[%s]Redirect to HRPD: Failure => Trigger LTE cell selection
[%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
[%s]Process LTE_RRC_REDIRECT_TO_1XRTT_RSP
[%s]Redirect to 1XRTT: Success => Remain in SUSP
[%s]Redirect to 1XRTT: Failure => Trigger LTE cell selection
[%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
[%s]Process Mob Cmd To Irat, MobilityType(%d)
[%s]Redirect to NR: Success => Remain in SUSP
[%s]Redirect to NR: Failure => Trigger LTE cell selection
[%s]Process LTE_RRC_MOB_CMD_TO_IRAT_RSP with NR
[%s]Resel to NR: Success
[%s]Resel to NR: Failure => Check next candidate cell
[%s]Abnormal mob type !! -> ignore
[%s]Invalid AbortCause %s
[%s]SuspendMgr AbortCause: %s
[%s]InitMgr Mode LTERRCINIT_INTERRAT_MODE But Acc is not LTERRCACC_WAIT_CELLSELECT_REEST
[%s] %s subtate - Cur :: %s , Prev :: %s
[%s][LTERRC_ACC] RRC is in Establish procedure.
[%s][LTERRC_ACC] RRC is in Establish procedure.
[%s][LTERRC_ACC] RRC is in Reestablish procedure.
[%s][LTERRC_ACC] Wrong access substate.
[%s]Send LTERRC_INT_TRANSITION_TO_SUSP
[%s][LTERRC_CONN] Receive LTE_RRC_TERMINATE_REQ at abnormal substate :: ignore LTE_RRC_TERMINATE_REQ
[%s]Send LTERRC_INT_TRANSITION_TO_INIT
[%s]LTE_RRC_TERMINATE_REQ Rxed in Invalid State
[%s]Invalid IratMode
[%s]LTE_RRC_RESUME_RAT_REQ rxed in invalid state(%d)
[%s]CLEAR OPFLAG :(%s-%s)
[%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
[%s]N2L Redirection Fail but forced success
[%s]MEM ALLOC FAIL!!!
