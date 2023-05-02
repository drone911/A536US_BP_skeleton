[USIM_%d] >> SelectApplication
[USIM_%d] USIM Application Selection -> PASSED
[USIM_%d] USIM Application Selection -> FAILED, USIM_CARD_DAMAGED
[USIM_%d] USIM Application Selection -> FAILED
[USIM_%d] CSIM Application Selection -> PASSED
[USIM_%d] CSIM Application Selection -> FAILED, USIM_CARD_DAMAGED
[USIM_%d] CSIM Application Selection -> FAILED
[USIM_%d] Skip to change application type ResetApplicationType: %d
[USIM_%d] resetting the UICC, 3G app selection failed
[USIM_%d] GSM Application Selection -> PASS
[USIM_%d] GSM Application Selection -> FAILED, USIM_CARD_DAMAGED
[USIM_%d] GSM Application Selection -> DF_GSM selection Failed
[USIM_%d] CDMA-RUIM Application Selection -> PASS
[USIM_%d] CDMA-RUIM Application Selection -> FAILED, USIM_CARD_DAMAGED
[USIM_%d] CDMA-RUIM Application Selection -> Failed
[USIM_%d] >> Select3GApplication
[USIM_%d] USIM Appln Select response Pass
[USIM_%d] USIM Appln Select response DECODE Error
[USIM_%d] USIM Appln Select response PASS
[USIM_%d] USIM Appln Select error
[USIM_%d] AppType:0x%x not found
[USIM_%d] [ESIM] usim_HasEsimNoDummyProfile = %d
[USIM_%d] >> SelectGsmApplication
[USIM_%d] DF_GSM file found in usim_SelectGsmApplication
[USIM_%d] GSM app Select Rsp DECODE Error
[USIM_%d] DF_GSM selection FAILED
[USIM_%d] >> SelectCdmaApplication
[USIM_%d] CDMA app Select Rsp DECODE Error
[USIM_%d] DF_CDMA selection FAILED
[USIM_%d] SelectEf: (0x%04X)
[USIM_%d] usim_SelectEf: RetryCount: %d, Result: %d
[USIM_%d] >> SelectEf2
[USIM_%d] Select NextEf2(0x%04X) FAILED -
[USIM_%d] >> SelectNextDf (Apptype = %d)
[USIM_%d] >> usim_SelectMF
[USIM_%d] >> usim_SelectMFDirectory
[USIM_%d] MF selection result is no data and SW of 90 00 only!
[USIM_%d] SIM CARD DAMGED
[USIM_%d] GSM MF FILE NOT FOUND -> RUIM(DF_CDMA) trial
[USIM_%d] SIM CARD REJECTED
[USIM_%d] Sending usim_SendTerminalCapabilityReqToDevice
[USIM_%d] @Tag= 0x%02X, @Len = 0x%02X, @NoOfTlvsInFcp = 0x%02X
[USIM_%d] FCP value length > 35. Cancelling Parsing
[USIM_%d] Validate Select response failed Num %d type %d
[USIM_%d] >> CheckMandatoryTlvs
[USIM_%d] Validate FCP failed unknown tag=%x index %d
[USIM_%d] Validate FCP 1st tag != USIM_FD_TAG = %x index %d
[USIM_%d] Validate FCP failed num Sec Attrib=%d index %d
[USIM_%d] One or more of the mandatoryTLV's are absent in usim_CheckMandatoryTlvs
[USIM_%d] Mandatory Tags missing num %d type %d
[USIM_%d] FCP PSDo : Number of TLVs has reached LIMIT !!
[USIM_%d] Not Processing Pin Status Template TLV for ins=%x, EF=%x
[USIM_%d] Compact security attributes
[USIM_%d] Expanded security attributes
[USIM_%d] Reference to Expanded security attributes
[USIM_%d] usim_CheckSelectionResponse PB files SFI %d
[USIM_%d] Pin %02x - enabled
[USIM_%d] Pin %02x - disabled
[USIM_%d] Got a PS_DO in Process PSDO
[USIM_%d] Got a Usage qualifier tag in ProcessPSDO
[USIM_%d] SIM Contains GPRS Data
[USIM_%d] SIM doesnot Contain GPRS Data
[USIM_%d] STATUS DF ID :0x%X
[USIM_%d] usim_TerminalCapa :0x%X
[USIM_%d] TerminalCapa is INVALID!
[USIM_%d] Command Result->
[USIM_%d] FileId- 0x%02X, Current EF ->
[USIM_%d] FileId- 0x%02X, Current DF ->
[USIM_%d] FileId- 0x%02X, Next DF ->
[USIM_%d] FileId- 0x%02X, Next EF ->
[USIM_%d] FileId- 0x%04X,
[USIM_%d] Apptype is not USIM and CSIM, appType:
[USIM_%d] Updated File size 0x%x
[USIM_%d] File size is not updated as entry is not found in USIM/CSIM table
[USIM_%d] ElementID ->
[USIM_%d] Force ADF_USIM Selection Before Auth
[USIM_%d] Current DF != DF_GSM, i.e Directory Not selected, Selecting Directory
[USIM_%d] Directory(DF_GSM) selected
[USIM_%d] Current DF != DF_CDMA, i.e Directory Not selected, Selecting Directory
[USIM_%d] Directory(DF_CDMA) selected
[USIM_%d] Unknown AppType
[USIM_%d] Getting Directory Using File Id
[USIM_%d] Directory -> MASTER_FILE
[USIM_%d] Directory -> DF_TELECOM
[USIM_%d] Directory -> DF_GSM_ACCESS
[USIM_%d] Directory -> DF_PHONEBOOK_UNDER_TELECOM
[USIM_%d] Directory -> DF_INVALID
[USIM_%d] Directory -> DF_PHONEBOOK_UNDER_TELECOM
[USIM_%d] Directory -> DF_INVALID
[USIM_%d] Directory -> DF_ENS2
[USIM_%d] Directory -> DF_ENS3
[USIM_%d] Directory -> 0x%02X
[USIM_%d] Directory -> DF_SKT_CDMA
[USIM_%d] Directory -> DF_O2
[USIM_%d] Directory -> ADF_USIM
[USIM_%d] Directory -> DF_GRAPHICS
[USIM_%d] Directory -> ADF_USIM
[USIM_%d] Changed to Directory -> MASTER_FILE
[USIM_%d] Directory -> ADF_CSIM
[USIM_%d] Changed to Directory -> MASTER_FILE
[USIM_%d] Directory -> MASTER_FILE
[USIM_%d] Directory -> DF_TELECOM
[USIM_%d] Directory -> DF_GRAPHICS
[USIM_%d] Directory -> DF_GRAPHICS
[USIM_%d] Directory -> DF_ENS1
[USIM_%d] Directory -> DF_ENS2
[USIM_%d] Directory -> DF_ENS3
[USIM_%d] Directory -> DF_O2
[USIM_%d] Directory -> DF_INVALID
[USIM_%d] Directory -> DF_GSM
[USIM_%d] Directory -> DF_CDMA
[USIM_%d] NULL buffer addr. received!!! (Dest- 0x%X, Src- 0x%X
[USIM_%d] NULL buffer addr. received!!! (Dest- 0x%X, Src- 0x%X
[USIM_%d] TRAP MESSAGE - Invalid Request for
[USIM_%d] Hex Dump -> Unknown
[USIM_%d] Hex Dump -> Unknown
[USIM_%d] Buffer or Buff Len incorect
[USIM_%d] TraceLevel incorect
[USIM_%d] FileType ->
[USIM_%d] Writing Data to Flash in usim_WriteFlashData : Item:%d
[USIM_%d] Unlock protected NV Item:%d
[USIM_%d] Device Interface Result Caller:[ %s : %d ] :
[USIM_%d] InitType-
[USIM_%d] Invalid Reference values for EF-PBR Record
[USIM_%d] The Reference FileID is :%x in EF-PBR Record :%x and Ref Record Index: %x
[USIM_%d] Invalid ReferenceValues for EF-PBR Record
[USIM_%d] The Reference FileID is :%x in EF-PBR Record :%x and Ref Record Index: %x IS Linktype = 0x%x
[USIM_%d] >> usim_GetProactiveCmdTypes
[USIM_%d] Command is NULL
[USIM_%d] ProactiveCmdType = 0x%X, ProactiveCmdSubType = 0x%X
[USIM_%d] EF is under MF
[USIM_%d] Other EF type not supported. Check Select Cmd
[USIM_%d] Path Length: %d, Path:
[USIM_%d] usim_SendSelectbyPathCommandToDevice2 Passed
[USIM_%d] usim_SendSelectbyPathCommandToDevice2 failed
[USIM_%d] usim_SendSelectbyPathCommandToDevice2 to select MF Passed
[USIM_%d] usim_SendSelectbyPathCommandToDevice2 Failed
[USIM_%d] Invalid Path to select
[USIM_%d] Invalid Path to select: Path Length > max length
[USIM_%d] Path Length: %d, Path:
[USIM_%d] usim_SendSelectbyPathCommandToDevice2 Passed
[USIM_%d] usim_SendSelectbyPathCommandToDevice2 failed, Result = 0x%x
[USIM_%d] Invalid Path to select
[USIM_%d] USIM : For all request from AP, CP sends GET RSP only in case that SW1 is '61'
[USIM_%d] GSM SIM : For all request from AP, CP sends GET RSP only in case that SW1 is '61' or '9F' or '9E'
[USIM_%d] Incorrect ApplicationType !!!
[USIM_%d] usim_CheckCarrierEfValidity: Retval = %d
[USIM_%d] Error reading EF_SKT_PREF,Result= %d
[USIM_%d] EF_SKT_PREF read Length = %d. Displaying Contents
[USIM_%d] ERROR reading EF_VER
[USIM_%d] EF_VER read Length = %d. Displaying Contents
[USIM_%d] MEMALLOC fails
[USIM_%d] UICC is *not* activated
[USIM_%d] UICC is already *activated*
[USIM_%d] Invalid Index in MSISDN - Set Activated
[USIM_%d] MSISDN is *not* present in UICC - Set Activated
[USIM_%d] **Error when Updating Records
[USIM_%d] usim_MemAllocTrack: size = 0 , %s, %d
[USIM_%d] [INFO] ICCID:
[USIM_%d] [INFO] PIN(1:ENABLED,2:DISABLED, 3:BLOCKED ) PIN1: %x, PIN2: %x
[USIM_%d] [INFO] CSIM PIN(1:ENABLED,2:DISABLED, 3:BLOCKED ) PIN1: %x, PIN2: %x
[USIM_%d] [INFO] IMSI:
[USIM_%d] [INFO] SST:
[USIM_%d] [INFO] UST:
[USIM_%d] [INFO] RUIMST:
[USIM_%d] [INFO] CSIMST:
[USIM_%d] [INFO] Domestic Card Type: %d
[USIM_%d] [INFO] SIM1 LockInfo:
[USIM_%d] [INFO] SIM2 LockInfo:
[USIM_%d] [INFO] Support App: 0x%X
[USIM_%d] Number of BER-TLV Tags in EF: 0x%X
[USIM_%d] Invalid Tag in BER-TLV object
[USIM_%d] Invalid Length in BER-TLV object
[USIM_%d] Current DF != Next DF -> Selecting Next DF
[USIM_%d] Selecting Next DF Successful
[USIM_%d] Selecting Next DF(0x%04X) Not Successful
[USIM_%d] USIM ADF SELECTION FAILED
[USIM_%d] MASTER FILE SELECTION FAILED
[USIM_%d] Selecting Next EF -> PASS
[USIM_%d] SelectEf2, PBM Type2 FileID Incremented to 0x%X
[USIM_%d] The File(0x%04X) is Actvated
[USIM_%d] The File(0x%04X) NOT Actvated
[USIM_%d] Decode Select Rsp FAILED
[USIM_%d] (0x%X) Select rsp length is zero
[USIM_%d] >> usim_IsNextDfValidSelection
[USIM_%d] >> usim_SelectDF
[USIM_%d] SELECT CMD PASSED
[USIM_%d] SELECT CMD FAILED
[USIM_%d] SelRspLen < SIM_MIN_MF_SEL_RSP
[USIM_%d] SelRspLen< SIM_MIN_MF_SEL_RSP
[USIM_%d] USIM_FD_TAG: Validate FCP failtag=%x index %d
[USIM_%d] USIM_FD_TAG: Validate FCP fail tag=%x index %d
[USIM_%d] USIM_FID_TAG: Validate FCP fail tag=%x index %d
[USIM_%d] USIM_FID_TAG: Validate FCP fail tag=%x index %d
[USIM_%d] USIM_AID_TAG: Validate FCP fail tag=%x index %d
[USIM_%d] USIM_AID_TAG: Validate FCP fail tag=%x index %d
[USIM_%d] PropInfoTag = 0x%X
[USIM_%d] Length = 0x%X
[USIM_%d] Index = 0x%X
[USIM_%d] USIM_PROP_INFO_TAG: Validate FCP fail tag=%x index %d
[USIM_%d] USIM_PROP_INFO_TAG: Validate FCP fail tag=%x index %d
[USIM_%d] USIM_LIFE_CYCLE_STAT_TAG: Validate FCP fail tag=%x index %d
[USIM_%d] USIM_LIFE_CYCLE_STAT_TAG: Validate FCP fail tag=%x index %d
[USIM_%d] USIM_FILE_SIZE_TAG: Validate FCP fail tag=%x index %d
[USIM_%d] USIM_PIN_STAT_TEMP_TAG: Validate FCP fail tag=%x index %d
[USIM_%d] USIM_TOTAL_FILE_SIZE_TAG: Validate FCP fail tag=%x index %d
[USIM_%d] USIM_SFI_TAG: Validate FCP fail tag=%x index %d
[USIM_%d] ArrUnderADF is present
[USIM_%d] ArrUnderMF is present
[USIM_%d] >> usim_UseFileDescriptor
[USIM_%d] >> usim_UseFileSize
[USIM_%d] File Id 0x%x
[USIM_%d] >> usim_UseRefExpandedFormatSecurityAttribute
[USIM_%d] Access to EF_ARR Blocked as TLV length is > 4
[USIM_%d] PropInfoTag = 0x%X
[USIM_%d] USIM_PROP_INFO_TAG: Validate FCP fail tag=%x index %d
[USIM_%d] USIM_PROP_INFO_TAG: Validate FCP fail tag=%x index %d
[USIM_%d] USIM_PROP_INFO_TAG: Validate FCP fail tag=%x index %d
[USIM_%d] Index = 0x%X
[USIM_%d] All mandatory PROP_INFO Tag not present
[USIM_%d] >> usim_GetDirUsingAliasFileId - FileId(0x%x)
[USIM_%d] Directory ->
[USIM_%d] usim_GetDirUsingAliasFileId >> Directory(0x%x), Return(%d)
[USIM_%d] >> usim_GetDirUsingAliasFileIdWithServiceCheck - FileId(0x%x)
[USIM_%d] Directory ->
[USIM_%d] Directory -> DF_INVALID
[USIM_%d] usim_GetDirUsingAliasFileIdWithServiceCheck >> Directory(0x%x), Return(%d)
[USIM_%d] %s Hex Dump ->
[USIM_%d] %s Hex Dump ->
[USIM_%d] %s Hex Dump ->
[USIM_%d] %s Hex Dump ->
[USIM_%d] %s Hex Dump ->
[USIM_%d] %s Hex Dump ->
[USIM_%d] %s Hex Dump ->
[USIM_%d] %s Hex Dump ->
[USIM_%d] %s Hex Dump ->
[USIM_%d] %s Hex Dump ->
[USIM_%d] %s Hex Dump ->
[USIM_%d] %s Hex Dump ->
[USIM_%d] %s Hex Dump ->
[USIM_%d] %s Hex Dump ->
[USIM_%d] %s Hex Dump ->
