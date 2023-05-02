[SAE] SAE_Init (TaskID:%d)
[SAE] SAE_Terminate
[SAE] SAE_SetOperatingMode: mode(%d)
[SAE] SAE_CreateChannel (channel:%d), (OM:%d)
[SAE] SAE_DeleteChannel (channel:%d)
[SAE] SAE_GetChannelCnt(%d)
[SAE] SAE_CreateStream (channel:%d, ssrc = %d)
[SAE] SAE_DeleteStream (channel:%d, stream = %d)
[SAE] SAE_SetSendSSRC (channel:%d, ssrc = %d)
[SAE] SAE_SetSendPort (channel:%d, portnr = %d)
[SAE] SAE_GetSendPort (channel:%d)
[SAE] SAE_SetRecPort (channel:%d, portnr = %d)
[SAE] SAE_GetRecPort (channel:%d)
[SAE] SAE_SetRTCPSendPort (channel:%d, portnr = %d)
[SAE] SAE_GetRTCPSendPort (channel:%d)
[SAE] SAE_SetRTCPRecPort (channel:%d, portnr = %d)
[SAE] SAE_GetRTCPRecPort (channel:%d)
[SAE] SAE_SetSendIP (channel:%d, remoteip:%s, localip:%s)
[SAE] SAE_GetSendIP (channel:%d, ipadr:0x%08x, bufsize:%d)
[SAE] SAE_ReconfigIPPort (channel:%d)
[SAE] SAE_SetSendCodec (channel:%d)
[SAE] SAE_GetCurrentSendCodec (channel:%d)
[SAE] SAE_GetCodec (listnr:%d)
[SAE] SAE_GetCodecCnt
[SAE] SAE_SetIPPktLoopback (mode:%d)
[SAE] SAE_StartFDSR (channel:%d, status:%d, enableIPv6:%d)
[SAE] SAE_StopFDSR (channel:%d)
[SAE] SAE_EnableSRTP (channel:%d, direction:%d, profile:%d, key:0x%08x, keylen:%d)
[SAE] SAE_SetVEStatus (iChannel:%d, veStatus:%d)
[SAE] SAE_EnableRTPPinhole (channel:%d, mode:%d)
[SAE] SAE_GetLastError
[SAE] SAE_GenNTPTimestamp (rtcp_ntp_ls:%u, rtcp_ntp_ms:%u)
[SAE] SAE_SetAVSync (%s)
[SAE] SAE_GetRXVoiceTime (channel:%d, LastPlayedRTPtimestamp:%u, LastPlayedSysTime:%u)
[SAE] SAE_SetRXVoiceDly (channel:%d, msec:%u)
[SAE] SAE_GetDTMFSupport
[SAE] SAE_GetDTMFDecodeNamedEventSupport
[SAE] SAE_SetDTMFMode (channel:%d, iInBand:%d)
[SAE] SAE_SetDTMFPayloadType (channel:%d, iType:%d)
[SAE] SAE_SetDTMF_PT (channel:%d, iType:%d, rx_typoe :%d)
[SAE] SAE_SendDTMF (iEventNr:%d, channel:%d, cont_mode:%d, cont_event:%d)
[SAE] SAE_SetTOS (channel:%d, tos:%d)
[SAE] SAE_EnableRTCP (channel:%d, enable:%d)
[SAE] SAE_EnableRTCPOnCall (channel:%d, enable:%d,RTCP_RR_BW:%d, RTCP_RS_BW:%d)
[SAE] SAE_SetEventHandler
[SAE] SAE_SetRTPRecvHandler
[SAE] SAE_SetRTPSendHandler
[SAE] SAE_SetIntervalNotiHandler
[SAE] SAE_SetRTCPRecvHandler
[SAE] SAE_SetUpdateSLOGHandler
[SAE] SAE_SetBigDataHandler
[SAE] SAE_SetPacketizationMode (channel:%d, codecName: 0x%08x, mode:%d
[SAE] SAE_SetRTPTimeout(ch:%d, sec: %u )
[SAE] SAE_SetRTCPTimeout(ch:%d, sec: %u )
[SAE] SAE_SetAMRBitRate(channel: %d, amrBitrate: %d, modeset: %d)
[SAE] SAE_SetEVRCBBitRate(channel: %d, evrcbTgtBitrate: %d )
[SAE] SAE_SetEvrcbEOP(channel: %d, evrcbEop: %d )
[SAE] SAE_SetEvrcbMcr(channel: %d, evrcbMcr: %d )
[SAE] SAE_SetEvrcbEOPBaseStation(channel: %d, evrcbEop: %d )
[SAE] SAE_EnableDtx (channel:%d, enable:%d)
[SAE] SAE_SetAMRTxCMR (channel:%d, CMR:%d)
[SAE] SAE_UpdateEVSInfo(channel: %d)
[SAE] SAE_SetDSPDecoderCount (Count:%d)
[SAE] SAE_SetDSPDecoderCount (Count:%d) => ERR out of range
DSP_INTF_VocEnc (EncPkt_Out:0x%08x, dsp_enc_rate:%d, dsp_dtx_mode:%d)
DSP_INTF_VocEnc (preRate:%d, curRate:%d, preDtx:%d, curDtx:%d)
DSP_INTF_VocDec (DecPkt_in:0x%08x, inLen:%d, SampFreq:%d Qbit:%d)
DSP_INTF_GetVocDec (SampFreq:%d)
DSP_INTF_RxPCMOut
[IntDisable]
[IntEnable]
[SAE_CODE] class: %d, type: %d, msg: %d, order: %d, tmp: %d
format error:max char exceed

DSP_INTF_VoiceBandDtmfModeInd (code:%d, mode:%d)
