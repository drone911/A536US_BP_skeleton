<<< LTE DM Command List >>>
[01] ltedm help
[02] ltedm on
[03] ltedm off
[04] ltedm default
[05] ltedm vu [RATE]
ex) ltedm vu 1000
-> LTEDM_VU update rate is 1000ms
[06] ltedm phy [RATE]
[07] ltedm l1 [RATE]
[08] ltedm mac [RATE]
[09] ltedm rlc [RATE]
[10] ltedm pdcp [RATE]
[11] ltedm rrc [RATE]
[12] ltedm nas [RATE]
[15] ltedm pal [RATE]
[16] ltedm status
LTE DM : ON
<<< LTE DM Status >>>
LTE DM : ON
LTE DM : OFF
pCellInfo made Null with cc_idx : %d
LTE_DM_VU: mxr_cc(%d), demod_cc(%d), earfcn(%d, %d), cell_ID(%d), RSRP(%d,%d), SINR(%3d,%3d)
LTE_DM_VU: mxr_cc(%d), pCellInfo is NULL
[Malloc couldnot able to allocate memory: ] event=%d
[LTEDM_Send_NS_Event: Sending Error] event=%d
[Lte_ProtocolPostEvent: pal Mem Free Fail]
[LTEDM_Send_NS_Event: Sending Error] event=%d
[Lte_ProtocolPostEvent: pal Mem Free Fail]
LTEDM_Send_NS_SignalQuality [Malloc couldnot able to allocate memory]
[LTEDM_Send_NS_SignalQuality: Sending Error]
[LTEDM_Send_NS_SignalQuality: pal Mem Free Fail]
PCell STR %7d %4d %7d %7d | RTG [ %6d]
GP ADC %4d, %4d degrees Celsius
LTEDMTaskPoll : %s
The input cc_idx (%d) EXCEEDs the maximum (3)!!!
cc_idx (%d) of the given sCellIndex (%d) EXCEEDs the maximum (3)!!!
PCell Neighbor(%d): EARFCN[%4d], PCID[%3d], RSRP_N[%4d (%4d, %4d)], RSRQ_N[%3d]
SCell Freq. Neighbor(%d): EARFCN[%4d], PCID[%3d], RSRP_N[%4d (%4d, %4d)], RSRQ_N[%3d]
InterFreq. Neighbor(%d): EARFCN[%4d], PCID[%3d], RSRP_N[%4d (%4d, %4d)], RSRQ_N[%3d]
UtraFreq. Neighbor(%d): UARFCN[%5d], PSC[%3d], RSCP[%4d], EcNo[%3d]
GeranFreq. Neighbor(%d): ARFCN[%5d], BSIC[%3d], RSSI[%3d]
[MAC] Tx : PDU[%d] Rx : PDU[%d] [ST:%d](per 960ms)
[RLC] Tx : RB_ID[%d] SDU[%d] SDU[%d Bytes] PDU[%d] ReTx PDU[%d]
[RLC] Rx : RB_ID[%d] SDU[%d] SDU[%d Bytes] PDU[%d] ReRx PDU[%d]
[PDCP] Tx : RB_ID[%d] PDU[%d] Rx : RB_ID[%d] PDU[%d]
[MAC] Tx : PDU[%d] Rx : PDU[%d] [ST:%d](Reset/Release case)
[RLC] Tx : RB_ID[%d] SDU[%d] SDU[%d Bytes] PDU[%d] ReTx PDU[%d]
[RLC] Rx : RB_ID[%d] SDU[%d] SDU[%d Bytes] PDU[%d] ReRx PDU[%d]
[PDCP] Tx : RB_ID[%d] PDU[%d] Rx : RB_ID[%d] PDU[%d]
Invalid stackNum:%d
Invalid stackNum:%d
Invalid stackNum:%d
Invalid stackNum:%d
Invalid sCellIndex:%d
LTE dsl1rc State: %d
RF Black-out Start time %d us
[%s] LTE Sleep Duration %d (ms)
[%s] LTE RF Black-out during %d (ms)
[LCE DL][CONN] PHYTP[%d], CSITP[%d] (Kbps)
[LCE DL][IDLE] PHYTP[%d], CSITP[%d] (Kbps)
[LCE_IDLE] Conf_Level[%d]
LTE ProAsnVersion : %d.%d.%d 20%02d-%02d
LTEDM_L1_SINR: mxr_cc(%d), dmod_cc(%d), earfcn(%d, %d), cell_ID(%d): abnormal dmod cc index !!!,
LTEDM_L1_SINR: mxr_cc(%d), div_mxr_cc(%d), dmod_cc(%d), earfcn(%d, %d), cell_ID(%d), SINR( %d, %d, %d, %d)
LTEDM_L1_SINR: mxr_cc(%d), div_mxr_cc(-), dmod_cc(%d), earfcn(%d, %d), cell_ID(%d), SINR( %d, %d)
LTEDMTaskPoll_LTE_DM_NULL
PDCCH C/U:0x%02x 0x%02x, CFI:0x%02x ..PDCCH_FER:(%d/%d), (%d/%d)
PDCCH FORMAT:%X, HOPPING:%d, RA:0x%x, MCS:%d, NDI/TPC:%03d, CQI/SHIFT:%03d, RNTI:0x%X
PDCCH FORMAT:%X, RA:0x%x, MCS:%04d, ACID:%d, SWAP/PCI/RV/NDI:0x%08x, TYPE/TPC/NRB:%07d, RNTI:0x%X
PDCCH FORMAT:%X, RA:0x%x, MCS:%d, ACID:%d, TPMI/PMI/RV/NDI:0x%08x, LD/TPC/NRB:%05d, RNTI:0x%X
PDCCH FORMAT:%X, RA:0x%x, MCS:%d, GAP:%d, NRB:%d, RNTI:0x%X
PDCCH FORMAT:%X, RA:0x%x, MCS:%d, ACID:%d, POff/TPMI/RV/NDI:0x%08x, LD/TPC/NRB:%05d, RNTI:0x%X
PDCCH FORMAT:%X, RA:0x%x, MCS:%d, ACID:%d, RV/NDI:0x%04x, LD/TPC/NRB:%05d, RNTI:0x%X
PDCCH FORMAT:%X, RA:0x%x, MCS:%d, ACID:%d, RV/NDI:0x%04x, TYPE/TPC/NRB:%05d, RNTI:0x%X
PDCCH FORMAT:%X RNTI:0x%x
FREQUENCY HOPPING:%d
BCCH_FER:(%d/%d), (%d/%d)
PDSCH ... PDSCH_FER:(%d/%d), (%d/%d)
DL RB_CNT(CC0:%d, CC1:%d, CC2:%d)
UL RB_CNT(CC0:%d, CC1:%d, CC2:%d)
[IC_INFO_MAX3] Mode(%d) State(%d) Num_activated(%d) ITF2_CCMapping(%d) ITF1_CCMapping(%d) ITF0_CCMapping(%d)
[IC_INFO_MAX3] ITF0_cellID(%d) ITF1_cellID(%d) ITF2_cellID(%d)
[IC_INFO_MAX2] Mode(%d) State(%d) Num_activated(%d) ITF1_CCMapping(%d) ITF0_CCMapping(%d)
[IC_INFO_MAX2] ITF0_cellID(%d) ITF1_cellID(%d)
Unusual case: Total Padding(%d) > Total PHY data(%d) during diff time(%d)ms
LTEDM_UpdateTPInfo: dmod_cc(%d), earfcn(%d, %d), cell_ID(%d), DL_PHY_TP(%d), DL_TP(%d)
LTEDM_UpdateTPInfo: dmod_cc(%d), earfcn(%d, %d), cell_ID(%d), DL_PHY_TP(%d), DL_TP(%d)
LTEDM_UpdateTPInfo: ulp_cc(%d), ul_earfcn(%d, %d), cell_ID(%d), UL_PHY_TP(%d), UL_TP(%d)
| %s_S |CC0 Mx%d Sc%d| PCell SFN [ %d,%d ], DL EARFCN [%2d, %4d], PCell ID [%3d], DL Bandwidth [ %s]
| CONN_S |CC%d Mx%d Sc%d| SCell SFN [ %d,%d ], DL EARFCN [%2d, %4d], SCell ID [%3d], DL Bandwidth [ %s]
|CC0 Mx%d Sc%d| PCell RSRP [%4d (%4d)], RSSI [%3d (%3d)],TimeDifference [ %6d]
|CC0 Mx%d Sc%d| PCell SINR [ -%01d.%02d (%3d)], RSRQ [%4d (%4d)]
|CC0 Mx%d Sc%d| PCell SINR [ %01d.%02d (%3d)], RSRQ [%4d (%4d)]
|CC0 Mx%d Sc%d| PCell RSRP [%4d (%4d)], RSSI [%3d (%3d)],TimeDifference [ %6d]
|CC0 Mx%d Sc%d| PCell SINR [ -%01d.%02d (%3d)], RSRQ [%4d (%4d)]
|CC0 Mx%d Sc%d| PCell SINR [ %01d.%02d (%3d)], RSRQ [%4d (%4d)]
|CC0 Mx%d Sc%d| PCell RSRP [%4d (%4d, %4d)], RSSI [%3d (%3d, %3d)],TimeDifference [ %6d]
|CC0 Mx%d Sc%d| PCell SINR [ -%01d.%02d (%3d, %3d)], RSRQ [%4d (%4d, %4d)]
|CC0 Mx%d Sc%d| PCell SINR [ %01d.%02d (%3d, %3d)], RSRQ [%4d (%4d, %4d)]
|CC0 Mx%d Sc%d| PCell RSRP [%4d (%4d, %4d)], RSSI [%4d (%4d, %4d)], TimeDifference [ %6d]
|CC0 Mx%d Sc%d| PCell SINR [ -%01d.%02d (%3d, %3d)], RSRQ [%4d (%4d, %4d)]
|CC0 Mx%d Sc%d| PCell SINR [ %01d.%02d (%3d, %3d)], RSRQ [%4d (%4d, %4d)]
|CC0 Mx%d Sc%d| PCell RSRP [%4d (%4d, %4d)], RSSI [%4d (%4d, %4d)], TimeDifference [ %6d]
|CC0 Mx%d Sc%d| PCell SINR [ -%01d.%02d (%3d, %3d)], RSRQ [%4d (%4d, %4d)]
|CC0 Mx%d Sc%d| PCell SINR [ %01d.%02d (%3d, %3d)], RSRQ [%4d (%4d, %4d)]
|CC0 Mx%d Sc%d| PCell RSRP [%4d (%4d, %4d, %4d, %4d)], TimeDifference [ %6d]
|CC0 Mx%d Sc%d| PCell RSRQ [%4d (%4d, %4d, %4d, %4d)]
|CC0 Mx%d Sc%d| PCell RSSI [%4d (%4d, %4d, %4d, %4d)]
|CC0 Mx%d Sc%d| PCell SINR [ -%01d.%02d (%3d, %3d, %3d, %3d)]
|CC0 Mx%d Sc%d| PCell SINR [ %01d.%02d (%3d, %3d, %3d, %3d)]
|CC%d Mx%d Sc%d| SCell RSRP [%4d (%4d, %4d)], RSSI [%3d (%3d, %3d)]
|CC%d Mx%d Sc%d| SCell SINR [%3d (%3d, %3d)], RSRQ [%4d (%4d, %4d)]
|CC%d Mx%d Sc%d| SCell RSRP [%4d (%4d, %4d)], RSSI [%4d (%4d, %4d)]
|CC%d Mx%d Sc%d| SCell SINR [%3d (%3d, %3d)], RSRQ [%4d (%4d, %4d)]
|CC%d Mx%d Sc%d| SCell RSRP [%4d (%4d, %4d)], RSSI [%4d (%4d, %4d)]
|CC%d Mx%d Sc%d| SCell SINR [%3d (%3d, %3d)], RSRQ [%4d (%4d, %4d)]
|CC%d Mx%d Sc%d| SCell RSRP [%4d (%4d, %4d, %4d, %4d)], SearchTimeOffset [ %6d]
|CC%d Mx%d Sc%d| SCell RSRQ [%4d (%4d, %4d, %4d, %4d)]
|CC%d Mx%d Sc%d| SCell RSSI [%4d (%4d, %4d, %4d, %4d)]
|CC%d Mx%d Sc%d| SCell SINR [%3d (%3d, %3d, %3d, %3d)]
|CC0 Mx%d Sc%d| PCell TransMode [%d], CFI [%d], PDCCH [%5d/%5d], UCI [%5d], DCI [%5d]
|CC0 Mx%d Sc%d| PCell UCI_FORMAT [%d], MCS [%2d], NRB [%2d], RNTI [0x%04X]
|CC0 Mx%d Sc%d| PCell DCI_FORMAT [%X], MCS [%2d,%2d], NRB [%2d], RNTI [0x%04X]
|CC0 Mx%d Sc%d| PCell DCI_FORMAT [%X], MCS [%2d], NRB [%2d], RNTI [0x%04X]
|CC0 Mx%d Sc%d| PCell DL BLER [%3d%%][%5d(%d)/%5d](ack:%5d), DataRate [DL:%7d(%d) (kbps)]
|CC0 Mx%d Sc%d| PCell UL BLER [%3d%%][%5d(%d)/%5d], DataRate [UL:%7d(%d) (kbps)]
|CC0 Mx%d Sc%d| PCell eMBMS DataRate [DL:%7d(%d) (kbps)]
|CC0 Mx%d Sc%d| PCell eMBMS PMCH BLER[(ID:%d) %5d/%5d], MRS_SNR_RX0[%3d], MRS_SNR_RX1[%3d]
|CC0 Mx%d Sc%d| PCell eMBMS RSRP_RX0[%3d], RSRP_RX1[%3d], RSSI_RX0[%3d], RSSI_RX1[%3d],
|CC%d Mx%d Sc%d| SCell TransMode [%d], CFI [%d], PDCCH [%5d/%5d], UCI [%5d], DCI [%5d]
|CC%d Mx%d Sc%d| SCell UCI_FORMAT [%d], MCS [%2d], NRB [%2d], RNTI [0x%04X]
|CC%d Mx%d Sc%d| SCell DCI_FORMAT [%X], MCS [%2d,%2d], NRB [%2d], RNTI [0x%04X]
|CC%d Mx%d Sc%d| SCell DCI_FORMAT [%X], MCS [%2d], NRB [%2d], RNTI [0x%04X]
|CC%d Mx%d Sc%d| SCell DL BLER [%3d%%][%5d(%d)/%5d](ack:%5d)], DataRate [DL:%7d(%d) (kbps)]
|CC%d Mx%d Sc%d| SCell UL BLER [%3d%%][%5d(%d)/%5d], DataRate [UL:%7d(%d) (kbps)]
|CC%d Mx%d Sc%d| SCell eMBMS DataRate [DL:%7d(%d) (kbps)]
|CC%d Mx%d Sc%d| SCell eMBMS PMCH BLER [(ID:%d) %5d/%5d]
|CC%d Mx%d Sc%d| SCell eMBMS RSRP_RX0[%3d], RSRP_RX1[%3d], RSSI_RX0[%3d], RSSI_RX1[%3d],
CA DL DataRate [P:%7d(%d) (kbps), S:%7d(%d) (kbps), T:%7d(%d) (kbps)]
CA UL DataRate [P:%7d(%d) (kbps), S:%7d(%d) (kbps), T:%7d(%d) (kbps)]
|CC0 Mx%d Sc%d| PCell/SCell UL Power : PRACH [%d], PUCCH [%d], PUSCH [%d, CC%d:%d], SRS [%d], Max PUSCH Power Flag [%d]
|CC0 Mx%d Sc%d| PCell UL Power : PRACH [%d], PUCCH [%d], PUSCH [%d], SRS [%d], Max PUSCH Power Flag [%d]
|CC0 Mx%d Sc%d| PCell CQI [%2d,%2d], RI [%2d], NormTP [ %5d (bits/10RB)], CQItable[%d]
|CC0 Mx%d Sc%d| PCell CQI [%2d,%2d], RI [%2d], PMI[%2d,%2d], NormTP [ %5d (bits/10RB)], CQItable[%d]
|CC0 Mx%d Sc%d| PCell CQI [%2d], PMI[%2d,%2d], NormTP [ %5d (bits/10RB)], CQItable[%d]
|CC0 Mx%d Sc%d| PCell CQI [%2d], NormTP [ %5d (bits/10RB)], CQItable[%d]
|CC%d Mx%d Sc%d| SCell CQI [%2d,%2d], RI [%2d], CQItable[%d]
|CC%d Mx%d Sc%d| SCell CQI [%2d,%2d], RI [%2d], PMI[%2d,%2d], CQItable[%d]
|CC%d Mx%d Sc%d| SCell CQI [%2d], PMI[%2d,%2d], CQItable[%d]
|CC%d Mx%d Sc%d| SCell CQI [%2d], CQItable[%d]
|CC0 Mx%d Sc%d| PCell TXC [%8d,%8d,%8d], RXC [%8d,%8d,%8d]
|CC%d Mx%d Sc%d| SCell TXC [%8d,%8d,%8d], RXC [%8d,%8d,%8d]
|CC0 Mx%d Sc%d| PCell STR %7d %4d %7d %7d | RTG [ %6d]
|CC%d Mx%d Sc%d| SCell STR %5d %4d %7d %7d | RTG [ %6d]
|CC0 Mx%d Sc%d| PCell Frequency [DL: %dkHz, UL: %dkHz], Bandwidth [DL: %s, UL: %s], Antenna No. [eNB: %d, UE: %d]
|CC%d Mx%d Sc%d| SCell Frequency [DL: %dkHz, UL: %dkHz], Bandwidth [DL: %s, UL: %s], Antenna No. [eNB: %d, UE: %d]
|CC%d Mx%d Sc%d| SCell Frequency [DL: %dkHz], Bandwidth [DL: %s], Antenna No. [eNB: %d, UE: %d]
|CC0 Mx%d Sc%d| PCell AGC %3d %3d (%3d %3d) (%4d %4d) , RMS Cntl : %2d dB
|CC%d Mx%d Sc%d| SCell AGC %3d %3d (%3d %3d) (%4d %4d)
|CC0 Mx%d Sc%d| PCell AFC PDM: %4d, ANGLE: %4d | DCmV %4d %4d, %4d %4d
|CC%d Mx%d Sc%d| SCell AFC ANGLE: %4d | DCmV %4d %4d, %4d %4d
| U-CPU Idle = %2d.%d%%, %d MHz | L-CPU Idle = %2d.%d%% | MIF = %d MHz | HARQ stuck = %d
SystemDynamic Usage : %2d%% (%2d%%) [ %dk total, %dk used, %dk free ] | PMD Usage: %2d%% (%2d%%) [ %dk total, %dk used, %dk free ]
RACH : INIT [%3d], HO_DEDI [%3d], HO_RAND [%3d], RACH_RLF [%3d], UL_RAND [%3d], DL_DEDI [%3d], DL_RAND [%3d]
SR [%5d, %5d], TA Timer Expired [%3d], ReTx BSR Timer Expired [%3d], DSR MAX FAIL [%3d][%3d]
Cell Reselection : Start [%3d], Complete [%3d]
Meas Report [%3d] | Handover : Start [%3d], Complete[%3d], Latency [%3dms] | RRE : Start [%3d], Reject [%3d]
RRE Cause : T304HoFail[%3d], RachFail[%3d], RlcMaxRetrans[%3d], T310OutOfSync[%3d], ReconfigFail[%3d]
RRE Cause : IntegrityCheckFail[%3d], MobCmdFail[%3d], MobCmdFailRrcAbort[%3d], IratConfigFail[%3d], MuiListFail[%3d], Other[%3d]
Protocol Error Detect : lte_ul_oos[%3d], lte_rach_rar_mismatch[%3d], lte_rach_access_fail[%3d], lte_rrc_oos[%3d], lte_rrc_rlf[%3d], lte_rrc_resel_fail[%3d]
Protocol Error Detect : lte_rrc_ho_fail[%3d], lte_rrc_irat_ho_fail[%3d], lte_rrc_irat_resel_fail[%3d], lte_rrc_irat_redirect_fail[%3d], lte_rrc_sib_read_fail[%3d], lte_rrc_endc_no_rsp[%3d]
Cell Reselection : Start [%3d], Complete [%3d]
Meas Report [%3d] | Handover : Start [%3d], Complete[%3d], Latency [%3dms] | RRE : Start [%3d], Reject [%3d]
RRE Cause : T304HoFail[%3d], RachFail[%3d], RlcMaxRetrans[%3d], T310OutOfSync[%3d], ReconfigFail[%3d]
RRE Cause : IntegrityCheckFail[%3d], MobCmdFail[%3d], MobCmdFailRrcAbort[%3d], IratConfigFail[%3d], MuiListFail[%3d], Other[%3d]
Protocol Error Detect : lte_ul_oos[%3d], lte_rach_rar_mismatch[%3d], lte_rach_access_fail[%3d], lte_rrc_oos[%3d], lte_rrc_rlf[%3d], lte_rrc_resel_fail[%3d]
Protocol Error Detect : lte_rrc_ho_fail[%3d], lte_rrc_irat_ho_fail[%3d], lte_rrc_irat_resel_fail[%3d], lte_rrc_irat_redirect_fail[%3d], lte_rrc_sib_read_fail[%3d], lte_rrc_endc_no_rsp[%3d]
