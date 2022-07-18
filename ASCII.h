//ASCII.h 
//developer : https://gitee.com/Kawaiino-Nyanpasu

#ifndef _ASCII_CONTROL_C_
#define _ASCII_CONTROL_C_
static constexpr char _soh(0x1);//Start of headl
static constexpr char _stx(0x2);//Start of text
static constexpr char _etx(0x3);//End of text
static constexpr char _eot(0x4);//End of trans
static constexpr char _enq(0x5);//Enquire(请求)
static constexpr char _ack(0x6);//Acknowledge
static constexpr char _bel(0x7);//Bell
static constexpr char _bs(0x8);//Backspace
static constexpr char _tab1(0x9);//HT
static constexpr char _NLine(0xa);//NewLine
static constexpr char _tab2(0xb);//VT
static constexpr char _NPage(0xc);//NewPage
static constexpr char _enter(0xd);//enter
static constexpr char _so(0xe);//shift out
static constexpr char _si(0xf);//shift in
static constexpr char _dle(0x10);//Data Link escape
static constexpr char _dc1(0x11);//Device Control1
static constexpr char _xon(0x11);//Trans on
static constexpr char _dc2(0x12);//DC2
static constexpr char _dc3(0x13);//DC3
static constexpr char _xoff(0x13);//Trans off
static constexpr char _dc4(0x14);//DC4
static constexpr char _nak(0x15);//无响应
static constexpr char _syn(0x16);//Sync Idle
static constexpr char _etb(0x17);//End of Trans Block
static constexpr char _cancel(0x18);//cancel
static constexpr char _em(0x19);//end of medium
static constexpr char _sub(0x1a);//Substitute
static constexpr char _esc(0x1b);//escape

//////////////separator//////////////
static constexpr char _fs(0x1c);//File
static constexpr char _gs(0x1d);//Group
static constexpr char _rs(0x1e);//Record
static constexpr char _us(0x1f);//Unit
/////////////////////////////////////

static constexpr char _del(0x7F);//Delete
#endif  
