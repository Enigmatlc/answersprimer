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
    virtual void debug(){
        std::cout<<"bookNo: "<<bookNo<<" Price: "<<price<<std::endl;
    }
    virtual ~Quote()=default;//virtual destructor will be explained in 15.7.1

private:
    std::string bookNo;

protected:
    double price = 0.0;
};
double print_total(std::ostream& os,const Quote& item,size_t n){
    double ret=item.net_price(n);//can call both net_price it depends on what object is passed to item. This is because of Dynamic binding allows us to intarchanged between class types when a member i declared as virtual in the base class
    os<<"ISBN: "<<item.isbn()<<" # Sold: "<<n<<" total due: "<<ret<<std::endl;
    return ret;
}
class Disc_quote: public Quote
{
public:
    Disc_quote()=default;
    Disc_quote(const std::string& book,double price,std::size_t qty,double disc):Quote(book,price),quantity(qty),discount(disc){}
    //pure virtual definition of net_price to avoid definitions of Disc_quote objects and the class becomes and abstract base class when it includes a pure virtual function
    double net_price(std::size_t) const=0;
protected:
    std::size_t quantity = 0;
    double discount = 0.0;
};

class Bulk_quote:public Disc_quote
{
public:
    Bulk_quote()=default;
    Bulk_quote(const std::string& book,double price,std::size_t qty,double disc):Disc_quote(book,price,qty,disc){}

    //declaration of net_price
    double net_price(std::size_t cnt) const override{
        if(cnt >= quantity)
            return cnt * (1-discount)*price;
        else
        {
            return cnt*price;
        }
        
    }
};
//update class to use Disc_quote
class Normal_disc: public Disc_quote{//Quote is the base class for Bulk_quote
public:
    //default constructor
    Normal_disc()=default;
    //initialacing constructor
    Normal_disc(const std::string& book,double price,std::size_t qty,double disc):Disc_quote(book,price,qty,disc){}
    //overrides the base version in order to implement the bulk purchase discount policy
    double net_price(std::size_t cnt)const override{
        if(cnt <= quantity)
            return cnt * (1-discount)*price;
        else
        {
            return cnt*price;
        }
        
    }

};
