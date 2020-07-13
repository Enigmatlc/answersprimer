//Exercise 16.26: Assuming NoDefault is a class that does not have a
//default constructor, can we explicitly instantiate vector<NoDefault> ? If
//not, why not?

#include<vector>
#include"Header.h"

using std::vector;
//template class vector<NoDefault>;//cant compile since it needs to know the size of No
//implicit instantiation
vector<NoDefault> vec;
//no instantiation needed for pointers
vector<NoDefault>* vec;
int main() {

}