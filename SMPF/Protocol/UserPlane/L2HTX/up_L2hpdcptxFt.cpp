[RbId:0x--] Received PDCP Status PDU
[DRbId:0x%02x] L2HPDCPTX_L2HRLCTX_PROC_STATUSPDU_CNF
[PDCP TX] L2HPDCPTX_L2_CONFIG_REQ
[PDCP TX][ERROR] L2HPDCPTX_L2_CONFIG_REQ : RbCfg is not present !!!
[PDCP TX][ERROR] L2HPDCPTX_L2_CONFIG_REQ : L2HPDCPTX_ProcRbConfig failed !!!
[PDCP TX] L2HPDCPTX_L2_COUNT_VALUE_REQ
[PDCP RX][ERROR] Sending L2_L2HPDCPTX_COUNT_VALUE_CNF Fail
[PDCP TX][ERROR] Config fail (RbId=%d IsSrb=%d) !!!
[PDCP TX] L2HPDCPTX_L2_LTE_UL_RBINFO_IND_T RbId=%d TX_NEXT=%d
[PDCP TX][ERROR] Pdcp Rbid=%d, Srb=%d
[PDCP TX][ERROR] Config fail (RbId=%d IsSrb=%d) !!!
[PDCP TX][ERROR] Pdcp Rbid=%d, Srb=%d
[PDCP TX][ERROR] Pdcp Rbid=%d, Srb=%d
[PDCP TX][ERROR] Pdcp Rbid=%d, Srb=%d
[PDCP TX] L2HPDCPTX_L2_PENDING_NEW_DATA_REQ
[PDCP TX][ERROR] Sending L2_L2HPDCPTX_PENDING_NEW_DATA_CNF_T Fail
[PDCP TX] L2HPDCPTX_L2_RB_CHANGE_IND - L2ConfigDone (%d), DbRevertNeeded (%d)
[PDCP TX] L2HPDCPTX_L2_BEARER_CHANGE_IND
[PDCP TX] L2HPDCPTX_L2_RELEASE_REQ
[PDCP TX] L2HPDCPTX_L2_RELEASE_REQ : Full release (PdcpChId=0x%02x)
[SDAP TX] SDAP_RELEASE_REQ : Release (LcId=0x%02x) !!!
[PDCP TX] SRB3 Full release fail
[PDCP TX] L2HPDCPTX_L2_REESTABLISH_REQ
[PDCP TX][ERROR] Sending L2_L2HPDCPTX_REESTABLISH_CNF Fail
[PDCP TX] L2HPDCPTX_L2_SECURITY_CONFIG_REQ
[PDCP TX][ERROR] Sending L2_L2HPDCPTX_SECURITY_CONFIG_CNF Fail
[PDCP TX][SRB] Rbid=%d, Len=%d, CnfRequired=%d, pduackId=%d, CellGroup=%d, triggerRach=%d, cipheringDisabled=%d
[PDCP TX][ERROR] Sending L2_L2HPDCPTX_TX_PAUSE_CNF Fail
[PDCP TX][ERROR] Sending L2_L2HPDCPTX_TX_RESUME_CNF Fail
[PDCP TX] L2HPDCPTX_SMT_INFORMATION_IND_Handler : CmdType %d
[PDCP TX] COMMON DB // Get DB addr from SM 0x%x
L2HPDCPTX_SMT_INFORMATION_IND_Handler //rMsgBody.pCnCommonDb == nullptr
[PDCP TX] RQosDisabled or not (%d)
[PDCP TX][HwDone] L2HPDCPTX_SendConfigCnfToL2 (DomainType=%d)
[ERROR] AllocMsg fail!
[PDCP TX][ERROR] Sending L2_L2HPDCPTX_CONFIG_CNF Fail
[PDCP TX] L2_L2HPDCPTX_CONFIG_CNF (DomainType=%d)
[PDCP TX][HwDone] L2HPDCPTX_SendReleaseCnfToL2 (DomainType=%d)
[ERROR] AllocMsg fail!
[PDCP TX][ERROR] Sending L2_L2HPDCPTX_RELEASE_CNF Fail
[PDCP TX] L2_L2HPDCPTX_RELEASE_CNF (DomainType=%d)
[PDCP TX][HwDone] L2HPDCPTX_SendRbChagneInfoToLte (DomainType=%d)
[ERROR] AllocMsg fail!
[PDCP TX][ERROR] Sending L2_L2HPDCPTX_RB_CHANGE_IND Fail
[PDCP TX] L2_L2HPDCPTX_RB_CHANGE_IND (DomainType=%d
[PDCP TX][ERROR] Release fail (DRB RbId=%d) !!!
[PDCP TX][ERROR] Release fail (No DRB RbId=%d) !!!
[PDCP TX][ERROR] Release fail (SRB RbId=%d) !!!
[PDCP TX][ERROR] Release fail (No SRB RbId=%d) !!!
[PDCP TX][ERROR] Release fail (DRB RbId=%d) !!!
[PDCP TX][ERROR] Config fail (DRB RbId=%d) !!!
[PDCP TX] L2_RB_INFO is absent (DRB%d)
[SDAP TX][ERROR] Config fail (DRB RbId=%d) !!!
[PDCP TX][ERROR] Config fail (SRB RbId=%d) !!!
[PDCP TX] L2_RB_INFO is absent (SRB%d)
[RbId:0x%02x] Release Pdcp Entity after deciphering - PdcpTxEntity (0x%x)
[RbId:0x%02x] Release Pdcp Entity after deciphering - NullPdcpTxEntity
[RbId:0x%02x][ERROR] Fail to release Pdcp Entity after deciphering
[RbId:0x%02x][ERROR] Null pointer for releasing Pdcp Entity after deciphering
[PDCP TX][ERROR] L2HPDCPTX_L2_RB_CHANGE_IND : Failed to Release (PdcpChId=%d)
[PDCP TX][ERROR] Release fail (No RbId=%d Srb=%d) !!!
[SDAP TX] Send RB INFO to QM (Type: %d, PduSessionId: %d, RbId: %d, DefaultRbId: %d)
[SDAP TX] Sending QM_L2HPDCPTX_RB_INFORM_IND_T Fail
[SDAP TX] NrSmSessionDb for SA is nullptr
[SDAP TX] CnCommonDb for SA is nullptr
[SDAP TX] Nullpointer for Sdap Tx Entity (PduSessionId: %d, DomainType: %d)
[SDAP TX] SDAP Release for (PduSessionId: %d)
[SDAP TX] SDAP Release for (PduSessionId: %d, RbId: %d)
[SDAP TX] Nullpointer for Sdap Tx Entity (DomainType: %d)
[SDAP TX] Sending QM_L2HPDCPTX_RELEASE_IND Fail
[SDAP TX] Sending QM_L2HPDCPTX_RELEASE_IND
[SDAP TX][Release][PduSessionId:0x%02x][RbId:0x%02x] Valid (%d) or Releae (%d)
[SDAP TX] CnCommonDb for SA nullptr)
[SDAP TX] Nullpointer for Sdap Tx Entity (PduSessionId: %d, DomainType: %d)
[SDAP TX] SDAP Delayed Release for (PduSessionId: %d)
[SDAP TX] SDAP Release for (PduSessionId: %d, RbId: %d)
[SDAP TX] CnCommonDb for SA nullptr)
[SDAP TX] Nullpointer for Sdap Tx Entity (PduSessionId: %d, DomainType: %d)
[SDAP TX] SDAP Release for (PduSessionId: %d, RbId: %d)
[SDAP TX] NrSmSessionDb for SA is nullptr
[SDAP TX] CnCommonDb for SA nullptr)
[SDAP TX] Pdu Session ID does not exist - PduSessionId (%d), Available (%d)
[SDAP TX] Sending SMT_L2HPDCPTX_UPDATE_INFORMATION_IND Fail
[SDAP TX] Sending SMT_L2HPDCPTX_UPDATE_INFORMATION_IND - PduSessionId (%d), Available (%d)
