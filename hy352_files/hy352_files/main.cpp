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

    MAKE hello = WORD: "hello world"
    MAKE a = WORD: "come with me"
    MAKE boolean = BOOLEAN: FALSE
    MAKE integer = NUMBER:20

    PRINT(a)
    PRINT(hello)
    PRINT(boolean)
PRINT(integer);
int x=10;
int y=30;
int k= SUM(NUMBER:1, 2, 3,PRODUCT (2,2),20,MODULO (12, 12));
PRINT(k)


MAKE t = DIFFERENCE(NUMBER:10,10,-10,20,-integer,MODULO (12, 12))
PRINT(t)
//t=hello;
//PRINT(t);
MAKE n = PRODUCT (2,2,MODULO (12, 12))
PRINT(n)

MAKE v5 = MODULO (14, 12)
PRINT(v5)

MAKE v4 = QUOTIENT (NUMBER: 24, PRODUCT (2,6))
PRINT(v4)


MAKE v2 = MINUS (12)
PRINT(v2)




IF AND(x==10,integer==20,y==30) DO
   // IF AND(x==10,integer==20) DO
    PRINT(x)
   // END
END

IF OR(x>10,integer==10) DO
PRINT(x)
ELIF x==(NUMBER:10) DO
PRINT(boolean)
END

int w=31;
IF NOT (w==30,x==10) DO
PRINT(w)
END

//for(int i=0;i<6;i++){
//    w++;
//}
//PRINT(w);
REPEAT 5 TIMES DO
REPCOUNT
PRINT(REPCOUNT);
w++
END
PRINT(w);



int r=13;
//for(int i=0;r!=25;){
//    r++;
//    for(int i=0;r!=25;){
//    }
//
//}
//PRINT(r);
REPEAT WHILE r!=17 DO
REPCOUNT
PRINT(REPCOUNT);
 r++;
END
PRINT(r);

//int z=20;
//REPEAT  WHILE z!=26 DO
//REPCOUNT
//PRINT(REPCOUNT);
//z++;
//END
//PRINT(z);
//int z=20;
//int c=1;
////PRINT(c);
//while(c++ && z!=26){
//    int g=c-1;
//    PRINT(g);
//    //PRINT(c);
////    REPCOUNT
////    PRINT(REPCOUNT);
//    z++;
//
//}
//PRINT(z);



END_PROGRAMM




//just an addition
