[USIM_%d] >> usim_ReadEfFromCache
[USIM_%d] EF Found ,Index-> 0x%02X
[USIM_%d] >> usim_ReadEfFromCache CacheState=%d
[USIM_%d] offset or offset Length are invalid
[USIM_%d] Mode is Not Absolute Can't be Read From Cache
[USIM_%d] MEMALLOC FAILS !
[USIM_%d] NULL buffer addr. received!!! (usim_Cache[Index].EfData- 0x%X
[USIM_%d] EfSize is zero!! skip to mem alloc !!
[USIM_%d] EF Data Not Assigned
[USIM_%d] EF Not Found!!
[USIM_%d] >> ReadRecordFromCache,Rec Num -> 0x%02X
[USIM_%d] Record found , Index -> 0x%02X
[USIM_%d] NULL buffer addr. received!!! (usim_Cache[Index].EfData- 0x%X
[USIM_%d] File Found,Record doesnt exist in cache
[USIM_%d] EF Not Found !!
[USIM_%d] >> ReadParamFromCache,ElementId-> 0x%02X, Record Num-> 0x%02X
[USIM_%d] EF found in Cache, Index-> 0x%02X
[USIM_%d] File Found but Requested Record Number Does Not Exist in Cache
[USIM_%d] Parameter Offset -> 0x%02X
[USIM_%d] NULL buffer addr. received!!! (usim_Cache[Index].EfData- 0x%X
[USIM_%d] File Found but ElementId Doesnt Exist
[USIM_%d] File Found but Record Num Doesnt Exist
[USIM_%d] EF Not Found!!
[USIM_%d] >> usim_ReadBerTlvObjFromCache,Tag -> 0x%02X 0x%02X 0x%02X
[USIM_%d] NULL buffer addr. received!!! (usim_Cache[Index].EfData- 0x%X
[USIM_%d] MEMALLOC FAILS !
[USIM_%d] NULL buffer addr. received!!! (usim_Cache[Index].EfData- 0x%X
[USIM_%d] MEMALLOC FAILS !
[USIM_%d] File Found, BER TLV Object doesnt exist in cache
[USIM_%d] EF Not Found !!
[USIM_%d] >> UpdateAllCacheData
[USIM_%d] Found EF_UST ,Index -> %d
[USIM_%d] Unable To Write To Cache
[USIM_%d] Found EF_SST,Index -> %d
[USIM_%d] Unable To Write To Cache
[USIM_%d] IMSI Length > 8 bytes, limiting it to 8 Bytes
[USIM_%d] IMSI Replacement is enabled so MCC & MNC of all 0XFF changed to 001 01
[USIM_%d] usim_IsCsimProvisioned -> %d
[USIM_%d] isCMCCOperator: Entry!
[USIM_%d] MCC/MNC found in CMCC plmn list!
[USIM_%d] usim_CustomEhplmnHandling: MCC/MNC not matched with CMCC list!
[USIM_%d] usim_CustomEhplmnHandling:usim_GetMccMnc FAILS !
[USIM_%d] >> ReadFromSimAndWriteToCache,CacheFileIndex -> %d
[USIM_%d] Reading IMSIP instead of IMSI
[USIM_%d] BER-TLV Info Object Info not written to cache
[USIM_%d] Unable to Write Ef into cache
[USIM_%d] Unable to Read Ef from SIM
[USIM_%d] >> UpdateEfInCache
[USIM_%d] Found EF in Cache,Index -> %d
[USIM_%d] Record Can't be updated with this Mode- %d
[USIM_%d] Updated len > Cached len
[USIM_%d] NULL buffer addr. received!!! (usim_Cache[Index].EfData- 0x%X
[USIM_%d] Ef not updated in Cache
[USIM_%d] Ef not found!!
[USIM_%d] >> UpdateRecordInCache,FileId-> 0x%02X, Rec Num-> 0x%02X
[USIM_%d] Record Found ,Index-> %d
[USIM_%d] NULL buffer addr. usim_Cache[Index].EfData
[USIM_%d] File Found but Requested Record Number Does Not Exist in Cache
[USIM_%d] Record Not Found In Cache
[USIM_%d] >> UpdateParamInCache. ElementId -> 0x%02X, RecordNumber -> 0x%02X
[USIM_%d] EF found , Index -> 0x%02X
[USIM_%d] File Found but ElementId Doesnt Exist
[USIM_%d] Parameter Offset-> 0x%02X
[USIM_%d] NULL buffer addr. usim_Cache[Index].EfData
[USIM_%d] File Found but ElementId Does Not Exist
[USIM_%d] ElementID Not Found In Cache
[USIM_%d] >> WriteModifiedCahceDataToDevice
[USIM_%d] Using SFID:0x%X
[USIM_%d] File(0x%X) not updated to UICC,rest of modified files will be skipped due to txrx error
[USIM_%d] File NOT Modified:0x%X
[USIM_%d] Attempting to Write Again,Attempt Count-> %d
[USIM_%d] Exceeded Write Attempt Count, Abroting ,Attempt Count-> %d
[USIM_%d] All Data Written to the UICC
[USIM_%d] >> FindModifiedCacheFiles
[USIM_%d] >> GetParamOffsetInEf
[USIM_%d] ELEMENT_IMSI,
[USIM_%d] ELEMENT_CK(or ELEMENT_CKPS),
[USIM_%d] ELEMENT_IK(or ELEMENT_IKPS),
[USIM_%d] ELEMENT_KSI(or ELEMENT_KSIPS),
[USIM_%d] ELEMENT_HPLMNPERIOD,
[USIM_%d] ELEMENT_ACMMAX ,
[USIM_%d] ELEMENT_SPN,
[USIM_%d] ELEMENT_CURRCODE,
[USIM_%d] ELEMENT_PRICEPERUNIT,
[USIM_%d] ELEMENT_ACC,
[USIM_%d] ELEMENT_TMSI,
[USIM_%d] ELEMENT_LAI,
[USIM_%d] ELEMENT_LAU_STATUS,
[USIM_%d] ELEMENT_PTMSI,
[USIM_%d] ELEMENT_PTMSI_SIG,
[USIM_%d] ELEMENT_RAI,
[USIM_%d] ELEMENT_RAU_STATUS,
[USIM_%d] ELEMENT_UE_OPERATION_MODE,
[USIM_%d] ELEMENT_LEN_OF_MNC_IN_IMSI,
[USIM_%d] ELEMENT_LEN_OF_MNC_IN_IMSI,
[USIM_%d] ELEMENT_LAST_USED_TP_MR,
[USIM_%d] ELEMENT_MEM_CAP_EXCEEDED_NOTF_FLAG,
[USIM_%d] ELEMENT_eMLPP_PRIORITY_LEVELS,
[USIM_%d] ELEMENT_eMLPP_FAST_CALL_SETUP_CONDS,
[USIM_%d] ELEMENT_AUTOMATIC_ANSWER_PRIORITY_LEVELS,
[USIM_%d] ELEMENT_HIDDEN_KEY,
[USIM_%d] ELEMENT_START_CS,
[USIM_%d] ELEMENT_START_PS,
[USIM_%d] ELEMENT_MAX_START_CS_OR_PS,
[USIM_%d] ELEMENT_RPLMN_ACT,
[USIM_%d] ELEMENT_ICCID,
[USIM_%d] ELEMENT_Kc (or ELEMENT_KcGPRS),
[USIM_%d] ELEMENT_CIPHER_KEY_SEQ_NUMB(or ELEMENT_CIPHER_KEY_SEQ_NUMB_GPRS),
[USIM_%d] ELEMENT_BCCH_INFO,
[USIM_%d] ELEMENT_VBSS_ACT_DEACT_FLAGS,
[USIM_%d] ELEMENT_PTMSI_ON_SIM,
[USIM_%d] ELEMENT_PTMSI_SIG_ON_SIM,
[USIM_%d] ELEMENT_RAI_ON_SIM,
[USIM_%d] ELEMENT_RAU_STATUS_ON_SIM,
[USIM_%d] ELEMENT_CSIM_SMS_STATUS,
[USIM_%d] ELEMENT_CSIM_MEM_CAP_EXCEEDED_FLAG,
[USIM_%d] Invalid Element (0x%02X)
[USIM_%d] Offset-> %d,Len-> %d
[USIM_%d] >> CheckUSimST SN-%d, result=%d
[USIM_%d] >> CheckSimST SN-%d, Result=%d
[USIM_%d] Invalid Bit Position
[USIM_%d] File ID-> 0x%x
[USIM_%d] File exists in -> %d
[USIM_%d] File structure -> %d
[USIM_%d] File structure -> %d
[USIM_%d] File needs updating/not -> %d
[USIM_%d] usim_SetUpdateSimOnPowerDownStatus: %d
[USIM_%d] Invalid status!!!
[USIM_%d] Cache Available->
[USIM_%d] Displaying Cache Ef Data
[USIM_%d] EF_TYPE_TRANSPARENT
[USIM_%d] Cyclic or Linear
[USIM_%d] Needs Updating ->
[USIM_%d] Num Of Records -> %d,DataLength -> %d,EfSize -> %d
[USIM_%d] EF Not Found
[USIM_%d] File Exists In ->
[USIM_%d] EF Not Found
[USIM_%d] Cache And Save Status ->
[USIM_%d] NORMAL Initialisation of <Cache>
[USIM_%d] RAT change Initialisation of <Cache>
[USIM_%d] Refresh Initialisation of <Cache>
[USIM_%d] Unknown Init Type (%x)
[USIM_%d] Cache Memory Deleted
[USIM_%d] Cache Memory Deleted
[USIM_%d] Cache index is INVALID!!!
[USIM_%d] >> usim_DoUSimCache
[USIM_%d] Relevant Service NOT Available!
[USIM_%d] Unable To Write To Cache
[USIM_%d] FileID (0x%02X),Not Available in this Application
[USIM_%d] ISim Cache Memory Deleted
[USIM_%d] >> usim_EhplmnDataOptimization >>
[USIM_%d] Skip usim_EhplmnOptimization for factory VSIM
[USIM_%d] >> ReadFromSimAndWriteToCache::EHPLMN Reading from SIM Failed, CacheFileIndex -> %d
[USIM_%d] usim_ReadFromSimAndWriteToCache- EF_EHPLMN: RspDataLength is: %d
[USIM_%d] All entries in EF_EHPLMN are 0x00/0xFF!
[USIM_%d] All entries in EF_EHPLMN are Non-Zero means it has valid entry. No customisation required!
[USIM_%d] >> ReadFromSimAndWriteToCache::EHPLMN empty ,CacheFileIndex -> %d
[USIM_%d] Customisation required for EF_EHPLMN entry!
[USIM_%d] usim_CustomEhplmnHandling: Entry!
[USIM_%d] MEMALLOC FAILS !
[USIM_%d] CMCC HPLMNs Data copied into RspDataPtr to save into cache %d
[USIM_%d] Updated Ehplmn list by EFS success !
[USIM_%d] >> usim_HplmnNwActDataOptimization >>
[USIM_%d] Skip usim_EhplmnwactOptimization for factory VSIM
[USIM_%d] >> ReadFromSimAndWriteToCache::HPLMNwACT Reading from SIM Failed, CacheFileIndex -> %d
[USIM_%d] usim_ReadFromSimAndWriteToCache- EF_HPLMNwACT: RspDataLength is: %d
[USIM_%d] All entries in EF_HPLMNwACT are Zero!
[USIM_%d] All entries in EF_HPLMNwACT are Non-Zero means it has valid entry. No customisation required!
[USIM_%d] Customisation required for EF_HPLMNwACT entry!
[USIM_%d] usim_CustomHplmnwActHandling: Entry!
[USIM_%d] MEMALLOC FAILS !
[USIM_%d] CMCC HPLMNwAct Data copied into RspDataPtr to save into cache %d
[USIM_%d] Updated hplmnwact list by EFS success !
