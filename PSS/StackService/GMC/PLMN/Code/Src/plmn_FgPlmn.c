%s :: CSG_LIST_REQ
%s :: PLMN_LIST_REQ
PLMN has all the available PLMN info, Reuse the List
PLMN doesn't have all the available PLMN info, Continue BPLMN LIST !
%s : nextRatMode(%s)
[!]It Should Not come here, some mismatch might happened so error recovery
Case 1. RPlmn Deleted or in Forbidden List -> Skip Trying RPlmn on Other RAT
Case 2.a Selected PLMN is blocked in %s, List request need to be triggered
Case 3. BPLMN Enabled to Sent List Req to Non_Active RAT without suspending Active RAT
Default Case. Changing RAT to Request Plmn List
Case 1.a Changing RAT to Request Search for HPlmn
Case 2.b Changing RAT to Request Search for HPLMN/RPLMN
case 3. Requesting Plmn List from %s RAT
Case 0. Changing RAT to Request the Plmn List
PLMN::FGPLMN:ListRsp from %s
%s : %s , %s
PLMN LIST Ind status = %s
[W]Stack is not Initialized, Ignore the Message!!
[W]Rejecting Plmn List Ind, Wrong plmn_PlmnState !
[W]Cross over of LIST_IND, Ignoring the message
%s : Stored Search -> Performs stored freqn actions on next Rat
%s : %s
PLMN::FGPLMN::ListReq:Wait for RR Release and RAT change Before Sending Plmn list req
PPLMN::FGPLMN::ListReq:Wait for RR Release Before Sending Plmn list req
PLMN::FGPLMN::ListReq:Wait for RAT change Before Sending Plmn list req
PLMN::FGPLMN:ListReq to %s
EmergencyCallPending , Do not continue further LIST_REQ. Initiating Emergency scan immediately
%s : List Req Status = %s
EUTRAN is already disabled temporarily for TELSTRA/AUSOPEN. No need to enable again
%s : %s
PLMN::FGPLMN:Complete PLMN list NOT aquired - Get PLMN list from next RAT
PLMN::FGPLMN:Complete PLMN list aquired
PLMN::FGPLMN:ListReq - FGCause(%d)
PLMN list req event set from %s
Plmn Rejected, Requesting List From Current RAT, Trying HPlmn on Other RAT
%s: set RAT %s for PLMN list req
%s: use %s for PLMN list req
[W]%s: Change RAT from %s to %s for PLMN list req
[!]%s: fail to get RAT for PLMN list req
%s : Cause :%s (%d), Plmn_AvailablePlmnListUpdateMethod : %s (%d)
%s with %s(%d) and RrPlmnListRsp = 0x%x
[W]TRAP ! INVALID plmn_CompiledSelectedRatMode = %d
%s with CompilerRat %s : %s(%d)
%s with plmn_HPPlmnSearchMethod = %d
[W]TRAP ! INVALID RAT = %d
AvPlmnListUpdateMethod = %d
%s :
Foreground LIST procedure is going on, ABORT
%s : CurrentRat : %s , AbortCause - %s (0x%x)
