%s : debug1 %d, debug2 %d
%%%%GMC CORTN%%%% In_ %s %s <= %s
%s : debug1 %d -> %d
%s : deferred -> after INITIALISATION
%%%%GMC CORTN%%%% Out %s
%s : deferred -> after NEW_RAT_INITIAL_PLMN_ACTION
%%%%GMC CORTN%%%% Out %s
%%%%GMC CORTN%%%% Out %s
PLMN::NETSCAN:SCHEDULE 1. begin of net scan
%s : debug1 %d -> %d
%s : debug1 %d -> %d
%%%%GMC CORTN%%%% Out %s - wait for %s
%%%%GMC CORTN%%%% Out %s - wait for %s
PLMN::NETSCAN:SCHEDULE 2. Rcvd Step: %s
%s : debug1 %d -> %d
%%%%GMC CORTN%%%% Out %s - wait for %s
%s : debug1 %d -> %d
[!]Invalid sub-step for net scan schedule[%d].
%s : debug1 %d -> %d
%s : debug1 %d -> %d
%%%%GMC CORTN%%%% Out %s - wait for %s
PLMN::NETSCAN:SCHEDULE 3. final of net scan
%s : debug1 %d -> %d
%%%%GMC CORTN%%%% Out %s - wait for %s
%%%%GMC CORTN%%%% Out %s
NETWORK_SCAN_REQ: %d (recs), ScanType: %s, Option: %d(%s)
MaxSearchTime: %d(s)
IncrementalTime: %d(s)
IntervallTime: %d(s)
candidates[%d]: %x%x%x%x%x%x
[%d] radio_access_network: 0x%x, band num: %d, channel num: %d
[!]%s: Failed to allocate memory.
%s : debug2 %d -> %d
%s : debug2 %d -> %d
%s : debug2 %d -> %d
%s : debug2 %d -> %d
%s : debug2 %d -> %d
%%%%GMC CORTN%%%% In_ %s %s <= %s
[!]Emergency call is in progress
BPLMN List in Progress; Abort this & Start New List Req
%%%%GMC CORTN%%%% Out %s - wait for %s => %s
%s : Reset HPPlmnSearchFlag and Send HPPLMN search handoff noti with ended.
Search shall be performed when PLMN is in IDLE.
Starting BPLMN.
[!]bplmn(%d) is not enabled, or not on plmn(%s).
[!]Plmn_CheckManualNetworkScanStart() failed.
PLMN::NETSCAN: Step1.b NETSCAN START fail
%%%%GMC CORTN%%%% Out %s => %s
%s(): %s
[W]MCC Band DB disabled or Wrong PLMN state (%d) for Netscan band config
[W]Invalid Last camped MCC (%d) for Netscan band config
Fill bands(%d) for %s
%%%%GMC CORTN%%%% In_ %s %s <= %s
FAIL_SIG or FAIL_DSDS_FRESH_SCAN
ABORT_MPSR_IN_ACTIVE_HRPD or ABORT_DSDS_PS_SWITCH
FAIL_RESEL
FAIL_EUTRA_DISABLED
PAGE_IND
FAIL_NR_DISABLED
FAIL_OTHERS[0x%x]
%%%%GMC CORTN%%%% Out %s - wait for %s => %s
%%%%GMC CORTN%%%% Out %s => %s
[W]Unexpected BPLMN Failure indcation
%%%%GMC CORTN%%%% Out %s => %s
TimerMask: 0x%X
%%%%GMC CORTN%%%% In_ %s %s <= %s
PLMN::NETSCAN: Step2.c NETSCAN RAT change %s -> %s
%%%%GMC CORTN%%%% Out %s - wait for %s => %s
PLMN::NETSCAN:SCANREQ Step2.a NETSCAN req to %s
PLMN::NETSCAN: Step2.a NETSCAN req to %s
%%%%GMC CORTN%%%% Out %s => %s
Record[%d]: %s(# of band: %d, # of channel: %d)
[!]NR Diabled in international roaming!
[!]%s: Not supported RAT[%s]
[W]Duplex modes between serving(%s) and target(%s) are different.
%s : debug1 %d, debug2 %d
%%%%GMC CORTN%%%% In_ %s %s <= %s
[!]%s: Failed to allocate memory.
%%%%GMC CORTN%%%% Out %s
[!]%s: Failed to allocate memory.
%%%%GMC CORTN%%%% Out %s
%%%%GMC CORTN%%%% Out %s - wait for %s
%s: Rcvd Step: %s
PLMN::NETSCAN: Step2.a NETSCAN ind - %s Added: %d
PLMN::NETSCAN: Step2.d NETSCAN Partial Report - Reported: %d, Rcvd: %d
PLMN::NETSCAN: Step2.d NETSCAN Final Report - Final Rcvd: %d
%s : debug1 %d -> %d
%%%%GMC CORTN%%%% Out %s
[!]%s: Invalid RAT(%d)
[%3d]plmn: %x, lac: %d, cid:%d, serving: %d
AvailStatus: %d
Overwrte %d > %d
[%3d]plmn: %x, lac: %d, cid:%d, psc: %d, uarfcn: %d, serving: %d
AvailStatus: %d
Overwrte %d > %d
[%3d]plmn: %x, lac: %d, cid:%d, cpid: %d, serving: %d
AvailStatus: %d
Overwrte %d > %d
[!]%s: Invalid RAT(%d)
[%3d]plmn: %x, ci: %d, pci:%d, tac: %d, earfcn: %d, cqitable: %d, serving: %d
AvailStatus: %d
Overwrte %d > %d
[%3d]plmn: %x, nci: %x, pci:%d, tac: %d, narfcn: %d, serving: %d
AvailStatus: %d
Overwrte %d > %d
[%3d]plmn: %0x, lac: %d, availStatus: %d
[%3d]plmn: %x, lac: %d, availStatus: %d
[%3d]plmn: %x, lac: %d, availStatus: %d
[%3d]plmn: %x, lac: %d, availStatus: %d
[%3d]plmn: %x, lac: %d, availStatus: %d
[!]%s: Invalid RAT(%d)
Duplicated with %d
Inserted in %d in %d (%s)
[%3d] availStatus(Updated): %d -> %d, rat:%s
[%3d] availStatus(Updated): %d -> %d, rat:%s
[!]%s: Invalid Access Network(%d)
[%3d]plmn:%0x, lac:%5d, availStatus:%d, rat:%s
Reconfig PLMN Selection Context
%s : debug1 %d -> %d
%s : debug2 %d -> %d
%s:: Entry
PLMN::NETSCAN: Step1. NETSCAN START %s(%d)
[!]previous network scan routine is on going.
PLMN::NETSCAN: Step0. NETSCAN STOP
[!]Invalid scan type[%d].
PLMN::NETSCAN: Step2.d NETSCAN BPLMN ABORT Rsp from %s
PLMN::NETSCAN: Step2.x NETSCAN ABORT - LOC happened
PLMN::NETSCAN: Step2.y NETSCAN ABORT - LOC happened
PLMN::NETSCAN: Step2.b NETSCAN Timer %s(%d) expired
PLMN::NETSCAN: Step2.e NETSCAN done in %s
PLMN::NETSCAN: Step2.f NETSCAN fail in %s
[!]%s: Invalid data size[%d].
PLMN::NETSCAN: Step2.c NETSCAN RAT change wait done
PLMN::NETSCAN: Step2.a NETSCAN ind from %s
%s:: Exit
