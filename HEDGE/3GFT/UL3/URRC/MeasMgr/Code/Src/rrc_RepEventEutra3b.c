[rrc_RepEventEutra3b_NotifyReport] Triggered
[rrc_RepEventEutra3b_NotifyReport] MeasInstId is NULL returned.
rrc_RepEventEutra3b::NotifyReport No Cell Reported in RepEventEutra3b_p Instance So RESET all Stored data.and Return
[rrc_RepEventEutra3b_NotifyReport] ERROR - EutraMeasurementQuantity is NULL - returning
[rrc_RepEventEutra3b_NotifyReport] No Event3C triggered so Event3B process will be skipped
rrc_RepEventEutra3b::NotifyReport - Event 3c is Not configured along with 3b..
[Measurement Quantity] is = RSRP
[ThresholdOtherSystem*100] is = %d dBm
[Measurement Quantity] is = RSRQ
[ThresholdOtherSystem*100] is = %d dB
[H_3b] is = %d
[NotifyReport] EutraMeasInd Earfcn(%d), CellId(%d), RSRP(%d), RSRQ(%d)
[rrc_RepEventEutra3b_NotifyReport] Event3C already triggered on CellId(%d) Earfcn(%d) so Event3B might be evaluated.
rrc_RepEventEutra3b::NotifyReport [NON FATAL ERROR] - NumTriggered > (Asn_maxNumEUTRAFreqs * MaxEutraCellsMeas).
[rrc_RepEventEutra3b_NotifyReport] Event3C NOT triggered on CellId(%d) Earfcn(%d) so Event3B won't be evaluated.
[rrc_RepEventEutra3b_NotifyReport] Eq1 satisfied [Earfcn: %d CellID: %d] [rsrp] LHS*100(%d) <= RHS*100(%d)
[rrc_RepEventEutra3b_NotifyReport] Eq1 satisfied [Earfcn: %d CellID: %d] [rsrq] LHS*100(%d) <= RHS*100(%d)
[TTT(%dms) Started] Earfcn(%d), CellId(%d)
[rrc_RepEventEutra3bNotifyReport] No of TTT exceeding 32. Needs extension
rrc_RepEventEutra3b::NotifyReport Dont Trigger Event 3b for the Earfcn(%d) Cell (%d) is not already triggerd for 3c.
[rrc_RepEventEutra3b_NotifyReport] Cell ID: %d Earfcn %d already present in TRIGGERED 3B EVENT
[rrc_RepEventEutra3b_NotifyReport] Dont Trigger Event 3b for the Cell ID: %d Earfcn %d is Barred.
[rrc_RepEventEutra3b_NotifyReport] Eq2 satisfied [Earfcn: %d CellID: %d] [rsrp] LHS*100(%d) > RHS*100(%d)
[rrc_RepEventEutra3b_NotifyReport] Eq2 satisfied [Earfcn: %d CellID: %d] [rsrq] LHS*100(%d) > RHS*100(%d)
[rrc_RepEventEutra3b_TimeToTriggerExpired] Triggering the Measurement Report Event 3B
[TTT CellResults] For Earfcn = %d
[TTT CellResults] For Cell = %d
[TTT CellResults] Updated rsrp = %d
[TTT CellResults] Updated rsrq = %d
[rrc_Class_RepEventEutra3b_SendMeasReport] MeasInstId is NULL returned.
[rrc_Class_RepEventEutra3b_SendMeasReport] ERROR - EutraMeasurementQuantity is NULL - returning
[rrc_RepEventEutra3b::SendMeasReport] ERROR - ReportTransferMode not valid [%i].
[FreqResults] For Earfcn = %d
[CellResults] For Cell = %d
[CellResults] Updated rsrp = %d
[CellResults] Updated rsrq = %d
[CellResults] For Earfcn = %d
[CellResults] For Cell = %d
[CellResults] Updated rsrp = %d
[CellResults] Updated rsrq = %d
[rrc_priv_RepEventEutra3b_getEvent3cRepInst] Event3C RepClientInst is 0x%X
