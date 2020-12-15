/*
 * struct_scope_check.h
 *
 *  Created on: Dec 9, 2020
 *      Author: coryhodge
 */

#ifndef STRUCT_SCOPE_CHECK_H_
#define STRUCT_SCOPE_CHECK_H_

void function(void){

    int x = 5;
    x++;
    int y = x;
    y++;
    x = y;
}

#endif /* STRUCT_SCOPE_CHECK_H_ */
