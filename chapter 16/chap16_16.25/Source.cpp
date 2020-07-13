Exercise 16.25: Explain the meaning of these declarations :
it uses extern on the template to let the compiler know that there is already an instantiation of the class/function template somewhere else in the program.

extern template class vector <string>;
template class vector<Sales_data>;

// header.h

template<typename T>
void ReallyBigFunction()
{
    // Body
}

// source1.cpp

#include "header.h"
void something1()
{
    ReallyBigFunction<int>();
}

// source2.cpp

#include "header.h"
extern template void ReallyBigFunction<int>();//will use the instantiated version from source1.cpp
void something2()
{
    ReallyBigFunction<int>();
}