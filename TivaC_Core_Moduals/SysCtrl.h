/*
 * SysCtrl.h
 *
 *  Created on: Dec 5, 2020
 *      Author: cory aaaaaaahodge
 */

#ifndef SYSCTRL_H_
#define SYSCTRL_H_

#define SYSCTRL_BASE_ADDR   0x400FE000

struct _SYSCTRL_OBJ_ {

    volatile uint32_t DID0;


} SysCtrl_Obj;

typedef SysCtrl_Obj * SYSCTRL_t;


#endif /* SYSCTRL_H_ */
