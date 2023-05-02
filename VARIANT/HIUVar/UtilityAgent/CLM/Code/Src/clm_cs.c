[CLM_CS] sipc_to_evt(): Invalid Mode (=0x%X)
[CLM_CS] event_handling(): Invalid clm_cs_event_flag %d
[CLM_CS] setDefaultPolicy(): policy is set to default value
[CLM_CS] modePolicyUpdate(): invalid json, err= %d
[CLM_CS] modePolicyUpdate(): wifiCell= 0x%x, neighborCell= 0x%x, samplingRAT= 0x%x
[CLM_CS] procCellInfoNtfFb(): disable NTF - phoneState= %d
[CLM_CS] procCellInfoNtfFb(): disable NTF - invalid mode input
[CLM_CS] procCellInfoNtfFb(): invalid rat!
[CLM_CS] procExtInfoChk(): policy is not support NR SA, policyRat= %u
[CLM_CS] procExtInfoChk(): rc= %u
[CLM_CS] procExtInfoChk(): policy is not support NR, policyRat= %u
[CLM_CS] procExtInfoChk(): currrent lte cell info is null
[CLM_CS] procExtInfoChk(): current lte field value is invalid (utcTime= %u, mcc= %u, global_cell_id= %u)
[CLM_CS] procExtInfoChk(): rc= %u
[CLM_CS] procExtInfoChk(): prevRatFromDM= %u
[CLM_CS] procExtInfoChk(): geran cell info is null
[CLM_CS] procExtInfoChk(): field value is invalid (utc= %u, mcc= %u, gci= %u)
[CLM_CS] procExtInfoChk(): utran cell info is null
[CLM_CS] procExtInfoChk(): field value is invalid (utc= %u, mcc= %u, gci= %u)
[CLM_CS] procExtInfoChk(): lte cell info is null
[CLM_CS] procExtInfoChk(): field value is invalid (utc= %u, mcc= %u, gci= %u)
[CLM_CS] procExtInfoChk(): prev cell is NR, but NR is supported in current cell only
[CLM_CS] procExtInfoChk(): invalid RAT
[CLM_CS] procExtInfoChk(): rc= %u
[CLM_CS] procCellInfoExtNtfFb(): disable NTF - phoneState= %u
[CLM_CS] procCellInfoExtNtfFb(): NR NSA is not supported by policy.
[CLM_CS] procCellInfoExtNtfFb(): NR SA is not supported by policy.
[CLM_CS] procCellInfoExtNtfFb(): Invalid rat (%u)
[CLM_CS] extNrFb(): Invalid b1ThresholdType (%d)
[CLM_CS] extNrFb(): Invalid lcell
[CLM_CS] extLteFb(): Invalid b1ThresholdType (%d)
[CLM_CS] procCellHistoryNtfFb(): disable NTF, numHistory is less than MIN_NUM_CELL_HISTORY_REPORT
[CLM_CS] cellHistoryFb(): Error! size= %d exceeds %d
[CLM_CS] cellChangeCheck(): eventType= %d is unknown value.
[CLM_CS] cellChangeCheck(): Previous sample is replace with current one because timestamp is overlapped.
[CLM_CS] cellHistoryTimerInit(): pal_TmCreateTimer failed
[CLM_CS] cellHistoryTimerInit(): Timer already exists
[CLM_CS] cellHistoryTimerDelete(): Timer wasn't created
[CLM_CS] modeCellHistoryDisable(): Cell history module has already been ended!
[CLM_CS] modeCellHistoryEnable(): Cannot start! cellHistory.enable= %d
[CLM_CS] modeCellHistoryEnable(): Cell history module has already been started!
[CLM_CS] procRadioHistoryNtfFb(): numHistory or cursor is over the limit!! ERROR!!
[CLM_CS] radioHistoryFb(): Error! size= %d exceeds %d
[CLM_CS] radioHistoryTimerInit(): pal_TmCreateTimer failed
[CLM_CS] radioHistoryTimerInit(): Timer already exists
[CLM_CS] radioHistoryTimerDelete(): Timer wasn't created
[CLM_CS] modeRadioHistoryDisable(): RadioHistory module has already been ended!
[CLM_CS] modeRadioHistoryEnable(): Cannot start!
[CLM_CS] modeRadioHistoryEnable(): RadioHistory module has already been started!
[CLM_CS] modeRadioHistoryEnable(): RadioHistory Timer init error
[CLM_CS] modeCellInfo(): wifiCellInfo= %u, pParam[0]= %u
[CLM_CS] modeCpVersionRes(): apVersion= %d
[CLM_CS] modeCellInfoRev01(): wifiCellInfo= %d
[CLM_CS] modeCellInfoRev01(): cell info request is ignored because AP version is 0 (legacy AP)
[CLM_CS] modeCellInfoRev01(): cell info extended request is ignored because policy is disabled.
[CLM_CS] modeWifiCellInfoRev01(): wifiCellInfo= %d
[CLM_CS] modeWifiCellInfoRev01(): cell info request is skipped because AP version is 0 (legary AP)
[CLM_CS] modePolicyUpdateRev01(): CS_CFG_TARGET= %d
[CLM_CS] modePolicyUpdateRev01(): cell info request is skipped because AP version is 0 (legary AP)
[CLM_CS] modePolicyUpdateRev01() : Error! Mandatory field (cellInfo) does not exist!
[CLM_CS] modePolicyUpdateRev01() : Error! Mandatory field (neighborCellInfo) does not exist!
[CLM_CS] modePolicyUpdateRev01() : Error! Mandatory field (samplingRAT) does not exist!
[CLM_CS] modePolicyUpdateRev01(): cellInfoExt - Error! (mandatory fields do not exist!)
[CLM_CS] modePolicyUpdateRev01(): cellInfoSys - Error! (mandatory fields do not exist!)
[CLM_CS] modePolicyUpdateRev01(): cellHistory - Error! (mandatory fields do not exist!)
[CLM_CS] modePolicyUpdateRev01(): mobilityDetection - Error! (some of %d-th filter parameters are invalid)
[CLM_CS] modePolicyUpdateRev01(): mobilityDetection - Error! (some of %d-th filter parameters are not available)
[CLM_CS] modePolicyUpdateRev01(): mobilityDetection - Error! (mandatory fields do not exist!)
[CLM_CS] modePolicyUpdateRev01(): radioHistory - Error! (mandatory fields do not exist!)
[CLM_CS] sys_info_save_start()
[CLM_CS] sys_info_save_start(): started
[CLM_CS] sys_info_save_start(): timer is not expired(%d)
[CLM_CS] sys_info_save_start(): cellInfoSys is not enabled
[CLM_CS] sys_info_save_start(): sys_info storing is aready running
[CLM_CS] sys_info_save_terminate()
[CLM_CS] sys_info_save_terminate(): terminated
[CLM_CS] sys_info_never_do_it_again(): SYS_INFO_SAVE is disabled
[CLM_CS] read_bits_from_msb(): cursor overs the limit
[CLM_CS] sys_info_process(): si_type=%d, length=%d
