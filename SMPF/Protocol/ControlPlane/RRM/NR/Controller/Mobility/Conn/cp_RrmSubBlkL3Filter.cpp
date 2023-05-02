RrmSubBlkL3Filter::RrmSubBlkL3Filter()
RrmSubBlkL3Filter::~RrmSubBlkL3Filter()
RrmSubBlkL3Filter::Init() - MsgGrpId(%d)
RrmSubBlkL3Filter::ProcCellCriteria rsType:%s(%d) eFilterCellType:(enum)%d
::Fatal Error - Invalid Ptr!!! pFreqInfo(0x%x) pCellInfo(0x%x)
>>measObjId:%d rsType:%s(%d) - AbsThreshPresent:(bool)%d NroBlockAvgPresent:(bool)%d
>>filterCoefficient - RSRP:(enum)%d RSRQ:(enum)%d RSSINR:(enum)%d RSSI:(enum)%d)
>>Use default filterCoefficient ( not present )
>>dynamicFC_converted - RSRP:%d RSRQ:%d RSSINR:%d RSSI:%d)
::Set highest Rsrp Prev:%d[/100 dBm] New:%d[/100 dBm]
filterCoefficient - RSRP:(enum)%d RSRQ:(enum)%d RSSINR:(enum)%d RSSI:(enum)%d
Default filterCoefficient ( No index )
Default filterCoefficient ( not present )
>>dynamicFC_converted - RSRP:%d RSRQ:%d RSSINR:%d RSSI:%d)
TravelListedBeams:: pCellInfo == nullptr - try to find first SSB Cellinfo in next MO
TravelListedBeams:: ProcBeamCriteria(SSB) #%d loop complete
TravelListedBeams:: try to find next SSB Cellinfo
TravelListedBeams:: pCellInfo == nullptr - try to find first CSI-RS Cellinfo in next MO
TravelListedBeams:: ProcBeamCriteria(CSI-RS) #%d loop complete
TravelListedBeams:: try to find next CSI-RS Cellinfo
TravelListedCells:: pCellInfo == nullptr - try to find first Cellinfo in next MO
TravelListedCells:: ProcCellCriteria(RSTYPE_SSB) #%d complete
TravelListedCells:: try to find next SSB Cellinfo
TravelListedCells:: pCellInfo == nullptr - try to find first Cellinfo in next MO
TravelListedCells:: ProcCellCriteria(RSTYPE_CSIRS) #%d complete
TravelListedCells:: try to find next CSI-RS Cellinfo
RrmSubBlkL3Filter::UpdateL3FilterAllBeams
>> SCellFreq[%d,%d] First ObjectId(%d)
>> Please check Freq and MO
>> SCellFreq[%d,%d] Next ObjectId(%d)
>> TravelListedBeams for SCellFreq complete
>> UpdateL3FilterAllBeams SCellFreq - No SCell freq
>> pServCellGroupInfoNr is nullptr!!!
>> UpdateL3FilterAllBeams intra
>> TravelListedBeams for intra complete
>> Please check Freq and MO
>> No Intra freq
>> UpdateL3FilterAllBeams inter
>> Please check Freq and MO
>> TravelListedBeams for Inter complete
>> No Inter freq
RrmSubBlkL3Filter::UpdateL3FilterServingCell
RrmSubBlkL3Filter::UpdateL3FilterPCell
UpdateL3FilterPCell:: ProcBeamCriteria for Serv(SSB) complete
UpdateL3FilterPCell:: ProcCellCriteria for Serv(SSB) complete
UpdateL3FilterPCell:: ProcBeamCriteria for Serv(CSI-RS) complete
UpdateL3FilterPCell:: ProcCellCriteria for Serv(CSI-RS) complete
UpdateL3FilterPCell :: Please check MO
UpdateL3FilterPCell :: Please NULL check of pIntraFreqInfo & pServingCell
RrmSubBlkL3Filter::UpdateL3FilterSCell
UpdateL3FilterSCell:: ProcBeamCriteria for Serv(SSB) complete
UpdateL3FilterSCell:: ProcCellCriteria for Serv(SSB) complete
UpdateL3FilterSCell:: ProcBeamCriteria for Serv(CSI-RS) complete
UpdateL3FilterSCell:: ProcCellCriteria for Serv(CSI-RS) complete
UpdateL3FilterSCell :: Please check MO
UpdateL3FilterSCell :: Please NULL check of pSCellFreqInfo
UpdateL3FilterSCell :: Please NULL check of pServCellGroupInfoNr
RrmSubBlkL3Filter::UpdateL3FilterAllCells
UpdateL3FilterAllCells :: Please check SCellFreq and MO
UpdateL3FilterAllCells:: SCellFreq loop complete
UpdateL3FilterAllCells Inter - No SCell freq
UpdateL3FilterAllCells SCellFreq - No Master CellGroupInfo
UpdateL3FilterAllCells :: Please check Freq and MO
UpdateL3FilterAllCells intra - No Intra freq
UpdateL3FilterAllCells :: Please check Freq and MO
UpdateL3FilterAllCells:: InterFreq loop complete
UpdateL3FilterAllCells Inter - No Inter freq
RrmSubBlkConnEvalNr::UpdateIdDetectedCellSet - FreqType:%d[enum]
>>BEFORE UpdateIdDetectedCellSet
>>Please check Freq and MO
>>AFTER UpdateIdDetectedCellSet
>>intra - No Intra freq
>>BEFORE UpdateIdDetectedCellSet
>>Please check Freq and MO
>>AFTER UpdateIdDetectedCellSet
>>InterFreq loop complete
>>Inter - No Inter freq
>>BEFORE UpdateIdDetectedCellSet
>>Please check Freq and MO
>>AFTER UpdateIdDetectedCellSet
>>ScellFreq loop complete
>>Scell - No Scell freq
>>No Master CellGroupInfo
>>Invalid freq type:%d[enum]
TravelListedCellsEutra:: pCellInfo == nullptr - try to find first Cellinfo in next MO
TravelListedCellsEutra:: ProcCellCriteria #%d complete
TravelListedCellsEutra:: try to find next Cellinfo
RrmSubBlkL3Filter::ProcCellCriteriaEutra
ProcCellCriteria - GetCellMeasResultNrL3Filtered
::filterCoefficient updated for beam SSB_RSRP:(enum)%d, SSB_RSRQ:(enum)%d, SSB_RSSINR:(enum)%d, SSB_RSSI:(enum)%d)
::Use default filterCoefficient ( not present )
ProcCellCriteria - cellResult.isValid is ture
ProcCellCriteria - cellResult.isValid is false
TravelListedCellsUtra:: pCellInfo == nullptr - try to find first Cellinfo in next MO
ProcCellCriteriaUtra:: ProcCellCriteria #%d complete
TravelListedCellsUtra:: try to find next Cellinfo
RrmSubBlkL3Filter::ProcCellCriteriaUtra
ProcCellCriteria - GetCellMeasResultNrL3Filtered
::filterCoefficient updated for RSCP:(enum)%d, ECNO:(enum)%d
::Use default filterCoefficient ( not present )
ProcCellCriteria - cellResult.isValid is ture
ProcCellCriteria - cellResult.isValid is false
L3Filtered cell - UTRA Arfcn:%d CellId:%d Rscp:%d[/100dBm] EcNo:%d[/100dB] Rssi:%d[/100dB]
>>QuantityConfigIndex:%d but to apply array, value -1 MeasObjectId:%d
>>Error value of QuantityConfigIndex:%d forced set as 0 MeasObjectId:%d
