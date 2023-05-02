[DSDS] >> SAEMM_DsdsReInitDsdsDb
[DSDS] ---- Current SAEL3 DSDS States ----
[DSDS] | gDsdsSignalingGoAhead : %d
[DSDS] | gDsncMappedStandbyState : %s
[DSDS] | gSaemmDsdsSignaling : %d
[DSDS] | gSaeqmDsdsSignaling : %d
[DSDS] | gSaemmImsDsdsSignaling : %d
[DSDS] | DSDS database reinit complete
[DSDS] | SRNC state transit : %s -> %s
[DSDS] | Do not change state in duplication
[DSDS] | Incorrect Type of Proc
[DSDS] | Mapped SRNC state transit(%d) : %s -> %s
[DSDS] -----SAEL3 SRNC StandbyReq -----------------------------
[DSDS] | SAEL3 Start. SRNC State : %s
[DSDS] | SAEL3 Start. SRNC State requested : Current(%s), Req(%s)
Warn>[DSDS] Not sending SRNC_STANDBY_REQ, CS call in progress
Warn>[DSDS] Not sending SRNC_STANDBY_REQ, Previous and Current SRNC states same
[DSDS] --------------------------------------------------------
[DSDS] SENDING LTERRC_NAS_SIGNALING_START_IND
[DSDS] SENDING LTERRC_NAS_SIGNALING_START_IND for SAEQM
[DSDS] SENDING LTERRC_NAS_SIGNALING_START_IND for IMS
[DSDS] ----- SAEL3 SRNC ResumeReq -----------------------------
[DSDS] | SAEL3 Ending SRNC State : Ending(%s)
[DSDS] | SAEL3 Ending SRNC State requested : Current(%s), Ending(%s)
Warn>[DSDS] Not sending SRNC_RESUME_REQ
Warn>[DSDS] Not sending SRNC_RESUME_REQ, CS call in progress
[DSDS] --------------------------------------------------------
[DSDS] | No action taken for Sync Timeout
[DSDS] | Standby req will be sent as EQM UNIT DATA
[DSDS] | LTERRC_NAS_SIGNALING_START_IND will be sent during EST_REQ
[DSDS] | Pended EQM SIG START is cleared.
[DSDS] | Pending to send LTERRC_NAS_SIGNALING_END_IND till sending EQM sig msg
[DSDS] Hanging End due to ongoing signalling procedure.
[DSDS] SENDING LTERRC_NAS_SIGNALING_END_IND for SAEQM
[DSDS] | LTERRC_NAS_SIGNALING_END_IND received from EQM without sending SIG_START. Dont send to RRC
[DSDS] Hanging End due to ongoing SAEQM signalling procedure.
[DSDS] SENDING LTERRC_NAS_SIGNALING_END_IND
[DSDS] Hanging End due to ongoing signalling procedure.
[DSDS] SENDING LTERRC_NAS_SIGNALING_END_IND
[DSDS] Default Case, dont do anything
[DSDS] SRNC_STANDBY_REQ(%s)
[DSDS] SRNC_RESUME_REQ(%s)
