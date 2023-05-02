[T0_ST_%d:XCVR] State inactive start
[T0_ST_%d:XCVR] Abnormal interrupt
[T0_ST_%d:XCVR] INVALID external request
[T0_ST_%d:XCVR] invalid event type
[T0_ST_%d:XCVR] State inactive end
[T0_ST_%d:XCVR] State active, Super state - %d
[T0_ST_%d:XCVR] *** Invalid super state ***
T0PM_processStateActive..Invalid state
T0PM_processStateActive.. unknown state:%x
[T0_ST_%d:XCVR] *** Invalid event type ***
[T0_ST_%d] T0PM_processStateRecovery State not implemented
Fi = %d, Di = %d, valueWWT = %d
nullByteThreshold = %d
Requested WWT Count %d is adjusted with %d , Current WWT value = %d etu
Di = %d, WI = %d, Changed WWT value = %d etu
[T0_ST_%d:XCVR] Process Command
[T0_ST_%d:XCVR] *** Invalid T0 state ***
[T1_ST_%d:XCVR] *** Invalid Request type ***
T0PM_ErrHDLR_NullTimeOut - USIM_NULLTIMEOUT_OCCURED
drv_UsimHwContext..UsimChtimeoutCount=0x%X,UsimNoResponseCount=0x%X,UsimOverrunCount=0x%X
UsimRxParityErrorCount=0x%X, UsimClockStopErrorCount=0x%X, UsimClockStartErrorCount=0x%X
T0PM max parity error received
drv_UsimHwContext..UsimChtimeoutCount=0x%X,UsimNoResponseCount=0x%X,UsimOverrunCount=0x%X
UsimRxParityErrorCount=0x%X, UsimClockStopErrorCount=0x%X, UsimClockStartErrorCount=0x%X
[T0_ST_%d:ErrHdlr] *** Error handler ***
[T0_ST_%d:RSYNC] RSYNC process
[T0_ST_%d:XCVR] Hw Evt in State %d
[T0_ST_%d:XCVR] *** Abnormal interrupt = 0x%X in %d state ***
drv_UsimTxRx - DRV_IS_WAIT_FOR_CMD
drv_UsimTxRx - UICC_EXCH_TYPE2..NoOfBytesExpected++ = 0x%X
drv_UsimTxRx.. NoOfBytesExpected = 0x%X
drv_UsimTxRx - The TX FIFO is not empty(TxCount = 0x%X) -- flush
drv_UsimTxRx - The RX FIFO is not empty(RxCount = 0x%X) -- flush
drv_UsimTxRx.. Tx Header => 0x%X, 0x%X, 0x%X, 0x%X, 0x%X
End of USIM SocketRequest ]]
Ins byte included
Received Status bytes : SW1=0x%X, SW2=0x%X
pData=null skip
UsimCopyDataToTxFifo. NoOfTxBytes is too long: 0x%X
UsimCopyDataToTxFifo. UsimCopyDataToTxFifo. NoOfBytesTrasmitted is wrong: 0x%X
UsimCopyDataToTxFifo(Data <= 64) pData->NoOfTxBytes=0x%X
Tx Byte=0x%X
pUsimHwContext->UsimRxExpectedBytes=0x%X, pUsimHwContext->UsimRxReceivedBytes=0x%X
UsimCopyDataToTxFifo(Data > 64) pData->NoOfTxBytes=0x%X
TxFifo=0x%X
NoOfBytesTrasmitted is wrong: 0x%X
Null byte is received...continue without save data
*** Received Null byte 100 times ***
UsimHandleRxData. NullProcByteCount = %d
RxParityCount = 0x%X
RxParityCount = 10....Cold reset
CR0 = 0x%X, CR1 = 0x%X, CR2 = 0x%X, RIS = 0x%X, MIS = 0x%X, ITIP = 0x%X, FIFOSTATUS = 0x%X
Rxbuffer = 0x%X, ITIP = 0x%X, pUsimHwContext->UsimTxTransmittedBytes = 0x%X
UsimHandleRxData..CmdExchType=1...Expect=2
pUsimHwContext->UsimRxExpectedBytes = 3, RxByte=0x%X
UsimHandleRxData. Error!! pUsimHwContext->UsimRxReceivedBytes = 0x%X,RxByte =0x%X
UsimHandleRxData. ## Error pUsimHwContext->UsimRxExpectedBytes < pUsimHwContext->UsimRxReceivedBytes
UsimHandleRxData. Receive Byte <= 0x%X
UsimHandleRxData. Receive ACK Byte : 0xFE
pUsimHwContext->UsimRxExpectedBytes = 2, RxByte=0x%X
UsimHandleRxData. ## Error pUsimHwContext->UsimRxExpectedBytes < pUsimHwContext->UsimRxReceivedBytes
pData=null skip
!!! UICC_EXCH_TYPE_UNKNOWN !!!
!!!! Abnormal Exchange Type !!!!
CR0 = 0x%X, CR1 = 0x%X, CR2 = 0x%X, RIS = 0x%X, MIS = 0x%X, ITIP = 0x%X, FIFOSTATUS = 0x%X
Rxbuffer = 0x%X, ITIP = 0x%X, pUsimHwContext->UsimTxTransmittedBytes = 0x%X
DRV_IS_WAIT_FOR_CMD - SCIRXTIDEINTR..CR0 = 0x%X,CR1 = 0x%X,CR2 = 0x%X,RIS = 0x%X,MIS = 0x%X,ITIP = 0x%X,FIFOSTATUS = 0x%X
Rxbuffer = 0x%X,ITIP = 0x%X,RxCount = 0x%X
***flush Rx buffer SCIRXTIDEINTR in the DRV_IS_WAIT_FOR_CMD
+++ AbnormalReceiveCount > 10 , it maybe Card Damaged!!..go to Unknown state
DRV_IS_WAIT_FOR_CMD - SCIRTOUTINTR..CR0 = 0x%X,CR1 = 0x%X,CR2 = 0x%X,RIS = 0x%X,MIS = 0x%X,ITIP = 0x%X,FIFOSTATUS = 0x%X
Rxbuffer = 0x%X,ITIP = 0x%X
***flush Rx buffer SCIRTOUTINTR in the DRV_IS_WAIT_FOR_CMD
DRV_IS_WAIT_FOR_CMD - SCITXERRINTR..CR0 = 0x%X,CR1 = 0x%X,CR2 = 0x%X,RIS = 0x%X,MIS = 0x%X,ITIP = 0x%X,FIFOSTATUS = 0x%X
ITIP = 0x%X
###flush Tx buffer SCITXERRINTR in the DRV_IS_WAIT_FOR_CMD
DRV_IS_WAIT_FOR_CMD - Overrun Error
DRV_IS_WAIT_FOR_CMD - Abnormal INTR..CR0 = 0x%X,CR1 = 0x%X,CR2 = 0x%X,RIS = 0x%X,MIS = 0x%X,ITIP = 0x%X,FIFOSTATUS = 0x%X
Rxbuffer = 0x%X,ITIP = 0x%X,RxCount = 0x%X
Abnormal INTR = 0x%X in the DRV_IS_WAIT_FOR_CMD
DRV_IS_TX_RX - SCITXTIDEINTR
DRV_IS_TX_RX - SCIRXTIDEINTR
DRV_IS_TX_RX - SCITXERRINTR
DRV_IS_TX_RX - SCICHTOUTINTR
NoOfRx=0x%X,NoOfExpected=0x%X,RxBuff[SW1]=0x%X,RxBuff[SW2]=0x%X,IsIdleState=0x%X
pUsimHwContext->UsimTxTransmittedBytes = 0x%X
DRV_IS_TX_RX - SCIBLKTOUTINTR
DRV_IS_TX_RX - SCICARDOUTINTR
DRV_IS_TX_RX - SCICARDDNINTR
DRV_IS_TX_RX - Overrun Error
Abnormal INTR = 0x%X in the DRV_IS_TX_RX
DRV_IS_TX - SCITXTIDEINTR
DRV_IS_TX - SCITXERRINTR
DRV_IS_TX - SCICHTOUTINTR
NoOfRxBytes=0x%X,NoOfBytesExpected=0x%X
DRV_IS_TX - SCIBLKTOUTINTR
DRV_IS_TX - SCICARDOUTINTR
DRV_IS_TX - SCICARDDNINTR
DRV_IS_TX - Overrun Error
Abnormal INTR = 0x%X in the DRV_IS_TX
pData=null skip
DRV_IS_RX - Error!! pUsimHwContext->UsimRxReceivedBytes = 0x%X, RxCount = 0x%X, pUsimHwContext->UsimRxExpectedBytes = 0x%X, RxByte = 0x%X
***flush Rx buffer SCIRXTIDEINTR in the DRV_IS_RX
DRV_IS_RX - pUsimHwContext->UsimRxExpectedBytes == pUsimHwContext->UsimRxReceivedBytes == 0x%X
DRV_IS_RX - Set RX Tide pUsimHwContext->UsimRxExpectedBytes =0x%X , pUsimHwContext->UsimRxReceivedBytes =0x%X
pData=null skip
DRV_IS_RX - SCICHTOUTINTR..CR0 = 0x%X,CR1 = 0x%X,CR2 = 0x%X,RIS = 0x%X,MIS = 0x%X,ITIP = 0x%X,FIFOSTATUS = 0x%X
ITIP = 0x%X
NoOfRx=0x%X, NoOfExpected=0x%X, RxBuff[SW1]=0x%X, RxBuff[SW2]=0x%X, CmdExchType=0x%X
pData: NoOfRx=0x%X, NoOfExpected=0x%X, RxBuff[SW1]=0x%X, RxBuff[SW2]=0x%X
DRV_IS_RX - SCIBLKTOUTINTR
DRV_IS_RX - SCICARDOUTINTR
DRV_IS_RX - SCICARDDNINTR
DRV_IS_RX - Overrun Error
Abnormal INTR = 0x%X in the DRV_IS_RX
[T0_ST_%d:XCVR] *** Invalid T0 state ***
