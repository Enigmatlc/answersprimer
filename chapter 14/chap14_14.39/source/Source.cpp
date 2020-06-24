// Exercise 14.39: Revise the previous program to report the count of words
// that are sizes 1 through 9 and 10 or more.

#include"C:\Users\abel8\Documents\GitHub\answersprimer\chapter 14\chap14_14.39\header\StringBound.h"
#include<vector>
#include<algorithm>
#include<string>
#include<functional>
using std::bind;        using std::placeholders::_1;
using std::string;      using std::vector;
#include<iostream>
using std::cout;        using std::endl;
using std::count_if;
int main(){
    vector<string> vec{"testderererserwr","test2","very long?","um nice very long string that i made up"};
    size_t low=0;
    size_t up=0;
    StringBound item(1,9);
    up= count_if(vec.begin(),vec.end(),bind(item,_1,10));
    low = count_if(vec.begin(),vec.end(),item);
    cout<<"sizes 1 through 9: "<<low<<endl;
    cout<<"sizes 10 and above: "<<up<<endl;

}