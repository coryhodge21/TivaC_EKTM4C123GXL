/*
 * BIT_FIELD.c
 *
 *  Created on: Dec 6, 2020
 *      Author: coryhodge
 */
#include "BIT_FIELD.h"


// ========= GLOBAL INSTANCE =======
BIT_FIELD_HANDLE BitField;

// ========= ACTIONS ===============

// Read the value masked by this bit field
uint32_t read_this(void){
    return (*BitField->Register_Address) &
            BitField->Register_Mask;
}

// TODO: Does not account for bit shifting value
//       into place
// write the value masked by this bit field
void write_this(uint32_t value) {
    (*BitField->Register_Address) =
            ( value & BitField->Register_Mask);
}

// Set the Value masked by this bit field
void set_this(void) {
    *(BitField->Register_Address) |=
            BitField->Register_Mask;
}

// Clear the value masked by this bit field
void clear_this(void){

    *(BitField->Register_Address) &=
                ~(BitField->Register_Mask);
}

//==    Create BIT FIELD ==============
BIT_FIELD_HANDLE CREATE_BIT_FIELD(void) {

    // Create an instance of a bit field on the stack
    // allocate memory for this bit field
    //BIT_FIELD_HANDLE creating_Bit_Field = malloc(sizeof(BIT_FIELD_t));
    BitField = malloc(sizeof(BIT_FIELD_t));

    // Assign Pointer to Parent Register
    BitField->Register_Address = DEF_REGISTER_ADDRESS;

    // Assign Members
    BitField->Register_Mask = DEF_REGIESTER_MASK;

    /*  Assign Bit Field Action (Function Pointers) */

    //read
    BitField->read = &read_this;

    // write
    BitField->write = &write_this;

    // set
    BitField->set = &set_this;

    // clear
    BitField->clear = &clear_this;

    // return
    return BitField;
}
