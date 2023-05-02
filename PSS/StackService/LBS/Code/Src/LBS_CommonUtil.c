LBS_TCS_Check_FCI_Info() - TCS_Check_FCI_Info[%s] : %d
LPP_Get_LPP_Profile, LPP.Profile : 0x%x
LBS_Get_NR_Pos_Profile, PSS.LBS.NR_Pos_Profile : 0x%x
LPP_AsnDecodeMsg() - NULL Pointer!!!
LPP_ProAsnDecode: Input buffer:
LPP_ProAsnDecode: Success
LPP_ProAsnDecode: SIZE_INVALID
LPP_ProAsnDecode: CHOICE_INVALID
LPP_ProAsnDecode: RANGE_INVALID
LPP_ProAsnDecode: UNSUPPORTED_PDU
LPP_ProAsnDecode: DECODER_LENGTH_EXCEED (InputLen(%d bits) < unpackedLen(%d bits))
LPP_ProAsnDecode: Misc error #: %d
[seqNum_de:%d] LPP_ProAsnDecode FAIL, pdu(%d) CodecReturnCode(%d) CodecErrorStruct(%s)
[seqNum_de:%d] LPP_ProAsnDecode Success, pdu(%d) unpackedLen(%d bits)
EUTRAN_LCS_AsnDecodeMsg() - NULL Pointer!!!
EutranLcs_ProAsnDecode: Input buffer:
EutranLcs_ProAsnDecode: Success
EutranLcs_ProAsnDecode: SIZE_INVALID
EutranLcs_ProAsnDecode: CHOICE_INVALID
EutranLcs_ProAsnDecode: RANGE_INVALID
EutranLcs_ProAsnDecode: UNSUPPORTED_PDU
EutranLcs_ProAsnDecode: DECODER_LENGTH_EXCEED (InputLen(%d bits) < unpackedLen(%d bits))
EutranLcs_ProAsnDecode: Misc error #: %d
[seqNum_de:%d] EutranLcs_ProAsnDecode FAIL, pdu(%d) CodecReturnCode(%d) CodecErrorStruct(%s)
[seqNum_de:%d] EutranLcs_ProAsnDecode Success, pdu(%d) unpackedLen(%d bits)
LPP_AsnEncodeMsg() - Invalid PDU Number!!! pduNum(%d)
LPP_AsnEncodeMsg() - NULL Pointer!!!
LPP_ProAsnEncode: Success
LPP_ProAsnEncode: SIZE_INVALID
LPP_ProAsnEncode: CHOICE_INVALID
LPP_ProAsnEncode: RANGE_INVALID
LPP_ProAsnEncode: UNSUPPORTED_PDU
LPP_ProAsnEncode: ENCODER_BUFSIZE_EXCEED
LPP_ProAsnEncode: Misc error #: %d
[seqNum_en:%d] LPP_ProAsnEncode FAIL, pdu(%d) CodecReturnCode(%d) CodecErrorStruct(%s)
[seqNum_en:%d] LPP_ProAsnEncode Success, pdu(%d) packedLen(%d bits)
EUTRAN_LCS_AsnEncodeMsg() - Invalid PDU Number!!! pduNum(%d)
EUTRAN_LCS_AsnEncodeMsg() - NULL Pointer!!!
EutranLcs_ProAsnEncode: Success
EutranLcs_ProAsnEncode: SIZE_INVALID
EutranLcs_ProAsnEncode: CHOICE_INVALID
EutranLcs_ProAsnEncode: RANGE_INVALID
EutranLcs_ProAsnEncode: UNSUPPORTED_PDU
EutranLcs_ProAsnEncode: ENCODER_BUFSIZE_EXCEED
EutranLcs_ProAsnEncode: Misc error #: %d
[seqNum_en:%d] EutranLcs_ProAsnEncode FAIL, pdu(%d) CodecReturnCode(%d) CodecErrorStruct(%s)
[seqNum_en:%d] EutranLcs_ProAsnEncode Success, pdu(%d) packedLen(%d bits)
[LPP_ProAsn_FreeMsg] PDU(%d), decodedMsgPtr to free: 0x%X
[EutranLcs_ProAsn_FreeMsg] PDU(%d), decodedMsgPtr to free: 0x%X
<<--------------------------------
| ++ A_GNSS_ProvideCapabilities
LPP_ConvertA_GNSS_ProvideCapabilities() - NULL Pointer!!!
| bit_mask(0x%x)
LPP_ConvertA_GNSS_ProvideCapabilities() - numberOfGNSS_SupportList is ZERO!!!
<<--------------------------------
| ++ GNSS_SupportList [%d]
LPP_CopyA_GNSS_ProvideCapabilities() - MALLOC FAIL!!!
| adr_Support(%d)
| velocityMeasurementSupport(%d)
LPP_ConvertA_GNSS_ProvideCapabilities() - numberOfGNSS_GenericAssistanceDataSupport is ZERO!!!
<<--------------------------------
| ++ LocationCoordinateTypes
| ellipsoidPoint(%d)
| ellipsoidPointWithUncertaintyCircle(%d)
| ellipsoidPointWithUncertaintyEllipse(%d)
| polygon(%d)
| ellipsoidPointWithAltitude(%d)
| ellipsoidPointWithAltitudeAndUncertaintyEllipsoid(%d)
| ellipsoidArc(%d)
<<--------------------------------
| ++ VelocityTypes
| horizontalVelocity(%d)
| horizontalWithVerticalVelocity(%d)
| horizontalVelocityWithUncertainty(%d)
| horizontalWithVerticalVelocityAndUncertainty(%d)
>>--------------------------------
<<--------------------------------
| ++ GNSS_CommonAssistData
<<--------------------------------
| ++ GNSS_EarthOrientationParameters
| teop(%d)
| pmX(%d)
| pmXdot(%d)
| pmY(%d)
| pmYdot(%d)
| deltaUT1(%d)
| deltaUT1dot(%d)
>>--------------------------------
LPP_ConvertGNSS_GenericAssistData() - NULL Pointer!!!
>>--------------------------------
<<--------------------------------
| ++ GNSS_GenericAssistData [%d]
>>--------------------------------
<<--------------------------------
| ++ ECGI
| MCC
!!!!!!!!!! FAIL to convert MCC !!!!!!!!!!
>>--------------------------------
| MNC
!!!!!!!!!! FAIL to convert MNC !!!!!!!!!!
>>--------------------------------
| cellIdentity.value(0x%02x %02x %02x %02x)
| cellIdentity.length(%d)
>>--------------------------------
<<--------------------------------
| ++ ECGI
LPP_CopyECGI() - NULL Pointer!!!
>>--------------------------------
!!!!!!!!!! FAIL to copy MCC !!!!!!!!!!
| MCC (%d %d %d)
!!!!!!!!!! FAIL to copy MNC !!!!!!!!!!
| MNC (%d %d %d)
| cellidentity.value(0x%02x %02x %02x %02x)
| cellIdentity.length(%d)
<<--------------------------------
| ++ OTDOA_ProvideAssistanceData
LPP_CopyOTDOA_AssistanceData() - NULL Pointer!!!
>>--------------------------------
| bit_mask(0x%02x)
<<--------------------------------
| ++ otdoa_Error
| choice(%d)
| locationServerErrorCauses.cause(%d)
| targetDeviceErrorCauses.cause(%d)
>>--------------------------------
<<--------------------------------
| ++ CommonIEsRequestLocationInformation
| locationInformationType(%d)
<<--------------------------------
| ++ TriggeredReportingCriteria
| cellChange(%d)
| reportingDuration(%d)
>>--------------------------------
| additionalInformation(%d)
| environment(%d)
<<--------------------------------
| ++ LocationCoordinateTypes
| ellipsoidPoint(%d)
| ellipsoidPointWithUncertaintyCircle(%d)
| ellipsoidPointWithUncertaintyEllipse(%d)
| polygon(%d)
| ellipsoidPointWithAltitude(%d)
| ellipsoidPointWithAltitudeAndUncertaintyEllipsoid(%d)
| ellipsoidArc(%d)
>>--------------------------------
<<--------------------------------
| ++ VelocityTypes
| horizontalVelocity(%d)
| horizontalWithVerticalVelocity(%d)
| horizontalVelocityWithUncertainty(%d)
| horizontalWithVerticalVelocityAndUncertainty(%d)
>>--------------------------------
>>--------------------------------
<<--------------------------------
| ++ A_GNSS_RequestLocationInformation
<<--------------------------------
| ++ GNSS_PositioningInstructions
| fineTimeAssistanceMeasReq(%d)
| adrMeasReq(%d)
| multiFreqMeasReq(%d)
| assistanceAvailability(%d)
>>--------------------------------
>>--------------------------------
<<--------------------------------
| ++ CommonIEsProvideLocationInformation
<<--------------------------------
| ++ EarlyFixReport-r12
<<--------------------------------
| ++ A_GNSS_ProvideLocationInformation
| pSrc->gnss_Error.cause(0x%x)
>>--------------------------------
<<--------------------------------
| ++ A_GNSS_RequestAssistanceData
LPP_ConvertA_GNSS_RequestAssistanceData() - NULL Pointer!!!
>>--------------------------------
| gnss_CommonAssistDataReq.bit_mask(0x%x)
LPP_ConvertA_GNSS_RequestAssistanceData() :: ERROR!! No CommonAssistDataReq, but bitmask is Set!!!
LPP_ConvertA_GNSS_RequestAssistanceData() - numberOfGNSS_GenericAssistDataReq is ZERO!!!
<<--------------------------------
| ++ GNSS_GenericAssistDataReq [%d]
LPP_ConvertA_GNSS_RequestAssistanceData() - MALLOC FAIL!!!
>>--------------------------------
>>--------------------------------
>>--------------------------------
<<--------------------------------
| ++ UpdateLocationInformation
LPP_Convert_UpdateLocationInformation() - NULL Pointer!!!
>>--------------------------------
<<--------------------------------
| ++ EllipsoidPointWithAltitude
| latitudeSign(%d)
| degreesLatitude(%d)
| degreesLongitude(%d)
| altitudeDirection(%d)
| altitude(%d)
>>--------------------------------
<<--------------------------------
| ++ HorizontalVelocity
| bearing(%d)
| horizontalSpeed(%d)
>>--------------------------------
<<--------------------------------
| ++ gnss_TOD_msec(%d)
>>--------------------------------
>>--------------------------------
LPP_ConvertLocationInfo() - MALLOC FAIL!!!
LPP_ConvertLocationInfo() - ret(%d) len(%d)
LPP_ConvertLocationInfo() - ret(%d) len(%d)
<<--------------------------------
!!!!!!!!!! gnss_TOD_msec(%d) is out of range !!!!!!!!!!
>>--------------------------------
| gnss_TOD_msec(%d)
>>--------------------------------
LPP_ConvertBIT1ToASN_U8() - MALLOC FAIL!!!
LPP_ConvertBIT1ToASN_U16() - MALLOC FAIL!!!
LPP_ConvertBIT1ToASN_U32() - MALLOC FAIL!!!
LPP_CopySeqof3() - pDst is not NULL!!!
LPP_CopySeqof3() - MALLOC FAIL!!!
LPP_ConvertSeqof3ToASN() - pDst is not NULL!!!
LPP_ConvertSeqof3ToASN() - out of range src[%d](%d)!!!
LPP_ConvertSeqof3ToASN() - MALLOC FAIL!!!
| %d %d
| %d %d %d
<<--------------------------------
| ++ MOLRArg
EUTRAN_LCS_ConvertLCS_MOLRReq() - NULL Pointer!!!
>>--------------------------------
| molr_Type(%d)
<<--------------------------------
| ++ lcs_QoS
>>--------------------------------
<<--------------------------------
| ++ lcsClientExternalID
| externalAddress.value(0x%02x %02x %02x %02x ...)
>>--------------------------------
<<--------------------------------
| ++ mlc_Number
| value(0x%02x %02x %02x %02x ...)
>>--------------------------------
<<--------------------------------
| ++ supportedGADShapes
EUTRAN_LCS_ConvertLCS_MOLRReq() - MALLOC FAIL!!!
>>--------------------------------
| lcsServiceTypeID(%d)
| ageOfLocationInfo(%d)
<<--------------------------------
| ++ locationType
>>--------------------------------
| EUTRAN_LCS_pseudonymIndicator_present
>>--------------------------------
<<--------------------------------
| ++ LocationNotificationArg
| notificationType(%d)
| locationType.locationEstimateType(%d)
| locationType.deferredLocationEventType.length(%d)
| locationType.deferredLocationEventType.value(0x%02x %02x)
| lcsClientExternalID.externalAddress.length(%d)
| lcsClientExternalID.externalAddress.value(0x%02x %02x %02x %02x)
| lcsClientExternalID.externalAddress.value(0x%02x %02x %02x %02x)
| lcsClientExternalID.externalAddress.value(0x%02x)
| lcsClientName.dataCodingScheme.length(%d)
| lcsClientName.dataCodingScheme.value(0x%02x)
| lcsClientName.nameString.length(%d)
| lcsClientName.nameString.value(0x%02x %02x %02x %02x ...)
| lcsClientName.lcs_FormatIndicator(%d)
| lcsRequestorID.dataCodingScheme.length(%d)
| lcsRequestorID.dataCodingScheme.value(0x%02x)
| lcsRequestorID.requestorIDString.length(%d)
| lcsRequestorID.requestorIDString.value(0x%02x %02x %02x %02x ...)
| lcsRequestorID.lcs_FormatIndicator(%d)
| lcsCodeword.dataCodingScheme.length(%d)
| lcsCodeword.dataCodingScheme.value(0x%02x)
| lcsCodeword.lcsCodewordString.length(%d)
| lcsCodeword.lcsCodewordString.value(0x%02x %02x %02x %02x ...)
| lcsCodeword.lcsServiceTypeID(%d)
>>--------------------------------
<<--------------------------------
| ++ MOLRRes
| locationEstimate.length(%d)
| locationEstimate.value(0x%02x %02x %02x %02x ...)
| add_LocationEstimate.length(%d)
| add_LocationEstimate.value(0x%02x %02x %02x %02x ...)
| velocityEstimate.length(%d)
| velocityEstimate.value(0x%02x %02x %02x %02x ...)
>>--------------------------------
| networkResource(%d)
| networkResource(%d)
| additionalNetworkResource(%d)
| failureCauseParam(%d)
| positionMethodFailure_Diagnostic(%d)
LPP_Copy_EPDU_Sequence() - MALLOC FAIL!!!
LPP_Copy_EPDU_Sequence() - MALLOC FAIL!!!
LBS_CheckGpsAvailable() - GNSSGpsLockStatus(%d), EmergencyCallPresent(%d) => isGpsAvailable(%d)
lcsm_InitAsstData() - Initialized Assistance data
lcsm_RrStoreRefTimeData
GPS ToW ASSISTANCE
Overwriting Existing GPS ToW ASSISTANCE
<<--------------------------------
| ++ SBAS_IDs
LPP_ConvertSBAS_IDsToASN() - MALLOC FAIL!!!
| sbas_IDs(0x%02x)
<<--------------------------------
| ++ PositioningModes - src(%d)
LPP_ConvertPositioningModesToASN() - MALLOC FAIL!!!
| posModes(0x%02x)
>>--------------------------------
<<--------------------------------
| ++ AccessTypes [%d]
LPP_ConvertAccessTypesToASN() - MALLOC FAIL!!!
| accessTypes(0x%02x)
<<--------------------------------
| ++ AssistanceDataSupportList
<<--------------------------------
| ++ GNSS_GenericAssistanceDataSupport [%d]
LPP_ConvertAssistanceDataSupportList() - MALLOC FAIL!!!
<<--------------------------------
| ++ GNSS_CommonAssistanceDataSupport
<<--------------------------------
| ++ GNSS_ReferenceTimeSupport
<<--------------------------------
| ++ GNSS_ReferenceLocationSupport
<<--------------------------------
| ++ GNSS_EarthOrientationParametersSupport
<<--------------------------------
| ++ GNSS_ID_Bitmap
LPP_ConvertGNSS_ID_BitmapToASN() - MALLOC FAIL!!!
>>--------------------------------
LPP_ConvertGNSS_ID_BitmapToASN() - NULL Pointer!!!
>>--------------------------------
| gnss_ids.value(0x%02x %02x)
| gnss_ids.length(%d)
>>--------------------------------
<<--------------------------------
| ++ GNSS_IonosphericModelSupport
LPP_ConvertGNSS_IonosphericModelSupport() - MALLOC FAIL!!!
| ionoModel(0x%02x)
<<--------------------------------
| ++ GNSS_TimeModelsSupport
<<--------------------------------
| ++ GNSS_DifferentialCorrectionsSupport
| dgnss_ValidityTimeSup(%d)
<<--------------------------------
| ++ GNSS_RealTimeIntegritySupport
<<--------------------------------
| ++ GNSS_DataBitAssistanceSupport
<<--------------------------------
| ++ GNSS_AuxiliaryInformationSupport
<<--------------------------------
| ++ BDS_DifferentialCorrectionsSupport_r12
<<--------------------------------
| ++ BDS_GridModelSupport_r12
| sbas_id(%d)
<<--------------------------------
| ++ GNSS_NavigationModelSupport
LPP_ConvertGNSS_NavigationModelSupport() - MALLOC FAIL!!!
| clockModel(0x%02x)
LPP_ConvertGNSS_NavigationModelSupport() - MALLOC FAIL!!!
| orbitModel(0x%02x)
<<--------------------------------
| ++ GNSS_AcquisitionAssistanceSupport
| LPP_confidenceSupport_r10_present
| LPP_dopplerUncertaintyExtSupport_r10_present
<<--------------------------------
| ++ GNSS_AlmanacSupport
LPP_ConvertGNSS_AlmanacSupport() - MALLOC FAIL!!!
LPP_ConvertGNSS_AlmanacSupport() - Unsupported Almanac Model recieved [%d]
| almanacModel(0x%02x)
<<--------------------------------
| ++ GNSS_UTC_ModelSupport
LPP_ConvertGNSS_UTC_ModelSupport() - MALLOC FAIL!!!
LPP_ConvertGNSS_UTC_ModelSupport() - Unsupported UTC Model received [%d]
| utc_Model(0x%02x)
<<--------------------------------
| ++ GNSS_ReferenceTime
| referenceTimeUnc(%d)
<<--------------------------------
| ++ GNSS_SystemTime
| gnss_DayNumber(%d)
| gnss_TimeOfDay(%d)
| LPP_gnss_TimeOfDayFrac_msec_present
| gnss_TimeOfDayFrac_msec(%d)
| LPP_notificationOfLeapSecond_present
| notificationOfLeapSecond(0x%02x)
| LPP_gps_TOW_Assist_present
<<--------------------------------
| ++ GPS_TOW_AssistDst [%d]
| satelliteID(%d)
| tlmWord(%d)
| antiSpoof(%d)
| alert(%d)
| tlmRsvdBits(%d)
<<--------------------------------
| ++ GNSS_ReferenceTimeForCells [%d]
| referenceTimeUnc(%d)
| bsAlign(%d)
<<--------------------------------
| ++ NetworkTime
| secondsFromFrameStructureStart(%d)
| fractionalSecondsFromFrameStructureStart(%d)
| LPP_frameDrift_present
| frameDrift(%d)
<<--------------------------------
| ++ EUTRA
| physCellId(%d)
| earfcn(%d)
<<--------------------------------
| ++ UTRA
| fddPrimary_CPICH_Info(%d)
| tddCellParameters(%d)
!!!!!!!!!! mode.choice(%d) is wrong choice !!!!!!!!!!
| uarfcn(%d)
<<--------------------------------
| ++ GSM
| bcchCarrier(%d)
| bsic(%d)
| MCC(%d %d %d)
| MNC(%d %d %d)
| locationAreaCode(0x%02x %02x)
| cellIdentity(0x%02x %02x)
!!!!!!!!!! cellID.choice(%d) is wrong choice !!!!!!!!!!
<<--------------------------------
| ++ CellGlobalIdEUTRA_AndUTRA
| MCC(%d %d %d)
| MNC(%d %d %d)
| cellIdentity.u.eutra(0x%02x %02x %02x %02x)
| pDst->cellIdentity.u.utra(0x%02x %02x %02x %02x)
!!!!!!!!!! cellIdentity.choice(%d) is wrong choice !!!!!!!!!!
>>--------------------------------
<<--------------------------------
| ++ GNSS_ReferenceLocation
| latitudeSign(%d)
| degreesLatitude(%d)
| degreesLongitude(%d)
| altitudeDirection(%d)
| altitude(%d)
| uncertaintySemiMajor(%d)
| uncertaintySemiMinor(%d)
| orientationMajorAxis(%d)
| uncertaintyAltitude(%d)
| confidence(%d)
<<--------------------------------
| ++ GNSS_IonosphericModel
| dataID(0x%02x)
| alfa0(%d)
| alfa1(%d)
| alfa2(%d)
| alfa3(%d)
| beta0(%d)
| beta1(%d)
| beta2(%d)
| beta3(%d)
| ai0(%d)
| ai1(%d)
| ai2(%d)
| ionoStormFlag1(%d)
| ionoStormFlag2(%d)
| ionoStormFlag3(%d)
| ionoStormFlag4(%d)
| ionoStormFlag5(%d)
<<--------------------------------
| ++ GNSS_TimeModels [%d]
| gnss_TimeModelRefTime(%d)
| tA0(%d)
| tA1(%d)
| tA2(%d)
| weekNumber(%d)
| deltaT(%d)
<<--------------------------------
| ++ GNSS_DifferentialCorrections
LPP_ConvertGNSS_DifferentialCorrections() - MALLOC FAIL!!!
<<--------------------------------
| ++ DGNSS-SgnTypeList [%d]
| gnss_SignalID(%d)
| gnss_StatusHealth(%d)
LPP_ConvertGNSS_DifferentialCorrections() - MALLOC FAIL!!!
<<--------------------------------
| ++ DGNSS-SatList [%d]
| svID(%d)
| iod(0x%02x %02x)
| udre(%d)
| pseudoRangeCor(%d)
| rangeRateCor(%d)
| udreGrowthRate(%d)
| udreValidityTime(%d)
<<--------------------------------
| ++ GNSS_NavigationModel
| nonBroadcastIndFlag(%d)
LPP_ConvertGNSS_NavigationModel() - MALLOC FAIL!!!
<<--------------------------------
| ++ GNSS_SatelliteList [%d]
| svID.satellite_id(%d)
| svHealth(0x%02x)
| iod(0x%02x %02x)
!!!!!!!!!! gnss_OrbitModel.choice(%d) is wrong choice !!!!!!!!!!
| svHealthExt(0x%02x)
<<--------------------------------
| ++ GNSS_ClockModel
!!!!!!!!!! choice(%d) is wrong choice !!!!!!!!!!
>>--------------------------------
<<--------------------------------
| ++ StandardClockModelList [%d]
| stanClockToc(%d)
| stanClockAF2(%d)
| stanClockAF1(%d)
| stanClockAF0(%d)
| stanClockTgd(%d)
| sisa(%d)
| stanModelID(%d)
>>--------------------------------
<<--------------------------------
| ++ NAV_ClockModel
| navToc(%d)
| navaf2(%d)
| navaf1(%d)
| navaf0(%d)
| navTgd(%d)
>>--------------------------------
<<--------------------------------
| ++ CNAV_ClockModel
| cnavToc(%d)
| cnavTop(%d)
| cnavURA0(%d)
| cnavURA1(%d)
| cnavURA2(%d)
| cnavAf2(%d)
| cnavAf1(%d)
| cnavAf0(%d)
| cnavTgd(%d)
| cnavISCl1cp(%d)
| cnavISCl1cd(%d)
| cnavISCl1ca(%d)
| cnavISCl2c(%d)
| cnavISCl5i5(%d)
| cnavISCl5q5(%d)
>>--------------------------------
<<--------------------------------
| ++ GLONASS_ClockModel
| gloTau(%d)
| gloGamma(%d)
| gloDeltaTau(%d)
>>--------------------------------
<<--------------------------------
| ++ SBAS_ClockModel
| sbasTo(%d)
| sbasAgfo(%d)
| sbasAgf1(%d)
>>--------------------------------
<<--------------------------------
| ++ BDS_ClockModel_r12
| bdsAODC_r12(%d)
| bdsToc_r12(%d)
| bdsA0_r12(%d)
| bdsA1_r12(%d)
| bdsA2_r12(%d)
| bdsTgd1_r12(%d)
>>--------------------------------
<<--------------------------------
| ++ NavModelKeplerianSet
| keplerToe(%d)
| keplerW(%d)
| keplerDeltaN(%d)
| keplerM0(%d)
| keplerOmegaDot(%d)
| keplerE(%d)
| keplerIDot(%d)
| keplerAPowerHalf(%d)
| keplerI0(%d)
| keplerOmega0(%d)
| keplerCrs(%d)
| keplerCis(%d)
| keplerCus(%d)
| keplerCrc(%d)
| keplerCic(%d)
| keplerCuc(%d)
>>--------------------------------
<<--------------------------------
| ++ NavModelNAV_KeplerianSet
| navURA(%d)
| navFitFlag(%d)
| navToe(%d)
| navOmega(%d)
| navDeltaN(%d)
| navM0(%d)
| navOmegaADot(%d)
| navE(%d)
| navIDot(%d)
| navAPowerHalf(%d)
| navI0(%d)
| navOmegaA0(%d)
| navCrs(%d)
| navCis(%d)
| navCus(%d)
| navCrc(%d)
| navCic(%d)
| navCuc(%d)
| LPP_addNAVparam_present
| ephemCodeOnL2(%d)
| ephemL2Pflag(%d)
| ephemSF1Rsvd.reserved1(%d)
| ephemSF1Rsvd.reserved2(%d)
| ephemSF1Rsvd.reserved3(%d)
| ephemSF1Rsvd.reserved4(%d)
| ephemAODA(%d)
>>--------------------------------
<<--------------------------------
| ++ NavModelCNAV_KeplerianSet
| cnavTop(%d)
| cnavURAindex(%d)
| cnavDeltaA(%d)
| cnavAdot(%d)
| cnavDeltaNo(%d)
| cnavDeltaNoDot(%d)
| cnavMo(%ld)
| cnavE(%ld)
| cnavOmega(%ld)
| cnavOMEGA0(%ld)
| cnavDeltaOmegaDot(%d)
| cnavIo(%ld)
| cnavIoDot(%d)
| cnavCis(%d)
| cnavCic(%d)
| cnavCrs(%d)
| cnavCrc(%d)
| cnavCus(%d)
| cnavCuc(%d)
>>--------------------------------
<<--------------------------------
| ++ NavModel_GLONASS_ECEF
| gloEn(%d)
| gloP1(0x%02x)
| gloP2(%d)
| gloM(%d)
| gloX(%d)
| gloXdot(%d)
| gloXdotdot(%d)
| gloY(%d)
| gloYdot(%d)
| gloYdotdot(%d)
| gloZ(%d)
| gloZdot(%d)
| gloZdotdot(%d)
>>--------------------------------
<<--------------------------------
| ++ NavModel_SBAS_ECEF
| sbasTo(%d)
| sbasAccuracy(0x%02x)
| sbasXg(%d)
| sbasYg(%d)
| sbasZg(%d)
| sbasXgDot(%d)
| sbasYgDot(%d)
| sbasZgDot(%d)
| sbasXgDotDot(%d)
| sbagYgDotDot(%d)
| sbasZgDotDot(%d)
>>--------------------------------
<<--------------------------------
| ++ NavModel_BDS_KeplerianSet
| bdsAODE_r12(%d)
| bdsURAI_r12(%d)
| bdsToe_r12(%d)
| bdsAPowerHalf_r12(%d)
| bdsE_r12(%d)
| bdsW_r12(%d)
| bdsDeltaN_r12(%d)
| bdsM0_r12(%d)
| bdsOmega0_r12(%d)
| bdsOmegaDot_r12(%d)
| bdsI0_r12(%d)
| bdsIDot_r12(%d)
| bdsCuc_r12(%d)
| bdsCus_r12(%d)
| bdsCrc_r12(%d)
| bdsCrs_r12(%d)
| bdsCic_r12(%d)
| bdsCis_r12(%d)
>>--------------------------------
<<--------------------------------
| ++ GNSS_RealTimeIntegrity
<<--------------------------------
| ++ GNSS_BadSignalList [%d]
| badSVID(%d)
<<--------------------------------
| ++ GNSS_SignalIDs
| gnss_SignalIDs(0x%02x)
>>--------------------------------
<<--------------------------------
| ++ GNSS_DataBitAssistance
| gnss_TOD(%d)
| gnss_TODfrac(%d)
LPP_ConvertGNSS_DataBitAssistance() - MALLOC FAIL!!!
<<--------------------------------
| ++ GNSS_DataBitsSatList [%d]
| svID(%d)
LPP_ConvertGNSS_DataBitAssistance() - MALLOC FAIL!!!
<<--------------------------------
| ++ GNSS_DataBitsSgnList [%d]
| gnss_SignalType(%d)
| gnss_DataBits(0x%02x %02x %02x %02x ...)
<<--------------------------------
| ++ GNSS_AcquisitionAssistance
| gnss_SignalID(%d)
LPP_ConvertGNSS_AcquisitionAssistance() - MALLOC FAIL!!!
<<--------------------------------
| ++ GNSS_AcquisitionAssistList [%d]
| svID(%d)
| doppler0(%d)
| doppler1(%d)
| dopplerUncertainty(%d)
| codePhase(%d)
| intCodePhase(%d)
| codePhaseSearchWindow(%d)
| azimuth(%d)
| elevation(%d)
| codePhase1023(%d)
| dopplerUncertaintyExt_r10(%d)
| confidence_r10(%d)
<<--------------------------------
| ++ GNSS_Almanac
| weekNumber(%d)
| toa(%d)
| ioda(%d)
| ioda(%d)
| ioda(%d)
LPP_ConvertGNSS_Almanac() - MALLOC FAIL!!!
<<--------------------------------
| ++ GNSS_AlmanacList [%d]
!!!!!!!!!! choice(%d) is wrong choice !!!!!!!!!!
<<--------------------------------
| ++ AlmanacKeplerianSet
| svID(%d)
| kepAlmanacE(%d)
| kepAlmanacDeltaI(%d)
| kepAlmanacOmegaDot(%d)
| kepSV_StatusINAV(%d)
| kepSV_StatusFNAV(0x%02x)
| kepAlmanacAPowerHalf(%d)
| kepAlmanacOmega0(%d)
| kepAlmanacW(%d)
| kepAlmanacM0(%d)
| kepAlmanacAF0(%d)
| kepAlmanacAF1(%d)
>>--------------------------------
<<--------------------------------
| ++ AlmanacNAV_KeplerianSet
| svID(%d)
| navAlmE(%d)
| navAlmDeltaI(%d)
| navAlmOMEGADOT(%d)
| navAlmSVHealth(%d)
| navAlmSqrtA(%d)
| navAlmOMEGAo(%d)
| navAlmOmega(%d)
| navAlmMo(%d)
| navAlmaf0(%d)
| navAlmaf1(%d)
>>--------------------------------
<<--------------------------------
| ++ AlmanacReducedKeplerianSet
| svID(%d)
| redAlmDeltaA(%d)
| redAlmOmega0(%d)
| redAlmPhi0(%d)
| redAlmL1Health(%d)
| redAlmL2Health(%d)
| redAlmL5Health(%d)
>>--------------------------------
<<--------------------------------
| ++ AlmanacMidiAlmanacSet
| svID(%d)
| midiAlmE(%d)
| midiAlmDeltaI(%d)
| midiAlmOmegaDot(%d)
| midiAlmSqrtA(%d)
| midiAlmOmega0(%d)
| midiAlmOmega(%d)
| midiAlmMo(%d)
| midiAlmaf0(%d)
| midiAlmaf1(%d)
| midiAlmL1Health(%d)
| midiAlmL2Health(%d)
| midiAlmL5Health(%d)
>>--------------------------------
<<--------------------------------
| ++ AlmanacGLONASS_AlmanacSet
| gloAlm_NA(%d)
| gloAlmnA(%d)
| gloAlmHA(%d)
| gloAlmLambdaA(%d)
| gloAlmtlambdaA(%d)
| gloAlmDeltaIa(%d)
| gloAlmDeltaTA(%d)
| gloAlmDeltaTdotA(%d)
| gloAlmEpsilonA(%d)
| gloAlmOmegaA(%d)
| gloAlmTauA(%d)
| gloAlmCA(%d)
| gloAlmMA(0x%02x)
>>--------------------------------
<<--------------------------------
| ++ AlmanacECEF_SBAS_AlmanacSet
| sbasAlmDataID(%d)
| svID(%d)
| sbasAlmHealth(0x%02x)
| sbasAlmXg(%d)
| sbasAlmYg(%d)
| sbasAlmZg(%d)
| sbasAlmXgdot(%d)
| sbasAlmYgDot(%d)
| sbasAlmZgDot(%d)
| sbasAlmTo(%d)
>>--------------------------------
<<--------------------------------
| ++ AlmanacBDS_AlmanacSet_r12
| svID(%d)
| bdsAlmToa_r12(0x%02x)
| bdsAlmSqrtA_r12(%d)
| bdsAlmE_r12(%d)
| bdsAlmW_r12(%d)
| bdsAlmM0_r12(%d)
| bdsAlmOmega0_r12(%d)
| bdsAlmOmegaDot_r12(%d)
| bdsAlmDeltaI_r12(%d)
| bdsAlmA0_r12(%d)
| bdsAlmA1_r12(%d)
| bdsSvHealth_r12(0x%02x %02x)
>>--------------------------------
<<--------------------------------
| ++ GNSS_UTC_Model
| gnss_Utc_A1(%d)
| gnss_Utc_A0(%d)
| gnss_Utc_Tot(%d)
| gnss_Utc_WNt(%d)
| gnss_Utc_DeltaTls(%d)
| gnss_Utc_WNlsf(%d)
| gnss_Utc_DN(%d)
| gnss_Utc_DeltaTlsf(%d)
| utcA0(%d)
| utcA1(%d)
| utcA2(%d)
| utcDeltaTls(%d)
| utcTot(%d)
| utcWNot(%d)
| utcWNlsf(%d)
| utcDN(0x%02x)
| utcDeltaTlsf(%d)
| nA(%d)
| tauC(%d)
| b1(%d)
| b2(%d)
| kp(0x%02x)
| utcA1wnt(%d)
| utcA0wnt(%d)
| utcTot(%d)
| utcWNt(%d)
| utcDeltaTls(%d)
| utcWNlsf(%d)
| utcDN(%d)
| utcDeltaTlsf(%d)
| utcStandardID(%d)
| utcA0_r12(%d)
| utcA1_r12(%d)
| utcDeltaTls_r12(%d)
| utcWNlsf_r12(%d)
| utcDN_r12(%d)
| utcDeltaTlsf_r12(%d)
!!!!!!!!!! choice(%d) is wrong choice !!!!!!!!!!
<<--------------------------------
| ++ GNSS_AuxiliaryInformation
<<--------------------------------
| ++ GNSS_ID_GPS [%d]
| svID(%d)
<<--------------------------------
| ++ GNSS_ID_GLONASS [%d]
| svID(%d)
| channelNumber(%d)
!!!!!!!!!! choice(%d) is wrong choice !!!!!!!!!!
<<--------------------------------
| ++ BDS_DifferentialCorrections_r12
| dbds_RefTime_r12(%d)
<<--------------------------------
| ++ BDS_SgnTypeList_r12 [%d]
| gnss_SignalID(%d)
<<--------------------------------
| ++ DBDS_CorrectionList_r12 [%d]
| svID(%d)
| bds_UDREI_r12(%d)
| bds_RURAI_r12(%d)
| bds_ECC_DeltaT_r12(%d)
<<--------------------------------
| ++ BDS_GridModelParameter_r12
| bds_RefTime_r12(%d)
<<--------------------------------
| ++ GridIonList_r12 [%d]
| igp_ID_r12(%d)
| dt_r12(%d)
| givei_r12(%d)
<<--------------------------------
| ++ OTDOA_ReferenceCellInfo
| bit_mask(0x%02x)
| physCellId(%d)
!!!!!!!!!! FAIL to copy ECGI !!!!!!!!!!
| earfcnRef(%d)
| earfcnRef_v9a0(%d)
| antennaPortConfig(%d)
| cpLength(%d)
<<--------------------------------
| ++ PRS_Info
LPP_CopyPRS_Info() - NULL Pointer!!!
>>--------------------------------
| bit_mask(0x%02x)
| prs_Bandwidth(%d)
| prs_ConfigurationIndex(%d)
| numDL_Frames(%d)
| prs_MutingInfo_r9.choice(%d)
| prs_MutingInfo_r9.u.po2_r9.value(0x%02x)
| prs_MutingInfo_r9.u.po4_r9.value(0x%02x)
| prs_MutingInfo_r9.u.po8_r9.value(0x%02x)
| prs_MutingInfo_r9.u.po16_r9.value(0x%02x %02x)
<<--------------------------------
| ++ otdoa_NeighbourCellInfo
LPP_CopyOTDOA_NeighbourCellInfo() - MALLOC FAIL!!!
<<--------------------------------
| ++ otdoa_NeighbourCellFreqInfo
LPP_CopyOTDOA_NeighbourCellInfo() - MALLOC FAIL!!!
| bit_mask(0x%02x)
| physCellId(%d)
!!!!!!!!!! FAIL to copy ECGI !!!!!!!!!!
| earfcn(%d)
| earfcn_v9a0(%d)
| cpLength(%d)
| antennaPortConfig(%d)
| slotNumberOffset(%d)
| prs_SubframeOffset(%d)
| expectedRSTD(%d)
| expectedRSTD_Uncertainty(%d)
<<--------------------------------
| ++ PeriodicalReportingCriteria
| reportingAmount(%d)
| reportingInterval(%d)
>>--------------------------------
<<--------------------------------
| ++ QoS
| horizontalAccuracy.accuracy(%d)
| horizontalAccuracy.confidence(%d)
| verticalCoordinateRequest(%d)
| verticalAccuracy.accuracy(%d)
| verticalAccuracy.confidence(%d)
| responseTime.time(%d)
| responseTime.responseTimeEarlyFix_r12(%d)
| velocityRequest(%d)
>>--------------------------------
<<--------------------------------
| ++ GNSS_ID
| gnssID(%d)
| sbas_ID(%d)
<<--------------------------------
| ++ GNSS_ID
| gnss_id(%d)
<<--------------------------------
| ++ GNSS_ID_Bitmap
| gnss_ids(0x%02x %02x)
>>--------------------------------
<<--------------------------------
| ++ LocationCoordinates
LPP_ConvertLocationCoordinates() - NULL Pointer!!!
>>--------------------------------
LPP_ConvertLocationCoordinates() - numberOfPolygonPoints is ZERO!!!
>>--------------------------------
!!!!!!!!!! choice(%d) is wrong choice !!!!!!!!!!
>>--------------------------------
<<--------------------------------
| ++ Ellipsoid_Point
!!!!!!!!!! latitudeSign(%d) is out of range !!!!!!!!!!
>>--------------------------------
| latitudeSign(%d)
!!!!!!!!!! degreesLatitude(%d) is out of range !!!!!!!!!!
>>--------------------------------
| degreesLatitude(%d)
!!!!!!!!!! degreesLongitude(%d) is out of range !!!!!!!!!!
>>--------------------------------
| degreesLongitude(%d)
>>--------------------------------
<<--------------------------------
| ++ Ellipsoid_PointWithUncertaintyCircle
!!!!!!!!!! latitudeSign(%d) is out of range !!!!!!!!!!
>>--------------------------------
| latitudeSign(%d)
!!!!!!!!!! degreesLatitude(%d) is out of range !!!!!!!!!!
>>--------------------------------
| degreesLatitude(%d)
!!!!!!!!!! degreesLongitude(%d) is out of range !!!!!!!!!!
>>--------------------------------
| degreesLongitude(%d)
!!!!!!!!!! uncertainty(%d) is out of range !!!!!!!!!!
>>--------------------------------
| uncertainty(%d)
>>--------------------------------
<<--------------------------------
| ++ EllipsoidPointWithUncertaintyEllipse
!!!!!!!!!! latitudeSign(%d) is out of range !!!!!!!!!!
>>--------------------------------
| latitudeSign(%d)
!!!!!!!!!! degreesLatitude(%d) is out of range !!!!!!!!!!
>>--------------------------------
| degreesLatitude(%d)
!!!!!!!!!! degreesLongitude(%d) is out of range !!!!!!!!!!
>>--------------------------------
| degreesLongitude(%d)
!!!!!!!!!! uncertaintySemiMajor(%d) is out of range !!!!!!!!!!
>>--------------------------------
| uncertaintySemiMajor(%d)
!!!!!!!!!! uncertaintySemiMinor(%d) is out of range !!!!!!!!!!
>>--------------------------------
| uncertaintySemiMinor(%d)
!!!!!!!!!! orientationMajorAxis(%d) is out of range !!!!!!!!!!
>>--------------------------------
| orientationMajorAxis(%d)
!!!!!!!!!! confidence(%d) is out of range !!!!!!!!!!
>>--------------------------------
| confidence(%d)
>>--------------------------------
<<--------------------------------
| ++ Polygon [%d]
LPP_ConvertPolygon() - MALLOC FAIL!!!
>>--------------------------------
!!!!!!!!!! latitudeSign(%d) is out of range !!!!!!!!!!
>>--------------------------------
| latitudeSign(%d)
!!!!!!!!!! degreesLatitude(%d) is out of range !!!!!!!!!!
>>--------------------------------
| degreesLatitude(%d)
!!!!!!!!!! degreesLongitude(%d) is out of range !!!!!!!!!!
>>--------------------------------
| degreesLongitude(%d)
>>--------------------------------
<<--------------------------------
| ++ EllipsoidPointWithAltitude
!!!!!!!!!! latitudeSign(%d) is out of range !!!!!!!!!!
>>--------------------------------
| latitudeSign(%d)
!!!!!!!!!! degreesLatitude(%d) is out of range !!!!!!!!!!
>>--------------------------------
| degreesLatitude(%d)
!!!!!!!!!! degreesLongitude(%d) is out of range !!!!!!!!!!
>>--------------------------------
| degreesLongitude(%d)
!!!!!!!!!! altitudeDirection(%d) is out of range !!!!!!!!!!
>>--------------------------------
| altitudeDirection(%d)
!!!!!!!!!! altitude(%d) is out of range !!!!!!!!!!
>>--------------------------------
| altitude(%d)
>>--------------------------------
<<--------------------------------
| ++ EllipsoidPointWithAltitudeAndUncertaintyEllipsoid
!!!!!!!!!! latitudeSign(%d) is out of range !!!!!!!!!!
>>--------------------------------
| latitudeSign(%d)
!!!!!!!!!! degreesLatitude(%d) is out of range !!!!!!!!!!
>>--------------------------------
| degreesLatitude(%d)
!!!!!!!!!! degreesLongitude(%d) is out of range !!!!!!!!!!
>>--------------------------------
| degreesLongitude(%d)
!!!!!!!!!! altitudeDirection(%d) is out of range !!!!!!!!!!
>>--------------------------------
| altitudeDirection(%d)
!!!!!!!!!! altitude(%d) is out of range !!!!!!!!!!
>>--------------------------------
| altitude(%d)
!!!!!!!!!! uncertaintySemiMajor(%d) is out of range !!!!!!!!!!
>>--------------------------------
| uncertaintySemiMajor(%d)
!!!!!!!!!! uncertaintySemiMinor(%d) is out of range !!!!!!!!!!
>>--------------------------------
| uncertaintySemiMinor(%d)
!!!!!!!!!! orientationMajorAxis(%d) is out of range !!!!!!!!!!
>>--------------------------------
| orientationMajorAxis(%d)
!!!!!!!!!! uncertaintyAltitude(%d) is out of range !!!!!!!!!!
>>--------------------------------
| uncertaintyAltitude(%d)
!!!!!!!!!! confidence(%d) is out of range !!!!!!!!!!
>>--------------------------------
| confidence(%d)
>>--------------------------------
<<--------------------------------
| ++ EllipsoidArc
!!!!!!!!!! latitudeSign(%d) is out of range !!!!!!!!!!
>>--------------------------------
| latitudeSign(%d)
!!!!!!!!!! degreesLatitude(%d) is out of range !!!!!!!!!!
>>--------------------------------
| degreesLatitude(%d)
!!!!!!!!!! degreesLongitude(%d) is out of range !!!!!!!!!!
>>--------------------------------
| degreesLongitude(%d)
| innerRadius(%d)
!!!!!!!!!! uncertaintyRadius(%d) is out of range !!!!!!!!!!
>>--------------------------------
| uncertaintyRadius(%d)
!!!!!!!!!! offsetAngle(%d) is out of range !!!!!!!!!!
>>--------------------------------
| offsetAngle(%d)
!!!!!!!!!! includedAngle(%d) is out of range !!!!!!!!!!
>>--------------------------------
| includedAngle(%d)
!!!!!!!!!! confidence(%d) is out of range !!!!!!!!!!
>>--------------------------------
| confidence(%d)
>>--------------------------------
<<--------------------------------
| ++ Velocity
!!!!!!!!!! choice(%d) is wrong choice !!!!!!!!!!
>>--------------------------------
<<--------------------------------
| ++ HorizontalWithVerticalVelocity
!!!!!!!!!! bearing(%d) is out of range !!!!!!!!!!
>>--------------------------------
| bearing(%d)
!!!!!!!!!! horizontalSpeed(%d) is out of range !!!!!!!!!!
>>--------------------------------
| horizontalSpeed(%d)
!!!!!!!!!! verticalDirection(%d) is out of range !!!!!!!!!!
>>--------------------------------
| verticalDirection(%d)
| verticalSpeed(%d)
>>--------------------------------
<<--------------------------------
| ++ HorizontalVelocityWithUncertainty
!!!!!!!!!! bearing(%d) is out of range !!!!!!!!!!
>>--------------------------------
| bearing(%d)
!!!!!!!!!! horizontalSpeed(%d) is out of range !!!!!!!!!!
>>--------------------------------
| horizontalSpeed(%d)
| uncertaintySpeed(%d)
>>--------------------------------
<<--------------------------------
| ++ HorizontalWithVerticalVelocityAndUncertainty
!!!!!!!!!! bearing(%d) is out of range !!!!!!!!!!
>>--------------------------------
| bearing(%d)
!!!!!!!!!! horizontalSpeed(%d) is out of range !!!!!!!!!!
>>--------------------------------
| horizontalSpeed(%d)
!!!!!!!!!! verticalDirection(%d) is out of range !!!!!!!!!!
>>--------------------------------
| verticalDirection(%d)
| verticalSpeed(%d)
| horizontalUncertaintySpeed(%d)
| verticalUncertaintySpeed(%d)
>>--------------------------------
<<--------------------------------
| ++ LocationError
>>--------------------------------
<<--------------------------------
| ++ GNSS_SignalMeasurementInformation
>>--------------------------------
LPP_ConvertGNSS_SignalMeasurementInformation() - numberOfGNSS_MeasurementList is ZERO!!!
>>--------------------------------
<<--------------------------------
| ++ GNSS_MeasurementList [%d]
LPP_ConvertGNSS_SignalMeasurementInformation() - MALLOC FAIL!!!
>>--------------------------------
>>--------------------------------
LPP_ConvertGNSS_SignalMeasurementInformation() - [%d].numberOfGNSS_SgnMeasList is ZERO!!!
>>--------------------------------
>>--------------------------------
>>--------------------------------
>>--------------------------------
<<--------------------------------
| ++ MeasurementReferenceTime
LPP_ConvertMeasurementReferenceTime() - NULL Pointer!!!
>>--------------------------------
!!!!!!!!!! gnss_TOD_msec(%d) is out of range !!!!!!!!!!
| gnss_TOD_msec(%d)
!!!!!!!!!! gnss_TOD_frac(%d) is out of range !!!!!!!!!!
| gnss_TOD_frac(%d)
!!!!!!!!!! gnss_TOD_unc(%d) is out of range !!!!!!!!!!
| gnss_TOD_unc(%d)
!!!!!!!!!! choice(%d) is wrong choice !!!!!!!!!!
<<--------------------------------
| ++ EUTRA
!!!!!!!!!! gnss_TOD_unc(%d) is out of range !!!!!!!!!!
| physCellId(%d)
LPP_ConvertNetworkTimeForEUTRA() - MALLOC FAIL!!!
| systemFrameNumber.value(0x%02x %02x)
| systemFrameNumber.length(%d)
<<--------------------------------
| ++ CellGlobalIdEUTRA_AndUTRA
| plmn_Identity.mcc
!!!!!!!!!! FAIL to convert MCC !!!!!!!!!!
>>--------------------------------
| plmn_Identity.mnc
!!!!!!!!!! FAIL to convert MNC !!!!!!!!!!
>>--------------------------------
LPP_ConvertCellGlobalIdEUTRA_AndUTRA_ToASN() - MALLOC FAIL!!!
>>--------------------------------
| cellIdentity.u.eutra.value(0x%02x %02x %02x %02x)
| cellIdentity.u.eutra.length(%d)
LPP_ConvertCellGlobalIdEUTRA_AndUTRA_ToASN() - MALLOC FAIL!!!
>>--------------------------------
| cellIdentity.u.utra.value(0x%02x %02x %02x %02x)
| cellIdentity.u.eutra.length(%d)
!!!!!!!!!! cellIdentity.choice(%d) is wrong choice !!!!!!!!!!
>>--------------------------------
<<--------------------------------
| ++ UTRA
!!!!!!!!!! fddPrimary_CPICH_Info(%d) is out of range !!!!!!!!!!
| primary_CPICH_Info(%d)
!!!!!!!!!! cellParameters(%d) is out of range !!!!!!!!!!
| cellParameters(%d)
!!!!!!!!!! choice(%d) is wrong choice !!!!!!!!!!
!!!!!!!!!! referenceSystemFrameNumber(%d) is out of range !!!!!!!!!!
| referenceSystemFrameNumber(%d)
<<--------------------------------
| ++ GSM
!!!!!!!!!! bcchCarrier(%d) is out of range !!!!!!!!!!
| bcchCarrier(%d)
!!!!!!!!!! bsic(%d) is out of range !!!!!!!!!!
| bsic(%d)
| referenceFrame.referenceFN(%d)
!!!!!!!!!! referenceFrame.referenceFNMSB(%d) is out of range !!!!!!!!!!
| referenceFrame.referenceFNMSB(%d)
!!!!!!!!!! deltaGNSS_TOD(%d) is out of range !!!!!!!!!!
| deltaGNSS_TOD(%d)
<<--------------------------------
| ++ CellGlobalIdGERAN
| plmn_Identity.mcc
!!!!!!!!!! FAIL to convert MCC !!!!!!!!!!
>>--------------------------------
| plmn_Identity.mnc
!!!!!!!!!! FAIL to convert MCC !!!!!!!!!!
>>--------------------------------
LPP_ConvertCellGlobalIdGERAN() - MALLOC FAIL!!!
>>--------------------------------
| locationAreaCode.value(0x%02x %02x)
| locationAreaCode.length(%d)
LPP_ConvertCellGlobalIdGERAN() - MALLOC FAIL!!!
>>--------------------------------
| cellIdentity.value(0x%02x %02x)
| cellIdentity.length(%d)
>>--------------------------------
<<--------------------------------
| ++ GNSS_SgnMeasList[%d]
LPP_ConvertGNSS_SgnMeasList() - MALLOC FAIL!!!
>>--------------------------------
>>--------------------------------
>>--------------------------------
| gnss_SignalID.gnss_SignalID(%d)
!!!!!!!!!! gnss_CodePhaseAmbiguity(%d) is out of range (0..127) !!!!!!!!!!
>>--------------------------------
>>--------------------------------
>>--------------------------------
| gnss_CodePhaseAmbiguity(%d)
LPP_ConvertGNSS_SgnMeasList() - numberOfGNSS_SatMeasList is ZERO!!!
>>--------------------------------
>>--------------------------------
>>--------------------------------
>>--------------------------------
>>--------------------------------
<<--------------------------------
| ++ GNSS_SatMeasList[%d]
LPP_ConvertGNSS_SatMeasList() - MALLOC FAIL!!!
>>--------------------------------
>>--------------------------------
>>--------------------------------
>>--------------------------------
!!!!!!!!!! carrierQualityInd(%d) is out of range (0..3) !!!!!!!!!!
>>--------------------------------
>>--------------------------------
>>--------------------------------
>>--------------------------------
| carrierQualityInd(%d)
!!!!!!!!!! integerCodePhase(%d) is out of range (0..127) !!!!!!!!!!
>>--------------------------------
>>--------------------------------
>>--------------------------------
>>--------------------------------
| integerCodePhase(%d)
| doppler(%d)
!!!!!!!!!! adr(%d) is out of range (0..33554431) !!!!!!!!!!
>>--------------------------------
>>--------------------------------
>>--------------------------------
>>--------------------------------
| adr(%d)
>>--------------------------------
| svID.satellite_id(%d)
!!!!!!!!!! cNo(%d) is out of range (0..63) !!!!!!!!!!
>>--------------------------------
>>--------------------------------
>>--------------------------------
>>--------------------------------
| cNo(%d)
| mpathDet(%d)
!!!!!!!!!! codePhase(%d) is out of range (0..2097151) !!!!!!!!!!
>>--------------------------------
>>--------------------------------
>>--------------------------------
>>--------------------------------
| codePhase(%d)
!!!!!!!!!! codePhaseRMSError(%d) is out of range (0..63) !!!!!!!!!!
>>--------------------------------
>>--------------------------------
>>--------------------------------
>>--------------------------------
| codePhaseRMSError(%d)
<<--------------------------------
| ++ GNSS_LocationInformation
>>--------------------------------
>>--------------------------------
>>--------------------------------
<<--------------------------------
| ++ GNSS_SignalIDs
LPP_ConvertGNSS_SignalIDsToASN() - MALLOC FAIL!!!
| gnss_SignalIDs(0x%02x)
<<--------------------------------
| ++ GNSS_CommonAssistDataReq
LPP_ConvertGNSS_CommonAssistDataReq() - numberOfGNSS_TimeReqPrefList is ZERO!!!
<<--------------------------------
| ++ GNSS_ReferenceLocationReq
>>--------------------------------
<<--------------------------------
| ++ GNSS_IonosphericModelReq
LPP_ConvertGNSS_CommonAssistDataReq() - MALLOC FAIL!!!
>>--------------------------------
>>--------------------------------
| klobucharModelReq(0x%02x)
| neQuickModelReq_present
>>--------------------------------
<<--------------------------------
| ++ GNSS_EarthOrientationParametersReq
>>--------------------------------
>>--------------------------------
<<--------------------------------
| ++ GNSS_ReferenceTimeReq
<<--------------------------------
| ++ gnss_TimeReqPrefList [%d]
LPP_ConvertGNSS_ReferenceTimeReq() - MALLOC FAIL!!!
>>--------------------------------
>>--------------------------------
>>--------------------------------
| gps_TOW_assistReq(%d)
| notOfLeapSecReq(%d)
>>--------------------------------
LPP_ConvertGNSS_GenericAssistDataReqElement() - numberOfGNSS_TimeModelsReq is ZERO!!!
<<--------------------------------
| ++ GNSS_RealTimeIntegrityReq
>>--------------------------------
<<--------------------------------
| ++ GNSS_AuxiliaryInformationReq
>>--------------------------------
<<--------------------------------
| ++ BDS_DifferentialCorrectionsReq_r12
>>--------------------------------
<<--------------------------------
| ++ BDS_GridModelReq_r12
>>--------------------------------
>>--------------------------------
<<--------------------------------
| ++ GNSS_TimeModelsReq [%d]
LPP_ConvertGNSS_TimeModelsReq() - MALLOC FAIL!!!
>>--------------------------------
>>--------------------------------
>>--------------------------------
| gnss_TO_IDsReq(%d)
| deltaTreq(%d)
>>--------------------------------
<<--------------------------------
| ++ GNSS_DifferentialCorrectionsReq
| dgnss_ValidityTimeReq(%d)
>>--------------------------------
<<--------------------------------
| ++ GNSS_NavigationModelReq
!!!!!!!!!! choice(%d) is wrong choice !!!!!!!!!!
>>--------------------------------
<<--------------------------------
| ++ StoredNavListInfo
!!!!!!!!!! gnss_WeekOrDay(%d) is out of range (0..4095) !!!!!!!!!!
>>--------------------------------
>>--------------------------------
| gnss_WeekOrDay(%d)
| gnss_Toe(%d)
!!!!!!!!!! t_toeLimit(%d) is out of range (0..15) !!!!!!!!!!
>>--------------------------------
>>--------------------------------
| t_toeLimit(%d)
>>--------------------------------
LPP_ConvertGNSS_NavigationModelReq() - numberOfSatListRelatedDataList is ZERO!!!
<<--------------------------------
| ++ SatListRelatedDataList [%d]
LPP_ConvertGNSS_NavigationModelReq() - MALLOC FAIL!!!
>>--------------------------------
>>--------------------------------
>>--------------------------------
| svID.satellite_id(%d)
LPP_ConvertGNSS_NavigationModelReq() - MALLOC FAIL!!!
>>--------------------------------
>>--------------------------------
>>--------------------------------
| svID.iod(0x%02x %02x)
!!!!!!!!!! clockModelID(%d) is out of range (0..8) !!!!!!!!!!
>>--------------------------------
>>--------------------------------
>>--------------------------------
| clockModelID(%d)
!!!!!!!!!! orbitModelID(%d) is out of range (0..8) !!!!!!!!!!
>>--------------------------------
>>--------------------------------
>>--------------------------------
| orbitModelID(%d)
>>--------------------------------
<<--------------------------------
| ++ ReqNavListInfo
LPP_ConvertGNSS_NavigationModelReq() - MALLOC FAIL!!!
>>--------------------------------
>>--------------------------------
| svReqList(0x%02x %02x %02x %02x ...)
| svReqList(... 0x%02x %02x %02x %02x)
>>--------------------------------
>>--------------------------------
>>--------------------------------
>>--------------------------------
| addNavparamReq(%d)
>>--------------------------------
LPP_ConvertSeqof3withNumToASN() - pDst is not NULL!!!
LPP_ConvertSeqof3withNumToASN() - MALLOC FAIL!!!
<<--------------------------------
| ++ GNSS_DataBitAssistanceReq
!!!!!!!!!! gnss_TOD_Req(%d) is out of range (0..3599) !!!!!!!!!!
>>--------------------------------
| gnss_TOD_Req(%d)
!!!!!!!!!! gnss_TOD_FracReq(%d) is out of range (0..999) !!!!!!!!!!
>>--------------------------------
| gnss_TOD_FracReq(%d)
!!!!!!!!!! dataBitInterval(%d) is out of range (0..15) !!!!!!!!!!
>>--------------------------------
| dataBitInterval(%d)
LPP_ConvertGNSS_DataBitAssistanceReq() - numberOfGNSS_DataBitsReq is ZERO!!!
<<--------------------------------
| ++ GNSS_DataBitsReq [%d]
LPP_ConvertGNSS_DataBitAssistanceReq() - MALLOC FAIL!!!
>>--------------------------------
>>--------------------------------
| svID.satellite_id(%d)
>>--------------------------------
>>--------------------------------
<<--------------------------------
| ++ GNSS_AcquisitionAssistanceReq
| gnss_SignalID_Req.gnss_SignalID(%d)
| ERROR :: gnss_SignalID_Req.gnss_SignalID(%d). Value Discarded.
>>--------------------------------
<<--------------------------------
| ++ GNSS_AlmanacReq
| modelID(%d)
>>--------------------------------
<<--------------------------------
| ++ GNSS_UTCModelReq
| modelID(%d)
>>--------------------------------
<<--------------------------------
| ++ HorizontalVelocity
!!!!!!!!!! bearing(%d) is out of range !!!!!!!!!!
>>--------------------------------
| bearing(%d)
!!!!!!!!!! horizontalSpeed(%d) is out of range !!!!!!!!!!
>>--------------------------------
| horizontalSpeed(%d)
>>--------------------------------
| horizontal_accuracy.value(0x%02x)
| EUTRAN_LCS_verticalCoordinateRequest_present
| vertical_accuracy.value(0x%02x)
| responseTime.responseTimeCategory(%d)
| EUTRAN_LCS_velocityRequest_present
| value(0x%02x)
| locationEstimateType(%d)
EUTRAN_LCS_ConvertLocationType() - MALLOC FAIL!!!
| deferredLocationEventType.value(0x%02x)
