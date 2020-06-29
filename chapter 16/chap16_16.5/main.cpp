// Exercise 16.5: Write a template version of the print function from § 6.2.4
// (p. 217) that takes a reference to an array and can handle arrays of any size
// // and any element type.
// void print(int (&arr)[10]){
//     for(auto elem: arr)
//         cout<<elem<<endl;
// }
#include<iostream>

template<unsigned T>
int print(int (&arr)[T]){
    for(auto elem: arr)
        std::cout<<elem<<std::endl;
}