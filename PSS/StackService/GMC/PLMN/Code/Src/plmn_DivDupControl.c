Update Flash= %d
Sim provider is PLMN_PROV_CMCC_CHINA and Device type is %s
Updated Power Down Duplex Mode = 0x%x -> 0x%x
%s:
MM_INIT : FALSE, Do not take actions
CMCC SIM or TDD configured non CMCC SIM
CMCC SIM changed to MainSIM. Change mode to HEDGE
DST invoke Actions will be taken after receiving abort cnf
Active RAT is UMTS, start DeepSleep timer and start plmn selection after timer expiry with new duplex mode
Stack already suspended OR ActiveRat is not UMTS, duplex mode change is updated already
GMCF::CTX::(%d)pplmn_DivDupStatusData->Tdd3GCapabilityFlag : %d -> %d
[W]%s : Forced TDD Disable : %d -> %d
%s : %s - Duplex mode %s
%s : 0x%x
[W]Both SIMs present. Disable 3G TDD in Sub SIM
Set Operating DivDuplexMode: LTE - %s, 3G - %s
[W]%s : 3G Dupex bit is none/set default FDD+TDD
[W]%s : LTE Dupex bit is none/set default FDD+TDD
%s:: Entry
Cause: 0x%x, Dynamic Duplex mode update = %d
Tdd3GCapabilityFlag - 0x%x
%s : Result=%d
%s:: Exit
Power on: Nasu.DivDuplex: 0x%x, Dynamic DivDuplex Update: %s
Power on: Initializing in 0x%x
In case of No SIM and dynamic duplex mode, we set the duplex mode FDD+TDD for LTE and 3G
No need to update DivDuplex Mode in SIM Absent Case and fixed duplex mode
Flash Nasu.DivDuplexMode : 0x%x
%s : Divduplex mode: 0x%x
fixed duplex mode, do not need to change duplex mode to update
2G only mode, do not need to change duplex mode to update
Secondary stack, no need to change duplex mode
#%x Test SIM card -. Set duplex mode to FDD+TDD in 3G FDD+TDD in LTE
#%x UE not in China mainland-. Set duplex mode to FDD in 3G FDD+TDD in LTE
#%x PLMN with China MCC found, SIM is CMCC and device is for CMCC. Set duplex mode to TDD in 3G FDD+TDD in LTE
#%x PLMN with China MCC found, SIM is CMCC and device is *NOT* for CMCC. Set duplex mode to TDD in 3G TDD+FDD in LTE
#%x non-CMCC international SIM in China -. Set duplex mode to FDD+TDD in 3G FDD+TDD in LTE
#%x Not CMCC SIM in China mainland -. Set duplex mode to FDD in 3G FDD+TDD in LTE
Both SIMs present --TDS -> Remove 3G TDD and append 3G FDD
Checking for PLMN received in Search Fail[%d] : %06x
%s : Skip DuvDuplexMode update : 0x%x,0x%x,0x%x,
%s : ChangedDivDuplexMode : 0x%x
