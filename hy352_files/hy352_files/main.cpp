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

    //;cout << "Hello FRom here!" << endl
    //MAKE integer =  *(new NumberObject()) = 0? -10000 : 20.0;
    //PRINT( 1 , 3 , 4);
    MAKE number = NUMBER: 21
    //PRINT(number)
    MAKE string = WORD:"aaa";
    //PRINT(string);
Myvector vector2 = SENTENCE(WORD:"aaa" , WORD:"aaw",WORD:"aa111");

for(int i = 0; i< vector2.vec.size(); i++){
    cout << vector2.vec[i] << endl;
    
}
END_PROGRAMM

//just an addition
