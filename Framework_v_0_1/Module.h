/*
 * Module.h
 *
 *  Created on: Dec 15, 2020
 *      Author: coryhodge
 */

#ifndef MODULE_H_
#define MODULE_H_

#include "prj_common.h"
#include "Register.h"

typedef struct MODULE_obj {

    REGISTER_t Registers[200];
} Module_t;

Module_t BUILDER_MODULE(void){

    Module_t Module;

    return Module;
}
#endif /* MODULE_H_ */
