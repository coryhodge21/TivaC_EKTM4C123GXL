/*
 * BIT_FIELD.h
 *
 *  Created on: Dec 6, 2020
 *      Author: coryhodge
 */

#ifndef BIT_FIELD_H_
#define BIT_FIELD_H_

// Include : Basic Prj Types
#include "stdint.h"
#include "stdlib.h"

// == DEFINES =====================
#define DEF_REGIESTER_MASK 0x01
#define DEF_REGISTER_ADDRESS (uint32_t *)(0x00)


// ========= STRUCTURE =============
typedef struct _BIT_FIELD_ {

    // Pointer to Parent Register
    uint32_t * Register_Address;

    // This Bit Field's Register mask
    uint32_t Register_Mask;

    /*  Function Pointers to actions    */

    // Read the value masked by this bit field
    uint32_t (* read)(void);

    // write the value masked by this bit field
    void (* write)(uint32_t);

    // Set the value masked by this bit field
    void (* set)(void);

    // Clear the value masked by this bit field
    void (* clear)(void);

} BIT_FIELD_t;

// ========= TYPEDEF ===============
typedef BIT_FIELD_t * BIT_FIELD_HANDLE;

// ========= ACTIONS ===============

// Read the value masked by this bit field
uint32_t read_this(void);

// TODO: Does not account for bit shifting value
//       into place
// write the value masked by this bit field
void write_this(uint32_t value);

// Set the Value masked by this bit field
void set_this(void);

// Clear the value masked by this bit field
void clear_this(void);

//==    Create BIT FIELD ==============
BIT_FIELD_HANDLE CREATE_BIT_FIELD(void);

#endif /* BIT_FIELD_H_ */

