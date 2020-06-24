// Exercise 14.43: Using library function objects, determine whether a given
// int value is divisible by any element in a container of ints.

#include<iostream>
#include<vector>
#include<functional>
#include<algorithm>

using std::cout;        using std::placeholders::_1;
using std::vector;      using std::find_if;

int main(){
    vector<int> nums{3,6,7,8,9};
    cout<<"Enter a number to divide:"<<std::endl;
    int num;
    std::cin>>num;
    std::modulus<int> mod;
    auto func=[mod,num](int i){return mod(num,i)==0;};
    auto iter=find_if(nums.begin(),nums.end(),func);
    if(iter==nums.end())
        cout<<"No numbers can divide "<<num;
    else
    {
        cout<<num<<" can be divide by "<<*iter;
    }
    
}