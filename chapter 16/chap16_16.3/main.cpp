Exercise 16.3: Call your compare function on two Sales_data objects to
see how your compiler handles errors during instantiation.#include<iostream>
#include"Sales_data.h"
template<typename T>
int compare(const T& v1,const T& v2){
    if(v1<v2)return -1;
    if(v2<v1)return 1;
    return 0;
}
int main(){
    Sales_data item("tetrer",4,23);
    Sales_data item2("errs",5,23);

    int num = compare(item,item2);
    std::cout<<num<<std::endl;
}
// main.cpp:6:10: error: no match for 'operator<' (operand types are 'const Sales_data' and 'const Sales_data')
// main.cpp:7:10: error: no match for 'operator<' (operand types are 'const Sales_data' and 'const Sales_data')
