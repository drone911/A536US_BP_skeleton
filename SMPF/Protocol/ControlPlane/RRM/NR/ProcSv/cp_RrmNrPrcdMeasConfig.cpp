RrmNrPrcdMeasConfig::PreHdlr
RrmNrPrcdMeasConfig::PrintVarMeasConfig
>>MeasIdAddModedListIdx 0x%x%x MeasIdRemovedListIdx 0x%x%x MeasIdListIdx 0x%x%x
>>ReportConfigAddModedListIdx 0x%x%x ReportConfigRemovedListIdx 0x%x%x ReportConfigListIdx 0x%x%x
>>MeasObjAddModedListIdx 0x%x%x MeasObjRemovedListIdx 0x%x%x MeasObjListIdx 0x%x%x
RrmNrPrcdMeasConfig::PrintMeasIdAddModedList
>>MeasIdAddModedListIdx Configuration Info Details
::pVarMeasConfig->MeasIdList[%d] ==> MeasId(%d) MeasObjectId(%d) ReportConfigId(%d)
RrmNrPrcdMeasConfig::PrintMeasObjAddModedList
>>MeasObjAddModedListIdx Configuration Info Details
::pVarMeasConfig->MeasObjListIdx[%d].Choice %d (1:NR, 2:EUTRA, 3:CLI, 4:UTRA)
::pVarMeasConfig->MeasObjListIdx[%d].MeasObjId %d
::pVarMeasConfig->MeasObjList[%d]->MeasObj.MeasObjectNR.SsbFreqPresent %d
::pVarMeasConfig->MeasObjList[%d]->MeasObj.MeasObjectNR.SsbFreq %d
::pVarMeasConfig->MeasObjList[%d]->MeasObj.MeasObjectNR.SsbSubcarrierSpacing %d
::FreqBandIndicatorNRV1530Present:(bool)%d
::FreqBandIndicatorNRV1530:%d
::FreqBandIndicatorNRV1530Present:(bool)%d
::PPowerClass:%d
::pVarMeasConfig->MeasObjList[%d]->MeasObj.MeasObjectNR.Smtc1Present %d
::pVarMeasConfig->MeasObjList[%d]->MeasObj.MeasObjectNR.Smtc2Present %d
::pVarMeasConfig->MeasObjList[%d]->MeasObj.MeasObjectNR.RefFreqCsiRsPresent %d
::pVarMeasConfig->MeasObjListIdx[%d].MeasObjId %d
::pVarMeasConfig->MeasObjList[%d]->MeasObj.MeasObjectUTRAFddR16.CarrierFreqR16 %d
::pVarMeasConfig->MeasObjList[%d]->MeasObj.MeasObjectUTRAFddR16.UtraFddQOffsetRangeR16 %d
::pVarMeasConfig->MeasObjList[%d]->MeasObj.MeasObjectNR.RefFreqCsiRsPresent %d
::pVarMeasConfig->MeasObjList[%d]->MeasObj.MeasObjectNR.RefFreqCsiRs %d
RrmNrPrcdMeasConfig::PrintReportConfigAddModedList
>>ReportConfigAddModedListIdx Configuration Info Details
::pVarMeasConfig->ReportConfigList[%d].ReportConfig.ReportConfigInterRAT.Choice %d
::pVarMeasConfig->ReportConfigList[%d].ReportConfigId %d
::Choice - NRRRCDB_ReportConfigInterRAT_reportType_periodical
::Choice - NRRRCDB_ReportConfigInterRAT_reportType_eventTriggered
::EventIdChoice %d
::EVENT_B1
::EVENT_B2
::Not Supported EventIdChoice!!!!
::Choice - NRRRCDB_ReportConfigInterRAT_reportType_reportCGI
::Not Supported ReportConfig Choice!!!!
::pVarMeasConfig->ReportConfigList[%d].ReportConfig.ReportConfigInterRAT.Choice %d
::pVarMeasConfig->ReportConfigList[%d].ReportConfigId %d
::Choice - NRRRCDB_ReportConfigInterRAT_reportType_periodical
::Choice - NRRRCDB_ReportConfigInterRAT_reportType_eventTriggered
::EventIdChoice %d
::EVENT_B1
::EVENT_B2
::EVENT_B1 for UTRA
::EVENT_B2 for UTRA
::Not Supported EventIdChoice!!!!
::Choice - NRRRCDB_ReportConfigInterRAT_reportType_reportCGI
::Not Supported ReportConfig Choice!!!!
RrmNrPrcdMeasConfig::RRM_RRC_MEAS_CONFIG_REQ_Hdlr
RrmNrPrcdMeasConfig::RRM_RRM_MEAS_STATE_CNF_Hdlr
CanNot AllocMsg about RRM_RRC_LOW_PWR_MODE_IND
RrmNrPrcdMeasConfig::InitializeVarMeasConfigPtr
RrmNrPrcdMeasConfig::SetVarMeasConfigPtr
RrmNrPrcdMeasConfig::RRM_L1C_GAP_CONFIG_CNF_Hdlr
RrmNrPrcdMeasConfig::ConfigureGapConfigMsg
>>Conn gap configured(UE) - GapOffset:%d Mgl:%d(enum) Mgrp:%d(enum) Mgta:%d(enum) SetupReleaseChoice:%d
>>Conn gap configured(FR1) - GapOffset:%d Mgl:%d(enum) Mgrp:%d(enum) Mgta:%d(enum) SetupReleaseChoice:%d
>>Conn gap configured(FR2) - GapOffset:%d Mgl:%d(enum) Mgrp:%d(enum) Mgta:%d(enum) SetupReleaseChoice:%d
::pVarMeasConfig->ReportConfigList[%d].ReportConfig.ReportConfigInterRAT.Choice %d
::pVarMeasConfig->ReportConfigList[%d].ReportConfigId %d
::Choice - NRRRCDB_ReportConfigInterRAT_reportType_periodical
::Choice - NRRRCDB_ReportConfigInterRAT_reportType_eventTriggered
::EventIdChoice %d
::EVENT_B1
::EVENT_B2
::Not Supported EventIdChoice!!!!
::Choice - NRRRCDB_ReportConfigInterRAT_reportType_reportCGI
::Not Supported ReportConfig Choice!!!!
::pVarMeasConfig->ReportConfigList[%d].ReportConfig.ReportConfigNR.Choice %d
::pVarMeasConfig->ReportConfigList[%d].ReportConfigId %d
::Choice - NRRRCDB_ReportConfigNR_reportType_periodical
::Choice - NRRRCDB_ReportConfigNR_reportType_eventTriggered
::EventIdChoice %d
::EventId_A1
::EventId_A2
::EventId_A3
::EventId_A4
::EventId_A5
::EventId_A6
::Not Supported EventIdChoice!!!!
::Choice - NRRRCDB_ReportConfigNR_reportType_condTriggerConfig
::EventIdChoice %d
::CondEvent_A3
::CondEvent_A5
::Not Supported EventIdChoice!!!!
::Choice - NRRRCDB_ReportConfigNR_reportType_reportCGI
::Not Supported ReportConfig Choice!!!!
