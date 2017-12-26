//here it will be the librady for the cpps

#define START_PROGRAMM using namespace std; int main (){ 
#define END_PROGRAMM ;return 0; }

#define WORD   false ?  "u should'n see this message" 
#define MAKE ;auto
#define PRINT(x) ;cout << x << endl

#define NUMBER false ?  -0.0000999 


#define BOOLEAN false? false 
#define TRUE true 
#define FALSE false



#include <vector>


class Objects {
  
       string      valueString;
       int         valueNumber;
       bool        valueBool;
       string      id;
       ListObject  list;
 
};


class NumberObject : public Objects {

};

class WordObject : public Objects {

};

class BooleanObject : public Objects {

};

class ListObject{
 
      vector < Objects > list;
};
  
 

 
 /*  
 *  LIST [ 
 *          NUMBER:20 , 
 *          LIST [ 
                   STRING: "Hello" , 
                   NUMBER: 10 
                ]
         ]
   
 * 
 * EINAI ------> ListObject <
 *                          Object { valueNumber = 20;}
 *                          ListObject < 
 *                                      Object {  valueString = "Hello";}
 *                                      Object {  valueNumber = 10;     }                                      
 *                                        >
 *                          >
*/
 