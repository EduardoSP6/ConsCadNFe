/*
 * xHarbour build 1.2.1 Intl. (SimpLex) (Rev. 6717)
 * Generated C source code from <C:\\Sistemas Fivewin\\ConsCadNFe\\MAIN.PRG>
 * Command: C:\Sistemas Fivewin\ConsCadNFe\MAIN.PRG /q /oC:\Sistemas Fivewin\ConsCadNFe\OBJ\MAIN.c /M /N 
 * Created: 2016.08.09 11:30:20 (Microsoft Visual C++ 16.00.30319.01)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "C:\\Sistemas Fivewin\\ConsCadNFe\\MAIN.PRG"

HB_FUNC( MAIN );
HB_FUNC( CONSCAD );
HB_FUNC( VALIDAXML );
HB_FUNC( TRANSMITEXMLSOAP );
HB_FUNC( XML_GETNODE );
HB_FUNC( SELECTCERTIFICADO );
HB_FUNC( GETCNCERTIFICADO );
HB_FUNC( GETOBJCERTIFICADO );
HB_FUNC( UAC );
HB_FUNC( SW_WRITETOREGWIN );
HB_FUNC_INITSTATICS();

/* Skipped DEFERRED call to: 'DIVERTCONSTRUCTORCALL' */
HB_FUNC_EXTERN( GETPROCADD );
HB_FUNC_EXTERN( TACTIVEX );
HB_FUNC_EXTERN( ERRORSYS );
HB_FUNC_EXTERN( MSGYESNO );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( MSGGET );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( MSGSTOP );
HB_FUNC_EXTERN( CURDRIVE );
HB_FUNC_EXTERN( CURDIR );
HB_FUNC_EXTERN( ALLTRIM );
HB_FUNC_EXTERN( XHB_CREATEOBJECT );
HB_FUNC_EXTERN( HB_OSNEWLINE );
HB_FUNC_EXTERN( STR );
HB_FUNC_EXTERN( FILE );
HB_FUNC_EXTERN( TRANSFORM );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( MILLISEC );
HB_FUNC_EXTERN( MEMOWRIT );
HB_FUNC_EXTERN( DTOC );
HB_FUNC_EXTERN( DATE );
HB_FUNC_EXTERN( STRTRAN );
HB_FUNC_EXTERN( TIME );
HB_FUNC_EXTERN( MSGINFO );
HB_FUNC_EXTERN( TXMLDOCUMENT );
HB_FUNC_EXTERN( TXMLITERATOR );
HB_FUNC_EXTERN( REGISTERSERVER );
HB_FUNC_EXTERN( AT );
HB_FUNC_EXTERN( SUBSTR );
HB_FUNC_EXTERN( UPPER );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 10

#include "hbapi.h"

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_MAIN )
{ "DIVERTCONSTRUCTORCALL", {HB_FS_PUBLIC | HB_FS_DEFERRED}, {NULL}, NULL },
{ "GETPROCADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( GETPROCADD )}, NULL },
{ "TACTIVEX", {HB_FS_PUBLIC}, {HB_FUNCNAME( TACTIVEX )}, NULL },
{ "ERRORSYS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORSYS )}, NULL },
{ "MAIN", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( MAIN )}, &ModuleFakeDyn },
{ "MSGYESNO", {HB_FS_PUBLIC}, {HB_FUNCNAME( MSGYESNO )}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "MSGGET", {HB_FS_PUBLIC}, {HB_FUNCNAME( MSGGET )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "MSGSTOP", {HB_FS_PUBLIC}, {HB_FUNCNAME( MSGSTOP )}, NULL },
{ "CONSCAD", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( CONSCAD )}, &ModuleFakeDyn },
{ "CURDRIVE", {HB_FS_PUBLIC}, {HB_FUNCNAME( CURDRIVE )}, NULL },
{ "CURDIR", {HB_FS_PUBLIC}, {HB_FUNCNAME( CURDIR )}, NULL },
{ "ALLTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALLTRIM )}, NULL },
{ "TRANSMITEXMLSOAP", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( TRANSMITEXMLSOAP )}, &ModuleFakeDyn },
{ "VALIDAXML", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( VALIDAXML )}, &ModuleFakeDyn },
{ "XHB_CREATEOBJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( XHB_CREATEOBJECT )}, NULL },
{ "_ASYNC", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_RESOLVEEXTERNALS", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_VALIDATEONPARSE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_PRESERVEWHITESPACE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "LOADXML", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "ERRORCODE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "PARSEERROR", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HB_OSNEWLINE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_OSNEWLINE )}, NULL },
{ "STR", {HB_FS_PUBLIC}, {HB_FUNCNAME( STR )}, NULL },
{ "LINE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "LINEPOS", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "REASON", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "FILE", {HB_FS_PUBLIC}, {HB_FUNCNAME( FILE )}, NULL },
{ "ADD", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "TRANSFORM", {HB_FS_PUBLIC}, {HB_FUNCNAME( TRANSFORM )}, NULL },
{ "GENCODE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "SUBCODE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "OSCODE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "SUBSYSTEM", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "DESCRIPTION", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_SCHEMAS", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "VALIDATE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "CSOAPACT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "SELECTCERTIFICADO", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SELECTCERTIFICADO )}, &ModuleFakeDyn },
{ "GETCNCERTIFICADO", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( GETCNCERTIFICADO )}, &ModuleFakeDyn },
{ "CCERT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "SETOPTION", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "OPEN", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "SETREQUESTHEADER", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "ARETORNO", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "SEND", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "XML", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "E", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "READYSTATE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "MILLISEC", {HB_FS_PUBLIC}, {HB_FUNCNAME( MILLISEC )}, NULL },
{ "XML_GETNODE", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( XML_GETNODE )}, &ModuleFakeDyn },
{ "RESPONSETEXT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "MEMOWRIT", {HB_FS_PUBLIC}, {HB_FUNCNAME( MEMOWRIT )}, NULL },
{ "DTOC", {HB_FS_PUBLIC}, {HB_FUNCNAME( DTOC )}, NULL },
{ "DATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( DATE )}, NULL },
{ "STRTRAN", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRTRAN )}, NULL },
{ "TIME", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIME )}, NULL },
{ "MSGINFO", {HB_FS_PUBLIC}, {HB_FUNCNAME( MSGINFO )}, NULL },
{ "NEW", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "TXMLDOCUMENT", {HB_FS_PUBLIC}, {HB_FUNCNAME( TXMLDOCUMENT )}, NULL },
{ "NSTATUS", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "TXMLITERATOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( TXMLITERATOR )}, NULL },
{ "OROOT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "FIND", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "CNAME", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "CDATA", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "NEXT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "UAC", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( UAC )}, &ModuleFakeDyn },
{ "REGISTERSERVER", {HB_FS_PUBLIC}, {HB_FUNCNAME( REGISTERSERVER )}, NULL },
{ "CERTIFICATES", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "SELECT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "COUNT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "SERIALNUMBER", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "ITEM", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "ISSUERNAME", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "SUBJECTNAME", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "THUMBPRINT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "VALIDFROMDATE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "VALIDTODATE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "VERSION", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HASPRIVATEKEY", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "GETINFO", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "AT", {HB_FS_PUBLIC}, {HB_FUNCNAME( AT )}, NULL },
{ "SUBSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SUBSTR )}, NULL },
{ "GETOBJCERTIFICADO", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( GETOBJCERTIFICADO )}, &ModuleFakeDyn },
{ "UPPER", {HB_FS_PUBLIC}, {HB_FUNCNAME( UPPER )}, NULL },
{ "SW_WRITETOREGWIN", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SW_WRITETOREGWIN )}, &ModuleFakeDyn },
{ "(_INITSTATICS00007)", {HB_FS_INITEXIT}, {hb_INITSTATICS}, &ModuleFakeDyn }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_MAIN )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_MAIN
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_MAIN )
   #include "hbiniseg.h"
#endif

HB_FUNC( MAIN )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 1, 0,	/* locals, params */
	HB_P_SFRAME, 90, 0,	/* symbol (_INITSTATICS) */
/* 00006 */ HB_P_BASELINE, 37, 0,	/* 37 */
	HB_P_FALSE,
	HB_P_POPLOCALNEAR, 1,	/* LOK */
/* 00012 */ HB_P_LINEOFFSET, 2,	/* 39 */
	HB_P_PUSHSYMNEAR, 5,	/* MSGYESNO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'C', 'o', 'n', 's', 'u', 'l', 't', 'a', 'r', ' ', 'p', 'o', 'r', ' ', 'C', 'N', 'P', 'J', '?', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'C', 'C', 'C', '-', 'e', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPFALSENEAR, 108,	/* 108 (abs: 00157) */
/* 00051 */ HB_P_LINEOFFSET, 4,	/* 41 */
	HB_P_PUSHSYMNEAR, 6,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPSTATIC, 2, 0,	/* OCNPJ */
/* 00063 */ HB_P_LINEOFFSET, 5,	/* 42 */
	HB_P_PUSHSYMNEAR, 7,	/* MSGGET */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'C', 'C', 'C', '-', 'e', 0, 
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'o', ' ', 'C', 'N', 'P', 'J', ':', 0, 
	HB_P_PUSHSTATICREF, 2, 0,	/* OCNPJ */
	HB_P_DOSHORT, 3,
/* 00099 */ HB_P_LINEOFFSET, 6,	/* 43 */
	HB_P_PUSHSYMNEAR, 8,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSTATIC, 2, 0,	/* OCNPJ */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 43,	/* 43 (abs: 00152) */
/* 00111 */ HB_P_LINEOFFSET, 7,	/* 44 */
	HB_P_PUSHSYMNEAR, 9,	/* MSGSTOP */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'C', 'N', 'P', 'J', ' ', 'n', 227, 'o', ' ', 'i', 'n', 'f', 'o', 'r', 'm', 'a', 'd', 'o', '!', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'E', 'r', 'r', 'o', 0, 
	HB_P_DOSHORT, 2,
/* 00147 */ HB_P_LINEOFFSET, 8,	/* 45 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00152 */ HB_P_LINEOFFSET, 10,	/* 47 */
	HB_P_TRUE,
	HB_P_POPLOCALNEAR, 1,	/* LOK */
/* 00157 */ HB_P_LINEOFFSET, 14,	/* 51 */
	HB_P_PUSHLOCALNEAR, 1,	/* LOK */
	HB_P_JUMPTRUE, 145, 0,	/* 145 (abs: 00306) */
/* 00164 */ HB_P_LINEOFFSET, 16,	/* 53 */
	HB_P_PUSHSYMNEAR, 5,	/* MSGYESNO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'C', 'o', 'n', 's', 'u', 'l', 't', 'a', 'r', ' ', 'p', 'o', 'r', ' ', 'C', 'P', 'F', '?', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'C', 'C', 'C', '-', 'e', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPFALSENEAR, 106,	/* 106 (abs: 00306) */
/* 00202 */ HB_P_LINEOFFSET, 18,	/* 55 */
	HB_P_PUSHSYMNEAR, 6,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPSTATIC, 3, 0,	/* OCPF */
/* 00214 */ HB_P_LINEOFFSET, 19,	/* 56 */
	HB_P_PUSHSYMNEAR, 7,	/* MSGGET */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'C', 'C', 'C', '-', 'e', 0, 
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'o', ' ', 'C', 'P', 'F', ':', 0, 
	HB_P_PUSHSTATICREF, 3, 0,	/* OCPF */
	HB_P_DOSHORT, 3,
/* 00249 */ HB_P_LINEOFFSET, 20,	/* 57 */
	HB_P_PUSHSYMNEAR, 8,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSTATIC, 3, 0,	/* OCPF */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 42,	/* 42 (abs: 00301) */
/* 00261 */ HB_P_LINEOFFSET, 21,	/* 58 */
	HB_P_PUSHSYMNEAR, 9,	/* MSGSTOP */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'C', 'P', 'F', ' ', 'n', 227, 'o', ' ', 'i', 'n', 'f', 'o', 'r', 'm', 'a', 'd', 'o', '!', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'E', 'r', 'r', 'o', 0, 
	HB_P_DOSHORT, 2,
/* 00296 */ HB_P_LINEOFFSET, 22,	/* 59 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00301 */ HB_P_LINEOFFSET, 24,	/* 61 */
	HB_P_TRUE,
	HB_P_POPLOCALNEAR, 1,	/* LOK */
/* 00306 */ HB_P_LINEOFFSET, 30,	/* 67 */
	HB_P_PUSHLOCALNEAR, 1,	/* LOK */
	HB_P_JUMPTRUE, 142, 0,	/* 142 (abs: 00452) */
/* 00313 */ HB_P_LINEOFFSET, 32,	/* 69 */
	HB_P_PUSHSYMNEAR, 5,	/* MSGYESNO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	'C', 'o', 'n', 's', 'u', 'l', 't', 'a', 'r', ' ', 'p', 'o', 'r', ' ', 'I', 'E', '?', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'C', 'C', 'C', '-', 'e', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPFALSENEAR, 104,	/* 104 (abs: 00452) */
/* 00350 */ HB_P_LINEOFFSET, 34,	/* 71 */
	HB_P_PUSHSYMNEAR, 6,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPSTATIC, 4, 0,	/* OIE */
/* 00362 */ HB_P_LINEOFFSET, 35,	/* 72 */
	HB_P_PUSHSYMNEAR, 7,	/* MSGGET */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'C', 'C', 'C', '-', 'e', 0, 
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'a', ' ', 'I', 'E', ':', 0, 
	HB_P_PUSHSTATICREF, 4, 0,	/* OIE */
	HB_P_DOSHORT, 3,
/* 00396 */ HB_P_LINEOFFSET, 36,	/* 73 */
	HB_P_PUSHSYMNEAR, 8,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSTATIC, 4, 0,	/* OIE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 41,	/* 41 (abs: 00447) */
/* 00408 */ HB_P_LINEOFFSET, 37,	/* 74 */
	HB_P_PUSHSYMNEAR, 9,	/* MSGSTOP */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	'I', 'E', ' ', 'n', 227, 'o', ' ', 'i', 'n', 'f', 'o', 'r', 'm', 'a', 'd', 'a', '!', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'E', 'r', 'r', 'o', 0, 
	HB_P_DOSHORT, 2,
/* 00442 */ HB_P_LINEOFFSET, 38,	/* 75 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00447 */ HB_P_LINEOFFSET, 40,	/* 77 */
	HB_P_TRUE,
	HB_P_POPLOCALNEAR, 1,	/* LOK */
/* 00452 */ HB_P_LINEOFFSET, 46,	/* 83 */
	HB_P_PUSHLOCALNEAR, 1,	/* LOK */
	HB_P_JUMPFALSENEAR, 106,	/* 106 (abs: 00562) */
/* 00458 */ HB_P_LINEOFFSET, 48,	/* 85 */
	HB_P_PUSHSYMNEAR, 6,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPSTATIC, 5, 0,	/* OUF */
/* 00470 */ HB_P_LINEOFFSET, 49,	/* 86 */
	HB_P_PUSHSYMNEAR, 7,	/* MSGGET */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'C', 'C', 'C', '-', 'e', 0, 
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'a', ' ', 'U', 'F', ':', 0, 
	HB_P_PUSHSTATICREF, 5, 0,	/* OUF */
	HB_P_DOSHORT, 3,
/* 00504 */ HB_P_LINEOFFSET, 50,	/* 87 */
	HB_P_PUSHSYMNEAR, 8,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSTATIC, 5, 0,	/* OUF */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 41,	/* 41 (abs: 00555) */
/* 00516 */ HB_P_LINEOFFSET, 51,	/* 88 */
	HB_P_PUSHSYMNEAR, 9,	/* MSGSTOP */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	'U', 'F', ' ', 'n', 227, 'o', ' ', 'i', 'n', 'f', 'o', 'r', 'm', 'a', 'd', 'a', '!', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'E', 'r', 'r', 'o', 0, 
	HB_P_DOSHORT, 2,
/* 00550 */ HB_P_LINEOFFSET, 52,	/* 89 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00555 */ HB_P_LINEOFFSET, 55,	/* 92 */
	HB_P_PUSHSYMNEAR, 10,	/* CONSCAD */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00562 */ HB_P_LINEOFFSET, 60,	/* 97 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00567 */
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC( CONSCAD )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 1, 0,	/* locals, params */
	HB_P_SFRAME, 90, 0,	/* symbol (_INITSTATICS) */
/* 00006 */ HB_P_BASELINE, 102, 0,	/* 102 */
	HB_P_HASHGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 1,	/* ARESVAL */
/* 00014 */ HB_P_LINEOFFSET, 2,	/* 104 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_POPSTATIC, 1, 0,	/* STRXML */
/* 00022 */ HB_P_LINEOFFSET, 3,	/* 105 */
	HB_P_PUSHSYMNEAR, 11,	/* CURDRIVE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	':', 92, 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 12,	/* CURDIR */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	92, 'S', 'c', 'h', 'e', 'm', 'a', 's', 92, 'c', 'o', 'n', 's', 'C', 'a', 'd', '_', 'v', '2', '.', '0', '0', '.', 'x', 's', 'd', 0, 
	HB_P_PLUS,
	HB_P_POPSTATIC, 6, 0,	/* OFILEXSD */
/* 00074 */ HB_P_LINEOFFSET, 5,	/* 107 */
	HB_P_PUSHSTATIC, 1, 0,	/* STRXML */
	HB_P_PUSHSTRSHORT, 67,	/* 67 */
	'<', 'C', 'o', 'n', 's', 'C', 'a', 'd', ' ', 'x', 'm', 'l', 'n', 's', '=', 34, 'h', 't', 't', 'p', ':', '/', '/', 'w', 'w', 'w', '.', 'p', 'o', 'r', 't', 'a', 'l', 'f', 'i', 's', 'c', 'a', 'l', '.', 'i', 'n', 'f', '.', 'b', 'r', '/', 'n', 'f', 'e', 34, ' ', 'v', 'e', 'r', 's', 'a', 'o', '=', 34, '2', '.', '0', '0', 34, '>', 0, 
	HB_P_PLUS,
	HB_P_POPSTATIC, 1, 0,	/* STRXML */
/* 00152 */ HB_P_LINEOFFSET, 6,	/* 108 */
	HB_P_PUSHSTATIC, 1, 0,	/* STRXML */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'<', 'i', 'n', 'f', 'C', 'o', 'n', 's', '>', 0, 
	HB_P_PLUS,
	HB_P_POPSTATIC, 1, 0,	/* STRXML */
/* 00173 */ HB_P_LINEOFFSET, 7,	/* 109 */
	HB_P_PUSHSTATIC, 1, 0,	/* STRXML */
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'<', 'x', 'S', 'e', 'r', 'v', '>', 'C', 'O', 'N', 'S', '-', 'C', 'A', 'D', '<', '/', 'x', 'S', 'e', 'r', 'v', '>', 0, 
	HB_P_PLUS,
	HB_P_POPSTATIC, 1, 0,	/* STRXML */
/* 00208 */ HB_P_LINEOFFSET, 8,	/* 110 */
	HB_P_PUSHSTATIC, 1, 0,	/* STRXML */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'<', 'U', 'F', '>', 0, 
	HB_P_PUSHSTATIC, 5, 0,	/* OUF */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'<', '/', 'U', 'F', '>', 0, 
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPSTATIC, 1, 0,	/* STRXML */
/* 00237 */ HB_P_LINEOFFSET, 9,	/* 111 */
	HB_P_PUSHSTATIC, 1, 0,	/* STRXML */
	HB_P_PUSHSYMNEAR, 8,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSTATIC, 4, 0,	/* OIE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 29,	/* 29 (abs: 00279) */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'<', 'I', 'E', '>', 0, 
	HB_P_PUSHSYMNEAR, 13,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTATIC, 4, 0,	/* OIE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'<', '/', 'I', 'E', '>', 0, 
	HB_P_PLUS,
	HB_P_JUMPNEAR, 5,	/* 5 (abs: 00282) */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_PLUS,
	HB_P_POPSTATIC, 1, 0,	/* STRXML */
/* 00286 */ HB_P_LINEOFFSET, 10,	/* 112 */
	HB_P_PUSHSTATIC, 1, 0,	/* STRXML */
	HB_P_PUSHSYMNEAR, 8,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSTATIC, 2, 0,	/* OCNPJ */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 28,	/* 28 (abs: 00327) */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'<', 'C', 'N', 'P', 'J', '>', 0, 
	HB_P_PUSHSTATIC, 2, 0,	/* OCNPJ */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'<', '/', 'C', 'N', 'P', 'J', '>', 0, 
	HB_P_PLUS,
	HB_P_JUMPNEAR, 5,	/* 5 (abs: 00330) */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_PLUS,
	HB_P_POPSTATIC, 1, 0,	/* STRXML */
/* 00334 */ HB_P_LINEOFFSET, 11,	/* 113 */
	HB_P_PUSHSTATIC, 1, 0,	/* STRXML */
	HB_P_PUSHSYMNEAR, 8,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSTATIC, 3, 0,	/* OCPF */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 26,	/* 26 (abs: 00373) */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'<', 'C', 'P', 'F', '>', 0, 
	HB_P_PUSHSTATIC, 3, 0,	/* OCPF */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'<', '/', 'C', 'P', 'F', '>', 0, 
	HB_P_PLUS,
	HB_P_JUMPNEAR, 5,	/* 5 (abs: 00376) */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_PLUS,
	HB_P_POPSTATIC, 1, 0,	/* STRXML */
/* 00380 */ HB_P_LINEOFFSET, 12,	/* 114 */
	HB_P_PUSHSTATIC, 1, 0,	/* STRXML */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'<', '/', 'i', 'n', 'f', 'C', 'o', 'n', 's', '>', 0, 
	HB_P_PLUS,
	HB_P_POPSTATIC, 1, 0,	/* STRXML */
/* 00402 */ HB_P_LINEOFFSET, 13,	/* 115 */
	HB_P_PUSHSTATIC, 1, 0,	/* STRXML */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'<', '/', 'C', 'o', 'n', 's', 'C', 'a', 'd', '>', 0, 
	HB_P_PLUS,
	HB_P_POPSTATIC, 1, 0,	/* STRXML */
/* 00424 */ HB_P_LINEOFFSET, 23,	/* 125 */
	HB_P_PUSHSYMNEAR, 14,	/* TRANSMITEXMLSOAP */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00431 */ HB_P_LINEOFFSET, 26,	/* 128 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00436 */
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC( VALIDAXML )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 6, 1,	/* locals, params */
	HB_P_SFRAME, 90, 0,	/* symbol (_INITSTATICS) */
/* 00006 */ HB_P_BASELINE, 139, 0,	/* 139 */
	HB_P_HASHGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 5,	/* ARETORNO */
/* 00014 */ HB_P_LINEOFFSET, 1,	/* 140 */
	HB_P_LOCALNEARSETSTR, 6, 1, 0,	/* CSCHEMAFILENAME 1*/
	0, 
/* 00021 */ HB_P_LINEOFFSET, 4,	/* 143 */
	HB_P_FALSE,
	HB_P_PUSHLOCALREF, 5, 0,	/* ARETORNO */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'T', 'A', 'T', 'U', 'S', 0, 
	HB_P_ARRAYPOP,
/* 00037 */ HB_P_LINEOFFSET, 5,	/* 144 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_PUSHLOCALREF, 5, 0,	/* ARETORNO */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'M', 'S', 'G', 0, 
	HB_P_ARRAYPOP,
/* 00052 */ HB_P_LINEOFFSET, 8,	/* 147 */
	HB_P_PUSHLOCALNEAR, 1,	/* OFILEXSD */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 49,	/* 49 (abs: 00107) */
/* 00060 */ HB_P_LINEOFFSET, 9,	/* 148 */
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 'X', 'S', 'D', ' ', 'n', 227, 'o', ' ', 'i', 'n', 'f', 'o', 'r', 'm', 'a', 'd', 'o', '.', 0, 
	HB_P_PUSHLOCALREF, 5, 0,	/* ARETORNO */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'M', 'S', 'G', 0, 
	HB_P_ARRAYPOP,
/* 00101 */ HB_P_LINEOFFSET, 10,	/* 149 */
	HB_P_PUSHLOCALNEAR, 5,	/* ARETORNO */
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00107 */ HB_P_LINEOFFSET, 15,	/* 154 */
	HB_P_PUSHLOCALNEAR, 1,	/* OFILEXSD */
	HB_P_POPLOCALNEAR, 6,	/* CSCHEMAFILENAME */
	HB_P_TRYBEGIN, 42, 0, 0,	/* 42 (abs: 00000155) */
/* 00117 */ HB_P_LINEOFFSET, 18,	/* 157 */
	HB_P_PUSHSYMNEAR, 16,	/* XHB_CREATEOBJECT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'M', 'S', 'X', 'M', 'L', '2', '.', 'D', 'O', 'M', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', '.', '5', '.', '0', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 2,	/* ODOMDOC */
/* 00151 */ HB_P_TRYEND, 86, 0, 0,	/* 86 (abs: 00000237) */
/* 00155 */ HB_P_TRYRECOVER, 0, 0, 0,	/* 0 (abs: 00000155) */
	HB_P_POP,
/* 00160 */ HB_P_LINEOFFSET, 20,	/* 159 */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'N', 227, 'o', ' ', 'f', 'o', 'i', ' ', 'p', 'o', 's', 's', 237, 'v', 'e', 'l', ' ', 'c', 'a', 'r', 'r', 'e', 'g', 'a', 'r', ' ', 'o', ' ', 'M', 'S', 'X', 'M', 'L', ' ', 'p', 'a', 'r', 'a', ' ', 'v', 'a', 'l', 'i', 'd', 'a', 231, 227, 'o', ' ', 'd', 'o', ' ', 'X', 'M', 'L', '.', 0, 
	HB_P_PUSHLOCALREF, 5, 0,	/* ARETORNO */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'M', 'S', 'G', 0, 
	HB_P_ARRAYPOP,
/* 00231 */ HB_P_LINEOFFSET, 21,	/* 160 */
	HB_P_PUSHLOCALNEAR, 5,	/* ARETORNO */
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_TRYBEGIN, 65, 0, 0,	/* 65 (abs: 00000302) */
/* 00241 */ HB_P_LINEOFFSET, 25,	/* 164 */
	HB_P_MESSAGE, 17, 0,	/* _ASYNC */
	HB_P_PUSHLOCALNEAR, 2,	/* ODOMDOC */
	HB_P_TRUE,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00252 */ HB_P_LINEOFFSET, 26,	/* 165 */
	HB_P_MESSAGE, 18, 0,	/* _RESOLVEEXTERNALS */
	HB_P_PUSHLOCALNEAR, 2,	/* ODOMDOC */
	HB_P_TRUE,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00263 */ HB_P_LINEOFFSET, 27,	/* 166 */
	HB_P_MESSAGE, 19, 0,	/* _VALIDATEONPARSE */
	HB_P_PUSHLOCALNEAR, 2,	/* ODOMDOC */
	HB_P_TRUE,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00274 */ HB_P_LINEOFFSET, 28,	/* 167 */
	HB_P_MESSAGE, 20, 0,	/* _PRESERVEWHITESPACE */
	HB_P_PUSHLOCALNEAR, 2,	/* ODOMDOC */
	HB_P_TRUE,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00285 */ HB_P_LINEOFFSET, 29,	/* 168 */
	HB_P_MESSAGE, 21, 0,	/* LOADXML */
	HB_P_PUSHLOCALNEAR, 2,	/* ODOMDOC */
	HB_P_PUSHSTATIC, 1, 0,	/* STRXML */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00298 */ HB_P_TRYEND, 87, 0, 0,	/* 87 (abs: 00000385) */
/* 00302 */ HB_P_TRYRECOVER, 0, 0, 0,	/* 0 (abs: 00000302) */
	HB_P_POP,
/* 00307 */ HB_P_LINEOFFSET, 31,	/* 170 */
	HB_P_PUSHSTRSHORT, 58,	/* 58 */
	'N', 227, 'o', ' ', 'f', 'o', 'i', ' ', 'p', 'o', 's', 's', 237, 'v', 'e', 'l', ' ', 'c', 'a', 'r', 'r', 'e', 'g', 'a', 'r', ' ', 'o', ' ', 'a', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 'X', 'M', 'L', ' ', 'p', 'a', 'r', 'a', ' ', 'a', ' ', 'v', 'a', 'l', 'i', 'd', 'a', 231, 227, 'o', '.', 0, 
	HB_P_PUSHLOCALREF, 5, 0,	/* ARETORNO */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'M', 'S', 'G', 0, 
	HB_P_ARRAYPOP,
/* 00379 */ HB_P_LINEOFFSET, 32,	/* 171 */
	HB_P_PUSHLOCALNEAR, 5,	/* ARETORNO */
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00385 */ HB_P_LINEOFFSET, 35,	/* 174 */
	HB_P_MESSAGE, 22, 0,	/* ERRORCODE */
	HB_P_MESSAGE, 23, 0,	/* PARSEERROR */
	HB_P_PUSHLOCALNEAR, 2,	/* ODOMDOC */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 0,
	HB_P_ZERO,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSE, 255, 0,	/* 255 (abs: 00656) */
/* 00404 */ HB_P_LINEOFFSET, 40,	/* 179 */
	HB_P_PUSHSTRSHORT, 77,	/* 77 */
	'N', 227, 'o', ' ', 'f', 'o', 'i', ' ', 'p', 'o', 's', 's', 237, 'v', 'e', 'l', ' ', 'c', 'a', 'r', 'r', 'e', 'g', 'a', 'r', ' ', 'o', ' ', 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', 'p', 'o', 'i', 's', ' ', 'e', 'l', 'e', ' ', 'n', 227, 'o', ' ', 'c', 'o', 'r', 'r', 'e', 's', 'p', 'o', 'n', 'd', 'e', ' ', 'a', 'o', ' ', 's', 'e', 'u', ' ', 'S', 'c', 'h', 'e', 'm', 'a', 0, 
	HB_P_PUSHSYMNEAR, 24,	/* HB_OSNEWLINE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'L', 'i', 'n', 'h', 'a', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 25,	/* STR */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 26, 0,	/* LINE */
	HB_P_MESSAGE, 23, 0,	/* PARSEERROR */
	HB_P_PUSHLOCALNEAR, 2,	/* ODOMDOC */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 24,	/* HB_OSNEWLINE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'C', 'a', 'r', 'a', 'c', 't', 'e', 'r', 'e', ' ', 'n', 'a', ' ', 'l', 'i', 'n', 'h', 'a', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 25,	/* STR */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 27, 0,	/* LINEPOS */
	HB_P_MESSAGE, 23, 0,	/* PARSEERROR */
	HB_P_PUSHLOCALNEAR, 2,	/* ODOMDOC */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 24,	/* HB_OSNEWLINE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'C', 'a', 'u', 's', 'a', ' ', 'd', 'o', ' ', 'e', 'r', 'r', 'o', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_MESSAGE, 28, 0,	/* REASON */
	HB_P_MESSAGE, 23, 0,	/* PARSEERROR */
	HB_P_PUSHLOCALNEAR, 2,	/* ODOMDOC */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 0,
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 24,	/* HB_OSNEWLINE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'o', 'd', 'e', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 25,	/* STR */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 22, 0,	/* ERRORCODE */
	HB_P_MESSAGE, 23, 0,	/* PARSEERROR */
	HB_P_PUSHLOCALNEAR, 2,	/* ODOMDOC */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHLOCALREF, 5, 0,	/* ARETORNO */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'M', 'S', 'G', 0, 
	HB_P_ARRAYPOP,
/* 00650 */ HB_P_LINEOFFSET, 41,	/* 180 */
	HB_P_PUSHLOCALNEAR, 5,	/* ARETORNO */
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_TRYBEGIN, 45, 0, 0,	/* 45 (abs: 00000701) */
/* 00660 */ HB_P_LINEOFFSET, 45,	/* 184 */
	HB_P_PUSHSYMNEAR, 16,	/* XHB_CREATEOBJECT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'M', 'S', 'X', 'M', 'L', '2', '.', 'X', 'M', 'L', 'S', 'c', 'h', 'e', 'm', 'a', 'C', 'a', 'c', 'h', 'e', '.', '5', '.', '0', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 3,	/* OSCHEMA */
/* 00697 */ HB_P_TRYEND, 85, 0, 0,	/* 85 (abs: 00000782) */
/* 00701 */ HB_P_TRYRECOVER, 0, 0, 0,	/* 0 (abs: 00000701) */
	HB_P_POP,
/* 00706 */ HB_P_LINEOFFSET, 47,	/* 186 */
	HB_P_PUSHSTRSHORT, 56,	/* 56 */
	'N', 227, 'o', ' ', 'f', 'o', 'i', ' ', 'p', 'o', 's', 's', 237, 'v', 'e', 'l', ' ', 'c', 'a', 'r', 'r', 'e', 'g', 'a', 'r', ' ', 'o', ' ', 'M', 'S', 'X', 'M', 'L', ' ', 'p', 'a', 'r', 'a', ' ', 'o', ' ', 's', 'c', 'h', 'e', 'm', 'a', ' ', 'd', 'o', ' ', 'X', 'M', 'L', '.', 0, 
	HB_P_PUSHLOCALREF, 5, 0,	/* ARETORNO */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'M', 'S', 'G', 0, 
	HB_P_ARRAYPOP,
/* 00776 */ HB_P_LINEOFFSET, 48,	/* 187 */
	HB_P_PUSHLOCALNEAR, 5,	/* ARETORNO */
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00782 */ HB_P_LINEOFFSET, 51,	/* 190 */
	HB_P_PUSHSYMNEAR, 29,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* CSCHEMAFILENAME */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 59,	/* 59 (abs: 00850) */
/* 00793 */ HB_P_LINEOFFSET, 52,	/* 191 */
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 'd', 'o', ' ', 's', 'c', 'h', 'e', 'm', 'a', ' ', 'n', 227, 'o', ' ', 'e', 'n', 'c', 'o', 'n', 't', 'r', 'a', 'd', 'o', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 6,	/* CSCHEMAFILENAME */
	HB_P_PLUS,
	HB_P_PUSHLOCALREF, 5, 0,	/* ARETORNO */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'M', 'S', 'G', 0, 
	HB_P_ARRAYPOP,
/* 00844 */ HB_P_LINEOFFSET, 53,	/* 192 */
	HB_P_PUSHLOCALNEAR, 5,	/* ARETORNO */
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_TRYBEGIN, 57, 0, 0,	/* 57 (abs: 00000907) */
/* 00854 */ HB_P_LINEOFFSET, 58,	/* 197 */
	HB_P_MESSAGE, 30, 0,	/* ADD */
	HB_P_PUSHLOCALNEAR, 3,	/* OSCHEMA */
	HB_P_PUSHSTRSHORT, 35,	/* 35 */
	'h', 't', 't', 'p', ':', '/', '/', 'w', 'w', 'w', '.', 'p', 'o', 'r', 't', 'a', 'l', 'f', 'i', 's', 'c', 'a', 'l', '.', 'i', 'n', 'f', '.', 'b', 'r', '/', 'n', 'f', 'e', 0, 
	HB_P_PUSHLOCALNEAR, 6,	/* CSCHEMAFILENAME */
	HB_P_SENDSHORT, 2,
	HB_P_POP,
/* 00903 */ HB_P_TRYEND, 213, 0, 0,	/* 213 (abs: 00001116) */
/* 00907 */ HB_P_TRYRECOVER, 0, 0, 0,	/* 0 (abs: 00000907) */
	HB_P_POPLOCALNEAR, 7,	/* OERROR */
/* 00913 */ HB_P_LINEOFFSET, 66,	/* 205 */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'F', 'a', 'l', 'h', 'a', ' ', 0, 
	HB_P_PUSHSYMNEAR, 24,	/* HB_OSNEWLINE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'E', 'r', 'r', 'o', 'r', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 31,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 32, 0,	/* GENCODE */
	HB_P_PUSHLOCALNEAR, 7,	/* OERROR */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	';', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 24,	/* HB_OSNEWLINE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'u', 'b', 'C', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 31,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 33, 0,	/* SUBCODE */
	HB_P_PUSHLOCALNEAR, 7,	/* OERROR */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	';', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 24,	/* HB_OSNEWLINE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'O', 'S', 'C', 'o', 'd', 'e', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 31,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 34, 0,	/* OSCODE */
	HB_P_PUSHLOCALNEAR, 7,	/* OERROR */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	';', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 24,	/* HB_OSNEWLINE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'S', 'u', 'b', 'S', 'y', 's', 't', 'e', 'm', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 31,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 35, 0,	/* SUBSYSTEM */
	HB_P_PUSHLOCALNEAR, 7,	/* OERROR */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	';', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 24,	/* HB_OSNEWLINE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'M', 'e', 'n', 's', 'a', 'g', 'e', 'm', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_MESSAGE, 36, 0,	/* DESCRIPTION */
	HB_P_PUSHLOCALNEAR, 7,	/* OERROR */
	HB_P_SENDSHORT, 0,
	HB_P_PLUS,
	HB_P_PUSHLOCALREF, 5, 0,	/* ARETORNO */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'M', 'S', 'G', 0, 
	HB_P_ARRAYPOP,
/* 01110 */ HB_P_LINEOFFSET, 67,	/* 206 */
	HB_P_PUSHLOCALNEAR, 5,	/* ARETORNO */
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 01116 */ HB_P_LINEOFFSET, 70,	/* 209 */
	HB_P_MESSAGE, 37, 0,	/* _SCHEMAS */
	HB_P_PUSHLOCALNEAR, 2,	/* ODOMDOC */
	HB_P_PUSHLOCALNEAR, 3,	/* OSCHEMA */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 01128 */ HB_P_LINEOFFSET, 71,	/* 210 */
	HB_P_MESSAGE, 38, 0,	/* VALIDATE */
	HB_P_PUSHLOCALNEAR, 2,	/* ODOMDOC */
	HB_P_SENDSHORT, 0,
	HB_P_POPLOCALNEAR, 4,	/* PARSEERROR */
/* 01139 */ HB_P_LINEOFFSET, 73,	/* 212 */
	HB_P_MESSAGE, 22, 0,	/* ERRORCODE */
	HB_P_PUSHLOCALNEAR, 4,	/* PARSEERROR */
	HB_P_SENDSHORT, 0,
	HB_P_ZERO,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 50,	/* 50 (abs: 01200) */
/* 01152 */ HB_P_LINEOFFSET, 74,	/* 213 */
	HB_P_MESSAGE, 22, 0,	/* ERRORCODE */
	HB_P_PUSHLOCALNEAR, 4,	/* PARSEERROR */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALREF, 5, 0,	/* ARETORNO */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'n', 'R', 'e', 's', 'u', 'l', 't', 0, 
	HB_P_ARRAYPOP,
/* 01175 */ HB_P_LINEOFFSET, 75,	/* 214 */
	HB_P_MESSAGE, 28, 0,	/* REASON */
	HB_P_PUSHLOCALNEAR, 4,	/* PARSEERROR */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALREF, 5, 0,	/* ARETORNO */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'M', 'S', 'G', 0, 
	HB_P_ARRAYPOP,
/* 01194 */ HB_P_LINEOFFSET, 76,	/* 215 */
	HB_P_PUSHLOCALNEAR, 5,	/* ARETORNO */
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 01200 */ HB_P_LINEOFFSET, 79,	/* 218 */
	HB_P_PUSHNIL,
	HB_P_POPLOCALNEAR, 2,	/* ODOMDOC */
/* 01205 */ HB_P_LINEOFFSET, 80,	/* 219 */
	HB_P_PUSHNIL,
	HB_P_POPLOCALNEAR, 4,	/* PARSEERROR */
/* 01210 */ HB_P_LINEOFFSET, 81,	/* 220 */
	HB_P_PUSHNIL,
	HB_P_POPLOCALNEAR, 3,	/* OSCHEMA */
/* 01215 */ HB_P_LINEOFFSET, 85,	/* 224 */
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 5, 0,	/* ARETORNO */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'T', 'A', 'T', 'U', 'S', 0, 
	HB_P_ARRAYPOP,
/* 01231 */ HB_P_LINEOFFSET, 87,	/* 226 */
	HB_P_PUSHLOCALNEAR, 5,	/* ARETORNO */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 01237 */
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC( TRANSMITEXMLSOAP )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 8, 0,	/* locals, params */
	HB_P_SFRAME, 90, 0,	/* symbol (_INITSTATICS) */
/* 00006 */ HB_P_BASELINE, 233, 0,	/* 233 */
	HB_P_HASHGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 8,	/* ARET */
/* 00014 */ HB_P_LINEOFFSET, 3,	/* 236 */
	HB_P_LOCALNEARSETSTR, 1, 59, 0,	/* CLINKWS 59*/
	'h', 't', 't', 'p', 's', ':', '/', '/', 'n', 'f', 'e', '.', 'f', 'a', 'z', 'e', 'n', 'd', 'a', '.', 's', 'p', '.', 'g', 'o', 'v', '.', 'b', 'r', '/', 'w', 's', '/', 'c', 'a', 'd', 'c', 'o', 'n', 's', 'u', 'l', 't', 'a', 'c', 'a', 'd', 'a', 's', 't', 'r', 'o', '2', '.', 'a', 's', 'm', 'x', 0, 
/* 00079 */ HB_P_LINEOFFSET, 7,	/* 240 */
	HB_P_LOCALNEARSETSTR, 2, 61, 0,	/* CMETHOD 61*/
	'h', 't', 't', 'p', ':', '/', '/', 'w', 'w', 'w', '.', 'p', 'o', 'r', 't', 'a', 'l', 'f', 'i', 's', 'c', 'a', 'l', '.', 'i', 'n', 'f', '.', 'b', 'r', '/', 'n', 'f', 'e', '/', 'w', 's', 'd', 'l', '/', 'C', 'a', 'd', 'C', 'o', 'n', 's', 'u', 'l', 't', 'a', 'C', 'a', 'd', 'a', 's', 't', 'r', 'o', '2', 0, 
/* 00146 */ HB_P_LINEOFFSET, 8,	/* 241 */
	HB_P_PUSHSTRSHORT, 79,	/* 79 */
	'h', 't', 't', 'p', ':', '/', '/', 'w', 'w', 'w', '.', 'p', 'o', 'r', 't', 'a', 'l', 'f', 'i', 's', 'c', 'a', 'l', '.', 'i', 'n', 'f', '.', 'b', 'r', '/', 'n', 'f', 'e', '/', 'w', 's', 'd', 'l', '/', 'C', 'a', 'd', 'C', 'o', 'n', 's', 'u', 'l', 't', 'a', 'C', 'a', 'd', 'a', 's', 't', 'r', 'o', '2', '/', 'c', 'o', 'n', 's', 'u', 'l', 't', 'a', 'C', 'a', 'd', 'a', 's', 't', 'r', 'o', '2', 0, 
	HB_P_POPVARIABLE, 39, 0,	/* CSOAPACT */
/* 00232 */ HB_P_LINEOFFSET, 11,	/* 244 */
	HB_P_LOCALNEARSETSTR, 3, 1, 0,	/* CENV 1*/
	0, 
/* 00239 */ HB_P_LINEOFFSET, 12,	/* 245 */
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	'<', '?', 'x', 'm', 'l', ' ', 'v', 'e', 'r', 's', 'i', 'o', 'n', '=', 34, '1', '.', '0', 34, ' ', 'e', 'n', 'c', 'o', 'd', 'i', 'n', 'g', '=', 34, 'u', 't', 'f', '-', '8', 34, '?', '>', 0, 
	HB_P_LOCALNEARADD, 3,	/* CENV */
/* 00284 */ HB_P_LINEOFFSET, 13,	/* 246 */
	HB_P_PUSHSTRSHORT, 168,	/* 168 */
	'<', 's', 'o', 'a', 'p', ':', 'E', 'n', 'v', 'e', 'l', 'o', 'p', 'e', ' ', 'x', 'm', 'l', 'n', 's', ':', 's', 'o', 'a', 'p', '=', 34, 'h', 't', 't', 'p', ':', '/', '/', 'w', 'w', 'w', '.', 'w', '3', '.', 'o', 'r', 'g', '/', '2', '0', '0', '3', '/', '0', '5', '/', 's', 'o', 'a', 'p', '-', 'e', 'n', 'v', 'e', 'l', 'o', 'p', 'e', 34, ' ', 'x', 'm', 'l', 'n', 's', ':', 'x', 's', 'i', '=', 34, 'h', 't', 't', 'p', ':', '/', '/', 'w', 'w', 'w', '.', 'w', '3', '.', 'o', 'r', 'g', '/', '2', '0', '0', '1', '/', 'X', 'M', 'L', 'S', 'c', 'h', 'e', 'm', 'a', '-', 'i', 'n', 's', 't', 'a', 'n', 'c', 'e', 34, ' ', 'x', 'm', 'l', 'n', 's', ':', 'x', 's', 'd', '=', 34, 'h', 't', 't', 'p', ':', '/', '/', 'w', 'w', 'w', '.', 'w', '3', '.', 'o', 'r', 'g', '/', '2', '0', '0', '1', '/', 'X', 'M', 'L', 'S', 'c', 'h', 'e', 'm', 'a', 34, '>', 0, 
	HB_P_LOCALNEARADD, 3,	/* CENV */
/* 00458 */ HB_P_LINEOFFSET, 14,	/* 247 */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'<', 's', 'o', 'a', 'p', ':', 'H', 'e', 'a', 'd', 'e', 'r', '>', 0, 
	HB_P_LOCALNEARADD, 3,	/* CENV */
/* 00478 */ HB_P_LINEOFFSET, 15,	/* 248 */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'<', 'n', 'f', 'e', 'C', 'a', 'b', 'e', 'c', 'M', 's', 'g', ' ', 'x', 'm', 'l', 'n', 's', '=', 34, 0, 
	HB_P_PUSHLOCALNEAR, 2,	/* CMETHOD */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	34, '>', 0, 
	HB_P_PLUS,
	HB_P_LOCALNEARADD, 3,	/* CENV */
/* 00514 */ HB_P_LINEOFFSET, 16,	/* 249 */
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	'<', 'v', 'e', 'r', 's', 'a', 'o', 'D', 'a', 'd', 'o', 's', '>', '2', '.', '0', '0', '<', '/', 'v', 'e', 'r', 's', 'a', 'o', 'D', 'a', 'd', 'o', 's', '>', 0, 
	HB_P_LOCALNEARADD, 3,	/* CENV */
/* 00552 */ HB_P_LINEOFFSET, 17,	/* 250 */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'<', 'c', 'U', 'F', '>', '3', '5', '<', '/', 'c', 'U', 'F', '>', 0, 
	HB_P_LOCALNEARADD, 3,	/* CENV */
/* 00572 */ HB_P_LINEOFFSET, 18,	/* 251 */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'<', '/', 'n', 'f', 'e', 'C', 'a', 'b', 'e', 'c', 'M', 's', 'g', '>', 0, 
	HB_P_LOCALNEARADD, 3,	/* CENV */
/* 00593 */ HB_P_LINEOFFSET, 19,	/* 252 */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'<', '/', 's', 'o', 'a', 'p', ':', 'H', 'e', 'a', 'd', 'e', 'r', '>', 0, 
	HB_P_LOCALNEARADD, 3,	/* CENV */
/* 00614 */ HB_P_LINEOFFSET, 20,	/* 253 */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'<', 's', 'o', 'a', 'p', ':', 'B', 'o', 'd', 'y', '>', 0, 
	HB_P_LOCALNEARADD, 3,	/* CENV */
/* 00632 */ HB_P_LINEOFFSET, 21,	/* 254 */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'<', 'n', 'f', 'e', 'D', 'a', 'd', 'o', 's', 'M', 's', 'g', ' ', 'x', 'm', 'l', 'n', 's', '=', 34, 0, 
	HB_P_PUSHLOCALNEAR, 2,	/* CMETHOD */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	34, '>', 0, 
	HB_P_PLUS,
	HB_P_LOCALNEARADD, 3,	/* CENV */
/* 00668 */ HB_P_LINEOFFSET, 22,	/* 255 */
	HB_P_PUSHSTATIC, 1, 0,	/* STRXML */
	HB_P_LOCALNEARADD, 3,	/* CENV */
/* 00675 */ HB_P_LINEOFFSET, 23,	/* 256 */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'<', '/', 'n', 'f', 'e', 'D', 'a', 'd', 'o', 's', 'M', 's', 'g', '>', 0, 
	HB_P_LOCALNEARADD, 3,	/* CENV */
/* 00696 */ HB_P_LINEOFFSET, 24,	/* 257 */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'<', '/', 's', 'o', 'a', 'p', ':', 'B', 'o', 'd', 'y', '>', 0, 
	HB_P_LOCALNEARADD, 3,	/* CENV */
/* 00715 */ HB_P_LINEOFFSET, 25,	/* 258 */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'<', '/', 's', 'o', 'a', 'p', ':', 'E', 'n', 'v', 'e', 'l', 'o', 'p', 'e', '>', 0, 
	HB_P_LOCALNEARADD, 3,	/* CENV */
/* 00738 */ HB_P_LINEOFFSET, 29,	/* 262 */
	HB_P_PUSHSYMNEAR, 40,	/* SELECTCERTIFICADO */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_POPLOCALNEAR, 8,	/* ARET */
/* 00747 */ HB_P_LINEOFFSET, 30,	/* 263 */
	HB_P_PUSHLOCALNEAR, 8,	/* ARET */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'T', 'A', 'T', 'U', 'S', 0, 
	HB_P_ARRAYPUSH,
	HB_P_JUMPTRUENEAR, 30,	/* 30 (abs: 00791) */
/* 00763 */ HB_P_LINEOFFSET, 31,	/* 264 */
	HB_P_PUSHSYMNEAR, 9,	/* MSGSTOP */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* ARET */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'M', 'S', 'G', 0, 
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'E', 'r', 'r', 'o', 0, 
	HB_P_DOSHORT, 2,
/* 00786 */ HB_P_LINEOFFSET, 32,	/* 265 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_TRYBEGIN, 18, 0, 0,	/* 18 (abs: 00000809) */
/* 00795 */ HB_P_LINEOFFSET, 38,	/* 271 */
	HB_P_PUSHSYMNEAR, 41,	/* GETCNCERTIFICADO */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_POPVARIABLE, 42, 0,	/* CCERT */
/* 00805 */ HB_P_TRYEND, 88, 0, 0,	/* 88 (abs: 00000893) */
/* 00809 */ HB_P_TRYRECOVER, 0, 0, 0,	/* 0 (abs: 00000809) */
	HB_P_POP,
/* 00814 */ HB_P_LINEOFFSET, 40,	/* 273 */
	HB_P_PUSHSYMNEAR, 9,	/* MSGSTOP */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 58,	/* 58 */
	'N', 227, 'o', ' ', 'f', 'o', 'i', ' ', 'p', 'o', 's', 's', 237, 'v', 'e', 'l', ' ', 'o', 'b', 't', 'e', 'r', ' ', 'i', 'n', 'f', 'o', 'r', 'm', 'a', 231, 245, 'e', 's', ' ', 'd', 'o', ' ', 'c', 'e', 'r', 't', 'i', 'f', 'i', 'c', 'a', 'd', 'o', ' ', 'd', 'i', 'g', 'i', 't', 'a', 'l', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'E', 'r', 'r', 'o', 0, 
	HB_P_DOSHORT, 2,
/* 00888 */ HB_P_LINEOFFSET, 41,	/* 274 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_TRYBEGIN, 221, 0, 0,	/* 221 (abs: 00001114) */
/* 00897 */ HB_P_LINEOFFSET, 48,	/* 281 */
	HB_P_PUSHSYMNEAR, 16,	/* XHB_CREATEOBJECT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'M', 'S', 'X', 'M', 'L', '2', '.', 'S', 'e', 'r', 'v', 'e', 'r', 'X', 'M', 'L', 'H', 'T', 'T', 'P', '.', '6', '.', '0', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 4,	/* OSERVERWS */
/* 00933 */ HB_P_LINEOFFSET, 50,	/* 283 */
	HB_P_MESSAGE, 43, 0,	/* SETOPTION */
	HB_P_PUSHLOCALNEAR, 4,	/* OSERVERWS */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'C', 'U', 'R', 'R', 'E', 'N', 'T', '_', 'U', 'S', 'E', 'R', 92, 'M', 'Y', 92, 0, 
	HB_P_PUSHVARIABLE, 42, 0,	/* CCERT */
	HB_P_PLUS,
	HB_P_SENDSHORT, 2,
	HB_P_POP,
/* 00968 */ HB_P_LINEOFFSET, 51,	/* 284 */
	HB_P_MESSAGE, 44, 0,	/* OPEN */
	HB_P_PUSHLOCALNEAR, 4,	/* OSERVERWS */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'P', 'O', 'S', 'T', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* CLINKWS */
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 00988 */ HB_P_LINEOFFSET, 52,	/* 285 */
	HB_P_MESSAGE, 45, 0,	/* SETREQUESTHEADER */
	HB_P_PUSHLOCALNEAR, 4,	/* OSERVERWS */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'S', 'O', 'A', 'P', 'A', 'c', 't', 'i', 'o', 'n', 0, 
	HB_P_PUSHVARIABLE, 39, 0,	/* CSOAPACT */
	HB_P_SENDSHORT, 2,
	HB_P_POP,
/* 01014 */ HB_P_LINEOFFSET, 53,	/* 286 */
	HB_P_MESSAGE, 45, 0,	/* SETREQUESTHEADER */
	HB_P_PUSHLOCALNEAR, 4,	/* OSERVERWS */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'C', 'o', 'n', 't', 'e', 'n', 't', '-', 'T', 'y', 'p', 'e', 0, 
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	't', 'e', 'x', 't', '/', 'x', 'm', 'l', ';', ' ', 'c', 'h', 'a', 'r', 's', 'e', 't', '=', 'u', 't', 'f', '-', '8', 0, 
	HB_P_SENDSHORT, 2,
	HB_P_POP,
/* 01065 */ HB_P_LINEOFFSET, 54,	/* 287 */
	HB_P_MESSAGE, 45, 0,	/* SETREQUESTHEADER */
	HB_P_PUSHLOCALNEAR, 4,	/* OSERVERWS */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'C', 'o', 'n', 't', 'e', 'n', 't', '-', 'L', 'e', 'n', 'g', 't', 'h', ':', 0, 
	HB_P_PUSHSYMNEAR, 13,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 25,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* CENV */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_SENDSHORT, 2,
	HB_P_POP,
/* 01110 */ HB_P_TRYEND, 83, 0, 0,	/* 83 (abs: 00001193) */
/* 01114 */ HB_P_TRYRECOVER, 0, 0, 0,	/* 0 (abs: 00001114) */
	HB_P_POP,
/* 01119 */ HB_P_LINEOFFSET, 58,	/* 291 */
	HB_P_PUSHSYMNEAR, 9,	/* MSGSTOP */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 53,	/* 53 */
	'N', 227, 'o', ' ', 'f', 'o', 'i', ' ', 'p', 'o', 's', 's', 237, 'v', 'e', 'l', ' ', 'i', 'n', 'i', 'c', 'i', 'a', 'l', 'i', 'z', 'a', 'r', ' ', 'a', ' ', 'c', 'o', 'n', 'e', 'x', 227, 'o', ' ', 'd', 'o', ' ', 'w', 'e', 'b', 's', 'e', 'r', 'v', 'i', 'c', 'e', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'E', 'r', 'r', 'o', 0, 
	HB_P_DOSHORT, 2,
/* 01188 */ HB_P_LINEOFFSET, 59,	/* 292 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_TRYBEGIN, 98, 0, 0,	/* 98 (abs: 00001291) */
/* 01197 */ HB_P_LINEOFFSET, 67,	/* 300 */
	HB_P_PUSHSYMNEAR, 16,	/* XHB_CREATEOBJECT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'M', 'S', 'X', 'M', 'L', '2', '.', 'D', 'O', 'M', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', '.', '5', '.', '0', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 5,	/* ODOMDOC */
/* 01231 */ HB_P_LINEOFFSET, 68,	/* 301 */
	HB_P_MESSAGE, 17, 0,	/* _ASYNC */
	HB_P_PUSHLOCALNEAR, 5,	/* ODOMDOC */
	HB_P_FALSE,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 01242 */ HB_P_LINEOFFSET, 69,	/* 302 */
	HB_P_MESSAGE, 18, 0,	/* _RESOLVEEXTERNALS */
	HB_P_PUSHLOCALNEAR, 5,	/* ODOMDOC */
	HB_P_FALSE,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 01253 */ HB_P_LINEOFFSET, 70,	/* 303 */
	HB_P_MESSAGE, 19, 0,	/* _VALIDATEONPARSE */
	HB_P_PUSHLOCALNEAR, 5,	/* ODOMDOC */
	HB_P_TRUE,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 01264 */ HB_P_LINEOFFSET, 71,	/* 304 */
	HB_P_MESSAGE, 20, 0,	/* _PRESERVEWHITESPACE */
	HB_P_PUSHLOCALNEAR, 5,	/* ODOMDOC */
	HB_P_TRUE,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 01275 */ HB_P_LINEOFFSET, 73,	/* 306 */
	HB_P_MESSAGE, 21, 0,	/* LOADXML */
	HB_P_PUSHLOCALNEAR, 5,	/* ODOMDOC */
	HB_P_PUSHLOCALNEAR, 3,	/* CENV */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 01287 */ HB_P_TRYEND, 72, 0, 0,	/* 72 (abs: 00001359) */
/* 01291 */ HB_P_TRYRECOVER, 0, 0, 0,	/* 0 (abs: 00001291) */
	HB_P_POP,
/* 01296 */ HB_P_LINEOFFSET, 77,	/* 310 */
	HB_P_PUSHSYMNEAR, 9,	/* MSGSTOP */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'N', 227, 'o', ' ', 'f', 'o', 'i', ' ', 'p', 'o', 's', 's', 237, 'v', 'e', 'l', ' ', 'c', 'a', 'r', 'r', 'e', 'g', 'a', 'r', ' ', 'o', ' ', 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', 'X', 'M', 'L', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'E', 'r', 'r', 'o', 0, 
	HB_P_DOSHORT, 2,
/* 01354 */ HB_P_LINEOFFSET, 78,	/* 311 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 01359 */ HB_P_LINEOFFSET, 83,	/* 316 */
	HB_P_MESSAGE, 22, 0,	/* ERRORCODE */
	HB_P_MESSAGE, 23, 0,	/* PARSEERROR */
	HB_P_PUSHLOCALNEAR, 5,	/* ODOMDOC */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 0,
	HB_P_ZERO,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSE, 4, 1,	/* 260 (abs: 01635) */
/* 01378 */ HB_P_LINEOFFSET, 88,	/* 321 */
	HB_P_PUSHSTRSHORT, 77,	/* 77 */
	'N', 227, 'o', ' ', 'f', 'o', 'i', ' ', 'p', 'o', 's', 's', 237, 'v', 'e', 'l', ' ', 'c', 'a', 'r', 'r', 'e', 'g', 'a', 'r', ' ', 'o', ' ', 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', 'p', 'o', 'i', 's', ' ', 'e', 'l', 'e', ' ', 'n', 227, 'o', ' ', 'c', 'o', 'r', 'r', 'e', 's', 'p', 'o', 'n', 'd', 'e', ' ', 'a', 'o', ' ', 's', 'e', 'u', ' ', 'S', 'c', 'h', 'e', 'm', 'a', 0, 
	HB_P_PUSHSYMNEAR, 24,	/* HB_OSNEWLINE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', 'L', 'i', 'n', 'h', 'a', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 25,	/* STR */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 26, 0,	/* LINE */
	HB_P_MESSAGE, 23, 0,	/* PARSEERROR */
	HB_P_PUSHLOCALNEAR, 5,	/* ODOMDOC */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 24,	/* HB_OSNEWLINE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	' ', 'C', 'a', 'r', 'a', 'c', 't', 'e', 'r', 'e', ' ', 'n', 'a', ' ', 'l', 'i', 'n', 'h', 'a', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 25,	/* STR */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 27, 0,	/* LINEPOS */
	HB_P_MESSAGE, 23, 0,	/* PARSEERROR */
	HB_P_PUSHLOCALNEAR, 5,	/* ODOMDOC */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 24,	/* HB_OSNEWLINE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'C', 'a', 'u', 's', 'a', ' ', 'd', 'o', ' ', 'e', 'r', 'r', 'o', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_MESSAGE, 28, 0,	/* REASON */
	HB_P_MESSAGE, 23, 0,	/* PARSEERROR */
	HB_P_PUSHLOCALNEAR, 5,	/* ODOMDOC */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 0,
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 24,	/* HB_OSNEWLINE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	' ', 'C', 'o', 'd', 'e', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 25,	/* STR */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 22, 0,	/* ERRORCODE */
	HB_P_MESSAGE, 23, 0,	/* PARSEERROR */
	HB_P_PUSHLOCALNEAR, 5,	/* ODOMDOC */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHMEMVARREF, 47, 0,	/* ARETORNO */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'M', 'S', 'G', 0, 
	HB_P_ARRAYPOP,
/* 01628 */ HB_P_LINEOFFSET, 89,	/* 322 */
	HB_P_PUSHVARIABLE, 47, 0,	/* ARETORNO */
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_TRYBEGIN, 25, 0, 0,	/* 25 (abs: 00001660) */
/* 01639 */ HB_P_LINEOFFSET, 95,	/* 328 */
	HB_P_MESSAGE, 48, 0,	/* SEND */
	HB_P_PUSHLOCALNEAR, 4,	/* OSERVERWS */
	HB_P_MESSAGE, 49, 0,	/* XML */
	HB_P_PUSHLOCALNEAR, 5,	/* ODOMDOC */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 01656 */ HB_P_TRYEND, 48, 1, 0,	/* 304 (abs: 00001960) */
/* 01660 */ HB_P_TRYRECOVER, 0, 0, 0,	/* 0 (abs: 00001660) */
	HB_P_POPVARIABLE, 50, 0,	/* E */
/* 01667 */ HB_P_LINEOFFSET, 102,	/* 335 */
	HB_P_PUSHSYMNEAR, 9,	/* MSGSTOP */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 90,	/* 90 */
	'F', 'a', 'l', 'h', 'a', ':', ' ', 'N', 227, 'o', ' ', 'f', 'o', 'i', ' ', 'p', 'o', 's', 's', 237, 'v', 'e', 'l', ' ', 'c', 'o', 'n', 'e', 'c', 't', 'a', 'r', '-', 's', 'e', ' ', 'a', 'o', ' ', 's', 'e', 'r', 'v', 'i', 'd', 'o', 'r', ',', ' ', 'p', 'o', 'i', 's', ' ', 'o', ' ', 'm', 'e', 's', 'm', 'o', ' ', 'e', 's', 't', 225, ' ', 'i', 'n', 'a', 't', 'i', 'v', 'o', ' ', 'o', 'u', ' ', 'i', 'n', 'o', 'p', 'e', 'r', 'a', 'n', 't', 'e', '.', 0, 
	HB_P_PUSHSYMNEAR, 24,	/* HB_OSNEWLINE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'E', 'r', 'r', 'o', 'r', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 31,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 32, 0,	/* GENCODE */
	HB_P_PUSHVARIABLE, 50, 0,	/* E */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	';', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 24,	/* HB_OSNEWLINE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'u', 'b', 'C', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 31,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 33, 0,	/* SUBCODE */
	HB_P_PUSHVARIABLE, 50, 0,	/* E */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	';', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 24,	/* HB_OSNEWLINE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'O', 'S', 'C', 'o', 'd', 'e', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 31,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 34, 0,	/* OSCODE */
	HB_P_PUSHVARIABLE, 50, 0,	/* E */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	';', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 24,	/* HB_OSNEWLINE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'S', 'u', 'b', 'S', 'y', 's', 't', 'e', 'm', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 31,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 35, 0,	/* SUBSYSTEM */
	HB_P_PUSHVARIABLE, 50, 0,	/* E */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	';', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 24,	/* HB_OSNEWLINE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'M', 'e', 'n', 's', 'a', 'n', 'g', 'e', 'm', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_MESSAGE, 36, 0,	/* DESCRIPTION */
	HB_P_PUSHVARIABLE, 50, 0,	/* E */
	HB_P_SENDSHORT, 0,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'E', 'r', 'r', 'o', 0, 
	HB_P_DOSHORT, 2,
/* 01955 */ HB_P_LINEOFFSET, 103,	/* 336 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 01960 */ HB_P_LINEOFFSET, 115,	/* 348 */
	HB_P_MESSAGE, 51, 0,	/* READYSTATE */
	HB_P_PUSHLOCALNEAR, 4,	/* OSERVERWS */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 01986) */
/* 01974 */ HB_P_LINEOFFSET, 116,	/* 349 */
	HB_P_PUSHSYMNEAR, 52,	/* MILLISEC */
	HB_P_PUSHNIL,
	HB_P_PUSHINT, 244, 1,	/* 500 */
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 232,	/* -24 (abs: 01960) */
/* 01986 */ HB_P_LINEOFFSET, 119,	/* 352 */
	HB_P_LOCALNEARSETSTR, 7, 1, 0,	/* XMOTIVO 1*/
	0, 
	HB_P_PUSHLOCALNEAR, 7,	/* XMOTIVO */
	HB_P_POPLOCALNEAR, 6,	/* CSTAT */
/* 01997 */ HB_P_LINEOFFSET, 120,	/* 353 */
	HB_P_PUSHSYMNEAR, 53,	/* XML_GETNODE */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 54, 0,	/* RESPONSETEXT */
	HB_P_PUSHLOCALNEAR, 4,	/* OSERVERWS */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'c', 'S', 't', 'a', 't', 0, 
	HB_P_PUSHLOCALREF, 6, 0,	/* CSTAT */
	HB_P_DOSHORT, 3,
/* 02022 */ HB_P_LINEOFFSET, 121,	/* 354 */
	HB_P_PUSHSYMNEAR, 53,	/* XML_GETNODE */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 54, 0,	/* RESPONSETEXT */
	HB_P_PUSHLOCALNEAR, 4,	/* OSERVERWS */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'x', 'M', 'o', 't', 'i', 'v', 'o', 0, 
	HB_P_PUSHLOCALREF, 7, 0,	/* XMOTIVO */
	HB_P_DOSHORT, 3,
/* 02049 */ HB_P_LINEOFFSET, 123,	/* 356 */
	HB_P_PUSHLOCALNEAR, 6,	/* CSTAT */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '1', '1', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSE, 217, 0,	/* 217 (abs: 02277) */
/* 02063 */ HB_P_LINEOFFSET, 126,	/* 359 */
	HB_P_PUSHSYMNEAR, 55,	/* MEMOWRIT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 11,	/* CURDRIVE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	':', 92, 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 12,	/* CURDIR */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	92, 'E', 'n', 'v', 'i', 'o', 92, 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'C', 'o', 'n', 's', 'u', 'l', 't', 'a', 'C', 'a', 'd', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* DATE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 58,	/* STRTRAN */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* TIME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	':', 0, 
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'.', 'x', 'm', 'l', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTATIC, 1, 0,	/* STRXML */
	HB_P_FALSE,
	HB_P_DOSHORT, 3,
/* 02154 */ HB_P_LINEOFFSET, 129,	/* 362 */
	HB_P_PUSHSYMNEAR, 55,	/* MEMOWRIT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 11,	/* CURDRIVE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	':', 92, 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 12,	/* CURDIR */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	92, 'R', 'e', 't', 'o', 'r', 'n', 'o', 92, 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'C', 'o', 'n', 's', 'u', 'l', 't', 'a', 'C', 'a', 'd', '_', 'r', 'e', 't', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'.', 'x', 'm', 'l', 0, 
	HB_P_PLUS,
	HB_P_MESSAGE, 54, 0,	/* RESPONSETEXT */
	HB_P_PUSHLOCALNEAR, 4,	/* OSERVERWS */
	HB_P_SENDSHORT, 0,
	HB_P_FALSE,
	HB_P_DOSHORT, 3,
/* 02226 */ HB_P_LINEOFFSET, 131,	/* 364 */
	HB_P_PUSHSYMNEAR, 60,	/* MSGINFO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	'C', 'o', 'n', 's', 'u', 'l', 't', 'a', ' ', 'r', 'e', 'a', 'l', 'i', 'z', 'a', 'd', 'a', ' ', 'c', 'o', 'm', ' ', 's', 'u', 'c', 'e', 's', 's', 'o', '!', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'C', 'C', 'C', '-', 'e', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMPNEAR, 50,	/* 50 (abs: 02325) */
/* 02277 */ HB_P_LINEOFFSET, 134,	/* 367 */
	HB_P_PUSHSYMNEAR, 9,	/* MSGSTOP */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* CSTAT */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 7,	/* XMOTIVO */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'E', 'r', 'r', 'o', ' ', 'a', 'o', ' ', 'c', 'o', 'n', 's', 'u', 'l', 't', 'a', 'r', ' ', 'c', 'a', 'd', 'a', 's', 't', 'r', 'o', 0, 
	HB_P_DOSHORT, 2,
/* 02325 */ HB_P_LINEOFFSET, 137,	/* 370 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 02330 */
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC( XML_GETNODE )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 8, 4,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 129, 1,	/* 385 */
	HB_P_PUSHLOCALNEAR, 4,	/* L1NODE */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 00018) */
	HB_P_FALSE,
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 4,	/* L1NODE */
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 00019) */
	HB_P_PUSHNIL,
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 8,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* STRRET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 50,	/* 50 (abs: 00077) */
/* 00029 */ HB_P_LINEOFFSET, 3,	/* 388 */
	HB_P_PUSHSYMNEAR, 9,	/* MSGSTOP */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 'X', 'M', 'L', ' ', 'n', 227, 'o', ' ', 'e', 'n', 'c', 'o', 'n', 't', 'r', 'a', 'd', 'o', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'E', 'r', 'r', 'o', 0, 
	HB_P_DOSHORT, 2,
/* 00072 */ HB_P_LINEOFFSET, 4,	/* 389 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00077 */ HB_P_LINEOFFSET, 9,	/* 394 */
	HB_P_PUSHLOCALNEAR, 1,	/* STRRET */
	HB_P_POPLOCALNEAR, 5,	/* HFILE */
/* 00083 */ HB_P_LINEOFFSET, 11,	/* 396 */
	HB_P_MESSAGE, 61, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 62,	/* TXMLDOCUMENT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHLOCALNEAR, 5,	/* HFILE */
	HB_P_SENDSHORT, 1,
	HB_P_POPLOCALNEAR, 7,	/* XMLDOC */
/* 00099 */ HB_P_LINEOFFSET, 13,	/* 398 */
	HB_P_MESSAGE, 63, 0,	/* NSTATUS */
	HB_P_PUSHLOCALNEAR, 7,	/* XMLDOC */
	HB_P_SENDSHORT, 0,
	HB_P_ONE,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 34,	/* 34 (abs: 00144) */
/* 00112 */ HB_P_LINEOFFSET, 14,	/* 399 */
	HB_P_PUSHSYMNEAR, 9,	/* MSGSTOP */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	'E', 'r', 'r', 'o', ' ', 'a', 'o', ' ', 'l', 'e', 'r', ' ', 'o', ' ', 'X', 'M', 'L', 0, 
	HB_P_DOSHORT, 1,
/* 00139 */ HB_P_LINEOFFSET, 15,	/* 400 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00144 */ HB_P_LINEOFFSET, 18,	/* 403 */
	HB_P_MESSAGE, 61, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 64,	/* TXMLITERATOR */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_MESSAGE, 65, 0,	/* OROOT */
	HB_P_PUSHLOCALNEAR, 7,	/* XMLDOC */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 1,
	HB_P_POPLOCALNEAR, 8,	/* XMLITER */
/* 00165 */ HB_P_LINEOFFSET, 19,	/* 404 */
	HB_P_MESSAGE, 66, 0,	/* FIND */
	HB_P_PUSHLOCALNEAR, 8,	/* XMLITER */
	HB_P_SENDSHORT, 0,
	HB_P_POPLOCALNEAR, 9,	/* XMLNODE */
/* 00176 */ HB_P_LINEOFFSET, 21,	/* 406 */
	HB_P_PUSHLOCALNEAR, 9,	/* XMLNODE */
	HB_P_PUSHNIL,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 81,	/* 81 (abs: 00263) */
/* 00184 */ HB_P_LINEOFFSET, 23,	/* 408 */
	HB_P_MESSAGE, 67, 0,	/* CNAME */
	HB_P_PUSHLOCALNEAR, 9,	/* XMLNODE */
	HB_P_SENDSHORT, 0,
	HB_P_POPLOCALNEAR, 11,	/* OCAMPO */
/* 00195 */ HB_P_LINEOFFSET, 24,	/* 409 */
	HB_P_MESSAGE, 68, 0,	/* CDATA */
	HB_P_PUSHLOCALNEAR, 9,	/* XMLNODE */
	HB_P_SENDSHORT, 0,
	HB_P_POPLOCALNEAR, 12,	/* OCONTEUDO */
/* 00206 */ HB_P_LINEOFFSET, 26,	/* 411 */
	HB_P_PUSHSYMNEAR, 8,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* OCAMPO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 35,	/* 35 (abs: 00250) */
/* 00217 */ HB_P_LINEOFFSET, 27,	/* 412 */
	HB_P_PUSHSYMNEAR, 13,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* OCAMPO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 13,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* CCAMPO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 16,	/* 16 (abs: 00250) */
/* 00236 */ HB_P_LINEOFFSET, 28,	/* 413 */
	HB_P_PUSHLOCALNEAR, 12,	/* OCONTEUDO */
	HB_P_POPLOCALNEAR, 3,	/* CCONTEUDO */
/* 00242 */ HB_P_LINEOFFSET, 30,	/* 415 */
	HB_P_PUSHLOCALNEAR, 4,	/* L1NODE */
	HB_P_JUMPFALSENEAR, 4,	/* 4 (abs: 00250) */
	HB_P_JUMPNEAR, 15,	/* 15 (abs: 00263) */
/* 00250 */ HB_P_LINEOFFSET, 37,	/* 422 */
	HB_P_MESSAGE, 69, 0,	/* NEXT */
	HB_P_PUSHLOCALNEAR, 8,	/* XMLITER */
	HB_P_SENDSHORT, 0,
	HB_P_POPLOCALNEAR, 9,	/* XMLNODE */
	HB_P_JUMPNEAR, 171,	/* -85 (abs: 00176) */
/* 00263 */ HB_P_LINEOFFSET, 40,	/* 425 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00268 */
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC( SELECTCERTIFICADO )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 7, 0,	/* locals, params */
	HB_P_SFRAME, 90, 0,	/* symbol (_INITSTATICS) */
/* 00006 */ HB_P_BASELINE, 182, 1,	/* 438 */
	HB_P_LOCALNEARSETSTR, 5, 1, 0,	/* MSGERRO 1*/
	0, 
/* 00014 */ HB_P_LINEOFFSET, 1,	/* 439 */
	HB_P_HASHGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 6,	/* ARETORNO */
/* 00021 */ HB_P_LINEOFFSET, 2,	/* 440 */
	HB_P_LOCALNEARSETSTR, 7, 1, 0,	/* CMSGERRO 1*/
	0, 
	HB_P_TRYBEGIN, 40, 0, 0,	/* 40 (abs: 00000068) */
/* 00032 */ HB_P_LINEOFFSET, 5,	/* 443 */
	HB_P_PUSHSYMNEAR, 16,	/* XHB_CREATEOBJECT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'C', 'A', 'P', 'I', 'C', 'O', 'M', '.', 'C', 'e', 'r', 't', 'i', 'f', 'i', 'c', 'a', 't', 'e', 's', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 4,	/* OCERTIFICATES */
/* 00064 */ HB_P_TRYEND, 190, 0, 0,	/* 190 (abs: 00000254) */
/* 00068 */ HB_P_TRYRECOVER, 0, 0, 0,	/* 0 (abs: 00000068) */
	HB_P_POP,
/* 00073 */ HB_P_LINEOFFSET, 7,	/* 445 */
	HB_P_PUSHSYMNEAR, 70,	/* UAC */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_DOSHORT, 1,
/* 00081 */ HB_P_LINEOFFSET, 8,	/* 446 */
	HB_P_PUSHSYMNEAR, 29,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'C', 'A', 'P', 'I', 'C', 'O', 'M', '.', 'D', 'L', 'L', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 23,	/* 23 (abs: 00125) */
	HB_P_PUSHSYMNEAR, 71,	/* REGISTERSERVER */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'C', 'A', 'P', 'I', 'C', 'O', 'M', '.', 'D', 'L', 'L', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPNEAR, 38,	/* 38 (abs: 00161) */
	HB_P_LOCALNEARSETSTR, 5, 30, 0,	/* MSGERRO 30*/
	'N', 'a', 'o', ' ', 'f', 'o', 'i', ' ', 'i', 'n', 's', 't', 'a', 'l', 'a', 'd', 'o', ' ', 'C', 'A', 'P', 'I', 'C', 'O', 'M', '.', 'D', 'L', 'L', 0, 
	HB_P_PUSHLOCALNEAR, 5,	/* MSGERRO */
	HB_P_POP,
/* 00162 */ HB_P_LINEOFFSET, 9,	/* 447 */
	HB_P_PUSHSYMNEAR, 70,	/* UAC */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00170 */ HB_P_LINEOFFSET, 10,	/* 448 */
	HB_P_FALSE,
	HB_P_PUSHLOCALREF, 6, 0,	/* ARETORNO */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'T', 'A', 'T', 'U', 'S', 0, 
	HB_P_ARRAYPOP,
/* 00186 */ HB_P_LINEOFFSET, 11,	/* 449 */
	HB_P_PUSHSYMNEAR, 8,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* CMSGERRO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 41,	/* 41 (abs: 00236) */
	HB_P_PUSHSTRSHORT, 35,	/* 35 */
	'R', 'e', 'g', 'i', 's', 't', 'r', 'a', 'd', 'o', ' ', 'C', 'A', 'P', 'I', 'C', 'O', 'M', ' ', 't', 'e', 'n', 't', 'e', ' ', 'n', 'o', 'v', 'a', 'm', 'e', 'n', 't', 'e', 0, 
	HB_P_JUMPNEAR, 4,	/* 4 (abs: 00238) */
	HB_P_PUSHLOCALNEAR, 7,	/* CMSGERRO */
	HB_P_PUSHLOCALREF, 6, 0,	/* ARETORNO */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'M', 'S', 'G', 0, 
	HB_P_ARRAYPOP,
/* 00248 */ HB_P_LINEOFFSET, 12,	/* 450 */
	HB_P_PUSHLOCALNEAR, 6,	/* ARETORNO */
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_TRYBEGIN, 33, 0, 0,	/* 33 (abs: 00000287) */
/* 00258 */ HB_P_LINEOFFSET, 16,	/* 454 */
	HB_P_PUSHSYMNEAR, 16,	/* XHB_CREATEOBJECT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'C', 'A', 'P', 'I', 'C', 'O', 'M', '.', 'S', 't', 'o', 'r', 'e', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 3,	/* OSTORE */
/* 00283 */ HB_P_TRYEND, 190, 0, 0,	/* 190 (abs: 00000473) */
/* 00287 */ HB_P_TRYRECOVER, 0, 0, 0,	/* 0 (abs: 00000287) */
	HB_P_POP,
/* 00292 */ HB_P_LINEOFFSET, 18,	/* 456 */
	HB_P_PUSHSYMNEAR, 70,	/* UAC */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_DOSHORT, 1,
/* 00300 */ HB_P_LINEOFFSET, 19,	/* 457 */
	HB_P_PUSHSYMNEAR, 29,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'C', 'A', 'P', 'I', 'C', 'O', 'M', '.', 'D', 'L', 'L', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 23,	/* 23 (abs: 00344) */
	HB_P_PUSHSYMNEAR, 71,	/* REGISTERSERVER */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'C', 'A', 'P', 'I', 'C', 'O', 'M', '.', 'D', 'L', 'L', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPNEAR, 38,	/* 38 (abs: 00380) */
	HB_P_LOCALNEARSETSTR, 5, 30, 0,	/* MSGERRO 30*/
	'N', 'a', 'o', ' ', 'f', 'o', 'i', ' ', 'i', 'n', 's', 't', 'a', 'l', 'a', 'd', 'o', ' ', 'C', 'A', 'P', 'I', 'C', 'O', 'M', '.', 'D', 'L', 'L', 0, 
	HB_P_PUSHLOCALNEAR, 5,	/* MSGERRO */
	HB_P_POP,
/* 00381 */ HB_P_LINEOFFSET, 20,	/* 458 */
	HB_P_PUSHSYMNEAR, 70,	/* UAC */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00389 */ HB_P_LINEOFFSET, 21,	/* 459 */
	HB_P_FALSE,
	HB_P_PUSHLOCALREF, 6, 0,	/* ARETORNO */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'T', 'A', 'T', 'U', 'S', 0, 
	HB_P_ARRAYPOP,
/* 00405 */ HB_P_LINEOFFSET, 22,	/* 460 */
	HB_P_PUSHSYMNEAR, 8,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* CMSGERRO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 41,	/* 41 (abs: 00455) */
	HB_P_PUSHSTRSHORT, 35,	/* 35 */
	'R', 'e', 'g', 'i', 's', 't', 'r', 'a', 'd', 'o', ' ', 'C', 'A', 'P', 'I', 'C', 'O', 'M', ' ', 't', 'e', 'n', 't', 'e', ' ', 'n', 'o', 'v', 'a', 'm', 'e', 'n', 't', 'e', 0, 
	HB_P_JUMPNEAR, 4,	/* 4 (abs: 00457) */
	HB_P_PUSHLOCALNEAR, 7,	/* CMSGERRO */
	HB_P_PUSHLOCALREF, 6, 0,	/* ARETORNO */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'M', 'S', 'G', 0, 
	HB_P_ARRAYPOP,
/* 00467 */ HB_P_LINEOFFSET, 23,	/* 461 */
	HB_P_PUSHLOCALNEAR, 6,	/* ARETORNO */
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_TRYBEGIN, 250, 1, 0,	/* 506 (abs: 00000979) */
/* 00477 */ HB_P_LINEOFFSET, 27,	/* 465 */
	HB_P_MESSAGE, 44, 0,	/* OPEN */
	HB_P_PUSHLOCALNEAR, 3,	/* OSTORE */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'M', 'y', 0, 
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 00496 */ HB_P_LINEOFFSET, 28,	/* 466 */
	HB_P_MESSAGE, 72, 0,	/* CERTIFICATES */
	HB_P_PUSHLOCALNEAR, 3,	/* OSTORE */
	HB_P_SENDSHORT, 0,
	HB_P_POPLOCALNEAR, 2,	/* OCERTIFICADOS */
/* 00507 */ HB_P_LINEOFFSET, 29,	/* 467 */
	HB_P_MESSAGE, 73, 0,	/* SELECT */
	HB_P_PUSHLOCALNEAR, 2,	/* OCERTIFICADOS */
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	'S', 'e', 'l', 'e', 'c', 'i', 'o', 'n', 'e', ' ', 'o', ' ', 'c', 'e', 'r', 't', 'i', 'f', 'i', 'c', 'a', 'd', 'o', ' ', 'p', 'a', 'r', 'a', ' ', 'u', 's', 'o', 0, 
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'A', 't', 'e', 'n', 231, 227, 'o', 0, 
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POPLOCALNEAR, 1,	/* OCERTSELECAO */
/* 00564 */ HB_P_LINEOFFSET, 31,	/* 469 */
	HB_P_MESSAGE, 74, 0,	/* COUNT */
	HB_P_PUSHLOCALNEAR, 1,	/* OCERTSELECAO */
	HB_P_SENDSHORT, 0,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 70, 1,	/* 326 (abs: 00901) */
/* 00578 */ HB_P_LINEOFFSET, 32,	/* 470 */
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 6, 0,	/* ARETORNO */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'T', 'A', 'T', 'U', 'S', 0, 
	HB_P_ARRAYPOP,
/* 00594 */ HB_P_LINEOFFSET, 33,	/* 471 */
	HB_P_MESSAGE, 75, 0,	/* SERIALNUMBER */
	HB_P_MESSAGE, 76, 0,	/* ITEM */
	HB_P_PUSHLOCALNEAR, 1,	/* OCERTSELECAO */
	HB_P_ONE,
	HB_P_SENDSHORT, 1,
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALREF, 6, 0,	/* ARETORNO */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'e', 'r', 'i', 'a', 'l', 0, 
	HB_P_ARRAYPOP,
/* 00622 */ HB_P_LINEOFFSET, 34,	/* 472 */
	HB_P_MESSAGE, 77, 0,	/* ISSUERNAME */
	HB_P_MESSAGE, 76, 0,	/* ITEM */
	HB_P_PUSHLOCALNEAR, 1,	/* OCERTSELECAO */
	HB_P_ONE,
	HB_P_SENDSHORT, 1,
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALREF, 6, 0,	/* ARETORNO */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 's', 's', 'u', 'e', 'r', 'N', 'a', 'm', 'e', 0, 
	HB_P_ARRAYPOP,
/* 00654 */ HB_P_LINEOFFSET, 35,	/* 473 */
	HB_P_MESSAGE, 78, 0,	/* SUBJECTNAME */
	HB_P_MESSAGE, 76, 0,	/* ITEM */
	HB_P_PUSHLOCALNEAR, 1,	/* OCERTSELECAO */
	HB_P_ONE,
	HB_P_SENDSHORT, 1,
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALREF, 6, 0,	/* ARETORNO */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'S', 'u', 'b', 'j', 'e', 'c', 't', 'N', 'a', 'm', 'e', 0, 
	HB_P_ARRAYPOP,
/* 00687 */ HB_P_LINEOFFSET, 36,	/* 474 */
	HB_P_MESSAGE, 79, 0,	/* THUMBPRINT */
	HB_P_MESSAGE, 76, 0,	/* ITEM */
	HB_P_PUSHLOCALNEAR, 1,	/* OCERTSELECAO */
	HB_P_ONE,
	HB_P_SENDSHORT, 1,
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALREF, 6, 0,	/* ARETORNO */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'T', 'h', 'u', 'm', 'b', 'p', 'r', 'i', 'n', 't', 0, 
	HB_P_ARRAYPOP,
/* 00719 */ HB_P_LINEOFFSET, 37,	/* 475 */
	HB_P_MESSAGE, 80, 0,	/* VALIDFROMDATE */
	HB_P_MESSAGE, 76, 0,	/* ITEM */
	HB_P_PUSHLOCALNEAR, 1,	/* OCERTSELECAO */
	HB_P_ONE,
	HB_P_SENDSHORT, 1,
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALREF, 6, 0,	/* ARETORNO */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'V', 'a', 'l', 'i', 'd', 'F', 'r', 'o', 'm', 'D', 'a', 't', 'e', 0, 
	HB_P_ARRAYPOP,
/* 00754 */ HB_P_LINEOFFSET, 38,	/* 476 */
	HB_P_MESSAGE, 81, 0,	/* VALIDTODATE */
	HB_P_MESSAGE, 76, 0,	/* ITEM */
	HB_P_PUSHLOCALNEAR, 1,	/* OCERTSELECAO */
	HB_P_ONE,
	HB_P_SENDSHORT, 1,
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALREF, 6, 0,	/* ARETORNO */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'V', 'a', 'l', 'i', 'd', 'T', 'o', 'D', 'a', 't', 'e', 0, 
	HB_P_ARRAYPOP,
/* 00787 */ HB_P_LINEOFFSET, 39,	/* 477 */
	HB_P_MESSAGE, 82, 0,	/* VERSION */
	HB_P_MESSAGE, 76, 0,	/* ITEM */
	HB_P_PUSHLOCALNEAR, 1,	/* OCERTSELECAO */
	HB_P_ONE,
	HB_P_SENDSHORT, 1,
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALREF, 6, 0,	/* ARETORNO */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'V', 'e', 'r', 's', 'i', 'o', 'n', 0, 
	HB_P_ARRAYPOP,
/* 00816 */ HB_P_LINEOFFSET, 40,	/* 478 */
	HB_P_MESSAGE, 83, 0,	/* HASPRIVATEKEY */
	HB_P_MESSAGE, 76, 0,	/* ITEM */
	HB_P_PUSHLOCALNEAR, 1,	/* OCERTSELECAO */
	HB_P_ONE,
	HB_P_SENDSHORT, 1,
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALREF, 6, 0,	/* ARETORNO */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'H', 'a', 's', 'P', 'r', 'i', 'v', 'a', 't', 'e', 'K', 'e', 'y', 0, 
	HB_P_ARRAYPOP,
/* 00851 */ HB_P_LINEOFFSET, 41,	/* 479 */
	HB_P_MESSAGE, 84, 0,	/* GETINFO */
	HB_P_MESSAGE, 76, 0,	/* ITEM */
	HB_P_PUSHLOCALNEAR, 1,	/* OCERTSELECAO */
	HB_P_ONE,
	HB_P_SENDSHORT, 1,
	HB_P_ZERO,
	HB_P_SENDSHORT, 1,
	HB_P_PUSHLOCALREF, 6, 0,	/* ARETORNO */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'g', 'e', 't', 'I', 'n', 'f', 'o', 0, 
	HB_P_ARRAYPOP,
/* 00881 */ HB_P_LINEOFFSET, 42,	/* 480 */
	HB_P_MESSAGE, 75, 0,	/* SERIALNUMBER */
	HB_P_MESSAGE, 76, 0,	/* ITEM */
	HB_P_PUSHLOCALNEAR, 1,	/* OCERTSELECAO */
	HB_P_ONE,
	HB_P_SENDSHORT, 1,
	HB_P_SENDSHORT, 0,
	HB_P_POPSTATIC, 7, 0,	/* CSERIALCERT */
	HB_P_JUMPNEAR, 76,	/* 76 (abs: 00975) */
/* 00901 */ HB_P_LINEOFFSET, 44,	/* 482 */
	HB_P_FALSE,
	HB_P_PUSHLOCALREF, 6, 0,	/* ARETORNO */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'T', 'A', 'T', 'U', 'S', 0, 
	HB_P_ARRAYPOP,
/* 00917 */ HB_P_LINEOFFSET, 45,	/* 483 */
	HB_P_PUSHSTRSHORT, 44,	/* 44 */
	'N', 'a', 'o', ' ', 'c', 'o', 'n', 's', 'e', 'g', 'u', 'i', 'u', ' ', 's', 'e', 'l', 'e', 'c', 'i', 'o', 'n', 'a', 'r', ' ', 'n', 'e', 'n', 'h', 'u', 'm', ' ', 'c', 'e', 'r', 't', 'i', 'f', 'i', 'c', 'a', 'd', 'o', 0, 
	HB_P_PUSHLOCALREF, 6, 0,	/* ARETORNO */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'M', 'S', 'G', 0, 
	HB_P_ARRAYPOP,
/* 00975 */ HB_P_TRYEND, 89, 0, 0,	/* 89 (abs: 00001064) */
/* 00979 */ HB_P_TRYRECOVER, 0, 0, 0,	/* 0 (abs: 00000979) */
	HB_P_POP,
/* 00984 */ HB_P_LINEOFFSET, 48,	/* 486 */
	HB_P_FALSE,
	HB_P_PUSHLOCALREF, 6, 0,	/* ARETORNO */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'T', 'A', 'T', 'U', 'S', 0, 
	HB_P_ARRAYPOP,
/* 01000 */ HB_P_LINEOFFSET, 49,	/* 487 */
	HB_P_PUSHSTRSHORT, 44,	/* 44 */
	'N', 'a', 'o', ' ', 'c', 'o', 'n', 's', 'e', 'g', 'u', 'i', 'u', ' ', 's', 'e', 'l', 'e', 'c', 'i', 'o', 'n', 'a', 'r', ' ', 'n', 'e', 'n', 'h', 'u', 'm', ' ', 'c', 'e', 'r', 't', 'i', 'f', 'i', 'c', 'a', 'd', 'o', 0, 
	HB_P_PUSHLOCALREF, 6, 0,	/* ARETORNO */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'M', 'S', 'G', 0, 
	HB_P_ARRAYPOP,
/* 01058 */ HB_P_LINEOFFSET, 50,	/* 488 */
	HB_P_PUSHLOCALNEAR, 6,	/* ARETORNO */
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 01064 */ HB_P_LINEOFFSET, 53,	/* 491 */
	HB_P_PUSHNIL,
	HB_P_POPLOCALNEAR, 1,	/* OCERTSELECAO */
/* 01069 */ HB_P_LINEOFFSET, 54,	/* 492 */
	HB_P_PUSHNIL,
	HB_P_POPLOCALNEAR, 2,	/* OCERTIFICADOS */
/* 01074 */ HB_P_LINEOFFSET, 55,	/* 493 */
	HB_P_PUSHNIL,
	HB_P_POPLOCALNEAR, 3,	/* OSTORE */
/* 01079 */ HB_P_LINEOFFSET, 56,	/* 494 */
	HB_P_PUSHNIL,
	HB_P_POPLOCALNEAR, 4,	/* OCERTIFICATES */
/* 01084 */ HB_P_LINEOFFSET, 58,	/* 496 */
	HB_P_PUSHLOCALNEAR, 6,	/* ARETORNO */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 01090 */
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC( GETCNCERTIFICADO )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 6, 0,	/* locals, params */
	HB_P_SFRAME, 90, 0,	/* symbol (_INITSTATICS) */
/* 00006 */ HB_P_BASELINE, 250, 1,	/* 506 */
	HB_P_PUSHNIL,
	HB_P_POPLOCALNEAR, 5,	/* ORESULT */
/* 00012 */ HB_P_LINEOFFSET, 1,	/* 507 */
	HB_P_LOCALNEARSETSTR, 6, 1, 0,	/* CSUBJECTNAME 1*/
	0, 
/* 00019 */ HB_P_LINEOFFSET, 3,	/* 509 */
	HB_P_PUSHSTATIC, 7, 0,	/* CSERIALCERT */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 59,	/* 59 (abs: 00085) */
/* 00028 */ HB_P_LINEOFFSET, 4,	/* 510 */
	HB_P_PUSHSYMNEAR, 9,	/* MSGSTOP */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 35,	/* 35 */
	'S', '/', 'N', ' ', 'd', 'o', ' ', 'c', 'e', 'r', 't', 'i', 'f', 'i', 'c', 'a', 'd', 'o', ' ', 'n', 227, 'o', ' ', 'e', 'n', 'c', 'o', 'n', 't', 'r', 'a', 'd', 'o', '!', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'E', 'r', 'r', 'o', 0, 
	HB_P_DOSHORT, 2,
/* 00079 */ HB_P_LINEOFFSET, 5,	/* 511 */
	HB_P_PUSHLOCALNEAR, 4,	/* CCN */
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_TRYBEGIN, 33, 0, 0,	/* 33 (abs: 00000118) */
/* 00089 */ HB_P_LINEOFFSET, 10,	/* 516 */
	HB_P_PUSHSYMNEAR, 16,	/* XHB_CREATEOBJECT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'C', 'A', 'P', 'I', 'C', 'O', 'M', '.', 'S', 't', 'o', 'r', 'e', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 1,	/* OSTORE */
/* 00114 */ HB_P_TRYEND, 9, 0, 0,	/* 9 (abs: 00000123) */
/* 00118 */ HB_P_TRYRECOVER, 0, 0, 0,	/* 0 (abs: 00000118) */
	HB_P_POP,
/* 00123 */ HB_P_LINEOFFSET, 14,	/* 520 */
	HB_P_PUSHLOCALNEAR, 1,	/* OSTORE */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 00138) */
/* 00131 */ HB_P_LINEOFFSET, 15,	/* 521 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00138 */ HB_P_LINEOFFSET, 18,	/* 524 */
	HB_P_MESSAGE, 44, 0,	/* OPEN */
	HB_P_PUSHLOCALNEAR, 1,	/* OSTORE */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'M', 'y', 0, 
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 00157 */ HB_P_LINEOFFSET, 19,	/* 525 */
	HB_P_MESSAGE, 72, 0,	/* CERTIFICATES */
	HB_P_PUSHLOCALNEAR, 1,	/* OSTORE */
	HB_P_SENDSHORT, 0,
	HB_P_POPLOCALNEAR, 3,	/* OCERTIFICADOS */
/* 00168 */ HB_P_LINEOFFSET, 21,	/* 527 */
	HB_P_LOCALNEARSETINT, 2, 1, 0,	/* NI 1*/
	HB_P_PUSHLOCALNEAR, 2,	/* NI */
	HB_P_MESSAGE, 74, 0,	/* COUNT */
	HB_P_PUSHLOCALNEAR, 3,	/* OCERTIFICADOS */
	HB_P_SENDSHORT, 0,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 48,	/* 48 (abs: 00232) */
/* 00186 */ HB_P_LINEOFFSET, 22,	/* 528 */
	HB_P_MESSAGE, 75, 0,	/* SERIALNUMBER */
	HB_P_MESSAGE, 76, 0,	/* ITEM */
	HB_P_PUSHLOCALNEAR, 3,	/* OCERTIFICADOS */
	HB_P_PUSHLOCALNEAR, 2,	/* NI */
	HB_P_SENDSHORT, 1,
	HB_P_SENDSHORT, 0,
	HB_P_PUSHSTATIC, 7, 0,	/* CSERIALCERT */
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 20,	/* 20 (abs: 00226) */
/* 00208 */ HB_P_LINEOFFSET, 23,	/* 529 */
	HB_P_MESSAGE, 78, 0,	/* SUBJECTNAME */
	HB_P_MESSAGE, 76, 0,	/* ITEM */
	HB_P_PUSHLOCALNEAR, 3,	/* OCERTIFICADOS */
	HB_P_PUSHLOCALNEAR, 2,	/* NI */
	HB_P_SENDSHORT, 1,
	HB_P_SENDSHORT, 0,
	HB_P_POPLOCALNEAR, 6,	/* CSUBJECTNAME */
/* 00226 */ HB_P_LINEOFFSET, 25,	/* 531 */
	HB_P_LOCALNEARINC, 2,	/* NI */
	HB_P_JUMPNEAR, 200,	/* -56 (abs: 00174) */
/* 00232 */ HB_P_LINEOFFSET, 27,	/* 533 */
	HB_P_LOCALNEARSETSTR, 4, 1, 0,	/* CCN 1*/
	0, 
/* 00239 */ HB_P_LINEOFFSET, 28,	/* 534 */
	HB_P_PUSHSYMNEAR, 85,	/* AT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'C', 'N', '=', 0, 
	HB_P_PUSHLOCALNEAR, 6,	/* CSUBJECTNAME */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_POPLOCALNEAR, 2,	/* NI */
	HB_P_PUSHLOCALNEAR, 2,	/* NI */
	HB_P_PUSHSYMNEAR, 46,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* CSUBJECTNAME */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 43,	/* 43 (abs: 00312) */
/* 00271 */ HB_P_LINEOFFSET, 29,	/* 535 */
	HB_P_PUSHSYMNEAR, 86,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* CSUBJECTNAME */
	HB_P_PUSHLOCALNEAR, 2,	/* NI */
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 4,	/* 4 (abs: 00292) */
	HB_P_JUMPNEAR, 22,	/* 22 (abs: 00312) */
/* 00292 */ HB_P_LINEOFFSET, 32,	/* 538 */
	HB_P_PUSHSYMNEAR, 86,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* CSUBJECTNAME */
	HB_P_PUSHLOCALNEAR, 2,	/* NI */
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 3,
	HB_P_LOCALNEARADD, 4,	/* CCN */
/* 00306 */ HB_P_LINEOFFSET, 33,	/* 539 */
	HB_P_LOCALNEARINC, 2,	/* NI */
	HB_P_JUMPNEAR, 205,	/* -51 (abs: 00259) */
/* 00312 */ HB_P_LINEOFFSET, 35,	/* 541 */
	HB_P_PUSHNIL,
	HB_P_POPLOCALNEAR, 3,	/* OCERTIFICADOS */
/* 00317 */ HB_P_LINEOFFSET, 36,	/* 542 */
	HB_P_PUSHNIL,
	HB_P_POPLOCALNEAR, 1,	/* OSTORE */
/* 00322 */ HB_P_LINEOFFSET, 38,	/* 544 */
	HB_P_PUSHLOCALNEAR, 4,	/* CCN */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00328 */
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC( GETOBJCERTIFICADO )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 5, 0,	/* locals, params */
	HB_P_SFRAME, 90, 0,	/* symbol (_INITSTATICS) */
/* 00006 */ HB_P_BASELINE, 38, 2,	/* 550 */
	HB_P_LOCALNEARSETSTR, 5, 1, 0,	/* SUBJECTNAME 1*/
	0, 
	HB_P_TRYBEGIN, 33, 0, 0,	/* 33 (abs: 00000047) */
/* 00018 */ HB_P_LINEOFFSET, 3,	/* 553 */
	HB_P_PUSHSYMNEAR, 16,	/* XHB_CREATEOBJECT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'C', 'A', 'P', 'I', 'C', 'O', 'M', '.', 'S', 't', 'o', 'r', 'e', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 1,	/* OSTORE */
/* 00043 */ HB_P_TRYEND, 44, 0, 0,	/* 44 (abs: 00000087) */
/* 00047 */ HB_P_TRYRECOVER, 0, 0, 0,	/* 0 (abs: 00000047) */
	HB_P_POP,
/* 00052 */ HB_P_LINEOFFSET, 5,	/* 555 */
	HB_P_LOCALNEARSETSTR, 3, 29, 0,	/* ORESULT 29*/
	'C', 'e', 'r', 't', 'i', 'f', 'i', 'c', 'a', 'd', 'o', ' ', 'n', 227, 'o', ' ', 'i', 'd', 'e', 'n', 't', 'i', 'f', 'i', 'c', 'a', 'd', 'o', 0, 
/* 00087 */ HB_P_LINEOFFSET, 8,	/* 558 */
	HB_P_MESSAGE, 44, 0,	/* OPEN */
	HB_P_PUSHLOCALNEAR, 1,	/* OSTORE */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'M', 'y', 0, 
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 00106 */ HB_P_LINEOFFSET, 9,	/* 559 */
	HB_P_MESSAGE, 72, 0,	/* CERTIFICATES */
	HB_P_PUSHLOCALNEAR, 1,	/* OSTORE */
	HB_P_SENDSHORT, 0,
	HB_P_POPLOCALNEAR, 2,	/* OCERTIFICADOS */
/* 00117 */ HB_P_LINEOFFSET, 11,	/* 561 */
	HB_P_LOCALNEARSETINT, 4, 1, 0,	/* NI 1*/
	HB_P_PUSHLOCALNEAR, 4,	/* NI */
	HB_P_MESSAGE, 74, 0,	/* COUNT */
	HB_P_PUSHLOCALNEAR, 2,	/* OCERTIFICADOS */
	HB_P_SENDSHORT, 0,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 114,	/* 114 (abs: 00247) */
/* 00135 */ HB_P_LINEOFFSET, 12,	/* 562 */
	HB_P_PUSHSYMNEAR, 8,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSTATIC, 7, 0,	/* CSERIALCERT */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 39,	/* 39 (abs: 00184) */
/* 00147 */ HB_P_LINEOFFSET, 13,	/* 563 */
	HB_P_MESSAGE, 75, 0,	/* SERIALNUMBER */
	HB_P_MESSAGE, 76, 0,	/* ITEM */
	HB_P_PUSHLOCALNEAR, 2,	/* OCERTIFICADOS */
	HB_P_PUSHLOCALNEAR, 4,	/* NI */
	HB_P_SENDSHORT, 1,
	HB_P_SENDSHORT, 0,
	HB_P_PUSHSTATIC, 7, 0,	/* CSERIALCERT */
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 74,	/* 74 (abs: 00241) */
/* 00169 */ HB_P_LINEOFFSET, 14,	/* 564 */
	HB_P_MESSAGE, 76, 0,	/* ITEM */
	HB_P_PUSHLOCALNEAR, 2,	/* OCERTIFICADOS */
	HB_P_PUSHLOCALNEAR, 4,	/* NI */
	HB_P_SENDSHORT, 1,
	HB_P_POPLOCALNEAR, 3,	/* ORESULT */
	HB_P_JUMPNEAR, 65,	/* 65 (abs: 00247) */
/* 00184 */ HB_P_LINEOFFSET, 17,	/* 567 */
	HB_P_PUSHSYMNEAR, 8,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* SUBJECTNAME */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 48,	/* 48 (abs: 00241) */
/* 00195 */ HB_P_LINEOFFSET, 18,	/* 568 */
	HB_P_PUSHSYMNEAR, 88,	/* UPPER */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 13,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 78, 0,	/* SUBJECTNAME */
	HB_P_MESSAGE, 76, 0,	/* ITEM */
	HB_P_PUSHLOCALNEAR, 2,	/* OCERTIFICADOS */
	HB_P_PUSHLOCALNEAR, 4,	/* NI */
	HB_P_SENDSHORT, 1,
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHLOCALNEAR, 5,	/* SUBJECTNAME */
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 17,	/* 17 (abs: 00241) */
/* 00226 */ HB_P_LINEOFFSET, 19,	/* 569 */
	HB_P_MESSAGE, 76, 0,	/* ITEM */
	HB_P_PUSHLOCALNEAR, 2,	/* OCERTIFICADOS */
	HB_P_PUSHLOCALNEAR, 4,	/* NI */
	HB_P_SENDSHORT, 1,
	HB_P_POPLOCALNEAR, 3,	/* ORESULT */
	HB_P_JUMPNEAR, 8,	/* 8 (abs: 00247) */
/* 00241 */ HB_P_LINEOFFSET, 23,	/* 573 */
	HB_P_LOCALNEARINC, 4,	/* NI */
	HB_P_JUMPNEAR, 134,	/* -122 (abs: 00123) */
/* 00247 */ HB_P_LINEOFFSET, 25,	/* 575 */
	HB_P_PUSHNIL,
	HB_P_POPLOCALNEAR, 2,	/* OCERTIFICADOS */
/* 00252 */ HB_P_LINEOFFSET, 26,	/* 576 */
	HB_P_PUSHNIL,
	HB_P_POPLOCALNEAR, 1,	/* OSTORE */
/* 00257 */ HB_P_LINEOFFSET, 28,	/* 578 */
	HB_P_PUSHLOCALNEAR, 3,	/* ORESULT */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00263 */
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC( UAC )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 0, 1,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 77, 2,	/* 589 */
	HB_P_PUSHSYMNEAR, 89,	/* SW_WRITETOREGWIN */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 87,	/* 87 */
	'H', 'K', 'E', 'Y', '_', 'L', 'O', 'C', 'A', 'L', '_', 'M', 'A', 'C', 'H', 'I', 'N', 'E', 92, 'S', 'o', 'f', 't', 'w', 'a', 'r', 'e', 92, 'M', 'i', 'c', 'r', 'o', 's', 'o', 'f', 't', 92, 'W', 'i', 'n', 'd', 'o', 'w', 's', 92, 'C', 'u', 'r', 'r', 'e', 'n', 't', 'V', 'e', 'r', 's', 'i', 'o', 'n', 92, 'P', 'o', 'l', 'i', 'c', 'i', 'e', 's', 92, 'S', 'y', 's', 't', 'e', 'm', 92, 'E', 'n', 'a', 'b', 'l', 'e', 'L', 'U', 'A', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* NVALUE */
	HB_P_DOSHORT, 2,
/* 00102 */ HB_P_LINEOFFSET, 5,	/* 594 */
	HB_P_ZERO,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00107 */
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC( SW_WRITETOREGWIN )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 0, 2,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 102, 2,	/* 614 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00009 */
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
   static const BYTE pcode[] =
   {
	HB_P_STATICS, 90, 0, 7, 0,	/* symbol (_INITSTATICS), 7 statics */
	HB_P_ENDPROC
/* 00006 */
   };

   hb_vmExecute( pcode, symbols );
}

