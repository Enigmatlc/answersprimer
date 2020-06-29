// Exercise 16.4: Write a template that acts like the library find algorithm.
// The function will need two template type parameters, one to represent the
// function’s iterator parameters and the other for the type of the value. Use
// your function to find a given value in a vector<int> and in a
// list<string>.
#include<vector>
#include<list>
#include<iostream>

using std::vector;      using std::list;

template<typename T,typename Y>
 T find_template(const T begin,const T end,const Y VAL){
    for (auto i = begin; i != end; ++i)
    {
        if(*i == VAL)
            return i;
        
    }
    return end;
}
int main(){
    vector<int> vec{1,2,3,4,5,6,7};
    list<int> li{1,2,3,4,5,6,7,8};
    auto iter = find_template(vec.begin(),vec.end(),5);
    std::cout<<*iter<<std::endl;
    auto iter2 = find_template(li.begin(),li.end(),8);
    std::cout<<*iter2<<std::endl;

}