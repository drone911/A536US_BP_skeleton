sm_ExtractMCC(0x%x)
sm_ExtractMNC(0x%x)
DualPdpReq -> %d
V42 Bis Test Mode is Enabled
Received Data Comp type -> %d
Modified Data Comp type -> %d
V42 Bis Test Mode is NOT Enabled Or Rat is not GSM
Received Data Comp type -> %d
Selected PdpInstance -> %d
ReqType -> %d
Rejecting GAPI's PDP Activation in sm_DecodeSmRegPdpActivationReqMsg! IMS PDP reject because of MCC(0x505)!!
Rejecting GAPI's PDP Activation in sm_DecodeSmRegPdpActivationReqMsg ! No more resource Available !!
Rejecting GAPI's PDP Activation in sm_DecodeSmRegPdpActivationReqMsg !
PDP Activation for this NSAPI already Exists, Sending CNF back to CNS State %d
PDP Activation for this TID already Exists, Sending CNF back to CNS sm_CheckForExistingSession...
sm_CheckForExistingSession... False...
Rejecting GAPI's PDP Activation in sm_DecodeSmRegPdpActivationReqMsg ! Invalid TI requested, Already Used !!
Rejecting GAPI's PDP Activation in sm_DecodeSmRegPdpActivationReqMsg !
Sending GS19 - PDP Context Request
GS19.dwContextId -> %d
GS19.dwAssocContextId -> 0x%x
GS19.ucNSAPI -> %d
GS19.ucSAPI -> %d
GS19.ucOrdinal -> %d
GS19.ucInitiator -> %d
GS19.szApn (size:%d) ->
Rat(%d) AgbLuFlag(%d)
Invalid LLCSapi....so do local deactivation.
Wrong cause in GMMSM_TRIGGER_IND (%d)
Invalid EstablismentReqInitiator (%x) in sm_SendGmmSmEstablishReqMsg. Aborting Operations.!!
SM_DEACTIVATION_ESTAB received but already sent NETWORK_PDP_DEACTIVATION_ACC, ignore sending PdpDeactivationReq!!
SM_DEACTIVATION_ESTAB received in wrong state in sm_DecodeGmmSmEstablishCnfMsg, Message Ignored!!
Invalid EstablismentReqInitiator, Message Ignored!!
SM Could not find a Pdp Instance Matching the Nsapi (%x) that GMM has sent. Rejecting GAPI's PDP Activation in sm_DecodeGmmSmEstablishCnfMsg. Message Ignored !!!
Primary Sid -> %d
SM Could not find a Pdp Instance Matching the Nsapi (%x)
2nd Sid -> %d PrimaryInstance = %d Nsapi = %d
ClientMailBoxId -> 0x%02X
HeaderCompType -> 0x%02X, DataCompType -> 0x%02X
BufferStartOffset -> 0x%02X, BufferOverheadLength -> 0x%02X
IP Version -> 0x%02X
PDP Type -> 0x%02X
Dual Sid -> 0x%02X
SmNASRelVersion -> %d
Invalid PdpInstance (%x); Apn Pointer not found. sm_SendPdpActivationReqMsg
Invalid PdpInstance (%x); ProtCfgOpts Pointer not found. sm_SendPdpActivationReqMsg
LlcSapi -> %d
Neogtiated Qos Data -> ...
HeaderCompType -> 0x%02X, DataCompType -> 0x%02X
RABM Confirmed Resource Allocation, Sending Confirmation to GAPI in sm_DecodeRabmSmPdpActivationRspMsg
No Action
Mesage Received in sm_DecodeRabmSmPdpActivationRspMsg for Rat change. No Need to do anything
Mesage Receivedin Wrong SM State, Ignoring Message in sm_DecodeRabmSmPdpActivationRspMsg
Unknown NSAPI Given By RABM in sm_DecodeRabmSmPdpActivationRspMsg, Ignoring Message
Sending Cnf to AP as well as MMC
Deactivating PDP due to Cause:- %s in sm_DecodePdpActivationAcceptMsg
Sending Status MSG due to Cause:- %s in sm_DecodePdpActivationAcceptMsg
Incorrect SM State in sm_DecodePdpActivationAcceptMsg, Sending STATUS MSG, Cause = (%s)
Unknown PdTi (%x) in sm_DecodePdpActivationAcceptMsg
Instance AgbLuFlag = 0x%x
Instance is initiated at HEDGE..
LlcSapi -> %x,ClientMailBoxId -> %x
HeaderCompType -> 0x%02X, DataCompType -> 0x%02X
BufferStartOffset -> 0x%02X, BufferOverheadLength -> 0x%02X
SNDCP Confirmed Resource Allocation, Sending Confirmation to GAPI in sm_DecodeSnSmPdpActivationRspMsg
HeaderCompType -> 0x%02X, DataCompType -> 0x%02X
Mesage Received in sm_DecodeRabmSmPdpActivationRspMsg for Rat change. Nothing needs to be done
Rejecting SNDCP Response Due to Incorrect SM State in sm_DecodeSnSmPdpActivationRspMsg
Unknown NSAPI (%x) Given By SNDCP in sm_DecodeSnSmPdpActivationRspMsg
Unexpected PdpType : %d
PdpAddressLength is zero
[SM Cause2] Cause2 =0x%x
LlcSapi -> %d
Protocol Config. Options Length -> %d
Protocol Config. Options -> ...
PdpAddress Length -> %d
PdpAddress -> ...
Sending GS15 - PDP Context Activation
GS15.dwContextId -> %d
GMM Requesting SM to Try Other RAT. Nothing needs to be done by SM, GMM will re-try....
Retrying for GMM Est Req.....
Rejecting GAPI's Req for PDP Activaiton in sm_DecodeGmmSmEstablishRejMsg
SM Trying to Modify PDP in sm_DecodeGmmSmEstablishRejMsg.
Starting either SM_REC_PDPINST or SM_DEACT_REC_PDPINST Timer (Instance:%d, Retrial Count:%d)
SM Trying to Deactivate PDP in sm_DecodeGmmSmEstablishRejMsg.
LTE RAT !!! Send Cnf to Gapi This is the Case we does not send PDP DEACT REQ to Network (%d)
GMM_EST_REJ Arrived in Incorrect SM State in sm_DecodeGmmSmEstablishRejMsg. Ignoring Message...
SM Could not find a Pdp Instance Matching the Nsapi that GMM has sent. Rejecting GAPI's PDP Activation in sm_DecodeGmmSmEstablishRejMsg. Ignoring Message!!!
Protocol Config. Options Length -> %d
Protocol Config. Options -> ...
Sending GS18 - PDP Context End
GS18.dwContextId -> %d
GS18.wTermCode -> %d
GS18.ucInitiator -> %d
PdpType %d
Stack = %d.
Orange Requirement
NW sending Reject for Activated PDP.. need to deactivate locally....
Sending STATUS MSG, Cause = (%s) , Incorrect SM State, in sm_DecodePdpActivationRejMsg
Unknown PdTi (%x) in sm_DecodePdpActivationRejMsg, Sending Status Message
Selected PdpInstance -> %d
Primary NSAPI State = %s in sm_DecodeSmRegSecPdpActivationReqMsg
BCM Violation
Seconday PDP Activation Rejected . Incorrect Primary NSAPI SM State in sm_DecodeSmRegSecPdpActivationReqMsg
Rejecting GAPI's Secondary PDP Activation Req. GAPI Has Used Up All Allowed Instances in sm_DecodeSmRegSecPdpActivationReqMsg
Rejecting GAPI's Secondary PDP Activation. Ti Already Used in sm_DecodeSmRegSecPdpActivationReqMsg
Rejecting GAPI's Secondary PDP Activation Req Rat Mode Change in Progress: sm_DecodeSmRegSecPdpActivationReqMsg
Seconday PDP Activation Rejected. Unrecognised Primary NSAPI (%x) in sm_DecodeSmRegSecPdpActivationReqMsg
PrimaryNsapi %d ,LinkedTi -> 0x%x
Invalid PdpInstance (%x); Tft Pointer not found. sm_SendSecPdpActivationReqMsg
LlcSapi -> %d ,LinkedTi -> %d
Neogtiated Qos Data -> ...
Displaying Qos Sent by Network in sm_DecodePdpActivationAcceptMsg
sm_CheckQosIe Err
Qos Accepted in sm_DecodeSecPdpActivationAccMsg

LlcSapi -> %d
sm_CheckRadioPriorityIe Err
RABM has already Confirmed, so inform GAPI
Deactivating PDP due to Cause:- %s in sm_DecodePdpActivationAcceptMsg
Sending Status MSG due to Cause:- %s in sm_DecodePdpActivationAcceptMsg
Incorrect SM State in sm_DecodePdpActivationAcceptMsg, Sending STATUS MSG, Cause = (%s)
Unknown PdTi (%x) in sm_DecodeSecPdpActivationAccMsg
Primary Nsapi -> %d, Nsapi -> %d, LlcSapi -> %d
Nsapi -> %d
TiValue -> %d
LlcSapi -> %d
Neogtiated Qos Data -> ...
Protocol Config. Options Length -> %d
Protocol Config. Options -> ...
Sending GS15 - PDP Context Activation
GS15.dwContextId -> %d
sm_CheckCauseIe Err
SM got Reattempt IE :%d
Sending STATUS MSG, Cause = (%s), Incorrect SM State, in sm_DecodeSecPdpActivationRejMsg
Unknown PdTi (%x) in sm_DecodeSecPdpActivationRejMsg
Protocol Config. Options Length -> %d
Protocol Config. Options -> ...
Sending GS18 - PDP Context End
GS18.dwContextId -> %d
GS18.wTermCode -> %d
GS18.ucInitiator -> %d
APN size is over 100 so it will be max value to SM_APN_LENGTH
PCO size is over 100 so it will be max value to SM_PROT_CFG_OPTS_LENGTH
Checking For Collision Scenarios in sm_DecodeNetworkPdpActivationReqMsg..... [24.008]-6.1.3.1.5
Checking for Network Initiated PDP Activations for Already Activated PDPs (Matching APN, PDP Address & Pdp Type) in sm_DecodeNetworkPdpActivationReqMsg...... [24.008]-6.1.3.1.5
Rejecting Network's PDP Activation Due to a Collision in sm_DecodeNetworkPdpActivationReqMsg...... [24.008]-6.1.3.1.5!
All Instances Are Used Up in sm_DecodeNetworkPdpActivationReqMsg
NetworkPdpActivationReqMsg ignored as per TC 45.2.4.2-1
Incorrect TI sent by the Network, Message Ignored...... [24.008]-8.3.2
LinkedTiLength-> %d
LinkedTi after shift -> %d
SM Could not find a Pdp Instance Matching the Nsapi (%x)
All Instances Are Used Up in sm_DecodeNetworkSecPdpActivationReqMsg
Incorrect TI = %d sent by the Network, Message Ignored...... [24.008]-8.3.2
SEC PDP Primary PdpInstance -> %d /InstanceFound -> %d/
SEC PDP Instance -> %d/ Cid %d
TiValue -> %d
PrimaryNsapi -> %d
TftLength -> %d
Tft-> ...
QoS from NW -> ...
PCO Length -> %d
PCO -> ...
Sending GS15 - PDP Context Activation
GS15.dwContextId -> %d
Ti -> %d, TiOriginator -> %d
ProtConfigOptLen is greater than max length. Setting it to 0 to prevent out of bounds issue.
Rejecting GAPI's request, RAT Change in progress in sm_DecodeSmRegNetworkPdpActivationRejMsg !
Ti -> %d, TiOriginator -> %d
ProtConfigOptLen is greater than max length. Setting it to 0 to prevent out of bounds issue.
Rejecting GAPI's request, RAT Change in progress in sm_DecodeSmRegNetworkSecPdpActivationRejMsg !
State = %d
AgbLuFlag = 0x%x
IU_MODE_VALID_CONTEXT CONTEXT Valid For UMTS.
LlcSapi = %d
AGB_MODE_VALID_CONTEXT Valid For GPRS.
S1 Mode supported. Setting Traffic class to Interactive or Background ..
PDP Length %d
PDP address field should be empty from REL-10. ReqType =%d
ONESKU. ReqType =%d
AP IP Len =%d/CP IP Len =%d
sm_StoreSecReqDetails PcoLength %d
Error in Lengths of Data which should be in the following range: 0 < PdpAddrLen <= 16, 0 <= ApnLength <= 100, 0 <= ProtCnfOptionsLen <= 251
GAPI requested 0 kbps for both UL and DL bit rate .. rejecting GAPI request
Checking Instance -> %d
Checking for a Match Between Any Pending PDP Activation By MS <Pdp Address and APN> and Network's ones......
Checking Instance -> %d
PDP Addresses Match...
APns Match...
APns Do NOT Match...
APns Do NOT Match...
PDP Addresses Do NOT Match...
PDP Addresses Do NOT Match...
There were no Instances of Pending PDP Activations By MS
Establish Request Initiator -> %s
GMM Establish Request Cause -> %s
GAPI Requested PDP Type -> %s
Network PDP Type -> %s
Radio Priority -> %s
Invalid Packet Flow Id (%x) used in sm_DisplayPacketFlowId
Packet Flow Id -> %x
Max Bit Rate For Uplink -> %s
Activation Cause -> %s
TI -> %x, TI Originator -> %s
LlcSapi -> %x, Client MailBox Id -> %x
Given PdpAddress Length -> %x
Given PdpAddress -> ...


TI -> %x, TI Originator -> %s,PrimaryNsapi -> %x
Given Traffic Flow Template Length -> %x
Given Traffic Flow Template -> ...
Sndcp Buffer Overhead Length -> %x
Sndcp Buffer Start Offset -> %x


GS15.dwIpAddress -> %d.%d.%d.%d
GS15.strIpV6Address ->
GS15.dwIpAddress -> %d.%d.%d.%d
GS15.strIpV6Address ->
GS15.dwDns1 -> %d.%d.%d.%d
GS15.dwDns2 -> %d.%d.%d.%d
GS15.strIpV6Dns1 ->
GS15.strIpV6Dns2 ->
sm_CheckCauseIe Err
Protocol Config. Options Length -> %d
Protocol Config. Options -> ...
SM got Reattempt IE :%d
PDP Address size is over MAX so it will be max value to MAX
All Pending MS Requested Activations are of the Same PDP Type.. [24.008]-6.1.3.1.5
Collision Detected ! Network PDP Activation Received Before Reception of PDP Activation Resposne From the Network for the Previous MS Request..... [24.008]-6.1.3.1.5
Checking Ability to Match MS Requested PDP Address and APNs With Networks'..... [24.008]-6.1.3.1.5
MS is Able to Check Whether MS Requested PDP Address and APNs Match Networks' Requested Ones....... [24.008]-6.1.3.1.5
MS Requested PDP Address and APNs Match Networks' Requested Ones. Ignoring Message...... [24.008]-6.1.3.1.5
MS Requested PDP Address and APNs Do NOT Match Networks' Requested Ones. Rejecting Network Activation...... [24.008]-6.1.3.1.5
PtrApn is NULL or PrtPdpAddr is NULL
MS is Unable to Check Whether MS Requested PDP Address and APNs Match Networks' Requested Ones. Rejecting Network's PDP Activation...... [24.008]-6.1.3.1.5
Rejecting Network's PDP Activation Due to a Collision in sm_DecodeNetworkPdpActivationReqMsg...... [24.008]-6.1.3.1.5!
All Instances Are Used Up in sm_DecodeNetworkPdpActivationReqMsg
For Dynamic Addressing, No Collision is Detected. Upto Network Implementation, ...... [24.008]-6.1.3.1.5
Pending MS Requested Activations are of both types: Static and Dynamic. Implementation is to Reject Network's PDP Activation...... [24.008]-6.1.3.1.5
Error: No Pending MS Requested Activations should be in ACTIVE State..... [24.008]-6.1.3.1.5
No Collisions Detected...... [24.008]-6.1.3.1.5
PDP Address size is over MAX so it will be max value to MAX
Found a Match, Instance -> %d, Locally Deactivating it
Sending GS19 - PDP Context Request
GS19.dwContextId -> %d
GS19.dwAssocContextId -> 0x%x
GS19.ucNSAPI -> %d
GS19.ucSAPI -> %d
GS19.ucOrdinal -> %d
GS19.ucInitiator -> %d
GS19.szApn (size:%d) ->
PtrPCO or PtrApn or PtrPdpAddr is NULL
Checking for Duplicated Ti
Found Matching Ti already in Use
Matching TIs means that SM has to Locally De-activate this Session and Activate Again when Deactivate CNF is received...... [24.008]-8.3.2
sm_CheckQosIe Err
Qos Accepted in sm_DecodePdpActivationAcceptMsg
LlcSapi -> %d
sm_CheckRadioPriorityIe Err
Memory allocation failed... returning
Modified Pdp Address -> ...
changed Pdp Address -> ...
Unknown Pdp Address Length %d
Pdp Address -> ...Len %d
User Requested Dynamic PDP, but Network Sent No PDP Address -> Rejecting PDP Activation
Unexpected PdpType : %d
TiValue -> %d
PdpAddress Length -> %d
PdpAddress -> ...
Apn Length -> %d
Apn -> ...
PCO Length -> %d
PCO -> ...
Sending GS15 - PDP Context Activation
GS15.dwContextId -> %d
All Instances Are Used Up (1); in sm_DecodeNetworkPdpActivationReqMsg
PdpAddressLength ,ApnLength values are out of bounds
Prot Cfg Opts Length -> %d
BcmParameter -> %d
Protocol Config. Options -> ...
Cause = 0x%x, PDPtype =0x%x SendPdpType 0x%x
Setting SIPC Dual PDP support
Stopping SIPC Dual PDP support
