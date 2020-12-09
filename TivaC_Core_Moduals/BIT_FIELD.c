/*
 * ++ update field
 * BIT_FIELD.c
 *
 *  Created on: Dec 6, 2020
 *      Author: coryhodge
 */

// ++ update field
#include "BIT_FIELD.h"

// ========= ACTIONS ===============

// Read the value masked by this bit field
uint32_t read_this(void){
    // ++ update
    return (*BitField->Register_Address) &
            BitField->Register_Mask;
}

// TODO: Does not account for bit shifting value
//       into place
// write the value masked by this bit field
void write_this(uint32_t value) {
    // ++ update
    (*BitField->Register_Address) =
            ( value & BitField->Register_Mask);
}

// Set the Value masked by this bit field
void set_this(void) {
    // ++ update
    *(BitField->Register_Address) |=
            BitField->Register_Mask;
}

// Clear the value masked by this bit field
void clear_this(void){
    // ++ update
    *(BitField->Register_Address) &=
                ~(BitField->Register_Mask);
}

void assignParent_this(uint32_t address){
    // ++ update
    *(BitField->Register_Address) =
                address;
}

// ++ update
//==    Create BIT FIELD ==============

//! \details this CREATE function allocates and
//!             initializes the GLOBAL INSTANCE
// ++ update
BitField_t Create_BitField(void) {

    // ++ update
    // allocate memory
    //BitField = malloc(sizeof(BIT_FIELD_OBJ_t));

    // Check allocation
//    if (BitField == NULL){
//        return NULL;
//    }

    // ++ update
    // Assign Members
    BitField->Register_Mask = DEF_REGIESTER_MASK;

    /*  Assign Action (Function Pointers) */

    BitField->assignParent = &assignParent_this;
    // ++ update
    //read
    BitField->read = &read_this;

    // ++ update
    // write
    BitField->write = &write_this;

    // ++ update
    // set
    BitField->set = &set_this;

    // ++ update
    // clear
    BitField->clear = &clear_this;

    // ++ update
    // return
    return BitField;
}
