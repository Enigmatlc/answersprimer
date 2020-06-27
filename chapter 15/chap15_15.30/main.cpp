#include"Basket.h"

using std::shared_ptr;

int main(){
    Basket bask;
    bask.add_item(Quote("0-201-82470-1", 50));
    bask.add_item(Quote("0-201-82470-1", 50));
    bask.add_item(Quote("0-201-82470-1", 50));

    bask.add_item(Bulk_quote("0-344-87563-1", 10,25,.35));
    // calls the version defined by Quote; prints 562.5, i.e., 15 * $50 less the discount
    bask.total_receipt(std::cout);

}
// OUTPUT

// ISBN: 0-201-82470-1 # Sold: 3 total due: 150
// Total Sale: 150