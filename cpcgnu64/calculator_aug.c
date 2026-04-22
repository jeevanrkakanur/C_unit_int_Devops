/* DevOps Test Embedded C/C++ Instrumentor 9.0.0.2.028.026 */
/* Copyright(C) IBM 1992-2017, HCL Technologies 2017-2022. All rights reserved. */
/*   Build date : 14-Jun-21 19:33 */
/*   Execution date : 2026-03-22 16:20:45 */
/*   Cmd line : "attolcc4" "cpcgnu64\calculator.i" "cpcgnu64\calculator_aug.c" "atus_c.def" "atl.opp" "-noinstrdir=D:\Program Files\HCL\TDPS2\cpcgnu64" "-nopath" "-proc=ret" "-block=logical" "-trace" "-mempro" "-perfpro" "-call" "-cond" "-StackSize" "-SET=MINMAX" "-studio_log=D:\HCL_GIT_DEVOPS\Demo_GIT\intermediates_files830189433.log" */

#define ATL_C_INSTRUMENTOR 603

#define USE_ATC 1
#define ATC_INFORMATION 0

#define USE_ATZ 1

#define USE_ATT 1

#define USE_ATP 1

#define _ATP_PARSE_GLOBALS_NEEDED 0
#define USE_ATQ 1
#ifndef ATL_OS_CLOCK
#define ATL_OS_CLOCK 1
#endif
#ifndef ATL_PROCESS_CLOCK
#define ATL_PROCESS_CLOCK 2
#endif
#define ATL_CLOCK_KIND ATL_OS_CLOCK

#define ATQ_COMPUTE_MINMAX 1
#include "TP.h"

#define _ATC_INIT_CONST_COMPOUND_STUFF

_ATC_DECLARE_PROC(1,4)
_ATC_DECLARE_BLOC(1,2)
_ATC_DECLARE(1,0x3116202EUL,0x34054336UL,4,_ATC_TAB_PROC(1),0,0,2,_ATC_TAB_BLOC(1),0,0)

_ATL_STACK_DECLARE(1,0x3116202EUL,0x332F6838UL)

_ATZ_DECLARE(1,2)
_ATQ_DECLARE(1,2)
#define _ATP_LINK_PARSE_GLOBALS

#ifdef ATL_DECLARATIONS_END
ATL_DECLARATIONS_END
#endif
# 0 "D:\\HCL_GIT_DEVOPS\\calculator.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "D:\\HCL_GIT_DEVOPS\\calculator.c"
# 1 "D:\\HCL_GIT_DEVOPS/calculator.h" 1



int add(int a, int b);
int subtract(int a, int b);
# 2 "D:\\HCL_GIT_DEVOPS\\calculator.c" 2

int add(int a, int b) {_ATC_LINK(1);{_ATC_PROC_IN(1,1);{_ATC_BLOC(1,0);{_ATL_STACK_IN(1,1) _ATZ_IN(1)_ATQ_IN(1)_ATP_IN(1){_ATT_IN(1){

    {_ATP_LINE_OFFSET_RETURN(1,2);{_ATC_PROC(1,0); /* return */ {_ATL_STACK_OUT_EXPR_TYPE_START(int)( a + b); _ATQ_OUT  _ATT_OUT  _ATL_STACK_OUT_EXPR_TYPE_END(0);}}}

}}}}}}

int subtract(int a, int b) {_ATC_LINK(1);{_ATC_PROC_IN(1,3);{_ATC_BLOC(1,1);{_ATL_STACK_IN(1,2) _ATZ_IN(1)_ATQ_IN(1)_ATP_IN(1){_ATT_IN(1){

    {_ATP_LINE_OFFSET_RETURN(1,2);{_ATC_PROC(1,2); /* return */ {_ATL_STACK_OUT_EXPR_TYPE_START(int)( a - b); _ATQ_OUT  _ATT_OUT  _ATL_STACK_OUT_EXPR_TYPE_END(0);}}}

}}}}}}
