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


TO max WITH int x , int y FSTART
PRINT("max");
FEND
START_PROGRAMM

    MAKE integer =  NUMBER:20
    MAKE x =  NUMBER:10
    MAKE y =  NUMBER:30
    MAKE word = WORD: "Hello i am here!"
    MAKE boolean = BOOLEAN: TRUE;

    MAKE list = LIST [ WORD: "hELLO " , WORD: "WORLD"];
    MAKE array =  ARRAY { NUMBER:20 , NUMBER:12 , NUMBER:7 , WORD:"Hello Mac" ,NUMBER:2 ,NUMBER:13 ,BOOLEAN: TRUE };
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
PRINT(vector2)

IF AND(integer== (NUMBER:20),y== (NUMBER:30),boolean == (BOOLEAN: TRUE),word == (WORD: "Hello i am here!")) DO
// IF AND(x==10,integer==20) DO
PRINT(integer)
;cout<<"i am here"<<endl;
// END
END

IF OR(x==(NUMBER:10),integer==(NUMBER:30) ,boolean == (BOOLEAN: FALSE)) DO
PRINT(x)
//ELIF x==(NUMBER:10) DO
//PRINT(boolean)
END


cout << "=================\n";

REPEAT 5 TIMES DO
REPCOUNT;
PRINT(REPCOUNT)
    REPEAT 5 TIMES DO
    REPCOUNT;
    //PRINT(REPCOUNT);
    cout<<REPCOUNT;
    END
END
cout << "=================\n";




//cout<<w<<endl;
//cout<<re<<endl;
//int r=10;
//REPEAT WHILE x != (NUMBER:19) DO
//r++;
//PRINT(r);
//ENDs
//PRINT(r);
//x != NUMBER:19
MAKE k = SUM (x,x,NUMBER:40,x,NUMBER:40,NUMBER:40)
PRINT(k);
//MAKE q = DIFFERENCE (NUMBER: 12,x,x,NUMBER: 12)
//PRINT(q);
//
//MAKE z = PRODUCT (x,x)
//PRINT(z);
//
//PRINT(x);
//MAKE v4 = QUOTIENT (NUMBER:44,NUMBER:2,x,x,NUMBER:2,x)
//PRINT(v4);
//
//
//MAKE v5 = MODULO (NUMBER:12,x,x,NUMBER:7,NUMBER:4)
//PRINT(v5);

max(1,2);

//MAKE v2 = MINUS (NUMBER:12)
//PRINT(v2);
//int g = 24/12/2;
//cout<<g<<endl;

//MAKE j= ΙΤΕΜ (7, array)
//PRINT(j);
//cout<<"thanos"<<endl;
//
//
//MAKE g= SETΙΤΕΜ (3, array, NUMBER:1)
//MAKE c= SETΙΤΕΜ (4 , array , NUMBER:20)
//PRINT(g);
//PRINT(c);
//
//cout << array << endl;
//
//FOREACH list DO
//SHOW(ELEM)
//FOREACH array DO
//PRINT(ELEM)
//END
//END
//cout<<"thanos"<<endl;
//FOREACH array DO
//PRINT(array)
//END






END_PROGRAMM

//just an addition
