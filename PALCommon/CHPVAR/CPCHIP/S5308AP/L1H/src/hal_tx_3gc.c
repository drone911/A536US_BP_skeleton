SLOT0_ISR_3GC_OFFSET_CHIP %d, SLOT1_ISR_3GC_OFFSET_CHIP %d, SLOT2_ISR_3GC_OFFSET_CHIP %d
HALTXC_SetUrtgGEN >> Invalid Gen Number
HALTXC_SetFakeSync >> Enable %d, FSYNC_EN %d, TXTM_FB %d
HALTXC_GetUrtgFrame >> SYSTEM_TIME_H %d SYSTEM_TIME_L %d
HALTXC_PrnTimeStamp >> RTG: SYSTEM_TIME_H %d SYSTEM_TIME_L %d FRAME %d PGC %d PCG_CHIP %d PHASE_MON %d
HALTXC_PrnTimeStamp >> URTG: SYSTEM_TIME_H = %d, SYSTEM_TIME_L = %d, SLOTZ = %d, SLOTF = %d, CPX8 = %d
[HALTXC_GetUrtgSlotF] (RFD_URTG_3GC_PHASE_MON, URTG_3GC_PHASE_MON) = (%d, %d)
HALTXC_SetShortPnCodeInitVal >>TX_3GC_SC_PN_INIT 0x%x
HALTXC_SetLongCodeInitValue >> TX_3GC_LC_PN_INIT_L 0X%08X, TX_3GC_LC_PN_INIT_H 0X%08X, TX_3GC_LC_PN_INIT_WR 0X%08X
HALTXC_SetAchLongCodeMask
HALTXC_SetFchLongCodeMask
HALTXC_SetFchLongCodeMask
HALTXC_SetFrameOffset >> frameoffset %d, boundary %d
HALTXC_GetMobiletime >> SYSTEM_TIME_H 0x%x SYSTEM_TIME_L 0x%x FRAME %d PGC %d PCG_CHIP %d CHIPX8 %d
HALTXC_SetAchPreamble >> TX_3GC_RC12_MAP_GAIN_ACH 0X%08X
HALTXC_SetAchData >> TX_3GCDMA_CH0_LEN 0X%08X, TX_3GCDMA_CH0_ENC 0X%08X, TX_3GC_CH_TYPE 0X%08X, TX_3GC_RC 0X%08X, TX_3GC_RC12_MAP_GAIN_ACH 0X%08X
HALTXC_SetAchRelease
HALTXC_SetModFchPreamble >> TX_3GC_MOD_SEL 0X%08X TX_3GC_RC12_MOD_EN_FCH 0X%08X
HALTXC_SetModFchPreamble >> TX_3GC_RC12_MAP_GAIN0.FCH 0X%08X TX_3GC_RC348_MAP_GAIN_FCH 0X%08X
HALTXC_SetFchData >> TX_3GCDMA_CH0_LEN 0X%08X, TX_3GCDMA_CH0_ENC 0X%08X, TX_3GC_CH_TYPE 0X%08X, TX_3GC_RC 0X%08X
HALTXC_SetFchData >> TX_3GC_RC12_MAP_GAIN0.FCH 0X%08X TX_3GC_RC348_MAP_GAIN_FCH 0X%08X
TransmitSch ERROR: coding %d
chal_Tx_SetSch0Data: CH1_LEN 0x%x, CH1_ENC 0x%x, CH_TYPE 0x%x, RC 0x%x WRF 0x%x WL 0x%x WID 0x%x
TransmitSch ERROR: coding %d
chal_Tx_SetSch1Data: CH2_LEN 0x%x, CH2_ENC 0x%x, CH_TYPE 0x%x, RC 0x%x WRF 0x%x WL 0x%x WID 0x%x
HALTXC_SetTransmit5msFch >> ERROR: chal_tx_rc %d
HALTXC_SetTransmit5msDcch >> ERROR: chal_tx_rc %d
HALTXC_SetPichData >> RC348_PILOT_MODE 0x%x RC348_EN_PILOT 0x%x RC348_MAP_GAIN_PILOT 0x%x RC348_PC_OV 0x%x RC348_EN_PC 0x%x Fpc_mode %d
HALTXC_SetFchRelease
HALTXC_SetPichRelease
HALTXC_SetSchRelease >> SchNum(%d)
HALTXC_PrnLmacMon >> LMAC_SM_STOP_IND 0x%x
HALTXC_SetSrrcFilter >> chal_Tx_rc %d SRRC_F0 0x%x
HALTXC_SetBlockingAck >> Ack boundary error
HALTXC_SetBlockingAck >> CPX8 %d UPDATE_RC348.ACK 0x%x RC8_ACK_CTRL_MODE 0x%x RC8_ACK_OV_HS 0x%x TX_3GC_RC8_ACK_OV_SLOT0x%x
HALTXC_SetBlockingAck >> Ack boundary error
HALTXC_SetEnablingAck >> CPX8 %d RC8_ACK_CTRL_MODE 0x%x RC8_ACK_OV_HS 0x%x TX_3GC_RC8_ACK_OV_SLOT0x%x
HALTXC_GetFetCrc >> Wrong FET CRC Channel type
HALTXC_PrnRmsFetCrc >> fchRms_slot 0x%x sch0Rms_slot 0x%x
HALTXC_SetRc348DigitalGain >> Wrong Rc 348 digital gain Channel type
HALTXC_GetRc348DigitalGain >> Wrong Rc 348 digital gain Channel type
HALTXC_SetRc12DbrRate >> TX_3GC_RC12_DBR_RATE 0X%08X
HALTXC_SetRc348FchGateOn >> TX_3GC_RC348_FCH_GATE_ON %d TX_3GC_RC348_FCH_GATE_MASK 0X%08X
HALTXC_SetRc348PilotMod >> RC348_PILOT_MODE 0x%x TX_3GC_MOD_SEL 0x%x TX_3GC_UPDATE_RC348.PILOT 0x%x
HALTXD_SetInitPN >> Init Long/Short PN
HALTXD_SetInitEnc >> sys_mode EVDO, subtype %d rl_chtype %d MSB first transmission
HALTXD_SetSrrcFilter >> Set SRRC Filter
HALTXD_SetTxFilter >> Set Tx Filter Bypass
HALTXD_SetUrtg >> Set URTG : %d
DoGetRlSysTimeZeroOffset : framez (H: 0x%x L: 0x%x) slotz (H: 0x%x L: 0x%x) slotz_in_frm %d chipz %d isUrtgSet %d
DoCalcRlSysTimeFrmOffset : apply_frmf (H: 0x%x L: 0x%x) apply_subfrmf (H: 0x%x L: 0x%x) apply_slotf_in_frm %d
[HALTXD_GetPhaseMon] (PHASE_MON %d, RFD_PHASE_MON %D)
HALTXD_GetTxTmTime >> slot 0x%x chip 0x%x
HALTXD_SetSystemTime >> EVDO_SYSTEM_TIME_L %d EVDO_SYSTEM_TIME_H %d
HALTXD_SetSystemTime >> frm_fl %d apply_frm_rl %d
HALTXD_SetLongCodeMask >> I (H: 0x%x L: 0x%x) Q (H: 0x%x L: 0x%x)
HALTXD_SetUrtgFrameOffset >> frame_offset %d init_reset %d
HALTXD_SetUrtgZeroOffset >> slot(%d) chip(%d)
HALTXD_SetUrtgInitSlotOffset >> Wrong slotNum(%d)
HALTXD_SetModUpdateRate >> Mod 0x%x Gain 0x%x
HALTXD_SetGainUpdateRate >> GainUpdateMode : 0x%x
HALTXD_SetAchDataEnc >> CH0_LEN 0x%x CH0_ENC 0x%x
HALTXD_SetAchPilotMod >> Enable (subtype012)
HALTXD_SetAchPilotMod >> Disable (subtype012)
HALTXD_SetAchDataMod >> Enable(subtype012) : CH_DATA_EN %d S01_DATA0 0x%x S01_DATA1 0x%x DataRate %d
HALTXD_SetAchDataMod >> Disable(subtype012) : CH_DATA_EN %d S01_DATA0 0x%x
HALTXD_SetRtchPilotMod >> Enable (subtype01)
HALTXD_SetRtchPilotMod >> Enable (subtype2)
HALTXD_SetRtchPilotMod >> Disable (subtype01)
HALTXD_SetRtchPilotMod >> Disable (subtype2)
HALTXD_SetAuxPilotMod >> disable
HALTXD_SetAuxPilotMod >> enable
HALTXD_SetRtchRriMod >> enable (subtype01)
SHALTXD_SetRtchRriMod >> disable (subtype01)
HALTXD_SetRtchRriMod >> enable (subtype2)
HALTXD_SetRtchRriMod >> disable (subtype2)
HALTXD_SetRtchDataMod >> Enable(subtype01) : CH_DATA_EN %d S01_DATA0 0x%x S01_DATA1 0x%x DataRate %d
HALTXD_SetRtchDataMod >> Disable(subtype01) : S01_DATA0 0x%x
HALTXD_SetRtchDataMod >> Enable(subtype2) : CH_DATA_EN %d S2_DATA 0x%x PktSize %d ITLC_Idx %d SubPktIdx %d
HALTXD_SetRtchDataMod >> Disable(subtype2) : S2_DATA 0x%x
Invalid data_rate_index !!
Invalid data_rate_index !!
Invalid phy_subtype !!
HALTXD_SetRtchDataEnc >> INFO %d ENC %d CODE_RATE %d CRC_LEN %d INTLEV_SIZE %d INTLEV_TYPE %d IL_OFFSET %d
HALTXD_SetRtchDataEnc >> CH_DATA_EN %d CH1_LEN 0x%x CH1_ENC 0x%x
HALTXD_SetRtchRriEnc >> enable(subtype01): SYMBOL %d
HALTXD_SetRtchRriEnc >> disable
HALTXD_SetRtchRriEnc >> enable(subtype2): PAYLOAD_IDX %d SUBPACKET_IDX %d
DSC Switch %d, DSCValue %x
HALTXD_SetTxMixer
[HALTXD_Set_RFD_DTX_SYNC] RFD_DTX_SYNC set to 1 at SLOT %d, CPX8 %d
ENCIN_BUF: 0x%04X 0x%04X 0x%04X 0x%04X 0x%04X 0x%04X 0x%04X
ENCIN_BUF: 0x%04X 0x%04X 0x%04X 0x%04X 0x%04X 0x%04X 0x%04X
ENCIN_BUF: 0x%04X 0x%04X
EncReadLen %d ENCIN_BUF[%d] print %d bit
TX_CDMA_EVDO_BUF_SEL: 0X%08X
EVDO_BUF0: 0X%08X 0X%08X 0X%08X 0X%08X 0X%08X 0X%08X 0X%08X
EVDO_BUF0: 0X%08X 0X%08X 0X%08X 0X%08X 0X%08X 0X%08X 0X%08X
EVDO_BUF0: 0X%08X 0X%08X 0X%08X 0X%08X 0X%08X 0X%08X 0X%08X
EVDO_BUF0: 0X%08X 0X%08X 0X%08X 0X%08X 0X%08X 0X%08X 0X%08X
EVDO_BUF0: 0X%08X 0X%08X 0X%08X 0X%08X
EVDO_BUF0[%d] print %d bit
EVDO_BUF1: 0X%08X 0X%08X 0X%08X 0X%08X 0X%08X 0X%08X 0X%08X
EVDO_BUF1: 0X%08X 0X%08X 0X%08X 0X%08X 0X%08X 0X%08X 0X%08X
EVDO_BUF1: 0X%08X 0X%08X 0X%08X 0X%08X 0X%08X 0X%08X 0X%08X
EVDO_BUF1: 0X%08X 0X%08X 0X%08X 0X%08X 0X%08X 0X%08X 0X%08X
EVDO_BUF1: 0X%08X 0X%08X 0X%08X 0X%08X
EVDO_BUF1[%d] print %d
[SW_WA_TURBO_ENC] enc_out_addr 0x%x EVDO_BUF_SEL %d data_len %d data_len_u32 %d spare %d
[HALTX_3GC][WARNING]NullFunc()!!
