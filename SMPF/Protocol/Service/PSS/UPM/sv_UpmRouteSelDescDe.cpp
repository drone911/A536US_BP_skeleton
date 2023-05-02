%s : ~RouteSelectDesc 0x%X
diff OldLocCriteriaType(%d) NewLocCriteriaType(%d)
push_back OldLocCriteriaType(%d)
[RouteSelectDesc::Encode] tmpList.size(%d)
[RouteSelectDesc::Encode] m_LocCriteriaList.size(%d)
[RouteSelectDesc::Encode] m_LocCriteriaList.size is 0
RSD Enc Size(%d), RSD Cont End Size(%d)
[WARNING] RSD encoding size(%d) is different from original size(%d)
[ENC] ENCODED RouteSelDesc:
Memory Alloc/Free - DNN alloc: %x
[WARNING] EncodeConfRsd : DnnList alloc fail : %d
Memory Alloc/Free - Snssai alloc: %x
[WARNING] EncodeConfRsd : SnssaiList alloc fail : %d
RouteSelectDesc::Decode m_EncodedLen(%d)
RouteSelectDesc::Decode m_Priority(%d)
RouteSelectDesc::Decode RsdLen(%d)
Spec RSD Type = 0x%X
[WARNING] RSD - SSC mode(0x%X) Decoding failure!
[WARNING] RSD - PDU SESS TYPE(0x%X) Decoding failure!
[WARNING] RSD - PREF ACC TYPE(0x%X) Decoding failure!
RouteSelectDesc::Decode LocType(%d) ListCnt(%d) DecodedLen(%d)
RouteSelectDesc::Decode DecodedLen(%d) RsdLen(%d)
RouteSelectDesc::Decode LocType(%d) TaiListLen(%d) DecodedLen(%d)
[WARNING] RSD - LOC_CRITERIA LOC TYPE(0x%X) Decoding failure!
[WARNING] Wrong Route Sel Desc Type -> Ignore & Parse next octet
[WARNING] D.5.2.4 Decoding failure!
[INFO] Received registered TAI List :
[WARNING] Invalid Length of TAI List (%d)
[RouteSelectDesc::IsValid] Skip this RSD, m_PduSessType(%d) invalid
RSD_MULTI_ACC_PREF_TYPE(0x%X)
Skip this RSD, continue searching RSD
RSD_NON_SEAMLESS_NON_3GPP_IND(0x%X)
Skip this RSD, continue searching RSD
[RouteSelectDesc::IsValid] Skip this RSD, m_PduSessType(%d) invalid
RSD_MULTI_ACC_PREF_TYPE(0x%X)
RSD_NON_SEAMLESS_NON_3GPP_IND(0x%X)
Skip this RSD, continue searching RSD
%s : found allowed DNN (REQ)
%s : can't find allowed DNN
%s : No Req DNN but Rule has DNN -> Rule validation fail
%s : found allowed DNN >>
%s : can't find allowed DNN
%s : found allowed S-NSSAI >>
%s : can't find allowed S-NSSAI
%s : found allowed DNN & S-NSSAI >>
%s : can't find allowed DNN & S-NSSAI
[WARNING] [CheckLocCriteriaValid] Unknown LocType(%d)
[CheckLocCriteriaValid] Not match any Location size(%d)
[WARNING] pal_RtcGetTime: Error in Getting Current Time
[WARNING] pal_RtcGetTimeAp: Error in Getting Current Time
[INFO] curTime Time(%d, 0x%x)
[INFO] Date: %d - %2d - %2d
[INFO] Time: %2d:%2d:%2d
[INFO] --- SystemTimeHigh : 0x%X, SystemTimeLow : 0x%X, TimeShort : 0x%X
[INFO] pal_UptimeRead: 0x%X,0x%X secTime(0x%x,%d)
[INFO] pal_UptimeRead: curTime 0x%X,0x%X
Get RSD ID(0x%x)
Get Priority(0x%x)
[INFO] <%s>
[INFO] UPSC = %d, Rule Priority = %d, Rsd Priority = %d
[INFO] RsdId(%d)(0x%X), AssignedPduId(%d), Priority(%d)
[INFO] SscMode(%d), PduSessType(%d), PrefAccType(%d), m_bMultiAccessPrefType(%d), NonSeamlessNon3gppInd(%d)
[INFO] S-Nssai Num(%d), DNN Num(%d) LocCriteria Num(%d)
[INFO] </%s>
[INFO] TimeWindow valid(%d) startTime(0x%x, 0x%x), stopTime(0x%x, 0x%x)
Different SscMode (Orig=%d, Comp=%d)
Different PduSessType (Orig=%d, Comp=%d)
SnssaiList is empty
%s : m_SnssaiList SIZE(%d), other m_SnssaiList SIZE(%d)
%s : Same SnssaiList
[WARNING] SnssaiListItr or OhterSnssaiItr is nullptr
%s : Different SnssaiList
Different SnssaiList SIZE (Orig=%d, Comp=%d)
DnnList is empty
%s : m_DnnList SIZE(%d), other m_DnnList SIZE(%d)
%s : Same DnnList
[WARNING] DnnListItr or OtherDnnItr nullptr
%s : Different DnnList
Different DnnList SIZE (Orig=%d, Comp=%d)
%s : DnnSum is zero
%s : DnnListItr nullptr
%s : SnssaiListItr is nullptr
%s : TempId : %d(0x%X)
