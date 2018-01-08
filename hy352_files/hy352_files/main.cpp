//
//  main.cpp
//  hy352_files
//
//  Created by Batzelios Thanos on 14/12/17.
//  Copyright © 2017 Batzelios Thanos. All rights reserved.
//

#include <iostream>
#include <string>
#include "../LOGO.h"
 
START_PROGRAMM

    MAKE integer =  NUMBER:20
    MAKE word = WORD: "Hello i am here!"
    MAKE boolean = BOOLEAN: TRUE;
    cout << "Hello" << endl;
    MAKE array =  (*(new ArrayObject())).vec  = { NUMBER:20 , NUMBER:12};
    cout << integer <<  endl;
    cout << word << endl;
    cout << boolean << endl;
    cout << array << endl;

END_PROGRAMM

//just an addition
