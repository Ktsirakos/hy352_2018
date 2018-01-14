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


// TO max WITH int x , int y FSTART
// PRINT("max");
// FEND
// START_PROGRAMM

//     MAKE integer =  NUMBER:20
//     MAKE x =  NUMBER:10
//     MAKE y =  NUMBER:30
//     MAKE word = WORD: "Hello i am here!"
//     MAKE boolean = BOOLEAN: TRUE;

//     MAKE list = LIST [ WORD: "hELLO " , WORD: "WORLD"];
//     MAKE array =  ARRAY { NUMBER:20 , NUMBER:12 , NUMBER:7 , WORD:"Hello Mac" ,NUMBER:2 ,NUMBER:13 ,BOOLEAN: TRUE };
//     cout << integer <<  endl;
//     cout << word << endl;
//     cout << boolean << endl;
//     cout << list << endl;
//     cout << array << endl; 


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
MAKE list1 = LIST [ NUMBER: 10 , NUMBER :20 , NUMBER:40]
PRINT(list1)

MAKE list2 = LIST [ LIST [  NUMBER:24  , NUMBER: 27] ,  NUMBER:30]
PRINT(list2)
//max(1,2);


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
//MAKE v2 = MINUS (NUMBER:12)
//PRINT(v2);
//int g = 24/12/2;
//cout<<g<<endl;

MAKE j= ITEM (7, array2)
PRINT(j);
PRINT(array2)
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

;cout<<"thanos"<<endl;

SETITEM ({4 , 1} , array2 , NUMBER:150)
PRINT(array2);





MAKE booloflife = SENTENCE(WORD:"Never stop believing" , WORD: " " , WORD: "TO U!!")
PRINT(booloflife)

END_PROGRAMM

//just an addition
