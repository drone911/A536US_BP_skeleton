[USIM_%d] [PERSO]>> InitializeIMSILockKey
[USIM_%d] [PERSO]StoredKeyValue-
[USIM_%d] [PERSO]Updating IMSI LOCK Key
[USIM_%d] [PERSO]SHA KeyValue value-
[USIM_%d] [PERSO]Registry value is 0, changing it to 0xdFF's
[USIM_%d] [PERSO]Registry value is 0, changing it to 0xdFF's
[USIM_%d] [PERSO]LockType= %d, minPinLen= %d
[USIM_%d] [PERSO]LockType= %d, maxPinLen= %d
[USIM_%d] [PERSO] (v0.1) usim_GetLockCodeSize, allocSize:%d
[USIM_%d] [PERSO] usim_GetLockCodeSize, allocSize:%d
[USIM_%d] [PERSO]MEMALLOC FAILS
[USIM_%d] Byte value F of f encounter
[USIM_%d] [PERSO]Encountered end string of regional lock
[USIM_%d] [PERSO]codeIndex: %d > LOCK_CODE_SIZE
[USIM_%d] [PERSO]MEMALLOC FAILS
[USIM_%d] [PERSO]FmtLockCode is->
[USIM_%d] [PERSO]FmtLockCode->
[USIM_%d] [PERSO]MEMALLOC Fails
[USIM_%d] >> usim_CheckNationalLock
[USIM_%d] Index %d, RegCodeValue[Index] :%d, RegCodeValue[Index+1]: %d, RegCodeValue[Index+2]: %d, RegCodeValue[Index+3]: %d, RegCodeValue[Index+4]: %d, RegCodeValue[Index+5]: %d
[USIM_%d] MNC value 0xFF -Check PASS
[USIM_%d] MCC-MNC (2 bytes) MATCH To REGCODE -Check PASS
[USIM_%d] MCC-MNC (3 bytes) MATCH To REGCODE -Check PASS
[USIM_%d] MCC-MNC Does Not Match To REG CODE -- Check Failed
[USIM_%d] ERROR READING REGCODE: NumOfCodes = %d
[USIM_%d] [PERSO]Index %d, RegCodeValue[Index] :%d , RegCodeValue[Index+1]: %d, RegCodeValue[Index+2]: %d
[USIM_%d] [PERSO] 3digit MNC compared with 2digit REGCODE - Skipped
[USIM_%d] [PERSO]MCC-MNC (2 bytes) MATCH To REGCODE -Check PASS
[USIM_%d] [PERSO]MCC-MNC (2 bytes) MATCH To REGCODE -Check PASS
[USIM_%d] [PERSO]MCC-MNC (3 bytes) MATCH To REGCODE -Check PASS
[USIM_%d] [PERSO]MCC-MNC Does Not Match To REG CODE -- Check Failed
[USIM_%d] [PERSO]ERROR READING REGCODE: NumOfCodes = %d
[USIM_%d] [PERSO]PACIFIC_ISLANDS_LOCK MEMALLOC FAILS
[USIM_%d] [PERSO]PACIFIC_ISLANDS_LOCK MATCHED MCC: %02X %02X %02X, MNC: %02X %02X %02X
[USIM_%d] MNCLen = %d, changed to %d
[USIM_%d] EF_AD does not contain Length of MNC, set MNCLen to %d
[USIM_%d] Failed to Read EF_AD, set MNCLen to %d
[USIM_%d] [PERSO]PACIFIC_ISLANDS_LOCK: Fail to Re-Write the white list,
[USIM_%d] [PERSO]PACIFIC_ISLANDS_LOCK Re-Writed MCC: %02X %02X %02X, MNC: %02X %02X %02X
[USIM_%d] RSU TEST SIM check
[USIM_%d] RSU TEST SIM check: Skip at index: %d
[USIM_%d] [PERSO] TEST SIM CARD INSERTED
[USIM_%d] [PERSO] usim_TestSimMccMnc :
[USIM_%d] [PERSO]TEST UE & SIM CHECK
[USIM_%d] [PERSO]Reg.IMEI Value:
[USIM_%d] [PERSO]Reg.Test MCC/MNC Value:
[USIM_%d] [PERSO]IMSI NOT VALID NCK CODE CHECK REQUIRED
[USIM_%d] [PERSO]IMEI Not Zero, MCC/MNC Check Failed
[USIM_%d] [PERSO]TYPE: NETWORK, STATE: %d
[USIM_%d] [PERSO]As per TMO requirement, force to enable SP LOCK!!!
[USIM_%d] [PERSO]TYPE: NETWORK SUBSET, STATE: %d
[USIM_%d] [PERSO]As per TMO requirement, force to disable NSP LOCK!!!
[USIM_%d] [PERSO]TYPE: SERVICE PROVIDER, STATE: %d
[USIM_%d] [PERSO]As per MPCS requirement, force to enable SP LOCK!!!
[USIM_%d] [PERSO]Number of GID in SLB is ZERO, force to disable SP LOCK!!!
[USIM_%d] [PERSO]As per TMO requirement, force to enable SP LOCK!!!
[USIM_%d] [PERSO] SSU : Skip checking GID length integrity - TSS based SSU
[USIM_%d] [PERSO] SSU : ERROR - Number of GID in SSUB is ZERO, force to disable SP LOCK!!!
[USIM_%d] [PERSO] SSU : force to enable SP LOCK
[USIM_%d] [PERSO]TYPE: CORPORATE, STATE: %d
[USIM_%d] [PERSO] Disable CP LOCK for SSU
[USIM_%d] [PERSO]TYPE: SIM PERSONAL (IMSI), STATE: %d
[USIM_%d] [PERSO]As per TMO requirement, force to disable IMSI LOCK!!!
[USIM_%d] [PERSO]TYPE: REGIONAL, STATE: %d
[USIM_%d] [PERSO]Regional Lock not handled, STATE: %d
[USIM_%d] [PERSO]TYPE: UNKNOWN, STATE: %d
[USIM_%d] [PERSO]>> DecodeLockEnableReq, Body is NULL
[USIM_%d] [PERSO]>> DecodeLockEnableReq, LockType = %d
[USIM_%d] [PERSO]Invalid LockType!!!
[USIM_%d] [PERSO]USIM_CARD_ABSENT!!!
[USIM_%d] [PERSO]Invalid State!!!
[USIM_%d] [PERSO]>> SendSimLockEnableRsp, Result:%d, LockType: %d
[USIM_%d] [PERSO]ProcessEnableNetworkLockReq
[USIM_%d] [PERSO]PinLength(=%d) Invalid
[USIM_%d] [PERSO]PinLength- %d, PinValue-
[USIM_%d] [PERSO]Registry value is 0, changing it to F's
[USIM_%d] [PERSO]StoredCodeValue corrupted, initializing it to F's
[USIM_%d] [PERSO]Same Entry already exists
[USIM_%d] [PERSO]Pin value
[USIM_%d] [PERSO]Network Lock Already Enabled
[USIM_%d] StoredKeyValue -
[USIM_%d] [PERSO]SHA Pin value -
[USIM_%d] [PERSO]INVALID PIN Entered
[USIM_%d] [PERSO]Stored Code is -
[USIM_%d] [PERSO]Final Stored Code is -
[USIM_%d] [PERSO]Index out of bounds - %d
[USIM_%d] [PERSO]>> ProcessEnableSubsetLockReq
[USIM_%d] [PERSO]NSCKLength(=%d) Invalid
[USIM_%d] [PERSO]NSCKLength- %d,NSCK -
[USIM_%d] [PERSO]NSCK (32 Bytes)
[USIM_%d] [PERSO]NSP is already enabled
[USIM_%d] [PERSO]Registry value is 0, changing it to 0xdFF's
[USIM_%d] [PERSO]SubsetCodeInAscii 0x%02X 0x%02X
[USIM_%d] [PERSO]Same SubsetCode exists
[USIM_%d] [PERSO]Final Stored Code -
[USIM_%d] [PERSO]No free space for new Subset code!!!
[USIM_%d] [PERSO]Invalid NSCK is entered
[USIM_%d] [PERSO]>> ProcessEnableSPLockReq
[USIM_%d] [PERSO]Entered SP code (=%d) is invalid !!!
[USIM_%d] [PERSO]SPCKLength(=%d) Invalid
[USIM_%d] [PERSO]SPCKLength- %d,SPCK -
[USIM_%d] [PERSO]SPCK (32 Bytes)
[USIM_%d] [PERSO]SPP is already enabled
[USIM_%d] [PERSO]Registry value is 0, changing it to 0xFF's
[USIM_%d] [PERSO]SpCodeInAscii 0x%02X 0x%02X
[USIM_%d] [PERSO]Same SpCode exists
[USIM_%d] [PERSO]Final Stored Code -
[USIM_%d] [PERSO]No free space for new SP code!!!
[USIM_%d] [PERSO]Invalid SPCK is entered
[USIM_%d] [PERSO]>> ProcessEnableCPLockReq
[USIM_%d] [PERSO]Entered corporate code (=%d) is invalid !!!
[USIM_%d] [PERSO]CCKLength(=%d) Invalid
[USIM_%d] [PERSO]CCKLength- %d,CCK -
[USIM_%d] [PERSO]CCK (32 Bytes)
[USIM_%d] [PERSO]CP is already enabled
[USIM_%d] [PERSO]Registry value is 0, changing it to 0xFF's
[USIM_%d] [PERSO]CpCodeInAscii 0x%02X 0x%02X
[USIM_%d] [PERSO]Same CorporateCode exists
[USIM_%d] [PERSO]Final Stored Code -
[USIM_%d] [PERSO]No free space for new corporated code!!!
[USIM_%d] [PERSO]Invalid CCK is entered
[USIM_%d] [PERSO]MEMALLOC FAILS
[USIM_%d] [PERSO]MEMALLOC Fails
[USIM_%d] [PERSO]ProcessEnableIMSILockReq
[USIM_%d] [PERSO]PinLength(=%d) Invalid
[USIM_%d] [PERSO]PinLength- %d, PinValue-
[USIM_%d] [PERSO][SIM LOCK] LockState- %d
[USIM_%d] [PERSO]IMSI Lock Already Enabled
[USIM_%d] [PERSO]IMSI Length Read not proper
[USIM_%d] [PERSO]SIM imsi-
[USIM_%d] [PERSO]Stored IMSI-
[USIM_%d] [PERSO]StoredIMSIValue and HashImsiValue SAME
[USIM_%d] [PERSO]IMSI Compared failure
[USIM_%d] [PERSO]StoredKeyValue-
[USIM_%d] [PERSO]SHA pin value-
[USIM_%d] [PERSO]StoredKeyValue, HashPinValue are SAME
[USIM_%d] [PERSO]New LockCode written,RetValBool- %d
[USIM_%d] [PERSO]pin cHECK FAILED
[USIM_%d] [PERSO]SimLockSendVerifyLockKeyRsp PinType: %d, Status:%d, NumOfAttemptsInReg: %d
[USIM_%d] [PERSO]PinLength(=%d) Invalid
[USIM_%d] [PERSO]NumOfAttemptsInReg: %d
[USIM_%d] [PERSO]DecodeVerifyLockKeyReq state
[USIM_%d] [PERSO]%d NumOfAttemptsInReg
[USIM_%d] [PERSO][SIM LOCK] Num of Attempts invalid
[USIM_%d] [PERSO]SHA Pin value-
[USIM_%d] [PERSO]StoredPinValue-
[USIM_%d] [PERSO]Pin check failed
[USIM_%d] [PERSO]Currently Not supported Lock
[USIM_%d] [PERSO]USIM_CARD_ABSENT
[USIM_%d] [PERSO]>> DoSimLockCheck, SendInd= %d
[USIM_%d] [PERSO] SSU : SUB Certification failed
[USIM_%d] [PERSO] Regional Lock disabled for carrier Id E27
[USIM_%d] [PERSO]IMSIlength %d, IMSI Value:
[USIM_%d] [PERSO] Test SIM check : MCC=%d%d%d, MNC=%d%d%X
[USIM_%d] [PERSO] TEST SIM CARD INSERTED
[USIM_%d] [PERSO] usim_TestSimMccMnc :
[USIM_%d] [PERSO] usim_CheckForTestSim : Retval=%d
[USIM_%d] [PERSO]State: %d, Count:%d, ErrCause:%d, LockType: %d, DiffUicc: %d
[USIM_%d] [PERSO]CombinedDiffUicc = %d
[USIM_%d] [PERSO]State: %d, Count:%d, ErrCause:%d, LockType: %d, DiffUicc: %d
[USIM_%d] [PERSO] Combined mismatch NCKErrCause = %d
[USIM_%d] [PERSO]SendDepersonalizedMsg SIM Lock PASS
[USIM_%d] [PERSO]DecodeUserNCKInput State
[USIM_%d] [PERSO]NckType: %d NckLength: %d,NckValue-
[USIM_%d] Max Count 0x%x
[USIM_%d] [PERSO]Count in CheckNCKValue: %d
[USIM_%d] [PERSO]LOCK TYPE: %d
[USIM_%d] [PERSO]TYPE: UNKNOWN
[USIM_%d] [PERSO]NCK Verification
[USIM_%d] [PERSO]NCK Verification failed,Count %d
[USIM_%d] [PERSO]Now Check MCK for TMOUSA, no count reduce
[USIM_%d] [PERSO]NCKCODE READ FAILED
[USIM_%d] [PERSO]Reading MASTERKEY
[USIM_%d] [PERSO]MASTER NCK Verification
[USIM_%d] [PERSO]NCK MASTERCODE CHECK FAILED
[USIM_%d] [PERSO]INVALID NCKCODE LENGTH 0x%x AttemptCount 0x%x
[USIM_%d] [PERSO]regCustCode = %c%c%c
[USIM_%d] [PERSO]regCustCode = %c%c%c%c%c
[USIM_%d] [PERSO]regCustCode = %c%c%c
[USIM_%d] NCLockState = %d ,NCLockType = %d
[USIM_%d] [PERSO]TYPE: NETWORK,RETRYCOUNT: %d
[USIM_%d] [PERSO]TYPE: NETWORK SUBSET,RETRYCOUNT: %d
[USIM_%d] [PERSO]TYPE:SERVICE PROVIDER,RETRYCOUNT: %d
[USIM_%d] [PERSO]TYPE:CORPORATE,RETRYCOUNT: %d
[USIM_%d] [PERSO]TYPE:SIM PERSONAL(IMSI),RETRYCOUNT: %d
[USIM_%d] [PERSO]TYPE:UNKNOWN, RETRYCOUNT: %d
[USIM_%d] [PERSO]TYPE: NETWORK,RETRYCOUNT: %d
[USIM_%d] [PERSO]TYPE: NETWORK SUBSET,RETRYCOUNT: %d
[USIM_%d] [PERSO]TYPE: SERVICE PROVIDER,RETRYCOUNT: %d
[USIM_%d] [PERSO]TYPE :CORPORATE,RETRYCOUNT: %d
[USIM_%d] [PERSO]TYPE: SIM PERSONAL(IMSI),RETRYCOUNT: %d
[USIM_%d] [PERSO]TYPE:UNKNOWN,RETRYCOUNT: %d
[USIM_%d] [PERSO]TYPE: NETWORK,STATE: %d
[USIM_%d] [PERSO]TYPE: NETWORK SUBSET,STATE: %d
[USIM_%d] [PERSO]TYPE: SERVICE PROVIDER,STATE: %d
[USIM_%d] [PERSO]TYPE:CORPORATE,STATE: %d
[USIM_%d] [PERSO]TYPE: SIM PERSONAL(IMSI),STATE: %d
[USIM_%d] [PERSO]TYPE: REGIONAL,STATE: %d
[USIM_%d] [PERSO]Reginal lock not handled,STATE: %d
[USIM_%d] [PERSO]TYPE:UNKNOWN,STATE: %d
[USIM_%d] [PERSO]FLUSHING THE LOCK CODE
[USIM_%d] [PERSO]IMSIlength %d, IMSI Value:
[USIM_%d] [PERSO]MCC matched to one of values in BLACK LIST
[USIM_%d] [PERSO]MCC not matched. Check the next regional lock code
[USIM_%d] [PERSO]ERROR READING REGCODE: NumOfCodes = %d
[USIM_%d] [PERSO]IMSI VALUE-
[USIM_%d] [PERSO]NW SUBSET- %02X %02X
[USIM_%d] [PERSO]NW SUBSET- %02X %02X
[USIM_%d] [PERSO]RegSubset= %d %d %d
[USIM_%d] [PERSO]SUBSET MATCH To REGCODE, Check PASS
[USIM_%d] [PERSO]RegCodeValue %d -
[USIM_%d] [PERSO]SUBSET MATCH To REGCODE, Check PASS
[USIM_%d] [PERSO]SUBSET Doesnt Match To REGCODE, Check Failed
[USIM_%d] [PERSO]ERROR READING REGCODE- NumOfCodes = %d
[USIM_%d] [PERSO]GID1-
[USIM_%d] [PERSO]SpCode is->
[USIM_%d] [PERSO]GID1 File Not Found
[USIM_%d] [PERSO]NumOfCodes = %d, index = %d
[USIM_%d] [PERSO]SP code matches to REGCODE, Check PASS
[USIM_%d] [PERSO]SP code does not match to REGCODE, Check FAIL
[USIM_%d] [PERSO]ERROR READING REGCODE- NumOfCodes = %d
[USIM_%d] [PERSO]MEMALLOC FAILS
[USIM_%d] [PERSO]GID2-
[USIM_%d] [PERSO]CorporateCode is->
[USIM_%d] [PERSO]GID2 File Not Found
[USIM_%d] [PERSO]NumOfCodes = %d, index = %d
[USIM_%d] [PERSO]Corporate code matches to REGCODE, Check PASS
[USIM_%d] [PERSO]Corporate code does not match to REGCODE, Check FAIL
[USIM_%d] [PERSO]ERROR READING REGCODE- NumOfCodes = %d
[USIM_%d] [PERSO]MEMALLOC FAILS
[USIM_%d] [PERSO]MEMALLOC Failed
[USIM_%d] [PERSO]MEMALLOC Fails
[USIM_%d] [PERSO]IMSI-
[USIM_%d] [PERSO]Stored IMSI -
[USIM_%d] [PERSO]StoredIMSIValue and HashImsiValue are SAME
[USIM_%d] [PERSO] SSU : Check GID1
[USIM_%d] [PERSO]NumOfCodes = %d, index = %d
[USIM_%d] [PERSO] SSU : GID1 matches successfully
[USIM_%d] [PERSO]SSU : ERROR - GID1 not matched
[USIM_%d] [PERSO] SSU : ERROR - No GID1 in SSUB
[USIM_%d] [PERSO] SSU : ERROR read fail (EF_GID1)
[USIM_%d] [PERSO] SSU : Check GID1,2 ver0.2
[USIM_%d] [PERSO] SSU : EfGid1Len=%d, EfGid2Len=%d
[USIM_%d] [PERSO] SSU : (v0.2) nGrp=%d, NumOfMapGid1=%d, NumOfMapGid2=%d, Gid1Result=%d, Gid2Result=%d, GidMatchResult=%d,
[USIM_%d] [PERSO] SSU : (v0.2) nGrp=%d, NumOfMapGid1=%d, NumOfMapGid2=%d, Gid1Result=%d, Gid2Result=%d, GidMatchResult=%d,
[USIM_%d] [PERSO] SSU : (debug) nGrp:%d, ssuMatchedGrp:%d
[USIM_%d] [PERSO] SSU : (v0.2) usim_CheckGidforSSU02 result = %d
[USIM_%d] [PERSO] SSU : (v0.2) GRP%d - GID1 matches successfully
[USIM_%d] [PERSO] SSU : (v0.2) GRP%d - GID2 matches successfully
[USIM_%d] [PERSO] SSU : (v0.2) usim_CheckGidforSSU02Comp GRP:%d, result:%d
[USIM_%d] Check GID1 and EHPLMN value for verizon nw lock
[USIM_%d] GID1 check failure for VzW
[USIM_%d] Ehplmn check failure for VzW
[USIM_%d] [PERSO]>> CheckSimValidity, SendIndMsg = %d
[USIM_%d] [PERSO]SIM/USIM personalization is enabled
[USIM_%d] [PERSO]SIM/USIM personalization already verified
[USIM_%d] [PERSO]IMSIlength %d, IMSI Value:
[USIM_%d] [PERSO]MCC :%d%d%d, MNC :%d%d%X
[USIM_%d] [PERSO]CP is enabled
[USIM_%d] [PERSO]SPP is enabled
[USIM_%d] [PERSO]NSP is enabled
[USIM_%d] [PERSO] LockType forced report as NW LOCK
[USIM_%d] [PERSO]NP is enabled
[USIM_%d] Gid1 or Ehplmn check failed
[USIM_%d] [PERSO] VZW MVNO GID check failed
[USIM_%d] [PERSO]Regional personalization enabled
[USIM_%d] [PERSO]Valid SIM is present
[USIM_%d] [PERSO]Lock Type is invalid!!!
[USIM_%d] [PERSO]The end of SP code!!!
[USIM_%d] [PERSO]FmtSpCode is->
[USIM_%d] [PERSO]MEMALLOC FAILS
[USIM_%d] [PERSO]If NCK is valid, deactivate not only NP but also the others
[USIM_%d] [PERSO]If NSCK is valid, deactivate NSP only
[USIM_%d] [PERSO]If SPCK is valid, deactivate not only SP but also CP
[USIM_%d] [PERSO]If CCK is valid, deactivate CP only
[USIM_%d] [PERSO]If PCK is valid, deactivate SIM/USIM personalization only
[USIM_%d] [PERSO]SimLockChangePininRegistry state
[USIM_%d] [PERSO]NumOfAttemptsInReg: %d
[USIM_%d] [PERSO]SHA old PinValue-
[USIM_%d] [PERSO]StoredPinValue-
[USIM_%d] [PERSO]NewPinValue- %d %d %d %d,NewPinLength- %d
[USIM_%d] [PERSO]Wrong old PIN
[USIM_%d] [PERSO]Wrong Lock Type(=%d)
[USIM_%d] [PERSO]USIM_CARD_ABSENT
[USIM_%d] [PERSO]RemainingAttemptCount-> %d, LockKeyCmdStatus-> %d
[USIM_%d] [PERSO]MEMALLOC Fails
[USIM_%d] [PERSO]OldPinLength(=%d) Invalid
[USIM_%d] [PERSO]RemainingAttemptCount: %d
[USIM_%d] [PERSO]Len OK
[USIM_%d] [PERSO]PinCommandStatus - %d, RemainingAttemptCount- %d
[USIM_%d] [PERSO] usim_SetSimLockPolicy = UNKNOWN SET TYPE
[USIM_%d] [PERSO] usim_SetSimLockPolicy = %d, SetType = %d
[USIM_%d] [PERSO] Get SSU policy fail : CERTI FAILED, Force to set Lockstate to SSU_STATE_LOCK
[USIM_%d] [PERSO] SSU : ERROR No SSUB (errcode=%d)
[USIM_%d] [PERSO] SSU : ERROR Fail to get LOCK POLICY (errcode=%d)
[USIM_%d] [PERSO] SSU : ERROR unknown LOCK POLICY (value=%X)
[USIM_%d] [PERSO] usim_GetSimLockPolicy = %d
[USIM_%d] [PERSO]regCustCode = %c%c%c%c%c
[USIM_%d] [PERSO]FirstLockState : %d
[USIM_%d] [PERSO]CusAttr = %d
[USIM_%d] [PERSO]FIRST LOCK: Check to first boot
[USIM_%d] [PERSO]FIRST LOCK: #%d TRUE
[USIM_%d] [PERSO]FIRST LOCK: #%d FALSE
[USIM_%d] [PERSO]FIRST LOCK: registed MCC/MNC %02X %02X %02X %02X %02X, IsPiLockRequired=%d
[USIM_%d] [PERSO] SET usim_CombinedDiffUicc = %d
[USIM_%d] [PERSO] GET usim_CombinedDiffUicc = %d
[USIM_%d] [PERSO]SLB DEBUG: SlbSize = 0x%X
[USIM_%d] [PERSO]SLB DEBUG: SLB Encoded value->
[USIM_%d] [PERSO]SLB Decoded value->
[USIM_%d] [PERSO]SLB DEBUG: SlbPtr = 0x%X
[USIM_%d] [PERSO]SLB DEBUG: Display SLB
[USIM_%d] [PERSO]SLB DEBUG: Version - 0x%X
[USIM_%d] [PERSO]SLB DEBUG: ProtectionScheme - 0x%X
[USIM_%d] [PERSO]SLB DEBUG: LockState - 0x%X
[USIM_%d] [PERSO]SLB DEBUG: Length - 0x%X
[USIM_%d] [PERSO]SLB DEBUG: Mcc - 0x%X
[USIM_%d] [PERSO]SLB DEBUG: Mnc - 0x%X
[USIM_%d] [PERSO]SLB DEBUG: Gid - 0x%X
[USIM_%d] [PERSO]SLB DEBUG: ReservedInfo -
[USIM_%d] [PERSO]SLB DEBUG: StartTime -
[USIM_%d] [PERSO]SLB DEBUG: EndTime - 0x%X
[USIM_%d] [PERSO]SLB DEBUG: Signature -
[USIM_%d] [PERSO]SLB DEBUG: SLB file read fail. Force to set Lockstate to LOCKSTATE_PERMANENT_UNLOCK
[USIM_%d] [PERSO]SLB DEBUG: SLB file open fail. Force to set Lockstate to LOCKSTATE_PERMANENT_UNLOCK
[USIM_%d] [PERSO]MEMALLOC FAILS
[USIM_%d] [PERSO]SLB DEBUG: SlbSize = 0x%X
[USIM_%d] [PERSO]SLB DEBUG: SLB Encoded value->
[USIM_%d] [PERSO]SLB Decoded value->
[USIM_%d] [PERSO]SLB DEBUG: usim_SlbVer12.SlbData->
[USIM_%d] [PERSO]SLB DEBUG: Display SLB
[USIM_%d] [PERSO]SLB DEBUG: Version - 0x%X
[USIM_%d] [PERSO]SLB DEBUG: ProtectionScheme - 0x%X
[USIM_%d] [PERSO]SLB DEBUG: LockState - 0x%X
[USIM_%d] [PERSO]SLB DEBUG: Length - 0x%X
[USIM_%d] [PERSO]SLB DEBUG: NumberOfMccMnc - 0x%X
[USIM_%d] [PERSO]SLB DEBUG: NumberOfGid - 0x%X
[USIM_%d] [PERSO]SLB DEBUG: StartTime
[USIM_%d] [PERSO]SLB DEBUG: EndTime
[USIM_%d] [PERSO]SLB DEBUG: SLB file read fail. Force to set Lockstate to LOCKSTATE_PERMANENT_UNLOCK
[USIM_%d] [PERSO]SLB DEBUG: SLB file open fail. Force to set Lockstate to LOCKSTATE_PERMANENT_UNLOCK
[USIM_%d] [PERSO]MEMALLOC FAILS
[USIM_%d] [PERSO] SSU Init : CERTI FAILED, Force to set Lockstate to SSU_STATE_LOCK
[USIM_%d] [PERSO] SSU : ERROR No SSUB (errcode=%d)
[USIM_%d] [PERSO] SSU : ERROR Fail to get LOCKSTATE (errcode=%d)
[USIM_%d] [PERSO] SSU : ERROR unknown LOCKSTATE (value=%X)
[USIM_%d] [PERSO] SSU : ERROR Fail to get MCCMNC (errcode=%d)
[USIM_%d] [PERSO] SSU : ERROR Fail to get GID1 (errcode=%d)
[USIM_%d] [PERSO] SSU : (debug) print pData :
[USIM_%d] [PERSO] SSU : (debug) ssuVersion=%d
[USIM_%d] [PERSO] SSU : (debug) ssuNumOfGrp=%d
[USIM_%d] [PERSO] SSU : (debug) nGrp=%d, ssuLenMapGid1=%d, MapGid1=
[USIM_%d] [PERSO] SSU : (debug) nGrp=%d, ssuLenMapGid2=%d, MapGid2=
[USIM_%d] [PERSO] SSU : (debug) nGrp=%d, ssuLenMapMccMnc=%d, MapMccMnc=
[USIM_%d] [PERSO] SSU : (v0.2) ERROR Fail to get ALLOWED MAP (errcode=%d)
[USIM_%d] [PERSO]SSUB DEBUG: LOCK STATE = %d
[USIM_%d] [PERSO]SSUB DEBUG: MCCMNC
[USIM_%d] [PERSO]SSUB DEBUG: Number of GID1 = %d
[USIM_%d] [PERSO]SSUB DEBUG: GID1
[USIM_%d] [PERSO] SSU : ERROR Fail to get BeginTime (errcode=%d)
[USIM_%d] [PERSO] SSU : ERROR Fail to get FinishTime (errcode=%d)
[USIM_%d] [PERSO]SSUB DEBUG: LOCK STATE = %d
[USIM_%d] [PERSO]SSUB DEBUG: BeginTime
[USIM_%d] [PERSO]SSUB DEBUG: FinishTime
[USIM_%d] [PERSO] SSU : PERMANENT UNLOCK STATE
[USIM_%d] [PERSO] SSU : SSU STATE ERROR(=%d)
[USIM_%d] [PERSO] SSU : init done
[USIM_%d] [PERSO]SLB DEBUG: LockState = %d
[USIM_%d] [PERSO]SSUB DEBUG: LockState = %d
[USIM_%d] [PERSO]SLB DEBUG: Index = %d, NumOfCode = %d, MccMnc1 0x%X, MccMnc2 0x%X
[USIM_%d] [PERSO]SLB DEBUG: FmtLockCode is->
[USIM_%d] [PERSO]FmtLockCode is NULL!
[USIM_%d] [PERSO]SSUB DEBUG: Index = %d, NumOfCode = %d, MccMnc1 0x%X, MccMnc2 0x%X
[USIM_%d] [PERSO]SSUB DEBUG: FmtLockCode is->
[USIM_%d] [PERSO] SSUB : Failed to get MCCMNC from SSUB
[USIM_%d] [PERSO]SLB DEBUG: MccMncVal1 0x%X, MccMncVal2 0x%X
[USIM_%d] [PERSO]SLB DEBUG: FmtLockCode is->
[USIM_%d] [PERSO]FmtLockCode is NULL!
[USIM_%d] [PERSO]SLB DEBUG: Gid 0x%X
[USIM_%d] [PERSO]SLB DEBUG: FmtSpCode is->
[USIM_%d] [PERSO]SLB DEBUG: Gid 0x%X
[USIM_%d] [PERSO]SLB DEBUG: FmtSpCode is->
[USIM_%d] [PERSO] SSU NITZ UPDATE : LockState=%d, UpdateType=%d
[USIM_%d] [PERSO] RSU NITZ UPDATE : LockState=%d, UpdateType=%d
[USIM_%d] [PERSO]>> usim_SendNitzUpdateRsp, Result:%d
[USIM_%d] [PERSO]Buffer Alloca Failed
[USIM_%d] [PERSO]Send FAILED
[USIM_%d] [PERSO]>> setSimLockVerified, State %d
[USIM_%d] [PERSO] SSU : SET Lockstate=%d
[USIM_%d] [PERSO] SSU : GET Lockstate=%d
[USIM_%d] [PERSO] SSU : usim_GetStartTimeInSsub
[USIM_%d] [PERSO] SSU : Get BeginTime=
[USIM_%d] [PERSO] SSU : sYear=0x%x
[USIM_%d] [PERSO] SSU : sMon=0x%x
[USIM_%d] [PERSO] SSU : sDay=0x%x
[USIM_%d] [PERSO] SSU : retStime=0x%x
[USIM_%d] [PERSO] SSU : sYear=0x%x
[USIM_%d] [PERSO] SSU : sMon=0x%x
[USIM_%d] [PERSO] SSU : sDay=0x%x
[USIM_%d] [PERSO] SSU : usim_GetEndTimeInSsub
[USIM_%d] [PERSO] SSU : Get FinishTime=
[USIM_%d] [PERSO] SSU : sYear=0x%x
[USIM_%d] [PERSO] SSU : sMon=0x%x
[USIM_%d] [PERSO] SSU : sDay=0x%x
[USIM_%d] [PERSO] SSU : retStime=0x%x
[USIM_%d] [PERSO] SSU : sYear=0x%x
[USIM_%d] [PERSO] SSU : sMon=0x%x
[USIM_%d] [PERSO] SSU : sDay=0x%x
[USIM_%d] [PERSO]>> usim_CheckOneSkuLock
[USIM_%d] [PERSO]Reading Raw Lock code fails
[USIM_%d] [PERSO]MEMALLOC Fails
[USIM_%d] [PERSO]>> usim_CheckFirstBootUp
[USIM_%d] [PERSO]End of ONE SKU Group reached!!!
[USIM_%d] [PERSO]Curr: Grp = 0x%X, Pos: %d, Status = 0x%X
[USIM_%d] [PERSO]Next: Grp = 0x%X, Pos: %d, Status = 0x%X
[USIM_%d] [PERSO]Lockstatus is incorrect!!!
[USIM_%d] [PERSO]IsFirstBootUp = %d
[USIM_%d] [PERSO]OneSkuLockGroupFlag Set as 0x%X
[USIM_%d] [PERSO]Group %d for ONE SKU LOCK activated
[USIM_%d] [PERSO]Fail to write lock code!!!
[USIM_%d] [PERSO]>> usim_GetRawLockCodeForOneSkuLock
[USIM_%d] [PERSO]RawLockCode is->
[USIM_%d] [PERSO]RawLockCodeForOneSkuLock Length: %d
[USIM_%d] [PERSO]RawLockCodeForOneSkuLock is->
[USIM_%d] [PERSO]MEMALLOC Fails
[USIM_%d] OneSkuLockRequiredStatus( = %d
[USIM_%d] [PERSO]usim_DoKddiSimLockCheck
[USIM_%d] Reserved-3 length: 0x%X DataIndex: %d
[USIM_%d] Reserved-5 length: 0x%X DataIndex: %d
[USIM_%d] OpNameLen: 0x%X DataIndex: %d
[USIM_%d] Reserved-6 length: 0x%X DataIndex: %d
[USIM_%d] Reserved-7 length: 0x%X DataIndex: %d
[USIM_%d] NwLockLen: 0x%X DataIndex: %d
[USIM_%d] SubsetLockLen: 0x%X DataIndex: %d
[USIM_%d] SpLockLen: 0x%X DataIndex: %d
[USIM_%d] CpLockLen: 0x%X DataIndex: %d
[USIM_%d] [PERSO]Read LOCKDATA Fail!
[USIM_%d] [PERSO]Read SLD LENGTH, SldLen=%d
[USIM_%d] [PERSO]Read RFS Fail!, RfsReadResult=%d, SldLen=%d
[USIM_%d] [PERSO]Read SLD Length Fail!, RfsReadResult=%d
[USIM_%d] [PERSO]Open RFS Fail!, fd=%d
[USIM_%d] usim_CheckKddiValidity
[USIM_%d] [PERSO] IMSIlength %d, IMSI Value:
[USIM_%d] [PERSO] ASCII IMSI Value:
[USIM_%d] [PERSO] EF_AD data:
[USIM_%d] [PERSO] 3 digit MNC
[USIM_%d] [PERSO]2 digit MNC
[USIM_%d] [PERSO] KDDI SIM RetVal %d
[USIM_%d] [PERSO]usim_CheckKddiNwLock
[USIM_%d] [PERSO]Comparing ImsiDataCount %d ImsiDataLen %d
[USIM_%d] [PERSO]Gid1Len %d Gid2Len %d Index %d
[USIM_%d] [PERSO]usim_CheckKddiNwLock Result = %02X, LockStatus:Unlocked(%d)
[USIM_%d] [PERSO]usim_CheckKddiNwLock Result = %02X, LockStatus:Locked(%d)
[USIM_%d] [PERSO]usim_CheckKddiSubsetLock
[USIM_%d] [PERSO]Comparing ImsiDataCount %d, ImsiDataLen %d, MncLen %d
[USIM_%d] [PERSO]Gid1Len %d Gid2Len %d Index %d
[USIM_%d] [PERSO]usim_CheckKddiSubsetLock Result = %02X, LockStatus:Unlocked(%d)
[USIM_%d] [PERSO]usim_CheckKddiSubsetLock Result = %02X, LockStatus:Locked(%d)
[USIM_%d] [PERSO]usim_CheckKddiSpLock
[USIM_%d] [PERSO]GID1: 0x%02X, RspDataLength: %d
[USIM_%d] [PERSO]GID1 Invalid
[USIM_%d] [PERSO]Result of Converting from GID1 to ASCII : GID1[] %02X %02X %02X
[USIM_%d] [PERSO]EF_GID1 Read Fail(%d)
[USIM_%d] [PERSO]Comparing ImsiDataCount %d ImsiDataLen %d
[USIM_%d] [PERSO]Gid1Len %d from Policy Data, GID1 :
[USIM_%d] [PERSO]Move on Index (Gid1Len %d Gid2Len %d Index %d)
[USIM_%d] [PERSO]usim_CheckKddiSpLock Result = %02X, LockStatus:Unlocked(%d)
[USIM_%d] [PERSO]usim_CheckKddiSpLock Result = %02X, LockStatus:Locked(%d)
[USIM_%d] [PERSO]usim_CheckKddiCpLock
[USIM_%d] [PERSO]GID1: 0x%02X, RspDataLength: %d
[USIM_%d] [PERSO]GID1 Invalid
[USIM_%d] [PERSO]Result of Converting from GID1 to ASCII : GID1[] %02X %02X %02X
[USIM_%d] [PERSO]GID1: 0x%02X, RspDataLength: %d
[USIM_%d] [PERSO]GID2 Invalid
[USIM_%d] [PERSO]Result of Converting from GID2 to ASCII : GID2[] %02X %02X %02X
[USIM_%d] [PERSO]GID2 read Fail
[USIM_%d] [PERSO]GID1 read Fail
[USIM_%d] [PERSO]Comparing ImsiDataCount %d ImsiDataLen %d
[USIM_%d] [PERSO]Gid1Len %d from Policy Data, GID1 :
[USIM_%d] [PERSO]Gid2Len %d from Policy Data, GID2 :
[USIM_%d] [PERSO]Move on Index (Gid1Len %d Gid2Len %d Index %d)
[USIM_%d] [PERSO]usim_CheckKddiCpLock Result = %02X, LockStatus:Unlocked(%d)
[USIM_%d] [PERSO]usim_CheckKddiCpLock Result = %02X, LockStatus:Locked(%d)
[USIM_%d] [PERSO]usim_CheckKddiImsiData
[USIM_%d] [PERSO]ImsiIndex: %d, LockDataIndex: %d
[USIM_%d] [PERSO]ImsiAscii: 0x%02X, ImsiData: 0x%02X
[USIM_%d] [PERSO]IMSI Check Pass, ListMatchStatus 0x%02X
[USIM_%d] [PERSO]IMSI Check Mismatch1, BlackList %d, ListMatchStatus 0x%02X
[USIM_%d] [PERSO]IMSI Check Mismatch3 in WhiteList, ListMatchStatus 0x%02X
[USIM_%d] [PERSO]LockDataIndex: %d
[USIM_%d] [PERSO]ImsiData: %02X
[USIM_%d] [PERSO]IMSI Check Mismatch4, BlackList %d, ListMatchStatus 0x%02X
[USIM_%d] [PERSO]IMSI Check character invalid, ListMatchStatus 0x%02X
[USIM_%d] [PERSO]usim_CheckKddiGid
[USIM_%d] [PERSO]EfGidValue[%d]: 0x%02X, GidData[%d]: 0x%02X
[USIM_%d] [PERSO]Gid Check Pass. ListMatchStatus 0x%02X
[USIM_%d] [PERSO]Gid Mismatch1
[USIM_%d] [PERSO]GidDataIndex: %d
[USIM_%d] [PERSO]GidData: %02X
[USIM_%d] [PERSO]Gid Mismatch4
[USIM_%d] [PERSO]Gid character invalid
[USIM_%d] [PERSO]Gid matched all bytes. ListMatchStatus 0x%02X
[USIM_%d] [PERSO]Gid Mismatch : updated ListMatchStatus 0x%02X
[USIM_%d] [PERSO] >> usim_CheckVzwMvnoGid
[USIM_%d] [PERSO] GID1 CHECK - SUCCESS
[USIM_%d] [PERSO] GID2 CHECK - SUCCESS
[USIM_%d] [PERSO] GID1 CHECK - FAILED
[USIM_%d] [PERSO] GID1 CHECK - FAILED
[USIM_%d] [PERSO] GID1 CHECK - FAILED
[USIM_%d] [PERSO] GID1 READ FAILED
[PERSO] >> CheckSmarToneLock
[PERSO] Check for SmarTone Lock HK/P/I, SimId:%d, Result:%d
[USIM_%d] [PERSO] FIRST LOCK PASSED BY Secondary Insert
[USIM_%d] [PERSO] FIRST LOCK SKIPPED by SIM2
[USIM_%d] [PERSO] FIRST LOCK PASSED by USIM_FLASH_FIRST_LOCK_STATE = %d
[USIM_%d] [PERSO] ESIM LOCK : >> DecodeESimLockStatusReq
[USIM_%d] [PERSO] ESIM LOCK : Validity check result=%d
[USIM_%d] [PERSO] ESIM LOCK : N/W lock Disable status
[USIM_%d] [PERSO] >> usim_CheckESimValidity
[USIM_%d] [PERSO] ESIM LOCK - MCC:%d%d%d, MNC:%d%d%X
[USIM_%d] [PERSO] ESIM LOCK - CP is enabled
[USIM_%d] [PERSO] ESIM LOCK - SPP is enabled
[USIM_%d] [PERSO] ESIM LOCK - NSP is enabled
[USIM_%d] [PERSO] ESIM LOCK - NP is enabled
[USIM_%d] [PERSO] ESIM LOCK - Regional personalization enabled
[USIM_%d] [PERSO] ESIM LOCK - Validity check result : %d, type : %d
[USIM_%d] [PERSO] TracFone Lock Info, Type:%d, NckLength:%d
[USIM_%d] [PERSO] SPCK value read from registry:-
[USIM_%d] [PERSO] SPCK value read from registry:-
[USIM_%d] [PERSO] NCK value read from registry:-
[USIM_%d] [PERSO] Compare CK1 with Stored Key
[USIM_%d] [PERSO] CK1 CHECK PASS
[USIM_%d] [PERSO] uiLockLevel != LV_MAX_LOCK FAILED
[USIM_%d] [PERSO] FAIL TO READ STORED HASH-CK1 FROM REGISTRY
[USIM_%d] [PERSO] INVALID NCK LENGTH %d
[USIM_%d] [PERSO] TracFone Lock Info, RetVal=%d, ResultCK1=%d, ResultCK2=%d
[USIM_%d] [PERSO] SSU : (v0.2) SetSsuGrpValue, tag:%d
[USIM_%d] [PERSO] SSU : (v0.2) INVALID TAG, tag:%d
[USIM_%d] [PERSO] SSU : (v0.2) usim_CheckMccMncforSSU02
[USIM_%d] [PERSO]Index %d, RegCodeValue[Index] :%d , RegCodeValue[Index+1]: %d, RegCodeValue[Index+2]: %d
[USIM_%d] [PERSO] 3digit MNC compared with 2digit REGCODE - Skipped
[USIM_%d] [PERSO]MCC-MNC (2 bytes) MATCH To REGCODE -Check PASS
[USIM_%d] [PERSO]MCC-MNC (3 bytes) MATCH To REGCODE -Check PASS
[USIM_%d] [PERSO]MCC-MNC Does Not Match To REG CODE -- Check Failed
[USIM_%d] [PERSO]ERROR READING REGCODE: NumOfCodes = %d
[USIM_%d] [PERSO] SSU : (v0.2) usim_GetMccMncCodeSSU02, allocSize:%d
[USIM_%d] [PERSO] SSU : (v0.2) Index = %d, NumOfCode = %d, MccMnc1 0x%X, MccMnc2 0x%X
[USIM_%d] [PERSO] SSU : (v0.2) FmtLockCode is->
[USIM_%d] [PERSO] SSU : (v0.2) MEMALLOC FAILS
[USIM_%d] [PERSO] DEBUG print
[USIM_%d] >> usim_CheckIccidImsiSwitch result=%d
[USIM_%d] [PERSO]Recvd NCK(len= %d) Value:
[USIM_%d] [PERSO]Registry NCK Value:
[USIM_%d] [PERSO]SHA Pin Value:
[USIM_%d] [PERSO]NCKCODE CHECK PASS
[USIM_%d] [PERSO]NCKCODE CHECK FAILED
[USIM_%d] [PERSO]Index %d, RegCodeValue[Index] :%d , RegCodeValue[Index+1]: %d, RegCodeValue[Index+2]: %d
[USIM_%d] [PERSO]MCC-MNC (2 bytes) MATCH To REGCODE %d -Check PASS
[USIM_%d] [PERSO]MCC-MNC (3 bytes) MATCH To REGCODE %d -Check PASS
[USIM_%d] [PERSO]MCC-MNC Does Not Match To REG CODE -- Check Failed
[USIM_%d] [PERSO]ERROR READING REGCODE: NumOfCodes = %d
[USIM_%d] [PERSO]GID1-
[USIM_%d] [PERSO] Gid1 length is less than 8 bytes
[USIM_%d] [PERSO]SpCode is->
[USIM_%d] [PERSO]GID1 File Not Found
[USIM_%d] [PERSO] NumOfCodes = %d, RegCodeIndex = %d
[USIM_%d] [PERSO]SP code matches to REGCODE, Check PASS
[USIM_%d] [PERSO]SP code does not match to REGCODE, Check FAIL
[USIM_%d] [PERSO]ERROR READING REGCODE- NumOfCodes = %d
[USIM_%d] [PERSO]MEMALLOC FAILS
