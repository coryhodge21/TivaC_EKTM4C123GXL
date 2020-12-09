/*
 * REGISTER.c
 *
 *  Created on: Dec 6, 2020
 *      Author: coryhodge
 */

#include "REGISTER.h"


// create register
Register_Handle * newRegister (size_t num_bit_fields) {

    // Allocate Memory for Register
    Register = malloc(sizeof(REGISTER_t));

    // Check allocation succeed;
    if (Register == NULL) {
        // if not, fail and return
        return NULL;
    }

    // Allocate Memory for Bit Field Children
    Register->BitFields = malloc( sizeof(BitField_t) * num_bit_fields );

    // Check Allocation succeed
    if(Register->BitFields == NULL){

        // free register
        free(Register);

        // fail and return
        return NULL;
    }

    // Return Initialized Register
    return &Register;
}


// Populate Register
//BitField_t * populate_bitFields(){
//
//}
