[Big] ns_Diag_SendTrigger (SimIndex %d, Trigger %d)
[Big] fail: unexpected SimIndex(%d)
[Big] 2G/3G-RRC-Event(=%d) is not equal to HandoverFail(=%d) or RlfOrWeakSignal(=%d) or RxRrcRelease(=%d) .. No DIAG_IND will be sent to BDA
[Big] Old values from NS: EventType (%d) Cause (%d) will be overwritten!
[Big] NS_DIAG_TRIGGER_2G_3G_4G_PDP_ACTIVATE_PRIM_EVENT(cause %d) will be mapped to Trigger %d
[Big] NS_DIAG_TRIGGER_2G_3G_4G_PDP_ACTIVATE_SEC_EVENT(cause %d) will be mapped to Trigger %d
[Big] fail: unrecognized trigger (%d)
[Big] Selected Act is (%d) and pmliRat is (%d)
[Big] Converting PlmiRat value for LTE RAT to match BD_ACT
[Big] diag_SetSrvCellInfo execluded
[Big] Act %d, LTE/NR RRC Event = %d Cause = %d
[Big] Act %d, 2G/3G RRC Event = %d
[Big] bda_SetChannelQualityInfo execluded
[Big] diag_SetDataInfo execluded
[Big] diag_SetSmsInfo execluded
[Big] diag_SetRfInfo execluded
[Big] ns_sendDiagInfoInd
[Big] fail: unknown act
[Big] Selected Act for trigger (%d) is (%d)
MemAlloc Fail
[Big] fail: alloc failure
[Big] fail: unable to get trigger configuration
[Big] fail: ns_SendNsClientMessage
[Big] send NS_DIAG_INFO_IND, result=%d
[Big] ns_Diag_SendEventMain (SimIndex %d, Event %d)
[Big] fail: unexpected SimIndex(%d)
MemAlloc Fail
[Big] fail: alloc failure
[Big] fail: unexpected callDomain(%d)
[Big] fail: ns_SendNsClientMessage
[Big] fail: diag_SetSrvCellInfo failure
[Big] fail: Unknown BD_ACT failure
[Big] fail: unrecognized event(%d)
[Big] fail: unable to get trigger configuration
[Big] fail: unexpected event type
[Big] fail: unable to get trigger configuration
[Big] fail: unexpected RAT(%d)
[Big] fail: unexpected callDomain(%d)
[Big] fail: unexpected RFPD Rat(%d)
[Big] fail: unrecognized trigger
diag_mapRrcEvent2EventType(RrcEvent = %d, EventType =%d)
[Big][CellInfo] act=%d
[Big][SrvCellInfo] PLMN:[0]0x%X [1]:0x%X [2]:0x%X, RAC:[2]0x%X
[Big][SrvCellInfo] LAC:[0]0x%X [1]:0x%X, CellID:[0]0x%X [1]0x%X, DL_ARFCN:%d
[Big][SrvCellInfo] PLMN:[0]:0x%X [1]:0x%X [2]:0x%X [3]:0x%X [4]:0x%X [5]:0x%X
[Big][SrvCellInfo] RAC:0x%X Lac:[0]:0x%X [1]:0x%X CellId:0x%X PSC:0x%X UARFCN:0x%X
[Big][SrvCellInfo] prim PLMN:[0]:0x%X [1]:0x%X [2]:0x%X [3]:0x%X [4]:0x%X [5]:0x%X
[Big][SrvCellInfo] out PLMN:[0]:0x%X [1]:0x%X [2]:0x%X [3]:0x%X [4]:0x%X [5]:0x%X
[Big][SrvCellInfo] TAC:[0]:0x%X,[1]:0x%X CID:0x%X, PID:%d DL_ARFCN:%d
[Big][SrvCellInfo] out PLMN:[0]:0x%X [1]:0x%X [2]:0x%X [3]:0x%X [4]:0x%X [5]:0x%X
[Big][SrvCellInfo] TAC:[0]:0x%X,[1]:0x%X,[2]:0x%X CID:0x%llu, DL_ARFCN:%d
Unhandled ACT(%d)
Unhandled PLMN Mode Select Value(%d)
[Big][CallInfo] ns_GetSipcPlmnModeSelectValue()=%d, PlmnModeSelect=%d
[Big][CallInfo] Unhandled multiRabInfo value(%d)
[Big][CallInfo] ns_dmBigDataInfo.multiRabInfo=%d
[Big][CallInfo] ActiveRat:%d, EventType=%d, Cause=%d, MultiRAB=%d
[Big][QualityInfo] RSSI0:%d RSSI1:%d BER=%d ActTxPower=%d SINR0=%d SINR1=%d
[Big][QualityInfo] RSSI0:%d RSCP0=%d EcN00=%d SINR0=%d BLER=%d DSPTxPower=%d
[Big][QualityInfo] RSSI1:%d RSCP1=%d EcN01=%d SINR1=%d BLER=%d DSPTxPower=%d
[Big][QualityInfo] ActTxPower=%d CompTxPower=%d NetTxPower=%d TunerMode=%d OL_Index=%d DiversityState=%d
[Big][QualityInfo] CL_TuneCode=%d Sw=%d Cap1=%d Cap2=%d
[Big][QualityInfo] OLTC Sw=%d OLTC Cap1=%d OLTC Cap2=%d
[Big][QualityInfo] RSSI2:%d RSSI3:%d RSCP2=%d RSCP3=%d EcNo2=%d EcNo3=%d
[Big][QualityInfo] RSSI0:%d RSSI1:%d RSRP0:%d RSRP1:%d RSRQ0:%d RSRQ1:%d
[Big][QualityInfo] SINR0:%d SINR1:%d FER:%d DSPTxPower:%d
[Big][QualityInfo] ActTxPower=%d CompTxPower=%d NetTxPower=%d DiversityState=%d
[Big][QualityInfo] CL_TuneCode=%d Sw=%d Cap1=%d Cap2=%d
[Big][QualityInfo] OLTC Sw=%d OLTC Cap1=%d OLTC Cap2=%d
[Big][QualityInfo] RSSI2:%d RSSI3:%d RSRP2:%d RSRP3:%d RSRQ2:%d RSRQ3:%d
[Big][QualityInfo] SINR2:%d SINR3:%d
[Big][QualityInfo] RSSI0:%d RSSI1:%d RSSI2:%d RSSI3:%d
[Big][QualityInfo] RSRP0:%d RSRP1:%d RSRP2:%d RSRP3:%d
[Big][QualityInfo] RSRQ0:%d RSRQ1:%d RSRQ2:%d RSRQ3:%d
[Big][QualityInfo] SINR0:%d SINR1:%d SINR2:%d SINR3:%d
[Big][QualityInfo] FER:%d DSPTxPower:%d ActTxPower=%d CompTxPower=%d
Unhandled ACT(%d)
[Big][DataInfo] Cause %d => EndReason %d
[Big][DataInfo] Cause %d => EndReason %d
[Big][DataInfo] AttachType %d, EmmCause %d, EsmCause %d
[Big][DataInfo] AttachType %d, EmmCause %d, EsmCause %d
[Big][DataInfo] AttachType %d, EmmCause %d, EsmCause %d
[Big][DataInfo] Unexpected trigger (%d)
[Big][DataInfo] Unexpected trigger (%d)
[Big][SmsInfo] RefId %d, EndReason %d, ErrorType %d
[Big][MiscInfo] GripSensorStatus:%d
[Big][MiscInfo] TxAsState:%d
Unhandled ACT(%d)
[Big][MiscInfo] MipiDeviceCheckDone:%d
[Big][MiscInfo] hal_rf_mipi_device_check_fail_count:%d
Received hal_rf_mipi_device_check_fail_count value is invalid!!!
[Big][SrvCellInfo] RegSap_GeneralData.Plmn.PlmnId:[0]:0x%X [1]:0x%X [2]:0x%X
[Big][SCGF] Data received: LTE Band:%d NR Band:%d Failure Type:%d
[Big][SCGF] Data sent: LTE Band:%d NR Band:%d Failure Type:%d ScgState:%d SgSt:%d
[BIG][Modem Activity Info]
