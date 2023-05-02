(I)LTE_Block_Initialize
S%x EVT%x ExtHBUF base:0x%x
(SCG) Default Setting: pscell_idx:%d nAnt:%d, bw:%d, tm:%d, ng:%d, sf:%d, ssf:%d
(F) #_config CC:%d
(I) Cfg_SetPUCCHconfig cfg_num(%d), large_A (%d), reverse(%d), ack0(0x%x), ack1(0x%x), ack2(0x%x)
Cfg_SetPaPb: cc:(%d), PA (%d), PB(%d)
FDP_Para: cc:(%d), sf_assign (%d), ssf_pattern(%d)
(F) wrong ul/dl subframe config.(%d)
(F) wrong special subframe config.(%d)
(I)Update ack size of pcell: Group(MCG)/CC(0)/TM(%d)/acksize(%d)
(I)Update ack size of pcell: Group(SCG)/CC(%d)/PCellIdx(%d)/TM(%d)/acksize(%d)
Disable PP ClockGating: DEMOD_4G_CG_OFF(0x%x,0x%x)
(F)SYSTEM_INFO_ST register mismatch: IPC(0x%08x), Register(0x%08x)
CC0_SYSTEM_INFO(0x%x), dw(%d), cell(%d), dl_earfcn(%d), CC0_SYSTEM_INFO_SYSTIME4G(0x%x), SysInfoUpdate_type(%d)
CC0_SYSTEM_INFO(0x%x), CC0_SYSTEM_INFO_SYSTIME4G(0x%x)
IPC: SysInfoUpdate, cellid(%d), n_antP,ue_ant(%04X), cp/dl_bw(%03d), ng(%d), dur(%d), duplex(%d), uldl/sp(%04d)
[TDP_CFG]SI init state : Pcell_cc_idx: %d, Ue_ant_num[CC0] = %d, n_ue_ant = %d, rfd_path_idx: %d
Update_MIB
SysInfoUpdate(MIB): reset condition @ TRPRST_STATE_ACT_WAIT: sys_info(0x%x,0x%x), diff(0x%x), earfcn(%d,%d)
(I)Ignore sw_reset (SYSTEM_INFO:0x%x, dl_earfcn:%d)
(I)Received SysInfoUpdate.type = %d
==================================================================
FFT_EN=0x%X, FFT_STATUS=0x%X, TD_BUF_EN=0x%X, TD_BUF_CC0CONF=0x%X
(F)cmd type(%d) is invalid
(F)SYSTEM_INFO_ST register mismatch: IPC(0x%08x), Register(0x%08x)
SCG-CC%d_SYSTEM_INFO(0x%x), dw(%d), cell(%d), dl_earfcn(%d), CCx_SYSTEM_INFO_SYSTIME4G(0x%x), SysInfoUpdate_type(%d)
SCG-CC%d_SYSTEM_INFO(0x%x), CCx_SYSTEM_INFO_SYSTIME4G(0x%x)
SCG-CC%d_SYSTEM_INFO(0x%x), CCx_SYSTEM_INFO_SYSTIME4G(0x%x)
SCG-CC%d_SYSTEM_INFO(0x%x), CCx_SYSTEM_INFO_SYSTIME4G(0x%x)
SCG-CC%d_SYSTEM_INFO(0x%x), CCx_SYSTEM_INFO_SYSTIME4G(0x%x)
SCG-CC%d_SYSTEM_INFO(0x%x), CCx_SYSTEM_INFO_SYSTIME4G(0x%x)
SCG-CC%d_SYSTEM_INFO(0x%x), CCx_SYSTEM_INFO_SYSTIME4G(0x%x)
IPC: SCG-SysInfoUpdate(SCG), cellid(%d), n_antP,ue_ant(%04X), cp/dl_bw(%03d), ng(%d), dur(%d), duplex(%d), uldl/sp(%04d)
[TDP_CFG] SI SCG state(CC%d) : Ue_ant_num = %d, n_ue_ant = %d
IPC: PhyRxConfig,cif_valid:%d,cif_pres:%d,pa:%d, alttbsidx1(r12valid/v1280valid/enum):%03d, alttbsidx2(r14valid/v1430valid/enum):%03d
cc_idx (%d) is INVALID!
(F) Cfg_SCell_DB_Update ERROR (%d)
(F)SYSTEM_INFO_ST register mismatch: IPC(0x%08x), Register(0x%08x)
(F) Wrong System Information
DEMOD CC%d_SYSTEM_INFO (0x%x), bw(%d), cell(%d), antenna(tx/rx)(%02d), RxMode/div_cc(0x%02x), isMCG(%d)
(F) CA info mismatch Cellid(%d)(%d), BW(%d)(%d)
CC:%d, pdsch_r12 valid:%d ,config :%d
CC:%d pdsch_r14 valid:%d ,config :%d
[CA_ACT : TDP][before][CC%d], Agc/Afc/Str[%3d], dmswreset(%d)
[CA_ACT : TDP][after][CC%d], Agc/Afc/Str[%3d]
[CA_ACT : TDP][RXF_MIXER_FREQ][0/1/2/3/4/5] : %5d / %5d / %5d / %5d / %5d / %5d
[CA_ACT : TDP][RXF_MIXER_FREQ][6/7/8/9/10/11] : %5d / %5d / %5d / %5d / %5d / %5d
[CA_ACT : TDP][REG] GAIN_UPDATE_MODE : 0x%x, ACTIVE_RAT : 0x%x
[CA_DEACT : TDP][before][CC%d], Agc/Afc/Str[%3d]
[CA_DEACT : TDP][before][TC_SERV_CONFIG_CC][0/1/2/3/4/5] : 0x%x / 0x%x / 0x%x / 0x%x / 0x%x
[CA_ACT] AdcPath is not valid [cc : %d][adc_path : %d]
[CA_DEACT : TDP][after][CC%d], Agc/Afc/Str[%3d]
[CA_DEACT : TDP][after][TC_SERV_CONFIG_CC][0/1/2/3/4/5] : 0x%x / 0x%x / 0x%x / 0x%x / 0x%x / 0x%x
Cfg_BackupDB cell_group(%d) ta_s(%d), rlf_s(%d), ca_deact_time(%d)(%d)(%d)(%d)
Cfg_RestoreDB ta_s(%d), rlf_s(%d), deact(%d)(%d),CA_SFN_backup(%d)
Cfg_Read_UECategory(%d)
Cfg_Read_ULMulticluster(%d)
Cfg_Read_UECategory_DL(%d)
Cfg_Read_UECategory_UL(%d)
Cfg_Update_UE_Carrier(%d)
Cfg_Read_noResourceRestrictionForTTIBundling_r12(%d)
