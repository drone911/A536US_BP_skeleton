[PBM_%d] pbm_DecodeGetCurrentStateReqMsg Entry
[PBM_%d] pbm_DecodeGetMaxCapacityReqMsg Entry
[PBM_%d] pbm_PbTypeChanged
[PBM_%d] pbm_DecodeGetUsedCapacityReqMsg Entry
[PBM_%d] pbm_PbTypeChanged
[PBM_%d] pbm_DecodeGetSupportedFieldsReqMsg Entry
[PBM_%d] pbm_DecodeSelectAdnReqMsg Entry
[PBM_%d] Usim ADN type 0x%x
[PBM_%d] pbm_ProcessUpdateEntryReqMsg Entry
[PBM_%d] Pbtype 0x%x, Index 0x%x, Update type 0x%x, Update data
[PBM_%d] memory allocation fail
[PBM_%d] In function pbm_ProcessUpdateEntryReqMsg: Wrong Update Type %d Received
[PBM_%d] pbm_DecodeSearchEntryReqMsg Entry
[PBM_%d] Pbtype 0x%x Search string.
[PBM_%d] pbm_DecodePbmGetSupportedPhonebookReqMsg Entry
[PBM_%d] pbm_DecodePbmGetStorageCapaReqMsg Entry
[PBM_%d] pbm_PbTypeChanged
[PBM_%d] pbm_DecodeSelectStorageReqMsg Entry
[PBM_%d] pbm_DecodeGetStoragelistReqMsg Entry
[PBM_%d] pbm_DecodeGetEntriesInfoReqMsg Entry
[PBM_%d] pbm_PbTypeChanged
[PBM_%d] pbm_DecodeGet3gPbCapaReqMsg Entry
[PBM_%d] pbm_DecodeReadEntryReqMsg
[PBM_%d] pbm_PbTypeChanged
[PBM_%d] Reading Entry... From Cache
[PBM_%d] pbm_DecodeStartManualCacheReqMsg
[PBM_%d] Start PBM initialization
[PBM_%d] pbm_DecodeUpdateEntryReqMsg Entry
[PBM_%d] pbm_PbTypeChanged
[PBM_%d] 1. datalen 0x%x
[PBM_%d] 2. datalen 0x%x
[PBM_%d] START PROCESSING NS UPDATE REQUEST
[PBM_%d] memory allocation fail
[PBM_%d] PBM_OPERATION_FAILED_DIAL_STR_TOO_LONG = %d
[PBM_%d] UpdateEntryReqResult = %d
[PBM_%d] Sending GetCurrentStatusRsp..... Current Global State 0x%x
[PBM_%d] Sending GetMaxcapacityRsp..... max Entries 0x%x
[PBM_%d] Sending GetUsedcapacityRsp..... used Entries 0x%x
[PBM_%d] Sending GetSupportedFieldsRsp..... numOfFields 0x%x
[PBM_%d] Sending Select AdnRsp..... Result 0x%x
[PBM_%d] ReadPbEntryRsp..... DataLen 0x%x NextIndex 0x%x data.
[PBM_%d] Sending ReadPbEntryRsp..... Entry 0x%x
[PBM_%d] Sending UpdatePbEntryRsp..... Result 0x%x Update type 0x%x index 0x%x
[PBM_%d] Sending SearchPbEntryRsp..... No Of seraches 0x%x
[PBM_%d] Sending PB status Ind. to client 0x%x Status 0x%x
[PBM_%d] Sending Pb Cache Status Ind..... Client 0x%x status 0x%x PBM state .... %x
[PBM_%d] Sending GetSupportedPhonebookRsp..... Supp Phonebook 0x%x
[PBM_%d] Sending Get3gPbCapaRsp TO NS..... Result 0x%x
[PBM_%d] HEX DUMP OF PBM-FIELD
[PBM_%d] HEX DUMP OF Pbm3gPbCapability AFTER COPYING
[PBM_%d] Sending Pb Status Ind to NS..... Client 0x%x
[PBM_%d] pbm_DecodeStartCachingReqMsg Entry pbm_PbmSupportConfig: 0x%x
[PBM_%d] CachingType: 0x%x
[PBM_%d] PBM state cleared and updated CachingType to [%d]
[PBM_%d] pbm_DecodeStartCachingReqMsg Start cache req already received. So ignoring
[PBM_%d] Start PBM initialization
[PBM_%d] PBM caching disabled.
[PBM_%d] Wrong CachingType received
[PBM_%d] Invalid caching Request
[PBM_%d] Handling Get 3G capability %d
[PBM_%d] pbmGetIpcSubParamFromPbmEntry : wrong storage type received
[PBM_%d] pbmGetSubParamFrom3GPbEntry
[PBM_%d] PBM_NonNameFields:%d EmailField: %d, ANRField: %d
[PBM_%d] Extracting 0x%x
[PBM_%d] IpcSubParamLen 0x%x
[PBM_%d] pbmGetSubParamFrom3GPbEntry subParam[3]: %d
[PBM_%d] SKIPPING UN-SUPPORTED FIELD
[PBM_%d] In PBMConvertUCS2_to_GSM.....result %d output len %x
[PBM_%d] In pbm_IsUCS2ToGSM7Possible..result 0x%x ucs2: 0x%x gsm7 : 0x%x
[PBM_%d] RetVal in pbm_IsByteFieldTag = %d
[PBM_%d] ucs2_type 0x%x
[PBM_%d] C7 modified to 0x%x
[PBM_%d] KSC5601 encoding
[PBM_%d] Name Tag converted from UCS2 to KSC5601
[PBM_%d] Name Tag converted from UCS2 to GSM7 bit isallGSM
[PBM_%d] field length received from SIPC too large..fieldTag= 0x%x, FieldLength=0x%X !
[PBM_%d] E7 --> 09
[PBM_%d] Wrong Encoding type 0x%x
[PBM_%d] field length received from SIPC too large..fieldTag= 0x%x, FieldLength=0x%X
[PBM_%d] Wrong Field tag found Tag: 0x%x parsed dataLen: 0x%x
[PBM_%d] test print alphaId[%d]: 0x%x , alphaId[index+1]: 0x%x
[PBM_%d] flag81TypeSupport = FALSE
[PBM_%d] flag82TypeSupport = FALSE
alphaCode: 0x%x , minAlphaCode: 0x%x , maxAlphaCode: 0x%x
[PBM_%d] gsm7 : 0x%x
[PBM_%d] Only Capital C present make flag81TypeSupport = FALSE
[PBM_%d] Enc type : 81 , *halfPageBase: 0x%x
[PBM_%d] Specialcase
[PBM_%d] Both Small C and C present,use strict type 81
[PBM_%d] Enc type : 82 , *fullPageBase: 0x%x
[PBM_%d] Base pointers are diff: ENC type selected: 80
[PBM_%d] All data GSM Default data type
[PBM_%d] pbmGet3GPbEntryFromIpcSubParam.....Name Tag converted from UCS2 to KSC5601
[PBM_%d] AddSubParamToPbEntry.....Name Tag converted from UCS2 to GSM7 bit isallGSM
[PBM_%d] E7 --> 09
[PBM_%d] Wrong Encoding type 0x%x
[PBM_%d] pbm_DecodeSubscriberNumGetReqMsg Entry
[PBM_%d] UCS2 encoding type 0x%x
[PBM_%d] maxlength 0x%x
[PBM_%d] len_count 0x%x, index 0x%x, pbmEntry[index] 0x%x, pbmEntry[index+1] 0x%x
[PBM_%d] IpcSubParamLen 0x%x
[PBM_%d] C7 modified to 0x%x
[PBM_%d] UCS2 encoding is invalid
[PBM_%d] <<< PBMConvertGsm7_to_UCS2 input_u8: 0x%x *output_ucs2_char: 0x%x
[PBM_%d] KSC5601 bytes 0x%X 0x%X
[PBM_%d] KSC5601 Extended bytes 0x%X 0x%X
[PBM_%d] pbm_handleConversionUCS2ToKSC5601 srcLen 0x%X *outNoOfChar 0x%X
[PBM_%d] UCSChar bytes 0x%X
[PBM_%d] KSC5601 0x%X
[PBM_%d]
[PBM_%d] pbm_handleConvertionKSC5601ToUCS2 srcLen 0x%X *outNoOfChar 0x%X
[PBM_%d] KSC5601 bytes 0x%X
[PBM_%d] UCS2 char 0x%X
[PBM_%d] KSC5601 match not found !!!
[PBM_%d] src[index] 0x%x
[PBM_%d] chaning ASCII @ char to GSM7bit @ char at index 0x%x
[PBM_%d] src[index] 0x%x
