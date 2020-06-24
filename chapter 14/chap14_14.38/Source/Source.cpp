// Exercise 14.38: Write a class that tests whether the length of a given
// string matches a given bound. Use that object to write a program to report
// how many words in an input file are of sizes 1 through 10 inclusive.

#include"C:\Users\abel8\Documents\GitHub\answersprimer\chapter 14\chap14_14.38\Header\StringBound.h"
#include<vector>
#include<algorithm>
#include<string>
using std::string;      using std::vector;
#include<iostream>
using std::cout;        using std::endl;
using std::count_if;
int main(){
    vector<string> vec{"test","test2","very long?","um nice"};
    StringBound item;
    item.lower_bound=1;
    item.upper_bound=10;
    while(item.upper_bound != item.upper_bound+1){
    int cnt=count_if(vec.begin(),vec.end(),item);
    if(cnt)
        cout<<"Number of strings os size "<<item.lower_bound<<" :"<< cnt << endl;
    ++item.lower_bound;
    }
}