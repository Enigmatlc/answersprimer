// Exercise 15.3: Define your own versions of the Quote class and the
// print_total function.
#pragma once
#include<string>
#include<iostream>

class Quote{
public:
//constructors
Quote()=default;
Quote(const std::string& book,double sales_price):bookNo(book),price(sales_price){}
//returns bookNo
std::string isbn() const{return bookNo;}
//returns total sales price
virtual double net_price(std::size_t n) const{
    return n*price;
}
virtual ~Quote()=default;//virtual destructor will be explained in 15.7.1
private:
std::string bookNo;
protected:
double price = 0.0;
};
class Bulk_quote: public Quote{//Quote is the base class for Bulk_quote
public:
    double ne_price(std::size_t);
};
double print_total(std::iostream& os,const Quote& item,size_t n){
    double ret=item.net_price(n);//can call both net_price it depends on what object is passed to item. This is because of Dynamic binding allows us to intarchanged between class types when a member i declared as virtual in the base class
    os<<"ISBN: "<<item.isbn()<<" # Sold: "<<n<<" total due: "<<ret<<std::endl;
}