[I]Displaying All MM SIM Data
[I]SIM Type : %s
[I]LocUpdateStatus : %s / %s / %s / %s
[I]LocUpdateStatus : %s / %s / %s
[I]SimData MCC/MNC : %06x
[I]--------------------------
[I]SIM Type : %s
[I]SimData MCC/MNC : %06x
[I]LocUpdateStatus : %s / %s / %s / %s
[I]LocUpdateStatus : %s / %s / %s
[W]NO SIM PRESENT
[W]CMD_UNSUCCESSFUL_TEMP_ERR !
[W]CMD_UNSUCCESSFUL ! (0x%x)
%s : received OPLMN count = %d
[W]Invalid preferred list received. Fail to replace OPLMN list in PLMN database for 5G SOR
Current OPLMN list not present. Create OPLMN list with received SOR list.
Current OPLMN list is smaller than received OPLMN list. Replace entire OPLMN list with received SOR list.
Overwrite received SOR list to highest priority entities in OPLMN list.
[I]MM SIM State -> %s
[I]GMM SIM State -> %s
[I]SIM LAI : %06x / 0x%04x
[I]SIM RAI : %06x / 0x%04x / 0x%02x
[I]SIM TAI : %06x / 0x%04x
[I]SIM NR TAI : %06x / 0x%06x
SimProvider : %d -> %d
Return CsimAvailable
[I]SIM State : %s -> %s
[W]Sim State set fail! - Invalid new Sim State (%x)
[I]GMM SIM State : %s -> %s
[W]Gmm Sim State set fail! - Invalid new GmmSimState (%x)
pPlmnSimData_DB->plmn_SimDataStatus.UsatRegisteredFlag : %d -> %d
pPlmnSimData_DB->plmn_SimDataStatus.HplmnCheckNeeded : %d -> %d
[W]Accessing Invalid EPS update status (%x)
EPSUpdateStatus : %s
[W]Accessing Invalid Loc update status (%x)
LocUpdateStatus : %s
[W]Accessing Invalid RAU update status (%x)
RAUUpdateStatus : %s
[W]Accessing Invalid NR update status (%x)
NrUpdateStatus : %s
plmn_NumOfEfChanged : %d -> %d
%s : MNCLength(%d)
SIM MCC(%x) Indicates U.S.A subscription
3rd Digit of MNC in SIM is 0, Copy 3rd digit of SIM MNC in HPlmn for now, check later
3rd Digit of MNC in SIM is F !
IMSI indicates that We have a 3 Digit MNC
HPlmn Does Not Belong to U.S.A (%x) -> Use F as the 3rd Digit of MNC, Check later
MNCLength not supported by SIM. Check later with Plmns that RR sends
Received %s[%d] : %06x , AccTech: %s (0x%04x), %c
# EF_OPLMNwACT/EF_UPLMNwACT - Received %d %s, %d Added :
[W]%s : deferred -> RR or RRC not Ready yet, defer SIM messsage proessing
%s:: Entry
%s:: Exit
%s : Plmn State = %s, %s in state of plmn_UsatRegistered
%s : Plmn State = %s
[W]Errors in Reading SIM Data...Select ANY Plmn
[W]SIM Returned CMD_UNSUCCESSFUL_TEMP_ERR

[LGU Roaming requirement]Search LTE first, when user enable LTE roaming: write RPlmnAccTech to LTE
Clear RPLMN Access Tech. - IMSI changed
Original HPlmn extracted from IMSI : %06x
#3. HPlmn extracted from IMSI : %06x
[!]Mismatch - SimProvider(%d) != CardType in GmcConfig(%d/0x%x)
#4. SimProvider : %d
Received Ehplmn_Indicator: %d
#6. SimRead EPS Tai received (0x%x) IsEpsLociValid (%d)
#7a. SIM EPS LOCI is Absent, FlashRead EPS Tai %06x and pPlmnSimData_DB->plmn_SimData.LteUpdateStatus: %d
#7b. IMSI/SIM Card is changed or IsEpsLociValid EF is present, Updated pPlmnSimData_DB->plmn_SimData.Tai: %06x and pPlmnSimData_DB->plmn_SimData.LteUpdateStatus: %d
#1. Compare Sim card ID with previous one : %d (1:SameID, 2:SameType 3:Diff)
#2. Is IMSI changed : %d
#3. Is CSIM present : %d
Provider name: %d in plmn_SetSimProvNameFromAHPLMN
%s : AttCommercialSimCard(%d)
%s : VzWCommercialSimCard(%d)
%s : NttCommercialSimCard(%d)
%s : CmccCommercialSimCard(%d)
No HPLMN Search; Stopping Search Timer
# Received HPPlmnPeriod (SIM): 0x%02X, Fast First HPPLMN Enabled(%d)
Received Plmn Selector List[%d] : 0x%06x , %c
# EF_PLMNsel - Received %d PLMNSelectorList, %d Added :
%s : EHplmnListPtr - 0x%x, EHplmnCount - %d, HplmnListPtr - 0x%x, HPLMNCount - %d
EHPLMN list is supported. Trying to read EF_EHPLMN
EHPLMN list is not supported. Not reading EF_EHPLMN
HPLMN Count after reading EHPLMN: %d
HPLMN Count after processing EHPLMN and HPLMN Selector: %d
Start updating Home-PLMN-LIst with ef_HPLMNwAcT
[W]EHPLMN entry addition failed, current count of EHPLMN entries = %d
Start updating Home-PLMN-LIst without ef_HPLMNwAcT
[W]EHPLMN entry addition failed, current count of EHPLMN entries = %d
# EF_EHPLMN - Received %d EHplmnList, %d Added :
HPLMN code present in EF_HPLMNwAcT file, Copy the Access Technology into HPLMN list
Received HPLMNwAcT List[%d] : %06x , AccTech: %s (0x%04x), %c
# EF_HPLMNwACT - Received %d HPlmnList, %d Added :
%s : HomePlmnCount(%d)
found %06x (%d) times in the Home PLMN List
%06x is already in top of HOME_PLMN_L
%06x index(%d) is re-ordered to (%d) in HOME_PLMN_L
%06x index error(%d) / give up the re-ordering
%06x is not in the HOME_PLMN_L
%s : CtcCommercialSimCard(%d)
EF_ActHPLMN is Present
EF_ActHPLMN is Not Present
EF-CSP bit status : %d, EF-CSP bit value : %d PLMN Mode : %d
EF-CSP plmn mode bit = 0, So modify Plmn Selection mode
Flash value is Manual mode, EF-CSP is Auto So setting it to Auto
# Received Forbidden Plmn List[%d] : %06x , %c
Received T3245 Forbidden Plmn List[%d] : %06x
IMSI has changed (plmn_SimData.EfImsiChanged : %d), Deleting Flash CSG information !
CSG Capable UE ( %s ), CSG Services on UICC ( %d )
%s
ACSGListPtr is NULL
OCSGListPtr is NULL
%s : ListType %d
SIM CSG DATA :: CsgType (%d), CsgCount (%d)
PLMN ID :: %06x, CsgDisplayInd = %d
CSG Info :: %08X (CSG ID), CsgTypeInd : %d HnbNameInd: %d
[W]Invalid ListType %d!!
pPlmnSimData_DB->plmn_SimData.LastRPLMNSelInd (EF_LRPLMNSI): %d
Setting HighestRatPrioritySearch for LTE search first
Disable forced RAT search on CMCC SIM
Fast First HPPLMN Enabled = %d
FlashFplmnCount : %d, FlashPrefPlmnCount : %d
%s : Plmn State = %s
OPPLMN files refreshed. Restart HPPLMN timer for smallest duration !
SIM files refreshed. Restart HPPLMN timer for smallest duration !
%s : Read %d EF_FILE data in plmn_SimData and update PLMN&PLMN list data
[W]Read Failure for file : 0x%x
[W]Unknown EF Element (0x%x) Received Ignore
EF_HPLMN - Received HPlmnPeriod -> 0x%02X
Change PowerUpHPlmnSearchDlyElapsed to TRUE
Received Forbidden Plmn List[%d] : %06x , %c
EF_FPLMN - Received %d FPLMNList, %d Added :
EF_ActHPLMN - Received File Change Notification for ActHplmn
EF_RAT - EF_RAT(%d), SimData.RatMode(%d)
=========================NOTICE======================
=====================================================
EF_RAT - Received REFRESH for EF_RAT. New EF_RAT: %s
=====================================================
[W]EF_RAT is not TRI MODE. Change SIM card or SIM profile to retest in TRI MODE
EF_RAT - RAT mode is not changed -> Clear RefreshRatMode
[W]%s : plmn_SimDataLocal.RefreshRatMode : %s -> %s
[W] %s : CSG Not Supported. Ignoring the Msg
%s : Type = %d
[W]%s : plmn_SimData.RatMode : %s -> %s
[W]%s : plmn_SimDataLocal.RefreshRatMode : %s -> %s
[W]%s : skip mem. free - DataPtr[0x%x],Count[%d]
[W]%s : skip mem. free - DataPtr[0x%x],Count[%d]
[W]%s : skip mem. free - DataPtr[0x%x],Count[%d]
[W]%s : skip mem. free - DataPtr[0x%x],Count[%d]
[W]%s : skip mem. free - DataPtr[0x%x],Count[%d]
%s : EF_HPLMNwAct, EF_EHPLMN, EF_PrefPLMNwAcT, EF_OPLMNwAcT
