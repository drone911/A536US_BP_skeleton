rfc2507_selected
rfc2507_init:entity_num(%d), sapi(%d) TCP (%d) NonTCP (%d)
RFC2507:stateData(%x) nontcpflow(%x) tcpflow (%x)
RFC2507: TCP size (%d) (%d) tcpspace %d
RFC2507: Non TCP size (%d) (%d)nontcpspace %d
RFC2507: Tx TCP Flow state(%x)
RFC2507:Rx TCP Flow state(%x)
RFC2507: Tx Non TCP Flow state(%x)
RFC2507: Rx Non TCP Flow state(%x)
RFC2507 Params: %d %d %d %d %d
RFC2507: rfc2507_context_init TcpSpace %d NonTcpSpace %d
RFC2507: rfc2507_context_init exit
State Data is NULL
[DBG]:proto:%0x hlen:%d FMaxPeriod %d FMaxTime %d NonTcp_cid %d Tcp_cid %d
IP/TCP Header Packet
IP/UDP Header Packet
output:RFC2507(%d):length(%d):
stateData(%x)InputLength(%d)Tcp_CID(%d)Non_TCPCID(%d) FMaxPeriod(%d) FMaxTime(%d)
RFC2507:Decompression input :
No State Data
Rcvd UNCOMPRESSED_PACKETt: PCOMP %d
Rcvd FULL_HEADER: PCOMP %d
Rcvd FULL_HEADER: proto %d
outputafter Decomp(%d)
Rcvd errorneous TCP IP packet
RFC2507 TCP decompression output:
outputafter Decomp(%d)
Rcvd errorneous UDP IP packet
RFC2507 UDP decompression output:
Rcvd COMPRESSED_TCP: PCOMP %d
outputafter Decomp(%d)
Rcvd errorneous TCP IP packet
RFC2507 TCP decompression output:
Rcvd COMPRESSED_TCP_NODELTA: PCOMP %d (not Handled)
Rcvd COMPRESSED_NON_TCP: PCOMP %d (not Handled)
outputafter Decomp(%d)
Rcvd errorneous UDP IP packet
RFC2507 UDP decompression output:
Rcvd CONTEXT_STATE: PCOMP %d (not Handled)
rfc2507_delete
RFC2507:rfc2507AddParams : [1]: %d [2]: %d [3]: %d [4]: %d [5]: %d [6]: %d [7]: %d
rfc2507AddPcomps: %d %d %d
rfc2507ComparePcoms : Status : %d len : %d
rfc2507ValidateParams_MO: len : %d XidInEstab %d status %d
rfc2507ValidateParams_MO: len : %d returning :%d
RFC2507Comp-PBit=0-Unsupported LengthOutOfRange
RFC2507Comp-PBit=1-Unsupported LengthOutOfRange
rfc2507CheckUnsupportedLength :%d
IP Fragemnt or packet len<40:Packet Type:%d
Reived Packet IP Header (1) In Hex Ver(%x), HL(%x), ToS(%x), TL(%x)
IP Header (2) In Hex ID(%x), off(%x) Protocol(%x), ChSum(%x)
Received TCP Header (1) In Hex SP(%x), DP(%x), SN(%x), AN(%x),off(%x)
Received TCP Header (2) In Hex x2(%x),flag(%x),window(%x), tcpCS(%x)
connstate Packet IP Header (1) In Hex Ver(%x), HL(%x), ToS(%x), TL(%x)
IP Header (2) In Hex ID(%x), off(%x) Protocol(%x), ChSum(%x)
Conn state TCP Header (1) In Hex SP(%x), DP(%x), SN(%x), AN(%x),off(%x)
Conn State TCP Header (2) In Hex x2(%x),flag(%x),window(%x), tcpCS(%x)
SYN | FIN | RST
Found a Previous connection
No Previous connection found
h len %d:PacketType :%d
h len %d:PacketType :%d
TcpPktNumber_cid %4x cs->tcp_cid %d
TcpPktNumber_cid %4x cs->tcp_cid %d
h len %d:PacketType :%d
sending full header %04x cs->tcp_cid %0x
FULL_HEADER received pdulen %d
!Bad :rcvd_cid %x
rcvd_cid %x
last recv (%d)
last recv state (%d)
Length-copied-in-rx-state(%d)
COMPRESSED_TCP_NODELTA pdulen %d
!Bad :rcvd_cid %x
rcvd_cid %x
last recv (%d)
last recv state (%d)
Length-copied-in-rx-state(%d)
!!Bad :decompress Default
!!!!We are in BAD area, Not expected!!!!
rfc2507ValidateParams_MO:period %d maxtime %d max header %d tcp %d nontcp %d
Proposed:period %d maxtime %d max header %d tcp %d nontcp %d
rfc2507ValidateParams_MO:l_reNegFlag %d----0
rfc2507ValidateParams_MO:l_reNegFlag %d----1
rfc2507ValidateParams_MO:l_reNegFlag %d----2
rfc2507ValidateParams_MO: XidInEstab %d
TcpPktNumber %0x Higher Byte %0x
Previous connection found -1
Previous connection found -2
go to sendfullheader 1
Change in URG flag(%x)
Change in URG pointer without URG set:Send Fullheader
Change in Window field(%x)
Ack difference more than 65535: send Full header
Change in Ack field(%x)
Seq difference more than 65535 :send Full header
Change in Seq field(%x)
Change in IPID(%x)
PUSH Flag Set
length of final change(%d)
final Content
connection ID present in compressed header
sending full header %04x cs->tcp_cid %0x
special case encoding as per RFC1144: send full header
COMPRESSED_TCP
!!Bad : 1
last_recv cid(%d)changes (%x)
last_recv_state(%x)
First part In Hex Ver(%x), HL(%x), ToS(%x), TL(%x)
Second part In Hex ID(%x), off(%x) Protocol(%x), ChSum(%x)
In Hex SP(%x), DP(%x), SN(%x), AN(%x),off(%x)
In Hex x2(%x),flag(%x),window(%x), tcpCS(%x)
upper byte (%x) next byte %x
In Hex TH CS(%x)
SPECIAL_I
SPECIAL_D
Decode-Flag(%x), URG(%x)
Dec-WIN(%x)
S-CP-Val-Before (%x)
S-CP-Val-If (%x)
S-CP-Val-Else (%x)
Dec-ACK(%x)
L-CP-Val-Before (%x)
L-CP-Val-If (%x)
L-CP-Val-Else (%x)
Dec-SEQ(%x)
L-CP-Val-Before (%x)
L-CP-Val-If (%x)
L-CP-Val-Else (%x)
NEW_I
S-CP-Val-Before (%x)
S-CP-Val-If (%x)
S-CP-Val-Else (%x)
Length_one(%d)
we must have dropped some characters
Length_two(%d),cs_len(%d)
Length_END(%d)
!!!!We are in BAD area, Not expected!!!!
