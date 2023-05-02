RrmSubBlkEventA6::RrmSubBlkEventA6()
RrmSubBlkEventA6::~RrmSubBlkEventA6()
NULL ptr
RrmSubBlkEventA6::NrRrm_CheckNeighborCellEventTriggerA6::MeasID(%d)
After::CheckNeighborCellEventTriggerA6::NR_RRM_EVENT_NONE::EventStatus(%d) invalid_MeasuredResult_NCellID(%d) invalid_MeasuredResult_ACellID(%d)-::_eval_
>> NRRRCDB_EventId_A6 - UseWhiteCellList is (%d), Checking WhiteCellList::_eval_
>> NRRRCDB_EventId_A6 - NCell-PhyCellId(%d) is WhiteListedCell::_eval_
>> NRRRCDB_EventId_A6 - NCell-PhyCellId(%d) is not WhiteListedCell::_eval_
>> NRRRCDB_EventId_A6 - UseWhiteCellList is (%d), Checking BlackCellList::_eval_
>> NRRRCDB_EventId_A6 - NCell-PhyCellId(%d) is BlackListedCell::_eval_
>> NRRRCDB_EventId_A6 - NCell-PhyCellId(%d) is not BlackListedCell::_eval_
:: NRRRCDB_EventId_A6 - NR_RRM_EVENT_ENTER
:: EvalEq - Neighbor %d(= Mn(%d) + Ocn(%d) - Hys/2(%d)) > SCell %d(= Mp(%d) + Ocs(%d) + Off/2(%d))::_eval_
:: NRRRCDB_EventId_A6 - NR_RRM_EVENT_LEAVE
:: EvalEq - Neighbor %d(= Mn(%d) + Ocn(%d) + Hys/2(%d)) < SCell %d(= Mp(%d) + Ocs(%d) + Off/2(%d))::_eval_
:: NRRRCDB_EventId_A6 - NR_RRM_EVENT_STAY
:: EvalEq - Neighbor %d(= Mn(%d) + Ocn(%d) - Hys/2(%d)) > SCell %d(= Mp(%d) + Ocs(%d) + Off/2(%d))::_eval_
:: EvalEq - Neighbor %d(= Mn(%d) + Ocn(%d) + Hys/2(%d)) < SCell %d(= Mp(%d) + Ocs(%d) + Off/2(%d))::_eval_
>>%s - Mn:%d Ocn:%d Hys:%d - Neighb(Arfcn:%d Pcid:%d)
>>%s - Ms:%d Ocs:%d Off:%d - SCell(Arfcn:%d Pcid:%d)
>>entering(Mn+Ocn-Hys=(%d)>(%d)=Ms+Ocs+Off) / leaving(Mn+Ocn+Hys=(%d)<(%d)=Ms+Ocs+Off) / staying(else)
