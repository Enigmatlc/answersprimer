// Exercise 15.6: Test your print_total function from the exercises in §
// 15.2.1 (p. 595) by passing both Quote and Bulk_quote objects o that
// function.
#include"Bulk_quote.h"
#include<iostream>

using std::iostream;     using std::cout;
using std::endl;


int main(){
    Quote item("c++ primer",25.00);
    Bulk_quote item2("c++ primer",25.00,4,0.20);
    cout<<"Using a Quote object"<<endl;
    print_total(cout,item,6);
    cout<<"Using a Bulk_total object"<<endl;
    print_total(cout,item2,6);

}