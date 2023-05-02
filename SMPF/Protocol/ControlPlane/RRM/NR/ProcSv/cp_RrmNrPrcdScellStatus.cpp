RrmNrPrcdScellStatus::PreHdlr
RrmServCellGroupInfoNr::CheckSCellActDeactType - ScellIdx(%d) SCellBitMask_Current(0x%x) SCellBitmask_New(0x%x)
>>RRM_SCELL_STATUS_TYPE_NOCHANGE
>>RRM_SCELL_STATUS_TYPE_ACT
>>RRM_SCELL_STATUS_TYPE_DEACT
>>Error!!!! RRM_SCELL_STATUS_TYPE_UNKNOWN
RrmNrPrcdScellStatus::EncodeSCellSetInd
RrmNrPrcdScellStatus::EncodeSCellSetInd - Error!!! there are no ServCellGroupInfoNr for MasterCellGroup
>>ScellIdx[%d] Configuration Not Changed from previous! Do not include this SCell Info!!
>>ScellIdx[%d] Configuration Unknown!!
>>ScellIdx[%d] Configuration Not Found from SCell List
>>Scell(Arfcn %d, SCS %d) is not found from SCellFreqList
>> FatalError: PCellFreqPtr is NULL!!!
>>Scell(Arfcn %d, SCS %d) is not found from SCellFreqList
>>ScellIdx(%d) info set to ScellInfoList[%d]
::ScellInfoList[%d] ScellIndex(%d) act_deact(%d) SsbIndex(%d)
::RxBeamIdx(%d) TimingOffset(%d -> 0x%x) target_slot(%d) AgcGain[0](%d) AgcGain[1](%d)
>>numOfScellInfoList(%d)
>>Crnti %d(0x%x)
>>SCellActivationSlot(0x%xX)
RrmNrPrcdScellStatus::RRM_L2_SCELL_STATUS_IND_Hdlr
>> Command Type %d (0: MAC-CE Cmd, 1:sCellDeactivationTimer Expiry)
>>Error!!! there are no ServCellGroupInfoNr for MasterCellGroup
>>CurrentSCellStatus(%d) is same as received SCellActivationCMD(%d), So Nothing to do update for L1C!
>>pScellStatusInd->Msg.NR.numOfScellInfoList is %d, so do not send L1C_RRM_SCELL_STATUS_IND!
>>This case should be check why L2 MAC-CE command is un-synchronized with RRC Confugured SCell Info!!!!!
>>L1C_RRM_SCELL_STATUS_IND being sent to L1C!!!!!
>>Received SCellDeactivationId is invalid (%d) !
>>RecvMsg.SCellDeactivationID(%d), SCellActivationStatus_Current(0x%x)
>>RecvMsg.SCellActivationCMD set to 0x%x
>>pScellStatusInd->Msg.NR.numOfScellInfoList is %d, so do not send L1C_RRM_SCELL_STATUS_IND!
>>This case should be check why L2 MAC-CE command is un-synchronized with RRC Confugured SCell Info!!!!!
>>L1C_RRM_SCELL_STATUS_IND being sent to L1C!!!!!
>> Error! Unknown Command Type %d
RrmNrPrcdScellStatus::RRM_L2_SCELL_STATUS_IND_UsrHandler
>>m_L1C_RRM_SCELL_STATUS_IND_sent is TRUE, so return 0
>>m_L1C_RRM_SCELL_STATUS_IND_sent is FALSE, so return 1
