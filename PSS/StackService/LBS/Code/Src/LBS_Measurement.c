LPP_ProcessNRPositioning_RequestLocationInformation() - NR Multi-RTT AssistanceData is NULL, nr_AssistanceAvailability_r16(%d)
LPP_ProcessNRPositioning_RequestLocationInformation() - NR DL-AoD AssistanceData is NULL, nr_AssistanceAvailability_r16(%d)
LPP_ProcessNRPositioning_RequestLocationInformation() - NR DL-TDOA AssistanceData is NULL, nr_AssistanceAvailability_r16(%d)
LPP_ProcessNRPositioning_RequestLocationInformation() - assistanceDataTimeStamp(%d)
LPP_ProcessNRPositioning_RequestLocationInformation() - errorBit contains nr_Multi_RTT_RequestAssistanceData_present
LPP_ProcessNRPositioning_RequestLocationInformation() - errorBit contains nr_DL_AoD_RequestAssistanceData_present
LPP_ProcessNRPositioning_RequestLocationInformation() - errorBit contains nr_DL_TDOA_RequestAssistanceData_present
LPP_ProcessNRPositioning_RequestLocationInformation() - DO NOT send NR Positioning Measure Request
LPP_ProcessRequestLocationInformation()
LPP_ProcessRequestLocationInformation() - MALLOC FAIL!!!
.......... Initializing LocatioinInformationElement ..........
<<--------------------------------
| ++ LocatioinInformationElement
| sessionTableIndex(%d)
| transactionNumber(%d)
| requestedLocationInformation(%d)
| errorBitMask(0x%x)
LPP_ProcessRequestLocationInformation() - MALLOC FAIL!!!
>>--------------------------------
!!!!!!!!!! physCellIdNeighbour(%d) is out of range !!!!!!!!!!
| physCellIdNeighbour(%d)
| MCC
!!!!!!!!!! FAIL to convert MCC !!!!!!!!!!
| MNC
!!!!!!!!!! FAIL to convert MNC !!!!!!!!!!
| earfcnNeighbour(%d)
| earfcnNeighbour_v9a0(%d)
!!!!!!!!!! rstd(%d) is out of range !!!!!!!!!!
| rstd(%d)
| error_Resolution(0x%02x)
| error_Value(0x%02x)
| error_NumSamples(0x%02x)
>>--------------------------------
LPP_ConvertToOTDOA_SignalMeasurementInformation() - NULL Pointer!!!
<<--------------------------------
| ++ referenceCell
| systemFrameNumber.value(0x%02x %02x)
| systemFrameNumber.length(%d)
!!!!!!!!!! physCellIdRef(%d) is out of range !!!!!!!!!!
| physCellIdRef(%d)
| MCC
!!!!!!!!!! FAIL to convert MCC !!!!!!!!!!
| MNC
!!!!!!!!!! FAIL to convert MNC !!!!!!!!!!
| cellIdentity.value(0x%02x %02x %02x %02x)
| cellIdentity.length(%d)
| earfcnRef(%d)
| earfcnRef_v9a0(%d)
| error_Resolution(0x%02x)
| error_Value(0x%02x)
| error_NumSamples(0x%02x)
LPP_ConvertToOTDOA_SignalMeasurementInformation() - numberOfNeibourCells(%d)
<<--------------------------------
| ++ neibourCell[%d]
LPP_ConvertNeighbourMeasurementElement() - MALLOC FAIL!!!
!!!!!!!!!! neighbourMeasurementList is NULL !!!!!!!!!!
LPP_ProcessOTDOA_ProvideLocationInformation() - NULL Pointer!!!
LPP_ProcessOTDOA_ProvideLocationInformation() - NULL Pointer!!!
LPP_ProcessOTDOA_ProvideLocationInformation() - ValildMeas(%d)
LPP_OTDOA_ProvideLocationInformation_otdoa_Error_present is set to TRUE
<<--------------------------------
| ++ primaryCell
LPP_ConvertECID_ProvideLocationInformation() - numberOfNeibourCells(%d)
<<--------------------------------
| ++ neibourCell[%d]
LPP_ConvertECID_ProvideLocationInformation() - MALLOC FAIL!!!
measuredResultsList list is empty. Clear servingCellMeasuredResults.
<<--------------------------------
LPP_ConvertECID_ProvideLocationInformation() - MALLOC FAIL!!!
>>--------------------------------
LPP_ProcessProvideLocationInformation() - NULL Pointer!!!
LPP_ProcessProvideLocationInformation() - earlyFix is already transmitted to NW. Skip this result
LPP_ProcessProvideLocationInformation() - ret(0x%x) requestedLocationInformation(0x%x)
lcsm_InitiMeasVars() - Initialising Measurement Values
lcsm_FindFreeLocReqNode() - No free node in the list
index_number[gLBSCurrentStackId] : %d
lcsm_AddLocReqNode()
lcsm_DelLocReqNode()
lcsm_DelLocReqNode() - trying to Delete Invalid Index
lcsm_GetSessionId() - Invalid Session Type
lcsm_HandleSuspReq()
lcsm_HandleRRCStopReq()
LCSM_PERIODIC_TIMER is Stopped
LCSM Stop Timer = %x
lcsm_HandleRrlpRel7MsrPosReq()
Velocity Request Present
GPS positioning method is present
Gallileo positioning method is present
SBASS positioning method is present
Modernized GPS positioning method is present
QZSS positioning method is present
Glonass positioning method is present
GANSS assist data is recieved in Pos Req
Additional GPS assist data to be processed later based on GPS chip support
lcsm_HandleRrlpMeasReq()
session_id = %d, reference_number = %d
Both present and commanded ref no are same: Ignore
loc_req_db_start = %d
Unable to get free Loc Req Node, Index %d
Adding free node , index = %d
Assistance Data in Msr Position Req
Deleting node, index = %d
No nodes init queue
Setting index %d
Rel5 Msr Pos extensions Present
lcsm_HandleRrcMeasCmd() - methodType = %d, Hor_acc_present = %d, hor_Acc= %d, Ver_acc_present = %d, Ver_Acc = %d
gps_TimingOfCellWanted = %d, addition_assistance_data_req = %d
lcsm_HandleRrcMeasCmd() - LBS ==>NS: LBS_NS_GPS_RELEASE
Periodic Reporting Timeout Value: %d
lcsm_HandleRrcMeasCmd() - GanssDataPresent = %d
LCSM_PERIODIC_TIMER value:%d
lcsm_SameReferenceNumber() - Same Ref Number Flag %d
lcsm_GetIndexOfSession() - index_number in GetIndexOfSession(loc_req_db_start[gLBSCurrentStackId]) %d
lcsm_HandleFixErrorInd()
lcsm_HandleFixErrorInd() - MALLOC FAIL!!!
lcsm_HandleFixErrorInd() - MALLOC FAIL!!!
lcsm_HandleFixErrorInd() - LBS ==> RR: LBS_RR_APDU_IND, RRLP_msrPositionRsp_chosen, Error Cause = %s
lcsm_HandleFixErrorInd() - Create UMTS Message FAIL!!!
lcsm_HandleFixErrorInd() - LBS ==> URRC:LBS_URRC_MEAS_ERROR_REQ
lcsm_HandleGanssFixErrorInd() - Create UMTS Message FAIL!!!
lcsm_HandleGanssFixErrorInd() - LBS ==> URRC:LBS_URRC_MEAS_ERROR_REQ, sending error_cause = %d
lcsm_ProcessRrApdu() - RRLP Component Choice %d
lcsm_ProcessRrApdu() - RRLP Assistance Data recieved %d
lcsm_ProcessRrApdu() - MALLOC FAIL!!!
lcsm_ProcessRrApdu() - LBS ==> RR: LBS_RR_APDU_IND, Ack
lcsm_ProcessRrApdu() - Pal Mem Free Failed
lcsm_ProcessRrApdu() - RRLP Msr Position Req Recieved
lcsm_ProcessRrApdu() - RRLP Protocol Error Recieved
lcsm_ProcessRrApdu() - RRLP Position capability Request Received
lcsm_ProcessRrApdu() - [Rrlp_ProAsn_FreeMsg] PDU(%d), decodedMsgPtr to free: 0x%X
lcsm_HandlePositionCapReq() - MALLOC FAIL!!!
lcsm_HandlePositionCapReq() - MALLOC FAIL!!!
lcsm_HandlePositionCapReq()
GANSS Position Methods Requested by nw
Assistance Needed requested by nw
Ganss Extension Container Requested by nw
lcsm_HandlePositionCapReq() - LBS ==> RR: LBS_RR_APDU_IND, RRLP_posCapabilityRsp_chosen
lcsm_HandleProtocolError()
lcsm_HandleProtocolError() - MALLOC FAIL!!!
lcsm_HandleProtocolError() - Error in lcsm_RrlpEncode
lcsm_HandleProtocolError() - LBS ==> RR:LBS_RR_APDU_IND, RRLP_protocolError_chosen, Error Cause = %s
Rrlp_ProAsnEncode: Success
Rrlp_ProAsnEncode: SIZE_INVALID
Rrlp_ProAsnEncode: CHOICE_INVALID
Rrlp_ProAsnEncode: RANGE_INVALID
Rrlp_ProAsnEncode: UNSUPPORTED_PDU
Rrlp_ProAsnEncode: ENCODER_BUFSIZE_EXCEED
Rrlp_ProAsnEncode: Misc error #: %d
Rrlp_ProAsnEncode FAIL, pdu(%d) ErrorCode(%d) ErrorStruct(%s)
Rrlp_ProAsnEncode Success, pdu(%d) packedLen(%d)
Rrlp_ProAsnDecode: Input buffer:
Rrlp_ProAsnDecode: Success
Rrlp_ProAsnDecode: SIZE_INVALID
Rrlp_ProAsnDecode: CHOICE_INVALID
Rrlp_ProAsnDecode: RANGE_INVALID
Rrlp_ProAsnDecode: UNSUPPORTED_PDU
Rrlp_ProAsnDecode: DECODER_LENGTH_EXCEED (InputLen(%d bits) < unpackedLen(%d bits))
Rrlp_ProAsnDecode: Misc error #: %d
Rrlp_ProAsnDecode FAIL, pdu(%d) ErrorCode(%d) ErrorStruct(%s)
Rrlp_ProAsnDecode Success, pdu(%d) unpackedLen(%d)
lcsm_RrlpASNFree() - [Rrlp_ProAsn_FreeMsg] PDU(%d), decodedMsgPtr to free: 0x%X
lcsm_HandleProtocolErrorRsp()
lcsm_HandleProtocolErrorRsp() - [Error Code]: %s
lcsm_HandleProtocolErrorRsp() - [Protocol Error , Extension Conatiner Present]
LPP_RequestLocationInformation_r9() - requestLocationInformation_r9.bit_mask(0x%x)
LPP_RequestLocationInformation_r9() - responseTimeEarlyFix(%d)
LPP_RequestLocationInformation_r9() - LPP_a_gnss_RequestLocationInformation_present
LPP_RequestLocationInformation_r9() - LPP_epdu_RequestLocationInformation_present
LPP_RequestLocationInformation_r9() - LPP_ecid_RequestLocationInformation_present
LPP_RequestLocationInformation_r9() - LPP_otdoa_RequestLocationInformation_present
LPP_RequestLocationInformation_r9() - LPP_nr_Multi_RTT_RequestLocationInformation_present
LPP_RequestLocationInformation_r9() - LPP_nr_DL_AoD_RequestLocationInformation_present
LPP_RequestLocationInformation_r9() - LPP_nr_DL_TDPA_RequestLocationInformation_present
LPP_RequestLocationInformation_r9() - LPP_nr_ECID_RequestLocationInformation_present
LPP_RequestLocationInformation_r9() - NR Positioning requested but NOT available, nrPosProfile(%d)
LPP_ProcessCommonIEsRequestLocationInformation() - LPP_commonIEsRequestLocationInformation_present
LPP_ProcessCommonIEsRequestLocationInformation() - LPP_triggeredReporting_present
LPP_ProcessCommonIEsRequestLocationInformation() - triggeredReporting.cellChange(%d)
LPP_ProcessCommonIEsRequestLocationInformation() - LPP_qos_present
LPP_ProcessCommonIEsRequestLocationInformation() - LPP_responseTime_present
LPP_ProcessCommonIEsRequestLocationInformation() - responseTime(%d) seconds
LPP_ProcessCommonIEsRequestLocationInformation() - responseTimeEarlyFix_r12(%d) seconds
LPP_ProcessCommonIEsRequestLocationInformation() - responseTimeEarlyFix_r12(%d) is ignored because it is less than time(%d)
LPP_ProcessCommonIEsRequestLocationInformation() - LPP_periodicalReporting_present
LPP_ProcessCommonIEsRequestLocationInformation() - LPP_reportingAmount_present
LPP_ProcessCommonIEsRequestLocationInformation() - periodicReportingAmount(%d)
LPP_ProcessCommonIEsRequestLocationInformation() - periodicReportingInterval(%d)
LPP_ProcessOTDOA_RequestLocationInformation() - assistanceDataTimeStamp(%d)
LPP_ProcessOTDOA_RequestLocationInformation() - LPP_otdoa_RequestAssistanceData_present
LPP_ProcessOTDOA_RequestLocationInformation() - servingCellId(0x%x) otdoa_ReferenceCellInfo.physCellId(0x%x)
LPP_ProcessOTDOA_RequestLocationInformation() - Send OTDOA Reqeust
LPP_ProcessOTDOA_RequestLocationInformation() - Send OTDOA Reqeust responseTimeEarlyFix (%d)
LPP_ProcessOTDOA_RequestLocationInformation() - assistanceAvailability(%d)
LPP_ConvertToECID_MeasuredResultsElement() - NULL Pointer!!!
!!!!!!!!!! physCellId(%d) is out of range !!!!!!!!!!
| physCellId(%d)
| MCC
!!!!!!!!!! FAIL to convert MCC !!!!!!!!!!
| MNC
!!!!!!!!!! FAIL to convert MNC !!!!!!!!!!
cellGlobalId.cellIdentity.u.eutra.value is not NULL!!!
| cellIdentity.value(0x%02x %02x %02x %02x)
| cellIdentity.length(%d)
| arfcnEUTRA_v9a0(%d)
| arfcnEUTRA(%d)
pDst->systemFrameNumber.value is not NULL!!!
| systemFrameNumber.value(0x%02x %02x)
| systemFrameNumber.length(%d)
!!!!!!!!!! rsrp-Result(%d) is out of range !!!!!!!!!!
| rsrp_Result(%d)
!!!!!!!!!! rsrq_Result(%d) is out of range !!!!!!!!!!
| rsrq_Result(%d)
!!!!!!!!!! ue_RxTxTimeDiff(%d) is out of range !!!!!!!!!!
| ue_RxTxTimeDiff(%d)
LPP_ProvideLocationInformation_r9() - pDst->bit_mask(0x%x) bitMask(0x%x)
LPP_ProvideLocationInformation_r9() - pLocationInformation->flag (0x%x)
LPP_ProvideLocationInformation_r9() - LPP_a_gnss_ProvideLocationInformation_present
TCSOptCarrierType : (%d)
LPP_ProvideLocationInformation_r9() - LPP_epdu_ProvideLocationInformation_present
LPP_ProvideLocationInformation_r9() - LPP_otdoa_ProvideLocationInformation_present
LPP_ProvideLocationInformation_r9() - LPP_ecid_ProvideLocationInformation_present
LPP_ProvideLocationInformation_r9() - errorBitMask(0x%x)
LPP_ProcessECID_ProvideLocationInformation() - ValildMeas(0x%x)
LBS_ProcessNRPositioning_ProvideLocationInformation() - pPosMeasRsp->bit_mask(0x%x)
LBS_ProcessNRPositioning_ProvideLocationInformation() - LBS_Pos_Meas_NRECID_present
LBS_ProcessNRPositioning_ProvideLocationInformation() - LBS_Pos_Meas_MultiRTT_present
LBS_ProcessNRPositioning_ProvideLocationInformation() - LBS_Pos_Meas_DLAoD_present
LBS_ProcessNRPositioning_ProvideLocationInformation() - LBS_Pos_Meas_DLTDOA_present
LBS_ProcessNR_ECID_ProvideLocationInformation() - ValildMeas(%d)
LBS_ProcessNR_Multi_RTT_ProvideLocationInformation() - ValildMeas(%d)
LBS_ProcessNR_Multi_RTT_ProvideLocationInformation() - Multi-RTT MeasurementList size is 0
LBS_ProcessNR_DL_AoD_ProvideLocationInformation() - ValildMeas(%d)
LBS_ProcessNR_DL_AoD_ProvideLocationInformation() - DL-AoD MeasurementList size is 0
LBS_ProcessNR_DL_TDOA_ProvideLocationInformation() - ValildMeas(%d)
LBS_ProcessNR_DL_TDOA_ProvideLocationInformation() - DL-TDOA MeasurementList size is 0
