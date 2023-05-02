RF_RFIC_CoreS5511_Pre_Assign : Try to Pre-assign [Band: %s, Port: %s]
RF_RFIC_CoreS5511_Pre_Assign : [2G] pre_port_mix[%s], assigne lo[%s]
pre_port_mix[%s], assign lo[%s]
[RF_RFIC_CoreS5511_Pre_Processing] Port Count : CA(%d), MIMO(%d), 2G(%d) / LB(%d), MB1(%d), MB2(%d), HB1(%d)
[RF_RFIC_CoreS5511_Pre_Processing] Port Count : HB2(%d), UHB(%d), LAA(%d)
[RF_RFIC_CoreS5511_Pre_Processing] Find [%s]
[RF_RFIC_CoreS5511_Pre_Processing] LB Count 2 preassigend Check Start
[RF_RFIC_CoreS5511_Pre_Processing] HB2 Count 2 preassigend Check Start
[RF_RFIC_CoreS5511_Pre_Processing] HB1 Count 3 preassigend Check Start
[RF_RFIC_CoreS5511_Pre_Processing] MB1 Count 3 preassigend Check Start
[RF_RFIC_CoreS5511_Pre_Processing] MB2 Count 3 preassigend Check Start
[RF_RFIC_CoreS5511_Pre_Processing] LB + MB1 Count 4 preassigend Check Start
[RF_RFIC_CoreS5511_Pre_Processing] HB2 + LAA Count >= 2 preassigend Check Start
[RF_RFIC_CoreS5511_Pre_Processing] M2-MIMO preassigend Check Start
[RF_RFIC_CoreS5511_Pre_Processing] M1M2 preassigend Check Start
[RF_RFIC_CoreS5511_Pre_Processing] M1H1 preassigend Check Start
[RF_RFIC_CoreS5511_Pre_Processing] M2H1 preassigend Check Start
[RF_RFIC_CoreS5511_Pre_Processing] M2H2 preassigend Check Start
[RF_RFIC_CoreS5511_Pre_Processing] H1H2 preassigend Check Start
[RF_RFIC_CoreS5511_Pre_Processing] Pre-assignment done.
[RF_RFIC_CoreS5511_Check_prx_to_mmix_limit] Check prx to mmix[%s] limit Port[%s]
[RF_RFIC_CoreS5511_Check_prx_to_mmix_limit] Check prx to mmix[%s] limit Port[%s]
[RF_RFIC_CoreS5511_Check_lna_to_mmix_limit] Check lna to mmix[%s] limit Port[%s, %s]
[RF_RFIC_CoreS5511_Check_port_priority] check priority [band: %s, port: %s, mix: %s]
[RF_RFIC_CoreS5511_Assign_One_CA] start assigning CA (idx: %d [%s]) recursive_cnt [%d]
[RF_RFIC_CoreS5511_Assign_One_CA] get possible Mix array
[RF_RFIC_CoreS5511_Assign_One_CA] when traversing possible_mix array [port: %s]
[RF_RFIC_CoreS5511_Assign_One_CA] Cant preempt mix %s
[RF_RFIC_CoreS5511_Assign_One_CA] Success #2-1 assign Port[%s, idx: %d], Mix[%s], LO[%s]
[RF_RFIC_CoreS5511_Assign_One_CA] Success #2-2 assign Port[%s, idx: %d], Mix[%s], LO[%s]
[RF_RFIC_CoreS5511_Assign_One_CA] Fail#2 assign Band[%s], Port[%s], idx[%d]
[%s] port: %s
[RF_RFIC_CoreS5511_Assign_One_4rx] assign 4rx band[%s], prx_port[%s], drx_port[%s]
[RF_RFIC_CoreS5511_Assign_One_4rx] master ca not assigned, 4rx either cannot be assigned.
[RF_RFIC_CoreS5511_Assign_One_4rx] Fail - limit the 4rx preemption > 3
[RF_RFIC_CoreS5511_Assign_One_4rx] Try empty 4rx mix first
[RF_RFIC_CoreS5511_Assign_One_4rx] mix, lo fail - try_cnt <= 0 retry
[RF_RFIC_CoreS5511_Assign_One_4rx] try to preempt already assigned 4rx mix
[RF_RFIC_CoreS5511_Assign_One_4rx] fail - cannnot swap twice
[RF_RFIC_CoreS5511_Assign_One_4rx] success assign 4rx after one ca swap
[RF_RFIC_CoreS5511_Assign_One_4rx] fail - try 2pll 4rx assign
[RF_RFIC_CoreS5511_Assign_One_4rx_Without_Preemption] Start
[RF_RFIC_CoreS5511_Assign_One_4rx_Without_Preemption] [%s] MIX NOT USED #1
[RF_RFIC_CoreS5511_Assign_One_4rx_Without_Preemption] [%s] MIX NOT USED #2
[RF_RFIC_CoreS5511_Assign_One_4rx_Without_Preemption] Success #5
[RF_RFIC_CoreS5511_Assign_One_4rx_Without_Preemption] Fail #5
[RF_RFIC_CoreS5511_Assign_One_4rx_Without_Preemption] Start
[RF_RFIC_CoreS5511_Assign_One_4rx_With_Preemption] Success #6
[RF_RFIC_CoreS5511_Assign_One_4rx_With_Preemption] Fail #6
[RF_RFIC_CoreS5511_Assign_One_4rx_After_CA_Swap] try to assign 4rx after one ca swap start!
[RF_RFIC_CoreS5511_Assign_One_4rx_After_CA_Swap] 1. check if there is empty mix!
[RF_RFIC_CoreS5511_Assign_One_4rx_After_CA_Swap] 1. try empty mix!
[RF_RFIC_CoreS5511_Assign_One_4rx_After_CA_Swap] 2. swap with intra!
[RF_RFIC_CoreS5511_Assign_One_4rx_After_CA_Swap] 1~4 Swap fail
[RF_RFIC_CoreS5511_Assign_One_4rx_Using_2pll] check possible 4rx mix for the port[%s] Start
[RF_RFIC_CoreS5511_Assign_One_4rx_Using_2pll] check LO6 already used for CA.... or another 4RX: Fail
[RF_RFIC_CoreS5511_Assign_One_4rx_Using_2pll] check LO6 available... try!
[RF_RFIC_CoreS5511_Assign_One_4rx_Using_2pll] Fail - check LO6 available... try!
[RF_RFIC_CoreS5511_Assign_One_4rx_After_CA_Swap] 3. MIX3(master) <-> MIX4
[RF_RFIC_CoreS5511_Assign_One_4rx_After_CA_Swap] 3. MIX4(master) <-> MIX3
