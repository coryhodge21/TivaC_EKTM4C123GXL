/**
 * \file Registers.h
 * \author Cory W. Hodge
 * \date 12/14/2020
 *
 * \description this is a generic
 * template for the Frameworks
 * register structure
 *
 *
 * \details
 *      Each register will be represented with a struct.
 *      within this struct will be all the needed info
 *      for reading, writing, setting, and clearing this
 *      registers particular bitfields.
 *
 *      bit fields are represented with enumerations.
 *      the enumerations value's are the register masks
 *
 *      each register will hold 4 function pointers to
 *      generic functions that carry out the operations.
 */

// Project Common Files
#include "prj_common.h"

///////////////////////
// REGISTER BASE ADDR
#define SYSCTL_RCGC2            0x400FE108  // Run Mode Clock Gating Control
                                            // Register 2
/////////////////////
// REGISTER BIT FIELD MASKS
#define SYSCTL_RCGC2_USB0       0x00010000  // USB0 Clock Gating Control
#define SYSCTL_RCGC2_UDMA       0x00002000  // Micro-DMA Clock Gating Control
#define SYSCTL_RCGC2_GPIOJ      0x00000100  // Port J Clock Gating Control
#define SYSCTL_RCGC2_GPIOH      0x00000080  // Port H Clock Gating Control
#define SYSCTL_RCGC2_GPIOG      0x00000040  // Port G Clock Gating Control
#define SYSCTL_RCGC2_GPIOF      0x00000020  // Port F Clock Gating Control
#define SYSCTL_RCGC2_GPIOE      0x00000010  // Port E Clock Gating Control
#define SYSCTL_RCGC2_GPIOD      0x00000008  // Port D Clock Gating Control
#define SYSCTL_RCGC2_GPIOC      0x00000004  // Port C Clock Gating Control
#define SYSCTL_RCGC2_GPIOB      0x00000002  // Port B Clock Gating Control
#define SYSCTL_RCGC2_GPIOA      0x00000001  // Port A Clock Gating Control

//! \brief Enumerations listing the available bit field masks.
typedef enum {

    USB0   =    0x00010000,  // USB0 Clock Gating Contro
    UDMA   =    0x00002000,  // Micro-DMA Clock Gating Control
    GPIOJ  =    0x00000100,  // Port J Clock Gating Control
    GPIOH  =    0x00000080,  // Port H Clock Gating Control
    GPIOG  =    0x00000040,  // Port G Clock Gating Control
    GPIOF  =    0x00000020,  // Port F Clock Gating Control
    GPIOE  =    0x00000010,  // Port E Clock Gating Control
    GPIOD  =    0x00000008,  // Port D Clock Gating Control
    GPIOC  =    0x00000004,  // Port C Clock Gating Control
    GPIOB  =    0x00000002,  // Port B Clock Gating Control
    GPIOA  =    0x00000001   // Port A Clock Gating Control

}Reg_BF_e;


// Functions that set/clear/read/write Bit Fields w/n Registers
typedef void(*Set_fpt)(Reg_BF_e);

typedef void(*Clear_fpt)(Reg_BF_e);

typedef int32_t(*Read_fpt)(Reg_BF_e);

typedef void(*Write_fpt)(Reg_BF_e, int32_t);

// Function Definitions
 void set_this(Reg_BF_e Bit_Field_Mask){

     *(volatile unsigned int *)SYSCTL_RCGC2 |= (Bit_Field_Mask);
}

 void clear_this(Reg_BF_e Bit_Field_Mask) {

     // Assign _BF mask to address MOD_REG
     *(volatile unsigned int *)SYSCTL_RCGC2 &= ~(Bit_Field_Mask);
}

/**
 * Structure Decleration
 */
struct REGISTER_obj;

/**
 * Structure Definition
 */
typedef struct REGISTER_obj {

    // Address of Register
    Reg_Addr_t REG_BASE_ADDR;

    // Array of Masks for Register Bit Fields
    Reg_BF_e * BitMasks;

    // function pointers to operations
    // used for modifying Register BitFields

    // Set
    Set_fpt set;

    // Clear
    Clear_fpt clear;

    // Read
    Read_fpt read;

    // Write
    Write_fpt write;

} REGISTER_t;


// Function Declerations
REGISTER_t BUILDER_REGISTER(void);


// Constructor for this Register
REGISTER_t BUILDER_REGISTER(void){

    REGISTER_t Register;

    Register.REG_BASE_ADDR = SYSCTL_RCGC2;

    Register.set = &set_this;

    Register.clear = &clear_this;

    return Register;
}


