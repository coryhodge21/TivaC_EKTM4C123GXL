/**
 *
 * NOTES AREA
 */


// This DOES NOT WORK
//// Initialize Struct
//void Create_M_R_BF(BF * thiss){
//
//    BF bf;
//
//    bf.mask = 0x01;
//    bf.parent_reg = &bf.mask;
//
//    bf.set = &set_this;
//
//    thiss = &bf;
//}
//BF * real_struct = NULL;
//
//Create_M_R_BF(real_struct);
//
//real_struct->set();
//
//real_struct->write(0x0);






/**
 *
 */


/**
 *
 *
 *
 *
 */

// STD Includes
#include <stdint.h>
#include <stdlib.h>

// MEMORY DEF's
#include "hw_memmap.h"
#include "hw_sysctl.h"

// Testing
#include "struct_scope_check.h"





// === STRUCT ====
struct BF {

    int mask;

    int * parent_reg;

    void(*set)(void);
    void(*clear)(void);
};


// === TYPEDEF STRUCT ===
typedef struct _BF_ {
    int mask;
    int * parent_reg;

    void(*set)(void);
    void(*clear)(void);

}BF_t;                      // this is good


//=== TYPEDEF STRUCT POINTER ===
typedef struct BF * p_BF_t;         // this is bad


//=== TYPEDEF POINTER to TYPEDEF STRUCT
typedef BF_t p_BFt_t;             // also bad








// operations on struct type
void set_this(void) {

    // Assign _BF mask to address MOD_REG
    *(volatile unsigned int *)SYSCTL_RCGC2 |= SYSCTL_RCGC2_GPIOF;
}

// operations on struct type
void clear_this(void) {

    // Assign _BF mask to address MOD_REG
    *(volatile unsigned int *)SYSCTL_RCGC2 &= ~(SYSCTL_RCGC2_GPIOF);
}


// CONSTRUCTOR


/**
 * main.c
 */
int main(void)
{
    size_t size = sizeof(struct BF);    // size is 16 ( 4 bytes per int * 4 members )



    // 1 Basic struct decleration
    struct BF bf;

    bf.mask = 0x020;

    bf.parent_reg = NULL;

    bf.set = &set_this;

    bf.clear = &clear_this;

    bf.set();                   // this works

    bf.clear();

    bf.set();

    bf.clear();



    // 2 Typedefed 'struct BF {}BF_t; // equivalent to above : use type do not have to write struct STRUCT new_s;
    BF_t bf_t;

    bf_t.mask = 0x020;

    bf_t.parent_reg = NULL;

    bf_t.set = &set_this;

    bf_t.clear = &clear_this;

    bf_t.set();                   // this works

    bf_t.clear();

    bf_t.set();

    bf_t.clear();




    // 3 Struct Pointer, Full decleration
    struct BF * p_BF;

    p_BF = NULL;            // points to nothing

    p_BF = &bf;             // points to struct

    p_BF->set();                   // this works

    p_BF->clear();

    p_BF->set();

    p_BF->clear();



    // 4 typedefed 'typedef struct BF * p_BF_t' equivalent to above : removes struct and * keys
    p_BF_t p_bf_t;




    // 5 typedefed struct BF type pointer type ' typedef BF_t * p_BFt_t;  equivalent : 4, decleration changed at start of file
    p_BFt_t p_bft_t;



	return 0;
}
