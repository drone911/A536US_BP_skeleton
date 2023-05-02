##[NR_MEAS][SWEEP] StartModuleSweep : Cur_RxBeamIdx(0x%03x) BeamSweeping(%d) rxbeam_map(%d) module_map(%d) plane_map(%d) beamsweep_mode(%d)
##[NR_MEAS][SWEEP] StartModuleSweep : Start with Current_module(%d) module_map(%d)
##[NR_MEAS][SWEEP] StartModuleSweep : Start with ActivePlane(%d) plane_map(%d)
##[NR_MEAS][SWEEP] StartModuleSweep : Setting Done! Module(%d) Plane(%d) TargetRxBeam(%d) CurrentRxBeamIdx(0x%03x) // module_map(%d) plane_map(%d) rxbeam_map(%d)
======================================================================
##[NR_MEAS] Set & Update Information MeasMode[%d] MeasCellNum:(%d) RxBeamSweepStatus(%d) Updated_rxbeamidx(0x%03x)
##[NR_MEAS] Index[%d] CellId[%d] SsbIndex[%d] RxBeamIdx[0x%03x] TimingOffset[%d]
======================================================================
##[NR_MEAS] Ongoing Measurement was already stopped!
##[NR_MEAS] ModuleSweepCnfCb: MEAS_ISR_DONE
##[NR_MEAS] NrMeasCnfCb : Meas Schedule was delayed. Path/Resource Release!
##[NR_MEAS][SWEEP] Measured_RxBeam(%d), Updated RxBeamMap(%d) rxBeamSweepStatus(%d)
##[NR_MEAS][SWEEP] Measured_Beam(%d), BeamSweep is ongoing Current RxBeam_Map(%d)
##[NR_MEAS][SWEEP] BeamSweep Done! Updated_RfModule_Map(%d) Updated_Plane_Map(%d)
##[NR_MEAS][SWEEP] Target_Module(%d) RfModule_Map(%d) -> StartModuleSweep()!
##[NR_MEAS][SWEEP] Start Plane-Sweep to Plane(%d) Plane_map(%d) RxBeam_Map(%d)
##[NR_MEAS][SWEEP] Module Sweep was Done! Best_Module(%d) Cur_Module(%d)
##[NR_MEAS][SWEEP] Need to Switch RxBeamIdx (0x%03x) -> (0x%03x)
##[NR_MEAS][SWEEP] ModuleSweep Done! But Current is the Best Module! // Cur_RxBeamIdx(0x%03x)
##[NR_MEAS][SWEEP] PlaneSweep was Done! Best_RxBeam(%d) Best_Plane(%d) Current_Active_Plane(%d)
##[NR_MEAS][SWEEP] Select Active_Plane(%d)
##[NR_MEAS][SWEEP] PlaneSweep Done! Acitve Plane(%d) is the Best
##[NR_MEAS](rxBeamSweep) CellId(%d) RxBeamIdx(0x%03x) SsbIdx(%d) Rssi(%d) Rsrp(%d) Rsrq(%d) Sinr(%d)
##[NR_MEAS][SWEEP] Sweep_Result is Updated! Best_RxbeamIdx(0x%03x) RSRP(%d) // Measured_RxBeamIdx(0x%03x)
##[NR_MEAS][SWEEP] Sweep_Result is not Updated! Best_RxbeamIdxModule(0x%03x) RSRP(%d) // Measured_RxBeamIdx(0x%03x)
##[NR_MEAS] NrMeasCnfCb : [%6d] (%4d) M%04d %6d %6d %6d %6d
##[NR_MEAS] NrMeasCnfCb : [%6d] (%4d) M%04d %6d %6d %6d %6d
##[NR_MEAS] NrMeasCnfCb : Ssb_index#0 TimingOffset[%d]
##[NR_MEAS] NrMeasCnfCb : [%6d] MEAS GAIN UPDATE: (%d, %d) -> (%d, %d)
##[NR_MEAS][SWEEP][ERROR] Invalid Meas List with SweepCnfCb!!!
##[NR_MEAS][MS] RFmodule_map was already set to (%d)
##[NR_MEAS] UpdateModuleMonitorInfo : module_type(%d) active_Plane(%d) module_map(%d) rxbeam_map(%d) vh_pathmap(%d)
##[NR_MEAS][MS] Set Module Monitor rfmodule_map(%d), Module_Num(%d) RunningModule(%d)
##[NR_MEAS] UpdateModuleMonitorPeriod : cur/mon_module(%d/%d) rsrp_diff(%d) monitoring_period(%d)
##[NR_MEAS] CheckModuleMonitorState(#1) : Ca_Info(%d) module_monitor_on(%d) beamlock_cause(%d)
##[NR_MEAS] CheckModuleMonitorState(#2) : Ca_Info(%d) module_monitor_on(%d) beamlock_cause(%d)
##[NR_MEAS][MS] active[%d]_valid(%d) pended_monitor_schedule(%d) rbs_status(%d) - return_valid(%d)
##[NR_MEAS] Need to Monitor RF Module! Last(%d) Cur(%d) Period_timer_done(%d)
##[NR_MEAS] ClearModuleSwitchInfo : ModuleMonitor Procedure was abnormal! Result was Cleared!
##[NR_MEAS] RxBeamIdx is Updated! Last_rxbeamidx(0x%03x) rf_rxbeamidx(0x%03x) Updated_ModuleMap(%d)
##[NR_MEAS] FilterRsrp : RxBeamIdx(0x%03x) Prev_Rsrp(%d) Measured_Rsrp(%d) Filtered_Rsrp(%d)
##[NR_MEAS][MS] (ConfigModuleSwitchGap) : Target_module(%d) RxBeam(%d)
##[NR_MEAS] MS_Event_condition : CurrModule(%d)RSRP(%d) BestModule(%d)RSRP(%d) Enable(%d) Sw_Thr(%d)
##[NR_MEAS] Monitor_Best_Result : Module#0(%d) Module#1(%d) Module#2(%d) Switch_Count(%d/%d/%d)
##[NR_MEAS][MS] Current Module is Best Rf module!
##[NR_MEAS][MS] Stay Active Module!
##[NR_MEAS][MS] RF Module Switch! (%d) -> (%d)
##[NR_MEAS][Plane_SW] Plane Switch Case! monitor_type(%d) beamlock_state(%d) Updated Active Plane(%d)
##[NR_MEAS][Plane_SW] Plane Switch Case! monitor_type(%d) beamlock_state(%d)
##[NR_MEAS][MS] TX_BEAM_LOCK CASE! RX/TX_MODULE (%d/%d)
##[NR_MEAS][MS] Fail to Send MODULE_SWITCH_NR_CMD
##[NR_MEAS][MS] No Action for MS!
##[NR_MEAS][MS] (%d)module monitor was done! rfmodule_map(%d)
##[NR_MEAS][MS] Updated rfmodule_map(%d)
##[NR_MEAS][Plane_SW] Plane(%d) Sweep Done!! rfmodule_map(%d)
##[NR_MEAS][Plane_SW] Updated rfmodule_map(%d)
##[NR_MEAS][Plane_SW] Sorting[1] : plane(%d) beam(%d) RSRP(%d) plane_best_rsrp(%d)
##[NR_MEAS][Plane_SW] Sorting[2] :(Update!) plane(%d) beam(%d) RSRP(%d) plane_best_rsrp(%d)
