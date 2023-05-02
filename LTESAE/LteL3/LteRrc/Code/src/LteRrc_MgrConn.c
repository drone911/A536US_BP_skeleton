[%s]Send LTE_RRC_EST_REJ :: Cause[ LTE_RRC_CONNECTION_RELEASED ]
[%s]LTE_RRC_DATA_CNF NasTransactionId[ %d ], Result[ %s ]
[%s]TauEstFail for cell(%d, %d)
[%s]TauEstFailCount(%d)
[%s]fail to Send confirm to NAS (%s)
[%s][SendLteRbInfoToNr]+SRB RbId[%d] LcId[%d] EpsId[%d] RbMode[%d]
[%s][SendLteRbInfoToNr] SRB PDCP[%s] STATUS[%s] State[%s] Rbtype[%s]
[%s][SendLteRbInfoToNr]+DRB RbId[%d] LcId[%d] EpsId[%d] RbMode[%d]
[%s][SendLteRbInfoToNr] DRB PDCP[%s] STATUS[%s] State[%s] Rbtype[%s] KeyToUse[%d]
[%s][SendLteRbInfoToNr] pdcp type(%d) N2L or L2N Rbid(%d)
[%s][ENDC] RbInfoToNr SetNrPdcpConfigNeeded(%d) L2RbChangdflag(%d) DbNsaScgState(%d) SecCellGrpConfigPresent(%d) IsNsaScgSetup(%d)
[%s][ENDC BlackList] Send ENDC_NSA_BLACKLIST_IND (%d) to NR
[%s]EndcStatusInd will not be sent(%d)(%d)
[%s][ENDC BlackList] lteIdx:%d, nrIdx:%d
[%s][ENDC BlackList] => Send to RRM (earfcn:%d pcid:%d / arfcn:%d pcid:%d / dur:%d)
[%s][ENDC BlackList] => already time passed (earfcn:%d pcid:%d / arfcn:%d pcid:%d / end:%d curr:%d)
[%s][ENDC] LteRrcConn_SendRrmEndcStatusInd status(%d)
[%s][ENDC] LteRrcConn_SendRreStateInd RreStatus(%d) RevertReq(%d) ScgConfig(%d) EndcConfPresent(%d)
[%s][ENDC] NrNsaMode(%d) EndcConfPresent(%d) NsaState(%d) NeedUeModeRsp(%d)
[%s][ENDC] Full Config, Change to Release and Setup ENDC
[%s][ENDC] LTE RRC DB Release without RB due to full config
[%s]MEM ALLOC FAIL!!!
[%s]SET OPFLAG :(%s-%s)
[%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
[%s][LTE RRC SRRC] [ScgSetup timer] LTERRC_T_DSDS_SIGNALLING remain : %d ms
[%s][ReleaseEndcScg] already sent EndcStatusInd[%d]
[%s][IratCellTiming] DbNsaScgState(%d) SecCellGrpConfigPresent(%d)
[%s]MEM ALLOC FAIL!!!
[%s]SET OPFLAG :(%s-%s)
[%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
[%s]CLEAR OPFLAG :(%s-%s)
[%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
[%s][LteRrcConn_SendReestablishReq] ScgState(%d) LastEndcSetupType(%d)
[%s][LteRrcConn_SendReestablishReq] LteRrcNrPdcpUsed(%d)
[%s]MEM ALLOC FAIL!!!
[%s]MEM ALLOC FAIL!!!
[%s]IRAT HO SEC. MobilityType(%d)
[%s]PRESENT_DB_MOB_CMD_FROM_IRAT Error // MobCmdType(%d), MobCmdRst(%d)
[%s]MobCmdHoType Error // MobCmdType(%d), MobCmdRst(%d)
[%s]Send LTE_RRC_MOB_CMD_FROM_IRAT_RSP to EMM : MobCmdType(%d), MobCmdRst(%d)
[%s]SRB2 is suspended => Pending this UIT msg from NAS
[%s]SRB2 setup and wait active until RRC reconfiguration complete
[%s]SRB2 is suspended => Pending this UIT msg from CDMA module
[%s]Send LTE_PDCP_DATA_REQ for UIT from CDMA module
[%s]SRB2 is inactive => Fail to send this UIT msg from CDMA module
[%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
[%s]DRB(%d) (UL %d / DL %d)
[%s]nonCriticalExtension_present : NOP
[%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
[%s]Array OverFlow Index[%d] > Maxvalue[%d], File[%s], Line[%d]
[%s]Array OverFlow Index[%d] > Maxvalue[%d], File[%s], Line[%d]
[%s]: CounterValue Num RB %d,
[%s]NrPdcp counter request sent to Nr. wait cnf msg
[%s]no_of_rbs(%d)
[%s]: CounterValue RB_ID %d, UL %d ,DL %d,
[%s]DrbCountInfo overflow..1
[%s]DrbCountInfo overflow..2
[%s]COUNT Nrpdcp is different: UL(%d, %d) / DL(%d, %d)
[%s]COUNT Ltepdcp is different: UL(%d, %d) / DL(%d, %d)
[%s]NOT established DRB in CC msg: DRB ID(%d)
[%s]DrbCountInfo overflow...3
[%s]UE DRB ID(%d) is not included in CC msg
[%s]Send CounterCheckResponse msg with %d DRBs
[%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
[%s]LtePdcp counter request sent to L2. wait cnf msg
[%s]: CounterValue RB_ID %d, UL %d ,DL %d,
[%s]DrbCountInfo overflow..1
[%s]DrbCountInfo overflow..2
[%s]NR PDCP COUNT is different: UL(%d, %d) / DL(%d, %d)
[%s]checked drb id(%d)
[%s]LTE PDCP COUNT is different: UL(%d, %d) / DL(%d, %d)
[%s]checked drb id(%d)
[%s]NOT established DRB in CC msg: DRB ID(%d)
[%s]DrbCountInfo overflow...3
[%s]UE DRB(LTE pdcp) ID(%d) is not included in CC msg
[%s]UE DRB(NR pdcp) ID(%d) is not included in CC msg
[%s]Send CounterCheckResponse msg with %d DRBs
[%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
[%s]LTE use NR pdcp set(%d)
[%s]LteRrcConn_LeavingConn() with cause(%d)
[%s]IsUeCapaEnquiryPending(%d)
[%s]SET OPFLAG :(%s-%s)
[%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
[%s]RelInd not sent now(cause:%d)
[%s]CLEAR OPFLAG :(%s-%s)
[%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
[%s]CSFB Call Status(%d)
[%s]SET OPFLAG :(%s-%s)
[%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
[%s]CLEAR OPFLAG :(%s-ALL)
[%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
[%s]SET OPFLAG :(%s-%s)
[%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
[%s]SET OPFLAG :(%s-%s)
[%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
[%s]CLEAR OPFLAG :(%s-%s)
[%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
[%s]SET OPFLAG :(%s-%s)
[%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
[%s]Unknown Revert Proc Cause
[%s]RRC Conn Reconfig Fail(%d)
[%s]CLEAR OPFLAG :(%s-%s)
[%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
[%s]CLEAR OPFLAG :(%s-%s)
[%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
[%s]Redirect to NR is ignored
[%s]RRC CONN REL msg with Redirect info
T310 Out Of Sync !!!
T312 Expire !!!
Reconfiguration Failure !!!
T304 Handover Failure !!!
[%s]Local Release Triggered
[%s]SendReestablishReq fail(%s)
[%s]less than 1s after the detection of radio link failure.
[%s][LteRrcConn_ProcSecurityConfig] KeyIndicator is TRUE. Derive KeNB with New Kasme
[%s][LteRrcConn_ProcSecurityConfig] In case of IRAT-HO. Derive KeNB with New Kasme
[%s][LteRrcConn_ProcSecurityConfig] No KeyIndicator. update KeNB with NH
[%s][LteRrcConn_ProcSecurityConfig] Null integrity algo. Send As Sec config without derive KrrcInt
[%s][LteRrcConn_ProcSecurityConfig] Null Cipher algo. Send As Sec config without derive Enc key
[%s]Start HO_TO_GSM
[%s]Start HO_TO_UMTS
[%s]Start CCO_TO_GSM
[%s]Start HO_TO_1XRTT
[%s]Start HO_TO_HRPD
[%s]Start REDIRECT_TO_HRPD
[%s]Start CONCURRENT_HO_TO_CDMA
[%s]Start CONCURRENT_REDIRECT_TO_CDMA
[%s]Start LTE_RRC_MOB_CMD_CSFB_ONLY_TO_CDMA
[%s]Start LTE_RRC_MOB_CMD_HO_TO_NR
[%s]MobilityType[%d] Error
[%s][U2L PSHO] T304 Expiry during MOB_CMD_FROM_IRAT
[%s]Invalid MobCmdFromIRatFailMode:%d
[%s]N2L HO Fail but forced success
[%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
[%s]ReestablishFailure: %s
[%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
[%s]|UE <- eNB| MSG14 : RRC Connection Reconfiguration Message
[%s][NsaRecovery] Check ReconfigWithNrRelease(%d) Last(%d/%d) CurAcq(%d/%d)
[%s][NsaRecovery] Check Cnt(%d) diffCell(%d)
[%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
[%s]| First Reconfig Msg after Re-establish
[%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
[%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
[%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
[%s]CLEAR OPFLAG :(%s-ALL)
[%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
[%s]CLEAR OPFLAG :(%s-%s)
[%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
[%s]CLEAR OPFLAG :(%s-%s)
[%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
[%s]CLEAR OPFLAG :(%s-ALL)
[%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
[%s]Abort Reconfig procedure
[%s]Curr DB Config Cnf Fail => Wait DB Revert Confirm
[%s]CLEAR OPFLAG :(%s-%s)
[%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
[%s][PreReconfig] legacy NR PDCP <-> NR PDCP Rb type change!!
[%s][Reconfig] Config DB Update Success !!!
[%s]SET OPFLAG :(%s-%s)
[%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
[%s]CLEAR OPFLAG :(%s-ALL)
[%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
[%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
[%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
[%s][NsaRecovery] Check ReconfigWithNrRelease(%d) DbNsaScgState(%d) Last(%d/%d) HoSrc(%d/%d)
[%s][NsaRecovery] Check Cnt(%d) diffCell(%d)
[%s]CLEAR OPFLAG :(%s-%s)
[%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
[%s][CheckEndcComb] NR PSCell Band(%d)
[%s][CheckEndcComb] NR SCell Band(%d)
[%s][CheckEndcComb] Check BandComb[%d %d %d %d %d %d]
[%s][CheckEndcComb] Target Band(%d) does not support ENDC Comb
[%s]EndcConfSent(%d) EndcConfSentForReconfig(%d) ScgDbDoNotRelease(%d)
[%s]less than 1s after the last transmission of an MBMSInterestIndication message.
[%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
[%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
[%s]Not set PDCP config (%d -> %d)
[%s]CLEAR OPFLAG :(%s-%s)
[%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
[%s]Reconfig Confirm Fail!!
[%s]CLEAR OPFLAG :(%s-ALL)
[%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
[%s]CLEAR OPFLAG :(%s-ALL)
[%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
[%s]Abort Reconfig procedure
[%s]HO Fail => Wait DB Revert Confirm
[%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
[%s]HO_RACH_STATUS_IND with Fail(continue Rach till T304 Expiry)
[%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
[%s][RachStatusInd] Update C-RNTI for handover :: [0x%x]
[%s]SET OPFLAG :(%s-%s)
[%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
[%s][NewCell] LTE HO (CellCategory:%d)
[%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
[%s]U2L PSHO is not supported yet!
[%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
[%s]EN-DC Config will be delayed after cell switch cnf
[%s]EndcConfSent(%d) EndcConfSentForReconfig(%d) ScgDbDoNotRelease(%d)
[%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
[%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
[%s]HO_RACH_STATUS_IND with Fail(continue Rach till T304 Expiry)
[%s]CLEAR OPFLAG :(%s-%s)
[%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
[%s][RachStatusInd] Update C-RNTI for handover :: [0x%x]
[%s]SET OPFLAG :(%s-%s)
[%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
[%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
[%s][NewCell] HO from IRAT (CellCategory:%d)
[%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
[%s]CLEAR OPFLAG :(%s-%s)
[%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
[%s]CLEAR OPFLAG :(%s-%s)
[%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
[%s]Full Config Cnf Msg ID Fail (%d)
[%s]Connection Substate Error (%d)
[%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
[%s]CLEAR OPFLAG :(%s-%s)
[%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
[%s]CLEAR OPFLAG :(%s-%s)
[%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
[%s]CLEAR OPFLAG :(%s-%s)
[%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
[%s]CLEAR OPFLAG :(%s-%s)
[%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
[%s]MacResetCnf Msg ID Fail (%d)
[%s]LteRrcConn_VerifyConfigCnf :: LTERRC_NULL_PTR_ARGUMENT
[%s]CLEAR OPFLAG :(%s-%s)
[%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
[%s]LTE_CPHY_TX_CONFIG_CNF FAIL
[%s]LteRrcConn_VerifyConfigCnf :: LTERRC_NULL_PTR_ARGUMENT
[%s]CLEAR OPFLAG :(%s-%s)
[%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
[%s]LTE_CPHY_RX_CONFIG_CNF FAIL
[%s]LteRrcConn_VerifyConfigCnf :: LTERRC_NULL_PTR_ARGUMENT
[%s]CLEAR OPFLAG :(%s-%s)
[%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
[%s]WAIT_LTE_CPHY_RRM_CONFIG_CNF FAIL
[%s]LteRrcConn_VerifyConfigCnf :: LTERRC_NULL_PTR_ARGUMENT
[%s]CLEAR OPFLAG :(%s-%s)
[%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
[%s]Array OverFlow Index[%d] > Maxvalue[%d], File[%s], Line[%d]
[%s]LTE_CPDCP_UL_CONFIG_CNF (RB[%d] Config) FAIL
[%s]LTE_CPDCP_UL_CONFIG_CNF (bValidData==FALSE) FAIL
[%s]LteRrcConn_VerifyConfigCnf :: LTERRC_NULL_PTR_ARGUMENT
[%s]CLEAR OPFLAG :(%s-%s)
[%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
[%s]Array OverFlow Index[%d] > Maxvalue[%d], File[%s], Line[%d]
[%s]LTE_CPDCP_DL_CONFIG_CNF (RB[%d] Config) FAIL
[%s]LTE_CPDCP_DL_CONFIG_CNF (bValidData==FALSE) FAIL
[%s]LteRrcConn_VerifyConfigCnf :: LTERRC_NULL_PTR_ARGUMENT
[%s]CLEAR OPFLAG :(%s-%s)
[%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
[%s]LTE_CRLC_UL_CONFIG_CNF FAIL
[%s]LteRrcConn_VerifyConfigCnf :: LTERRC_NULL_PTR_ARGUMENT
[%s]CLEAR OPFLAG :(%s-%s)
[%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
[%s]LTE_CRLC_DL_CONFIG_CNF FAIL
[%s]LteRrcConn_VerifyConfigCnf :: LTERRC_NULL_PTR_ARGUMENT
[%s]CLEAR OPFLAG :(%s-%s)
[%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
[%s]LTE_CMAC_UL_CONFIG_CNF FAIL(rach:%d/ulsch:%d)
[%s]LteRrcConn_VerifyConfigCnf :: LTERRC_NULL_PTR_ARGUMENT
[%s]CLEAR OPFLAG :(%s-%s)
[%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
[%s]LTE_CMAC_DL_CONFIG_CNF FAIL
[%s]LteRrcConn_VerifyConfigCnf :: LTERRC_NULL_PTR_ARGUMENT
[%s]CLEAR OPFLAG :(%s-%s)
[%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
[%s]LTE_CPDCP_UL_SECURITY_CONFIG_CNF FAIL
[%s]LteRrcConn_VerifyConfigCnf :: LTERRC_NULL_PTR_ARGUMENT
[%s]CLEAR OPFLAG :(%s-%s)
[%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
[%s]LTE_CPDCP_DL_SECURITY_CONFIG_CNF FAIL
[%s]LteRrcConn_VerifyConfigCnf :: LTERRC_NULL_PTR_ARGUMENT
[%s]CLEAR OPFLAG :(%s-%s)
[%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
[%s]SET OPFLAG :(%s-%s)
[%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
[%s]LTE_CPHY_MEAS_CONF_CNF FAIL
[%s]LteRrcConn_VerifyConfigCnf :: LTERRC_NULL_PTR_ARGUMENT
[%s]CLEAR OPFLAG :(%s-%s)
[%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
[%s]WAIT_LTE_CPHY_CSG_PROXIMITY_MEAS_CNF is not set
[%s]LteRrcConn_VerifyConfigCnf :: LTERRC_NULL_PTR_ARGUMENT
[%s]CLEAR OPFLAG :(%s-%s)
[%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
[%s]WAIT_LTE_CPHY_CSG_PROXIMITY_STOP_MEAS_CNF is not set
[%s]LteRrcConn_VerifyConfigCnf :: LTERRC_NULL_PTR_ARGUMENT
[%s]CLEAR OPFLAG :(%s-%s)
[%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
[%s]HO_SERVINGCELL_SWITCH_CNF switch_outcome : fail
[%s]UPDATE_ENDC_CONFIG(%d) EndcConfSent(%d) EndcConfSentForReconfig(%d) LteRrcNrPdcpUsed(%d)
[%s]LteRrcConn_VerifyConfigCnf :: LTERRC_NULL_PTR_ARGUMENT
[%s]CLEAR OPFLAG :(%s-%s)
[%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
[%s]LteRrcConn_VerifyConfigCnf :: LTERRC_NULL_PTR_ARGUMENT
[%s]CLEAR OPFLAG :(%s-%s)
[%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
[%s]LteRrcConn_VerifyConfigCnf :: LTERRC_NULL_PTR_ARGUMENT
[%s]CLEAR OPFLAG :(%s-%s)
[%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
[%s]LteRrcConn_VerifyConfigCnf :: LTERRC_NULL_PTR_ARGUMENT
[%s]CLEAR OPFLAG :(%s-%s)
[%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
[%s]LteRrcConn_VerifyConfigCnf :: LTERRC_NULL_PTR_ARGUMENT
[%s]CLEAR OPFLAG :(%s-%s)
[%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
[%s]LteRrcConn_VerifyConfigCnf :: LTERRC_NULL_PTR_ARGUMENT
[%s]PHY Config Cnf Msg ID Fail (%d)
[%s]LteRrcConn_VerifyConfigCnf :: LTERRC_NULL_PTR_ARGUMENT
[%s]MAC Config Cnf Msg ID Fail (%d)
[%s]LteRrcConn_VerifyConfigCnf :: LTERRC_NULL_PTR_ARGUMENT
[%s]RLC Config Cnf Msg ID Fail (%d)
[%s]LteRrcConn_VerifyConfigCnf :: LTERRC_NULL_PTR_ARGUMENT
[%s]PDCP Config Cnf Msg ID Fail (%d)
[%s]LteRrcConn_VerifyConfigCnf :: LTERRC_NULL_PTR_ARGUMENT
[%s]ConfigCnf Msg ID Fail (%d)
[%s]Verification Config Cnf Fail for Msg ID(%d)
[%s]ConfigCnf Fail
[%s]CONN_PROC_MOB_CMD_FROM_IRAT LowLayer Config Failure !!!
[%s]SET OPFLAG :(%s-%s)
[%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
[%s]SIB2 PHY CONFIG COMMON Failure => Reestablish triggered(Imp)
[%s]++ All revert DB configs are confirmed (%d) ++
[%s]MIB RADIO RSC DEDI:%d
[%s]SET OPFLAG :(%s-%s)
[%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
[%s]MIB Phy Config Dedi Update Fail
[%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
[%s]Connection Substate Error (%d)
[%s]RRC wait db update complete msg firstly
[%s]Receive RRCConnectionRelease Msg
[%s]SET OPFLAG :(%s-%s)
[%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
[%s]OP Flag : RRC_CONFDB_UPDATE_SUCCESS will be set during SEC, Reconfig, MobCmd(FromI-RAT)(HO) Proc.
[%s]LTERRC_T_SMC_RECOVERY Timer Expiry
[%s]SET OPFLAG :(%s-%s)
[%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
[%s][SecurityModeCommand] Invalid state for RRC SMC
[%s][SecurityModeCommand] Invalid KSIasme
[%s][SecurityModeCommand] Null integrity algo. But cipher algo is not null algo.
[%s][SecurityModeCommand] Integrity Algorithm :: %d
[%s][SecurityModeCommand] Null integrity algo. Send As verify integrity without derive KrrcInt
[%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
[%s][SecurityModeCommand] Cipher Algorithm :: %d
[%s][SecurityModeCommand] Null Cipher algo. Send As security config without derive Enc key
[%s]SET OPFLAG :(%s-%s)
[%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
[%s]60ms have been passed since UE received CONN REL msg
[%s][NrSaBkgSrch] already redirection started
[%s][NrSaBkgSrch] return to NR
[%s]Receive SIB1 or other SIs in RRC_CONN state.
[%s]T304 Timer Expiry
[%s]N2L HO Fail but forced success
[%s]LTE_RRC_MOB_CMD_HO_FROM_IRAT Fail
[%s]T310 Timer Expiry
[%s]T312 Timer Expiry
[%s]LTERRC_T_RB_ACTIVATE Timer Expiry
[%s]HO is in progress => Pending SIB Validity Tmr Expiry event
[%s]IsUeCapaEnquiryPending(%d) UE capa will not be sent
[%s]UeMode [%d] is invalid
[%s]Wait UE capa cnf: IratContainerCnfStatus(%x)
[%s]Wait NR UE capa cnf: IratContainerCnfStatus(%x)
[%s]Cnf ENDC transId(%d) ENDC Enquiry transId(%d)
[%s]Wait ENDC transId(%d)
[%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
[%s]Already IsUeCapaEnquiryPending(%d) Pending Msg
[%s]CSFB Call Status(%d)
[%s][MsgHdlrRrcDataReq] Send UE_STATE_NTF in CONN STATE for Ue Specifix DRC
[%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
[%s]DIT including DedicatedInfoNAS => Send LTE_RRC_DATA_IND
[%s]DIT including DedicatedInfo1xRTT => Send LTE_RRC_DATA_IND
[%s]DIT including DedicatedInfoHRPD => Send LTE_RRC_DATA_IND
[%s]For other stack MPLMN do as normal
[%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
[%s]L2X IRAT operation is ongoing
[%s]RelTime(%d) Tau(%d)
[%s][NrSaBkgSrch] QRB to NR
[%s]NR redirection with QRB failed. UeMode(%d)
[%s]SAEL3 reqeust local release due to LTERRC_REL_NO_SIG.!
[%s]Local release from nonNSA to NSA.
[%s]Out Of Sync cause: %d, IMBALANCE RRE Start !!!!!
[%s][MsgHdlrSyncInd] Remove LastGlobalCellId to receive SIB8/SIB16 again
[%s][MsgHdlrSyncInd] OUT of Sync Ind Ignore: T304 or T_HO_CFG_WAIT is running
[%s]Out Of Sync cause: %d, RRE Start!
[%s]MR Ignore during HO Proc
[%s]MR Ignore during Re-establish Proc
[%s]CLEAR OPFLAG :(%s-%s)
[%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
[%s]Wrong msg id[%d]
[%s]CLEAR OPFLAG :(%s-%s)
[%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
[%s]LTE_RACH_FAILURE but T304 is running. waitting timer expiry
[%s]Receive LTE_CMAC_RACH_STATUS_IND :: LTE_RACH_FAILURE
RACH Failure !!!
[%s]LTE_CPHY_PUCCH_CQI_RELEASE_REQ ignore.
[%s]LTE_CMAC_SRS_RELEASE_IND ignored, invalid STAG[%d]
[%s]Not Supported under Rel.11
[%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
[%s]DB update fail(%s)
[%s]HO to NR fail due to SA disable Mode
[%s][ENDC] Need to release SCG
[%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
[%s]After receiving MIB in HO, changed AntennaPortNumber will change default TransMode in default DB
[%s]Update PHY UL Dedi Config (AntPortNum:%d, Trans Mode:%d)
[%s]Transmission Mode not changed during HO.
[%s]AcqIndParam : is_serving_cell=%d, PCI:%d, Pbch_ant_port_num=%d
[%s]StaticEssAcqIndInfo : ant_port_num=%d,IsDefaultAntennaConf=%d
[%s][MsgHdlrSuspendRatReq] Wrong substate. Pending this msg
[%s]No response msgs are received in connected state Conn(0x%x) Config(0x%x)
[%s][IratCellTiming] SetIratCellTimingInfo: arfcn[%d] cell_id[%d] ssbCnt[%d]
[%s] ssbIndex(%d) timingOffset(%d) rsrp(%d,%d)
[%s] rsrq(%d,%d) rssinr(%d,%d) rssi(%d,%d)
[%s] AgcGainIdex(%d,%d) HalfFrameNumber(%d)
[%s][SetIratCellTimingInfo] num_of_neigh_cells[%d] NcellCnt[%d]
[%s][NrAsCfgStartInd] Drb(%d) UsedIMSs
[%s]LteRrcConn_SendEndcHoInd !
[%s]CLEAR OPFLAG :(%s-%s)
[%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
[%s]CLEAR OPFLAG :(%s-%s)
[%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
[%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
[%s]no matched scell index(%d)
[%s]Scell Band(%d) removal due to NR setup
[%s][MsgHdlrDbUpdateCompleteInd] EndcConfReqMsgSent(%d) ScgConfigReleaseNR(%d)
[%s][MsgHdlrDbUpdateCompleteInd] NR SRB3 HO case
[%s][LteRrcConn_SendDbRevertIndication] Do not sent(%d)(%d)(%d)
[%s][LteRrcConn_SendDbRevertIndication] Current Rbinfo and DbRevert Rbinfo are same drbid(%d)
[%s][LteRrcConn_SendDbRevertIndication] DbRevertNeeded(%d) L2RbChangdflag(%d) bLteL2ConfigDone(%d)
[%s]CLEAR OPFLAG :(%s-%s)
[%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
[%s]CLEAR OPFLAG :(%s-%s)
[%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
[%s][LteRrcConn_SendDbRevertIndication] Send L2 RbChangeInd !! RbInfoToNr LteRrcNrPdcpUsed(%d) isPending(%d) RevertLteRrcNrPdcpUsed(%d)
[%s]DrbId(%d) ChangeReverted(%d)
[%s]NrPdcpChangeReverted(%d)
[%s]EndcConfPresent(%d)
[%s]WatchDogMode(%d) NsaRecoveryMode(%d)
[%s]NrRecoveryEnabled(%d) NsaRecoveryMode(%d)
[%s][LTE RRC SRRC] grant request : NrState(%s)
[%s][LTE RRC SRRC] grant update : (NrReqProcd:%d, NrState:%s)
[%s][LTE RRC SRRC] NR SIG Bit Clear : (B:%d, M:%d)
[%s][LTE RRC SRRC] [ScgSetup timer] start
[%s][LTE RRC SRRC] [ScgSetup timer] LTERRC_T_DSDS_SIGNALLING TimeDiff : %d ms
[%s][LTE RRC SRRC] AS Signalling Ongoing [%s] StackId(%d)
[%s][LTE RRC SRRC] AS Signalling Ongoing [%s] StackId(%d)
[%s][LTE RRC SRRC] ignored (M:%d)
[%s][NsaRecovery] Check DbNsaScgState(%d) SecCellGrpConfigPresent(%d) ReconfigWithNrRelease(%d) volteStatus(%d) LowpwrAction(0x%x)
[%s][NsaRecovery] Only check NSA recovery when LTERRCCONN_WAIT_MSG.
[%s][NsaRecovery] NR MO exist. id(%d)
[%s][NsaRecovery] EndcSupport(%d) EndcAvail(%d)
[%s][NsaRecovery] pEndcInfo is NULL
[%s][NsaRecovery] HO target Earfcn(%d) PCI(%d) EndcSupport(%d) EndcAvail(%d)
[%s][NsaRecovery] HO target pEndcInfo is NULL
[%s][NsaRecovery] HO target pCell is NULL
[%s][NsaRecovery] HO source Earfcn(%d) PCI(%d) EndcSupport(%d) EndcAvail(%d)
[%s][NsaRecovery] HO source pEndcInfo is NULL
[%s][NsaRecovery] HO source pCell is NULL
[%s][NsaRecovery] Timer expiry. DbNsaScgState(%d) Cnt(%d)
[%s][NsaRecovery] TimeStamp update(%d)
[%s][NsaRecovery] Trigger. LastFreq(%d) LastPci(%d) Cnt(%d)
[%s]Mui Compare SendMui %d,L2AckMui %d,NasTransactionId %d
[%s]TauEstFailCount(%d)
[%s]Attach complete L2 ack received.. Enable Delayed Meas Config..
[%s]CLEAR OPFLAG :(%s-%s)
[%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
[%s][MUI HO]Rx HO Complete L2Ack
[%s][MUI HO]Send Pended Cell Ind to NAS
[%s]CLEAR OPFLAG :(%s-%s)
[%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
[%s][MUI]HO ENDC configComplete
[%s][MUI]ENDC configurationComplete
[%s][MUI MR]Rx Meas Report L2Ack
[%s][MUI Report] Rx Re-Est L2Ack
[%s][MUI Report] Rx UECapaInformation L2Ack
[%s][LTE RRC SRRC] NR SIG Bit Clear : (B:%d, M:%d)
[%s][LTE RRC SRRC] NRProtectionStatus timer running
[%s][LTE RRC SRRC] ongoing NR AS signaling
[%s][LTE RRC SRRC] [ScgSetup timer] start
[%s][LTE RRC SRRC] [ScgSetup timer] LTERRC_T_DSDS_SIGNALLING TimeDiff : %d ms
[%s][LTE RRC SRRC] Recieved L2 Ack. Clearing AS Signalling Flag...
[%s][LTE RRC SRRC] AS Signalling Ongoing [%s] StackId(%d)
[%s][LTE RRC SRRC] Recieved L2 Ack For Re Establishment Request/ NAS message
[%s]No Action PCT Case :: Ignore LTE_PDCP_DORMANT_IND
[%s]No Action State :: Ignore LTE_PDCP_DORMANT_IND
[%s]TAU_By_DormantInd_enable : %d
[%s]No Action Substate :: Ignore LTE_PDCP_DORMANT_IND
[%s]LteRrcConf_ProcRadioResourceConfigCommon Fail => Reestablish Start
[%s]LTE_CPHY_MEAS_CONF_CNF received for Re-establish or Delayed Meas Conf
[%s]LTE_CPHY_MEAS_CONF_CNF received in Wait Msg State
[%s]LTE_CPHY_MEAS_CONF_CNF received in Invalid SubState(%d)
[%s]CLEAR OPFLAG :(%s-%s)
[%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
[%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
[%s]MobCmdToIratRsp MobilityType(%d), Result(%d)
[%s]QRB Trigger after IRAT RSP
[%s]MobCmdToIratAbortRsp status(%d)
[%s]RelTime(%d) Tau(%d)
[%s]MplmnStatus(%d) MplmnRelTriggered(%d)
[%s]LocalRelRetry(%d) LocalRelTriggeredCount(%d)
[%s]CSFB Call Status(%d)
[%s]CLEAR OPFLAG :(%s-%s)
[%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
[%s]CLEAR OPFLAG :(%s-%s)
[%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
[%s]CLEAR OPFLAG :(%s-%s)
[%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
[%s]CLEAR OPFLAG :(%s-%s)
[%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
[%s]Wrong msg id[%d]
[%s]Rel Req for MPLMN.. Ignore Rel req
[%s]Rel Req for MPLMN.. Ignore Rel req
[%s]Local release requested during Rel delay state
[%s]Local release timer expiry ignore.
[%s]Local release timer expiry ignore.
[%s]Current Conn established for TAU
[%s]Too early release for MT Call(%d)
[%s]pending QRB(%s) under IRAT
[%s]Send LTE_RRC_LB_DRB_IND
[%s][Reconfig_HO] Security is not activated
[%s][Reconfig_HO] No SRB2 and DRBs are activated
[%s][Reconfig] Security is not activated
[%s]LTERRC_ALL_LOWLAYER_CONFIG_CONFIRM_SUCCESS
[%s] => Revert DB Config Success
[%s] => Current DB Config Success
[%s]LTERRC_LOWLAYER_CONFIG_CONFIRM_FAIL
[%s]MOB_CMD_FROM_IRAT Fail; No need to DB revert and just send Fail to Src RAT
[%s] => Revert DB Config Fail
[%s] => Current DB Config Fail, DB Revert should be start!
[%s]CLEAR OPFLAG :(%s-%s)
[%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
[%s]Send SMC Error IND to EMM
[%s][LteRrcConn_SendL2UlRbChangeInd]Drb id[%d] use Nr pdcp
[%s][LteRrcConn_SendL2UlRbChangeInd] send LTEL2_LTERRC_UL_RB_CHANGE_IND
[%s][LteRrcConn_SendL2DlRbChangeInd] Drb id[%d] use Nrpdcp
[%s][LteRrcConn_SendL2UlRbChangeInd] send LTEL2_LTERRC_DL_RB_CHANGE_IND
[%s][LteRrcConn_SendEndcCfgComplete] send ENDC_CFG_COMPLETE_IND
