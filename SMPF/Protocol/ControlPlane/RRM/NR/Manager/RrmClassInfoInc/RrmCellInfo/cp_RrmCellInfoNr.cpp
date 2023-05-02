RrmCellInfoNr::RrmCellInfoNr()
RrmCellInfoNr::~RrmCellInfoNr() - CellId:%d MeasObjectId:%d
RrmCellInfoNr::InitAllExceptNwParam - RsType:%s(%d)
SetSsbTimingOffset Cell[%d,%d] - Invalid RsIndex:%d maxNrOfRsIndex:%d
RrmCellInfoNr::SetSsbTimingOffsetArray
RrmCellInfoNr::SetCellCorrEnergy from (%d) to (%d)
RrmCellInfoNr::InitSsbTimingOffset
UpdateSsbTimingOffset - NumSsbTimingOffset:%d SsbIndex:%d, (enum)SsbPeriod %d NumHF:%d
>>Invalid NumSsbTimingOffset:%d
>>[%d]:%d - IGNORE TimingOffset of BLIND DETECTION RESULT
>>Invalid SsbIndex:%d
UPDATED CELL SsbTimingOffset
GetAbsoluteTimingOffsetDelta - SsbTimingOffset:%d m_SsbTimingOffsetArray[%d]:%d ssbSampleMax:%d AbsTmOffDlt:%d
FindHfiUsingTimingOffset - NumHF:%d TimingOffset:%d TimingOffsetArray[%d]:%d SampleMax:%d SamplePeriod:(enum)%d
FindSsbUsingTimingOffset - SsbTimingOffset:%d diff:%d m_SsbTimingOffsetArray[%d]:%d ssbSampleMax:%d
UpdateSsbTimingOffsetDelta - CellId:%d SsbTimingOffset:%d SsbPeriod:(enum)%d eCause:(enum)%d
>>SelectedDiffMax(%d) target_delta(%d)
>>INVALID - Difference:%d exceed SelectedDiffMax:%d
>>UPDATED CELL SsbTimingOffset - NumHF:%d difference:%d and SsbSampleMax:%d(SsbPeriod:(enum)%d numSsbTimingOffset:%d)
UpdateSsbTimingOffsetAfterCdrx - CellId:%d SsbTimingOffsetDiff:%d SsbPeriod:(enum)%d numSsbIndex:%d
>>UPDATED CELL m_SsbTimingOffset:%d
>>UPDATED CELL SsbTimingOffset
DeriveSsbIndex - fromCell(ARFCN:%d PCID:%d) using SsbTimingOffset:%d Tolerence:%d, (enum)Periodic %d
>>INVALID - Difference:%d exceed Tolerence:%d
>>[0]:%-9d [1]:%-9d [2]:%-9d [3]:%-9d
>>[4]:%-9d [5]:%-9d [6]:%-9d [7]:%-9d
>>[8]:%-9d [9]:%-9d [10]:%-9d [11]:%-9d [12]:%-9d [13]:%-9d [14]:%-9d
>>[15]:%-9d [16]:%-9d [17]:%-9d [18]:%-9d [19]:%-9d [20]:%-9d [21]:%-9d
>>[22]:%-9d [23]:%-9d [24]:%-9d [25]:%-9d [26]:%-9d [27]:%-9d [28]:%-9d
>>[29]:%-9d [30]:%-9d [31]:%-9d [32]:%-9d [33]:%-9d [34]:%-9d [35]:%-9d
>>[36]:%-9d [37]:%-9d [38]:%-9d [39]:%-9d [40]:%-9d [41]:%-9d [42]:%-9d
>>[43]:%-9d [44]:%-9d [45]:%-9d [46]:%-9d [47]:%-9d [48]:%-9d [49]:%-9d
>>[50]:%-9d [51]:%-9d [52]:%-9d [53]:%-9d [54]:%-9d [55]:%-9d [56]:%-9d
>>[57]:%-9d [58]:%-9d [59]:%-9d [60]:%-9d [61]:%-9d [62]:%-9d [63]:%-9d
PrintfSsbTimingOffset - Arfcn:%d CellId:%d m_SsbRsIndex:%d m_SsbTimingOffset:%d
>>Unexpected TargetSubCarrierSpacing:%d(enum) Set DefaultCpLength
GetCpLength - SCS:%d(enum), SelectedCpLength:%d
RrmCellInfoNr::SetRxBeamIndex from:%d to:%d
>>Delete m_SibCellInfo.pNeighCellInfo:0x%08x
>>Delete m_SibCellInfo.pTreselCount:0x%08x
RrmCellInfoNr::SetSibNeighCellInfo - Arfcn:%d CellId:%d
OLD SibNeighCellInfo
>>pNeighCellInfo is allocated - ptr:0x%08x
NEW SibNeighCellInfo
>>pTreselCount is allocated - ptr:0x%08x
>>QoffsetCell:%d QrxLevMinOffsetCell:%d QrxLevMinOffsetCellSULPresent:(bool)%d QrxLevMinOffsetCellSUL:%d QqualMinOffsetCell:%d
RrmCellInfoNr::DeleteCsiRsCellInfo - free m_pCsiRsCellInfo(0x%x)
RrmCellInfoNr::DeleteCsiRsCellInfo - m_pCsiRsCellInfo(0x%x) freed!!!
RrmCellInfoNr::GetCsiRsCellInfo - m_pCsiRsCellInfo is NULL!
RrmCellInfoNr::UpdateCsiRsCellInfo - fail to alloc m_pCsiRsCellInfo
>>Mismatching m_CellId:%d rSsbMeasResult.CellId:%d
SsbMeasResult.TimingOffset
Update SsbTimingOffset - NumSsbIndex:%d bUpdateTO:(bool)%d
IGNORE MeasResult of BLIND DETECTION RESULT
>>Invalid rSsbMeasResult.SsbIndex[0]:%d maxNrOfRsIndex:%d
>>Invalid NumSsbIndex:%d maxNrOfRsIndex:%d
RrmCellInfoNr::StoreSsbMeasResult - Arfcn:%d CellId:%d NumSsbIndex:%d bUpdateL3beam:(bool)%d bUpdateL3cell:(bool)%d SsbBitmap:0x%08x %08x
