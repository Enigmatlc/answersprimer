#include"Disc_quote.h"
#include<iostream>

using std::iostream;     using std::cout;
using std::endl;


int main(){
    Bulk_quote item("c++ primer",25.00,5,0.20);
    cout<<"under discount quantity"<<endl;
    print_total(cout,item,3);
    cout<<"over discount quantity"<<endl;
    print_total(cout,item,9);
    Normal_disc item2("c++ better primer",50.00,4,0.50);
    cout<<"under normal discount "<<endl;
    print_total(cout,item2,3);
    cout<<"over normal discount"<<endl;
    print_total(cout,item2,5);


}

//output 
// under discount quantity
// ISBN: c++ primer # Sold: 3 total due: 75
// over discount quantity
// ISBN: c++ primer # Sold: 9 total due: 180
// under normal discount 
// ISBN: c++ better primer # Sold: 3 total due: 75
// over normal discount
// ISBN: c++ better primer # Sold: 5 total due: 250