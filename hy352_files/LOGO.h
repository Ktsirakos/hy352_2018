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
#define MINUS min
#define PRODUCT mul
#define QUOTIENT divi
#define MODULO mod


#define REPEAT ;for(int i_ = 2 ; i_<
#define WHILE i_;){} int i_=1;while(i_++ &&
#define TIMES +2;i_++
#define REPCOUNT  i_-1









#define LIST \


template<typename T>
bool and_comparer(T a) {
    // In real-world code, we wouldn't compare floating point values like
    // this. It would make sense to specialize this function for floating
    // point types to use approximate comparison.
    return a == true;
}

template<typename T, typename... Args>
bool and_comparer(T a, Args... args) {
    return a ==true && and_comparer(args...);
}



template<typename T>
bool or_comparer(T a) {
    // In real-world code, we wouldn't compare floating point values like
    // this. It would make sense to specialize this function for floating
    // point types to use approximate comparison.
    return a ==true;
}

template<typename T, typename... Args>
bool or_comparer(T a, Args... args) {
    return a == true || or_comparer(args...);
}


template<typename T>
bool not_comparer(T a) {
    // In real-world code, we wouldn't compare floating point values like
    // this. It would make sense to specialize this function for floating
    // point types to use approximate comparison.
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


//template<typename T>
//T div(T v) {
//    return v;
//}
//
//template<typename T, typename... Args>
//T div(T first, Args... args) {
//    return first / div(args...);
//}
//
//template<typename T>
//T mod(T v) {
//    return v;
//}
//
//template<typename T, typename... Args>
//T mod(T first, Args... args) {
//    return first % mod(args...);
//}


int divi(int x,int y){
    int k=x/y;
    return k;

}

int mod(int x,int y){
    int k=x%y;
    return k;
    
}


int min(int x){
    int k=-x;
    //std::cout << k << std::endl;
    return k;
}

