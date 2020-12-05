
#include <stdint.h>
/**
 *  \brief  Run Mode Clock Configurations (RCC)
 *
 *  \details
 *
 *      Base 0x400F.E000
 *      Offset 0x060
 *      Type RW, reset 0x078E.3AD1
 */
typedef struct _RUN_MODE_CLK_CONFIG_{

    int SYSDIV;      //!< System Divide By

} RCC;

/**
 * main.c
 */
int main(void)
{

    /*      Enable Clocking on Port F   */

    int portFbits = 32;

    uint32_t * memory_address = (uint32_t *)(0x400FE608);

    *(memory_address) = portFbits;

    /*      */

    /*      Set Direction of GPIO       */


    /*      */


    /*      Set Alternate Function       */


    /*      */


    /*      Set Drive strength      */

    /*      */


    /*     Set Functionality     */

    /*      */

    /*     Enable Digital or Analog  */

    /*      */

    /*     Interrupt        */

    /*     (optional)   Lock    */


    /*     USE THE GPIO PIN TO SET PORT F PIN 0      */

    /*      */




    return 0;
}
