lcp_change_state START New State[%d], GLCP->itsState[%d]
lcp_change_state UIP_LCPState_kClosed
lcp_change_state END GLCP->itsState[%d]
lcp_cleanup()
UIP_LCPState_kClosed
UIP_LCPState_kStarting
UIP_LCPState_kOpened
UIP_LCPState_kClosing
lcp_starting(): State (%d)
lcp_starting(): MAX Total starting frames counter reached 0
lcp_starting(): Restart timer expired. Configure counter = %lu
lcp_starting(): Configure counter reached 0.
lcp_starting(): Requesting MRU: %lu.
lcp_starting(): Requesting Receiving ACCM: %lx.
lcp_starting(): Requesting PFC In
lcp_starting(): Requesting ACFC In
lcp_starting(): Requesting MAGIC NUMBER (%lx)
lcp_closing(): State (%d)
lcp_closing(): Restart timer expired. Terminate counter = %lu
lcp_closing(): Terminate counter reached 0.
lcp_frame_read(): LCP Frame read: Code [%d], ID [%lu]
lcp_frame_read(): Invalid LCP Length (%lu). Frame discarded.
lcp_frame_read type[%d]
lcp_frame_read(): LCP frame with code [%lu] not managed in LCP state [%d]. Discarded.
UIP_LCPCode_kCfRq
UIP_LCPCode_kCfAck
UIP_LCPCode_kCfAck, IDs match
UIP_LCPCode_kCfNak
UIP_LCPCode_kCfRj
UIP_LCPCode_kTrRq
UIP_LCPCode_kTrAck
UIP_LCPCode_kEcRq
UIP_LCPCode_kEcRp
L_P_H LCP code [%d] ID. [%d]
lcp_reply_CfRq(): Invalid option size.
lcp_reply_CfRq(): Negative CfReq received while Opened. LCP Closed.
lcp_reply_CfRq(): Positive CfReq received while Opened. Replied.
lcp_protocol_reject(): LCP not in Opened state. Discarded.
lcp_manage_CfNakRej(): Invalid option size.
lcp_manage_CfNakRej(): Receiving ACCM suggested: %lx
lcp_manage_CfNakRej(): Bad ACCM Option Len
lcp_manage_CfNakRej(): Bad ACCM Option Len
lcp_manage_CfNakRej(): MRU suggested: (%lu)
lcp_manage_CfNakRej(): MRU rejected. Using default (%lu)
lcp_manage_CfRej(): Bad ACCM Option Len
lcp_manage_CfNakRej(): PFC Naked or Rejected
lcp_manage_CfRej(): Bad PFC Option Len
lcp_manage_CfNakRej(): ACFC Naked or Rejected
lcp_manage_CfRej(): Bad ACFC Option Len
lcp_manage_CfNakRej(): Magic Naked or Rejected
lcp_manage_CfRej(): Bad Magic Option Len
lcp_manage_CfNakRej
lcp_reply_CfRq_action(): Too short ACCM option.
lcp_reply_CfRq_action(): Peer Requested ACCM: [%lx], Locally requested ACCM [%lx]
lcp_reply_CfRq_action(): ACCM not including ours -> NAK.
lcp_reply_CfRq_action(): ACCM OK -> ACK.
lcp_reply_CfRq_action(): Requested MRU: %lu -> ACK
lcp_reply_CfRq_action(): MTU changed from: %lu to: %lu
lcp_reply_CfRq_action(): PFC Out requested, Allowed -> ACK.
lcp_reply_CfRq_action(): Too short PFC option.
lcp_reply_CfRq_action(): PFC Out requested, NOT Allowed -> REJ.
lcp_reply_CfRq_action(): ACFC Out requested, Allowed -> ACK.
lcp_reply_CfRq_action(): Too short ACFC option.
lcp_reply_CfRq_action(): ACFC Out requested, NOT Allowed -> REJ.
lcp_reply_CfRq_action(): MAGIC Number (%lx) requested, Allowed -> ACK.
lcp_reply_CfRq_action(): Too short MAGIC option.
lcp_reply_CfRq_action(): MAGIC Number requested, NOT Allowed -> REJ.
lcp_reply_CfRq_action(): Extended LCP opcode 12 is not supported.
lcp_reply_CfRq_action(): Extended LCP opcode 13 is not supported.
lcp_reply_CfRq_action(): Unknown Conf Opcode [%lu]
lcp_reply_CfRq_do_action(): Action NAK but unknown option
