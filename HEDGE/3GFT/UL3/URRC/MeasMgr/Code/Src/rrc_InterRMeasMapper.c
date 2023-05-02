TerminateMeasurement: MeasInstId is NULL
[rrc_InterRMeasMapper_TerminateMeasurement]:InterRMeasMapper_p MID(%d) will be terminated
[rrc_InterRMeasMapper_TerminateMeasurement]:InterRMeasMapper_p->ConfiguredMids = 0X%x
[rrc_InterRMeasMapper_TerminateMeasurement]:InterRMeasMapper_p MID(%d) wasn't configured
[rrc_InterRMeasMapper_TerminateMeasurement]:There is no MID to be terminated
[rrc_InterRMeasMapper_TerminateMeasurement]:MID %d released at UPHY
[rrc_InterRMeasMapper_TerminateMeasurement]: Remove TID Failed , TID = %d FirstConfMID = %d
[rrc_InterRMeasMapper_TerminateMeasurement]: TID = 0 for FirstConfMID = %d
[rrc_InterRMeasMapper_TerminateMeasurement]:First Configured MID Change [%d] -> [%d]
[rrc_InterRMeasMapper_TerminateMeasurement]: No Cells to Config
There is more MIDs(0x%X) left
[rrc_InterRMeasMapper_TerminateMeasurement]: No Cells to Remove
[rrc_InterRMeasMapper_DoMeasurement]: MID = %d
[rrc_InterRMeasMapper_DoMeasurement]:InterRMeasMapper_p MID(%d) will be modified
[rrc_InterRMeasMapper_DoMeasurement]:InterRMeasMapper_p MID(%d) will be configured
[rrc_InterRMeasMapper_DoMeasurement]:InterRMeasMapper_p->ConfiguredMids = 0X%x
FILTERED GSM REMOVE CELL[%d] = %d
FILTERED GSM ADD CELL[%d] = %d
BSIC Verification is required from GSM MeasCtrl Modify
BSIC Verification is still not required from GSM MeasCtrl Modify
[Modify to Add] CellId[%d] ARFCN(%d), BSIC(Ncc: %d, Bcc: %d)
[Modify to Remove] CellId[%d] ARFCN(%d), BSIC(Ncc: %d, Bcc: %d)
[rrc_InterRMeasMapper_DoMeasurement]: No Cells to Modify
[rrc_InterRMeasMapper_DoMeasurement]: ERROR: MeasInst [MID %d] is NULL
[rrc_InterRMeasMapper_DoMeasurement]: No Cells to Config
[rrc_InterRMeasMapper_DoMeasurement]: ERROR: MeasInst [MID %d] is NULL
rrc_ss_AllocBuff failed for rrc_CUPHY_GsmMeasMod_REQ!!
[rrc_InterRMeasMapper_NotifyReport]:MID(%d) is not existed, so removed from DB
[rrc_InterRMeasMapper_NotifyReport][GSM_EVENT] Cell id %d Configured for MID %d
MID[%d] Created InterRMeasInd(0x%X)
rrc_InterRMeasMapper_NotifyReport : Inst Id is NULL !!
[rrc_InterRMeasMapper_NotifyReport]:MID(%d) is not existed, so removed from DB
[rrc_InterRMeasMapper_NotifyReport][GSM_PERIOD] Cell id %d Configured for MID %d
MID[%d] Created InterRMeasInd(0x%X)
rrc_InterReasMapper_NotifyReport : Inst Id is NULL !!
rrc_InterRMeasMapper_ApplyUtranFilterCoeff : Inst Id is NULL !!
[rrc_InterRMeasMapper_GetAllPreviousCellInfoForMID]: MeasInstId is NULL
[rrc_InterRMeasMapper_InvalidateTid]: TID invalidate called for MID %d configured in UPHY
[rrc_InterRMeasMapper_InvalidateTid]: Remove TID Failed , TID = %d FirstConfMID = %d
InterRMapper FREED
rrc_ss_AllocBuff failed for rrc_CUPHY_GsmMeasConf_REQ
[rrc_InterRMeasMapper_DoMeasurementConfig]:InterRMeasMapper_p MID(%d) will be FIRST configured
[rrc_InterRMeasMapper_DoMeasurementConfig]: FIRST configured MID(%d), CURRENT Configuring MID(%d)
rrc_ss_AllocBuff failed for rrc_CUPHY_GsmMeasConf_REQ
rrc_InterRMeasMapper_ApplyGsmFilterCoeff : Inst Id is NULL !!
[rrc_InterRMeasMapper_AddCell]: Cell ID %d : FrequencyBand %d BcchArfcn %d already present : Appended MID %d : MidBitmap = 0X%x
[rrc_InterRMeasMapper_AddCell]: Cell ID %d : FrequencyBand %d BcchArfcn %d No Previous MIDs Configured!!
[rrc_InterFMeasMapper_AddCell]: Cell ID %d :BcchArfcn MISMATCH !! DB FrequencyBand %d BcchArfcn %d CIL FrequencyBand %d BcchArfcn %d
[rrc_InterFMeasMapper_AddCell]: Cell ID %d : FrequencyBand %d BcchArfcn %d newly added : MidBitmap = 0X%x
[rrc_InterFMeasMapper_AddCell]: BcchArfcn %d NOT added as Not found in CellInfo List
[rrc_InterRMeasMapper_RemoveCell]: MeasInstId is NULL
[rrc_InterRMeasMapper_RemoveCell]: FrequencyBand %d BcchArfcn %d still configured at UPHY: MidBitmap = 0X%x
[rrc_InterRMeasMapper_RemoveCell]: FrequencyBand %d BcchArfcn %d is REMOVED from UPHY
[rrc_InterRMeasMapper_RemoveCell]:Cell Id %d -> Cell Id %d : FrequencyBand %d BcchArfcn %d is being REPLACED at UPHY
[rrc_InterRMeasMapper_RemoveCell]:Arcfn %d already Changed from Cell Id %d -> Cell Id %d
[rrc_InterRMeasMapper_RemoveCell]: BcchArfcn %d not Found in OLD Saved CIL
[rrc_InterRMeasMapper_RemoveCell]: Cell Id %d : No Cell To Remove in DB/UPHY
[rrc_InterRMeasMapper_RemoveCell]: Cell Id %d : MISMATCH!! : DB FrequencyBand %d BcchArfcn %d , CIL FrequencyBand %d BcchArfcn %d
[rrc_InterRMeasMapper_RemoveCell]: FrequencyBand %d BcchArfcn %d is being replaced: REMOVE from UPHY
[rrc_InterRMeasMapper_RemoveCell]: Cell Id %d : No Cell To Remove in UPHY
[rrc_InterRMeasMapper_RemoveCell]: Cell Id %d : Cell Not Removed from UPHY : Old Cell already removed : DB(new) FrequencyBand %d BcchArfcn %d, CIL(old) FrequencyBand %d BcchArfcn %d
[rrc_InterRMeasMapper_RemoveCell]: Cell Neither found in Cell Info List nor Measured for MID %d
[rrc_InterRMeasMapper_GetCellMidBitmap]: CellId %d MidBitmap = 0X%x
[rrc_InterRMeasMapper_GetCellMidBitmap]: Invalid CellNo %d
[rrc_InterRMeasMapper_UpdateCellInfoList] Measurement Instance for MID(%d) is NULL
[rrc_InterRMeasMapper_UpdateCellInfoList] CellId(%d) is found in CellsForMeas
[rrc_InterRMeasMapper_UpdateCellInfoList] CellId(%d) is not found in CellsForMeas
[rrc_InterRMeasMapper_UpdateCellInfoList] GsmCellId[%d] ARFCN(%d) BSIC(Ncc: %d, Bcc: %d) is already existed in InterRMeasMapperDB
[rrc_InterRMeasMapper_UpdateCellInfoList] updatedGsmCellsToAdd(%d) exceeded MAX(32)
[rrc_InterRMeasMapper_UpdateCellInfoList] GsmCellId[%d] ARFCN(%d) BSIC(Ncc: %d, Bcc: %d) is newly added
