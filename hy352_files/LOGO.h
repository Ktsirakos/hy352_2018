//here it will be the librady for the cpps

#define START_PROGRAMM using namespace std; int main (){\

#define END_PROGRAMM ;return 0; }

#define WORD   Object(false ? "u should'n see this message" 
#define MAKE ;Objects 
#define PRINT(x) ;cout << x << endl

#define NUMBER *( new NumberObject()) = 0?  -10000

#define BOOLEAN false? false 
#define TRUE true 
#define FALSE false



#include <vector>
#include <string>
#include <sstream>


using namespace std;

class NumberObject;


class Objects {
private:
    string id;
    string word;
    double number;
    bool boolean;
    vector<Objects> list;

protected:

    void setNumber(double x){
        number = x;
    }


    void setWord(string x){
        word = x;
    }

    void setBoolean(bool x){
        boolean = x;
    }

    void setList(vector<Objects> x){
        list = x;
    }

    double getNUmber(){
       return number;
    }


    string getWord(){
        return word;
    }

    bool getBoolean(){
        return boolean ;
    }

    vector<Objects> getList(){
        return list;
    }

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

        virtual void setId(){};

        Objects operator= (double x){
            cout << "In here tooo" << endl;
        }

        Objects(string Id){};
        Objects(double Id){ 
            cout << "In here to2oo" << endl;
        }

        Objects(NumberObject* object){
            cout << " got in here !" << endl;
        }

        Objects(){};
        
};


class NumberObject : public Objects {
public:
    void setId(){
        setIdvalue("number");
    }

    double GetValue(){
        return getNUmber();
    }


    NumberObject(double _x){ cout << "In here" << endl; setNumber(_x); setId(); };
    NumberObject(){  
        setId(); 
        };

};


class WordObject : public Objects {
public:
    void setId(){
        setIdvalue("word");
    }

    string GetValue(){
        return getWord();
    }

    WordObject(string _x){ setWord(_x); setId(); };
    WordObject(){  
        setId(); 
        };

};


ostream& operator<< (ostream& output , Objects object){

    output << "in here!" << endl;
    return output;
}



 
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
 