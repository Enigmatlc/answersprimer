#include"Quote.h"


double print_total(std::iostream& os,const Quote& item,size_t n){
    double ret=item.net_price(n);//can call both net_price it depends on what object is passed to item. This is because of Dynamic binding allows us to intarchanged between class types when a member i declared as virtual in the base class
    os<<"ISBN: "<<item.isbn()<<" # Sold: "<<n<<" total due: "<<ret<<std::endl;
}