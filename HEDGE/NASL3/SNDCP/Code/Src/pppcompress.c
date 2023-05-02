sl_compress_init(%d)
IP Header (1) In Hex Ver(%x), HL(%x), ToS(%x), TL(%x)
IP Header (2) In Hex ID(%x), off(%x) Protocol(%x), ChSum(%x)
TYPE_IP----1
TCP Header (1) In Hex SP(%x), DP(%x), SN(%x), AN(%x),off(%x)
TCP Header (2) In Hex x2(%x),flag(%x),window(%x), tcpCS(%x)
TYPE_IP th_flag(%x)
packet --- Wasn't the first
packet ---found a prev connection
packet ---Didn't find it
TYPE_IP----4
packet Uncompressed
TYPE_UNCOMPRESSED_TCP
!Bad : ip->ip_p (%d)
last recv (%d)
last recv state (%d)
Length-copied-in-rx-state(%d)
!!Bad : Default
TYPE_COMPRESSED_TCP
We've received a compressed packet
!!Bad : 1
we have to toss the packet.
last_recv(%d)
last_recv_state(%x)
First part In Hex Ver(%x), HL(%x), ToS(%x), TL(%x)
Second part In Hex ID(%x), off(%x) Protocol(%x), ChSum(%x)
In Hex SP(%x), DP(%x), SN(%x), AN(%x),off(%x)
In Hex x2(%x),flag(%x),window(%x), tcpCS(%x)
In Hex TH CS(%x)
!!!!We are in BAD area, Not expected!!!!
TYPE_IP----3
TYPE_ERROR
go to Uncompressed---1
Can be Compressed
Before: changes in packet(%d)
go to Uncompressed---5
Always compress outputchanges %d
Change in IPID(%x)
length of final change(%d)
connection ID present
NO connection ID
go to Uncompressed---2
Change in Window field(%x)
go to Uncompressed---3
Change in Ack field(%x)
Change in Seq field(%x)
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
