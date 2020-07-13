//Exercise 16.2: Write and test your own versions of the compare functions.
#include<iostream>
template<typename T>
int compare(const T& v1,const T& v2){
    if(v1<v2)return -1;
    if(v2<v1)return 1;
    return 0;
}
int main(){
    int InsideMain=0;
    int num = compare(0,1);
    std::cout<<num<<std::endl;
}