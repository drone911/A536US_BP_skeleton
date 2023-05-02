------------------------- SM TASK ----------------------------
[Test Code] ....SsCurrentStackId =%d
Recieved Message has an Error
NULL pointer in sm_Task
Processing the saved SM PDP message
Dual SIM Status -> %d
sm_V42BisTestMode is %d
Scratch Pad Instance -> %d
HcommonRegNasRel =>%d/SmNASRelVersion => %d
SmCurrentStackId := %d
Saving the message in SM
Invalid TI value received
ERROR -> Unused Message number: %x !!!
%s
Displaying Received Message Contents:
ERROR -> Unknown Message : %x !!!
Message 0x%x Length is too short. Length = %d !!!
sm_SendNsDmEventToNS.....SessionNumber= %d, Timer=%d , Event =%d
Sending Message ......
Attempting to Write to State Using Invalid State (%x) in sm_SetState
SM Initialisation State -> SM_NOT_INITIALISED -> All Messages except SMREG_INIT_REQ will be Ignored..
This is Some other Primary PDP PdpInstance (%x) in sm_MarkAssociateInstsToTearDown
Reserved NSAPI Has used in Primary (%x) in sm_MarkAssociateInstsToTearDown
Attempting to Read SM Data Using Invalid PdpInstance (%x) in sm_MarkAssociateInstsToTearDown
This is Some other Primary PDP PdpInstance (%x) in sm_MarkAssociateInstsToTearDown
Reserved NSAPI Has used in Primary (%x) in sm_MarkAssociateInstsToTearDown
Attempting to Read SM Data Using Invalid PdpInstance (%x) in sm_MarkAssociateInstsToTearDown
This is Some other Primary PDP PdpInstance (%x) in sm_MarkAssociateInstsToTearDown
Reserved NSAPI Has used in Primary (%x) in sm_MarkAssociateInstsToTearDown
Attempting to Read SM Data Using Invalid PdpInstance (%x) in sm_MarkAssociateInstsToTearDown
TiAvailable -> %d, PdpInstance ==%d
Nsapi (%x) Already Used
Nsapi (%x) is Outside Valid Range. 5 <= Nsapi <= 15
Wrong Action =%d
Received => TiValue(%d),Originator(%d)
Instance(%d) => TiValue(%d),Originator(%d)
[KNY] Instance(%d) => TiValue(%d),Originator(%d) Flag(%d)
Cid-> %d
Cid (%x) Already Used
Nsapi (%x) is Outside Valid Range.
Netowk Sent PdpType Organisation as ETSI_ALLOCATED which means that PdpType has to be PPP, but network sent nother Type (%x) in sm_DetermineAndSetPdpType
Unknown IETF PDP type (%x) in sm_DetermineAndSetPdpType
Invalid ApnLength: %d, so returning with out copying APN.
NIDB enabled
SmNASRelVersion ==> %d
BuildNSetProtConfigOpts - AuthType:%d DnsIpv4AddrReq:%d DnsIpv6AddrReq:%d
Fail sm_BuildProtConfigOpts() in sm_BuildNSetProtConfigOpts()
ProtConfigOpts Dump size:%d
PCO length is oversize
Enter sm_DecodeProtConfigOpts..
Error: ProtConOpt[0] is invalid - 0x%X
PROTOCOL ID:0x%x LEN:%d
SM_SELECTED_BCM_LEN:%d
Enter sm_DecodeProtConfigOpts..
Error: ProtConOpt[0] is invalid - 0x%X
PROTOCOL ID:0x%x LEN:%d
Error: Unknown Potocol ID (=0x%X)
APN matching with T3396 data. Without APN case ( Length =0)
APN matching with T3396 data
sm_NeedToStopT3396 (Cause =%d, PdpInstance =%d)
sm_NeedToStopT3396 (APN Length =%d)
[RSRA] ApnLength = %d
T3396 APN Length 0 = %d
T3396 Val 0 = %d
T3396 Cause 0 = %d
T3396 APN Length 1 = %d
T3396 Val 1 = %d
T3396 Cause 1 = %d
T3396 : Index=%d,T3396Value=%d,TimerDeactivated=%d,ApnLength=%d,Cause=%d
....timer deactivated
....timer duration = %d(seconds)
....timer duration = %d(seconds)
....timer duration = %d(seconds)
....timer duration = %d(seconds)
....timer duration = %d(decihours)
....timer duration = %d(seconds)
Checking Qos Parameters in sm_CheckAndStoreNegotiatedQos. Please Wait.....
UE received 0 kbps for both UL and DL bit rate. NW QoS not accepted
DelayClass ..... O.K.
Network's DelayClass > MinQos.DelayClass OR MinQos.DelayClass != 0 OR Network's DelayClass == 0 !!!, Activation Will be Rejected
ReliabilityClass ..... O.K.
Network's ReliabilityClass > MinQos.ReliabilityClass OR MinQos.ReliabilityClass != 0 OR Network's ReliabilityClass == 0 !!!, Activation Will be Rejected
PrecedenceClass ..... O.K.
Network's PrecedenceClass > MinQos.PrecedenceClass OR MinQos.PrecedenceClass != 0 OR Network's PrecedenceClass == 0 !!!, Activation Will be Rejected
PeakThroughput ..... O.K.
Network's PeakThroughput < MinQos.PeakThroughput OR MinQos.PeakThroughput != 0 OR Network's PeakThroughput == 0 !!!, Activation Will be Rejected
MeanThroughput ..... O.K.
Network's MeanThroughput < MinQos.MeanThroughput OR MinQos.MeanThroughput != 0 OR Network's MeanThroughput == 0 !!!, Activation Will be Rejected
TrafficClass ..... O.K.
Network's TrafficClass < MinQos.TrafficClass OR Network's TrafficClass == 0!!!, Activation Will be Rejected
ResidualBer ..... O.K.
Network's ResidualBer < MinQos.ResidualBer (unless it is 7) OR Network's ResidualBer is out of Range (0 < x < 0xf) !!!, Activation Will be Rejected
SduErrorRatio ..... O.K.
Network's SduErrorRatio < MinQos.SduErrorRatio OR Network's SduErrorRatio is out of Range (0 < x < 0xf) !!!, Activation Will be Rejected
DeliveryOfErrSdu ..... O.K.
Network's DeliveryOfErrSdu < MinQos.DeliveryOfErrSdu OR Network's DeliveryOfErrSdu is out of Range (0 < x < 7) !!!, Activation Will be Rejected
MaxBitRateUplink ..... O.K.
Network's MaxBitRateUplink < MinQos.MaxBitRateUplink OR Network's MaxBitRateUplink == 0 !!!, Activation Will be Rejected
MaxBitRateDownlink ..... O.K.
Network's MaxBitRateDownlink < MinQos.MaxBitRateDownlink OR Network's MaxBitRateDownlink is Out of Range (x > 0) !!!, Activation Will be Rejected
DeliveryOrder ..... O.K.
Network's DeliveryOrder < MinQos.DeliveryOrder OR Network's DeliveryOrder is Out of Range (0 < x < 3) !!!, Activation Will be Rejected
MaxSduSize ..... O.K.
Network's MaxSduSize < MinQos.MaxSduSize OR Network's MaxSduSize is Out of Range (0 < x < 0xff) !!!, Activation Will be Rejected
TransferDelay ..... O.K.
TransferDelay Ignored Due to Traffic Class ..... O.K.
Network's TransferDelay > MinQos.TransferDelay OR Network's TransferDelay is Out of Range (0 < x < 0x3f) !!!, Activation Will be Rejected
SignallingIndication ..... O.K.
Network's SignallingIndication > MinQos.SignallingIndication OR Network's SignallingIndication == 0 !!!, Activation Will be Rejected
SourceServiceDescriptor ..... O.K.
SourceStatisticsDescriptor Ignored Due to Traffic Class ..... O.K.
Network's SourceServiceDescriptor > MinQos.SourceServiceDescriptor OR Network's SourceServiceDescriptor == 0 !!!, Activation Will be Rejected
TrafficHandlingPriority ..... O.K.
TrafficHandlingPriority Ignored Due to Traffic Class ..... O.K.
Network's TrafficHandlingPriority > MinQos.TrafficHandlingPriority OR Network's TrafficHandlingPriority == 0 !!!, Activation Will be Rejected
Unable To Convert the Unknown Reliability Class (0x%02X) to SduErrorRatio in sm_MapPreRel99ToRel99QosParameters
Unable To Convert the Unknown Reliability Class (0x%02X) to Residual Bit Error Ratio in sm_MapPreRel99ToRel99QosParameters
Unable To Convert the Unknown Reliability Class (0x%02X) to Delivery of erroneous SDUs in sm_MapPreRel99ToRel99QosParameters
Unable To Convert the Unknown PeakThroughput (0x%02X) to MaxBitRateUplink in sm_MapPreRel99ToRel99QosParameters
Converting Pre Rel 99 to Rel 99 Qos Data,
Unable To Convert the Unknown Delay Class (0x%02X) to Traffic Class in sm_MapPreRel99ToRel99QosParameters
Unable To Convert the Unknown Delay Class (0x%02X) to TrafficHandlingPriority in sm_MapPreRel99ToRel99QosParameters
SM RATMode: %s -> %s
Instance --> %d,sm_EstReqSetRetryCount-> %d
sm_SessionData[Instance].sm_GmmEstReqRetryCount-> %d
RAT Mode -> %s
RAT Mode Status -> SM_RATMODE_CHANGE_IN_PROGRESS
RAT Mode Status -> SM_RATMODE_CHANGE_ENDED
Wrong Timer_catagory!!!!
Wrong Timer_catagory!!!!
Wrong Timer_catagory!!!!
Wrong Timer_catagory!!!!
Pdp Originator -> %s
Cause -> %s
Active Sessions :
PdpInstance = %d, Nsapi = %d , PrimaryNsapiAssociated =%x,Ti = %d,Originator = %s , State = %s
APN:%c %c %c ,Apn Length = %d, Sid =%d
Cid=%d
SmNASRelVersion -> %d
Traffic Flow Template Length -> %d
Traffic Flow Template Settings ->....
Traffic Flow Template Length -> %d
Traffic Flow Template Settings ->....
Protocol COnfiguration Options Length -> %d
Protocol COnfiguration Options ->....
Removing Nsapi %x, Instane %d
sm_SessionData[%d] Nsapi %x State -> %s
No Session Found with the Same PDP Address. Locally Deactivating the current Instance (%x)
sm_SessionData[%d] Nsapi %x State -> %s
No Session Found with the Same PDP Address. Locally Deactivating the current Instance (%x)
Wrong PdpInstance
Reliability Class -> %s
Delay Class -> %s
Precedence Class -> %s
Peak Throughput -> %s
Mean Throughput -> %s
Delviery of Erroneous SDUs -> %s
Delviery Order -> %s
Traffic Class -> %s
Max SDU Size -> %d
Max SDU Size -> %s
Max Bit Rate For Uplink -> %d KBits / Sec
Max Bit Rate For Uplink -> %s
Max Bit Rate For Downlink -> %d KBits / Sec
Max Bit Rate For Downlink -> %s
StaticGlobalSmData[SmCurrentStackId].sm_SessionData[%d].Nsapi -> %d
StaticGlobalSmData[SmCurrentStackId].sm_SessionData[%d].PdpAddressLength -> %d
PdpAddress -> ...
PdpAddress -> %s
StaticGlobalSmData[SmCurrentStackId].sm_SessionData[%d].ApnLength -> %d
Apn -> ...
StaticGlobalSmData[SmCurrentStackId].sm_SessionData[%d].ProtConfigOptsLength -> %d
ProtConfigOpts -> ...
ProtConfigOpts -> %s
StaticGlobalSmData[SmCurrentStackId].sm_SessionData[%d].TftLength -> %d
TFT -> ...
StaticGlobalSmData[SmCurrentStackId].sm_SessionData[%d].State -> %s
SDU Error Ratio -> %s
Residual Bit Error Rate -> %s
Traffic Handling Priority -> %s
Transfer Delay -> %d ms
Max Bit Rate For Uplink -> %s
Guaranteed Bit Rate For Uplink -> %d KBits / Sec
Guaranteed Bit Rate For Uplink -> %s
Guaranteed Bit Rate For Downlink -> %d KBits / Sec
Guaranteed Bit Rate For Downlink -> %s
Souce Statistics Descriptor -> %s
Signalling Indiation -> %s
MaxBitRateDownlinkExtended -> %d KBits / Sec
MaxBitRateDownlinkExtended -> %d MBits / Sec
MaxBitRateDownlinkExtended -> %d MBits / Sec
MaxBitRateDownlinkExtended -> %s
GuaranteedBitRateDownlinkExtended -> %d KBits / Sec
GuaranteedBitRateDownlinkExtended -> %d MBits / Sec
GuaranteedBitRateDownlinkExtended -> %d MBits / Sec
GuaranteedBitRateDownlinkExtended -> %s
MaxBitRateUplinkExtended -> %d KBits / Sec
MaxBitRateUplinkExtended -> %d MBits / Sec
MaxBitRateUplinkExtended -> %d MBits / Sec
MaxBitRateUplinkExtended -> %s
GuaranteedBitRateUplinkExtended -> %d KBits / Sec
GuaranteedBitRateUplinkExtended -> %d MBits / Sec
GuaranteedBitRateUplinkExtended-> %d MBits / Sec
GuaranteedBitRateUplinkExtended -> %s
SM_INSTANCE_ASSIGNED_FLG -> %s
SM_MOD_ACC_RECEIVED_FLG -> %s
SM_TEAR_DOWN_REQ_FLG -> %s
SM_SECONDARY_ACT_REQ_FLG -> %s
SM_ACTIVATION_ACC_BY_NTWK_FLG -> %s
SM_RABM_OR_SNDCP_ACT_RSP_RECEIVED_FLG -> %s
SM_GAPI_DEACT_CNF_MODE_FLG -> %s
SM_MS_INITIATED_MOD_REQ_FLG -> %s
SM_LLC_MODIFIED_FLG -> %s
SM_TFT_MODIFIED_FLG -> %s
SM_PCO_MODIFIED_FLG -> %s
Number Of Pdp Instances -> %d
SM_QOS_MODIFIED_FLG -> %s
SM_COVERAGE_REGAINED_FLG -> %s
SM_PDP_ACT_REJECTED_BY_NETWORK_FLG -> %s

No Flags are Set in Session %d !

RetransmissionCount[%s] -> 0x%x
EstablismentReqInitiator -> 0x%x
SndcpBufferStartOffset -> 0x%x
SndcpBufferOverheadLength -> 0x%x

Ti -> %x
TiOriginator ->%s
ExtendedTiUsed -> %s
Nsapi -> %x
PrimaryNsapi -> %x
LlcSapi -> %x
LinkedTi -> %x
Cid -> %d
Invalid Associated PdpInstance (%x) in sm_FindAssociatePdps
Invalid Primary PdpInstance (%x) in sm_FindAssociatePdps

PdpAddressLength -> %x
PdpAddress -> ....
ProtConfigOptsLength -> %x
ProtConfigOpts -> ....
ApnLength -> %x
AccessPointName -> ....
TftLength -> %x
TrafficFlowTemplate -> ....
ModReqTFTLength -> %x
ModReqTFT -> ....

%d. %s
%d. %s
Linked TI-> %d
PrimaryNsapi %d
StaticGlobalSmData[SmCurrentStackId].sm_SessionData[LoopCount].ContextIds.Ti -> %d
Found a matching PDP session for LinkedTi sent by NW with NSAPI-> %d
Qostlv == NULL, Length = %d
Converting QoS from TLV to Normal format. Please Wait.... Length = %d .
Invalid PdpInstance (%x); ProtCfgOpts Pointer not found.
Prot Cfg Opts Length -> %d
Protocol Config. Options -> ...
numOfTft is greater than max length. Setting it to 0 to prevent out of bounds issue.
---------------------------------------------
Display Stored TFT Data Instance:%d
---------------------------------------------
Filter Id: %d, Dir:Downlink
Filter Id: %d, Dir:Uplink
Filter Id: %d, Dir:Bidirectional
Filter Id: %d, Dir:pre Rel-7
Ip type: IPV6
Ip type: IPV4
---------------------------------------------
---------------------------------------------
Display TFT Data (size:%d)
---------------------------------------------
Filter Id: %d, Dir:Downlink
Filter Id: %d, Dir:Uplink
Filter Id: %d, Dir:Bidirectional
Filter Id: %d, Dir:pre Rel-7
---------------------------------------------
---------------------------------------------
sm_CheckTftCreatebyUE Primary %d
---------------------------------------------
PrimaryNsapi %d
StaticGlobalSmData[SmCurrentStackId].sm_SessionData[LoopCount].ContextIds.Ti -> %d


NSAPI-> %d

NORMAL Initialisation of %s
GSM to UMTS Initialisation of %s
UMTS to GSM Initialisation of %s
Unknown Initialisation Type (%x) in %s
Invalid PDP instance %x in %s
This is Some other Primary PDP PdpInstance (%x) in sm_MarkAssociateInstsToTearDown
Reserved NSAPI Has used in Primary (%x) in sm_MarkAssociateInstsToTearDown
Attempting to Read SM Data Using Invalid PdpInstance (%x) in sm_MarkAssociateInstsToTearDown
Session (%d) is Now acting as the Primary Nsapi (%d) in sm_FindAssociatePdps
Current Number of associated PDPs -> %d in sm_FindAssociatePdps
Set Deactvate Information = %d
Get Deactvate Information = %d
sm_GetSimProvider Funct ...
sm_CheckOperatorIdFromImsi ...
%s
Displaying Received Message Contents:
[CHAP CHALLENGE_RANDOM]chap_len :%d/RAND len= %d ,index =%d
[CHAP CHALLENGE_RANDOM]id =%d /chall_len :%d/index = %d
[CHAP CHALLENGE_RESP]id =%d /chall_len :%d/index = %d
Error: Unknown IPCP Code:%d
Error: DNS1 Opt Length(=%d) is invalid
DNS1 ADDR IP = %d.%d.%d.%d
DNS1 ADDR IPv6 Dump (size:%d)
Error: SM_MUST_DISPLAY_LEVEL DNS2 Opt Length(=%d) is invalid
DNS2 ADDR IP = %d.%d.%d.%d
DNS2 ADDR IPv6 Dump (size:%d)
Error: Unknown configuration option type=0x:%X size=%d
Error: IP Opt Length(=%d) is invalid
IP_ADDR Dump (size:%d)
Error: DNS_IPV6_ADDR Length(=%d) is invalid
Error: DNS_IPV4_ADDR Length(=%d) is invalid
Error: PCSCF_IPV6_ADDR Length(=%d) is invalid
Error: PCSCF_IPV4_ADDR Length(=%d) is invalid
Error: MSISDN Length crossed limit (=%d)
Error: DSMIPV6 HA ADDR Length(=%d) is invalid
Error: DSMIPV6 HN PREFIX Length(=%d) is invalid
Error: DSMIPV6 HA IPV4 ADDR Length(=%d) is invalid
Error: Invalid Policy ctrl rej cause length (=%d)
Error: Invalid BCM value length (=%d)
Error: Invalid IPv4 MTU length (=%d)
Error: Length of protocol id contents is zero
QosIeLength = %d
QosIeLength = %d
QosIeLength = %d
Type of service:%d mask:%d
Next header type:%d
Protocol number:%d(0x%x)
IPv4 remote address: %d.%d.%d.%d
IPv4 address mask: %d.%d.%d.%d
IPv6 remote address: %X:%X:%X:%X:%X:%X...
IPv6 address mask: %X:%X:%X:%X:%X:%X...
Local port range: %d ~ %d
Remote port range: %d ~ %d
Single local port: %d
Single remote port: %d
Flow label: 0x%X
Security parameter index: 0x%X
Ip type: IPV6
Ip type: IPV4
Type of service:%d mask:%d
Next header type:%d
Protocol number:%d(0x%x)
IPv4 remote address: %d.%d.%d.%d
IPv4 address mask: %d.%d.%d.%d
IPv6 remote address: %X:%X:%X:%X:%X:%X...
IPv6 address mask: %X:%X:%X:%X:%X:%X...
Local port range: %d ~ %d
Remote port range: %d ~ %d
Single local port: %d
Single remote port: %d
Flow label: 0x%X
Security parameter index: 0x%X
