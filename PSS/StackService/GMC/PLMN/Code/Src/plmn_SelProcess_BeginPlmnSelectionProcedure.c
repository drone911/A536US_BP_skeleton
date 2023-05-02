%s:: Entry
%s : %s, %s
#1.a Try Any PLMN Camping - LTE HEDGE EMC Mode and HPLMN is in temp Blocked PLMN List
CsgSelectionInProg: TRUE
[W]#2 %s and HPLMN is blocked try Any PLMN Camping
[W]Unknown Plmn Selection State, Getting both Lists
%s:: Exit
%s :
[I]Plmn Selection State : %s
#1. %s
#1.b PLMN search on %s RAT, followed by LIST request
RPlmn Exist
RPlmn Does NOT Exist
#1.c Request List From All RATs
#2. Manual PLMN list procedure pending!
#2.a Resuming RAT to Request the Plmn List
PLMN::LISTREQ: FG PLMN scan deferred after RAT change to %s
#2.b Proceed with the saved message
%s : Reset HPPlmnSearchFlag and Send HPPLMN search handoff noti with ended.
#3. No Manual PLMN list procedure pending!
#3.a RPlmn Exists
#3.b RPlmn Does NOT Exist
RPLMN in Temp blocked list, Start PS only search
RPLMN Exists but is in Forbidden List
RPLMN Doesnot Exists but HPLMN is in Forbidden List
%s
ForcedRatSearch - %d, StoredFreqScan - %d
PlmnCoverageLost - %d, TotalLossOfCoverage-%d, PowerUpPlmnSelectionFlag - %d
Prefrat : %s
EMC call start with LTE search priority received, start search on LTE first
#1.a plmn_PowerUpPlmnSelection -> PLMN search after RAT resume
#1.b plmn_PowerUpPlmnSelection -> Start PLMN search on RPLMN, Active RAT
[W]2G NRP Opt. - PLMN %06x -> %06x
#2. No plmn_PowerUpPlmnSelection -> Start PLMN search on RPLMN, RPLMN RAT
%s :
#1. Last Selected Plmn != HPlmn, -> Try HPlmn
#2. Last Selected Plmn == HPlmn
#2.a Multi Mode -> Requesting List From Current RAT
#2.b Single Mode -> No Next Rat -> Requesting List From Current RAT
%s :
#1. In Manual Mode, restarted for mode update, trigger anyPlmn search
#2. Start Home Plmn Search
%s : FailureType : %d
plmn SearchFailReceived
[W]CSFB Emergency MO Call is pending, must have come here after RPLMN Search. Return and perform ANY PLMN Search
Send Gmss_HandlePlmnSearchRsp to GMSS with result : MMC_FALSE
%s : FailureType : %d
CsgSelectionInProg: TRUE
CurrentSelectedCSG: NULL
CsgListReqCause is MANUAL, Send SEL_RSP to NS
[I]Plmn State : %s (%s)
[I]Plmn Selection State : %s
[I]Selected Plmn : %06x (%s)
[I]NextAvailablePlmn : %06x (%s , %s)
%s : CSGSelStatus : %d
%s : %s
EMC call start with LTE search priority received, start search on LTE first
#1 Selected RAT for HPLMN - %s
[W]#2b HPLMN is blocked in %s during %s. Perform from PLMN List Request on %s RAT.
[W]#2c HPLMN is blocked in %s during %s. Stored scan to be done by plausible check.
[W]#2d HPLMN is blocked in %s during %s.
[I]RatMode -> %s
[W]#3a RAT Change for HPLMN search
PLMN::LISTREQ: FG PLMN scan deferred after RAT change to %s
[W]#3b Try HPLMN search
Try HPLMN search from PLMN List Request as HPLMN is blocked on current RAT, %s.
CurrentPlmnSelectionState : %s(%d)
ForcedRatSearch - %d, StoredFreqScan - %d
PlmnCoverageLost - %d, TotalLossOfCoverage-%d, PowerUpPlmnSelectionFlag - %d
nextPlmnSelectionState : %s(%d)
%s : %s
Changing RAT(%s) - Try HPlmn on Highest Priority HPlmn RAT Mode
Trying HPlmn on Current RAT(%s) - Highest Priority HPlmn RAT Mode
%s : %s
%dth Rat : %s
Last Rat : %s
Plmn Not Found, Requesting List From Current RAT, Look For Higher Priority Plmns
CurrentPlmnSelectionState : %s(%d)
nextPlmnSelectionState : %s(%d)
Plmn Not Found, Requesting List From Current RAT, Trying HPlmn onOther RAT
HigherPriorityEhplmnSearch Excluded !
OriginalPlmnId : %06x, ModifiedPlmnId : %06x
HPLMN MNC 3rd digit is modified. Trying modified PLMN on same RAT
Higher priority EHPLMN is found. Trying higher priority EHPLMN on same RAT
%s : %s
%dth Rat : %s
Last Rat : %s
List Already exists
Send it to GAPI
Plmn Not Found, Reading List Sent From Current RAT
rplmnInForbiddenListOrDeleted : %d
CurrentPlmnSelectionState : %s(%d)
nextPlmnSelectionState : %s(%d)
RPlmn Deleted or in Forbidden List, Get List from Current RAT, Try HPlmn on Other RAT
Get List from Current RAT, Try RPlmn + Equivalent Plmn on Other RAT
%s : %s
%s : %d th RAT, cause - %s
Last Rat : %s
Plmn Rejected, Get List from current RAT
Plmn Not Found, Get List from current RAT
CurrentPlmnSelectionState : %s(%d)
nextPlmnSelectionState : %s(%d)
%s : %s
Plmn Failure was for Equivalent Plmn, Try RPlmn in the Same RAT excluding EPLMN
Plmn Failure was for the RPlmn, RPlmn != HPlmn -> Try HPlmn On Current RAT
[W]Function Should not be called for Single/Dual mode Operation.
%s: newPlmnSelectionState = %d, FailureType = %d,CurrRatOrder = %d
Network Rejected RPlmn, RPlmn == HPlmn
Get List from Current RAT, Try RPlmn + Equivalent Plmn on Other RAT
Plmn Not Found
%s: %s, NewPlmnSelectionState = %d
HPlmn != RPlmn, but HPlmn is invalid due to blocked in %s
HPlmn != RPlmn, Checking to see if HPlmn is in RR(C) List
RPlmn != HPlmn & HPlmn Exists in List Given By RR -> Try HPlmn On Current RAT
%s:: Entry
PLMN Sel. using Stored Freq Scan : %s, %s, PlmnFromLocInfo = %06x
Plmn Failure was for Equivalent Plmn, Try RPlmn in the Same RAT excluding EPLMN
Plmn Failure was for the RPlmn, RPlmn != HPlmn -> Try HPlmn On Current RAT
Plmn Failure was for the RPlmn
Network Rejected RPlmn, RPlmn == HPlmn
Plmn Not Found
Search Fail received for RPLMN in MMC_GLOBAL_MODE
PLMN Sel. using Stored Freq Scan : PlmnSelectionState %s -> %s
%s:: Exit (0x%x)
Select nextPlmnSelectionState : case %x, %s
Get List from Current RAT, Try RPlmn + Equivalent Plmn on Other RAT
Get List from Current RAT, Try RPlmn + Equivalent Plmn on Other RAT
RPlmn != HPlmn & HPlmn Exists in List Given By RR, Try HPlmn On Current RAT
HPlmn != RPlmn, Checking to see if HPlmn is in RR(C) List
HPlmn != RPlmn, Checking to see if HPlmn is in RR(C) List
%s : %d th RAT HPLMN in RrList = %d
%s : %s
Network Rejected RPlmn, RPlmn != HPlmn -> Try HPlmn On Current RAT
[W]Function Should not be called for Single/Dual mode Operation.
%s : %s
Network Rejected RPlmn, RPlmn != HPlmn -> Try HPlmn On Current RAT
Network Rejected RPlmn, RPlmn == HPlmn
Plmn Not Found
%s : %s
Plmn Not Found in Manual mode.
Plmn Not Found, Reading List from current RAT
Rejected Plmn Not Found in Curent RAT, TryingOtherRat
Trigger List request as PLMN is blocked in %s
In TRI Mode User Selected PLMN 2nd RAT so Check User PLMN in Other Rat also -- Manual Mode
In TRI Mode User Selected PLMN 3rd RAT so Check User Selected PLMN in Other Rat also -- Manual Mode
In QUAD Mode User Selected PLMN 4th RAT so Check User Selected PLMN in Other Rat also -- Manual Mode
%s : %s
HPLMN is blocked, After list move to blind scan on other RAT's
[W]Unexpected case
Power-up stored search Fail received for HPLMN in MMC_GLOBAL_MODE
Checking to see if HPlmn is in RR(C) List
For CMCC, HPlmn Exists in List Given By RR, Try HPlmn On Current RAT
%s : %d th RAT
%s : %s
[W]Release RR connection forcefully !
Normal scan failed on all rats, start AnyPlmn search
LTE is skipped due to selectedPlmn is present in TempBlocked/FPLMN list
Plmn Not Found in Curent RAT, TryingOtherRat
CurrentPlmnSelectionState : %s(%d)
nextPlmnSelectionState : %s(%d)
