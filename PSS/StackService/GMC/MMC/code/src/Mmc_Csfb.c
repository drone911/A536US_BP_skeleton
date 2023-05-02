GMCF::CTX::(%d)pMmc_CsfbStatus->IratToLteState : %d -> %d
GMCF::CTX::(%d)pMmc_CsfbStatus->CsfbFlag : %d -> %d
GMCF::CTX::(%d)pMmc_CsfbSigData->EstReq.Calltype : %d -> %d
GMCF::CTX::(%d)pMmc_CsfbSigData->EstReq.PrefRat : %d -> %d
%s:: Entry
%s : %d, 0x%x, 0x%x,
%s:: Exit
EST REQ Received but not Processed so just Clear EST REQ CSFB Flag
Abort Not Expected in this State Send Abort Cnf to Application
%s : CallType = %d, PrefRat = %s
Send MMC_EMM_MO_CSFB_SIG_EST_REQ
[W]EST REQ Not Expected in UMTS/GSM Mode, Just Send EST CNF
[W]csfb was attempted in Invalid state, It wasn't expected. Just Send EST REJ for next EMC_SCAN_REQ
[W]EST REQ Not Expected in UMTS/GSM Mode, Just Send EST REJ
%s - HEDGE -> LTE RAT CHANGE Procedure in Progress, ABORT RAT change
%s - IRAT to HEDGE RAT CHANGE Procedure in Progress, Wait for CNF
%s - LTE (HEDGE) -> NR RAT CHANGE Procedure in Progress, ABORT RAT change
%s - NR -> LTE RAT CHANGE Procedure in Progress, ABORT RAT change
%s - G -> U (or U -> G) In Progress So Wait for Cell Ind
%s - (0x%x)
[W]PLMN search for MT call is ongoing
[W]QUERY REQ Not Expected in LTE Mode, Just Send QUERY CNF
Camped to UMTS/GSM Mode, Just Send QUERY CNF
Camped to UMTS/GSM Mode, Just Send QUERY CNF
[W]EST REQ Not Expected in UMTS/GSM Mode, Just Send EST REJ
Restoring with MT call status
Resel Fail, CS Call waiting.Suspend LTE,scan HEDGE. TargetRat [%d]
No Neighbouring Cell Rat Info. RatMode is changed to 2G.
No Neighbouring Cell Rat Info.
MT Call Fail: Move to Hedge , trigger PAGE RSP
MT Call Fail: Wait for IRAT procedure to be completed
MT Call Fail: Clear the Flag. After Cell Ind Page Rsp Should Go
%s : FailCause - %d, EMC call pending - %d, CSFB EMC call - %d
Send Reject to AP and wait for EMC_CALL_FAIL to perform next actions
Send Reject to AP and wait for EMC_CALL_FAIL to perform next actions
Send CSFB Est. req to EMM (Retry CSFB Est.)
Send Status Ind to MM as MO CALL END
Default FailCause [%d]
