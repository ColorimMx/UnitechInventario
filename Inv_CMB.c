/***
JobGen Plus, (C)Unitech America Inc.

job: C:\Jobgen_dem\Desarrollos\Inv_CMB.jgp

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

long _cantidad =0;
char _casillero[34]; // 1..32, len includes terminator \0
char _codigo_bar[16]; // 1..14, len includes terminator \0
char _codigo_pro[34]; // 1..32, len includes terminator \0
char _descripcion[42]; // 1..40, len includes terminator \0
char _empleado[6]; // 4..4, len includes terminator \0
char _fyh[20]; // 1..19, len includes terminator \0
char _lado[34]; // 1..32, len includes terminator \0
int _linea2 =0;
char _nivel[34]; // 1..32, len includes terminator \0
char _rack[34]; // 1..32, len includes terminator \0
char _ValEmp[34]; // 1..32, len includes terminator \0
int _Sum_L1 =0;


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
40003, "\x02",
40002, "\x08\x49\x6E\x76\x5F\x43\x4D\x42\x2E\x74\x78\x74\x08\x02\x09"
"\x49\x6E\x76\x5F\x43\x4D\x42\x09\x02\x01\x00",
40033, "\x00\x00",
40032, "\x49\x6E\x76\x5F\x43\x4D\x42\x2E\x74\x78\x74\x00",
40031, "\x49\x6E\x76\x5F\x43\x4D\x42\x00",
40030, "\x53\x75\x6D\x5F\x4C\x31\x09\x14\x01\x63\x6F\x64\x69\x67\x6F"
"\x5F\x70\x72\x6F\x09\x13\x01\x63\x61\x6E\x74\x69\x64\x61\x64"
"\x09\x07\x01\x6C\x69\x6E\x65\x61\x32\x09\x12\x01\x00",
40029, "\x14\x13\x07\x12\x00",
40026, "\x09\x00",
40025, "\x0A\x00",
36313, "\x8D",
36301, "\x8D",
36289, "\x0D",
36265, "\x0D",
36253, "\x0D",
36229, "\x84",
36193, "\x8D",
36181, "\x8D",
36169, "\x8D",
36157, "\x8D",
36133, "\x8A",
36121, "\x8A",
36109, "\x8A",
36097, "\x8A",
36085, "\x8A",
36013, "\x0D",
40001, "\x41\x6C\x6D\x5F\x50\x74\x5F\x43\x09\x01\x01\x72\x61\x63\x6B"
"\x09\x02\x01\x6C\x61\x64\x6F\x09\x03\x01\x6E\x69\x76\x65\x6C"
"\x09\x04\x01\x63\x61\x73\x69\x6C\x6C\x65\x72\x6F\x09\x05\x01"
"\x63\x6F\x64\x69\x67\x6F\x5F\x62\x61\x72\x09\x06\x01\x63\x61"
"\x6E\x74\x69\x64\x61\x64\x09\x07\x01\x66\x79\x68\x09\x08\x01"
"\x53\x61\x6C\x69\x65\x6E\x64\x6F\x09\x0A\x01\x72\x75\x6E\x6A"
"\x6F\x62\x31\x31\x09\x0B\x01\x65\x6D\x70\x6C\x65\x61\x64\x6F"
"\x09\x0C\x01\x6E\x6F\x52\x65\x67\x09\x0D\x01\x56\x61\x6C\x45"
"\x6D\x70\x09\x0E\x01\x43\x6F\x64\x4E\x6F\x52\x65\x67\x09\x0F"
"\x01\x64\x65\x73\x63\x72\x69\x70\x63\x69\x6F\x6E\x09\x11\x01"
"\x6C\x69\x6E\x65\x61\x32\x09\x12\x01\x63\x6F\x64\x69\x67\x6F"
"\x5F\x70\x72\x6F\x09\x13\x01\x53\x75\x6D\x5F\x4C\x31\x09\x14"
"\x01\x00",
12242, "\x01\x04\x4A\x00\x00\x00\x00\x00\x00\x00\x5F\x00\x00\x00\x00"
"\x00\x06\x01\x02\x0F\x02\x00\x00\x00\x00\x00\x00\x00\x00\x12"
"\x00\x00\x00\x12\x00\x00\x00\x00\x00\x00",
12246, "\x12",
12245, "\x12",
12244, "\x31\x00",
12241, "\x00",
12243, (char*)&_Sum_L1,
8230, "\x04\x22\x4A\x00\x20\x02\x00\x00\x00\x00\x5F\x21\x00\x01\x00"
"\x01\x20\x09\x01\x00\x2C\xFF\xFF\xFF\xFF\x00\x06\x00\x02\x00"
"\x00\x00\x00\x11\x00\x00\x00\x00\x00\x00",
8238, "\x00",
8229, "\x00",
8231, (char*)&_codigo_pro,
8218, "\x01\x04\x4A\x00\x00\x02\x00\x00\x00\x00\x5F\x21\x00\x01\x00"
"\x01\x06\x09\x01\x00\x2C\xFF\xFF\xFF\xFF\x00\x06\x00\x07\x22"
"\x00\x00\x00\x10\x00\x00\x00\x00\x00\x00",
8220, "\x14",
8217, "\x00",
8219, (char*)&_linea2,
8206, "\x04\x2A\x11\x03\x20\x02\x00\x00\x03\x00\x5F\x21\x00\x01\x00"
"\x01\x28\x09\x01\x00\x2C\xFF\xFF\xFF\xFF\x00\x06\x00\x05\x00"
"\x00\x00\x00\x0F\x00\x00\x00\x00\x00\x00",
8214, "\x00",
8213, "\x03\x09\x05\x01\x08\x0D\x01\x05\x06\x01\x13\x0D\x14\x05\x02\x01\x11\x0D\x12\x0D\x00",
8205, "\x00",
8207, (char*)&_descripcion,
4182, "\x00\x00\x0E\x00",
4181, "\x0A\x0A\x20\x20\x20\x20\x20\x43\xD3\x44\x49\x47\x4F\x20\x4E"
"\x4F\x0A\x20\x53\x45\x20\x45\x4E\x43\x55\x45\x4E\x54\x52\x41"
"\x20\x45\x4E\x20\x4C\x41\x20\x20\x20\x20\x42\x41\x53\x45\x20"
"\x44\x45\x20\x44\x41\x54\x4F\x53\x0A\x0A\x0A\x20\x20\x3C\x50"
"\x72\x65\x73\x69\x6F\x6E\x61\x20\x45\x6E\x74\x65\x72\x3E\x00",
8170, "\x04\x22\x12\x03\x20\x02\x00\x00\x04\x03\x5F\x21\x00\x01\x00"
"\x01\x20\x09\x01\x00\x2C\xFF\xFF\xFF\xFF\x00\x0C\x00\x02\x00"
"\x00\x00\x00\x0D\x00\x00\x00\x00\x00\x00",
8178, "\x00",
8177, "\x03\x09\x05\x01\x08\x0D\x01\x05\x06\x01\x13\x0D\x14\x05\x02\x01\x11\x0D\x12\x0D\x00",
8169, "\x2A\x49\x6E\x76\x65\x6E\x74\x61\x72\x69\x6F\x20\x41\x4C\x4D"
"\x20\x50\x54\x2A\x0A\x0A\x20\x20\x20\x20\x20\x42\x49\x45\x4E"
"\x56\x45\x4E\x49\x44\x4F\x20\x20\x20\x20\x0A\x0A\x0A\x0A\x0A"
"\x20\x20\x3C\x50\x72\x65\x73\x69\x6F\x6E\x61\x20\x45\x6E\x74"
"\x65\x72\x3E\x00",
8171, (char*)&_ValEmp,
4158, "\x00\x00\x0C\x00",
4157, "\x0A\x20\x0A\x20\x20\x20\x20\x20\x45\x4D\x50\x4C\x45\x41\x44"
"\x4F\x0A\x20\x20\x20\x20\x20\x20\x20\x20\x4E\x4F\x0A\x20\x20"
"\x20\x20\x20\x52\x45\x47\x49\x53\x54\x52\x41\x44\x4F\x0A\x0A"
"\x0A\x20\x20\x3C\x50\x72\x65\x73\x69\x6F\x6E\x61\x20\x45\x6E"
"\x74\x65\x72\x3E\x00",
8146, "\x04\x06\x16\x03\x00\x0A\x00\x00\x04\x07\x5F\x21\x00\x01\x00"
"\x04\x04\x09\x01\x02\x2C\xFF\xFF\xFF\xFF\x00\x00\x00\x00\x00"
"\x00\x00\x00\x0B\x00\x00\x00\x00\x00\x00",
8150, "\x65\x6D\x70\x6C\x5F\x63\x6F\x6C\x2E\x74\x78\x74\x00",
8153, "\x03\x09\x05\x01\x08\x0D\x01\x05\x06\x01\x13\x0D\x14\x05\x02\x01\x11\x0D\x12\x0D\x00",
8145, "\x20\x2A\x2A\x2A\x20\x43\x4F\x4C\x4F\x52\x41\x4E\x54\x45\x53"
"\x20\x2A\x2A\x2A\x0A\x20\x20\x20\x20\x20\x20\x52\x65\x67\x69"
"\x73\x74\x72\x6F\x20\x20\x20\x20\x20\x0A\x0A\x4C\x65\x65\x20"
"\x63\xF3\x64\x69\x67\x6F\x20\x74\x61\x72\x6A\x65\x74\x61\x3A"
"\x0A\x0A\x0A\x0A\x45\x53\x43\x3D\x52\x65\x67\x72\x65\x73\x6F"
"\x20\x61\x20\x4D\x65\x6E\xFA\x00",
8147, (char*)&_empleado,
32134, "\x41\x6C\x6D\x5F\x50\x74\x00",
32133, "\x43\x4F\x4C\x4F\x52\x5F\x50\x54\x2E\x65\x78\x65\x00",
4122, "\x07\x00\x0A\x00",
4121, "\x0A\x0A\x20\x20\x20\x20\x20\x53\x61\x6C\x69\x65\x6E\x64\x6F"
"\x00",
8098, "\x05\x14\x4A\x23\x00\x02\x00\x00\x00\x00\x5F\x41\x00\x01\x00"
"\x01\x13\x09\x01\x00\x2C\xFF\xFF\xFF\xFF\x00\x00\x00\x00\x00"
"\x00\x00\x00\x09\x00\x00\x00\x00\x00\x00",
8105, "\x03\x09\x05\x01\x08\x0D\x01\x05\x06\x01\x13\x0D\x14\x05\x02\x01\x11\x0D\x12\x0D\x00",
8097, "\x00",
8099, (char*)&_fyh,
8086, "\x02\x04\x11\x03\x00\x02\x00\x00\x05\x0A\x5F\x21\x00\x01\x00"
"\x01\x0B\x09\x01\x00\x2C\xFF\xFF\xFF\xFF\x00\x00\x00\x00\x00"
"\x00\x00\x00\x08\x00\x00\x00\x00\x00\x00",
8093, "\x03\x09\x05\x01\x08\x0D\x01\x05\x06\x01\x13\x0D\x14\x05\x02\x01\x11\x0D\x12\x0D\x00",
8085, "\x00",
8087, (char*)&_cantidad,
8074, "\x04\x10\x16\x03\x00\x0A\x00\x00\x01\x03\x5F\x21\x00\x01\x00"
"\x01\x0E\x09\x06\x07\x2C\xFF\xFF\xFF\xFF\x00\x00\x00\x00\x00"
"\x00\x00\x00\x07\x00\x00\x00\x00\x00\x00",
8078, "\x50\x72\x6F\x64\x5F\x44\x42\x2E\x74\x78\x74\x00",
8081, "\x03\x09\x05\x01\x08\x0D\x01\x05\x06\x01\x13\x0D\x14\x05\x02\x01\x11\x0D\x12\x0D\x00",
8073, "\x50\x54\x20\x20\x20\x4C\x65\x65\x20\x43\x4F\x44\x49\x47\x4F"
"\x3A\x20\x20\x50\x54\x0A\x43\x4F\x44\x3A\x20\x0A\x0A\x0A\x43"
"\x61\x6E\x74\x69\x64\x61\x64\x3A\x0A\x46\x35\x3A\x46\x69\x6E"
"\x20\x64\x65\x20\x43\x61\x73\x69\x6C\x6C\x65\x72\x6F\x0A\x46"
"\x38\x3A\x53\x61\x6C\x69\x72\x00",
8075, (char*)&_codigo_bar,
8062, "\x04\x22\x16\x03\x00\x02\x00\x00\x02\x0F\x5F\x21\x00\x01\x00"
"\x01\x20\x09\x01\x00\x2C\xFF\xFF\xFF\xFF\x00\x00\x00\x00\x00"
"\x00\x00\x00\x06\x00\x00\x00\x00\x00\x00",
8069, "\x03\x09\x05\x01\x08\x0D\x01\x05\x06\x01\x13\x0D\x14\x05\x02\x01\x11\x0D\x12\x0D\x00",
8061, "\x2A\x49\x6E\x76\x65\x6E\x74\x61\x72\x69\x6F\x20\x41\x4C\x4D"
"\x20\x50\x54\x2A\x0A\x0A\x4C\x65\x65\x20\x43\x41\x53\x49\x4C"
"\x4C\x45\x52\x4F\x3A\x0A\x0A\x0A\x0A\x46\x35\x3A\x46\x69\x6E"
"\x20\x64\x65\x20\x4E\x49\x56\x45\x4C\x0A\x46\x38\x3A\x53\x61"
"\x6C\x69\x72\x00",
8063, (char*)&_casillero,
8050, "\x04\x22\x16\x03\x00\x02\x00\x00\x02\x0B\x5F\x21\x00\x01\x00"
"\x01\x20\x09\x01\x00\x2C\xFF\xFF\xFF\xFF\x00\x00\x00\x00\x00"
"\x00\x00\x00\x05\x00\x00\x00\x00\x00\x00",
8057, "\x03\x09\x05\x01\x08\x0D\x01\x05\x06\x01\x13\x0D\x14\x05\x02\x01\x11\x0D\x12\x0D\x00",
8049, "\x2A\x49\x6E\x76\x65\x6E\x74\x61\x72\x69\x6F\x20\x41\x4C\x4D"
"\x20\x50\x54\x2A\x0A\x0A\x4C\x65\x65\x20\x4E\x49\x56\x45\x4C"
"\x3A\x0A\x0A\x0A\x0A\x46\x35\x3A\x46\x69\x6E\x20\x64\x65\x20"
"\x4C\x41\x44\x4F\x0A\x46\x38\x3A\x53\x61\x6C\x69\x72\x00",
8051, (char*)&_nivel,
8038, "\x04\x22\x16\x03\x00\x02\x00\x00\x02\x0A\x5F\x21\x00\x01\x00"
"\x01\x20\x09\x01\x00\x2C\xFF\xFF\xFF\xFF\x00\x00\x00\x00\x00"
"\x00\x00\x00\x04\x00\x00\x00\x00\x00\x00",
8045, "\x03\x09\x05\x01\x08\x0D\x01\x05\x06\x01\x13\x0D\x14\x05\x02\x01\x11\x0D\x12\x0D\x00",
8037, "\x2A\x49\x6E\x76\x65\x6E\x74\x61\x72\x69\x6F\x20\x41\x4C\x4D"
"\x20\x50\x54\x2A\x0A\x0A\x4C\x65\x65\x20\x4C\x41\x44\x4F\x3A"
"\x0A\x0A\x0A\x0A\x46\x35\x3A\x46\x69\x6E\x20\x64\x65\x20\x41"
"\x4E\x41\x51\x55\x45\x4C\x0A\x46\x38\x3A\x53\x61\x6C\x69\x72"
"\x00",
8039, (char*)&_lado,
8026, "\x04\x22\x16\x03\x00\x02\x00\x00\x02\x0D\x5F\x21\x00\x01\x00"
"\x01\x20\x09\x01\x00\x2C\xFF\xFF\xFF\xFF\x00\x00\x00\x00\x00"
"\x00\x00\x00\x03\x00\x00\x00\x00\x00\x00",
8033, "\x03\x09\x05\x01\x08\x0D\x01\x05\x06\x01\x13\x0D\x14\x05\x02\x01\x11\x0D\x12\x0D\x00",
8025, "\x2A\x49\x6E\x76\x65\x6E\x74\x61\x72\x69\x6F\x20\x41\x4C\x4D"
"\x20\x50\x54\x2A\x0A\x0A\x4C\x65\x65\x20\x52\x41\x43\x4B\x3A"
"\x0A\x0A\x0A\x0A\x46\x35\x3A\x4D\x65\x6E\xFA\x0A\x46\x38\x3A"
"\x53\x61\x6C\x69\x72\x00",
8027, (char*)&_rack,
4014, "\x00\x00\x02\x00",
4013, "\x20\x20\x20\x20\x43\x4F\x4C\x4F\x52\x41\x4E\x54\x45\x53\x0A"
"\x20\x20\x20\x20\x49\x4D\x50\x4F\x52\x54\x41\x44\x4F\x53\x20"
"\x20\x20\x0A\x20\x20\x20\x20\x53\x2E\x41\x2E\x20\x64\x65\x20"
"\x43\x2E\x56\x2E\x20\x20\x20\x20\x20\x20\x20\x49\x6E\x76\x65"
"\x6E\x74\x61\x72\x69\x6F\x20\x50\x54\x20\x20\x20\x20\x20\x20"
"\x20\x20\x20\x33\x30\x2F\x4D\x61\x72\x2F\x32\x31\x0A\x20\x20"
"\x20\x20\x20\x20\x20\x20\x20\x0A\x20\x20\x3C\x50\x72\x65\x73"
"\x69\x6F\x6E\x61\x20\x45\x6E\x74\x65\x72\x3E\x0A\x20\x20\x46"
"\x38\x3D\x4D\x65\x6E\xFA\x20\x50\x72\x69\x6E\x63\x69\x70\x61"
"\x6C\x00",
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
"C:\\Jobgen_dem\\Desarrollos\\Inv_CMB.jgp",
"",
1,
4,
21,
31,
"\x01\x01\x02\x02\x03\x02\x04\x02\x05\x02\x06\x02\x07\x02\x08"
"\x02\x0A\x01\x0B\x08\x0C\x02\x0D\x01\x0E\x02\x0F\x01\x11\x02"
"\x12\x02\x13\x02\x14\x03\x00",
"\x06\x0C\x00",
"\x01\x01\x0C\x00\x08\x00\x02\x02\x03\x00\x01\x00\x03\x03\x04"
"\x00\x01\x00\x04\x04\x05\x00\x01\x00\x05\x05\x06\x00\x01\x00"
"\x06\x07\x08\x02\x01\x00\x07\x06\x05\x00\x08\x00\x08\x05\x04"
"\x00\x08\x00\x09\x04\x03\x00\x08\x00\x0A\x03\x02\x00\x08\x00"
"\x0B\x02\x01\x00\x08\x00\x0C\x08\x06\x02\x81\x00\x0D\x06\x0A"
"\x00\x08\x00\x0E\x05\x0A\x00\x08\x00\x0F\x04\x0A\x00\x08\x00"
"\x10\x03\x0A\x00\x08\x00\x11\x0A\x0B\x00\x01\x00\x12\x0C\x0E"
"\x00\x02\x00\x13\x0C\x01\x00\x08\x00\x14\x0C\x0D\x00\x04\x00"
"\x15\x0D\x0C\x00\x08\x00\x16\x0E\x02\x00\x08\x00\x17\x06\x0F"
"\x00\x04\x00\x18\x0F\x06\x00\x08\x00\x19\x02\x0A\x00\x08\x00"
"\x1A\x01\x0A\x00\x08\x00\x1B\x12\x07\x00\x01\x00\x1C\x11\x12"
"\x00\x01\x00\x1D\x13\x11\x00\x01\x00\x1E\x06\x14\x00\x01\x00"
"\x1F\x14\x13\x00\x01\x00\x00",
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
2,
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

