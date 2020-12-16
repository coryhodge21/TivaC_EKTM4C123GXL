/**
 * \file parseData.c
 * 
 * \author Cory W. Hode
 * \date 12/7/2020
 * 
 * \brief This program takes a file as input. It parses this file
 * and pulls out the key information of the mcu modules address'
 * and the bit masks used to identify each bit field
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h> // for strlen()

/*  build up resources  */

// Create file pointers
FILE * input_file_ptr;
FILE * outPtr_file_ptr

// buffer
const int BUFF_SIZE = 50;
char BUFFER[BUFF_SIZE];

// Input String Array
const int LIST_ARRAY_LENGTH = 6;
const int LIST_ARRAY_STRING_LENGTH = 80;
char listArr[LIST_ARRAY_LENGTH][LIST_ARRAY_STRING_LENGTH] = {0};

char REGISTER_ARRAY[]
int main(void) {

    // arrays for holding data

    /*  Parse the file and fill arrays  */

    // Parsing Pointers
    int slowIndex, medIndex, fastIndex;

    // open file to parse
    //input_file_Ptr = fopen("./team_list.txt", "r");
    //////////////////////////////////////
    // DEBUGGING
    input_file_Ptr = fopen("./Regster.txt", "r");

    // open file to write single occurance list
    // truncate file if it already exists
    outPtr_file_Ptr = fopen("./REGISTER.txt", "w+");

    // Parse file and store strings to array
    // for(int i = 0; i < LIST_ARRAY_LENGTH ; i++ ) {

    //     // Read Line from file
    //     fgets(listArr[i], BUFF_SIZE, input_file_Ptr);

    //     // replace new line symbol with space
    //     listArr[i][strlen(listArr[i]) - 1] = ' ';
    // }

int i = 0;
    // until end of file reached, collect each line in an array of chars
    while(fgets(BUFFER[i], BUFF_SIZE, input_file_ptr) != NULL)){
            i++;
    }

    // check if EOF reached
    if(feof(input_file_ptr)){

    }
    // else some kind of error
    else {
        return 1;
    }



    return 0;
}