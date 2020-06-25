// Exercise 15.7: Define a class that implements a limited discount strategy,
// which applies a discount to books purchased up to a given limit. If the
// number of copies exceeds that limit, the normal price applies to those
// purchased beyond the limit.
#include"Bulk_quote.h"
#include<iostream>

using std::iostream;     using std::cout;
using std::endl;


int main(){
    Bulk_quote item2("c++ primer",25.00,5,0.20);
    cout<<"under discount quantity"<<endl;
    print_total(cout,item2,3);
    cout<<"over discount quantity"<<endl;
    print_total(cout,item2,9);

}