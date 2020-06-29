// Exercise 16.6: How do you think the library begin and end functions that
// take an array argument work? Define your own versions of these functions.
//it uses a nonstype parameter then it returns the array pointer plus the value stored in the nontype
#include<iostream>
template <unsigned T>
  int* begin_t (int (&arr)[T]){
      return arr;
  }
template <unsigned T>
  int* end_t (int(&arr)[T]){
      return arr + T;
  }
int main () {
  int foo[] = {10,20,30,40,50};


  // iterate bar: print contents:
  std::cout << "bar contains:";
  for (auto it = begin_t(foo); it!= end_t(foo); ++it)
    std::cout << ' ' << *it;
  std::cout << '\n';

}