// Exercise 16.7: Write a constexpr template that returns the size of a given
// array.
#include<iostream>

template<unsigned T> 
 constexpr int ar_size(int (&arr)[T]){
     return T;
}

int main(){
    int foo[] = {10,20,30,40,50};
    std::cout<<ar_size(foo)<<std::endl;
}