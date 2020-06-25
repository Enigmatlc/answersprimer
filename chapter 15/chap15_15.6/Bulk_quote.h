#pragma once

#include"Quote.h"
#include<string>
#include<iostream>

class Bulk_quote: public Quote{//Quote is the base class for Bulk_quote
public:
    //default constructor
    Bulk_quote()=default;
    //initialacing constructor
    Bulk_quote(const std::string& book,double p,std::size_t qty,double disc):Quote(book,p),min_qty(qty),discount(disc){}
    //overrides the base version in order to implement the bulk purchase discount policy
    double net_price(std::size_t cnt)const{
        if(cnt >= min_qty)
            return cnt * (1-discount)*price;
        else
        {
            return cnt*price;
        }

    }
    
private:
//minimum purchase for the discount to apply
std::size_t min_qty=0;
//fractional discount to apply
double discount = 0.0;

};