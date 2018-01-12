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
 

 


START_PROGRAMM

MAKE list1 = LIST [ NUMBER: 10 , NUMBER :20 , NUMBER:40]
PRINT(list1)

MAKE list2 = LIST [ LIST [  NUMBER:24  , NUMBER: 27] ,  NUMBER:30]
PRINT(list2)


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

MAKE j= ITEM (7, array2)
PRINT(j);
PRINT(array2)

;cout<<"thanos"<<endl;

SETITEM ({4 , 1} , array2 , NUMBER:150)
PRINT(array2);





MAKE booloflife = SENTENCE(WORD:"Never stop believing" , WORD: " " , WORD: "TO U!!")
PRINT(booloflife)

END_PROGRAMM

//just an addition
