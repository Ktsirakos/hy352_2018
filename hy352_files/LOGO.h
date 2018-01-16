//here it will be the librady for the cpps

#include <vector>
#include <string>
#include <sstream>


#define START_PROGRAMM using namespace std; int main (int argc,char **argv){  __count.push_back(NumberObject(0));\
                                                        __iter.push_back(false);\
                                                    init_GUI();\
													vector<Objects> vec;

                                          
#define END_PROGRAMM ;destroy_GUI(); return 0; }

#define WORD   *(new WordObject()) = false? "u should'n see this message" 
#define MAKE ;Objects 
#define PRINT1(x) ;cout << x << endl;

#define NUMBER *(new NumberObject()) = 0?  -10000

#define BOOLEAN *(new BooleanObject()) =false? false 
#define LIST    (*(new ListObject())) 
#define ARRAY  (*(new ArrayObject()))  = vec = 

#define TRUE true 
#define FALSE false

#define SENTENCE (*(new SentenceObject())) = func


#define IF ;enter_if(); if(
#define AND and_comparer
#define OR or_comparer
#define NOT not_comparer
#define ELSE ;}else{
#define ELIF ;}else if(
#define DO ){ increase();
#define END ;}__count.pop_back();__iter.pop_back();


#define ITEM geter
#define SETITEM ;seter

#define SUM add
#define DIFFERENCE sub
#define PRODUCT mul
#define QUOTIENT divi
#define MODULO mod
#define MINUS mini
#define ASSIGN

#define REPEAT ; enter_iter();for(int i =0  ; i<
#define WHILE i;){} while(
#define TIMES ;i++
#define FOREACH ;enter_iter();for(Objects& ___items :
#define SHOW    ;Show() = false?Objects()
#define ELEM ___items
#define REPCOUNT __count[__count.size()-1]


#define TO void
#define WITH (ListObject
#define FSTART ){
#define FEND }
#define CALL 
#define ARG(x) args.GetValue()[x-1]
#define RETURN return;




#define SETPENCOLOR  ;SetPenColor2() = LIST
#define SETSCREENCOLOR  ;SetScreenColor2() = LIST
#define FORWARD ;Forward2()=
#define BACK ;Back2()=
#define RIGHT ;Right2()=
#define LEFT ;Left2()=
#define CIRCLE ;Circle2()=
#define SETPENSIZE ;PenSize2()=
#define PENDOWN ;PenDown2()
#define PENUP ;PenUp2()
#define CENTER ;Center2()
#define PRINT ;Print2()=
#define SETXY  ;SetXY2() = LIST

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
    
        
        vector<Objects>::iterator begin(){
            return list.begin();
        }
        vector<Objects>::iterator end(){
            return list.end();
        }
        vector<Objects>::const_iterator begin() const {
            return list.begin();
        }
        vector<Objects>::const_iterator end() const {
            return list.end();
        }

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


		Objects& operator++(int x) {
			this->number++;
			return *this;
		}

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

    void operator=(Objects x){
        if(x.getId()=="number"){
            //PRINT("mphka");
            NumberObject* number = static_cast<NumberObject*>(&x);
            //PRINT(number->GetValue());
            NumberObject toreturn;
            this->setValue(number->GetValue());
        }

    }
    NumberObject(double _x){ setNumber(_x); setId(); };
    NumberObject(){  
        setId(); 
        };

};


vector<Objects> __count;
vector<bool>__iter;

void enter_if(){
    __count.push_back(REPCOUNT);
    __iter.push_back(false);
    

}

void enter_iter(){
	 Objects number = *(new NumberObject()) = 0;
    __count.push_back(number);
    __iter.push_back(true);
}

void increase(){
    if(__iter[__iter.size()-1]){
        REPCOUNT++;
    }
    
}


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

	ArrayObject(vector<Objects> x) {
		setList(x); setId(); 
	}
};


class Forward2{
public:
    Forward2(float x){
        turtle_mv_forward(x);
        PRINT1("mphka sthn float forward");
    }
    
    Forward2(Objects x){
        NumberObject* number = static_cast<NumberObject*>(&x);
        float tmp=number->GetValue();
        turtle_mv_forward(tmp);
        //PRINT(x);
        PRINT1("mphka sthn NumberObject forward");
    }
    
    Forward2(){
        
        
        
    }
};


class Back2{
public:
    Back2(float x){
        turtle_mv_backward(x)
        PRINT1("mphka sthn float back");
        
    }
    
    Back2(Objects x){
        NumberObject* number = static_cast<NumberObject*>(&x);
        float tmp=number->GetValue();
        turtle_mv_backward(tmp);
        //PRINT(x);
        PRINT1("mphka sthn NumberObject back");
    }
    
    Back2(){}
};


class Right2{
public:
    Right2(int x){
        turtle_rotate(x)
        PRINT1("mphka sthn int right")
    }
    
    Right2(Objects x){
        NumberObject* number = static_cast<NumberObject*>(&x);
        int tmp=number->GetValue();
        turtle_rotate(tmp);
        //PRINT(x);
        PRINT1("mphka sthn NumberObject riht");
    }
    
    Right2(){}
};

class Left2 {
public:

    Left2(int x){
        turtle_rotate(-x)
        PRINT1("mphka sthn int left")
    }
    
    Left2(Objects x){
        NumberObject* number = static_cast<NumberObject*>(&x);
        int tmp=number->GetValue();
        turtle_rotate(-tmp);
        //PRINT(x);
        PRINT1("mphka sthn NumberObject left");
    }
    
    Left2(){}
};

class Center2{
public:
    
    Center2(){
        PRINT1("mphka sthn center");
        turtle_go_to_center();
        
    }
};


class Circle2{
public:
    Circle2(unsigned x){
        turtle_draw_circle(x)
        PRINT1("mphka sthn unsigned circle");
    }
    
    Circle2(Objects x){
        NumberObject* number = static_cast<NumberObject*>(&x);
        unsigned tmp=number->GetValue();
        turtle_draw_circle(tmp);
        PRINT1("mphka sthn NumberObject circle");
    }
    
    Circle2(){}
};

class PenSize2{
public:
    PenSize2(float x){
        set_pen_thickness(x)
        PRINT1("mphka sthn foat PenSize");
    }
 
    
    PenSize2(Objects x){
        NumberObject* number = static_cast<NumberObject*>(&x);
        float tmp=number->GetValue();
        set_pen_thickness(tmp);
        PRINT1("mphka sthn NumberObject PenSize ");
    }
    
    PenSize2(){}
};

class PenDown2{
public:
    PenDown2(){
        
        pen_down()
        PRINT1("mphka sthn pendown");
    }
        
    
};

class PenUp2 {
public:
    PenUp2(){
        
        pen_up()
        PRINT1("mphka sthn penup");
    }
};

string my_str = "Hello, World";
const char* conv_my_str = my_str.c_str();

class Print2 {
public:
    Print2(char const *text){
        turtle_draw_label(text)
        PRINT1("mphka sthn char const print");
        
    }
    
    Print2(Objects x){
       // PRINT1(x->GetValue().c_str());
        WordObject* number = static_cast<WordObject*>(&x);
        char const* tmp=number->GetValue().c_str();
        PRINT1(tmp);
        
        turtle_draw_label(tmp);
        PRINT1("mphka sthn WordObject print");
    }
    
    Print2(){}
};


bool operator== (Objects object ,  Objects x){
    if(object.getId() == "word" && x.getId() == "word"){
        WordObject* word = static_cast<WordObject*>(&object);
        WordObject* word1 = static_cast<WordObject*>(&x);
        
        return word->GetValue() == word1->GetValue();
    }else if(object.getId() == "number"&&x.getId() == "number"){
        NumberObject* number = static_cast<NumberObject*>(&object);
        NumberObject* number1 = static_cast<NumberObject*>(&x);
        
        return number->GetValue() == number1->GetValue();
    }else if(object.getId() == "boolean"&&x.getId() == "boolean"){
        BooleanObject* boolean = static_cast<BooleanObject*>(&object);
        BooleanObject* boolean1 = static_cast<BooleanObject*>(&x);
        
        return boolean->GetValue() == boolean1->GetValue();
    }
    
    PRINT1("den ekanes kalh sugrish");
    exit(3);
    return false;
}

bool operator>= (Objects object ,  Objects x){
    if(object.getId() == "word" && x.getId() == "word"){
        WordObject* word = static_cast<WordObject*>(&object);
        WordObject* word1 = static_cast<WordObject*>(&x);
        
        return word->GetValue() >= word1->GetValue();
    }else if(object.getId() == "number"&&x.getId() == "number"){
        NumberObject* number = static_cast<NumberObject*>(&object);
        NumberObject* number1 = static_cast<NumberObject*>(&x);
        
        return number->GetValue() >= number1->GetValue();
    }else if(object.getId() == "boolean"&&x.getId() == "boolean"){
        BooleanObject* boolean = static_cast<BooleanObject*>(&object);
        BooleanObject* boolean1 = static_cast<BooleanObject*>(&x);
        
        return boolean->GetValue() >= boolean1->GetValue();
    }
    
    PRINT1("den ekanes kalh sugrish");
    exit(3);
    return false;
}

bool operator<= (Objects object ,  Objects x){
    if(object.getId() == "word" && x.getId() == "word"){
        WordObject* word = static_cast<WordObject*>(&object);
        WordObject* word1 = static_cast<WordObject*>(&x);
        
        return word->GetValue() <= word1->GetValue();
    }else if(object.getId() == "number"&&x.getId() == "number"){
        NumberObject* number = static_cast<NumberObject*>(&object);
        NumberObject* number1 = static_cast<NumberObject*>(&x);
        
        return number->GetValue() <= number1->GetValue();
    }else if(object.getId() == "boolean"&&x.getId() == "boolean"){
        BooleanObject* boolean = static_cast<BooleanObject*>(&object);
        BooleanObject* boolean1 = static_cast<BooleanObject*>(&x);
        
        return boolean->GetValue() <= boolean1->GetValue();
    }
    
    PRINT1("den ekanes kalh sugrish");
    exit(3);
    return false;
}

bool operator!= (Objects object ,  Objects x){
    if(object.getId() == "word" && x.getId() == "word"){
        WordObject* word = static_cast<WordObject*>(&object);
        WordObject* word1 = static_cast<WordObject*>(&x);
        
        return word->GetValue() != word1->GetValue();
    }else if(object.getId() == "number"&&x.getId() == "number"){
        NumberObject* number = static_cast<NumberObject*>(&object);
        NumberObject* number1 = static_cast<NumberObject*>(&x);
        
        return number->GetValue() != number1->GetValue();
    }else if(object.getId() == "boolean"&&x.getId() == "boolean"){
        BooleanObject* boolean = static_cast<BooleanObject*>(&object);
        BooleanObject* boolean1 = static_cast<BooleanObject*>(&x);
        
        return boolean->GetValue() != boolean1->GetValue();
    }
    
    PRINT1("den ekanes kalh sugrish");
    exit(3);
    return false;
}


bool operator> (Objects object ,  Objects x){
    if(object.getId() == "word" && x.getId() == "word"){
        WordObject* word = static_cast<WordObject*>(&object);
        WordObject* word1 = static_cast<WordObject*>(&x);
        
        return word->GetValue() > word1->GetValue();
    }else if(object.getId() == "number"&&x.getId() == "number"){
        NumberObject* number = static_cast<NumberObject*>(&object);
        NumberObject* number1 = static_cast<NumberObject*>(&x);
        
        return number->GetValue() > number1->GetValue();
    }else if(object.getId() == "boolean"&&x.getId() == "boolean"){
        BooleanObject* boolean = static_cast<BooleanObject*>(&object);
        BooleanObject* boolean1 = static_cast<BooleanObject*>(&x);
        
        return boolean->GetValue() > boolean1->GetValue();
    }
    
    PRINT1("den ekanes kalh sugrish");
    exit(3);
    return false;
}


bool operator< (Objects object ,  Objects x){
    if(object.getId() == "word" && x.getId() == "word"){
        WordObject* word = static_cast<WordObject*>(&object);
        WordObject* word1 = static_cast<WordObject*>(&x);
        
        return word->GetValue() < word1->GetValue();
    }else if(object.getId() == "number"&&x.getId() == "number"){
        NumberObject* number = static_cast<NumberObject*>(&object);
        NumberObject* number1 = static_cast<NumberObject*>(&x);
        
        return number->GetValue() < number1->GetValue();
    }else if(object.getId() == "boolean"&&x.getId() == "boolean"){
        BooleanObject* boolean = static_cast<BooleanObject*>(&object);
        BooleanObject* boolean1 = static_cast<BooleanObject*>(&x);
        
        return boolean->GetValue() < boolean1->GetValue();
    }
    
    PRINT1("den ekanes kalh sugrish");
    exit(3);
    return false;
}




NumberObject operator+ (Objects object , Objects x){
    
    NumberObject* number = static_cast<NumberObject*>(&object);
    NumberObject* number1 = static_cast<NumberObject*>(&x);
    NumberObject x3=*(new NumberObject(number->GetValue()+number1->GetValue()) );
    return x3;
    
}






NumberObject operator- (Objects object , Objects x){

    NumberObject* number = static_cast<NumberObject*>(&object);
    NumberObject* number1 = static_cast<NumberObject*>(&x);
    NumberObject x3=*(new NumberObject(number->GetValue()-number1->GetValue()) );
    return x3;

}







NumberObject operator* (Objects object , Objects x){
    
    NumberObject* number = static_cast<NumberObject*>(&object);
    NumberObject* number1 = static_cast<NumberObject*>(&x);
    NumberObject x3=*(new NumberObject(number->GetValue()*number1->GetValue()) );
    return x3;
    
}



NumberObject operator/ (Objects object , Objects x){
    
    NumberObject* number = static_cast<NumberObject*>(&object);
    NumberObject* number1 = static_cast<NumberObject*>(&x);
    NumberObject x3=*(new NumberObject(number->GetValue()/number1->GetValue()) );
    return x3;
    
}





NumberObject operator% (Objects object , Objects x){
    
    
    NumberObject* number = static_cast<NumberObject*>(&object);
    int tmp =number->GetValue();
    NumberObject* number1 = static_cast<NumberObject*>(&x);
    int tmp1 =number1->GetValue();
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
        setList((vec.vec));
    }

    
};



//ArrayObject  operator,(vector<Objects> a , vector<Objects>  b){
//
//	for (int i = 0; i < b.size(); i++) {
//		a.push_back(b[i]);
//	}
//
//
//    return a;
//}


vector<Objects>  operator,(ListObject c , vector<Objects>  myvec){
    myvec.push_back(c);
    return myvec;
}

vector<Objects>  operator,(vector<Objects>  myvec , ListObject c){
    myvec.push_back(c);
    return myvec;
}

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
    return output;
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
    return output;
}



Objects  geter(vector<int>  a, Objects b) {
    Objects obj;
    ArrayObject* array = static_cast<ArrayObject*>(&b);
    
    
    if(a.size() == 1) {
		vector<Objects> temp;
        temp = array->GetValue();
        Objects tempObject = temp[a[0] - 1];
        return tempObject;
    }
    
    
    else {
        cout << a[0] << endl;
        vector<Objects> temp;
        temp = array->GetValue();
        Objects tempObject = temp[a[0] - 1];
        
        if(tempObject.getId() != "array") {
            cout << "Trying to Index non array element" << endl;
            exit(3);
        }
        
        a.erase(a.begin());
        cout << a[0] << endl;
        return geter(a , tempObject);
    }
}
//template<typename T, typename T1>
//Objects   geter(T a, T1 b) {
//    Objects obj;
//    ArrayObject* array = static_cast<ArrayObject*>(&b);
//    PRINT1(a);
//    PRINT1(array->GetValue().size());
//
//    for(int i=0;i<array->GetValue().size();i++){
//        //cout<<"for"<<endl;
//
//        if(i==a-1){
//            //cout<<"mphka"<<endl;
//            //NumberObject* number = static_cast<NumberObject*>(&array->GetValue());
//           // cout<<array->GetValue()<<endl;
//            return array->GetValue()[i];
//        }
//    }
//    return obj;
//}


void  seter(int  a, Objects &b, Objects c) {
    Objects obj;
    ArrayObject* array = static_cast<ArrayObject*>(&b);
    for(int i=0;i<array->GetValue().size();i++){
        if(i==a-1){

            vector<Objects> vec = array->GetValue();
                    Objects::CopyObject(&vec[i] , c);
                    array->setValue(vec);
        
        }
    }    
}


void  seter(vector<int>  a, Objects &b, Objects c) {
    Objects obj;
    ArrayObject* array = static_cast<ArrayObject*>(&b);
    int firstIndex = a[0] - 1;
    int secondIndex = a[1] -1;
    Objects vecBig = array->GetValue()[firstIndex];

    if(vecBig.getId() == "array"){
            ArrayObject* arraySecond = static_cast<ArrayObject*>(&vecBig);

    for(int i=0;i<array->GetValue().size();i++){
        if(i==a[1]-1){

                    vector<Objects> vec = arraySecond->GetValue();
                    Objects::CopyObject(&vec[secondIndex] , c);
                    arraySecond->setValue(vec);
                    vector<Objects> anothervec = array->GetValue();
                    Objects::CopyObject(&anothervec[firstIndex] , *arraySecond);
                    array->setValue(anothervec);
        
            }
        }  
    }else{
        cout << "Not an array!" << endl;
    }
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



class Show {
    public:
    Objects _x;
    Show(){

    }


    Show(Objects x){
        _x = x;
        cout << x << endl;

    }
    
    Show(int x){
        cout << x << endl;
        
    }
};


class SetXY2 {
public:
	SetXY2() {}

	SetXY2(ListObject list) {

		if (list.GetValue().size() != 2) {
			cout << "Exactly 2 arguments expected!" << endl;
			exit(3);
		}


		if (list.GetValue()[0].getId() != "number" || list.GetValue()[1].getId() != "number") {
			cout << "Invalid arguments" << endl;
			exit(3);
		}


		NumberObject* number1;
		NumberObject* number2;

		vector<Objects> vec = list.GetValue();
		number1 = static_cast<NumberObject*>(&vec[0]);
		number2 = static_cast<NumberObject*>(&vec[1]);

		turtle_go_to_position(number1->GetValue(), number2->GetValue());

	}

};



class SetPenColor2 {
public:
	SetPenColor2() {}

	SetPenColor2(ListObject list) {

				if (list.GetValue().size() != 3) {
			cout << "Exactly 3 arguments expected!" << endl;
			exit(3);
		}


		if (list.GetValue()[0].getId() != "number" ||
			list.GetValue()[1].getId() != "number" ||
			list.GetValue()[2].getId() != "number") {

			cout << "Invalid arguments" << endl;
			exit(3);
		}


		NumberObject* number1;
		NumberObject* number2;
		NumberObject* number3;

		vector<Objects> vec = list.GetValue();
		number1 = static_cast<NumberObject*>(&vec[0]);
		number2 = static_cast<NumberObject*>(&vec[1]);
		number3 = static_cast<NumberObject*>(&vec[2]);

		set_pen_color(number1->GetValue(), number2->GetValue() , number3->GetValue());
	}
	
};



class SetScreenColor2 {
public:
	SetScreenColor2() {}

	SetScreenColor2(ListObject list) {

		if (list.GetValue().size() != 3) {
			cout << "Exactly 3 arguments expected!" << endl;
			exit(3);
		}


		if (list.GetValue()[0].getId() != "number" ||
			list.GetValue()[1].getId() != "number" ||
			list.GetValue()[2].getId() != "number") {

			cout << "Invalid arguments" << endl;
			exit(3);
		}


		NumberObject* number1;
		NumberObject* number2;
		NumberObject* number3;

		vector<Objects> vec = list.GetValue();
		number1 = static_cast<NumberObject*>(&vec[0]);
		number2 = static_cast<NumberObject*>(&vec[1]);
		number3 = static_cast<NumberObject*>(&vec[2]);

		set_screen_color(number1->GetValue(), number2->GetValue() , number3->GetValue());

	}

};

ostream& operator<< (ostream& output , Show x){
            output << x._x << endl;
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


vector<Objects> subvec;

template<typename T>
Objects sub(T v) {
    NumberObject u;
    for(int i=0;i<subvec.size();i++){
        if(subvec.size()==1){
            
            u=subvec[i];
            break;
        }else if(i==0){

            u=subvec[i]-subvec[i+1];
            i++;
        }else{
            
            u=u-subvec[i];
        }
        
    }
    
    u=u-v;
    subvec.clear();
    
    return u;
    
}

template<typename T, typename... Args>
Objects sub(T first, Args... args) {
    subvec.push_back(first);
    return  sub(args...);
}


template<typename T>
T mul(T v) {
    return v;
}

template<typename T, typename... Args>
T mul(T first, Args... args) {
    return first * mul(args...);
}


vector<Objects>divvec;
template<typename T>
Objects divi(T v) {
    NumberObject u;
    for(int i=0;i<divvec.size();i++){
        if(divvec.size()==1){
            
            u=divvec[i];
            break;
        }else if(i==0){
            
            u=divvec[i]/divvec[i+1];
            i++;
        }else{
            
            u=u/divvec[i];
        }
        
    }
    
    u=u/v;
    divvec.clear();
    return u;
    
}


template<typename T, typename... Args>
Objects divi(T first, Args... args) {
    divvec.push_back(first);
    return  divi(args...);
}

vector<Objects>modvec;
template<typename T>
Objects mod(T v) {
    NumberObject u;
    for(int i=0;i<modvec.size();i++){
        if(modvec.size()==1){
            
            u=modvec[i];
            break;
        }else if(i==0){
            
            u=modvec[i]%modvec[i+1];
            i++;
        }else{
            
            u=u%modvec[i];
        }
        
    }
    
    u=u%v;
    modvec.clear();
    
    return u;
    
}

template<typename T, typename... Args>
Objects mod(T first, Args... args) {
    modvec.push_back(first);
    return  mod(args...);
}


