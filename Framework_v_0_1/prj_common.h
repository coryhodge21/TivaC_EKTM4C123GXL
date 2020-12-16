/**
 * \file prj_common.h
 * \author Cory W. Hodge
 * \date 12/14/2020
 *
 * \description this file is
 * for holding project common
 * dependencies
 */

#ifndef _PRJ_COMMON_
#define _PRJ_COMMON_

// General Data Types
typedef int int32_t;
typedef unsigned int uint32_t;
typedef unsigned int size_t;
typedef double int64_t;

// Project Common Data Type of ADDRESS
typedef unsigned int Reg_Addr_t;

// TODO: Not Tested, might be good sysntactical replacement
/* *********** */
typedef volatile unsigned int * ADDRESS;
typedef ADDRESS * ADDRESS_VALUE;
/* ***** Not Tested ***** */


#endif // _PRJ_COMMON_
