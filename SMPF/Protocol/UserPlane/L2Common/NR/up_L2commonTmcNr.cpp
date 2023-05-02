[TMC] Init!
[TMC] m_bModeBTimerCreate!
[TMC] ResetTmc!
[TMC][ERROR] TmcDataQueue full!
[TMC][ERROR] Alloc Failed to get cId(%d) !!!
[TMC] push queue! rbId(%u) ebId(%u) cId(%d) length(%u), pData(0x%x) m_uTmcDataCount(%u)
[TMC] SyncLteTlpConfig! u32CurrentState(%d) TlpMode(%d) u8NumDrbConfigLb(%d) u8TotalNumDrbConfig(%d)
[TMC] LBID(%d) au8TlpEPSbearerId(%d) au8TlpDRbId(%d) aeDrbState(%d)
[TMC] MODE A : au8TlpIsUlPdcpSduScalingConfig(%d) au16TlpUlPdcpSduSize(%d)
[TMC] MODE B : u8IsBufferIpPdus(%d) u8TlpTDelayTimerValue(%d)
[TMC] ProcLteTlpConfigMsg! u32MsgType(%d) u8Data(%d)
[TMC][ERROR] unknown msg type!
[TMC] ProcLbDrbInd! NumDrbs(%u) Previous u8TotalNumDrbConfig(%u)
[TMC] i(%d) : DrbIdForLB(%d) CnIdForLB.choice(%d) u.epsBearerId(%d) u.pduSessionId(%d)
[TMC] RbTypeForLB(%d) RbConfStatusForLB(%d) RbDirectionForLB(%d)
[TMC] DrbIdForLB(%u) is not BI-DIRECTIONAL. Ignore this RB_SETUP
[TMC] lbId(%d) Setup drb(%d), now u8TotalNumDrbConfig(%d)
[TMC] Ignore this config state!
[TMC] LB setup Result! au8TlpDRbId[%d] = %d, u8NumDrbConfigLb = %d
[TMC] ProcDataInd! Length(%u) Data(0x%x 0x%x)
[TMC][ERROR] Invalid Length! Ignore this message.
[TMC][ERROR] SI is not 0. Ignore this message.
[TMC][ERROR] unknown messageType(%d)
[TMC] Proc_CLOSE_UE_TEST_LOOP! testMode(%d)
[TMC][ERROR] Tlp mode is not active
[TMC][ERROR] No bi-directional DRB
[TMC][ERROR] Already UE test loop closed
[TMC][ERROR] testMode is invalid!
[TMC][MODE_A] LB setup list[%d]! uplinkPdcpSduSize(%u)(bits) drbType(%u)(0:EUTRA 1:NR) drbId(%u)
[TMC][MODE_A] skip this DRB scaling config. Because This is E-UTRA DRB
[TMC][MODE_A] LbId(%d) Found DRB! Set scaling info!
[TMC][MODE_B] ipPduDelayField(%u)
[TMC] Proc_OPEN_UE_TEST_LOOP! Current TlpMode(%d) will be MODE_NONE
[TMC] Proc_ACTIVATE_TEST_MODE! testMode(%u)
[TMC] Proc_DEACTIVATE_TEST_MODE!
[TMC] Proc_RESET_UE_POSITIONING_STORED_INFO! UEPositioningTech(%d)
[TMC] Sending LBS_L2_RESET_UE_POSI_INFO_IND Fail!
[TMC] Send! LBS_L2_RESET_UE_POSI_INFO_IND
[TMC] Proc_ACTIVATE_BEAMLOCK! nrMode(%d) ueBeamLockTestFunction(%d) FrType(%d)
[TMC][ERROR] Not supported FR!
[TMC] Send PHY IPC! (PHY_L2_UE_BEAMLOCK_IND)
[TMC] Proc_DEACTIVATE_BEAMLOCK! nrMode(%d)
[TMC] UBF is not running! Ignore this Msg.
[TMC] Send PHY IPC! (PHY_L2_UE_BEAMLOCK_IND)
[TMC] SendLbDataInd! eMsgType(%d)
[TMC][ERROR] Sending MM_L2_LB_DATA_IND is fail!
[TMC] Sending MM_L2_LB_DATA_IND is success!
[TMC] SendBeamLockInd! ueBeamLockTestFunction(%d)
[TMC][ERROR] Sending L1C_L2_BEAMLOCK_IND is fail!
[TMC] Sending L1C_L2_BEAMLOCK_IND is success!
[TMC][ST%d] RunTmc()! SA Mode(%d)
[TMC][ERROR] TLP state(%d) is not active!
[TMC] Start m_ModeBTimer! (%d)ms
[TMC] ModeB Timer is running! Keep received PDUs.
[TMC][ERROR] not supported mode(%u)
[TMC] Invoke L2NR_SendUlDataforNsa()! ulSduNum(%u)
[TMC][ERROR] ulSduNum is 0!
[TMC] ProcLoopModeA()! rbId(%d) lbId(%d) queue size(%d)
[TMC] scaling config on! configSduSize(%d)
[TMC][ERROR] configSduSize is 0. Can't make Loopback PDU
[TMC] Flush TmcDataQueue! size(%d) rbId(%d)
[TMC][ERROR] m_tTmcDataQueue.front() is nullptr!
[TMC][ERROR] rbId(%d) != pTmcData->rbId(%d)
[TMC] Alloc CellBuffer! size(%u)
[TMC][ERROR] pCellData == nullptr
[TMC][ERROR] something is wrong! Please check dump
[TMC] Make Loopback PDU (1:1 case)
[TMC] Make Loopback PDU Segment! curPduLength(%u) PDCP SDU length(%u)
[TMC] Make Loopback PDU(1:N case)! curPduLength(%u)
[TMC] Enque Sdu Descriptor! Length(%u) DomainType(%d)
[TMC] ProcLoopModeB()! rbId(%d) lbId(%d) queue size(%d) bSaMode(%d)
[TMC][ERROR] m_tTmcDataQueue.front() is nullptr!
[TMC][ERROR] rbId(%d) != pTmcData->rbId(%d)
[TMC] Alloc CellBuffer! size(%u)
[TMC][ERROR] pCellData == nullptr
[TMC] Enqueue PKTHND queue! len(%d) cId(%d) rbId(%d) DomainType(%d)
[TMC] ModeBTimerExpiredHandler()!
[TMC] FlushTmcDataQueue! rbId(%d) queue size(%d)
[TMC] Turn off Tlp NR SA Mode!
