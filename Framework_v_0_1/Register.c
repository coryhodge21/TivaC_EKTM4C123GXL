/*
 * Register.c
 *
 *  Created on: Dec 14, 2020
 *      Author: coryhodge
 */

#include "Register.h"

// Function Definitions
 void set_this(Reg_BF_e Bit_Field_Mask){

     *(volatile unsigned int *)SYSCTL_RCGC2 |= (Bit_Field_Mask);
}

 void clear_this(Reg_BF_e Bit_Field_Mask) {

     // Assign _BF mask to address MOD_REG
     *(volatile unsigned int *)SYSCTL_RCGC2 &= ~(Bit_Field_Mask);
}

 int32_t read_this(Reg_BF_e Bit_Field_Mask){

     return (*(volatile unsigned int *)SYSCTL_RCGC2 & (Bit_Field_Mask));
}

 void write_this(Reg_BF_e Bit_Field_Mask, int32_t msg) {

     // Assign _BF mask to address MOD_REG
     *(volatile unsigned int *)SYSCTL_RCGC2 = (Bit_Field_Mask & msg);
}

 // Constructor for this Register
 REGISTER_t BUILDER_REGISTER(void){

     REGISTER_t Register;

     Register.REG_BASE_ADDR = SYSCTL_RCGC2;

     Register.set = &set_this;

     Register.clear = &clear_this;

     Register.read = &read_this;

     Register.write = &write_this;


     return Register;
   }

