SecMgr StartUpInit
SecMgr ShutdownDestroy
SecMgr init
SecMgr Unable to register for state change info
No Memory allocated for rrc_SecurityMgr_init
[SecMgr] free
SecMgr GetInstanceId creates instance
SecMgr MmSecurityKeyIndication
CS-IK :
CS-CK :
isHandoverToUmts is FALSE Update as new Keys
isHandoverToUmts is TRUE Considered as Old Keys
SRVCC PS-IK :
SRVCC PS-CK :
SecMgr GmmSecurityKeyIndication
PS-IK :
PS-CK :
isHandoverToUmts is FALSE Update as new Keys
isHandoverToUmts is TRUE Considered as Old Keys
SRVCC PS-IK :
SRVCC PS-CK :
Latest Integrity keys belong to CS-Domain
Latest Integrity keys belong to PS-Domain
PS-IK tostart :
PS-CK tostart :
CS-IK tostart :
CS-CK tostart :
[rrc_SecurityMgr_HandoverToUtran] DlMsgInstId is NULL
SecMgr HandoverToUtran
SecMgr HandoverToUtran invalid
[SecMgr] Generate HandleSMI
[SecMgr] Generate HandleSMC
[SecMgr] Generate HandleSMC
[SecMgr] Generate IPCnf
[SecMgr] Generate CiphCnf
[SecMgr] Generate SMCL2Ack
[SecMgr] Generate FirstDLIntCheckMsgHandled
[SecMgr] Generate SMIL2Ack
[SecMgr] Generate InitCellUpdate
[SecMgr] Generate EnteringIdle
[SecMgr] Generate CipherErrorInd
[SecMgr] Generate RatModeChangeReq
Start of HandleDelayedSMC
msg = NULL
L2U_PS: No need to update keys
L2U_SRVCC: Need to use PS and CS SRVCC keys
L2U_SRVCC: Normal PS keys and SRVCC CS keys will be used
rrc_SecurityMgr_UpdateSrvccKeys: invalid L2UHOType = %d
PendingCSKeyActivation set to TRUE
PendingPSKeyActivation set to TRUE
Invalid CN Domain %d
[SecMgr][NotReconfig] HandleSMI
[SecMgr] Wrong SMI during PendingSMC due to DlMsgReconfig
[SecMgr] Priv ProcessSMI IP present
[SecMgr] Priv ProcessSMI Ciph present
SecMgr State moved to SECURITYMGR_AWAITIPRESP
SecMgr State moved to SECURITYMGR_AWAITCIPHRESP as no IntegrityReconfiguring
No IntegrityReconfiguring and CipheringReconfiguring
[SecMgr][NotReconfig] HandleSMC
[SecMgr] Simultaneous SMC Accept
[SecMgr] HandleSMC Reject due to PendingSMC
[SecMgr][CheckSmcValidityWithPendingSmc] SMC Not Available (NewSmc 0x%x, PendingSmc 0x%x)
[SecMgr] DomainId not returned from SecModeCmd DlMsg
The SMC will be processed after finishing RB reconfiguration
SecMgr ValidateSMC IP present
SecMgr ValidateSMC Ciph present
SecMgr ValidateSMC No security IE's
SecMgr SecCap not returned from SecModeCmd DlMsg
SecMgr CiphAlgUea0 mismatch
SecMgr CiphAlgUea1 mismatch
SecMgr IntAlgUia1 mismatch
SecMgr CiphAlgUea2 mismatch
SecMgr IntAlgUia2 mismatch
SecMgr GsmSecCap MisMatch ,RequestedGsmCap is %x , ActualCap is %x
SecMgr GsmSecCap not present in the SMC
SecMgr ValidateSMC Equipment Mode in TDD Override the Capabilities for Lte Test
SecMgr ValidateSMC invalid SecCap
SecMgr ValidateSMC DLMP Process failed
SecMgr SecModeCmd DlMsg failed to create UlFailure
SecMgr Send SMCFailure to Utran
[SecMgr] SMC failed to create UlFailure
[SecMgr] Send SMCFailure to Utran
[SecMgr][NotReconfig] CellUpdate
[SecMgr][NotReconfig] HandleDelayedSMC
[SecMgr] PendingSMC Mismatch
[SecMgr] No PendingSMC (Flag %d)
[SecMgr] PendingSMC not yet handled
[SecMgr][NotReconfig] RatModeChangeReq
[SecMgr][Config] HandleSMI
[SecMgr] HandleSMI Accept
[SecMgr] HandleSMI Reject
[SecMgr][Config] HandleSMC
[SecMgr] HandleSMC Accept
[SecMgr] HandleSMC Reject
SecMgr ValidateSimultaneousReconfiguration
SecMgr Invalid Simultaneous Integrity Reconfig
SecMgr Invalid Simultaneous Ciphering Reconfig
[SecMgr][Config] ConfigIPCnf
[SecMgr] NACK received from IntegrityMgr
[SecMgr] Configuring -> AwaitCiphResp
[SecMgr] ConfigUnderway
SecMgr SecModeCmd DlMsg failed to create ULSuccess
[SecMgr][Config] ConfigCiphCnf
[SecMgr] NACK received from CipheringMgr
[SecMgr] Configuring -> AwaitIPResp
[SecMgr] ConfigUnderway
[SecMgr][Config] InitCellUpdate
[SecMgr] abort SMC and return to NotReconfig
[SecMgr] abort SMC and discard pending SMC
[SecMgr] action pending SMI
SecMgr Configuration Aborted
[SecMgr] CipherErrorInd
[SecMgr][AwaitCiphCnf] HandleSMC
[SecMgr][AwaitCiphCnf] CiphCnf
[SecMgr] NACK received from CipheringMgr
[SecMgr][AwaitCiphCnf] InitCellUpdate
[SecMgr][AwaitIPCnf] HandleSMC
[SecMgr][AwaitIPCnf] IPCnf
[SecMgr] NACK received from IntegrityMgr
[SecMgr] AwaitIpResp -> AwaitCiphResp
[SecMgr] ConfigUnderway
[SecMgr][AwaitIPCnf] InitCellUpdate
[SecMgr][AwaitL2Cnf] HandleSMI
[SecMgr] Simultaneous SMI Accept - Pended
[SecMgr] Simultanous SMI Reject
[SecMgr][AwaitL2Cnf] HandleSMC
[SecMgr] Simultanous SMC Accept - Pended
[SecMgr] Simultanous SMC Reject
[SecMgr] AwaitL2Cnf SMCL2ACK
[SecMgr] AwaitL2Cnf SMCL2NACK
[SecMgr] Handle pending config
[SecMgr] Begin the PendingConfig
[SecMgr] AwaitL2Cnf SMIL2ACK
[SecMgr] AwaitL2Cnf SMIL2NACK
[SecMgr][AwaitL2Cnf] InitCellUpdate
[SecMgr] FirstDLIntCheckedMsgHandled SMCL2ACK
[SecMgr] FirstDLIntCheckedMsgHandled Failed to deregister for Cnf
[SecMgr] Entering NotReconfiguring
[SecMgr][NotReconfiguringEntry] PendingDueToDlMsgReconfig %d, ReconfigMsg 0x%x
[SecMgr][NotReconfiguringEntry] PendingDueToDlMsgReconfig %d, ReconfigMsg 0x%x
SecMgr SMCDLMsg reference not null on EnteringNotReconf
SecMgr PendSMCDLMsg reference not null on EnteringNotReconf
[SecMgr] AwaitCiphResp_Entry
