#include<iostream>
#include<vector>
#include<map>
#include<functional>
using std::map;     using std::function;
using std::vector;  using std::cout;
using std::cin;     using std::endl;


int add(int i,int b){
    return i+b;
}
int subtract(int i,int b){
    return i-b;
}
int divide(int i, int b){
    return i/b;
}
int mod(int i,int b){
    return i%b;
}
int multiply(int i,int b){
    return i*b;
}

int main(){
map<char,function<int(int,int)>> binops={{'+',add},{'-',subtract},{'/',divide},{'%',mod},{'*',multiply}};
char c;
    cout<<"Enter two numbers two numbers and a binary operation:"<<endl;
    int a,b;
    cin>>a>>c>>b;

    cout<<"The result is of "<<a<<" "<<c<<" "<<b<<" is: "<<binops[c](a,b)<<endl;
}