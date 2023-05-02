eval_MPH_START_PBCCH_READING_REQ HOPPING
eval_MPH_START_PBCCH_READING_REQ: Single ARFCN (%d)
f=%i req=%i readtype =%i
params: H%d Pb%d Ts%d Tsc%d Psi1Rpt%d LR%d HR%d
PG Coordinated (NMO:%d, BSS coordinated:%d)
PG is not Coordinated (NMO:%d, BSS coordinated:%d)
l1c_eval_MPH_PCCCH_IDLE_REQ() l1x_gprs_PMAX=%d
params: H%d Pb%d TS%d Tsc%d
Tgt ARFCN %d (vs.SCell %d) - bs_pcc_ch %d - bs_pag_blks_res %d - bs_pbcch_blks %d - split %d - imsi_mod_1K %d
eval_PCCCH_IDLE camping onto CCCH
!!!! MPH_PCCCH_IDLE_REQ: BAD bs_pa_mfrms ( = 0xFF ) !!!!
IDLE Req Dtx:%d FN%8lu
(ccch mon) Tgt ARFCN %d (vs.SCell %d) - combined %d - gprs param valid %d - split valid %d - split pg cy %d
bs_pa_mfrms %d - bs_ag_blks_res %d - ccch_group %d - page_blk_idx %d - page_mode %d
CCCH reconfiguration ignored
extract params(Hopping):h=%d,maio=%d,hsn=%d
extract params(NonHopping):arfcn=%d
Invalid SIM No(%d)
[GL1 Error] invalid burst type = %d
eval PH_RA_REQ wait_p(%d) ra(%d) type(%d) R or P(%d)
CS RACH being processed: STOP CIPHERING
CS RACH being processed: GPRS CIPHERING could be performed with DTM
DL passive timeslot = %x
DL TA values, %d, %d, %d, %d
#Rx TS: %d -- #Tx TS: %d
#Rx TS: %d -- #Tx TS: %d
DL st present, temp timeslot mask = 0x%02X
UL passive timeslot = %x
UL TA values, %d, %d, %d, %d
#Rx TS: %d -- #Tx TS: %d
#Rx TS: %d -- #Tx TS: %d
UL st present
UL msk = %x
!! Downlink Assignment with ZERO TS Mask !!
No ST Both DL msk = %x, No ST Both UL msk = %x
#Rx TS: %d -- #Tx TS: %d
DL TA values, %d, %d, %d, %d
UL TA values, %d, %d, %d, %d
ST Both DL msk = %x, ST Both UL msk = %x
eval PH_CONNECT_REQ
rf_chan_cnt first
rf_chan_cnt second
rf_chan_cnt third
Invalid SIM No(%d)
TBF mode : RLC Unack mode. PCH reading in PTM is disabled
ph_connect_req freq %d
Different band to Scell: gprs_PMAX(%d),freq(%d),l1c_tbf_action(%d)
[GL1 warning] band=%d out of GPHY_NUM_OF_SUPPORT_BAND=%d (ScellBand=%d,l1x_gprs_PMAX_NW=%d)
Invalid Scell ARFCN detected in l1c_eval_PH_CONNECT_REQ
PCA flag %d
pwrCtrl params: tbf%d valid%d alpha%d P0%d Bts_mode%d Pr_mode%d
Gamma : [%d, %d, %d, %d,
%d, %d, %d, %d]
TA : %d %d %d %d, Action: %d
PH_TA_PWRC_INFO->pwrCtrl params: valid %d alpha %d
eval PH_PCCCH_SINGLE_BLK() : n32(%d),n26(%d),n51(%d)
eval PH_CHN_REL_REQ TBF%2u
achn:%d, pchn:%d. act_ul_ta=0x%08x act_dl_ta=0x%08x pass_ul_ta=0x%08x pass_dl_ta=0x%08x
TBF_BOTH, releasing TBF_UPLINK. Updating D/L TA.
CIPHER_REJECT sent
Requesting SIM ID wrong. Check!
l1c_eval_LLC_CIPHER_REQUEST() issuing Cipher Command SeqNo %d Sim %d
l1c_eval_L1F_CIPHER_COMPLETE()
L1SM_GC_Process COMP SeqNo %d Simno %d
L1SM_GC_Process REJ Seq nr %d Simno %d
Cipher Command Failure
l1c_transfer_temp_description()
DL TA values, %d, %d, %d, %d
UL TA values, %d, %d, %d, %d
[GL1 Error] when checking multi slot capability, wrong TBF mode %d
[GL1 Error] multi slot class %d is out of range
[SRLB] EGPRS_LOOPBACK_SUBMODE_ON
TBF mode current = %d, request = %d
Loopback test mode: current tbf mode is no DOWN TBF
