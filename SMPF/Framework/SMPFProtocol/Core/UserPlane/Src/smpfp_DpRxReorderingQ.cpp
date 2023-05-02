
RxReorderingQ :: GetInsertPoint() is called
(SN : %d, FI : %d, SO : %d, LSF : %d, Payload : %P)
Fail! Last sdu has not inputed yet!
Fail! Duplicated data is received!
RxReorderingQ :: InsertSdu() is called(LI:%d)
Fail! GetInsertPoint function has not called yet!

RxReorderingQ :: Reassemble(%d) is called

RxReorderingQ :: ReassembleAll() is called

RxReorderingQ :: GetReassembledSdu() is called
RxReorderingQ :: GetReassembledSdu() :: Fail to reassemble sdus.
RxReorderingQ :: GetReassembledSdu() :: Fail to reassemble sdus. Incomplete sdus are released.
RxReorderingQ :: GetReassembledSdu() :: A pdu of upper layer is made of sdus<%P>.

| Reordering Q |
| |
| |
|----------------------------|
| SN:INF EO:INF |
| SN:%-5dEO:INF |
| SN:%-5dEO:%-5d |
| NACK <%P> | [N]
| SN:%-5dSO:%-5d | <---- NackTable<%d>
| SN:%-5dSO:%-5d | <---- NackTable<%d, NearestFront>
| SN:%-5dSO:%-5d |
|----------------------------|
| first, last |
| first |
| last |
| |
| SDU <%P> |
| Len:%-4dSN:%-5d | <---- NackTable<%d>
| Len:%-4dSN:%-5d |
|----------------------------|
| |
| |


| Original Q |
| |
| Queue is empty! |
| |

| |
|--------------------|
| PDU <%P> |
| Length : %-4d |
|--------------------|
| |
| |


| Reassemble Q |
| |
| Queue is empty! |
| |
| |
| |
|--------------------|
| UpperLayer PDU |
| Length : %-4d |
|--------------------|
| |
| |

