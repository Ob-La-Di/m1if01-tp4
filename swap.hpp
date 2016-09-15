#include <cstring>

template<typename T>
void swap(T& a, T& b){
    T temp;
    temp = b;
    b=a;
    a=temp;
}

template <typename T>
T minminmin(T a, T b){
    return (a<b) ? a:b;
}

template <>
const char  * minminmin(const char * a, const char * b ){
    std::cout <<"template char * " << std::endl;
    return (strcmp(a,b) < 0) ? a : b;
}