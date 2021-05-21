/***
JobGen Plus, (C)Unitech America Inc.

job: C:\Jobgen_dem\UnitechInventario\Tercer_CC\Ter_CC.jgp

target: HT-630


*/

#include <jcntl.h>
#include <defn.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <io.h>
#include <rcd.h>
#include <lookup.h>
#include <fcntl.h>
#include <fio.h>
#include <ctype.h>


struct CtrlCenter ccnt;




/*** all data */

char _Casillero3[34]; // 1..32, len includes terminator \0
char _DB_Cole3[34]; // 1..32, len includes terminator \0
char _DB_Corr3[34]; // 1..32, len includes terminator \0
char _DB_SKU3[20]; // 1..18, len includes terminator \0
char _Descripcion31[34]; // 1..32, len includes terminator \0
char _Descripcion32[82]; // 1..80, len includes terminator \0
char _Descripcion33[82]; // 1..80, len includes terminator \0
char _Lado3[34]; // 1..32, len includes terminator \0
long _lee_ccn1 =0;
long _lee_ccn2 =0;
char _Msg_Err33[16]; // 1..14, len includes terminator \0
long _Msg_Err34 =0;
char _Nivel3[34]; // 1..32, len includes terminator \0
char _Rack3[34]; // 1..32, len includes terminator \0
char _Val_Con2[16]; // 1..14, len includes terminator \0
char _Val_Con3[16]; // 1..14, len includes terminator \0
char _Val_Cont[16]; // 0..14, len includes terminator \0
long _Comp_Ini =0;


/*** all global programs */


#line - 



/*** all expressions */

int __GetExpression(int jid)
{int _RESULT_ = 0;

#line - 

return _RESULT_;
}




/*** all control data */

struct CtrlData __cdata[] = {
40003, "\x05",
40002, "\x08\x4E\x4F\x5F\x52\x45\x47\x33\x2E\x54\x58\x54\x08\x05\x09"
"\x4E\x6F\x5F\x52\x65\x67\x33\x09\x05\x01\x00",
40069, "\x00\x00",
40068, "\x4E\x4F\x5F\x52\x45\x47\x33\x2E\x54\x58\x54\x00",
40067, "\x4E\x6F\x5F\x52\x65\x67\x33\x00",
40066, "\x56\x61\x6C\x5F\x43\x6F\x6E\x74\x09\x19\x01\x00",
40065, "\x19\x00",
40062, "\x2C\x00",
40061, "\x0A\x00",
37717, "\x0D",
37705, "\x0D",
37549, "\x0D",
37033, "\x0D",
37009, "\x0D",
36529, "\x0D",
36469, "\x8A",
36457, "\x0D",
36409, "\x8D",
36397, "\x86",
36385, "\x8B",
36361, "\x0D",
36289, "\x0D",
36277, "\x0D",
36265, "\x0D",
36205, "\x8D",
36193, "\x0D",
36169, "\x8D",
36157, "\x8D",
36145, "\x8D",
36133, "\x8D",
36121, "\x8D",
36109, "\x8D",
36097, "\x8A",
36085, "\x8A",
36073, "\x8A",
36061, "\x8A",
36049, "\x8A",
40001, "\x54\x65\x72\x5F\x43\x43\x09\x01\x01\x52\x61\x63\x6B\x33\x09"
"\x02\x01\x4C\x61\x64\x6F\x33\x09\x03\x01\x4E\x69\x76\x65\x6C"
"\x33\x09\x04\x01\x43\x61\x73\x69\x6C\x6C\x65\x72\x6F\x33\x09"
"\x05\x01\x44\x42\x5F\x53\x4B\x55\x33\x09\x06\x01\x53\x61\x6C"
"\x69\x65\x6E\x64\x6F\x33\x09\x0A\x01\x43\x6F\x64\x4E\x6F\x52"
"\x65\x67\x33\x33\x09\x0F\x01\x56\x61\x6C\x5F\x43\x6F\x6E\x74"
"\x09\x19\x01\x56\x61\x6C\x5F\x43\x6F\x6E\x32\x09\x20\x01\x4D"
"\x73\x67\x5F\x45\x72\x72\x33\x31\x09\x23\x01\x56\x61\x6C\x5F"
"\x43\x6F\x6E\x33\x09\x25\x01\x4D\x73\x67\x5F\x45\x72\x72\x33"
"\x33\x09\x26\x01\x4D\x73\x67\x5F\x45\x72\x72\x33\x32\x09\x27"
"\x01\x43\x6F\x6D\x70\x5F\x49\x6E\x69\x09\x2A\x01\x6C\x65\x65"
"\x5F\x63\x63\x6E\x31\x09\x2B\x01\x6C\x65\x65\x5F\x63\x63\x6E"
"\x32\x09\x2C\x01\x4D\x73\x67\x5F\x45\x72\x72\x33\x34\x09\x2E"
"\x01\x44\x65\x6C\x5F\x55\x6C\x74\x33\x31\x09\x2F\x01\x44\x65"
"\x6C\x5F\x55\x6C\x74\x33\x32\x09\x30\x01\x44\x65\x6C\x5F\x55"
"\x6C\x74\x33\x33\x09\x31\x01\x4D\x65\x6E\x75\x5F\x44\x65\x6C"
"\x33\x31\x09\x32\x01\x4D\x73\x67\x5F\x44\x65\x6C\x33\x31\x09"
"\x33\x01\x44\x42\x5F\x43\x6F\x72\x72\x33\x09\x3E\x01\x44\x42"
"\x5F\x43\x6F\x6C\x65\x33\x09\x3F\x01\x4D\x6F\x64\x5F\x43\x6F"
"\x72\x72\x09\x55\x01\x4D\x6F\x64\x5F\x43\x6F\x6C\x65\x09\x56"
"\x01\x4D\x6F\x64\x5F\x53\x4B\x55\x09\x57\x01\x43\x6F\x64\x4E"
"\x6F\x52\x65\x67\x33\x31\x09\x5C\x01\x43\x6F\x64\x4E\x6F\x52"
"\x65\x67\x33\x32\x09\x5D\x01\x44\x65\x73\x63\x72\x69\x70\x63"
"\x69\x6F\x6E\x33\x31\x09\x74\x01\x44\x65\x73\x63\x72\x69\x70"
"\x63\x69\x6F\x6E\x33\x32\x09\x79\x01\x44\x65\x73\x63\x72\x69"
"\x70\x63\x69\x6F\x6E\x33\x33\x09\x7A\x01\x00",
9466, "\x04\x52\x11\x03\x20\x02\x00\x00\x02\x00\x5F\x21\x00\x01\x00"
"\x01\x50\x09\x01\x00\x2C\xFF\xFF\xFF\xFF\x00\x3E\x00\x0F\x00"
"\x00\x00\x00\x1F\x00\x00\x00\x00\x00\x00",
9474, "\x00",
9473, "\x03\x09\x05\x01\x08\x0D\x01\x05\x06\x01\x13\x0D\x14\x05\x02\x01\x11\x0D\x12\x0D\x00",
9465, "\x00",
9467, (char*)&_Descripcion33,
9454, "\x04\x52\x11\x03\x20\x02\x00\x00\x02\x00\x5F\x21\x00\x01\x00"
"\x01\x50\x09\x01\x00\x2C\xFF\xFF\xFF\xFF\x00\x3F\x00\x10\x00"
"\x00\x00\x00\x1E\x00\x00\x00\x00\x00\x00",
9462, "\x00",
9461, "\x03\x09\x05\x01\x08\x0D\x01\x05\x06\x01\x13\x0D\x14\x05\x02\x01\x11\x0D\x12\x0D\x00",
9453, "\x00",
9455, (char*)&_Descripcion32,
9394, "\x04\x22\x11\x03\x20\x02\x00\x00\x02\x00\x5F\x21\x00\x01\x00"
"\x01\x20\x09\x01\x00\x2C\xFF\xFF\xFF\xFF\x00\x06\x00\x03\x00"
"\x00\x00\x00\x1D\x00\x00\x00\x00\x00\x00",
9402, "\x00",
9401, "\x03\x09\x05\x01\x08\x0D\x01\x05\x06\x01\x13\x0D\x14\x05\x02\x01\x11\x0D\x12\x0D\x00",
9393, "\x00",
9395, (char*)&_Descripcion31,
5118, "\x00\x00\x1C\x00",
5117, "\x0A\x0A\x20\x20\x20\x20\x20\x43\xD3\x44\x49\x47\x4F\x20\x4E"
"\x4F\x0A\x20\x53\x45\x20\x45\x4E\x43\x55\x45\x4E\x54\x52\x41"
"\x20\x45\x4E\x20\x4C\x41\x20\x20\x20\x20\x42\x41\x53\x45\x20"
"\x44\x45\x20\x44\x41\x54\x4F\x53\x0A\x20\x20\x20\x20\x20\x43"
"\x6F\x6C\x65\x63\x74\x69\x76\x61\x0A\x0A\x20\x20\x3C\x50\x72"
"\x65\x73\x69\x6F\x6E\x61\x20\x45\x6E\x74\x65\x72\x3E\x00",
5106, "\x00\x00\x1B\x00",
5105, "\x0A\x0A\x20\x20\x20\x20\x20\x43\xD3\x44\x49\x47\x4F\x20\x4E"
"\x4F\x0A\x20\x53\x45\x20\x45\x4E\x43\x55\x45\x4E\x54\x52\x41"
"\x20\x45\x4E\x20\x4C\x41\x20\x20\x20\x20\x42\x41\x53\x45\x20"
"\x44\x45\x20\x44\x41\x54\x4F\x53\x0A\x20\x20\x20\x20\x20\x20"
"\x20\x20\x53\x4B\x55\x0A\x0A\x20\x20\x3C\x50\x72\x65\x73\x69"
"\x6F\x6E\x61\x20\x45\x6E\x74\x65\x72\x3E\x00",
5046, "\x00\x00\x1A\x00",
5045, "\x4D\x6F\x64\x75\x6C\x6F\x20\x53\x4B\x55\x00",
5034, "\x00\x00\x19\x00",
5033, "\x20\x4D\x6F\x64\x75\x6C\x6F\x20\x43\x6F\x6C\x65\x63\x74\x69"
"\x76\x61\x00",
5022, "\x00\x00\x18\x00",
5021, "\x20\x4D\x6F\x64\x75\x6C\x6F\x20\x43\x6F\x72\x72\x75\x67\x61"
"\x64\x6F\x00",
8758, "\x04\x22\x11\x03\x00\x0A\x00\x00\x01\x04\x5F\x21\x40\x01\x00"
"\x01\x20\x09\x0C\x10\x2C\xFF\xFF\xFF\xFF\x00\x00\x00\x00\x23"
"\x00\x00\x00\x17\x00\x00\x00\x00\x00\x00",
8762, "\x44\x42\x5F\x43\x61\x6A\x61\x2E\x74\x78\x74\x00",
8765, "\x03\x09\x05\x01\x08\x0D\x01\x05\x06\x01\x13\x0D\x14\x05\x02\x01\x11\x0D\x12\x0D\x00",
8760, "\x19",
8757, "\x50\x54\x20\x20\x20\x4C\x65\x65\x20\x43\x4F\x44\x49\x47\x4F"
"\x3A\x20\x20\x0A\x43\x4F\x44\x3A\x0A\x20\x20\x20\x20\x20\x20"
"\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20"
"\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20"
"\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20"
"\x0A\x0A\x46\x35\x3A\x46\x69\x6E\x20\x64\x65\x20\x43\x61\x73"
"\x69\x6C\x6C\x65\x72\x6F\x0A\x46\x38\x3A\x53\x61\x6C\x69\x72"
"\x00",
8759, (char*)&_DB_Cole3,
8746, "\x04\x22\x11\x03\x00\x0A\x00\x00\x01\x04\x5F\x21\x40\x01\x00"
"\x01\x20\x09\x0D\x10\x2C\xFF\xFF\xFF\xFF\x00\x00\x00\x00\x23"
"\x00\x00\x00\x16\x00\x00\x00\x00\x00\x00",
8750, "\x44\x42\x5F\x43\x61\x6A\x61\x2E\x74\x78\x74\x00",
8753, "\x03\x09\x05\x01\x08\x0D\x01\x05\x06\x01\x13\x0D\x14\x05\x02\x01\x11\x0D\x12\x0D\x00",
8748, "\x19",
8745, "\x50\x54\x20\x20\x20\x4C\x65\x65\x20\x43\x4F\x44\x49\x47\x4F"
"\x3A\x20\x20\x0A\x43\x4F\x44\x3A\x0A\x20\x20\x20\x20\x20\x20"
"\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20"
"\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20"
"\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20"
"\x0A\x0A\x46\x35\x3A\x46\x69\x6E\x20\x64\x65\x20\x43\x61\x73"
"\x69\x6C\x6C\x65\x72\x6F\x0A\x46\x38\x3A\x53\x61\x6C\x69\x72"
"\x00",
8747, (char*)&_DB_Corr3,
4614, "\x00\x00\x15\x00",
4613, "\x0A\xDA\x6C\x74\x69\x6D\x6F\x20\x52\x65\x67\x69\x73\x74\x72"
"\x6F\x20\x0A\x42\x6F\x72\x72\x61\x64\x6F\x0A\x0A\x0A\x0A\x3E"
"\x3E\x50\x72\x65\x73\x69\x6F\x6E\x65\x20\x45\x6E\x74\x65\x72"
"\x0A\x20\x20\x70\x61\x72\x61\x20\x63\x6F\x6E\x74\x69\x6E\x75"
"\x61\x72\x3E\x3E\x3E\x00",
4602, "\x00\x00\x14\x00",
4601, "\x44\x65\x73\x65\x61\x20\x62\x6F\x72\x72\x61\x72\x20\xFA\x6C"
"\x74\x69\x6D\x61\x20\x63\x61\x70\x74\x75\x72\x61\x3F\x0A\x0A"
"\x0A\x46\x38\x3A\x43\x6F\x6E\x66\x69\x72\x6D\x61\x72\x0A\x0A"
"\x46\x31\x3A\x43\x61\x6E\x63\x65\x6C\x61\x72\x20\x79\x20\x20"
"\x20\x20\x20\x20\x20\x20\x20\x20\x52\x65\x67\x72\x65\x73\x61"
"\x72\x00",
20590, "\x4E\x4F\x5F\x52\x45\x47\x33\x2E\x54\x58\x54\x00",
20589, "\x02",
20578, "\x4E\x4F\x5F\x52\x45\x47\x33\x2E\x54\x58\x54\x00",
20577, "\x02",
20566, "\x4E\x4F\x5F\x52\x45\x47\x33\x2E\x54\x58\x54\x00",
20565, "\x02",
8554, "\x02\x04\x15\x01\x20\x02\x00\x00\x04\x01\x5F\x21\x00\x01\x00"
"\x01\x0B\x09\x01\x00\x2C\xFF\xFF\xFF\xFF\x00\x20\x00\x06\x20"
"\x00\x00\x00\x13\x00\x00\x00\x00\x00\x00",
8562, "\x00",
8553, "\x4E\x6F\x20\x68\x61\x79\x20\x64\x69\x66\x65\x72\x65\x6E\x63"
"\x69\x61\x73\x20\x20\x65\x6E\x20\x43\x6F\x6E\x74\x65\x6F\x73"
"\x20\x31\x20\x79\x20\x32\x0A\x0A\x44\x69\x66\x65\x72\x65\x6E"
"\x63\x69\x61\x3A\x0A\x0A\x0A\x20\x20\x20\x50\x72\x65\x73\x69"
"\x6F\x6E\x61\x20\x45\x6E\x74\x65\x72\x20\x20\x20\x20\x20\x20"
"\x70\x61\x72\x61\x20\x63\x6F\x6E\x74\x69\x6E\x75\x61\x72\x00",
8555, (char*)&_Msg_Err34,
8530, "\x02\x04\x51\x01\x20\x02\x00\x00\x04\x06\x5F\x21\x00\x01\x00"
"\x01\x0B\x09\x01\x00\x2C\xFF\xFF\xFF\xFF\x00\x20\x00\x05\x20"
"\x00\x00\x00\x12\x00\x00\x00\x00\x00\x00",
8538, "\x00",
8529, "\x00",
8531, (char*)&_lee_ccn2,
8518, "\x02\x04\x51\x01\x20\x02\x00\x00\x03\x06\x5F\x21\x00\x01\x00"
"\x01\x0B\x09\x01\x00\x2C\xFF\xFF\xFF\xFF\x00\x20\x00\x04\x00"
"\x00\x00\x00\x11\x00\x00\x00\x00\x00\x00",
8526, "\x00",
8517, "\x00",
8519, (char*)&_lee_ccn1,
12506, "\x02\x04\x4A\x00\x00\x00\x00\x00\x00\x00\x5F\x00\x00\x00\x00"
"\x00\x0B\x00\x00\x0F\x02\x00\x00\x00\x00\x00\x00\x00\x00\x22"
"\x00\x00\x00\x10\x00\x00\x00\x00\x00\x00",
12510, "\x2C",
12508, "\x2B",
12505, "\x00",
12507, (char*)&_Comp_Ini,
4470, "\x00\x00\x0F\x00",
4469, "\x3E\x3E\x3E\x3E\x3E\x3E\x3E\x41\x4C\x45\x52\x54\x41\x21\x3C"
"\x3C\x3C\x3C\x3C\x3C\x3E\x3E\x3E\x3E\x45\x6C\x20\x63\x6F\x64"
"\x69\x67\x6F\x20\x6E\x6F\x20\x20\x20\x20\x74\x69\x65\x6E\x65"
"\x20\x73\x65\x67\x75\x6E\x64\x6F\x20\x43\x6F\x6E\x74\x65\x6F"
"\x3E\x0A\x0A\x0A\x3E\x50\x72\x65\x73\x69\x6F\x6E\x61\x20\x45"
"\x6E\x74\x65\x72\x20\x70\x61\x72\x61\x63\x6F\x6E\x74\x61\x72"
"\x20\x6F\x74\x72\x6F\x20\x43\xF3\x64\x69\x67\x6F\x3E\x00",
8458, "\x04\x10\x15\x03\x20\x02\x00\x00\x05\x01\x5F\x21\x00\x01\x00"
"\x01\x0E\x09\x01\x00\x2C\xFF\xFF\xFF\xFF\x00\x25\x00\x05\x00"
"\x00\x00\x00\x0E\x00\x00\x00\x00\x00\x00",
8466, "\x00",
8465, "\x03\x09\x05\x01\x08\x0D\x01\x05\x06\x01\x13\x0D\x14\x05\x02\x01\x11\x0D\x12\x0D\x00",
8457, "\x3E\x3E\x3E\x3E\x3E\x3E\x3E\x41\x4C\x45\x52\x54\x41\x21\x3C"
"\x3C\x3C\x3C\x3C\x3C\x3E\x3E\x3E\x3E\x45\x6C\x20\x63\x6F\x64"
"\x69\x67\x6F\x20\x79\x61\x20\x20\x20\x20\x74\x69\x65\x6E\x65"
"\x20\x54\x65\x72\x63\x65\x72\x20\x43\x6F\x6E\x74\x65\x6F\x3E"
"\x0A\x54\x65\x72\x63\x65\x72\x20\x43\x6F\x6E\x74\x65\x6F\x3A"
"\x0A\x0A\x3E\x50\x72\x65\x73\x69\x6F\x6E\x61\x20\x45\x6E\x74"
"\x65\x72\x20\x70\x61\x72\x61\x63\x6F\x6E\x74\x61\x72\x20\x6F"
"\x74\x72\x6F\x20\x43\xF3\x64\x69\x67\x6F\x3E\x00",
8459, (char*)&_Msg_Err33,
8446, "\x04\x10\x0A\x01\x00\x0A\x00\x00\x00\x00\x5F\x21\x40\x01\x00"
"\x01\x0E\x09\x01\x06\x2C\xFF\xFF\xFF\xFF\x00\x00\x00\x00\x23"
"\x00\x00\x00\x0D\x00\x00\x00\x00\x00\x00",
8450, "\x43\x4F\x4D\x50\x5F\x45\x58\x33\x2E\x54\x58\x54\x00",
8448, "\x19",
8445, "\x00",
8447, (char*)&_Val_Con3,
4422, "\x00\x00\x0C\x00",
4421, "\x3E\x3E\x3E\x3E\x3E\x3E\x3E\x41\x4C\x45\x52\x54\x41\x21\x3C"
"\x3C\x3C\x3C\x3C\x3C\x3E\x3E\x3E\x3E\x45\x6C\x20\x63\x6F\x64"
"\x69\x67\x6F\x20\x6E\x6F\x20\x20\x20\x20\x74\x69\x65\x6E\x65"
"\x20\x70\x72\x69\x6D\x65\x72\x20\x43\x6F\x6E\x74\x65\x6F\x3E"
"\x0A\x0A\x0A\x3E\x50\x72\x65\x73\x69\x6F\x6E\x61\x20\x45\x6E"
"\x74\x65\x72\x20\x70\x61\x72\x61\x63\x6F\x6E\x74\x61\x72\x20"
"\x6F\x74\x72\x6F\x20\x43\xF3\x64\x69\x67\x6F\x3E\x00",
8386, "\x04\x10\x4A\x01\x00\x0A\x00\x00\x00\x00\x5F\x21\x40\x01\x00"
"\x01\x0E\x09\x01\x06\x2C\xFF\xFF\xFF\xFF\x00\x00\x00\x00\x23"
"\x00\x00\x00\x0B\x00\x00\x00\x00\x00\x00",
8390, "\x43\x4F\x4D\x50\x5F\x45\x58\x32\x2E\x54\x58\x54\x00",
8388, "\x19",
8385, "\x00",
8387, (char*)&_Val_Con2,
8302, "\x04\x10\x15\x03\x00\x0A\x00\x00\x01\x04\x5F\x21\x00\x01\x00"
"\x00\x0E\x09\x01\x06\x2C\xFF\xFF\xFF\xFF\x00\x00\x00\x00\x20"
"\x00\x00\x00\x0A\x00\x00\x00\x00\x00\x00",
8306, "\x43\x4F\x4D\x50\x5F\x45\x58\x2E\x54\x58\x54\x00",
8309, "\x03\x09\x05\x01\x08\x0D\x01\x05\x06\x01\x13\x0D\x14\x05\x02\x01\x11\x0D\x12\x0D\x00",
8301, "\x50\x54\x20\x20\x20\x4C\x65\x65\x20\x43\x4F\x44\x49\x47\x4F"
"\x3A\x20\x20\x0A\x43\x4F\x44\x3A\x0A\x20\x20\x20\x20\x20\x20"
"\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20"
"\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20"
"\x20\x20\x20\x20\x46\x35\x3A\x46\x69\x6E\x20\x64\x65\x20\x43"
"\x61\x73\x69\x6C\x6C\x65\x72\x6F\x20\x46\x36\x3A\x42\x6F\x72"
"\x72\x61\x72\x20\xFA\x6C\x74\x69\x6D\x61\x20\x20\x20\x20\x20"
"\x20\x20\x43\x61\x70\x74\x75\x72\x61\x0A\x46\x38\x3A\x53\x61"
"\x6C\x69\x72\x00",
8303, (char*)&_Val_Cont,
4182, "\x00\x00\x09\x00",
4181, "\x0A\x0A\x20\x20\x20\x20\x20\x43\xD3\x44\x49\x47\x4F\x20\x4E"
"\x4F\x0A\x20\x53\x45\x20\x45\x4E\x43\x55\x45\x4E\x54\x52\x41"
"\x20\x45\x4E\x20\x4C\x41\x20\x20\x20\x20\x42\x41\x53\x45\x20"
"\x44\x45\x20\x44\x41\x54\x4F\x53\x0A\x20\x20\x20\x20\x20\x43"
"\x4F\x72\x72\x75\x67\x61\x64\x6F\x0A\x0A\x20\x20\x3C\x50\x72"
"\x65\x73\x69\x6F\x6E\x61\x20\x45\x6E\x74\x65\x72\x3E\x00",
4122, "\x07\x00\x08\x00",
4121, "\x0A\x0A\x20\x20\x20\x20\x20\x53\x61\x6C\x69\x65\x6E\x64\x6F"
"\x00",
8074, "\x04\x14\x15\x01\x00\x0A\x00\x00\x01\x04\x5F\x21\x40\x01\x00"
"\x01\x12\x09\x04\x08\x2C\xFF\xFF\xFF\xFF\x00\x19\x00\x00\x23"
"\x00\x00\x00\x07\x00\x00\x00\x00\x00\x00",
8078, "\x49\x6E\x76\x5F\x50\x54\x50\x2E\x74\x78\x74\x00",
8076, "\x19",
8073, "\x50\x54\x20\x20\x20\x4C\x65\x65\x20\x43\x4F\x44\x49\x47\x4F"
"\x3A\x20\x20\x0A\x43\x4F\x44\x3A\x0A\x20\x20\x20\x20\x20\x20"
"\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20"
"\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20"
"\x20\x20\x20\x20\x0A\x43\x41\x4E\x54\x49\x44\x41\x44\x3A\x0A"
"\x46\x35\x3A\x46\x69\x6E\x20\x64\x65\x20\x43\x61\x73\x69\x6C"
"\x6C\x65\x72\x6F\x0A\x46\x38\x3A\x53\x61\x6C\x69\x72\x00",
8075, (char*)&_DB_SKU3,
8062, "\x04\x22\x16\x03\x00\x02\x00\x00\x02\x0F\x5F\x21\x00\x01\x00"
"\x01\x20\x09\x01\x00\x2C\xFF\xFF\xFF\xFF\x00\x00\x00\x00\x00"
"\x00\x00\x00\x06\x00\x00\x00\x00\x00\x00",
8069, "\x03\x09\x05\x01\x08\x0D\x01\x05\x06\x01\x13\x0D\x14\x05\x02\x01\x11\x0D\x12\x0D\x00",
8061, "\x2A\x49\x6E\x76\x65\x6E\x74\x61\x72\x69\x6F\x20\x41\x4C\x4D"
"\x20\x50\x54\x2A\x0A\x0A\x4C\x65\x65\x20\x43\x41\x53\x49\x4C"
"\x4C\x45\x52\x4F\x3A\x0A\x0A\x0A\x0A\x46\x35\x3A\x46\x69\x6E"
"\x20\x64\x65\x20\x4E\x49\x56\x45\x4C\x0A\x46\x38\x3A\x53\x61"
"\x6C\x69\x72\x00",
8063, (char*)&_Casillero3,
8050, "\x04\x22\x16\x03\x00\x02\x00\x00\x02\x0B\x5F\x21\x00\x01\x00"
"\x01\x20\x09\x01\x00\x2C\xFF\xFF\xFF\xFF\x00\x00\x00\x00\x00"
"\x00\x00\x00\x05\x00\x00\x00\x00\x00\x00",
8057, "\x03\x09\x05\x01\x08\x0D\x01\x05\x06\x01\x13\x0D\x14\x05\x02\x01\x11\x0D\x12\x0D\x00",
8049, "\x2A\x49\x6E\x76\x65\x6E\x74\x61\x72\x69\x6F\x20\x41\x4C\x4D"
"\x20\x50\x54\x2A\x0A\x0A\x4C\x65\x65\x20\x4E\x49\x56\x45\x4C"
"\x3A\x0A\x0A\x0A\x0A\x46\x35\x3A\x46\x69\x6E\x20\x64\x65\x20"
"\x4C\x41\x44\x4F\x0A\x46\x38\x3A\x53\x61\x6C\x69\x72\x00",
8051, (char*)&_Nivel3,
8038, "\x04\x22\x16\x03\x00\x02\x00\x00\x02\x0A\x5F\x21\x00\x01\x00"
"\x01\x20\x09\x01\x00\x2C\xFF\xFF\xFF\xFF\x00\x00\x00\x00\x00"
"\x00\x00\x00\x04\x00\x00\x00\x00\x00\x00",
8045, "\x03\x09\x05\x01\x08\x0D\x01\x05\x06\x01\x13\x0D\x14\x05\x02\x01\x11\x0D\x12\x0D\x00",
8037, "\x2A\x49\x6E\x76\x65\x6E\x74\x61\x72\x69\x6F\x20\x41\x4C\x4D"
"\x20\x50\x54\x2A\x0A\x0A\x4C\x65\x65\x20\x4C\x41\x44\x4F\x3A"
"\x0A\x0A\x0A\x0A\x46\x35\x3A\x46\x69\x6E\x20\x64\x65\x20\x41"
"\x4E\x41\x51\x55\x45\x4C\x0A\x46\x38\x3A\x53\x61\x6C\x69\x72"
"\x00",
8039, (char*)&_Lado3,
8026, "\x04\x22\x16\x03\x00\x02\x00\x00\x02\x0D\x5F\x21\x00\x01\x00"
"\x01\x20\x09\x01\x00\x2C\xFF\xFF\xFF\xFF\x00\x00\x00\x00\x00"
"\x00\x00\x00\x03\x00\x00\x00\x00\x00\x00",
8033, "\x03\x09\x05\x01\x08\x0D\x01\x05\x06\x01\x13\x0D\x14\x05\x02\x01\x11\x0D\x12\x0D\x00",
8025, "\x2A\x49\x6E\x76\x65\x6E\x74\x61\x72\x69\x6F\x20\x41\x4C\x4D"
"\x20\x50\x54\x2A\x0A\x0A\x4C\x65\x65\x20\x52\x41\x43\x4B\x3A"
"\x0A\x0A\x0A\x0A\x46\x35\x3A\x4D\x65\x6E\xFA\x0A\x46\x38\x3A"
"\x53\x61\x6C\x69\x72\x00",
8027, (char*)&_Rack3,
4014, "\x00\x00\x02\x00",
4013, "\x20\x20\x20\x20\x43\x4F\x4C\x4F\x52\x41\x4E\x54\x45\x53\x0A"
"\x20\x20\x20\x20\x49\x4D\x50\x4F\x52\x54\x41\x44\x4F\x53\x20"
"\x20\x20\x0A\x20\x20\x20\x20\x53\x2E\x41\x2E\x20\x64\x65\x20"
"\x43\x2E\x56\x2E\x20\x20\x20\x20\x20\x20\x54\x65\x72\x63\x65"
"\x72\x20\x43\x6F\x6E\x74\x65\x6F\x20\x50\x54\x20\x20\x20\x20"
"\x20\x20\x20\x33\x30\x2F\x4D\x61\x72\x2F\x32\x31\x0A\x20\x20"
"\x20\x20\x20\x20\x20\x20\x20\x0A\x20\x20\x3C\x50\x72\x65\x73"
"\x69\x6F\x6E\x61\x20\x45\x6E\x74\x65\x72\x3E\x0A\x20\x20\x46"
"\x38\x3D\x4D\x65\x6E\xFA\x20\x50\x72\x69\x6E\x63\x69\x70\x61"
"\x6C\x00",
48134, "\x86\x55",
44002, "\x00",
44001, "\x37\x34\x31\x08\x00\x86\x0D\x00\x38\x35\x32\x30\x11\x13\x87"
"\x00\x39\x36\x33\x2E\x10\x12\x88\x00\x00\x00\x00\x84\x20\x80"
"\x89\x00\x53\x4A\x41\x08\x00\x86\x0D\x00\x56\x4D\x44\x40\x11"
"\x13\x87\x00\x59\x50\x47\x3B\x10\x12\x88\x00\x00\x00\x00\x84"
"\x20\x80\x89\x00\x54\x4B\x42\x08\x00\x86\x0D\x00\x57\x4E\x45"
"\x3F\x11\x13\x87\x00\x5A\x51\x48\x2E\x10\x12\x88\x00\x00\x00"
"\x00\x84\x20\x80\x89\x00\x55\x4C\x43\x08\x00\x86\x0D\x00\x58"
"\x4F\x46\x26\x11\x13\x87\x00\x5F\x52\x49\x2C\x10\x12\x88\x00"
"\x00\x00\x00\x84\x20\x80\x89\x00\x2D\x3A\x23\x5C\x84\x8A\x0D"
"\x00\x2B\x3D\x24\x27\x11\x92\x8B\x00\x2A\x2F\x25\x21\x10\x93"
"\x8C\x00\x00\x00\x00\x84\x20\x80\x8D\x00",
44003, "\x00",
0,0
};

struct CtrlCenter ccnt = {
"HT-630",
"C:\\Jobgen_dem\\UnitechInventario\\Tercer_CC\\Ter_CC.jgp",
"",
1,
4,
122,
143,
"\x01\x01\x02\x02\x03\x02\x04\x02\x05\x02\x06\x02\x0A\x01\x0F"
"\x01\x19\x02\x20\x02\x23\x01\x25\x02\x26\x02\x27\x01\x2A\x03"
"\x2B\x02\x2C\x02\x2E\x02\x2F\x05\x30\x05\x31\x05\x32\x01\x33"
"\x01\x3E\x02\x3F\x02\x55\x01\x56\x01\x57\x01\x5C\x01\x5D\x01"
"\x74\x02\x79\x02\x7A\x02\x00",
"\x06\x19\x20\x25\x3E\x3F\x00",
"\x01\x02\x03\x00\x01\x00\x02\x03\x04\x00\x01\x00\x03\x04\x05"
"\x00\x01\x00\x04\x06\x05\x00\x08\x00\x05\x05\x04\x00\x08\x00"
"\x06\x04\x03\x00\x08\x00\x07\x03\x02\x00\x08\x00\x08\x02\x01"
"\x00\x08\x00\x09\x06\x0A\x00\x08\x00\x0A\x05\x0A\x00\x08\x00"
"\x0B\x04\x0A\x00\x08\x00\x0C\x03\x0A\x00\x08\x00\x0D\x02\x0A"
"\x00\x08\x00\x0E\x01\x0A\x00\x08\x00\x0F\x05\x19\x00\x01\x00"
"\x10\x0F\x19\x05\x88\x00\x11\x19\x0A\x00\x08\x00\x12\x19\x20"
"\x00\x02\x00\x13\x19\x23\x00\x04\x00\x14\x25\x26\x00\x02\x00"
"\x15\x20\x27\x00\x04\x00\x16\x26\x19\x00\x08\x00\x17\x23\x19"
"\x00\x08\x00\x18\x27\x19\x00\x08\x00\x19\x2B\x2C\x00\x01\x00"
"\x1A\x2C\x2A\x00\x01\x00\x1B\x25\x06\x00\x04\x00\x1C\x20\x2B"
"\x00\x02\x00\x1D\x2A\x25\x00\x02\x00\x1E\x2E\x19\x00\x08\x00"
"\x1F\x2A\x2E\x00\x04\x00\x20\x19\x32\x00\x08\x00\x21\x32\x19"
"\x00\x08\x00\x22\x32\x2F\x00\x08\x00\x23\x2F\x30\x00\x01\x00"
"\x24\x30\x31\x00\x01\x00\x25\x31\x33\x00\x01\x00\x26\x33\x19"
"\x00\x08\x00\x27\x19\x05\x00\x08\x00\x2C\x01\x02\x00\x08\x00"
"\x53\x06\x5C\x00\x04\x00\x54\x5C\x3F\x00\x08\x00\x55\x3F\x5D"
"\x00\x04\x00\x56\x5D\x3E\x00\x08\x00\x57\x3E\x0F\x00\x04\x00"
"\x7F\x06\x74\x00\x02\x00\x81\x74\x57\x00\x08\x00\x8C\x3F\x79"
"\x00\x02\x00\x8D\x3E\x7A\x00\x02\x00\x8E\x79\x56\x00\x08\x00"
"\x8F\x7A\x55\x00\x08\x00\x00",
1,
1,
1,
2,
20,
8,
20,
8,
16,
4,
1,
2,
0,
"\x53\x61\x6C\x69\x72\x20\x28\x31\x2D\x53\x2F\x30\x2D\x4E\x29"
"\x3F\x00",
"\x4C\x69\x73\x74\x6F\x00",
"\x41\x62\x6F\x72\x74\x61\x72\x00",
"\x52\x65\x76\x69\x73\x61\x72\x00",
"\x44\x61\x74\x6F\x00",
"\x45\x64\x69\x74\x61\x72\x00",
"\x45\x6E\x63\x6F\x6E\x74\x72\x61\x64\x6F\x00",
"\x4D\x6F\x64\x69\x66\x69\x63\x61\x72\x3F\x00",
"\x4E\x6F\x20\x68\x61\x79\x20\x44\x61\x74\x6F\x73\x00",
"\x4E\x6F\x20\x65\x6E\x63\x6F\x6E\x74\x72\x61\x64\x6F\x00",
"\x42\x75\x73\x63\x61\x72\x00",
"\x53\x69\x67\x75\x69\x65\x6E\x74\x65\x3F\x00",
"\x45\x73\x70\x65\x72\x65\x2E\x2E\x2E\x00",
"\x42\x6F\x72\x72\x61\x72\x20\x74\x6F\x64\x6F\x3F\x00",
"\x42\x6F\x72\x72\x61\x20\x55\x6C\x74\x69\x6D\x6F\x3F\x00",
"\x45\x6E\x76\x69\x61\x72\x00",
"\x4E\x6F\x20\x68\x61\x79\x20\x52\x65\x67\x69\x73\x74\x72\x6F"
"\x00",
"\x54\x6F\x74\x61\x6C\x00",
"\x4E\x6F\x20\x68\x61\x79\x20\x41\x72\x63\x68\x69\x76\x6F\x21"
"\x00",
"\x45\x72\x72\x6F\x72\x20\x61\x6C\x20\x41\x62\x72\x69\x72\x21"
"\x00",
"\x45\x72\x72\x6F\x72\x20\x64\x65\x20\x4C\x65\x63\x74\x75\x72"
"\x61\x21\x00",
"\x45\x72\x72\x6F\x72\x20\x64\x65\x20\x45\x73\x63\x72\x69\x74"
"\x75\x72\x61\x21\x00",
"\x45\x72\x72\x6F\x72\x20\x61\x6C\x20\x45\x73\x63\x72\x69\x62"
"\x69\x72\x21\x00",

(void*)__cdata,
(void*)__GetExpression,

15036
};

int _jobinit() {return (int)&ccnt;}

