d/*
 * Module.h
 *
 *  Created on: Dec 15, 2020
 *      Author: coryhodge
 */

#ifndef _MODULE_H_
#define _MODULE_H_

#include "prj_common.h"
#include "Register.h"

typedef struct MODULE_obj {

    ADDRESS MOD_BASE_ADDR;

    // Array of Registers ; sizeof(REGISTER_t[250] = 5,000 Bytes
    REGISTER_t regArr[250];

    void(*fp_1)(void);
    void(*fp_2)(void);
    void(*fp_3)(void);
    void(*fp_4)(void);

} Module_t;



/*  Constructor     */
Module_t BUILDER_MODULE(void){

    Module_t Module;

    //TODO: Populate Module with Registers

    // Assign Function Pointers for direct module modification

    return Module;
}
#endif /* _MODULE_H_ */
