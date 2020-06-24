// Exercise 14.42: Using library function objects and adaptors, define an
// expression to
// (a) Count the number of values that are greater than 1024
// (b) Find the first string that is not equal to pooh
// (c) Multiply all values by 2
#include<functional>
#include<algorithm>
#include<vector>
using std::vector;
#include<string>
using std::string;  
#include<iostream>
using std::cout;               

using std::bind;
using std::placeholders::_1;        using std::count_if;
using std::find_if;                 using std::transform;


int main(){
    vector<int> nums{1,22,33,4444,1025,3090};
    vector<string>strs{"pooh","pooch","pooh"};

//a
size_t cnt=count_if(nums.begin(),nums.end(),bind(std::greater<int>(),_1,1024));
cout<<"Greater than 1024: "<<cnt<<"\n";
//b
auto iter=find_if(strs.begin(),strs.end(),bind(std::not_equal_to<string>(),_1,"pooh"));
cout<<"First string not equal to \"pooh\": "<<*iter<<"\n";
//c
//for_each(begin,end,func) doesn't work for this problem since the objects in the vector are not being changed.
transform(nums.begin(),nums.end(),nums.begin(),bind(std::multiplies<int>(),_1,2));
for(auto c: nums)
    cout<<c<<"  ";
}