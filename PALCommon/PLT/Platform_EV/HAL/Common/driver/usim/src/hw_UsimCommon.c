[T0:UTIL] Data block = %d , recieve Buffer
[T0_ST_%d:XCVR] *** Malloc failed ***
[T0_ST_%d:XCVR] Rx data Copy finished
[T0_ST_%d:XCVR] *** Default RX buffer is NULL ***
Invalid Request to set WWT for stack %d, value %d
WWT for stack %d is set to %d
[T1_ST_%d:UTIL] Preferred Protocol = %d , Protocol From ATR = %d
[T1_ST_%d:UTIL] Invalid info in AvailableProtoFrmATR = %d
[T1_ST_%d:UTIL] Active protocol = %d
Set USIM wakelock = %d , context = %d
Clock Stop mode enabled....Clock Start !!!
UICC_TX_RX... Clock start Failed - One more try
CR0 = 0x%X, CR1 = 0x%X, CR2 = 0x%X, RIS = 0x%X, MIS = 0x%X, ITIP = 0x%X, FIFOSTATUS = 0x%X
ITIP = 0x%X
drv_UsimHwContext..UsimChtimeoutCount=0x%X,UsimNoResponseCount=0x%X,UsimOverrunCount=0x%X
UsimRxParityErrorCount=0x%X, UsimClockStopErrorCount=0x%X, UsimClockStartErrorCount=0x%X
bClockStopped = FALSE
CR0 = 0x%X, CR1 = 0x%X, CR2 = 0x%X, RIS = 0x%X, MIS = 0x%X, ITIP = 0x%X, FIFOSTATUS = 0x%X
pal_DrvSimClockStopSet... Clock stop Failed - One more try
CR0 = 0x%X, CR1 = 0x%X, CR2 = 0x%X, RIS = 0x%X, MIS = 0x%X, ITIP = 0x%X, FIFOSTATUS = 0x%X
pal_DrvSimClockStopSet... Clock stop Failed !!
CR0 = 0x%X, CR1 = 0x%X, CR2 = 0x%X, RIS = 0x%X, MIS = 0x%X, ITIP = 0x%X, FIFOSTATUS = 0x%X
pal_DrvSimClockStopSet...no clock stopping
Clock Stop mode enabled....Clock Stop !!!
Already Clock stopped.skip..pal_DrvSimClockStopSet
*** USIM retention at pal_DrvSimClockStopSet
External request to change WWT after sleep
External request to change WWT
External request to change WWT after sleep
External request to change WWT
** Parity error at TS byte
== USIM_ATR_INVERSE_CONV ==
Receive 0x3B twice..skip
ATR Parity error ...UsimRxReceivedBytes = 0x%X, RxByte = 0x%X
Extra bytes received during ATR ...UsimRxReceivedBytes = 0x%X ...UsimRxExpectedBytes = 0x%X
Number of bytes received >= USIM_DRV_MAX_ATR ...UsimRxReceivedBytes = 0x%X
Calculate PPS : Fi = %d, Di = %d,FDratio = %d
Protocol type %d
ProcessATR...ATR_T0_TA3 = 0x%X
** UsimClockStopState = 0x%X
Invalid protocol type %d
*** ATRExtractInfo() ATR length = 0x%X ***
Pref Protocol not valid, Default Protocol T=0 applied
TC1...GUARDTIME ADDED = %d
TD(1) == 15 not allowed %d
TD(1) Protocol= %d
<< PPS = 0x%X >>
ProcessATR...usePPS = FALSE
>>> Change F/D = %d
>>> Invalid TA1 value.. no Change speed
>>> Invalid protocol value=0x%X
##Error Expected = 0x%X < Received = 0x%X in drv_USIMSetRxTide
Block response
SCIBLKTIMEMS = 0x%X, SCIBLKTIMELS = 0x%X
PPSTA1 = 0x%X, PPSTC2 = 0x%X, iSCIBAUD = 0x%X, SCICLKICC = 0x%X, SCIVALUE = 0x%X
CR0 = 0x%X, CR1 = 0x%X, CR2 = 0x%X, RIS = 0x%X, MIS = 0x%X, ITIP = 0x%X, FIFOSTATUS = 0x%X
Rxbuffer = 0x%X, ITIP = 0x%X, pData->NoOfBytesTrasmitted = 0x%X,pData->NoOfRxBytes = 0x%X
DRV_IS_NO_SIM - SCICARDININTR..CR0 = 0x%X,CR1 = 0x%X,CR2 = 0x%X,RIS = 0x%X,MIS = 0x%X,ITIP = 0x%X,FIFOSTATUS = 0x%X
Rxbuffer = 0x%X,ITIP = 0x%X
DRV_IS_NO_SIM - SCICARDOUTINTR
DRV_IS_NO_SIM - SCICARDUPINTR..CR0 = 0x%X,CR1 = 0x%X,CR2 = 0x%X,RIS = 0x%X,MIS = 0x%X,ITIP = 0x%X,FIFOSTATUS = 0x%X
Rxbuffer = 0x%X,ITIP = 0x%X
DRV_IS_NO_SIM - Deactivation completed !!
DRV_IS_NO_SIM - Overrun Error
DRV_IS_NO_SIM - SCIRXTIDEINTR
+++ RxTideCount > 10 , it maybe Card Damaged!!..go to Unknown state
Abnormal INTR = 0x%X in the DRV_IS_NO_SIM
RIS = 0x%X,MIS = 0x%X
DRV_IS_WAIT_FOR_ATR - SCIRXTIDEINTR..CR0 = 0x%X,CR1 = 0x%X,CR2 = 0x%X,RIS = 0x%X,MIS = 0x%X,ITIP = 0x%X,FIFOSTATUS = 0x%X
ITIP = 0x%X
ATR Sequence not finished after 0x%X tries
DRV_IS_WAIT_FOR_ATR - SCIATRDTOUTINTR
DRV_IS_WAIT_FOR_ATR - SCIATRSTOUTINTR..CR0 = 0x%X,CR1 = 0x%X,CR2 = 0x%X,RIS = 0x%X,MIS = 0x%X,ITIP = 0x%X,FIFOSTATUS = 0x%X
Rxbuffer = 0x%X,ITIP = 0x%X
DRV_IS_WAIT_FOR_ATR - SCICARDOUTINTR
DRV_IS_WAIT_FOR_ATR - SCICARDDNINTR
DRV_IS_WAIT_FOR_ATR - SCICHTOUTINTR
NoOfRxBytes=%d,NoOfBytesExpected=%d
DRV_IS_WAIT_FOR_ATR - Overrun Error
Abnormal INTR = 0x%X in the DRV_IS_WAIT_FOR_ATR
DRV_IS_PPS - SCITXTIDEINTR
DRV_IS_PPS - SCIRXTIDEINTR
DRV_IS_PPS - SCITXERRINTR
DRV_IS_PPS - SCICHTOUTINTR
NoOfRxBytes=%d,NoOfBytesExpected=%d
DRV_IS_PPS ... SCIBLKTOUTINTR
DRV_IS_PPS - Overrun Error
Abnormal INTR = 0x%X in the DRV_IS_PPS
Abnormal INTR = 0x%X in the DRV_IS_UNKNOWN
CR0 = 0x%X, CR1 = 0x%X, CR2 = 0x%X, RIS = 0x%X, MIS = 0x%X, ITIP = 0x%X, FIFOSTATUS = 0x%X
Disable abnormal interrupt and request cold reset !!!
CR0 = 0x%X, CR1 = 0x%X, CR2 = 0x%X, RIS = 0x%X, MIS = 0x%X, ITIP = 0x%X, FIFOSTATUS = 0x%X
drv_UsimHwEvt_Unknown: pData is NULL for event[%d], just return
Abnormal INTR = 0x%X in the DRV_IS_IDLE
drv_UsimSWEvt_Err ************** ERROR OCCURED **************
drv_UsimStatus...UsimChtimeoutCount=0x%X,UsimNoResponseCount=0x%X,UsimOverrunCount=0x%X
UsimRxParityErrorCount=0x%X, UsimClockStopErrorCount=0x%X, UsimClockStartErrorCount=0x%X
drv_UsimSWEvt_CardNotFound - USIM_DRV_CARD_NOT_FOUND
drv_UsimStatus...UsimChtimeoutCount=0x%X,UsimNoResponseCount=0x%X,UsimOverrunCount=0x%X
UsimRxParityErrorCount=0x%X, UsimClockStopErrorCount=0x%X, UsimClockStartErrorCount=0x%X
drv_UsimSWEvt_CHTimeOut - USIM_CHTIMEOUT_OCCURED
drv_UsimStatus...UsimChtimeoutCount=0x%X,UsimNoResponseCount=0x%X,UsimOverrunCount=0x%X
UsimRxParityErrorCount=0x%X, UsimClockStopErrorCount=0x%X, UsimClockStartErrorCount=0x%X
drv_UsimSWEvt_NoResponse - USIM_NORESPONSE_OCCURED
ERROR DeviceId == 0x0
drv_UsimStatus...UsimChtimeoutCount=0x%X,UsimNoResponseCount=0x%X,UsimOverrunCount=0x%X
UsimRxParityErrorCount=0x%X, UsimClockStopErrorCount=0x%X, UsimClockStartErrorCount=0x%X
drv_UsimSWEvt_Unknown - USIM_UNKNOWN_OCCURED
drv_UsimHwContext..UsimChtimeoutCount=0x%X,UsimNoResponseCount=0x%X,UsimOverrunCount=0x%X
UsimRxParityErrorCount=0x%X, UsimClockStopErrorCount=0x%X, UsimClockStartErrorCount=0x%X
drv_UsimSWEvt_PPSTimeOut - USIM_PPSTIMEOUT_OCCURED
ERROR DeviceId == 0x0
drv_UsimStatus...UsimChtimeoutCount=0x%X,UsimNoResponseCount=0x%X,UsimOverrunCount=0x%X
UsimRxParityErrorCount=0x%X, UsimClockStopErrorCount=0x%X, UsimClockStartErrorCount=0x%X
drv_UsimSWEvt_CardRemoved - USIM_DRV_CARD_REMOVED
drv_UsimStatus...UsimChtimeoutCount=0x%X,UsimNoResponseCount=0x%X,UsimOverrunCount=0x%X
UsimRxParityErrorCount=0x%X, UsimClockStopErrorCount=0x%X, UsimClockStartErrorCount=0x%X
drv_UsimSWEventHandler: pData is NULL for event[%d], just return
drv_UsimHISR_EventHandler - USIM_DRV_HISR_EVENT_NULL
Inside drv_UsimActivate
drv_UsimActivate... CR0 = 0x%X,CR1 = 0x%X,CR2 = 0x%X,RIS = 0x%X,MIS = 0x%X,ITIP = 0x%X,FIFOSTATUS = 0x%X
Leaving drv_UsimActivate
Inside drv_UsimDeActivate
drv_UsimDeActivate... CR0 = 0x%X,CR1 = 0x%X,CR2 = 0x%X,RIS = 0x%X,MIS = 0x%X,ITIP = 0x%X,FIFOSTATUS = 0x%X
Rxbuffer = 0x%X,ITIP = 0x%X
DeactivateStatus = FALSE !!! one more try - drv_UsimDeActivate
DeactivateStatus = FALSE !!! Fail just change status - drv_UsimDeActivate
Leaving drv_UsimDeActivate
Inside drv_UsimWarmReset
Leaving drv_UsimWarmReset
***Request is already completed***
Inside pal_drv_UsimDrvConstructor
[USIM] Failed to get context of USIM to be used
[USIM] Failed to pal_TaskCreateHisr for hUSIM
Leaving pal_drv_UsimDrvConstructor
[USIM] Failed to get context of USIM to be used
<< HISR context so return TRUE >>
HwEO = 0x%X
DeviceBlk = 0x%X
pal_EDrvHweoSocketCreation
+++ pal_drv_UsimDrvRequest - %d !!! +++
Force Mux restore
+++ pal_drv_UsimDrvRequest - DRV_IS_UNKNOWN !!! +++
drv_UsimHwContext..UsimChtimeoutCount=0x%X,UsimNoResponseCount=0x%X,UsimOverrunCount=0x%X
UsimRxParityErrorCount=0x%X, UsimClockStopErrorCount=0x%X, UsimClockStartErrorCount=0x%X
+++ pal_drv_UsimDrvRequest - DRV_IS_UNKNOWN !!! +++
drv_UsimHwContext..UsimChtimeoutCount=0x%X,UsimNoResponseCount=0x%X,UsimOverrunCount=0x%X
UsimRxParityErrorCount=0x%X, UsimClockStopErrorCount=0x%X, UsimClockStartErrorCount=0x%X
Usim Clock started !!
*** UICC_DEACTIVATION
+++ pal_drv_UsimDrvRequest - DRV_IS_UNKNOWN !!! +++
drv_UsimHwContext..UsimChtimeoutCount=0x%X,UsimNoResponseCount=0x%X,UsimOverrunCount=0x%X
UsimRxParityErrorCount=0x%X, UsimClockStopErrorCount=0x%X, UsimClockStartErrorCount=0x%X
Usim Clock started !!
Inside UICC_WARM_RESET
+++ pal_drv_UsimDrvRequest - DRV_IS_UNKNOWN !!! +++
drv_UsimHwContext..UsimChtimeoutCount=0x%X,UsimNoResponseCount=0x%X,UsimOverrunCount=0x%X
UsimRxParityErrorCount=0x%X, UsimClockStopErrorCount=0x%X, UsimClockStartErrorCount=0x%X
Usim Clock started !!
[ Start of USIM SocketRequest
Active protocol invalid - req cannot be raised
*** Protocol manager not initialised
+++ pal_drv_UsimDrvRequest - DRV_IS_UNKNOWN !!! +++
drv_UsimHwContext..UsimChtimeoutCount=0x%X,UsimNoResponseCount=0x%X,UsimOverrunCount=0x%X
UsimRxParityErrorCount=0x%X, UsimClockStopErrorCount=0x%X, UsimClockStartErrorCount=0x%X
Usim Clock started !!
*** UICC_IDLE
Inside pal_drv_UsimDrvRequest -- default case
Send TxRx timeout to Appl. for recovery SIM1
*** FORCED RETURN SIM REQUEST ***
The TX FIFO is not empty ...The value of TXCount is 0x%X
The RX FIFO is not empty ...The value of RxCount is 0x%X
UsimHandlePPSData... RxCount=%d
UsimHandlePPSData... Receive Parity error
Receive PPS response
Receive PPS[%d] = 0x%X
UseDefaultPPS == TRUE
Receive PPS[%d] = 0x%X
>>> PPS rejected from CARD. using default speed
>>> Change F/D = %d
>>> Invalid TA1 value=0x%X ...no Change speed
>>> Invalid protocol value=0x%X
For receive remained PPS Data..drv_USIMSetRxTide = %d
drv_UsimSocketCreate - No Task ID
drv_UsimSocketCreate - Mailbox cration failed
PS Service Request %x
PS Service Release %x
UsimDriverState != DRV_IS_PPS
UsimDriverState = 0x%X
drv_UsimDecodeAtr - ATR rejected
