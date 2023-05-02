RrmMngrSetUpdateNr::RrmMngrSetUpdate
RrmServCellGroupInfoNr::~RrmServCellGroupInfoNr
>>m_SCell_vt.size:%d
>>m_SCellFreq_vt.size:%d
RrmServCellGroupInfoNr::Init
RrmServCellGroupInfoNr::Init - Current size of m_SCell_vt is %d
RrmServCellGroupInfoNr::Init - Current size of m_SCellFreq_vt is %d
RrmServCellGroupInfoNr::Init - ServCellGroupInfoNr Destroy Done
RrmServCellGroupInfoNr::Init - Current size of m_SCell_vt is %d
RrmServCellGroupInfoNr::Init - Current size of m_SCellFreq_vt is %d
RrmServCellGroupInfoNr::SetPCellClsPtr - PCell set to SsbAbsFreq(%d) SubCarrierSpacing(%d), PhyCellId(%d)
RrmServCellGroupInfoNr::SetCellGroupId - CellGroupId set to %d
RrmServCellGroupInfoNr::SetPCellFreqPtr - m_PCellFreq set to SsbAbsFreq(%d) SubCarrierSpacing(%d)
RrmServCellGroupInfoNr::ShowMeTheSCellList
>> Current size of m_Scell_vt is %d
>> ScellIdx(%d) SsbAbsFreq(%d) SCS(%d)
>> m_Scell_vt is empty(%d)
RrmServCellGroupInfoNr::ShowMeTheSCellFreqList
>> Current size of m_SCellFreq_vt is %d
>> SsbAbsFreq(%d) SCS(%d)
>> m_ScellFrq_vt is empty(%d)
RrmServCellGroupInfoNr::SetCurrentSCellConfigStatus
>> Currrent m_SCellStatusBitMask (0x%x)
>> For SCellIdx(%d) Status Update Cmd(%d)
>> eSCellConfigStatusType is Unknown(%d)
>> After SCellConfigStatus Update, m_SCellConfigBitMask(0x%x)
RrmServCellGroupInfoNr::SetCurrentSCellStatus
>> Currrent m_SCellStatusBitMask (0x%x)
>> For SCellIdx(%d) Status Update Cmd(%d)
>> eSCellStatusType is Unknown(%d)
>> After SCellStatus Update, m_SCellStatusBitMask(0x%x)
>> SCell(scellidx %d, Arfcn %d, SCS %d, PhyCellId %d) status set to %d
>> SCellInfo not found for SCellIdx(%d)
>> m_SCellStatusBitMask(0x%x)
RrmServCellGroupInfoNr::UpdateSCellMO
>> Fatal Error!!! pSCellFreqInfo:0x%08x or pSCellInfo:0x%08x is nullptr
>> received ScellConfigToAdd is NULL, just return!!!!
>>SCell MO set as ServingCellMO %d
>>SCell MO set as (%d) Temporaly => TEMP_MEAS_OBJECT_ID(%d) + SCellIdx(%d)
>> received ScellConfigToAdd include SMTC for SCell!!!!
>>SCell MeasObject(%d) is already exist
>>ServCellFreq ServingPeriod:%d Smtc1 MeasCycle:%d SrchCycle:%d MeasRequriement:%d SrchRequirement:%d
RrmServCellGroupInfoNr::UpdateScellInfo
>>SCellBitmask_Current(0x%x) SCellBitmask_New(0x%x)
>>AddModSCellBitmask(0x%x) ReleaseSCellBitmask(0x%x)
>>Delta found for bitShift(%d)
>>eSCellConfigType(%d) for bitShift(%d)
>> SCellFreq(SsbFreq %d, SCS %d) Move Completed!
>> : ServingCellMO(%d), SCellMO(%d)
>> : FreqInfo->FirstMeasObjectId(%d)
>> SCellFreq(Arfcn %d, Scs %d) MeasObjectId(%d)
>>FatalError : Cannot add SCellInfoNr(bitShift %d) to SCell List!!!!
>>ScellToAddModList->ScellToAddMod[%d] is NULL
>> Nothing to be done for Config Type of SCELL_CONFIG_TYPE_MODIFY(Only for changes of Dedicated Config)
>> Unknown eSCellConfigType %d, Nothing To Do !!!
RrmServCellGroupInfoNr::CheckSCellConfigType - bitShift(%d) SCellBitMask_Current(%d) SCellBitmask_New(%d)
>> bitShift(%d) SCELL_CONFIG_TYPE_CONFIG
>> bitShift(%d) SCELL_CONFIG_TYPE_RELEASE
>> bitShift(%d) SCELL_CONFIG_TYPE_MODIFY
>> bitShift(%d) SCELL_CONFIG_TYPE_NONE
RrmServCellGroupInfoNr::isSameSCellInfo
>> pCurrSCellInfo is NULL(0x%x)! return FALSE!!!!
>> Received ScellConfigToAdd is NULL(0x%x), return TRUE!!!!
>> ScellIndex is different! Curr:%d New:%d
RrmServCellGroupInfoNr::AddSCellInfo
>> received ScellConfigToAdd is NULL, just return!!!!
>> ScellConfigPresentBitmask(0x%x) present if same ScellIndex(%d) is already exist, remove old one first!
>> Same SCell is already configured!
>> Remove Same SCell Info if it is already configured and has different setting!
>> ScellConfigToAdd->ScellConfigPresentBitmask is not present, return!
>> pNewSCellInfo alloc failure!!!
>> Added SCell Info : ServCellType_e(%d) SCellIndex(%d)
>> Added SCell Info : SsbAbsFreq(%d) SubCarrierSpacing(%d)
>> Added SCell Info : PhyCellId(%d) MeasObjectId(%d)
>> Added SCell Info : Current size of m_Scell_vt is %d
RrmServCellGroupInfoNr::AddSCellFreqInfo
>> SsbAbsFreq (%d), SubCarrierSpacing (%d) Frequency Added to SCellFreqInfo List
>> SsbAbsFreq (%d), SubCarrierSpacing (%d) Frequency already exist in the SCellFreqInfo List. So keep it and reuse it.
RrmServCellGroupInfoNr::AddSCellFreqInfo
>> received pScellConfig is NULL!!!
>> pNewSCellFreqInfo alloc failure!!!
>>SCELL_CONFIG_COMMON_MASK(0x%08x %08x) ScellConfigPresentBitmask(0x%08x %08x)
>>DOWNLINK_CONFIG_COMMON_MASK(0x%08x %08x) ServingCellConfigCommonPresentBitmask(0x%08x %08x)
>>ABSOLUTE_FREQUENCY_SSB_MASK(0x%08x %08x) FrequencyInfoDlPresentBitmask(0x%08x %08x)
>> Arfcn(%d), SsbAbsFreq(%d)
>> absoluteFrequencySsb(Optional) IE is absent! Do Not Make Frequency for this SCell !!!
>>FREQUENCY_BAND_LIST_MASK(0x%08x %08x) FrequencyInfoDlPresentBitmask(0x%08x %08x)
>> BandId(%d), SubCarrierSpacing(%d)
>>SCS_SPECIFIC_CARRIER_LIST_MASK(0x%08x %08x) FrequencyInfoDlPresentBitmask(0x%08x %08x)
>> ScsSpecificCarrier(%d)
>>SSBSUBCARRIER_SPACING_MASK(0x%08x %08x) ServingCellConfigCommonPresentBitmask(0x%08x %08x)
>> ssbSubcarrierSpacing(%d)
>>SSB_PERIODICITY_SERVINGCELL_MASK(0x%08x %08x) ServingCellConfigCommonPresentBitmask(0x%08x %08x)
>> SsbAbsFreq (%d), SubCarrierSpacing (%d) Frequency Added to SCellFreqInfo List
>> SsbAbsFreq (%d), SubCarrierSpacing (%d) Frequency already exist. Destroy it and Add new one!
RrmServCellGroupInfoNr::ReleaseSCellInfo
>> received ScellToReleaseList is NULL, just return!!!
>>ScellToReleaseList->ScellToRelease[%d].isValid(%d) ScellIndex(%d) physCellId(%d)!!!
>> Same ScellFreq(SsbAbsFreq %d, SCS %d) Found! Remove it from m_SCellFreq_vt!
>> Removed ScellInfo(ScellIndex %d) Info from m_SCell_vt!
>>ScellToReleaseList->ScellToRelease[%d].isValid(%d) is invalid!!!
RrmServCellGroupInfoNr::isSameFreqCellExist - Same Frequency Cell exist at m_Scell_vt(SCellIdx %d)
RrmServCellGroupInfoNr::isSameFreqCellExist - Same Frequency exist at m_ScellFreq_vt
RrmServCellGroupInfoNr::RemoveSCellInfo - ScellIdx(%d)
>> Remove SCell Info : ServCellType_e(%d) SCellIndex(%d)
>> SsbAbsFreq(%d) SubCarrierSpacing(%d)
>> PhyCellId(%d) MeasObjectId(%d)
>> Current size of m_Scell_vt is %d
RrmServCellGroupInfoNr::GetSCellFreqInfo - SsbFreq(%d) SubcarrierSpacing(%d) is foud at m_SCellFreq_vt
RrmServCellGroupInfoNr::GetNextSCellPtr -can't find the next cell of this SCell(band : %d, arfcn : %d, SubCarrierSpacing %d)
RrmServCellGroupInfoNr::GetFirstSCellPtr - SCell Found at Same Frequency! SCellIdx %d SsbAbsFreq %d SCS %d PhyCellId %d
RrmServCellGroupInfoNr::GetNextSCellFreqPtr -can't find the next freq of this SCellFreq(band : %d, arfcn : %d, SubCarrierSpacing %d)
RrmServCellGroupInfoNr::GetSCellInfo - ScellIdx(%d) is found at m_Scell_vt
RrmServCellGroupInfoNr::UpdateMeasCycle
>> ScellIdx[%d] Configuration Not Found from SCell List
>> ActivationCmd for ScellIdx[%d] is eSCellStatusType(%d)
>> ActivationCmd for ScellIdx[%d] is RRM_SCELL_STATUS_TYPE_ACT, update MeasSchedule for this freq as activated SCell requirement
>> SsbAbsFrequency[%d] SubCarrierSpacing[%d] Not Found from SCellFreqList !!!
>> DeActivationCmd for ScellIdx[%d] is RRM_SCELL_STATUS_TYPE_DEACT, update MeasSchedule for this freq as Deactivated SCell requirement
>> SsbAbsFrequency[%d] SubCarrierSpacing[%d] Not Found from SCellFreqList !!!
>> Configuration keeped same as before
RrmServCellGroupInfoNr::CheckSCellActDeactType - ScellIdx(%d) SCellBitMask_Current(%d) SCellBitmask_New(%d)
RrmServCellGroupInfoNr::CheckSCellActDeactType - ScellIdx(%d) RRM_SCELL_STATUS_TYPE_ACT
RrmServCellGroupInfoNr::CheckSCellActDeactType - ScellIdx(%d) RRM_SCELL_STATUS_TYPE_DEACT
RrmServCellGroupInfoNr::CheckSCellActDeactType - ScellIdx(%d) RRM_SCELL_STATUS_TYPE_UNKNOWN
RrmServCellGroupInfoNr::UpdateSCellActDeactStatus
RrmServCellGroupInfoNr::RemoveSCellFreqInfo - Current size of m_SCellFreq_vt is %d
