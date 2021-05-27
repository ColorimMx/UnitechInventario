/***
JobGen Plus, (C)Unitech America Inc.

job: C:\Jobgen_dem\UnitechInventario\Fisico_MBA3\Fisico1.jgp

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

char _Caja_Cama[34]; // 1..32, len includes terminator \0
char _Casillero1[34]; // 1..32, len includes terminator \0
char _Cod_Sku_Col[34]; // 1..32, len includes terminator \0
char _Cod_Sku_Cor[34]; // 1..32, len includes terminator \0
char _Cod_Sku_SKu[22]; // 1..20, len includes terminator \0
char _Colectivas[34]; // 1..32, len includes terminator \0
char _DB_Cole1[34]; // 1..32, len includes terminator \0
char _DB_Corr1[34]; // 1..32, len includes terminator \0
char _DB_SKU1[22]; // 1..20, len includes terminator \0
char _Descripcion11[34]; // 1..32, len includes terminator \0
char _Descripcion12[82]; // 1..80, len includes terminator \0
char _Descripcion13[82]; // 1..80, len includes terminator \0
char _DescripcionCL[34]; // 1..32, len includes terminator \0
char _DescripcionCR[34]; // 1..32, len includes terminator \0
char _DescripcionSku[34]; // 1..32, len includes terminator \0
char _Fecha_hora[20]; // 1..15, len includes terminator \0
char _Lado1[34]; // 1..32, len includes terminator \0
char _Lee_DBPiezas[34]; // 1..32, len includes terminator \0
char _Lee_DBPiezas2[34]; // 1..32, len includes terminator \0
int _Linea2 =0;
long _Msg_Err11 =0;
char _Nivel_Cama[34]; // 1..32, len includes terminator \0
char _Nivel1[34]; // 1..32, len includes terminator \0
char _Rack1[34]; // 1..32, len includes terminator \0
char _Registro_Colectivas[34]; // 1..32, len includes terminator \0
char _Registro_Corrugado[34]; // 1..32, len includes terminator \0
char _Registro_Piezas[34]; // 1..32, len includes terminator \0
char _Registro_Piezas2[34]; // 1..32, len includes terminator \0
long _Registro_Sku =0;
long _SKU =0;
char _Val_Cont1[22]; // 1..20, len includes terminator \0
int _Linea1 =0;
int _Mult_Corrugado =0;
int _Mult_Piezas2 =0;
int _Multi_Piezas =0;


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
"\x4E\x6F\x5F\x52\x65\x67\x33\x09\x05\x01\x08\x49\x4E\x56\x5F"
"\x43\x4D\x31\x2E\x54\x58\x54\x08\x06\x09\x49\x4E\x56\x5F\x43"
"\x4D\x31\x09\x06\x01\x08\x4E\x5F\x43\x4F\x4C\x45\x31\x2E\x54"
"\x58\x54\x08\x07\x09\x4E\x5F\x43\x6F\x6C\x65\x31\x09\x07\x01"
"\x08\x4E\x5F\x43\x4F\x52\x52\x55\x31\x2E\x54\x58\x54\x08\x08"
"\x09\x4E\x5F\x43\x6F\x72\x72\x75\x31\x09\x08\x01\x08\x43\x4F"
"\x4D\x50\x5F\x45\x58\x2E\x54\x58\x54\x08\x09\x09\x43\x4F\x4D"
"\x50\x5F\x45\x58\x09\x09\x01\x00",
40117, "\x00\x00",
40116, "\x43\x4F\x4D\x50\x5F\x45\x58\x2E\x54\x58\x54\x00",
40115, "\x43\x4F\x4D\x50\x5F\x45\x58\x00",
40114, "\x56\x61\x6C\x5F\x43\x6F\x6E\x74\x31\x09\x47\x01\x43\x6F\x64"
"\x5F\x53\x6B\x75\x5F\x53\x4B\x75\x09\x90\x01\x44\x65\x73\x63"
"\x72\x69\x70\x63\x69\x6F\x6E\x53\x6B\x75\x09\x8F\x01\x53\x4B"
"\x55\x09\x91\x01\x52\x65\x67\x69\x73\x74\x72\x6F\x5F\x53\x6B"
"\x75\x09\x92\x01\x46\x65\x63\x68\x61\x5F\x68\x6F\x72\x61\x09"
"\x84\x01\x00",
40113, "\x47\x90\x8F\x91\x92\x84\x00",
40110, "\x2C\x00",
40109, "\x0A\x00",
40105, "\x00\x00",
40104, "\x4E\x5F\x43\x4F\x52\x52\x55\x31\x2E\x54\x58\x54\x00",
40103, "\x4E\x5F\x43\x6F\x72\x72\x75\x31\x00",
40102, "\x43\x6F\x64\x5F\x53\x6B\x75\x5F\x43\x6F\x72\x09\x7D\x01\x4D"
"\x75\x6C\x74\x69\x5F\x50\x69\x65\x7A\x61\x73\x09\x83\x01\x00",
40101, "\x7D\x83\x00",
40098, "\x2C\x00",
40097, "\x0A\x00",
40093, "\x00\x00",
40092, "\x4E\x5F\x43\x4F\x4C\x45\x31\x2E\x54\x58\x54\x00",
40091, "\x4E\x5F\x43\x6F\x6C\x65\x31\x00",
40090, "\x43\x6F\x64\x5F\x53\x6B\x75\x5F\x43\x6F\x6C\x09\x89\x01\x4D"
"\x75\x6C\x74\x5F\x50\x69\x65\x7A\x61\x73\x32\x09\x8C\x01\x00",
40089, "\x89\x8C\x00",
40086, "\x2C\x00",
40085, "\x0A\x00",
40081, "\x00\x00",
40080, "\x49\x4E\x56\x5F\x43\x4D\x31\x2E\x54\x58\x54\x00",
40079, "\x49\x4E\x56\x5F\x43\x4D\x31\x00",
40078, "\x4C\x69\x6E\x65\x61\x31\x09\x85\x01\x43\x6F\x64\x5F\x53\x6B"
"\x75\x5F\x53\x4B\x75\x09\x90\x01\x53\x4B\x55\x09\x91\x01\x4C"
"\x69\x6E\x65\x61\x32\x09\x86\x01\x00",
40077, "\x85\x90\x91\x86\x00",
40074, "\x09\x00",
40073, "\x0A\x00",
40069, "\x00\x00",
40068, "\x4E\x4F\x5F\x52\x45\x47\x33\x2E\x54\x58\x54\x00",
40067, "\x4E\x6F\x5F\x52\x65\x67\x33\x00",
40066, "\x56\x61\x6C\x5F\x43\x6F\x6E\x74\x31\x09\x47\x01\x00",
40065, "\x47\x00",
40062, "\x2C\x00",
40061, "\x0A\x00",
36745, "\x0D",
36421, "\x0D",
36397, "\x0D",
36385, "\x0D",
36325, "\x8D",
36313, "\x0D",
36289, "\x8A",
36265, "\x0D",
36241, "\x8A",
36229, "\x0D",
36205, "\x86",
36193, "\x8B",
36181, "\x8D",
36169, "\x8D",
36157, "\x8D",
36145, "\x8D",
36133, "\x8D",
36097, "\x8D",
36049, "\x8A",
36037, "\x8A",
36025, "\x8A",
36013, "\x8A",
40001, "\x50\x72\x69\x5F\x43\x43\x09\x41\x01\x52\x61\x63\x6B\x31\x09"
"\x43\x01\x4C\x61\x64\x6F\x31\x09\x44\x01\x4E\x69\x76\x65\x6C"
"\x31\x09\x45\x01\x43\x61\x73\x69\x6C\x6C\x65\x72\x6F\x31\x09"
"\x46\x01\x56\x61\x6C\x5F\x43\x6F\x6E\x74\x31\x09\x47\x01\x53"
"\x61\x6C\x69\x65\x6E\x64\x6F\x31\x09\x49\x01\x4D\x73\x67\x5F"
"\x45\x72\x72\x31\x31\x09\x4A\x01\x4D\x65\x6E\x75\x5F\x44\x65"
"\x6C\x31\x31\x09\x4B\x01\x44\x65\x6C\x5F\x49\x6E\x76\x31\x31"
"\x09\x4C\x01\x44\x65\x6C\x5F\x43\x6F\x73\x74\x31\x32\x09\x4D"
"\x01\x44\x65\x6C\x5F\x43\x6F\x6D\x70\x31\x33\x09\x4E\x01\x4D"
"\x73\x67\x5F\x44\x65\x6C\x31\x31\x09\x4F\x01\x44\x42\x5F\x53"
"\x4B\x55\x31\x09\x50\x01\x43\x6F\x64\x4E\x6F\x52\x65\x67\x31"
"\x31\x09\x51\x01\x44\x42\x5F\x43\x6F\x72\x72\x31\x09\x52\x01"
"\x44\x42\x5F\x43\x6F\x6C\x65\x31\x09\x53\x01\x44\x65\x73\x63"
"\x72\x69\x70\x63\x69\x6F\x6E\x31\x31\x09\x59\x01\x43\x6F\x64"
"\x4E\x6F\x52\x65\x67\x31\x32\x09\x5A\x01\x43\x6F\x64\x4E\x6F"
"\x52\x65\x67\x31\x33\x09\x5B\x01\x44\x65\x73\x63\x72\x69\x70"
"\x63\x69\x6F\x6E\x31\x32\x09\x75\x01\x44\x65\x73\x63\x72\x69"
"\x70\x63\x69\x6F\x6E\x31\x33\x09\x76\x01\x52\x65\x67\x69\x73"
"\x74\x72\x6F\x5F\x50\x69\x65\x7A\x61\x73\x09\x7B\x01\x44\x65"
"\x73\x63\x72\x69\x70\x63\x69\x6F\x6E\x43\x52\x09\x7C\x01\x43"
"\x6F\x64\x5F\x53\x6B\x75\x5F\x43\x6F\x72\x09\x7D\x01\x43\x61"
"\x6A\x61\x5F\x43\x61\x6D\x61\x09\x7E\x01\x4E\x69\x76\x65\x6C"
"\x5F\x43\x61\x6D\x61\x09\x7F\x01\x4D\x75\x6C\x74\x5F\x43\x6F"
"\x72\x72\x75\x67\x61\x64\x6F\x09\x80\x01\x52\x65\x67\x69\x73"
"\x74\x72\x6F\x5F\x43\x6F\x72\x72\x75\x67\x61\x64\x6F\x09\x81"
"\x01\x4C\x65\x65\x5F\x44\x42\x50\x69\x65\x7A\x61\x73\x09\x82"
"\x01\x4D\x75\x6C\x74\x69\x5F\x50\x69\x65\x7A\x61\x73\x09\x83"
"\x01\x46\x65\x63\x68\x61\x5F\x68\x6F\x72\x61\x09\x84\x01\x4C"
"\x69\x6E\x65\x61\x31\x09\x85\x01\x4C\x69\x6E\x65\x61\x32\x09"
"\x86\x01\x44\x65\x73\x63\x72\x69\x70\x63\x69\x6F\x6E\x43\x4C"
"\x09\x87\x01\x43\x6F\x6C\x65\x63\x74\x69\x76\x61\x73\x09\x88"
"\x01\x43\x6F\x64\x5F\x53\x6B\x75\x5F\x43\x6F\x6C\x09\x89\x01"
"\x52\x65\x67\x69\x73\x74\x72\x6F\x5F\x43\x6F\x6C\x65\x63\x74"
"\x69\x76\x61\x73\x09\x8A\x01\x4C\x65\x65\x5F\x44\x42\x50\x69"
"\x65\x7A\x61\x73\x32\x09\x8B\x01\x4D\x75\x6C\x74\x5F\x50\x69"
"\x65\x7A\x61\x73\x32\x09\x8C\x01\x52\x65\x67\x69\x73\x74\x72"
"\x6F\x5F\x50\x69\x65\x7A\x61\x73\x32\x09\x8E\x01\x44\x65\x73"
"\x63\x72\x69\x70\x63\x69\x6F\x6E\x53\x6B\x75\x09\x8F\x01\x43"
"\x6F\x64\x5F\x53\x6B\x75\x5F\x53\x4B\x75\x09\x90\x01\x53\x4B"
"\x55\x09\x91\x01\x52\x65\x67\x69\x73\x74\x72\x6F\x5F\x53\x6B"
"\x75\x09\x92\x01\x00",
9754, "\x02\x04\x16\x01\x00\x02\x00\x00\x01\x00\x5F\x21\x40\x01\x00"
"\x01\x0B\x09\x01\x00\x2C\xFF\xFF\xFF\xFF\x00\x00\x00\x00\x23"
"\x00\x00\x00\x2B\x00\x00\x00\x00\x00\x00",
9756, "\x91",
9753, "\x54\x6F\x74\x61\x6C\x20\x64\x65\x20\x50\x69\x65\x7A\x61\x73"
"\x20\x53\x6B\x75\x3A\x00",
9755, (char*)&_Registro_Sku,
9742, "\x02\x04\x16\x03\x00\x02\x00\x00\x01\x00\x5F\x21\x00\x01\x00"
"\x01\x0B\x09\x01\x00\x2C\xFF\xFF\xFF\xFF\x00\x00\x00\x00\x00"
"\x00\x00\x00\x2A\x00\x00\x00\x00\x00\x00",
9749, "\x03\x09\x05\x01\x08\x0D\x01\x05\x06\x01\x13\x0D\x14\x05\x02\x01\x11\x0D\x12\x0D\x00",
9741, "\x43\x61\x70\x74\x75\x72\x65\x20\x50\x69\x65\x7A\x61\x73\x20"
"\x53\x4B\x55\x3A\x0A\x0A\x0A\x0A\x0A\x20\x20\x20\x20\x20\x20"
"\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x46"
"\x35\x3A\x46\x69\x6E\x20\x64\x65\x20\x43\x61\x73\x69\x6C\x6C"
"\x65\x72\x6F\x0A\x46\x38\x3A\x53\x61\x6C\x69\x72\x00",
9743, (char*)&_SKU,
9730, "\x04\x16\x4A\x01\x20\x02\x00\x00\x00\x00\x5F\x21\x00\x01\x00"
"\x01\x14\x09\x01\x00\x2C\xFF\xFF\xFF\xFF\x00\x50\x00\x01\x00"
"\x00\x00\x00\x29\x00\x00\x00\x00\x00\x00",
9738, "\x00",
9729, "\x00",
9731, (char*)&_Cod_Sku_SKu,
9718, "\x04\x22\x11\x01\x20\x02\x00\x00\x02\x00\x5F\x21\x00\x01\x00"
"\x01\x20\x09\x01\x00\x2C\xFF\xFF\xFF\xFF\x00\x50\x00\x11\x00"
"\x00\x00\x00\x28\x00\x00\x00\x00\x00\x00",
9726, "\x00",
9717, "\x00",
9719, (char*)&_DescripcionSku,
9706, "\x04\x22\x0A\x03\x00\x02\x00\x00\x00\x00\x5F\x21\x00\x01\x00"
"\x01\x20\x09\x01\x00\x2C\xFF\xFF\xFF\xFF\x00\x00\x00\x00\x00"
"\x00\x00\x00\x27\x00\x00\x00\x00\x00\x00",
9713, "\x03\x09\x05\x01\x08\x0D\x01\x05\x06\x01\x13\x0D\x14\x05\x02\x01\x11\x0D\x12\x0D\x00",
9705, "\x00",
9707, (char*)&_Registro_Piezas2,
13682, "\x01\x04\x0A\x00\x00\x00\x00\x00\x00\x00\x5F\x00\x00\x00\x00"
"\x00\x06\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
"\x00\x00\x00\x26\x00\x00\x00\x00\x00\x00",
13681, "\x00",
13683, (char*)&_Mult_Piezas2,
9670, "\x04\x22\x0A\x03\x00\x02\x00\x00\x00\x00\x5F\x21\x00\x01\x00"
"\x01\x20\x09\x01\x00\x2C\xFF\xFF\xFF\xFF\x00\x00\x00\x00\x00"
"\x00\x00\x00\x25\x00\x00\x00\x00\x00\x00",
9677, "\x03\x09\x05\x01\x08\x0D\x01\x05\x06\x01\x13\x0D\x14\x05\x02\x01\x11\x0D\x12\x0D\x00",
9669, "\x00",
9671, (char*)&_Lee_DBPiezas2,
9658, "\x04\x22\x0A\x03\x00\x02\x00\x00\x00\x00\x5F\x21\x00\x01\x00"
"\x01\x20\x09\x01\x00\x2C\xFF\xFF\xFF\xFF\x00\x00\x00\x00\x00"
"\x00\x00\x00\x24\x00\x00\x00\x00\x00\x00",
9665, "\x03\x09\x05\x01\x08\x0D\x01\x05\x06\x01\x13\x0D\x14\x05\x02\x01\x11\x0D\x12\x0D\x00",
9657, "\x00",
9659, (char*)&_Registro_Colectivas,
9646, "\x04\x22\x0A\x03\x00\x02\x00\x00\x00\x00\x5F\x21\x00\x01\x00"
"\x01\x20\x09\x01\x00\x2C\xFF\xFF\xFF\xFF\x00\x00\x00\x00\x00"
"\x00\x00\x00\x23\x00\x00\x00\x00\x00\x00",
9653, "\x03\x09\x05\x01\x08\x0D\x01\x05\x06\x01\x13\x0D\x14\x05\x02\x01\x11\x0D\x12\x0D\x00",
9645, "\x00",
9647, (char*)&_Cod_Sku_Col,
9634, "\x04\x22\x0A\x03\x00\x02\x00\x00\x00\x00\x5F\x21\x00\x01\x00"
"\x01\x20\x09\x01\x00\x2C\xFF\xFF\xFF\xFF\x00\x00\x00\x00\x00"
"\x00\x00\x00\x22\x00\x00\x00\x00\x00\x00",
9641, "\x03\x09\x05\x01\x08\x0D\x01\x05\x06\x01\x13\x0D\x14\x05\x02\x01\x11\x0D\x12\x0D\x00",
9633, "\x00",
9635, (char*)&_Colectivas,
9622, "\x04\x22\x0A\x03\x00\x02\x00\x00\x00\x00\x5F\x21\x00\x01\x00"
"\x01\x20\x09\x01\x00\x2C\xFF\xFF\xFF\xFF\x00\x00\x00\x00\x00"
"\x00\x00\x00\x21\x00\x00\x00\x00\x00\x00",
9629, "\x03\x09\x05\x01\x08\x0D\x01\x05\x06\x01\x13\x0D\x14\x05\x02\x01\x11\x0D\x12\x0D\x00",
9621, "\x00",
9623, (char*)&_DescripcionCL,
9610, "\x01\x04\x4A\x00\x00\x02\x00\x00\x00\x00\x5F\x21\x00\x01\x00"
"\x01\x06\x09\x01\x00\x2C\xFF\xFF\xFF\xFF\x00\x00\x00\x00\x22"
"\x00\x00\x00\x20\x00\x00\x00\x00\x00\x00",
9612, "\x85",
9609, "\x00",
9611, (char*)&_Linea2,
13598, "\x01\x04\x4A\x00\x00\x00\x00\x00\x00\x00\x5F\x00\x00\x00\x00"
"\x00\x06\x01\x02\x0F\x02\x00\x00\x00\x00\x00\x00\x00\x00\x12"
"\x00\x00\x00\x1F\x00\x00\x00\x00\x00\x00",
13602, "\x86",
13601, "\x86",
13600, "\x31\x00",
13597, "\x00",
13599, (char*)&_Linea1,
9586, "\x05\x14\x4A\x23\x00\x02\x00\x00\x00\x00\x5F\x41\x00\x02\x00"
"\x01\x0F\x09\x01\x00\x2C\xFF\xFF\xFF\xFF\x00\x00\x00\x00\x00"
"\x10\x00\x00\x1E\x00\x00\x00\x00\x00\x00",
9593, "\x03\x09\x05\x01\x08\x0D\x01\x05\x06\x01\x13\x0D\x14\x05\x02\x01\x11\x0D\x12\x0D\x00",
9585, "\x00",
9587, (char*)&_Fecha_hora,
13574, "\x01\x04\x0A\x00\x00\x00\x00\x00\x00\x00\x5F\x00\x00\x00\x00"
"\x00\x06\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
"\x00\x00\x00\x1D\x00\x00\x00\x00\x00\x00",
13573, "\x00",
13575, (char*)&_Multi_Piezas,
9562, "\x04\x22\x0A\x03\x00\x02\x00\x00\x00\x00\x5F\x21\x00\x01\x00"
"\x01\x20\x09\x01\x00\x2C\xFF\xFF\xFF\xFF\x00\x00\x00\x00\x00"
"\x00\x00\x00\x1C\x00\x00\x00\x00\x00\x00",
9569, "\x03\x09\x05\x01\x08\x0D\x01\x05\x06\x01\x13\x0D\x14\x05\x02\x01\x11\x0D\x12\x0D\x00",
9561, "\x00",
9563, (char*)&_Lee_DBPiezas,
9550, "\x04\x22\x0A\x03\x00\x02\x00\x00\x00\x00\x5F\x21\x00\x01\x00"
"\x01\x20\x09\x01\x00\x2C\xFF\xFF\xFF\xFF\x00\x00\x00\x00\x00"
"\x00\x00\x00\x1B\x00\x00\x00\x00\x00\x00",
9557, "\x03\x09\x05\x01\x08\x0D\x01\x05\x06\x01\x13\x0D\x14\x05\x02\x01\x11\x0D\x12\x0D\x00",
9549, "\x00",
9551, (char*)&_Registro_Corrugado,
13538, "\x01\x04\x0A\x00\x00\x00\x00\x00\x00\x00\x5F\x00\x00\x00\x00"
"\x00\x06\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
"\x00\x00\x00\x1A\x00\x00\x00\x00\x00\x00",
13537, "\x00",
13539, (char*)&_Mult_Corrugado,
9526, "\x04\x22\x0A\x03\x00\x02\x00\x00\x00\x00\x5F\x21\x00\x01\x00"
"\x01\x20\x09\x01\x00\x2C\xFF\xFF\xFF\xFF\x00\x00\x00\x00\x00"
"\x00\x00\x00\x19\x00\x00\x00\x00\x00\x00",
9533, "\x03\x09\x05\x01\x08\x0D\x01\x05\x06\x01\x13\x0D\x14\x05\x02\x01\x11\x0D\x12\x0D\x00",
9525, "\x00",
9527, (char*)&_Nivel_Cama,
9514, "\x04\x22\x0A\x03\x00\x02\x00\x00\x00\x00\x5F\x21\x00\x01\x00"
"\x01\x20\x09\x01\x00\x2C\xFF\xFF\xFF\xFF\x00\x00\x00\x00\x00"
"\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00",
9521, "\x03\x09\x05\x01\x08\x0D\x01\x05\x06\x01\x13\x0D\x14\x05\x02\x01\x11\x0D\x12\x0D\x00",
9513, "\x00",
9515, (char*)&_Caja_Cama,
9502, "\x04\x22\x0A\x03\x00\x02\x00\x00\x00\x00\x5F\x21\x00\x01\x00"
"\x01\x20\x09\x01\x00\x2C\xFF\xFF\xFF\xFF\x00\x00\x00\x00\x00"
"\x00\x00\x00\x17\x00\x00\x00\x00\x00\x00",
9509, "\x03\x09\x05\x01\x08\x0D\x01\x05\x06\x01\x13\x0D\x14\x05\x02\x01\x11\x0D\x12\x0D\x00",
9501, "\x00",
9503, (char*)&_Cod_Sku_Cor,
9490, "\x04\x22\x0A\x03\x00\x02\x00\x00\x00\x00\x5F\x21\x00\x01\x00"
"\x01\x20\x09\x01\x00\x2C\xFF\xFF\xFF\xFF\x00\x00\x00\x00\x00"
"\x00\x00\x00\x16\x00\x00\x00\x00\x00\x00",
9497, "\x03\x09\x05\x01\x08\x0D\x01\x05\x06\x01\x13\x0D\x14\x05\x02\x01\x11\x0D\x12\x0D\x00",
9489, "\x00",
9491, (char*)&_DescripcionCR,
9478, "\x04\x22\x0A\x03\x00\x02\x00\x00\x00\x00\x5F\x21\x00\x01\x00"
"\x01\x20\x09\x01\x00\x2C\xFF\xFF\xFF\xFF\x00\x00\x00\x00\x00"
"\x00\x00\x00\x15\x00\x00\x00\x00\x00\x00",
9485, "\x03\x09\x05\x01\x08\x0D\x01\x05\x06\x01\x13\x0D\x14\x05\x02\x01\x11\x0D\x12\x0D\x00",
9477, "\x00",
9479, (char*)&_Registro_Piezas,
9418, "\x04\x52\x11\x03\x20\x02\x00\x00\x02\x00\x5F\x21\x00\x01\x00"
"\x01\x50\x09\x01\x00\x2C\xFF\xFF\xFF\xFF\x00\x52\x00\x0F\x00"
"\x00\x00\x00\x14\x00\x00\x00\x00\x00\x00",
9426, "\x00",
9425, "\x03\x09\x05\x01\x08\x0D\x01\x05\x06\x01\x13\x0D\x14\x05\x02\x01\x11\x0D\x12\x0D\x00",
9417, "\x00",
9419, (char*)&_Descripcion13,
9406, "\x04\x52\x11\x03\x20\x02\x00\x00\x02\x00\x5F\x21\x00\x01\x00"
"\x01\x50\x09\x01\x00\x2C\xFF\xFF\xFF\xFF\x00\x53\x00\x10\x00"
"\x00\x00\x00\x13\x00\x00\x00\x00\x00\x00",
9414, "\x00",
9413, "\x03\x09\x05\x01\x08\x0D\x01\x05\x06\x01\x13\x0D\x14\x05\x02\x01\x11\x0D\x12\x0D\x00",
9405, "\x00",
9407, (char*)&_Descripcion12,
5094, "\x00\x00\x12\x00",
5093, "\x0A\x0A\x20\x20\x20\x20\x20\x43\xD3\x44\x49\x47\x4F\x20\x4E"
"\x4F\x0A\x20\x53\x45\x20\x45\x4E\x43\x55\x45\x4E\x54\x52\x41"
"\x20\x45\x4E\x20\x4C\x41\x20\x20\x20\x20\x42\x41\x53\x45\x20"
"\x44\x45\x20\x44\x41\x54\x4F\x53\x0A\x20\x20\x20\x20\x43\x6F"
"\x72\x72\x75\x67\x61\x64\x6F\x73\x0A\x0A\x20\x20\x3C\x50\x72"
"\x65\x73\x69\x6F\x6E\x61\x20\x45\x6E\x74\x65\x72\x3E\x00",
5082, "\x00\x00\x11\x00",
5081, "\x0A\x0A\x20\x20\x20\x20\x20\x43\xD3\x44\x49\x47\x4F\x20\x4E"
"\x4F\x0A\x20\x53\x45\x20\x45\x4E\x43\x55\x45\x4E\x54\x52\x41"
"\x20\x45\x4E\x20\x4C\x41\x20\x20\x20\x20\x42\x41\x53\x45\x20"
"\x44\x45\x20\x44\x41\x54\x4F\x53\x0A\x20\x20\x20\x20\x20\x43"
"\x6F\x6C\x65\x63\x74\x69\x76\x61\x0A\x0A\x20\x20\x3C\x50\x72"
"\x65\x73\x69\x6F\x6E\x61\x20\x45\x6E\x74\x65\x72\x3E\x00",
9070, "\x04\x22\x11\x03\x20\x02\x00\x00\x02\x00\x5F\x21\x00\x01\x00"
"\x01\x20\x09\x01\x00\x2C\xFF\xFF\xFF\xFF\x00\x50\x00\x11\x00"
"\x00\x00\x00\x10\x00\x00\x00\x00\x00\x00",
9078, "\x00",
9077, "\x03\x09\x05\x01\x08\x0D\x01\x05\x06\x01\x13\x0D\x14\x05\x02\x01\x11\x0D\x12\x0D\x00",
9069, "\x00",
9071, (char*)&_Descripcion11,
8998, "\x04\x22\x51\x01\x00\x0A\x00\x00\x02\x00\x5F\x21\x40\x01\x00"
"\x01\x20\x09\x0C\x11\x2C\xFF\xFF\xFF\xFF\x00\x00\x00\x00\x23"
"\x00\x00\x00\x0F\x00\x00\x00\x00\x00\x00",
9002, "\x44\x42\x5F\x43\x61\x6A\x61\x2E\x74\x78\x74\x00",
9000, "\x47",
8997, "\x50\x54\x20\x20\x20\x4C\x65\x65\x20\x43\x4F\x44\x49\x47\x4F"
"\x3A\x20\x20\x0A\x43\x4F\x44\x3A\x0A\x20\x20\x20\x20\x20\x20"
"\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20"
"\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20"
"\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20"
"\x0A\x0A\x46\x35\x3A\x46\x69\x6E\x20\x64\x65\x20\x43\x61\x73"
"\x69\x6C\x6C\x65\x72\x6F\x0A\x46\x38\x3A\x53\x61\x6C\x69\x72"
"\x00",
8999, (char*)&_DB_Cole1,
8986, "\x04\x22\x11\x03\x00\x0A\x00\x00\x01\x04\x5F\x21\x40\x01\x00"
"\x01\x20\x09\x0D\x11\x2C\xFF\xFF\xFF\xFF\x00\x00\x00\x00\x23"
"\x00\x00\x00\x0E\x00\x00\x00\x00\x00\x00",
8990, "\x44\x42\x5F\x43\x61\x6A\x61\x2E\x74\x78\x74\x00",
8993, "\x03\x09\x05\x01\x08\x0D\x01\x05\x06\x01\x13\x0D\x14\x05\x02\x01\x11\x0D\x12\x0D\x00",
8988, "\x47",
8985, "\x50\x54\x20\x20\x20\x4C\x65\x65\x20\x43\x4F\x44\x49\x47\x4F"
"\x3A\x20\x20\x0A\x43\x4F\x44\x3A\x0A\x20\x20\x20\x20\x20\x20"
"\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20"
"\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20"
"\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20"
"\x0A\x0A\x46\x35\x3A\x46\x69\x6E\x20\x64\x65\x20\x43\x61\x73"
"\x69\x6C\x6C\x65\x72\x6F\x0A\x46\x38\x3A\x53\x61\x6C\x69\x72"
"\x00",
8987, (char*)&_DB_Corr1,
4974, "\x00\x00\x0D\x00",
4973, "\x0A\x0A\x20\x20\x20\x20\x20\x43\xD3\x44\x49\x47\x4F\x20\x4E"
"\x4F\x0A\x20\x53\x45\x20\x45\x4E\x43\x55\x45\x4E\x54\x52\x41"
"\x20\x45\x4E\x20\x4C\x41\x20\x20\x20\x20\x42\x41\x53\x45\x20"
"\x44\x45\x20\x44\x41\x54\x4F\x53\x0A\x20\x20\x20\x20\x20\x20"
"\x20\x20\x53\x4B\x55\x0A\x0A\x20\x20\x3C\x50\x72\x65\x73\x69"
"\x6F\x6E\x61\x20\x45\x6E\x74\x65\x72\x3E\x00",
8962, "\x04\x16\x15\x01\x00\x0A\x00\x00\x01\x04\x5F\x21\x40\x01\x00"
"\x01\x14\x09\x0B\x11\x2C\xFF\xFF\xFF\xFF\x00\x00\x00\x00\x23"
"\x00\x00\x00\x0C\x00\x00\x00\x00\x00\x00",
8966, "\x44\x42\x5F\x43\x61\x6A\x61\x2E\x74\x78\x74\x00",
8964, "\x47",
8961, "\x50\x54\x20\x20\x20\x4C\x65\x65\x20\x43\x4F\x44\x49\x47\x4F"
"\x3A\x20\x20\x0A\x43\x4F\x44\x3A\x0A\x20\x20\x20\x20\x20\x20"
"\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20"
"\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20"
"\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20"
"\x0A\x0A\x46\x35\x3A\x46\x69\x6E\x20\x64\x65\x20\x43\x61\x73"
"\x69\x6C\x6C\x65\x72\x6F\x0A\x46\x38\x3A\x53\x61\x6C\x69\x72"
"\x00",
8963, (char*)&_DB_SKU1,
4950, "\x00\x00\x0B\x00",
4949, "\x0A\xDA\x6C\x74\x69\x6D\x6F\x20\x52\x65\x67\x69\x73\x74\x72"
"\x6F\x20\x0A\x42\x6F\x72\x72\x61\x64\x6F\x0A\x0A\x0A\x0A\x3E"
"\x3E\x50\x72\x65\x73\x69\x6F\x6E\x65\x20\x45\x6E\x74\x65\x72"
"\x0A\x20\x20\x70\x61\x72\x61\x20\x63\x6F\x6E\x74\x69\x6E\x75"
"\x61\x72\x3E\x3E\x3E\x00",
20938, "\x43\x4F\x4D\x50\x5F\x45\x58\x2E\x54\x58\x54\x00",
20937, "\x02",
20926, "\x4E\x4F\x5F\x52\x45\x47\x33\x2E\x54\x58\x54\x00",
20925, "\x02",
20914, "\x49\x4E\x56\x5F\x43\x4D\x31\x2E\x54\x58\x54\x00",
20913, "\x02",
4902, "\x00\x00\x0A\x00",
4901, "\x44\x65\x73\x65\x61\x20\x62\x6F\x72\x72\x61\x72\x20\xFA\x6C"
"\x74\x69\x6D\x61\x20\x63\x61\x70\x74\x75\x72\x61\x3F\x0A\x0A"
"\x0A\x46\x38\x3A\x43\x6F\x6E\x66\x69\x72\x6D\x61\x72\x0A\x0A"
"\x46\x31\x3A\x43\x61\x6E\x63\x65\x6C\x61\x72\x20\x79\x20\x20"
"\x20\x20\x20\x20\x20\x20\x20\x20\x52\x65\x67\x72\x65\x73\x61"
"\x72\x00",
8890, "\x02\x04\x16\x01\x20\x02\x00\x00\x05\x00\x5F\x21\x00\x01\x00"
"\x01\x0B\x09\x01\x00\x2C\xFF\xFF\xFF\xFF\x00\x47\x00\x05\x00"
"\x00\x00\x00\x09\x00\x00\x00\x00\x00\x00",
8898, "\x00",
8889, "\x3E\x3E\x3E\x3E\x3E\x3E\x3E\x41\x4C\x45\x52\x54\x41\x21\x3C"
"\x3C\x3C\x3C\x3C\x3C\x3E\x3E\x3E\x3E\x45\x6C\x20\x63\x6F\x64"
"\x69\x67\x6F\x20\x79\x61\x20\x20\x20\x20\x74\x69\x65\x6E\x65"
"\x20\x50\x72\x69\x6D\x65\x72\x20\x43\x6F\x6E\x74\x65\x6F\x3E"
"\x0A\x50\x72\x69\x6D\x65\x72\x20\x43\x6F\x6E\x74\x65\x6F\x3A"
"\x0A\x0A\x3E\x50\x72\x65\x73\x69\x6F\x6E\x61\x20\x45\x6E\x74"
"\x65\x72\x20\x70\x61\x72\x61\x63\x6F\x6E\x74\x61\x72\x20\x6F"
"\x74\x72\x6F\x20\x43\xF3\x64\x69\x67\x6F\x3E\x00",
8891, (char*)&_Msg_Err11,
4878, "\x07\x00\x08\x00",
4877, "\x0A\x0A\x20\x20\x20\x20\x20\x53\x61\x6C\x69\x65\x6E\x64\x6F"
"\x00",
8854, "\x04\x16\x15\x03\x00\x0A\x00\x00\x01\x04\x5F\x21\x00\x01\x00"
"\x01\x14\x09\x01\x06\x2C\xFF\xFF\xFF\xFF\x00\x00\x00\x00\x00"
"\x00\x00\x00\x07\x00\x00\x00\x00\x00\x00",
8858, "\x43\x4F\x4D\x50\x5F\x45\x58\x2E\x54\x58\x54\x00",
8861, "\x03\x09\x05\x01\x08\x0D\x01\x05\x06\x01\x13\x0D\x14\x05\x02\x01\x11\x0D\x12\x0D\x00",
8853, "\x20\x20\x20\x4C\x65\x65\x20\x43\x4F\x44\x49\x47\x4F\x3A\x20"
"\x20\x0A\x43\x4F\x44\x3A\x0A\x20\x20\x20\x20\x20\x20\x20\x20"
"\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20"
"\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20"
"\x20\x20\x46\x35\x3A\x46\x69\x6E\x20\x64\x65\x20\x43\x61\x73"
"\x69\x6C\x6C\x65\x72\x6F\x20\x46\x36\x3A\x42\x6F\x72\x72\x61"
"\x72\x20\xFA\x6C\x74\x69\x6D\x61\x20\x20\x20\x20\x20\x20\x20"
"\x43\x61\x70\x74\x75\x72\x61\x0A\x46\x38\x3A\x53\x61\x6C\x69"
"\x72\x00",
8855, (char*)&_Val_Cont1,
8842, "\x04\x22\x16\x03\x00\x02\x00\x00\x02\x0F\x5F\x21\x00\x01\x00"
"\x01\x20\x09\x01\x00\x2C\xFF\xFF\xFF\xFF\x00\x00\x00\x00\x00"
"\x00\x00\x00\x06\x00\x00\x00\x00\x00\x00",
8849, "\x03\x09\x05\x01\x08\x0D\x01\x05\x06\x01\x13\x0D\x14\x05\x02\x01\x11\x0D\x12\x0D\x00",
8841, "\x2A\x49\x6E\x76\x65\x6E\x74\x61\x72\x69\x6F\x20\x41\x4C\x4D"
"\x20\x50\x54\x2A\x0A\x0A\x4C\x65\x65\x20\x43\x41\x53\x49\x4C"
"\x4C\x45\x52\x4F\x3A\x0A\x0A\x0A\x0A\x46\x35\x3A\x46\x69\x6E"
"\x20\x64\x65\x20\x4E\x49\x56\x45\x4C\x0A\x46\x38\x3A\x53\x61"
"\x6C\x69\x72\x00",
8843, (char*)&_Casillero1,
8830, "\x04\x22\x16\x03\x00\x02\x00\x00\x02\x0B\x5F\x21\x00\x01\x00"
"\x01\x20\x09\x01\x00\x2C\xFF\xFF\xFF\xFF\x00\x00\x00\x00\x00"
"\x00\x00\x00\x05\x00\x00\x00\x00\x00\x00",
8837, "\x03\x09\x05\x01\x08\x0D\x01\x05\x06\x01\x13\x0D\x14\x05\x02\x01\x11\x0D\x12\x0D\x00",
8829, "\x2A\x49\x6E\x76\x65\x6E\x74\x61\x72\x69\x6F\x20\x41\x4C\x4D"
"\x20\x50\x54\x2A\x0A\x0A\x4C\x65\x65\x20\x4E\x49\x56\x45\x4C"
"\x3A\x0A\x0A\x0A\x0A\x46\x35\x3A\x46\x69\x6E\x20\x64\x65\x20"
"\x4C\x41\x44\x4F\x0A\x46\x38\x3A\x53\x61\x6C\x69\x72\x00",
8831, (char*)&_Nivel1,
8818, "\x04\x22\x16\x03\x00\x02\x00\x00\x02\x0A\x5F\x21\x00\x01\x00"
"\x01\x20\x09\x01\x00\x2C\xFF\xFF\xFF\xFF\x00\x00\x00\x00\x00"
"\x00\x00\x00\x04\x00\x00\x00\x00\x00\x00",
8825, "\x03\x09\x05\x01\x08\x0D\x01\x05\x06\x01\x13\x0D\x14\x05\x02\x01\x11\x0D\x12\x0D\x00",
8817, "\x2A\x49\x6E\x76\x65\x6E\x74\x61\x72\x69\x6F\x20\x41\x4C\x4D"
"\x20\x50\x54\x2A\x0A\x0A\x4C\x65\x65\x20\x4C\x41\x44\x4F\x3A"
"\x0A\x0A\x0A\x0A\x46\x35\x3A\x46\x69\x6E\x20\x64\x65\x20\x41"
"\x4E\x41\x51\x55\x45\x4C\x0A\x46\x38\x3A\x53\x61\x6C\x69\x72"
"\x00",
8819, (char*)&_Lado1,
8806, "\x04\x22\x16\x03\x00\x02\x00\x00\x02\x0A\x5F\x21\x00\x01\x00"
"\x01\x20\x09\x01\x00\x2C\xFF\xFF\xFF\xFF\x00\x00\x00\x00\x00"
"\x00\x00\x00\x03\x00\x00\x00\x00\x00\x00",
8813, "\x03\x09\x05\x01\x08\x0D\x01\x05\x06\x01\x13\x0D\x14\x05\x02\x01\x11\x0D\x12\x0D\x00",
8805, "\x2A\x49\x6E\x76\x65\x6E\x74\x61\x72\x69\x6F\x20\x41\x4C\x4D"
"\x20\x50\x54\x2A\x0A\x0A\x4C\x65\x65\x20\x52\x41\x43\x4B\x3A"
"\x0A\x0A\x0A\x0A\x46\x35\x3A\x4D\x65\x6E\xFA\x0A\x46\x38\x3A"
"\x53\x61\x6C\x69\x72\x00",
8807, (char*)&_Rack1,
4782, "\x00\x00\x02\x00",
4781, "\x20\x20\x20\x20\x43\x4F\x4C\x4F\x52\x41\x4E\x54\x45\x53\x0A"
"\x20\x20\x20\x20\x49\x4D\x50\x4F\x52\x54\x41\x44\x4F\x53\x20"
"\x20\x20\x0A\x20\x20\x20\x20\x53\x2E\x41\x2E\x20\x64\x65\x20"
"\x43\x2E\x56\x2E\x20\x20\x20\x20\x20\x20\x50\x72\x69\x6D\x65"
"\x72\x20\x43\x6F\x6E\x74\x65\x6F\x20\x50\x54\x20\x20\x20\x20"
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
"C:\\Jobgen_dem\\UnitechInventario\\Fisico_MBA3\\Fisico1.jgp",
"",
1,
4,
146,
68,
"\x41\x01\x43\x02\x44\x02\x45\x02\x46\x02\x47\x02\x49\x01\x4A"
"\x02\x4B\x01\x4C\x05\x4D\x05\x4E\x05\x4F\x01\x50\x02\x51\x01"
"\x52\x02\x53\x02\x59\x02\x5A\x01\x5B\x01\x75\x02\x76\x02\x7B"
"\x02\x7C\x02\x7D\x02\x7E\x02\x7F\x02\x80\x03\x81\x02\x82\x02"
"\x83\x03\x84\x02\x85\x03\x86\x02\x87\x02\x88\x02\x89\x02\x8A"
"\x02\x8B\x02\x8C\x03\x8E\x02\x8F\x02\x90\x02\x91\x02\x92\x02"
"\x00",
"\x47\x50\x52\x53\x00",
"\x01\x43\x41\x00\x08\x00\x02\x44\x43\x00\x08\x00\x03\x45\x44"
"\x00\x08\x00\x04\x46\x45\x00\x08\x00\x05\x43\x44\x00\x01\x00"
"\x06\x44\x45\x00\x01\x00\x07\x45\x46\x00\x01\x00\x08\x4B\x4C"
"\x00\x08\x00\x09\x4C\x4D\x00\x01\x00\x0A\x4D\x4E\x00\x01\x00"
"\x0B\x41\x49\x00\x08\x00\x0C\x43\x49\x00\x08\x00\x0D\x44\x49"
"\x00\x08\x00\x0E\x45\x49\x00\x08\x00\x0F\x46\x49\x00\x08\x00"
"\x10\x47\x4B\x00\x08\x00\x11\x4B\x47\x00\x08\x00\x12\x4E\x4F"
"\x00\x01\x00\x13\x4F\x47\x00\x08\x00\x14\x47\x46\x00\x08\x00"
"\x15\x46\x47\x00\x01\x00\x16\x4A\x47\x00\x08\x00\x17\x47\x4A"
"\x00\x02\x00\x18\x50\x46\x00\x08\x00\x19\x47\x50\x00\x04\x00"
"\x1A\x41\x43\x00\x08\x00\x1B\x47\x49\x00\x08\x00\x1F\x50\x51"
"\x00\x04\x00\x20\x51\x53\x00\x08\x00\x21\x5B\x47\x05\x88\x00"
"\x22\x53\x5A\x00\x04\x00\x23\x5A\x52\x00\x08\x00\x24\x52\x5B"
"\x00\x04\x00\x25\x53\x75\x00\x02\x00\x26\x52\x76\x00\x02\x00"
"\x29\x7C\x7D\x00\x01\x00\x2A\x7D\x7E\x00\x01\x00\x2B\x7E\x7F"
"\x00\x01\x00\x2C\x7F\x80\x00\x01\x00\x2D\x80\x81\x00\x01\x00"
"\x2E\x81\x82\x00\x01\x00\x2F\x82\x83\x00\x01\x00\x30\x83\x7B"
"\x00\x01\x00\x31\x7B\x84\x08\x81\x00\x32\x84\x85\x09\x81\x00"
"\x33\x85\x86\x00\x01\x00\x34\x87\x89\x00\x01\x00\x35\x89\x88"
"\x00\x01\x00\x36\x88\x8A\x00\x01\x00\x37\x8A\x8B\x00\x01\x00"
"\x38\x8B\x8C\x00\x01\x00\x39\x8C\x8E\x00\x01\x00\x3A\x8E\x84"
"\x07\x81\x00\x3B\x8F\x90\x00\x01\x00\x3C\x90\x91\x00\x01\x00"
"\x3D\x91\x92\x00\x01\x00\x3E\x92\x84\x00\x08\x00\x3F\x50\x59"
"\x00\x01\x00\x41\x59\x8F\x00\x01\x00\x42\x86\x47\x06\x81\x00"
"\x43\x75\x87\x00\x01\x00\x44\x76\x7C\x00\x01\x00\x00",
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
65,
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

