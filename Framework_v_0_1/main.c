/**
 * \file main.c
 * \author Cory W Hodge
 * \date 12/14/2020
 *
 * driver for mcu framework
 */

// Project Common Files
#include "prj_common.h"

// Register Struct
#include "Register.h"

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



    while(1){

    }

	return 0;
}
