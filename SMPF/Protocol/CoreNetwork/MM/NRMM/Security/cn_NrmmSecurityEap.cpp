[W :MM,%d] Warning: The length of data is 0
[MM|%d,CP] Warning: The length of data is 0
[A :MM,%d] %%!EM ERROR : remaining EAP-AKA Message length is invalid: %d
[MM|%d,CP] %%!EM ERROR : remaining EAP-AKA Message length is invalid: %d
[D :MM,%d] : EAP-AKA Subtype[%d]
[D :MM,%d] Decode Eap Message
[A :MM,%d] %%!EM ERROR : Message length(%d) is invalid
[MM|%d,CP] %%!EM ERROR : Message length(%d) is invalid
[A :MM,%d] %%!EM ERROR : Message length(%d) exceeded max size(%d)
[MM|%d,CP] %%!EM ERROR : Message length(%d) exceeded max size(%d)
[A :MM,%d] %%!EM ERROR : Invalid Code: %d
[MM|%d,CP] %%!EM ERROR : Invalid Code: %d
[A :MM,%d] %%!EM ERROR : Length mismatch! len[%d], eapLen[%d]
[MM|%d,CP] %%!EM ERROR : Length mismatch! len[%d], eapLen[%d]
[D :MM,%d] : Code[%d] Identifier[%d]
[A :MM,%d] %%!EM ERROR : Invalid Code: %d
[MM|%d,CP] %%!EM ERROR : Invalid Code: %d
[D :MM,%d] : Type[%d]
[A :MM,%d] %%!EM ERROR : Unsupported type : %d
[MM|%d,CP] %%!EM ERROR : Unsupported type : %d
[D :MM,%d] Encode Eap Message
[D :MM,%d] : Code[%d] Identifier[%d] Type[%d]
[D :MM,%d] : EAP_TYPE_IDENTITY
[DumpHex] : Identity
[D :MM,%d] : EAP-AKA Subtype[%d]
[D :MM,%d] : EAP_AKA_SUBTYPE_AKA_CHALLENGE
[D :MM,%d] : EAP_AKA_SUBTYPE_AKA_IDENTITY
[D :MM,%d] : EAP_AKA_SUBTYPE_NOTIFICATION
[D :MM,%d] : EAP_AKA_SUBTYPE_REAUTHENTICATION
[D :MM,%d] : EAP_AKA_SUBTYPE_CLIENT_ERROR
[D :MM,%d] : EAP_AKA_SUBTYPE_AKA_SYNC_FAIL
[D :MM,%d] totalLength : %d
[A :MM,%d] %%!EM ERROR : encryption recipie invalid iv[%d] Kenc[%d]
[MM|%d,CP] %%!EM ERROR : encryption recipie invalid iv[%d] Kenc[%d]
[A :MM,%d] %%!EM ERROR : Memory allocation is failed. plainData[%02X], dataLen[%d]
[MM|%d,CP] %%!EM ERROR : Memory allocation is failed. plainData[%02X], dataLen[%d]
[DumpHex] : AT_ENCR plain
[DumpHex] : AT_ENCR encrypted
[DumpHex] : AT_MAC
[A :MM,%d] %%!EM ERROR : AT_RES is not set
[MM|%d,CP] %%!EM ERROR : AT_RES is not set
[DumpHex] : AT_RES
[D :MM,%d] : AT_MAC
[D :MM,%d] : AT_RESULT_IND
[DumpHex] : AT_IV
[D :MM,%d] : AT_ENCR_DATA
[D :MM,%d] : AT_COUNTER : %d
[D :MM,%d] : AT_PADDING Length :
[D :MM,%d] : AT_MAC
[DumpHex] : AT_IV
[D :MM,%d] : AT_ENCR_DATA
[D :MM,%d] : AT_COUNTER : %d
[D :MM,%d] : AT_COUNTER_TOO_SMALL
[D :MM,%d] : AT_PADDING Length :
[D :MM,%d] : AT_MAC
[D :MM,%d] : AT_RESULT_IND
[A :MM,%d] %%!EM ERROR : AT_IDENTITY is not set
[MM|%d,CP] %%!EM ERROR : AT_IDENTITY is not set
[DumpHex] : AT_IDENTITY
[A :MM,%d] %%!EM ERROR : CLIENT_ERROR_CODE is not set
[MM|%d,CP] %%!EM ERROR : CLIENT_ERROR_CODE is not set
[D :MM,%d] : AT_CLIENT_ERROR : %d
[A :MM,%d] %%!EM ERROR : AUTS is not set
[MM|%d,CP] %%!EM ERROR : AUTS is not set
[DumpHex] : AT_AUTS
[A :MM,%d] %%!EM ERROR : Invalid length of attribute: %d ( > remainLength: %d)
[MM|%d,CP] %%!EM ERROR : Invalid length of attribute: %d ( > remainLength: %d)
[D :MM,%d] : Attribute Type : %d
[A :MM,%d] %%!EM ERROR : Invalid length of AT_ID_REQ attribute: %d
[MM|%d,CP] %%!EM ERROR : Invalid length of AT_ID_REQ attribute: %d
[A :MM,%d] %%!EM ERROR : Invalid length of AT_RAND attribute: %d
[MM|%d,CP] %%!EM ERROR : Invalid length of AT_RAND attribute: %d
[DumpHex] : AT_RAND
[A :MM,%d] %%!EM ERROR : Invalid length of AT_AUTN attribute: %d
[MM|%d,CP] %%!EM ERROR : Invalid length of AT_AUTN attribute: %d
[DumpHex] : AT_AUTN
[A :MM,%d] %%!EM ERROR : Invalid attribute AT_RES on the peer
[MM|%d,CP] %%!EM ERROR : Invalid attribute AT_RES on the peer
[A :MM,%d] %%!EM ERROR : Invalid attribute AT_AUTS on the peer
[MM|%d,CP] %%!EM ERROR : Invalid attribute AT_AUTS on the peer
[A :MM,%d] %%!EM ERROR : Invalid length of AT_MAC attribute: %d
[MM|%d,CP] %%!EM ERROR : Invalid length of AT_MAC attribute: %d
[DumpHex] : MAC
[DumpHex] : AT_KDF_INPUT
[A :MM,%d] %%!EM ERROR : Invalid length of AT_KDF attribute: %d
[MM|%d,CP] %%!EM ERROR : Invalid length of AT_KDF attribute: %d
[D :MM,%d] : KDF : %d
[D :MM,%d] : AT_RESULT_IND : %d
[A :MM,%d] %%!EM ERROR : Invalid length of AT_IV attribute: %d
[MM|%d,CP] %%!EM ERROR : Invalid length of AT_IV attribute: %d
[DumpHex] : AT_IV
[A :MM,%d] %%!EM ERROR : Invalid length of AT_NOTIFICATION attribute: %d
[MM|%d,CP] %%!EM ERROR : Invalid length of AT_NOTIFICATION attribute: %d
[D :MM,%d] : Notification code : %d
[D :MM,%d] : AT_ENCR_DATA : %d
[DumpHex] : AT_NEXT_REAUTH_ID
[D :MM,%d] : AT_COUNTER : %d
[D :MM,%d] : AT_COUNTER_TOO_SMALL
[DumpHex] : AT_NONCE_S
[DumpHex] : ERROR : Invalid at padding
[D :MM,%d] : AT_TRUST_IND
[D :MM,%d] : AT_CHECKCODE : Doesn't support AT_CHECKCODE
[D :MM,%d] %%!EM ERROR : Unhandled attribute: %d, length: %d
[DumpHex] Received msg:
[DumpHex] Received AT_MAC:
[DumpHex] HmacSha256 mac output :
[E :MM,%d] ValidateEapAkaMac failed!
[E :MM,%d] ValidateEapAkaMac success!
[A :MM,%d] %%!EM ERROR : DecryptEncData. Can't decrypt enc data double time
[MM|%d,CP] %%!EM ERROR : DecryptEncData. Can't decrypt enc data double time
[A :MM,%d] %%!EM ERROR : encryption recipie invalid iv[%d] Kenc[%d]
[MM|%d,CP] %%!EM ERROR : encryption recipie invalid iv[%d] Kenc[%d]
