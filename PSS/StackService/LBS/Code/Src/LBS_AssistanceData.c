lcsm_ResetRrcDediAssisData() - Reset RRC Assistance Data
lcsm_ResetRrDediAssisData() - Reset RR Assistance Data
LPP_ProcessRequestAssistanceData() - sessionTableIndex(%d) transactionNumber(%d) requestAssistanceDataBitMask(0x%x)
LPP_ProcessRequestAssistanceData() - MALLOC FAIL!!!
LPP_ProcessRequestAssistanceData() - errorBitMask(0x%x) requestAssistanceDataBitMask(0x%x) requestAck(%d)
LPP_ProcessProvideAssistanceData() - pAsnProvideAssistanceData->criticalExtensions.choice(%d)
LPP_ProcessProvideAssistanceData() - DO NOT send Assist Data to AP. lppIsGpsAvailable(%d)
LPP_ProcessProvideAssistanceData() - pAsnProvideAssistanceData->criticalExtensions.u.c1.choice(%d)
lcsm_ProcessRrcAssistanceData()
Acqui Assist Present
PREVIUOSLY NO ACQUI DATA PRESENT
Ephemeris Data Present
Real Time Integrity Present
DGPS Data Present
IONO data Present
Almanac Present
Ref Location Present
UTC Data Present
Assist Data Extracted and stored
DataType = %d
lcsm_ProcessRrcGnssAssistanceData()
Processing RRC_GANSS_COMMON_ASSIST_DATA
Rxed BM_GANSS_REF_TIME
Rxed BM_GANSS_REF_LOCATION
Rxed BM_GANSS_IONO_MODEL
Rxed BM_GANSS_ADD_IONO_MODEL
Rxed BM_GANSS_EARTH_ORIENT_PARAM
Processing RRC_GANSS_GENERIC_ASSIST_DATA
rrc_dedi_asst_data[gLBSCurrentStackId].num_ganss_genericData = %d
Rxed BM_GANSS_ID
Offset = %d, Ganss Id = %d
Rxed BM_GANSS_TIME_MODEL
Rxed BM_GANSS_DIFF_CORRECT
dganss_correct present
Rxed BM_GANSS_NAV_MODEL
Add nav_model present
Add nav_model not present
Rxed BM_GANSS_REAL_TIME_INTEGRITY
real_time_int present
Rxed BM_GANSS_REF_MEAS_ASSIST
ref_meas_info present
Rxed BM_GANSS_UTC_MODEL
utc_model present
lcsm_ProcessRrAssistanceData() - Bitmas 0x%X
Ref Time Present
Ref Location Present
DGPS Present
Navigation Data Present
IONO Data Present
UTC Model Present
AlmanacData Present
Acqui Assist Data
Real Time Integrity (RTI) Present
RR Asst data extracted and stored
lcsm_FillRRLPGSMTime() - BCCH_Carrier: %d, bit_number: %d, Bsic: %d, frame_no: %d, time_slot: %d
lcsm_FillUtranTime()
FDD Chosen, ScramblingCode: %d
TDD Chosen, ParamID: %d
SFN: %d
lcsm_SendRrAlmanacAssist()
Almanac Assistance Data, SatID : %d, almanac_af0: %d ,almanac_af1: %d, almanac_a_power_half: %d
almanac_e: %d, almanac_ksii: %d, almanac_m0: %d, almanac_omega0: %d, almanac_omega_dot: %d
lmanac_svhealth: %d ,almanac_toa: %d, almanac_w: %d
lcsm_SendRrNavigationAssist()
Invalid Choice %d
SatID: %d, ephem_af0: %d, ephem_af1: %d, ephem_af2: %d
ephemAPowrHalf: %d, ephemCuc: %d, ephemDeltaN: %d, ephemE: %d, ephemI0: %d, ephemIDot : %d, ephemIODC: %d
ephemM0: %d, ephemOmegaA0: %d, ephemOmegaADot: %d, ephemSVhealth: %d ,ephemTgd: %d, ephemToc: %d
Rsvd1: %d, Rsv2: %d, Rsvd3: %d, Rsvd 4: %d
No of satallites: %d
lcsm_SendRrAcquiAssist()
Filling GSM Time from RRLP Time Relation
azimuth: %d, elevation: %d
CodePhase: %d, codePhaseSearchWindow: %d, doppler0: %d
Doppler1: %d, dopplerUncertainty: %d
SatID: %d, GPSTOW: %d, GPSBit: %d, CodePhase: %d
lcsm_SendRrcNavigationAssist()
RSV1:%d, [0]:%d, [1]:%d,[2]:%d
RSV2:%d, [3]:%d, [4]:%d,[5]:%d
RSV3:%d, [6]:%d, [7]:%d,[8]:%d
RSV4:%d, [9]:%d, [10]:%d
Satellite ID: %d, ephem_af0: %d, ephem_af1: %d, ephem_af2: %d
PowerHalf: %d, ephemCic: %d, ephemCis: %d, ephemCodeOnL2: %d, ephemCrc: %d , ephemCrs : %d
ephemCuc: %d, ephemDeltaN: %d, ephemE: %d, ephemI0: %d, ephemIDot : %d, ephemIODC: %d
ephemM0: %d, ephemOmegaA0: %d, ephemOmegaADot: %d, ephemSVhealth: %d ,ephemTgd : %d, ephemToc : %d
lcsm_SendRrcAcquiAssist()
CP:%d, CodePhase: %d, codePhaseSearchWindow: %d, doppler0: %d,DOPPLER0:%d
Doppler1: %d, , DopplerUncertainty: %d, doppler1stOrder : %d
Acqui Assistance
lcsm_FillAcqUtranTime()
FDD Chosen, ScramblingCode : %d
TDD Chosen, ParamID: %d
SFN: %d
lcsm_SendRrRefLocAssist()
default lcsm_SendRrRefLocAssist Shape = %d
lcsm_FillRefLocPoint()
sign extension Longitude = %d
Shape Type = %d, Latitude = %d, Longitude = %d
lcsm_FillRefLocUncertainityCircle()
sign extension Longitude = %d
Shape Type = %d, Latitude = %d, Longitude = %d, uncertainty_code = %d
lcsm_FillRefLocUncertainityEllipse()
sign extension Longitude = %d
Shape Type = %d, Latitude = %d, Longitude = %d
semi_major = %d, semi_minor = %d, major_axis = %d,confidence = %d
lcsm_FillRefLocPointWithAltitude()
sign extension Longitude = %d
Shape Type = %d, Latitude = %d, Longitude = %d, Altitude = %d, Dir of Altitude = %d
lcsm_FillRefLocUncertainityAltitude()
sign extension Longitude = %d
Shape Type = %d, Latitude = %d, Longitude = %d, Altitude = %d, Dir of Altitude = %d
semi_major = %d, semi_minor = %d, major_axis = %d, unc_alt = %d, confidence = %d
LPP_RequestAssistanceData_r9() - requestAssistanceDataBitMask(0x%x)
LPP_RequestAssistanceData_r9() - LPP_commonIEsRequestAssistanceData_present
commonIEsRequestAssistanceData.primaryCellID.cellidentity.value(0x%02x %02x %02x %02x)
LPP_RequestAssistanceData_r9() - LPP_a_gnss_RequestAssistanceData_present
LPP_RequestAssistanceData_r9() - NULL Pointer!!!
LPP_RequestAssistanceData_r9() - LPP_otdoa_RequestAssistanceData_present
otdoa_RequestAssistanceData.physCellId(%d)
LPP_RequestAssistanceData_r9() - EPDU flag present
LPP_RequestAssistanceData_r9() - nr_Multi_RTT_RequestAssistanceData_present
nr_Multi_RTT_RequestAssistanceData.physCellId(%d)
LPP_RequestAssistanceData_r9() - nr_DL_AoD_RequestAssistanceData_present
nr_DL_AoD_RequestAssistanceData.physCellId(%d)
LPP_RequestAssistanceData_r9() - nr_DL_TDOA_RequestAssistanceData_present
nr_DL_TDOA_RequestAssistanceData.physCellId(%d)
LPP_ProvideAssistanceData_r9() - pAsnProvideAssistanceData_r9->bit_mask(0x%x)
LPP_ProvideAssistanceData_r9() - LPP_a_gnss_ProvideAssistanceData_present
LPP_ProvideAssistanceData_r9() - MALLOC FAIL!!!
LPP_ProvideAssistanceData_r9() - MALLOC FAIL!!!
LPP_ProvideAssistanceData_r9() - LPP_otdoa_ProvideAssistanceData_present
LPP_ProvideAssistanceData_r9() - OTDOA RequestLocationInformation w/ transactionNumber(%d) currentTime(%d) timeDiff(%d)
LPP_ProvideAssistanceData_r9() - LPP_epdu_Provide_Assistance_Data_present
LPP_ProvideAssistanceData_r9() - 'epduID: %d, epduSize: %d
LPP_ProvideAssistanceData_r9() - 'ePDU_Body.value' pointer is NULL
LPP_ProvideAssistanceData_r9() - 'epdu_RequestCapabilities' pointer is NULL
LPP_ProvideAssistanceData_r9() - LPP_Multi_RTT_ProvideAssistanceData_present
LPP_ProvideAssistanceData_r9() - LPP_DL_AoD_ProvideAssistanceData_present
LPP_ProvideAssistanceData_r9() - LPP_DL_TDOA_ProvideAssistanceData_present
