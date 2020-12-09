/*
 * ++ update field
 * BIT_FIELD.h
 *
 *  Created on: Dec 6, 2020
 *      Author: coryhodge
 */

// ++ use bit_fild from #defines and append _H_
#ifndef BIT_FIELD_H_
#define BIT_FIELD_H_

// Include : Basic Prj Types
#include "stdint.h"
#include "stdlib.h"

// == DEFINES =====================

// ++ copy paste the register mask from #defines line ///
#define DEF_REGIESTER_MASK 0x00000100;

// ========= STRUCTURE =============
//! \brief This structure type defines the Bit Field
// ++ update field
typedef struct _BIT_FIELD_ {

    // This Bit Field's Register mask
    uint32_t Register_Mask;

    // Pointer to Parent Register
    uint32_t * Register_Address;


    /*  Function Pointers to actions    */

    // Read the value masked by this bit field
    uint32_t (* read)(void);

    // write the value masked by this bit field
    void (* write)(uint32_t);

    // Set the value masked by this bit field
    void (* set)(void);

    // Clear the value masked by this bit field
    void (* clear)(void);

    // Assign Parent Register Address Field for Bit Mask Operations
    void (* assignParent)(uint32_t);

// ++ update field

// typedef Bit Field Name
} BIT_FIELD_OBJ_t;



// ========= TYPEDEF ===============
//! \brief : this typedef defines Bit Field type pointer
// ++ update field
typedef BIT_FIELD_OBJ_t * BitField_t;

// ========= GLOBAL INSTANCE =======
// Global instance of Bit Field, needed for function pointer
// ++ update
//BitField_t BitField;

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

// assign parent register address
void assignParent_this(uint32_t address);

//==    Create BIT FIELD ==============
// ++ update field
BitField_t Create_BitField(void);

#endif /* BIT_FIELD_H_ */

