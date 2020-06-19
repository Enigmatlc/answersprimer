//Exercise 13.3: What happens when we copy a StrBlob ? What about
//StrBlobPtrs ?
//when we copy a StrBlob object the shared_ptr is copied into the new object and the user count increases by 1 there fore there will be two shared pointers to the same object.
//
//for the StrBlobPtrs it will copy initialize the pointer in the class but the user count will not increase and it will point to that object while it exist.

// weak_ptr::operator= example
#include <iostream>
#include <memory>

int main() {
    std::shared_ptr<int> sp1, sp2, sp3;
    std::weak_ptr<int> wp, wp2;
    // sharing group:
    // --------------
    sp1 = std::make_shared<int>(10);    // sp1
    wp = sp1;                            // sp1, wp
    wp2 = wp;
    sp2 = wp.lock();                     // sp1, wp, sp2
    sp1.reset();                         //      wp, sp2
    sp3 = wp2.lock();
    sp1 = wp.lock();                     // sp1, wp, sp2

    std::cout << "*sp1: " << *sp1 << '\n';
    std::cout << "*sp2: " << *sp2 << '\n';
    std::cout << "*sp3: " << *sp3 << '\n';

    return 0;
}