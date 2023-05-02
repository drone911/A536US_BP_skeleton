%s :
%s : Processing USIM_MMC_READ_ALL_RSP
LTESIM_MMC_READ_ALL_RSP:PrefPlmnListPtr
LTESIM_MMC_READ_ALL_RSP:HplmnListPtr
LTESIM_MMC_READ_ALL_RSP:OplmnListPtr
LTESIM_MMC_READ_ALL_RSP:FplmnListPtr
LTESIM_MMC_READ_ALL_RSP:pMLPL_Table
LTESIM_MMC_READ_ALL_RSP:pMSPL_Table
LTESIM_MMC_READ_ALL_RSP:PLMNSel
LTESIM_MMC_READ_ALL_RSP:EHplmnListPtr
Mode is CDMA
%s : NR NSA Support - %d (%s), NR SA Support - %d (%s), inNrNsaOnly : %d
%s : current - %s, New (from NS) - %s
ServiceDomain from NS - %d
LastCampCountryCode (%x)
NR is disabled, change to non-SA mode
NR_SA is supported, but VoLTE is off, need to support NSA capability
Elevator mode is not enabled.
SIM INVALID or not present
Init not completed
Operating Mode is not supporting LTE
EUTRA is permenantly disabled
CSFB call ongoing
EMC call pending
CDMA call pending
IRAT in progress
User req ongoing
AUTO_TO_AUTO_RESEL ongoing
MCC Search is already going on !
Global mode powerOn stored scan in progress
MPSR timer expiry actions in progress
%s :
Actions are not taken for Elevator mode indication
[W]Eutra Temporarily Disabled. Enable EUTRA for search
%s : ServiceDomain from NS - %d
[W]PLMN is not initialized - PlmnInitialised:%d or Stack Initialization Ongoing - StackInitialised: %d!
[W]GMSS is not initialized yet!
[W]Allow EUTRA enable only if GMM SIM state is valid or SIM is present!
Enable NR and EUTRA (and perform NR or LTE search)
BPLMN in progress, proceed with Abort
User action is pending. No additional actions taken
BPLMN in progress, proceed with Abort
%s : currVoLTESupport (%d) NsVolteCapaSetReq (%d)
%s : No actions as plmn_GlobalModeReinitializedFlag (%d)
%s : CTC VoLTE precondition is not matched, ignore ILM
Clear pending deferred actions! (off->on)
Clear pending deferred actions! (on->off)
Unexpected GMSS VolTE setting pending value(%d)
%s : NsVolteCapaSetReq (%d)
%s : currVoLTESupport (%d)
[W]%s : CTC VoLTE and NRSA VoLTE precondition are not matched, ignore ILM
Volte Disabled, Take actions
IMS is registered. Take actions
IMS is not registered. Do not take actions
Don't take actions for VolteCapaSetReq, wait for IMS REG STATUS
%s : NrSilentMode from NS - %d
%s : NrSilent feature not ENABLED, Ignore NrSilentModeInd from NS
%s : DualSimStatus from NS - %d
Same DualSimStaus reported by NS, no action taken
3G dual SIM is not supported
%s : SameSimStatus from NS - %d
%s : DDSChange from NS - %d
PS Stack Number From Registry - %d, OldDdsValue = %d, New DDS Value : %d
IMS Stack value From Registry - %d, Old IMS DDS Value: %d, New Value : %d
[!]%s : stack in suspended state
%s : opMode(0x%x) fullscan(0x%x)
%s :
%s : blackList(0x%x) prefMode(0x%x) prefSvc(0x%x) targetMode(0x%x)
[!]Invalid blacklist
[!]Invalid preferred RAT
[!]Invalid preferred service
Invalid preferred RAT, It is not inluded in targetOpMode.
Changed preferred RAT to NONE.
[!]%s : stack in suspended state
%s :
Recieived CALL_FAIL/CALL_END without CALL_START, Just send EMC_RAT_INFO and avoid further actions !
Setting MMC EMC RAT to FailedRat !
Test SIM card and MMC_EMERGENCY_CALL_FAIL in UMTS, Treat as Call END
EMC Call Status %d -> %d
%s : CB Mode = %d
[W]%s : CB mode is not MMC_EMERGENCY_CB_MODE_NORMAL
Emergency call Status : ECBM Exit
[W]Wait for EMC CALL END to take actions
[W]Wait for EMC CALL END & CDMA CS CALL END to take actions
%s : Mmc_ConfigureIratToLteReq.enable: %s
No action required in MMC_LTE_HEDGE_EMC_MODE
[!]%s : CSFB already ongoing on other stack, Est Req Not Expected
[!]%s : Operating Mode(%s) is Not LTE-3G(2G) MultiMode. Est Req Not Expected
[W]%s : Initialization not yet done. Respond with CsfbSigEstRej
%s : CallType = %d, PrefRat = %s
[!]%s : CSFB already ongoing on other stack, Query Req Not Expected
[W]%s : Initialization not yet done. Respond with CsfbSigEstRej
[W]%s : MCC is progress. After MCC scan is done perform any plmn camping for EMC call
[!]%s : Query Req Not Expected in Operating Mode(%s)
%s : CallType = %d, PrefRat = %s
%s :
[!]%s : CSFB already ongoing on other stack, Sending default abort cnf
[!]%s : Not Expected in this Operating Mode(%s) -> discard received msg
%s :
[!]%s :
%s: callType (%d)
Send EPS FB RSP with result = FALSE directly.
Send EPS FB RSP with result = TRUE directly when N2L IRAT in progress.
[!]%s :
%s:
%s:
VoNR MT CS Call Retry Ind Msg is invalid. SingleDualModeOperation=%s, RatMode=%s
VoNR MT Call Fail: Move to Hedge for MT call retry
%s : Mbms State: %d
%s : Level(%d)
%s : Invalid State
%s :
[W]Shade Wakeup is not supported in %s
[W]Shade Wakeup is not supported for MAKE_TYPEF
[W]Shade Wakeup not required for NO SIM case
%s : Curr Ims Reg Staus=%d, New Ims Reg Status=%d, 3GPP2 Sub Mode:%s
%s :
Ims Feature=%x, ImsPsRatType = %d, VolteErrCause = 0x%x
IMS NOT REG for WLAN: IGNORE
IMS REG STATUS for EMC, not to consider as IMS registration
%s : SelectedMode=%d
%s :
[W]PLMN is not initialized - PlmnInitialised:%d or Stack Initialization Ongoing - StackInitialised: %d!
[W]MSPL is not initialized (%d) !
[W]GMSS is not initialized yet!
%s: Current Roam Pref (%d), New Roam Pref (%d)
[W]No need to take actions as RoamPrefType is same as previous
%s : SafeMode(%d), NoSvcScanTime(%d min)
%s : SafeMode(%d), NoSvcScanTime(%d sec)
%s: isActivated (%d), listType (%d)
! Mode Converted to MMC_LTE_HEDGE_MODE from MMC_GLOBAL_MODE
Update mode to Global mode
LastCampCountryCode (%x), NetModeSel (%d)
[W]No need to change Mode to LTE_HEDGE_MODE if UE is already MMC_LTE_HEDGE_EMC_MODE in Korea
Previous Volte Support : (%d), New Volte Support : (%d)
New Mode is same as previous selected Mode, no need to perform mode change actions
[From Global mode] New Mode is same as internally changed Mode, reset InternalModeChange variable
LGU single feature supported, ignore mode change action
CTC VoLTE On. Change to LTE Only mode
CTC VoLTE On. Change to NR LTE mode
CTC VoLTE On. Change to LTE Only mode
ATC device, newMode is same as previous, just send rsp to NS
ATC device, UE is in USA, update mode to LTE only
UE already registered on LTE, no need to take actions
UE registered on 3G/2G, send indication to MM to trigger QRB
UE already registered on LTE, no need to take actions
Wake Up and Start GMSS again!!!!!
[W]Error. EXHAUSTION_Timer or POWER_SLEEP not running in Suspended mode
Rollback to previous registered system first and continue BPLMN later!
Forceful grant was taken. To avoid Simultaneous search, start deep sleep!!
PLMN selection ongoing on HEDGE. Performing %s full Search for faster recovery
No Additional Actions taken !
No Additional Actions taken !
Recovery Actions will be taken after receiving abort cnf
No Additional Actions taken !
%s :
3GPP operatingMode is not LTE supporting
Process volte inidcation for internal mode change
Process volte indication for CTC SIM in NR multimode.
Process volte inidcation in NR multimode.
Conditions for processing volte indication not satisfied
CurrentMode = %s, FinalMode = %s
[I]Plmn State : %s (%s)
[W]FCN_HVOLTE_SUPPORT is NOT defined. No need to take any action
Operating mode not Global/LTE_CDMA. No need to take any action
Not in Home PLMN or Not VzW Network! Ignore IMS registration
UE is data centric / PS preffered - ignore IMS registration
Not in LTE Registered State. Only IMS Reg status update
Switching to hVoLTE mode is not allowed for the current PLMN
CSFB Support %d
CSFB is supported. Ignore IMS REG STATUS
CDMA Call is ongoing. Process IMS REG Status after CDMA Call and LTE Attach
IMS registered. Disable CS in CDMA if enabled and change mode to HVOLTE
IMS registered but hVoLTE is not supported
Current System: %d
IMS Registration temporary failure(Ignore Cause): 0x%x. Wait for final status from AP
IMS not registered. Enable CS in CDMA if disabled and change mode to SRLTE
No Actions required for PLMN state : %s
No Actions required!
Trigger search on Home PLMN!
%s : Country Code (0x%X)
%s, ucase : %d
