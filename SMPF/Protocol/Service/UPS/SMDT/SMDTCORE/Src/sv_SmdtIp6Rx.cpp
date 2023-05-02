Received invalid parameters..return
Failed to get SmdtIp6Rx instance..return
Failed to allocate memory..return
Version TrafficClass Flow : 0x%x
Payload Len : %d
Next Hdr : %d
Hop Limit : %d
SRC IP
DST IP
ValidateIp6Hdr() : Received NULL parameter
ValidateIp6Hdr() : Received Wrong IP Version (%d)
ValidateIp6Hdr() : Received Invalid Payload Length (%d)
ValidateIp6Hdr() buf_len : %d, ip6->ip6_plen : %d
ValidateIp6Hdr() : Received packet shorter than expected. Dropping packet
ValidateIp6Hdr() : Bad scope
ValidateIp6Hdr() : Bad scope; silently drop the packet
ValidateIp6Hdr() : Received IPv4 Compatible Address..Drop Packet
Entry() - initNxtHdrHandlers
Entry : ProcessRxIp6Pkt() pPktHdr : %p, pBuff : %p, rBufLen : %d
ProcessRxIp6Pkt() : Received Invalid Input..return
ProcessRxIp6Pkt() : Received buffer size is less than IP6 Hdr Size..return
ProcessRxIp6Pkt() : Failed to allocate memory for new IPv6 Header..return
ProcessRxIp6Pkt() : Ip6 Header validation failed..return
ProcessRxIp6Pkt() : Received buffer size is more than IPv6 Header + Payload Size
ProcessRxIp6Pkt() : Received rBufLen : %d, IP6 Hdr Size : %d, payloadLen : %d
ProcessRxIp6Pkt() : Updated rBufLen : %d
ProcessIncIp6Pkt() : Buffer allocation failure..Drop Packet
ProcessIncIp6Pkt() : Protofactory instance failure..Drop Packet
ProcessIncIp6Pkt() : Proto instance failure..Drop Packet
Entry : ProcessFragHdr()
Received Invalid Data
Failed to get ip6_rx_table
[SmdtIp6Rx::ProcessRxFragHdr] pkt_hdr : 0x%x, pkt_hdr->fragTtl : %d
Failed to insert fragment in fragment list..return
ProcessFragHdr() : fragStatus : %d
Wait for remaining fragments
Unhandled Header - HOP-BY-HOP OPTIONS HDR : Skip to nxt hdr
Received offset is greater than buffer total length..return
[ProcessHopOptHdr] nxtHdr : %d, hdrLen : %d
offset + curr hdr len is greater than buffer total length..return
Unhandled Header - ROUTING HDR : Skip to nxt hdr
Received offset is greater than buffer total length..return
[ProcessRoutingHdr] nxtHdr : %d, hdrLen : %d
offset + curr hdr len is greater than buffer total length..return
Unhandled Header - DESTINATION OPTION HDR : Skip to nxt hdr
Received offset is greater than buffer total length..return
[ProcessDstOptHdr] nxtHdr : %d, hdrLen : %d
offset + curr hdr len is greater than buffer total length..return
Entry() - ProcessAuthHdr
Entry() - ProcessEspHdr
ProcessRxEspHdr() : Buffer allocation failure..Drop Packet
Fragments in List for FragId : %0x
No Fragments in List.
Fragment(%d) - Offset Start : %d, Offest End : %d
Received New Fragment - Offset Start : %d, moreFrag Flag : %d
Received Atomic Fragment
Next Hdr is IPv6 Ext Header(%d)
==== All IPv6 Extension Hdrs processed ====
Next Hdr is Protocol Header(%d)
Unsupported Next Header(%d)
~SmdtIp6Rx
Delete m_pIp6Rx
