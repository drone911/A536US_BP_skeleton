Initiating DTMF Sequence..in cc_DecodeCcStartDtmfReqMsg
TransactionId -> %d
Waiting for STOP_DTMF from AP
LastDtmfIndex = %d, CurrentDtmfIndex = %d
cc_IncLastDtmfIndex = %d, Key = %d
LastDtmfIndex = %d, has crossed the DTMF index range
DTMF can not be sent in this CC State !... in cc_DecodeCcStartDtmfReqMsg
CallSession %d is NOT Active, in cc_DecodeCcStartDtmfReqMsg
DTMF can not be sent in this CC State (%d) !... in cc_DecodeCcStartDtmfReqMsg
Wrong Key pad entered in cc_DecodeCcStartDtmfReqMsg
No Session Found to contain the given TI in cc_DecodeCcStartDtmfReqMsg, Message Ignored.
Rejecting User's Req in cc_DecodeCcStartDtmfReqMsg ! RAT Change in progress !!
Displaying Start Dtmf Req Message Contents: %s
Unable to Allocate Memory to Send %s Message in cc_SendStartDtmfReqMsg
Entering cc_DecodeStartDtmfAckIndMsg
TransactionId -> %d
KEY PAD Type Dtmf -> Send Rsp to GAPI Immediately in cc_DecodeStartDtmfAckIndMsg
Duration Type Dtmf -> Do NOT Send Rsp to GAPI in cc_DecodeStartDtmfAckIndMsg
Stop Req Has Already Arrived -> Send Stop Dtmf Req to Network in cc_DecodeStartDtmfAckIndMsg
Stop Req Has Not Arrived Yet (or TImer Not Run Out Yet) -> Wait Longer in cc_DecodeStartDtmfAckIndMsg
Msg received in Incorrect DTMF State in cc_DecodeStartDtmfAckIndMsg
CallSession %d is NOT Active, in cc_DecodeStartDtmfAckIndMsg
No Session Found to contain the given TI in cc_DecodeStartDtmfAckIndMsg, Message Ignored.
Entering cc_DecodeStartDtmfRejIndMsg
TransactionId -> %d
CallSession %d is NOT Active, in cc_DecodeStartDtmfRejIndMsg
No Session Found to contain the given TI in cc_DecodeStartDtmfRejIndMsg, Message Ignored.
Initiating DTMF Stop Procedure in cc_DecodeCcStopDtmfReqMsg
TransactionId -> %d
DTMF Stop Req arrived in wrong DTMF State, Sopt Req buffered in cc_DecodeCcStopDtmfReqMsg
Rejecting User's Req in cc_DecodeCcStopDtmfReqMsg ! Incorrect CC State (%d)
Incorrect CC State, Msg Ignored
CallSession %d is NOT Active, in cc_DecodeCcStopDtmfReqMsg
No Session Found to contain the given TI in cc_DecodeCcStopDtmfReqMsg, Message Ignored.
Rejecting User's Req in cc_DecodeCcStopDtmfReqMsg ! RAT Change in progress !!
Entering cc_DecodeStopDtmfAckIndMsg
TransactionId -> %d
CurrentDtmfIndex -> %d in cc_DecodeStopDtmfAckIndMsg
LastDtmfIndex -> %d in cc_DecodeStopDtmfAckIndMsg
KEY PAD Type Dtmf -> Send Rsp to GAPI Immediately in cc_DecodeStopDtmfAckIndMsg
Checking For More Duration Type Dtmfs in cc_DecodeStopDtmfAckIndMsg
More to Send, Start Sending Value in DTMF Index (%d)..
No More DTMF Values to Send..
Msg received in Incorrect DTMF State. Deleting All DTMF Datad
CallSession %d is NOT Active, in cc_DecodeStopDtmfAckIndMsg
CallSession %d is NOT Active, in cc_DecodeStopDtmfAckIndMsg
No Session Found to contain the given TI in cc_DecodeStopDtmfAckIndMsg, Message Ignored.
Unable to Allocate Memory to Send %s Message in cc_SendStopDtmfReqMsg
Displaying Cc Start Dtmf RspMessage Contents: %s
Result -> %d
DataPresent -> %s
Unable to Allocate Memory to Send %s Message in cc_SendCcStartDtmfRspMsg
Displaying Cc Stop dtmf Rsp Message Contents: %s
Result -> %d
DataPresent -> %s
Unable to Allocate Memory to Send %s Message in cc_SendCcStopDtmfRspMsg
Entering cc_DecodeCcDtmfAndDurationReqMsg
TransactionId -> %d
CurrentDtmfIndex -> %d in cc_DecodeCcDtmfAndDurationReqMsg
LastDtmfIndex -> %d in cc_DecodeCcDtmfAndDurationReqMsg
CurrentDtmfIndex == LastDtmfIndex -> Set Next DTMF Duration in cc_DecodeCcDtmfAndDurationReqMsg
CurrentDtmfIndex != LastDtmfIndex -> Get Next DTMF Duration in cc_DecodeCcDtmfAndDurationReqMsg
Saving This Duration For Later Use in cc_DecodeCcDtmfAndDurationReqMsg
Insufficient Memory -> Can NOT Saving This Duration For Later Use in cc_DecodeCcDtmfAndDurationReqMsg
DTMF can not be sent in this CC State (%s) !... in cc_DecodeCcDtmfAndDurationReqMsg
DTMF can not be sent in this CC State (%s) !... in cc_DecodeCcDtmfAndDurationReqMsg
Wrong Key pad entered in cc_DecodeCcDtmfAndDurationReqMsg
No Session Found to contain the given TI in cc_DecodeCcDtmfAndDurationReqMsg, Message Ignored.
Rejecting User's Req in cc_DecodeCcDtmfAndDurationReqMsg ! RAT Change in progress !!
Displaying Send DTMF and Duration Rsp Message Contents: %s
Result -> %d
DataPresent -> %s
Unable to Allocate Memory to Send %s Message in cc_SendDtmfAndDurationRspMsg
DTMF Value -> %s
CC DTMF Buffer is Full ! No More can be added...in cc_CheckDtmfBufferStatusForAddition.
DTMF Duration -> %d ms
DTMF State -> %s
NORMAL Initialisation of <DTMF Management>
GSM to UMTS Initialisation of <DTMF Management>
UMTS to GSM Initialisation of <DTMF Management>
Unknown Initialisation Type (%d) in cc_InitialiseDtmfManagement
