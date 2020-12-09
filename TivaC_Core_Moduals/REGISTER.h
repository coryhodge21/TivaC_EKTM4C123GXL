/*
 * REGISTER.h
 *
 *  Created on: Dec 6, 2020
 *      Author: coryhodge
 */

#ifndef REGISTER_H_
#define REGISTER_H_

// ++ copy paste the register address from #defines line ///
#define DEF_REGISTER_ADDRESS (uint32_t *)(0x00)

// Include : Bit Field Definition
#include "BIT_FIELD.h"

// ========= STRUCTURE =============
// ++ update
typedef struct _REGISTER_ {

    // Pointer to Parent Module
    uint32_t * Parent_Base_Addr;

    // This Registers Address
    uint32_t * this_Reg_Address;

    // Array of Bit Fields for this Register
    BitField_t * BitFields;

} REGISTER_t;

// ========= TYPEDEF ===============
// ++ update
typedef REGISTER_t * Register_Handle;

// ========= GLOBAL INSTANCE =======
// ++ update
Register_Handle Register;

// === CONSTRUCTOR =================
// create register
Register_Handle * newRegister (size_t children);

// === DESTRUCTOR ==================


// ===
// Populate Register
BitField_t * populate_bitFields();


#endif /* REGISTER_H_ */
