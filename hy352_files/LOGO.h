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


#define ITEM geter
#define SETITEM seter

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

        static void CopyObject(Objects* dest , Objects a){
            dest->id = a.id;
            dest->word = a.word;
            dest->number = a.number;
            dest->boolean = a.boolean;
            dest->list = a.list;
        }

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

    void setValue(double x){
        setNumber(x);
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

    void setValue(vector<Objects> vec){
        setList(vec);
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


//NumberObject operator= (NumberObject object , NumberObject x){
//
//    //NumberObject* number = static_cast<NumberObject*>(&x);
//    NumberObject x3=*(new NumberObject(object.GetValue()=x.GetValue()) );
//    return x3;
//
//}


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



//-------------------------------------------


vector<Objects>  operator,(ListObject a , ListObject b){
   vector<Objects>  myvec;
   myvec.push_back(static_cast<Objects>(a));
   myvec.push_back(static_cast<Objects>(b));
   return myvec;
}


//===========================================


//void func(Myvector myvec){
//    cout << "constructor" << endl;
//
//
//}

Myvector myvec;

template<typename T>
Myvector  func(T a) {

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


string delim = "\t";

ostream& PrintLists(ostream& output , ListObject* list);


ostream& PrintArray(ostream& output , ArrayObject* array){

    vector<Objects> vec = array->GetValue();
        for(int i = 0; i < vec.size(); i++){
            if(vec[i].getId() == "number"){
                NumberObject* number = static_cast<NumberObject*>(&vec[i]);
                output << "\t" << number->GetValue() << endl;
            }else if(vec[i].getId() == "word"){
                WordObject* word = static_cast<WordObject*>(&vec[i]);
                output << "\t" << word->GetValue() << endl;
            }else if(vec[i].getId() == "boolean"){
                BooleanObject* boolean = static_cast<BooleanObject*>(&vec[i]);
                output << "\t" <<  boolean->GetValue() << endl;
            }else if(vec[i].getId() == "list"){
                ListObject* list = static_cast<ListObject*>(&vec[i]);
                PrintLists(output , list);
            }else if(vec[i].getId() == "array"){
                ArrayObject* arraynew = static_cast<ArrayObject*>(&vec[i]);
                PrintArray(output , arraynew);
            }
        }
}


ostream& PrintLists(ostream& output , ListObject* list){

        vector<Objects> vec = list->GetValue();
        for(int i = 0; i < vec.size(); i++){
            if(vec[i].getId() == "number"){
                NumberObject* number = static_cast<NumberObject*>(&vec[i]);
                output << "\t" << number->GetValue() << endl;
            }else if(vec[i].getId() == "word"){
                WordObject* word = static_cast<WordObject*>(&vec[i]);
                output << "\t" << word->GetValue() << endl;
            }else if(vec[i].getId() == "boolean"){
                BooleanObject* boolean = static_cast<BooleanObject*>(&vec[i]);
                output << "\t" <<  boolean->GetValue() << endl;
            }else if(vec[i].getId() == "list"){
                ListObject* newlist = static_cast<ListObject*>(&vec[i]);
                PrintLists(output , newlist);
            }
    }
}


template<typename T, typename T1>
Objects   geter(T a, T1 b) {
    Objects obj;
    ArrayObject* array = static_cast<ArrayObject*>(&b);
    PRINT(a);
    PRINT(array->GetValue().size());
    
    for(int i=0;i<array->GetValue().size();i++){
        //cout<<"for"<<endl;
        
        if(i==a-1){
            //cout<<"mphka"<<endl;
            //NumberObject* number = static_cast<NumberObject*>(&array->GetValue());
           // cout<<array->GetValue()<<endl;
            return array->GetValue()[i];
        }
    }
    return obj;
}


Objects   seter(int  a, Objects b, Objects c) {
    Objects obj;
    ArrayObject* array = static_cast<ArrayObject*>(&b);
    for(int i=0;i<array->GetValue().size();i++){
        if(i==a-1){
            if(c.getId() == "number"){
                
                if(array->GetValue()[i].getId() == "number"){
                    NumberObject* num = static_cast<NumberObject*>(&c);
                    NumberObject* tochange = static_cast<NumberObject*>(&array->GetValue()[i]);
                    tochange->setValue(num->GetValue());
                    //cout<<array->GetValue()[i]<<endl;
                    return *tochange;
                }else if(array->GetValue()[i].getId() == "word"){
                    
                    vector<Objects> vec = array->GetValue();
                    Objects::CopyObject(&vec[i] , c);
                    array->setValue(vec);
                    return array->GetValue()[i];
                }
            }
        
        }
    }
    return obj;
    
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
        // for(int i = 0; i < array->GetValue().size(); i++){
        //     if(array->GetValue()[i].getId() == "number"){
        //         NumberObject* number = static_cast<NumberObject*>(&array->GetValue()[i]);
        //         output << "\t" << number->GetValue() << endl;
        //     }else if(array->GetValue()[i].getId() == "word"){
        //         WordObject* word = static_cast<WordObject*>(&array->GetValue()[i]);
        //         output << "\t" << word->GetValue() << endl;
        //     }else if(array->GetValue()[i].getId() == "boolean"){
        //         BooleanObject* boolean = static_cast<BooleanObject*>(&array->GetValue()[i]);
        //         output << "\t" <<  boolean->GetValue() << endl;
        //     }else if(array->GetValue()[i].getId() == "list"){
        //         ListObject* list = static_cast<ListObject*>(&array->GetValue()[i]);
        //         for(int i = 0; i < list->GetValue().size(); i++){
        //             if(list->GetValue()[i].getId() == "number"){
        //                 NumberObject* number = static_cast<NumberObject*>(&list->GetValue()[i]);
        //                 output << "\t" << number->GetValue() << endl;
        //             }else if(list->GetValue()[i].getId() == "word"){
        //                 WordObject* word = static_cast<WordObject*>(&list->GetValue()[i]);
        //                 output << "\t" << word->GetValue() << endl;
        //             }else if(list->GetValue()[i].getId() == "boolean"){
        //                 BooleanObject* boolean = static_cast<BooleanObject*>(&list->GetValue()[i]);
        //                 output << "\t" <<  boolean->GetValue() << endl;
        //             }
        //         }
        //     }
        // }

        PrintArray(output , array);
    }else if(object.getId() == "list"){
         ListObject* list = static_cast<ListObject*>(&object);
         PrintLists(output , list);

    }else if(object.getId() == "sentence"){
        SentenceObject* sentence = static_cast<SentenceObject*>(&object);
        for(int i = 0; i < sentence->GetValue().size(); i++){
            if(sentence->GetValue()[i].getId() == "word"){
                vector<Objects> vec = sentence->GetValue();
                WordObject* word = static_cast<WordObject*>(&vec[i]);
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


