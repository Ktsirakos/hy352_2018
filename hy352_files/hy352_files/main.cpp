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
    MAKE x =  NUMBER:10
    MAKE y =  NUMBER:30
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

IF AND(integer== (NUMBER:20),y== (NUMBER:30),boolean == (BOOLEAN: TRUE),word == (WORD: "Hello i am here!")) DO
// IF AND(x==10,integer==20) DO
PRINT(integer)
// END
END

IF OR(x==(NUMBER:10),integer==(NUMBER:30) ,boolean == (BOOLEAN: FALSE)) DO
PRINT(x)
//ELIF x==(NUMBER:10) DO
//PRINT(boolean)
END
int w=0;
REPEAT 5 TIMES DO
w++
END
cout<<w<<endl;
//int r=10;
//REPEAT WHILE x != (NUMBER:19) DO
//r++;
//PRINT(r);
//END
//PRINT(r);
//x != NUMBER:19
MAKE k = SUM (x,NUMBER:40,x,NUMBER:40,NUMBER:40)
PRINT(k);
MAKE q = DIFFERENCE ((NUMBER: 12),x)
PRINT(q);

MAKE z = PRODUCT ((NUMBER: 12),x)
PRINT(z);

PRINT(x);
MAKE v4 = QUOTIENT (NUMBER:24,NUMBER:12,NUMBER:2)
PRINT(v4);

//MAKE v5 = MODULO (NUMBER:12,NUMBER:7)
//PRINT(v5);
//
//MAKE v2 = MINUS (NUMBER:12)
//PRINT(v2);
int g = 24/12/2;
cout<<g<<endl;




END_PROGRAMM

//just an addition
