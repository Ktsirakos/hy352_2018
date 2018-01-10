//
//  main.cpp
//  hy352_files
//
//  Created by Batzelios Thanos on 14/12/17.
//  Copyright © 2017 Batzelios Thanos. All rights reserved.
//
#include <stdarg.h>
#include <iostream>
#include <string>
#include "../LOGO.h"
 
START_PROGRAMM

    MAKE integer =  NUMBER:20
    MAKE word = WORD: "Hello i am here!"
    MAKE boolean = BOOLEAN: TRUE;
    MAKE list = LIST [ WORD: "hELLO " , WORD: "WORLD"];
    MAKE array =  ARRAY { NUMBER:20 , NUMBER:12 , LIST [ WORD: "hELLO " , WORD: "WORLD"] , LIST[ WORD: "tRUEE " , WORD: "FAlsE"]};
    cout << integer <<  endl;
    cout << word << endl;
    cout << boolean << endl;
    cout << list << endl;
    cout << array << endl; 

    //;cout << "Hello FRom here!" << endl
    //MAKE integer =  *(new NumberObject()) = 0? -10000 : 20.0;
    //PRINT( 1 , 3 , 4);
    MAKE number = NUMBER: 21
    //PRINT(number)
    MAKE string = WORD:"aaa";
    //PRINT(string);
MAKE vector2 = SENTENCE(WORD:"aaa" , WORD:"aaw",WORD:"assss1");

    cout << vector2 << endl;
END_PROGRAMM

//just an addition
