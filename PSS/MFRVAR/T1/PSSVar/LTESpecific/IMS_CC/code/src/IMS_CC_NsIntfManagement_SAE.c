- SAE_GetCodecCnt: Codec Count = %d
- SAE_GetCodecCnt return Failure, Errcode= %d
- Total CodecCnt: Codec Count = %d
GetConvertedEVSBitrate : Invalid bitrate
GetConvertedBwRange: Received invalid bw
- Code Info: CodecEvsDtxrecv = %d, CodecEvsChawarerecv = %d
- Code Info: CodecEvsIoMode = %d, CodecEvsSendChannelType = %d, CodecEvsRecvChannelType = %d, CodecEvsCmrRestricted = %d
- Code Info: CodecEvsBrSendMin = %d, CodecEvsBrSendMax = %d, CodecEvsBrRecvMin = %d, CodecEvsBrRecvMax = %d
- Code Info: CodecEvsBwSendRange = %d, CodecEvsBwRecvRange = %d
- Code Info: CodecEvsDefaultBr = %d, CodecEvsDefaultBw = %d
- Not Supported Codec = %d
[IMS_CC] <%s(%d)> pal_MemAlloc() failure
-------[IMSCC=>VCE] Reconfig IP Port Request for Channel %d
- Set RTP Receive Port Successful
- Set RTP Receive Port Failed, Error Code=%d
- Set RTP Send Port Successful
- Set RTP Send Port Failed, Error Code=%d
- Set RTCP Receive Port Successful
- Set RTCP Receive Port Failed, Error Code=%d
- Set RTCP Send Port Successful
- Set RTCP Send Port Failed, Error Code=%d
IMS_CC_HandleNsChnlSetReq SendRemoteIp
IMS_CC_HandleNsChnlSetReq SendLocalIp
- Set Remote and Local IP Successful
- Set Remote and Local IP Failed, Error Code=%d
IMS_CC_HandleNsSignalQualityInd() ulBler(%d) dlBler(%d) ulGrant(%d)
[IMS_CC] <%s(%d)> pal_MemAlloc() failure
[IMSCC=>VCE] Sending VoiceEngine_SignalQuality
IMSCC_CHNL_SET_REQ (Channel Id=%d), SRVCC HO CNF = %d
- Operation Mode= %s
- SAE Create channel failed, Error Code = %d
- SAE_CREATE_CHANNEL Engine Channel ID = %d created successfully
- [bsrvcc]cc_Set_IMS_Channel_Enabled(1)
- SAE_DELETE_CHANNEL Engine Channel ID = %d
- Deleted Channel Successfully
- [bsrvcc]cc_Set_IMS_Channel_Enabled(0)
- Delete channel failed, Error Code=%d
SID NOT FOUND
- RTP Receive Port = %d (0x%X), RTP Send Port = %d (0x%X)
- RTCP Receive Port = %d (0x%X), RTCP Send Port = %d (0x%X)
- Engine Channel ID = %d
- AP Channel ID = %d, Is channel set = %d
- Invalid Operation[%d]
[IMS_CC] <%s(%d)> pal_MemAlloc() failure
IMSCC_CHNL_SET_RSP (%d) to NS, Result = %s
- SAE_GetCodecCnt return Failure, Errcode= %d
[IMS_CC] <%s(%d)> pal_MemAlloc() failure
- Mapped to SIPC = %d Codec Name =
- SAE_GetCodec return Failure,cnt=%d, Errcode= %d
[IMS_CC] <%s(%d)> pal_MemAlloc() failure
- Mapped to SIPC = %d Codec Name =
- SAE_GetCurrentSendCodec return Failure, Errcode= %d
[IMS_CC] <%s(%d)> pal_MemAlloc() failure
- Codec type received from AP = %d, Codec Name is = %s
- Codec type received from AP = %d, codecNameList is NULL.
- Code Info: Type = %d, Freq = %d, BitRate = %d, Ptime = %d
- Code Info: EnableDTX = %d, MaxRxPtime = %d, NChannel = %d, FixedRate = %d
- Error Ccode is = %d
[IMS_CC] <%s(%d)> pal_MemAlloc() failure
IMSCC_CODEC_SET_RSP (%d) to NS, Result= %s
IMSCC_CODEC_SET_REQ (%d) in IMS_CC_HandleNsCodecSetReq, Command Received = 0x%X
- Codec type received from AP = %d
- Invalid codec type received.
- SET Bit Rate function Returned ERROR
- SAE_EnableDtx Returned ERROR
- Codec Name is = %s
- SAE_SetPacketizationMode Returned ERROR
- Invalid codec type received.
- SAE_SetAMRTxCMR Returned ERROR
- SAE_SetEvrcbEOP Returned ERROR
- SAE_SetEvrcbMcr Returned ERROR
- SAE_SetEvrcbEOPBaseStation Returned ERROR
IMSCC_RTP_MEDIA_START_REQ (%d) received in IMS_CC_HandleRtpMediaStartReq, Enable IPV6 = %d
- VE Status = %s
[IMS_CC] <%s(%d)> pal_MemAlloc() failure
IMSCC_RTP_MEDIA_START_RSP (%d) to NS, Result = %s
[IMS_CC] <%s(%d)> pal_MemAlloc() failure
[IMSCC=>VCE] Sending VoiceEngine_Start for VCE ChannelId=%d
IMSCC_RTP_MEDIA_CHANGE_REQ (%d) in IMS_CC_HandleNsRtpMediaChangeReq
- VE Status = %s
- Msg from stackId[%d]
[IMS_CC] <%s(%d)> pal_MemAlloc() failure
IMSCC_RTP_MEDIA_CHANGE_RSP (%d) to NS, Result = %s
[IMS_CC] <%s(%d)> pal_MemAlloc() failure
[IMSCC=>VCE] Sending VoiceEngine_VEstatus to VCE Channel ID = %d
IMSCC_RTP_MEDIA_STOP_REQ (%d) in IMS_CC_HandleNsRtpMediaStopReq
[IMS_CC] <%s(%d)> pal_MemAlloc() failure
IMSCC_RTP_MEDIA_STOP_RSP (%d) to NS, Result = %s
[IMS_CC] <%s(%d)> pal_MemAlloc() failure
[IMSCC=>VCE] Sending VoiceEngine_Stop for CHID(%d)- isTriggeredByIms:TRUE
- Deleted Channel Successfully
- [bsrvcc]cc_Set_IMS_Channel_Enabled(0)
- Delete channel failed, Error Code=%d
[ImsEngine]SAE_GetChannelCnt: %d --> should be Zero
[IMS_CC] <%s(%d)> pal_MemAlloc() failure
[SRVCC]isTriggeredLocally: VoiceEngine_Stop: CHID(%d)
[ImsEngine]stop usCid(%d)
[ImsEngine] SRVCC Revoke Received, ignore rest of stopping channels locally
[ImsEngine] All channels are stopped
[ImsEngine] ImssccEngRegFlag is %d, All channels are stopped proceeding to delete channels
IMSCC_RTP_MEDIA_CHANGE_REQ (%d) in IMS_CC_MediaChangeAllChannelsPerSid
- VE Status = %s
[IMS_CC] <%s(%d)> pal_MemAlloc() failure
[IMSCC=>VCE] Sending VoiceEngine_VEstatus to VCE Channel ID = %d
[IMS_CC] <%s(%d)> pal_MemAlloc() failure
[IMSCC=>VCE] Status=%d, EnableV6 = %d, Sending VoiceEngine_Start for VCE ChannelId = %d
[SRVCC]Start usCid(%d)
[IMSCC=>VCE] SAE_NotiSRVCCfailure
[SRVCC] All channels are started
IMSCC_DTMF_SET_REQ (%d) in IMS_CC_HandleNsDtmfSetReq
- Payload Type = %d, Mode = %d, Clockrate = %d, Rx Payload Type = %d
- Setting DTMF Mode failed, Error Code = %d
- IMS_CC_HandleNsDtmfSetReq: SetDTMFPayloadType failed ; %d
[IMS_CC] <%s(%d)> pal_MemAlloc() failure
IMSCC_DTMF_SET_RSP (%d) to NS, Result= %s
IMSCC_DTMF_REQ (%d) in IMS_CC_HandleNsDtmfReq DTMF = %d
- SAE_SendDTMF failed, Error code = %d
[IMS_CC] <%s(%d)> pal_MemAlloc() failure
IMSCC_DTMF_RSP (%d) to NS, Result= %s
- RTCP SR = %d
- RTCP On Call = %d, RTCP RrBW = %d, RsBW = %d
- RTP Timeout = %d
- RTCP Timeout = %d
- RTP Pinhole = %d
- SRTP Profile = %d, SRTP Direction = %d, SRTP Key length = %d
- AvSyncSet = %d
- CiqSet = %d
- ECHOLOCATE_SET
IMSCC_OPTION_SET_REQ (%d) in IMS_CC_HandleNsOptionSetReq
- OptionSet = 0x%X, AvSyncSet = %d
- RTCP SR = %d, RTCP On Call = %d
- RTCP RrBW = %d, RsBW = %d
- RTP Timeout = %d, RTCP Timeout = %d, RTP Pinhole = %d
- SRTP Profile = %d, SRTP Direction = %d, SRTP Key length = %d
- OptionSet result = 0x%X
IMSCC_STAT_GET_REQ (%d) in IMS_CC_HandleNsStatGetReq
- SAE_GetRTPStatistics failed, Error code = %d
[IMS_CC] <%s(%d)> pal_MemAlloc() failure
IMSCC_STAT_GET_RSP (%d) to NS Result = %s
IMSCC_IMS_ENGINE_REQ(%d) in IMS_CC_HandleNsImsEngineReq dtmf: %d
- Inside INIT engine
- Inside DEINIT engine
- Inside REINIT engine
IMS_CC_HandleNsFrameTimeGetReq Operation: %d, Channel: %d
[IMS_CC] <%s(%d)> pal_MemAlloc() failure
- SAE_GetRXVoiceTime failed, Error code = %d
IMS_CC_SendFrameTimeRsp LastPlayedRTPtimestamp:%u, SysTime HI:%u(0x%x) LO:%u(0x%x)
IMS_CC_SendFrameTimeRsp SystemTime HI:%u(0x%x) LO:%u(0x%x)
IMS_CC_HandleNsFrameTimeSetReq Operation: %u, Channel: %u
- Delay = %u
- System Time = 0x%x%x
IMS_CC_L2MsgHandler, received msg = [0x%x] from L2
IMSCC_RECOMMENDED_BIT_RATE_IND direction(%d) bitRate(%d)
[IMS_CC] <%s(%d)> pal_MemAlloc() failure
[IMSCC=>VCE] Sending VoiceEngine_RecommendedBitRateInd for chId(%d)
Recommended Bit Rate for Video
Unknown Type(%d)
Unknown Message
- Create channel failed, Error Code = %d
- SAE_CREATE_CHANNEL Engine Channel ID = %d created successfully
SID NOT FOUND
Valid Chnl ID NOT FOUND
- RTP Receive Port = %d (0x%X), RTP Send Port = %d (0x%X)
- RTCP Receive Port = %d (0x%X), RTCP Send Port = %d (0x%X)
- SAE_CHANGE_CHANNEL Engine Channel ID = %d
- AP Channel ID = %d, Is channel set = %d
- SAE_SetSendCodec Returned ERROR
- SET Bit Rate function Returned ERROR
- SAE_EnableDtx Returned ERROR
- Codec type received from AP = %d, Codec Name is = %s
- SAE_SetPacketizationMode Returned ERROR
- Codec type received from AP = %d, Invalid codec type received.
- SAE_SetAMRTxCMR Returned ERROR
- SAE_SetEvrcbEOP Returned ERROR
- SAE_SetEvrcbMcr Returned ERROR
- SAE_SetEvrcbEOPBaseStation Returned ERROR
OptionSet received with AvsyncSet, Not handled by Audio engine currently, send Success
IMSCC_RTP_MEDIA_START_REQ (%d) received, Enable IPV6 = %d
- VE Status = %s
[IMS_CC] <%s(%d)> pal_MemAlloc() failure
[IMSCC=>VCE] Sending VoiceEngine_Start for VCE ChannelId=%d
