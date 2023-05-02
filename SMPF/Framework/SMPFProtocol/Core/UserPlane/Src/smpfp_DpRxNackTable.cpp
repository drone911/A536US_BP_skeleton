RxNackTable :: ChangeNackPointer<All> ==> %P
RxNackTable :: ChangeNackPointer<SN:%d> %P => %P
RxNackTable :: ChangeNackPointer<SN:%d-%d> ==> %P
