// Exercise 15.23: Assuming class D1 on page 620 had intended to override
// its inherited fcn function, how would you fix that class? Assuming you fixed
// the class so that fcn matched the definition in Base, how would the calls in
// that section be resolved?
#include<iostream>
class Base {
public:
virtual int fcn(){std::cout<<"BASE::FNC()"<<std::endl;}
virtual void f2(){std::cout<<"BASE::f2()"<<std::endl;}
};
class D1 : public Base {
public:
// hides fcn in the base; this fcn is not virtual
// D1 inherits the definition of Base::fcn()
int fcn(int){std::cout<<"D1::FNC()"<<std::endl;} // parameter list differs from fcn in Base
virtual void f2(){std::cout<<"D1::F2()"<<std::endl;}  // new virtual function that does not exist in Base
};
class D2 : public D1 {
public:
int fcn(){std::cout<<"D2::FNC()"<<std::endl;}  // nonvirtual function hides D1::fcn(int)
void f2(){std::cout<<"D2::F2()"<<std::endl;} // overrides virtual f2 from D1
};

int main(){
    Base bobj; D1 d1obj; D2 d2obj;
    Base *bp1 = &bobj, *bp2 = &d1obj, *bp3 = &d2obj;
    bp1->fcn(); // virtual call, will call Base::fcn at run time 
    bp2->fcn(); // virtual call, will call Base::fcn at run time
    bp3->fcn(); // virtual call, will call D2::fcn at run time
    D1 *d1p = &d1obj; D2 *d2p = &d2obj;
    bp2->f2(); // error: Base has no member named f2
    d1p->f2(); // virtual call, will call D1::f2() at run time
    d2p->f2(); // virtual call, will call D2::f2() at run time
}
//CALLS MADE IN ORDER

// BASE::FNC()
// BASE::FNC()
// D2::FNC()
// D1::F2()
// D1::F2()
// D2::F2()