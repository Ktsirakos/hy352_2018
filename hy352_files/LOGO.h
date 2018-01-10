//here it will be the librady for the cpps

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


#define IF ;if(
#define AND and_comparer
#define OR or_comparer
#define NOT not_comparer
#define ELSE ;}else{
#define ELIF ;}else if(
#define DO ){
#define END ;}


#define SUM add
#define DIFFERENCE sub
#define PRODUCT mul
#define QUOTIENT divi
#define MODULO mod
#define MINUS mini



#define REPEAT ;for(int i =0  ; i<
#define WHILE i;){} while(
#define TIMES ;i++


#define SENTENCE (*(new SentenceObject())) = func



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




bool operator== (Objects object ,  NumberObject x){
    if(object.getId() == "number"){
        NumberObject* number = static_cast<NumberObject*>(&object);
        return number->GetValue() == x.GetValue();
    }
    
    return false;
}


bool operator== (Objects object ,  BooleanObject x){
    if(object.getId() == "boolean"){
        BooleanObject* number = static_cast<BooleanObject*>(&object);
        return number->GetValue() == x.GetValue();
    }
    
    return false;
}

bool operator== (Objects object ,  WordObject x){
    if(object.getId() == "word"){
        WordObject* number = static_cast<WordObject*>(&object);
        return number->GetValue() == x.GetValue();
    }
    
    return false;
}

bool operator> (Objects object ,  NumberObject x){
    if(object.getId() == "number"){
        NumberObject* number = static_cast<NumberObject*>(&object);
        return number->GetValue() > x.GetValue();
    }
    
    return false;
}

bool operator> (Objects object ,  WordObject x){
    if(object.getId() == "word"){
        WordObject* number = static_cast<WordObject*>(&object);
        return number->GetValue() > x.GetValue();
    }
    
    return false;
}


bool operator>= (Objects object ,  NumberObject x){
    if(object.getId() == "number"){
        NumberObject* number = static_cast<NumberObject*>(&object);
        return number->GetValue() >= x.GetValue();
    }
    
    return false;
}

bool operator>= (Objects object ,  WordObject x){
    if(object.getId() == "word"){
        WordObject* number = static_cast<WordObject*>(&object);
        return number->GetValue() >= x.GetValue();
    }
    
    return false;
}

bool operator<= (Objects object ,  NumberObject x){
    if(object.getId() == "number"){
        NumberObject* number = static_cast<NumberObject*>(&object);
        return number->GetValue() <= x.GetValue();
    }
    
    return false;
}

bool operator<= (Objects object ,  WordObject x){
    if(object.getId() == "word"){
        WordObject* number = static_cast<WordObject*>(&object);
        return number->GetValue() <= x.GetValue();
    }
    
    return false;
}

bool operator< (Objects object ,  NumberObject x){
    if(object.getId() == "number"){
        NumberObject* number = static_cast<NumberObject*>(&object);
        return number->GetValue() < x.GetValue();
    }
    
    return false;
}

bool operator< (Objects object ,  WordObject x){
    if(object.getId() == "word"){
        WordObject* number = static_cast<WordObject*>(&object);
        return number->GetValue() < x.GetValue();
    }
    
    return false;
}

bool operator!= (Objects object ,  NumberObject x){
    if(object.getId() == "number"){
        NumberObject* number = static_cast<NumberObject*>(&object);
        return number->GetValue() != x.GetValue();
    }
    
    return false;
}

bool operator!= (Objects object ,  BooleanObject x){
    if(object.getId() == "boolean"){
        BooleanObject* number = static_cast<BooleanObject*>(&object);
        return number->GetValue() != x.GetValue();
    }
    
    return false;
}

bool operator!= (Objects object ,  WordObject x){
    if(object.getId() == "word"){
        WordObject* number = static_cast<WordObject*>(&object);
        return number->GetValue() != x.GetValue();
    }
    
    return false;
}



NumberObject operator+ (NumberObject object , NumberObject x){
    
    NumberObject x3=*(new NumberObject(object.GetValue()+x.GetValue()) );
    return x3;
    
}


NumberObject operator+ (Objects object , NumberObject x){
    
    NumberObject* number = static_cast<NumberObject*>(&object);
    NumberObject x3=*(new NumberObject(number->GetValue()+x.GetValue()) );
    return x3;
    
}


NumberObject operator+ (NumberObject object , Objects x){
    
    NumberObject* number = static_cast<NumberObject*>(&x);
    NumberObject x3=*(new NumberObject(object.GetValue()+number->GetValue()) );
    return x3;
    
}


NumberObject operator- (NumberObject object , NumberObject x){
    
    NumberObject x3=*(new NumberObject(object.GetValue()-x.GetValue()) );
    return x3;
    
}


NumberObject operator- (Objects object , NumberObject x){
    
    NumberObject* number = static_cast<NumberObject*>(&object);
    NumberObject x3=*(new NumberObject(number->GetValue()-x.GetValue()) );
    return x3;
    
}


NumberObject operator- (NumberObject object , Objects x){
    
    NumberObject* number = static_cast<NumberObject*>(&x);
    NumberObject x3=*(new NumberObject(object.GetValue()-number->GetValue()) );
    return x3;
    
}

NumberObject operator* (NumberObject object , NumberObject x){
    
    NumberObject x3=*(new NumberObject(object.GetValue()*x.GetValue()) );
    return x3;
    
}


NumberObject operator* (Objects object , NumberObject x){
    
    NumberObject* number = static_cast<NumberObject*>(&object);
    NumberObject x3=*(new NumberObject(number->GetValue()*x.GetValue()) );
    return x3;
    
}


NumberObject operator* (NumberObject object , Objects x){
    
    NumberObject* number = static_cast<NumberObject*>(&x);
    NumberObject x3=*(new NumberObject(object.GetValue()*number->GetValue()) );
    return x3;
    
}

NumberObject operator/ (NumberObject object , NumberObject x){
    
    NumberObject x3=*(new NumberObject(object.GetValue()/x.GetValue()) );
    return x3;
    
}


NumberObject operator/ (Objects object , NumberObject x){
    
    NumberObject* number = static_cast<NumberObject*>(&object);
    NumberObject x3=*(new NumberObject(number->GetValue()/x.GetValue()) );
    return x3;
    
}


NumberObject operator/ (NumberObject object , Objects x){
    
    NumberObject* number = static_cast<NumberObject*>(&x);
    NumberObject x3=*(new NumberObject(object.GetValue()/number->GetValue()) );
    return x3;
    
}

NumberObject operator% (NumberObject object , NumberObject x){
    
    int tmp =object.GetValue();
    int tmp1 =x.GetValue();
    
    NumberObject x3=*(new NumberObject(tmp%tmp1) );
    return x3;

}


NumberObject operator% (Objects object , NumberObject x){

    NumberObject* number = static_cast<NumberObject*>(&object);

    int tmp =number->GetValue();
    int tmp1 =x.GetValue();
    NumberObject x3=*(new NumberObject(tmp % tmp1) );
    return x3;

}


NumberObject operator% (NumberObject object , Objects x){
    
    

    int tmp =object.GetValue();
    NumberObject* number = static_cast<NumberObject*>(&x);
    int tmp1 =number->GetValue();
    //NumberObject* number = static_cast<NumberObject*>(&x);
    NumberObject x3=*(new NumberObject(tmp%tmp1) );
    return x3;

}

NumberObject mini (NumberObject object ){
    
    
    NumberObject x3=*(new NumberObject(-object.GetValue()) );
    return x3;
    
}

NumberObject mini (Objects object ){
    
    NumberObject* number = static_cast<NumberObject*>(&object);
    NumberObject x3=*(new NumberObject(-number->GetValue()) );
    return x3;
    
}







class Myvector {
public:
    vector<Objects> vec;
    
    Myvector(){
        
    }
};


class SentenceObject : public Objects {
public:


    vector<Objects> vec;
    
    void setId(){
        setIdvalue("sentence");
    }

    vector<Objects> GetValue(){
        return getList();
    }


    SentenceObject(){ setId(); }
    SentenceObject(Myvector vec){

        setId();
        setList(vec.vec);
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
Myvector  func(T a) {
    // In real-world code, we wouldn't compare floating point values like
    // this. It would make sense to specialize this function for floating
    // point types to use approximate comparison.
    //Myvector myvec;
    myvec.vec.push_back(a);
//    PRINT(a);
    
    return myvec;


}

template<typename T, typename... Args>
Myvector   func(T a, Args... args) {

    //Myvector myvec;
    myvec.vec.push_back(a);
//    PRINT(a);
    return  func(args...);
}


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
            }else if(array->GetValue()[i].getId() == "list"){
                ListObject* list = static_cast<ListObject*>(&array->GetValue()[i]);
                for(int i = 0; i < list->GetValue().size(); i++){
                    if(list->GetValue()[i].getId() == "number"){
                        NumberObject* number = static_cast<NumberObject*>(&list->GetValue()[i]);
                        output << "\t" << number->GetValue() << endl;
                    }else if(list->GetValue()[i].getId() == "word"){
                        WordObject* word = static_cast<WordObject*>(&list->GetValue()[i]);
                        output << "\t" << word->GetValue() << endl;
                    }else if(list->GetValue()[i].getId() == "boolean"){
                        BooleanObject* boolean = static_cast<BooleanObject*>(&list->GetValue()[i]);
                        output << "\t" <<  boolean->GetValue() << endl;
                    }
                }
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
    }else if(object.getId() == "sentence"){
        SentenceObject* sentence = static_cast<SentenceObject*>(&object);
        for(int i = 0; i < sentence->GetValue().size(); i++){
            if(sentence->GetValue()[i].getId() == "word"){
                WordObject* word = static_cast<WordObject*>(&sentence->GetValue()[i]);
                output << "\t" << word->GetValue() << endl;
            }else{
                cout << "Invalid" << endl;
            }
        }
    }

    return output;
}


void nothing(){
    //den kanw tipota
}


template<typename T>
bool and_comparer(T a) {

    return a == true;
}

template<typename T, typename... Args>
bool and_comparer(T a, Args... args) {
    return a == true && and_comparer(args...);
}



template<typename T>
bool or_comparer(T a) {

    return a ==true;
}

template<typename T, typename... Args>
bool or_comparer(T a, Args... args) {
    return a == true || or_comparer(args...);
}


template<typename T>
bool not_comparer(T a) {

    return a ==false;
}

template<typename T, typename... Args>
bool not_comparer(T a, Args... args) {
    return a == false && not_comparer(args...);
}


template<typename T>
T add(T v) {
    return v;
}

template<typename T, typename... Args>
T add(T first, Args... args) {
    return first + add(args...);
}


template<typename T>
T sub(T v) {
    return v;
}

template<typename T, typename... Args>
T sub(T first, Args... args) {
    return first - sub(args...);
}


template<typename T>
T mul(T v) {
    return v;
}

template<typename T, typename... Args>
T mul(T first, Args... args) {
    return first * mul(args...);
}


template<typename T>
T divi(T v) {
    return v;
}

template<typename T, typename... Args>
T divi(T first, Args... args) {
    return first / divi(args...);
}

template<typename T>
T mod(T v) {
    return v;
}

template<typename T, typename... Args>
T mod(T first, Args... args) {
    return first % mod(args...);
}


