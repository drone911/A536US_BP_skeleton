[D_IN][DUMP][LENGTH]: %d
[D_IN][DUMP][DATA]:
[C_IN][DUMP][LENGTH]: %d
[C_IN][DUMP][DATA]:
[DUMP][LENGTH]: %d
[DUMP][DATA]:
Negative SnDiff
RTP SN wrap around
Snk = %d
In function RohcUtility::RohcSnLsbDecode
[ROHC-DECOMP] P==> %d, MinVal ==> %d, MaxVal ==> %d, REFVAL ==> %d
[ROHC-DECOMP]SN_K %d, SnVal %d
[SROHC_TCP_D] [START] RohcUnscaledSeqLsbDecode
[SROHC_TCP_D] LastSeqRef:%x SeqK:%x P:%x EncodedSeq:%x
[SROHC_TCP_D] [WLSB] _Orgval:%x _val:%x
[SROHC_TCP_D] [END] RohcUnscaledSeqLsbDecode SeqVal:%x
[SROHC_TCP_D] [START] RohcUnscaledAckLsbDecode
[SROHC_TCP_D] LastAckRef:%x AckK:%x P:%x EncodedAck:%x
[SROHC_TCP_D] [WLSB] _Orgval:%x _val:%x
[SROHC_TCP_D] [END] RohcUnscaledAckLsbDecode AckVal:%x
[SROHC_TCP_D] [START] RohcUnscaledWindowLsbDecode
[SROHC_TCP_D] WindowRef:%x WindowK:%x P:%x EncodedWindow:%x
[SROHC_TCP_D] [WLSB] _Orgval:%x _val:%x
[SROHC_TCP_D] [END] RohcUnscaledWindowLsbDecode tcpWindow:%x
In function RohcUtility::RohcIpIdLsbDecode
[ROHC-DECOMP] usIpIdOffset [%d] is lessthan previous generated Offset[%d]
[SROHC_TCP_D] [START] ProfileSixRohcMsnLsbDecode
[SROHC_TCP_D] msnRef:%x MsnK:%x P:%x EncodedMsn:%x
[SROHC_TCP_D] [WLSB] _Orgval:%x _val:%x
[SROHC_TCP_D] [END] ProfileSixRohcMsnLsbDecode Msn:%x
[SROHC_TCP_D] [START] ProfileSixRohcIpIdLsbDecode
[SROHC_TCP_D] IpIdRef:%x IPIdK:%x P:%x EncodedIpIdOffset:%x
[SROHC_TCP_D] [WLSB] _Orgval:%x _val:%x
[SROHC_TCP_D] [END] ProfileSixRohcIpIdLsbDecode IPId:%x
[SROHC_TCP_D] [START] RohcTTLLsbDecode
[SROHC_TCP_D] ttlRef:%x ttlK:%x P:%x EncodedTtlOffset:%x
[SROHC_TCP_D] [WLSB] _Orgval:%x _val:%x
[SROHC_TCP_D] [END] RohcTTLLsbDecode ttl:%x
In function RohcUtility::RohcTsUnScaledDecode
[ROHC-DECOMP] P %d Ts:[%x]
[ROHC-DECOMP] iMinVal : [%x] iMaxVal :[%x] RtpTs:[%x] Mask:[%x] ,EncdTs:[%x]
[ROHC-DECOMP] TS_STRIDE is Zero
In function SetDecompConfigMode setting DecompConfigMode to %d
In function GetDecompConfigMode DecompConfigMode to %d
In function RohcUtility::RohcTsLsbDecode P %d ScaledTs:[%x]
[ROHC-DECOMP] iMinVal : [%x] iMaxVal :[%x] TsScaled:[%x] Mask:[%x] ,EncdTs:[%x]
[ROHC-DECOMP] TS_STRIDE is Zero
[ROHC-DECOMP] TsScaled:[%x] Offset:[%x] ,TS Stride:[%x]
In function RohcUtility::BuildRtpExt3
In function RohcUtility::DecodeRtpExt3 pExt3FirstByte : Rtp = %d ,Ip = %d , I = %d
Invalid packet as Ip withih IP not possible
Encoded SN in Ext3 = %d
DecodeRtpExt3 :R_TS bit is true , pBitChange->Ts_k = %d , pBitChange->EncdTs = %d
IP extension not supported
Ext 3: pBitChange->IpIdOffset = %d
Ext 3 : Ts stride present
