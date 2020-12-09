/*
 * MODUAL.h
 *
 *  Created on: Dec 6, 2020
 *      Author: coryhodge
 */

#ifndef MODUAL_H_
#define MODUAL_H_


//! Include : Register Definition
#include "REGISTER.h"

// ========= STRUCTURE =============
typedef struct _MODULE_ {

    //! Base Address of Module
    uint32_t BASE_ADDR;

    //! Array of Registers for this Module
    Register_Handle Registers[];


} MODULE_t;
// ========= TYPEDEF ===============


// ========= GLOBAL INSTANCE =======


#endif /* MODUAL_H_ */
