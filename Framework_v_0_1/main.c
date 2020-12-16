/**
 * \file main.c
 * \author Cory W Hodge
 * \date 12/14/2020
 *
 * driver for mcu framework
 *
 *
 * TODO
 * 12/15/2020 Next Steps:
 *
 * test struct base address typedefs
 *  either volatile unisinged int * or just unsigned int
 *
 * then finish writing MODULE.h with proper regArr[REG_ARR_SIZE] or use
 * enums like register.h
 *
 * module will be optional in future, currently independant of register
 *
 * goal is to use syntax : Module.Register.action(Bit_Field);
 * while also keeping memory space in mind
 *
 * I will write a C program to read the ti provided mem maps for each
 * module/register. It will produce a library of files I refer to as
 * the FrameWork. Each one will mimick the files in this project, being:
 * Register.h
 * Register.c
 * Module.h
 * Module.c (to create upon return)
 *
 */

// Project Common Files
#include "prj_common.h"

// Register Struct
#include "Register.h"

// Module Struct
//#include "Module.h"
/**
 * main.c
 */
int main(void)
{

    REGISTER_t Register = BUILDER_REGISTER();

    int x = Register.REG_BASE_ADDR;

    Register.set(GPIOF);

    int y = x++;

    Register.clear(GPIOF);

    int z = y++;

    x = y;



    x = Register.REG_BASE_ADDR;

    Register.set(GPIOB);

    y = x++;

    Register.clear(GPIOB);

    z = y++;

    x = y;

    size_t sizeOfStructure = sizeof(Register);

    x = sizeOfStructure;

    y = x;

    z = y;

    // system fault when this is uncommented
    // i think it is too large of a memory block
    // (mod contains register array of size 200 ints)
    // this is only 1 of 200 or more registers. So this
//    // method will not work
//    Module_t Module = BUILDER_MODULE();
//
//    sizeOfStructure = sizeof(Module);





    while(1){

    }

	return 0;
}
