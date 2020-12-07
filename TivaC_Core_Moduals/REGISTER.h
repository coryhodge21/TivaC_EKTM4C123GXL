/*
 * REGISTER.h
 *
 *  Created on: Dec 6, 2020
 *      Author: coryhodge
 */

#ifndef REGISTER_H_
#define REGISTER_H_

// Include : Bit Field Definition
#include "BIT_FIELD.h"

// ========= STRUCTURE =============
typedef struct _REGISTER_ {

    // This Registers Address
    uint32_t * Address;

    // Array of Bit Fields for this Register
    BIT_FIELD_HANDLE BIT_FIELDS[];

} REGISTER_t;

// ========= TYPEDEF ===============

typedef REGISTER_t * REGISTER_HANDLE;

// ========= GLOBAL INSTANCE =======

REGISTER_HANDLE Register;



#endif /* REGISTER_H_ */
