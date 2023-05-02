[A :MM,%d] %%!EM ERROR: Can not handle EF file(0x%02X)
[MM|%d,CP] %%!EM ERROR: Can not handle EF file(0x%02X)
[D :MM,%d] ProcessReadRsp SIM Ef[%s][%x] : Length[%d] Success
[D :MM,%d] ProcessReadRsp SIM Ef[%s][%x] : Result[%d]. Read from NV
[MM|%d,CP] ProcessReadRsp SIM Ef[%s] : Result[%d]. Read from NV
[D :MM,%d] UpdateReq SIM Ef[%s], SimSupport[%d]
[A :MM,%d] %%!EM ERROR : EF SIM update failed from the MM context
[MM|%d,CP] %%!EM ERROR : EF SIM update failed from the MM context
[A :MM,%d] %%!EM ERROR : EF Flash update failed from the MM context
[MM|%d,CP] %%!EM ERROR : EF Flash update failed from the MM context
[A :MM,%d] %%!EM Warning: Indicated the response as failed for the request(%d): %d
[MM|%d,CP] %%!EM Warning: Indicated the response as failed for the request(%d): %d
[D :MM,%d] SIM Update Success (%d): %d
[A :MM,%d] %%!EM ERROR : Can not find the request data by the sim ef(%d)
[MM|%d,CP] %%!EM ERROR : Can not find the request data by the sim ef(%d)
[A :MM,%d] %%!EM ERROR : ReadEf(%d) failure. dataPtr(%x) dataLength(%d)
[MM|%d,CP] %%!EM ERROR : ReadEf(%d) failure. dataPtr(%x) dataLength(%d)
[D :MM,%d] Mnc Length : %d
[D :MM,%d] Ignore : ReadEf(%d) failure. dataPtr(%x) dataLength(%d)
[D :MM,%d] USIM_SUPPORT_AUTH_KEY : 1
[D :MM,%d] USIM_SUPPORT_AUTH_KEY : 0
[D :MM,%d] USIM_SUPPORT_SUCI : 1
[D :MM,%d] SUCI_CALC_BY_USIM : 1
[D :MM,%d] SUCI_CALC_BY_USIM : 0
[D :MM,%d] USIM_SUPPORT_SUCI : 0
[D :MM,%d] USIM_DATA_OFF : 1
[D :MM,%d] USIM_DATA_OFF : 0
[D :MM,%d] USIM_SUPPORT_SOR : 1
[D :MM,%d] USIM_SUPPORT_SOR : 0
[D :MM,%d] USIM_SUPPORT_NSI : 1
[D :MM,%d] USIM_SUPPORT_NSI : 0
[D :MM,%d] UsimSupportPsDataOffHomeAndRoam : 1
[D :MM,%d] UsimSupportPsDataOffHomeAndRoam : 0
[DumpHex] EF_5GSLOCI :
[A :MM,%d] %%!EM ERROR : ReadEf(%d) failure. Invalid ef length(%d)
[MM|%d,CP] %%!EM ERROR : ReadEf(%d) failure. Invalid ef length(%d)
[A :MM,%d] %%!EM ERROR : ReadEf(%d) update guti failure. gutiLength(%d)
[MM|%d,CP] %%!EM ERROR : ReadEf(%d) update guti failure. gutiLength(%d)
[DumpHex] GUTI :
[DumpHex] Last visited Registered TAI :
[D :MM,%d] 5GS UPDATE STATUS : %d
[A :MM,%d] %%!EM ERROR : Invalid efLength(%d)
[MM|%d,CP] %%!EM ERROR : Invalid efLength(%d)
[DumpHex] GUTI :
[D :MM,%d] Current guti is invalid identity type
[DumpHex] Last visited Registered TAI :
[D :MM,%d] Current TAI is invalid
[D :MM,%d] 5GS UPDATE STATUS : %d
[DumpHex] Update Flash GUTI
[DumpHex] Update Flash GUTI with NO-Identity(0xF0---)
[DumpHex] Update Flash LastVisitedRegTai
[D :MM,%d] Update Flash 5gsUpdateStatus : %d
[A :MM,%d] If NSC is active, ignore NSC update
[MM|%d,CP] If NSC is active, ignore NSC update
[DumpHex] EF_5GSNSC :
[A :MM,%d] %%!EM ERROR : Do not update NSC, GUTI is invalid
[MM|%d,CP] %%!EM ERROR : Do not update NSC, GUTI is invalid
[A :MM,%d] %%!EM ERROR : ReadEf(%d) failure. dataPtr(%x) dataLength(%d)
[MM|%d,CP] %%!EM ERROR : ReadEf(%d) failure. dataPtr(%x) dataLength(%d)
[A :MM,%d] %%!EM ERROR : Invalid 5GS NSC Tag(%02X)
[MM|%d,CP] %%!EM ERROR : Invalid 5GS NSC Tag(%02X)
[A :MM,%d] (EF_5GSNSC) Consists of %d bytes
[MM|%d,CP] (EF_5GSNSC) Consists of %d bytes
[A :MM,%d] KSI is %x
[MM|%d,CP] KSI is %x
[A :MM,%d] Kamf Length is %d bytes
[MM|%d,CP] Kamf Length is %d bytes
[A :MM,%d] %%!EM ERROR : Invalid KamfLen(%d)
[MM|%d,CP] %%!EM ERROR : Invalid KamfLen(%d)
[DumpHex] K_AMF=
[A :MM,%d] Uplink Nas Count is %d
[MM|%d,CP] Uplink Nas Count is %d
[A :MM,%d] Downlink Nas Count is %d
[MM|%d,CP] Downlink Nas Count is %d
[A :MM,%d] Encryption algo %x, Integrity algo %x
[MM|%d,CP] Encryption algo %x, Integrity algo %x
[A :MM,%d] EPS Encryption algo %x, EPS Integrity algo %x
[MM|%d,CP] EPS Encryption algo %x, EPS Integrity algo %x
[A :MM,%d] Updated Current NSC from SIM
[MM|%d,CP] Updated Current NSC from SIM
[A :MM,%d] NSC is insufficient. Ignore. NgKsi(%d), KamfLen(%d)
[MM|%d,CP] NSC is insufficient. Ignore. NgKsi(%d), KamfLen(%d)
[A :MM,%d] KSI is %d
[MM|%d,CP] KSI is %d
[DumpHex] K_AMF=
[A :MM,%d] Uplink Nas Count is %d
[MM|%d,CP] Uplink Nas Count is %d
[A :MM,%d] Downlink Nas Count is %d
[MM|%d,CP] Downlink Nas Count is %d
[A :MM,%d] If NSC is active, ignore NSC update
[MM|%d,CP] If NSC is active, ignore NSC update
[A :MM,%d] Updated Current NSC from NV
[MM|%d,CP] Updated Current NSC from NV
[A :MM,%d] NSC is insufficient. Reset NSC(Nas Security Context) in NV
[MM|%d,CP] NSC is insufficient. Reset NSC(Nas Security Context) in NV
[A :MM,%d] Update Flash 5GNSC. isActivated %d isEMC %d
[MM|%d,CP] Update Flash 5GNSC. isActivated %d isEMC %d
[A :MM,%d] : ngKsi %d, ULcount %d DLcount %d EncAlgo %d IntAlgo %d
[MM|%d,CP] : ngKsi %d, ULcount %d DLcount %d EncAlgo %d IntAlgo %d
[A :MM,%d] : epsIntAlgo %d, epsEncAlgo %d
[MM|%d,CP] : epsIntAlgo %d, epsEncAlgo %d
[DumpHex] : K_AMF
[A :MM,%d] NSC is insufficient. Reset NSC in NV
[MM|%d,CP] NSC is insufficient. Reset NSC in NV
[N :MM,%d] Update Flash 5GSNSC : Done
[A :MM,%d] WriteNV 5GNSC :: ngKsi %d, ULcount %d DLcount %d IntAlgo %d EncAlgo %d
[MM|%d,CP] WriteNV 5GNSC :: ngKsi %d, ULcount %d DLcount %d IntAlgo %d EncAlgo %d
[A :MM,%d] WriteNV 5GNSC :: epsIntAlgo %d, epsEncAlgo %d
[MM|%d,CP] WriteNV 5GNSC :: epsIntAlgo %d, epsEncAlgo %d
[DumpHex] WriteNV 5GNSC :: K_AMF
[A :MM,%d] ReadNV 5GNSC :: ngKsi %d, ULcount %d DLcount %d IntAlgo %d EncAlgo %d
[MM|%d,CP] ReadNV 5GNSC :: ngKsi %d, ULcount %d DLcount %d IntAlgo %d EncAlgo %d
[A :MM,%d] ReadNV 5GNSC :: epsEncAlgo %d, epsIntAlgo %d
[MM|%d,CP] ReadNV 5GNSC :: epsEncAlgo %d, epsIntAlgo %d
[DumpHex] ReadNV 5GNSC :: K_AMF
[A :MM,%d] %%!EM ERROR : ReadEf(%d) failure. dataPtr(%x) dataLength(%d)
[MM|%d,CP] %%!EM ERROR : ReadEf(%d) failure. dataPtr(%x) dataLength(%d)
[A :MM,%d] %%!EM ERROR : Not enough information for HPLMN from IMSI, MNC Length invalid
[MM|%d,CP] %%!EM ERROR : Not enough information for HPLMN from IMSI, MNC Length invalid
[N :MM,%d] SIM changed : %d
[DumpHex] Read IMSI from SIM failure Read IMSI from Registry:
[DumpHex] Read IMSI from SIM failure Read IMSI from Registry:
[N :MM,%d] MNC Length = %d
[A :MM,%d] %%!EM ERROR : Not enough information for HPLMN from IMSI, MNC Length invalid
[MM|%d,CP] %%!EM ERROR : Not enough information for HPLMN from IMSI, MNC Length invalid
[A :MM,%d] %%!EM ERROR : ReadEf(%d) failure. dataPtr(%x) dataLength(%d)
[MM|%d,CP] %%!EM ERROR : ReadEf(%d) failure. dataPtr(%x) dataLength(%d)
[A :MM,%d] %%!EM ERROR : ReadEf(%d) failure. dataPtr(%x) dataLength(%d)
[MM|%d,CP] %%!EM ERROR : ReadEf(%d) failure. dataPtr(%x) dataLength(%d)
[DumpHex] EF_SUCICalcInfo :
[A :MM,%d] %%!EM ERROR : ReadEf(%d) failure. dataPtr(%x) dataLength(%d)
[MM|%d,CP] %%!EM ERROR : ReadEf(%d) failure. dataPtr(%x) dataLength(%d)
[A :MM,%d] %%!EM ERROR : ReadEf(%d) failure. Invalid object Tag(%X)
[MM|%d,CP] %%!EM ERROR : ReadEf(%d) failure. Invalid object Tag(%X)
[A :MM,%d] NrmmSimOperationSUCICalcInfo :: objectLen(%d), numOfPUbkey(%d)
[MM|%d,CP] NrmmSimOperationSUCICalcInfo :: objectLen(%d), numOfPUbkey(%d)
[A :MM,%d] %%!EM ERROR : ReadEf(%d) failure. NumOfKey(%d), Object Len(%d)
[MM|%d,CP] %%!EM ERROR : ReadEf(%d) failure. NumOfKey(%d), Object Len(%d)
[A :MM,%d] NrmmSimOperationSUCICalcInfo :: Protection Scheme [%d] : keyIndex[%d], schemeId[%d]
[MM|%d,CP] NrmmSimOperationSUCICalcInfo :: Protection Scheme [%d] : keyIndex[%d], schemeId[%d]
[A :MM,%d] %%!EM ERROR : ReadEf(%d) failure. Invalid object Tag(%X)
[MM|%d,CP] %%!EM ERROR : ReadEf(%d) failure. Invalid object Tag(%X)
[A :MM,%d] %%!EM ERROR : ReadEf(%d) failure. Object Len(%d)
[MM|%d,CP] %%!EM ERROR : ReadEf(%d) failure. Object Len(%d)
[A :MM,%d] %%!EM ERROR : ReadEf(%d) failure. Invalid object Tag(%X)
[MM|%d,CP] %%!EM ERROR : ReadEf(%d) failure. Invalid object Tag(%X)
[A :MM,%d] %%!EM ERROR : ReadEf(%d) failure. Invalid object Tag(%X)
[MM|%d,CP] %%!EM ERROR : ReadEf(%d) failure. Invalid object Tag(%X)
[A :MM,%d] %%!EM ERROR : ReadEf(%d) failure. Invalid Pubkey size(%d)
[MM|%d,CP] %%!EM ERROR : ReadEf(%d) failure. Invalid Pubkey size(%d)
[A :MM,%d] %%!EM ERROR : could find public key for Key Index(%d). Ignore this
[MM|%d,CP] %%!EM ERROR : could find public key for Key Index(%d). Ignore this
[A :MM,%d] NrmmSimOperationSUCICalcInfo :: pubKeyId : %d
[MM|%d,CP] NrmmSimOperationSUCICalcInfo :: pubKeyId : %d
[DumpHex] NrmmSimOperationSUCICalcInfo :: pubKey :
[DumpHex] EF_NSI :
[A :MM,%d] %%!EM ERROR : ReadEf(%d) failure. dataPtr(%x) dataLength(%d)
[MM|%d,CP] %%!EM ERROR : ReadEf(%d) failure. dataPtr(%x) dataLength(%d)
[DumpHex] Nsi Data :
[DumpHex] EF_RoutingInd :
[DumpHex] NrmmSimOperationRoutingIndicator :
[DumpHex] EF_AuthKeys :
[A :MM,%d] %%!EM ERROR : Do not update NSC, GUTI is invalid
[MM|%d,CP] %%!EM ERROR : Do not update NSC, GUTI is invalid
[A :MM,%d] %%!EM ERROR : ReadEf(%d) failure. dataPtr(%x) dataLength(%d)
[MM|%d,CP] %%!EM ERROR : ReadEf(%d) failure. dataPtr(%x) dataLength(%d)
[DumpHex] dataPtr Auth Keys :
[A :MM,%d] %%!EM ERROR : ReadEf(%d) failure. dataPtr(%x) dataLength(%d)
[MM|%d,CP] %%!EM ERROR : ReadEf(%d) failure. dataPtr(%x) dataLength(%d)
[DumpHex] CurNsc AUSF :
[DumpHex] CurNsc SEAF :
[DumpHex] AuthKeys K_AUSF :
[DumpHex] AuthKeys K_SEAF :
[A :MM,%d] NSC is insufficient. Reset AuthKeys in NV
[MM|%d,CP] NSC is insufficient. Reset AuthKeys in NV
[A :MM,%d] UAC AIC (%X)
[MM|%d,CP] UAC AIC (%X)
[DumpHex] SIM ACC Info :
[A :MM,%d] %%!EM ERROR : ReadEf(%d) failure. dataPtr(%x) dataLength(%d)
[MM|%d,CP] %%!EM ERROR : ReadEf(%d) failure. dataPtr(%x) dataLength(%d)
[A :MM,%d] DataPtr(%X)(%X), Support Home&Roam (%d)
[MM|%d,CP] DataPtr(%X)(%X), Support Home&Roam (%d)
[DumpHex] HomeService Exempt :
[DumpHex] RoamingService Exempt :
