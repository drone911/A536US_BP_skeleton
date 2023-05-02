TerminateMeasurement: MeasInstId is NULL
[rrc_InterFMeasMapper_TerminateMeasurement]: MID %d
[rrc_InterFMeasMapper_TerminateMeasurement]:InterFMeasMapper_p MID(%d) will be terminated
[rrc_InterFMeasMapper_TerminateMeasurement]:InterFMeasMapper_p->ConfiguredMids = 0X%x
[rrc_InterFMeasMapper_TerminateMeasurement]:InterFMeasMapper_p->ServingFreqMidBitmap = 0X%x
[rrc_InterFMeasMapper_TerminateMeasurement]:InterFMeasMapper_p MID(%d) wasn't configured
[rrc_InterFMeasMapper_TerminateMeasurement]:There is no MID to be terminated
[rrc_InterFMeasMapper_TerminateMeasurement]:MID %d released at UPHY
[rrc_InterFMeasMapper_TerminateMeasurement]: Remove TID Failed , TID = %d FirstConfMID = %d
[rrc_InterFMeasMapper_TerminateMeasurement]: TID = 0 for FirstConfMID = %d
[rrc_InterFMeasMapper_TerminateMeasurement]:First Configured MID Change [%d] -> [%d]
DlUarfcn(%d) is not listed on add-array bacause the array is full
[rrc_InterFMeasMapper_TerminateMeasurement]: No Cells to Config
There is more MIDs(0x%X) left
DlUarfcn(%d) is not listed on remove-array bacause the array is full
[rrc_InterFMeasMapper_TerminateMeasurement]: No Cells to Remove
[rrc_InterFMeasMapper_DoMeasurement]: MID %d
[rrc_InterFMeasMapper_DoMeasurement]:InterFMeasMapper_p MID(%d) will be modified
[rrc_InterFMeasMapper_DoMeasurement]:InterFMeasMapper_p MID(%d) will be configured
[rrc_InterFMeasMapper_DoMeasurement]:InterFMeasMapper_p->ConfiguredMids = 0X%x
[rrc_InterFMeasMapper_DoMeasurement]:MID %d set, InterFMeasMapper_p->ServingFreqMidBitmap = 0X%x
[rrc_InterFMeasMapper_DoMeasurement]: Before Filtering: REMOVE: uarfcn [%d] = %d, Cell[%d] = %d, Cpich%d
[rrc_InterFMeasMapper_DoMeasurement]: FILTERED FREQ TO REMOVE [%d] = UARFCN %d
####[rrc_InterFMeasMapper_DoMeasurement]: FILTERED CELL TO REMOVE [%d] = PSC[FDD] %d
[rrc_InterFMeasMapper_DoMeasurement]: Before Filtering: ADD: uarfcn [%d] = %d, Cell[%d] = %d,Cpich[FDD]%d
[rrc_InterFMeasMapper_DoMeasurement]: FILTERED FREQ TO ADD [%d] = UARFCN %d
####[rrc_InterFMeasMapper_DoMeasurement]: FILTERED CELL TO ADD [%d] = PSC %d
[rrc_InterFMeasMapper_DoMeasurement]: No Cells to Modify
[rrc_InterFMeasMapper_DoMeasurement]: ERROR: MeasInst [MID %d] is NULL
[rrc_InterFMeasMapper_DoMeasurement]: No Cells to Config
[rrc_InterFMeasMapper_DoMeasurement]: ERROR: MeasInst [MID %d] is NULL
[rrc_InterFMeasMapper_DoMeasurementModifyCMAlone] INFO.
rrc_CUPHY_InterFreq_MeasMod_REQ:ILM Alloc Failed!
[rrc_InterFMeasMapper_NotifyReport]: UARFCN(%d) has no Cells
[rrc_InterFMeasMapper_NotifyReport]: MID(%d) is not existed, so removed from DB
[rrc_InterFMeasMapper_NotifyReport]: UARFCN %d Cell %d : Included in MID %d
MID[%d] Created InterFMeasInd(0x%X)
[rrc_InterFMeasMapper_NotifyReport]: interFreqResultsArray = NULL
[rrc_InterFMeasMapper_NotifyReport]: cellResultsArray = NULL
[rrc_InterFMeasMapper_NotifyReport]: WARNING!! NumOfCells exceeding the limit for UARFCN(%d)
[rrc_InterFMeasMapper_NotifyReport]: cellResultsArray = NULL
[rrc_InterFMeasMapper_NotifyReport]FreqInfo is NULL !!
[rrc_InterFMeasMapper_NotifyReport]: WARNING!! NumOfFreqs exceeding the limit for MID %d
[rrc_InterFMeasMapper_NotifyReport]: WARNING!! NumOfFreqs exceeding the limit for MID %d
rrc_InterFMeasMapper_NotifyReport : Inst Id is NULL !!
rrc_InterFMeasMapper_ApplyFilterCoeff:Instance is NULL !
[rrc_InterFMeasMapper_ApplyFilterCoeff] ERROR - Invalid InterFMeasQuantity type [%i].
[rrc_InterFMeasMapper_GetAllPreviousCellInfoForMID]: MeasInstId is NULL
[rrc_InterFMeasMapper_InvalidateTid]: TID invalidate called for MID %d configured in UPHY
[rrc_InterFMeasMapper_InvalidateTid]: Remove TID Failed , TID = %d FirstConfMID = %d
InterFMapper FREED
[rrc_InterFMeasMapper_DoMeasurementModify] INFO.
RepInstId == NULL
[rrc_InterFMeasMapper_DoMeasurementConfig]:InterFMeasMapper_p MID(%d) will be FIRST configured
[rrc_InterFMeasMapper_DoMeasurementConfig]: FIRST configured MID(%d), CURRENT Configuring MID(%d)
rrc_CUPHY_IntraFreq_MeasConf_REQ:ILM Alloc Failed!
[rrc_InterFMeasMapper_AddCell]: Cell ID %d : Uarfcn %d PSC %d already present : Appended MID %d : MidBitmap = 0X%x
[rrc_InterFMeasMapper_AddCell]: Cell ID %d : Uarfcn %d PSC %d No Previous MIDs Configured!!
[rrc_InterFMeasMapper_AddCell]: Cell ID %d :PSC MISMATCH !! DB Uarfcn %d PSC %d CIL Uarfcn %d PSC %d
[rrc_InterFMeasMapper_AddCell]: Cell ID %d : Uarfcn %d PSC %d newly added : MidBitmap = 0X%x
[rrc_InterFMeasMapper_AddCell]: PSC %d NOT added as Not found in CellInfo List
rrc_MIDMapTable_GetMeasInstId is NULL returned
[rrc_InterFMeasMapper_RemoveCell]: Uarfcn %d PSC %d still configured at UPHY: MidBitmap = 0X%x
[rrc_InterFMeasMapper_RemoveCell]: Uarfcn %d PSC %d is REMOVED from UPHY
[rrc_InterFMeasMapper_RemoveCell]:Cell Id %d -> Cell Id %d : Uarfcn %d PSC %d is being REPLACED at UPHY
[rrc_InterFMeasMapper_RemoveCell]:PSC %d already Changed from Cell Id %d -> Cell Id %d
[rrc_InterFMeasMapper_RemoveCell]: PSC %d not Found in OLD Saved CIL
[rrc_InterFMeasMapper_RemoveCell]: Cell Id %d : No Cell To Remove in DB/UPHY
[rrc_InterFMeasMapper_RemoveCell]: Cell Id %d : PSC MISMATCH!! : DB Uarfcn %d PSC %d , CIL Uarfcn %d PSC %d
[rrc_InterFMeasMapper_RemoveCell]: Uarfcn %d PSC %d is being replaced: REMOVE from UPHY
[rrc_InterFMeasMapper_RemoveCell]: Cell Id %d : No Cell To Remove in UPHY
[rrc_InterFMeasMapper_RemoveCell]: Cell Id %d : Cell Not Removed from UPHY : Cell Already replaced: DB(new) Uarfcn %d PSC %d CIL(old) Uarfcn %d PSC %d
[rrc_InterFMeasMapper_RemoveCell]: Cell Neither found in Cell Info List nor Measured for MID %d
[rrc_InterFMeasMapper_GetCellMidBitmap]: PSC %d MidBitmap = 0X%x
[rrc_InterFMeasMapper_GetCellMidBitmap]: Cell Id %d : PSC %d Not found in DB
[rrc_InterFMeasMapper_GetCellMidBitmap]: Cell Id %d : PSC MISMATCH!! DB: Uarfcn %d PSC %d, CIL Uarfcn %d PSC %d
[rrc_InterFMeasMapper_GetCellMidBitmap]: PSC %d Not found in CIL
