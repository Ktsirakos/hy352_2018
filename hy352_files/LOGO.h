//here it will be the librady for the cpps

#define START_PROGRAMM using namespace std; int main (){\
    nothing( 

#define END_PROGRAMM ;return 0; }

#define WORD   Object(false ? "u should'n see this message" 
#define MAKE );Objects* 
#define PRINT(x) );cout << x << endl

#define NUMBER (Objects*) new NumberObject((false)?  -10000


#define BOOLEAN false? false 
#define TRUE true 
#define FALSE false



#include <vector>
#include <string>
#include <sstream>


using namespace std;
class Objects {
private:
    string id;
public:

       void setId(string Id){
           id = Id;
       }

       string getId(){
           return id;
       }

        void setIdvalue(string Id){
            id = Id;
        }

        virtual void setId(){
          id = "Objects";
        }
        Objects(string Id){};
        
};


class NumberObject : public Objects {
private:
        double x;
public:
    void setX(double _x){
        x = _x;
    }

    int getX(){
        return x;
    }

    void setId(){
        setIdvalue("number");
    }

    NumberObject(double _x){ x = _x; setId(); };
};


ostream& operator<< (ostream& output , Objects* object){

    if(object->getId() == "number"){
        cout << "in here!" << endl;
        NumberObject* toreturn = dynamic_cast<NumberObject*>(object);
        output << toreturn->getX() << endl;
    }
    return output;
}
 void nothing(){}
 
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
 