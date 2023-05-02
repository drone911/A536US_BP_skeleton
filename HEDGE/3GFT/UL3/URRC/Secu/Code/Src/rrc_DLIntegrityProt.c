DLIntProt StartUpInit
DLIntProt ShutdownDestroy
DLIntProt init
DLIntProt free
DLIntProt Create SRB%d
rrc_DLIntegrityProt_UpdatePrevSmcStartValue No in State AWAITINGSMCACTIVATIONTIME
StartMgr PrevCsSmcStartValue CS: %x
StartMgr PrevPsSmcStartValue PS: %x
DLIntProt DoIntChk NotStarted
DlInt IntegrityCheck requested for SRB %d
DLIntegrityProt_p->CountI and RxMsn in rrc_DLIntegrityProt_PerformDLIntegrityCheck %x %x
DlInt MSN Wrap Around, Increment HFN for SRB %d
CountI = %x
Calculating MAC using integrity algorithm f9
DLIntProt F9 class failed to perform DLIntCheck
IntegrityAlgorithmType = %d
Same as previous message,discarded for duplicate
DSDS: DlInt MSN Wrap Around success ( RxMsn >= Previous MSN), update the COUNTI[SRB %d] = %x
DLIntProt DoIntChk successful
DLIntProt GenerateConfigurationStartSmc
DLIntProt GenerateConfigurationModifySmc
DLIntProt GenerateConfigurationComplete
DLIntProt GenerateConfigurationAbort
DLIntProt GenerateConfigurationStartRelocation
DLIntProt GenerateEnteringIdle
CountIUpdated = %d, SrbId = %d
CountI of Srb %d before rollback = %x
CountI of Srb %d after rollback = %x
DLIntProt Idle StartSmc
DlInt Keys and Counts activated for SRB %d
CnDomain @ ApplyLatestKeysAndCounts%d
DlInt NoNew Keys nor no Authentication, set 20MSB of HFN to START for SRB %d
Latest Startvalues at DLIntegrityProt_p moment are : %d
DlInt Idle ModifySmc for SRB %d
DlInt Idle Invalid Activation Time %d for SRB %d specified
Activation time is wrapped around
DlInt PendingActivation for SRB %d, Current-MSN: %d, Activation-MSN:%d
Activation time is wrapped around
DlInt PendingActivation for SRB %d, Current-MSN: %d, Activation-MSN:%d
DlInt Idle StartRelocation for SRB %d
DlInt DefaultState EnteringIdle for SRB %d
DlInt SmcReconfiguring ConfigurationComplete for SRB %d
DlInt SmcReconfiguring Abort for SRB %d
Latest DlIntegrity configuration is stored
SecMgrInst is NULL
DlInt Keys and Counts backuped for SRB %d
Backup CnDomain %d
Backup IK =
DlInt NoNew Keys nor no Authentication, set 20MSB of HFN to START for SRB %d
Latest Startvalue at DLIntegrityProt_p moment is: %x
Backup COUNT-I: %x
DlInt AwaitingSmcCompleteL2ack ConfigurationComplete for SRB %d
DlInt AwaitingSmcCompleteL2ack Abort for SRB %d
Latest DlIntegrity configuration is stored
SecMgrInst is NULL
DlInt AwaitingActivationTime ModifySMC for SRB %d
DlInt AwaitingActivationTime StartRelocation for SRB %d
DlInt AwaitRelocComplete Complete for SRB %d
SecMgrInst is NULL
SkipSameMsnCheckForSCR :%d
DLIntProt DoIntChk Rx-Msn:%x , Current Msn :%x
DLIntProt DoIntChk Rx-Msn:%x Invalid , Current Msn :%x
SkipSameMsnCheck = %d
SecMgr = NULL
SMC has been done for CS domain
SMC has been done for PS domain
Invalid CN Domain ID = %d
[Delayed Msg] DLIntProt DoIntChk Unchk'd msg type While Intergrity Starting
DLIntProt DoIntChk Unchk'd msg type
DlInt IntegrityCheck requested for SRB %d
DLIntegrityProt_p->CountI and RxMsn in rrc_DLIntegrityProt_PerformDLIntegrityCheck %x %x
DLIntProt F9 class HfnIncrementSkipped is TRUE
DlInt MSN Wrap Around, Increment HFN for SRB %d
CountI = %x
Calculating MAC using integrity algorithm f9
DLIntProt F9 class failed to perform DLIntCheck
IntegrityAlgorithmType = %d
DLIntProt DoIntChk Rx-MAC: %x differs to MAC without HFN increment:%x
CountI = %x, MAC = %x, Fresh = %x, EncodedMsgSize = %d, Associated RB-ID = %d
IKUsed =
MessageBuffer =
DLIntProt F9 class failed to perform DLIntCheck
DLIntProt DoIntChk Rx-MAC: %x differs to MAC with HFN increment:%x
CountI = %x, MAC = %x, Fresh = %x, EncodedMsgSize = %d, Associated RB-ID = %d
Integrity check failed, Rx-MAC: %x differs to MAC:%x
CountI = %x, Fresh = %x, EncodedMsgSize = %d, Associated RB-ID = %d
IKUsed =
MessageBuffer =
Retrial (1): Calculating MAC using integrity algorithm f9 without HFN Increment
DLIntProt F9 class failed to perform DLIntCheck
Integrity check failed, Rx-MAC: %x differs to MAC:%x
CountI = %x, Fresh = %x, EncodedMsgSize = %d, Associated RB-ID = %d
IKUsed =
MessageBuffer =
DLIntProt F9 class failed to perform DLIntCheck Check for Alternative Start Value
DlInt MSN Wrap Around, Increment HFN for SRB %d
Retrial (2): Calculating MAC using integrity algorithm f9 with START value at latest SMC
DLIntProt F9 class failed to perform DLIntCheck
Integrity check failed, Rx-MAC: %x differs to MAC:%x
CountI = %x, Fresh = %x, EncodedMsgSize = %d, Associated RB-ID = %d
Retrial (3): Calculating MAC using integrity algorithm f9 without HFN Increment with START value at latest SMC
DLIntProt F9 class failed to perform DLIntCheck
Integrity check failed, Rx-MAC: %x differs to MAC:%x
CountI = %x, Fresh = %x, EncodedMsgSize = %d, Associated RB-ID = %d
Latest Startvalues at DLIntegrityProt_p moment are : %d
Retrial (4): Calculating MAC using integrity algorithm f9 without HFN Increment with Latest transmitted START
DLIntProt F9 class failed to perform DLIntCheck
Integrity check failed, Rx-MAC: %x differs to MAC:%x
CountI = %x, Fresh = %x, EncodedMsgSize = %d, Associated RB-ID = %d
DlInt MSN Wrap Around, Increment HFN for SRB %d
Retrial (5): Calculating MAC using integrity algorithm f9 with previous start value stored
DLIntProt F9 class failed to perform DLIntCheck
Integrity check failed, Rx-MAC: %x differs to MAC:%x
CountI = %x, Fresh = %x, EncodedMsgSize = %d, Associated RB-ID = %d
ReconfigAborted: Retrial with latest configuration
DlInt MSN Wrap Around, Increment HFN for SRB %d
DLIntProt F9 class failed to perform DLIntCheck
CountI = %x, MAC = %x, Fresh = %x, EncodedMsgSize = %d, Associated RB-ID = %d
IKUsed =
ReconfigAborted: Retrial without HFN increment
DLIntProt F9 class failed to perform DLIntCheck
CountI = %x, MAC = %x, Fresh = %x, EncodedMsgSize = %d, Associated RB-ID = %d
IKUsed =
ReconfigAborted: COUNT-I = %x
SecMgrInst is NULL
DlInt Keys and Counts activated for SRB %d
CnDomain @ ApplyLatestKeysAndCounts%d
DlInt NoNew Keys nor no Authentication, set 20MSB of HFN to START for SRB %d
Latest Startvalues at DLIntegrityProt_p moment are : %d
DlInt Keys and Counts activated for SRB %d
CnDomain @ ApplyLatestKeysAndCounts%d
DlInt NoNew Keys nor no Authentication, set 20MSB of HFN to START for SRB %d
Latest Startvalues at DLIntegrityProt_p moment are : %d
DLIntProt No DomainId available in SecModeCmd to DlIntCheck
DlInt MSN Wrap Around, Increment HFN for SRB %d
Retrial (2): Calculating MAC using integrity algorithm f9 with previous transmitted START value
DLIntProt F9 class failed to perform DLIntCheck
Integrity check failed, Rx-MAC: %x differs to MAC:%x
CountI = %x, Fresh = %x, EncodedMsgSize = %d, Associated RB-ID = %d
Retrial (3): Calculating MAC using integrity algorithm f9 without HFN Increment with previous transmitted START value
DLIntProt F9 class failed to perform DLIntCheck
Integrity check failed, Rx-MAC: %x differs to MAC:%x
CountI = %x, Fresh = %x, EncodedMsgSize = %d, Associated RB-ID = %d
DlInt MSN Wrap Around, Increment HFN for SRB %d
Retrial (4): Calculating MAC using integrity algorithm f9 with Latest transmitted START
DLIntProt F9 class failed to perform DLIntCheck
Integrity check failed, Rx-MAC: %x differs to MAC:%x
CountI = %x, Fresh = %x, EncodedMsgSize = %d, Associated RB-ID = %d
Retrial (5): Calculating MAC using integrity algorithm f9 without HFN Increment with Latest transmitted START
DLIntProt F9 class failed to perform DLIntCheck
Integrity check failed, Rx-MAC: %x differs to MAC:%x
CountI = %x, Fresh = %x, EncodedMsgSize = %d, Associated RB-ID = %d
DLIntProt ,New Fresh value %x specified
DLIntProt No DomainId available in SecModeCmd to DlIntCheck
UpdateCheckParamsFromDlMsg: No Algorithm
SecMgrInst is NULL
DlInt HFN is reset to zero %x
DlInt HFN to be used is from StartValues %x
DlInt HFN to be used initialised to Zero
DlInt Increment HFN since MSN Wrap Around Occurred
DlInt HFN to be used is from StartValues %x
DlInt Increment HFN since MSN Wrap Around Occurred
DLIntProt ActivationTimeExpired for SRB%d
DLIntProt ActivationTimeMissed for SRB%d
