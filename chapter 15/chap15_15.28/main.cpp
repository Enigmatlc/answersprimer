#include"Bulk_quote.h"
#include<vector>
#include<memory>
#include<iostream>
using std::vector;  using std::make_shared;
using std::shared_ptr;

int main(){
vector<shared_ptr<Quote>> basket;
    basket.push_back(make_shared<Bulk_quote>("0-201-34343-8", 50, 10, .25));
    basket.push_back(make_shared<Bulk_quote>("0-201-54848-8", 50, 20, .50));
    // calls the version defined by Quote; prints 562.5, i.e., 15 * $50 less the discount
    std::cout << basket[0]->net_price(15) << std::endl;
    std::cout << basket[1]->net_price(15) << std::endl;
}