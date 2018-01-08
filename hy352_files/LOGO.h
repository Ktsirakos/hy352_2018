//here it will be the librady for the cpps


#include <stdarg.h>
#include <vector>
#include <string>
#include <sstream>

#define START_PROGRAMM using namespace std; int main (){ \
                                                        void nothing(); \
                                                        vector<Objects> dummy
#define END_PROGRAMM ;return 0; }

#define WORD   *(new WordObject()) = false? "u should'n see this message" 
#define MAKE ;Objects 
#define PRINT(x) ;cout << x << endl

#define NUMBER *(new NumberObject()) = 0?  -10000

#define BOOLEAN *(new BooleanObject()) =false? false 
#define LIST    (*(new ListObject())) 
#define ARRAY  (*(new ArrayObject())).vec  = 
#define TRUE true 
#define FALSE false

#define SENTENCE func

#include <vector>
#include <string>
#include <sstream>


using namespace std;


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


        Objects(vector<Objects> _array){
            if(id != "list"){
                id = "array";
            }
            list = _array;
        }

        Objects(){};
        
};

class Myvector {
public:
    vector<Objects> vec;
    
    Myvector(){
        
    }
};

vector<Objects>  operator,(vector<Objects>  myvec , Objects c){
   myvec.push_back(c);
   return myvec;
}

vector<Objects>  operator,(Objects a , Objects b){
   vector<Objects>  myvec;
   myvec.push_back(a);
   myvec.push_back(b);
   return myvec;
}

//void func(Myvector myvec){
//    cout << "constructor" << endl;
//
//
//}

Myvector myvec;

template<typename T>
Myvector func(T a) {
    // In real-world code, we wouldn't compare floating point values like
    // this. It would make sense to specialize this function for floating
    // point types to use approximate comparison.
    //Myvector myvec;
    myvec.vec.push_back(a);
//    PRINT(a);
    
    return myvec;

}

template<typename T, typename... Args>
Myvector func(T a, Args... args) {

    //Myvector myvec;
    myvec.vec.push_back(a);
//    PRINT(a);
    return  func(args...);
}


class NumberObject : public Objects {
public:
    void setId(){
        setIdvalue("number");
    }

    double GetValue(){
        return getNUmber();
    }


    NumberObject(double _x){ setNumber(_x); setId(); };
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

    WordObject(const  char* x){
        setWord(string(x));
        setId();
    }

    WordObject(){  
        setId(); 
        };

};

class BooleanObject : public Objects {
public:
    void setId(){
        setIdvalue("boolean");
    }

    bool GetValue(){
        return getBoolean();
    }

    BooleanObject(bool _x){ setBoolean(_x); setId(); };

    BooleanObject(){  
        setId(); 
        };
};


class ListObject : public Objects {
public:
    void setId(){
        setIdvalue("list");
    }

    vector<Objects> GetValue(){
        return getList();
    }

    ListObject operator[] (vector<Objects> contents){
            return ListObject(contents);
    }

    ListObject(vector<Objects> _list){ setList(_list); setId(); }
    
    ListObject(){
        setId();
    }

};


class ArrayObject : public Objects {
public:

    vector<Objects> vec;

    void setId(){
        setIdvalue("array");
    }

    vector<Objects> GetValue(){
        return getList();
    }


    ArrayObject(){ setId(); }


};


ostream& operator<< (ostream& output , Objects object){


    if(object.getId() == "number"){
        NumberObject* number = static_cast<NumberObject*>(&object);
        output << number->GetValue();
    }else if(object.getId() == "word"){
        WordObject* word = static_cast<WordObject*>(&object);
        output << word->GetValue();
    }else if(object.getId() == "boolean"){
        BooleanObject* boolean = static_cast<BooleanObject*>(&object);
        output << boolean->GetValue();
    }else if(object.getId() == "array"){
        ArrayObject* array = static_cast<ArrayObject*>(&object);
        for(int i = 0; i < array->GetValue().size(); i++){
            if(array->GetValue()[i].getId() == "number"){
                NumberObject* number = static_cast<NumberObject*>(&array->GetValue()[i]);
                output << "\t" << number->GetValue() << endl;
            }else if(array->GetValue()[i].getId() == "word"){
                WordObject* word = static_cast<WordObject*>(&array->GetValue()[i]);
                output << "\t" << word->GetValue() << endl;
            }else if(array->GetValue()[i].getId() == "boolean"){
                BooleanObject* boolean = static_cast<BooleanObject*>(&array->GetValue()[i]);
                output << "\t" <<  boolean->GetValue() << endl;
            }
        }
    }else if(object.getId() == "list"){
        ListObject* array = static_cast<ListObject*>(&object);
        for(int i = 0; i < array->GetValue().size(); i++){
            if(array->GetValue()[i].getId() == "number"){
                NumberObject* number = static_cast<NumberObject*>(&array->GetValue()[i]);
                output << "\t" << number->GetValue() << endl;
            }else if(array->GetValue()[i].getId() == "word"){
                WordObject* word = static_cast<WordObject*>(&array->GetValue()[i]);
                output << "\t" << word->GetValue() << endl;
            }else if(array->GetValue()[i].getId() == "boolean"){
                BooleanObject* boolean = static_cast<BooleanObject*>(&array->GetValue()[i]);
                output << "\t" <<  boolean->GetValue() << endl;
            }
        }
    }

    return output;
}


void nothing(){
    //den kanw tipota
}

 

 
