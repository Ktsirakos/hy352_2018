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
#include <vector>
#include "../LOGO.h"
 

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

MAKE list1 = LIST [ NUMBER: 10 , NUMBER :20 , NUMBER:40]
PRINT(list1)

MAKE list2 = LIST [ LIST [  NUMBER:24  , NUMBER: 27] ,  NUMBER:30]
PRINT(list2)


//MAKE v5 = MODULO (NUMBER:12,NUMBER:7)
//PRINT(v5);
//
//MAKE v2 = MINUS (NUMBER:12)
//PRINT(v2);
//int g = 24/12/2;
//cout<<g<<endl;
MAKE array2 = ARRAY { 
    NUMBER:20 , 
    WORD:"201" , 
    LIST [ 
            NUMBER:205 , 
            LIST [ 
                    WORD: "I owned you" , 
                    NUMBER:31
                ]
        ] , 
    ARRAY { 
        NUMBER:123 ,
         NUMBER: 456 , 
         WORD: "teleiwsa"
         } 
    }

MAKE j= ΙΤΕΜ (7, array)
PRINT(j);
cout<<"thanos"<<endl;


MAKE g= SETΙΤΕΜ (3, array, NUMBER:1)
MAKE c= SETΙΤΕΜ (4 , array , NUMBER:20)
PRINT(g);
PRINT(c);






    
PRINT(array2);
MAKE booloflife = SENTENCE(WORD:"Never stop believing" , WORD: " " , WORD: "TO U!!")
PRINT(booloflife)
END_PROGRAMM

//just an addition
