class Base {
public:
void pub_mem(); // public member
protected:
int prot_mem; // protected member
private:
char priv_mem; // private member
};
struct Pub_Derv : public Base {
// ok: derived classes can access protected members
int f() { return prot_mem; }
void memfcn(Base &b) { b = *this; }//legal

// error: private members are inaccessible to derived classes
//char g() { return priv_mem; }
};
struct Priv_Derv : private Base {
// private derivation doesn't affect access in the derived class
int f1() const { return prot_mem; }

void memfcn(Base &b) { b = *this; }

};
struct Prot_Derv: protected Base{
    int f2() {return prot_mem;}
    void memfcn(Base &b) { b = *this; }
};
struct Derived_from_Public : public Pub_Derv {
// ok: Base::prot_mem remains protected in Pub_Derv
int use_base() { return prot_mem; }
void memfcn(Base &b) { b = *this; }
};

struct Derived_from_Private : public Priv_Derv {
// error: Base::prot_mem is private in Priv_Derv
//int use_base() { return prot_mem; }
//void memfcn(Base &b) { b = *this; } illegal since priv_derv has private specifier for the base class we dont have access to objects of the base class
};



//Member functions and friends of classes derived from D may use the derived-to-base conversion if D inherits from B using either public or protected.
struct Derived_from_Protected : public Prot_Derv {
// error: Base::prot_mem is private in Priv_Derv
//int use_base() { return prot_mem; }
void memfcn(Base &b) { b = *this; } //legal since we still have protected access
};
int main(){

    Pub_Derv d1; //legal
    Priv_Derv d2;//legal
    Prot_Derv d3; //legal
    Derived_from_Public dd1;//legal
    Derived_from_Private dd2;//illegal
    Derived_from_Protected dd3;//legal

    Base *p = &d1; // d1 has type Pub_Derv legal

    //p = &d2; // d2 has type Priv_Derv //illegal:User code may use the derived-to-base conversion only if D inherits publicly from B. User code may not use the conversion if D inherits from B using either protected or private.

    //p = &d3; // d3 has type Prot_Derv//illegal: same reason as d2 we cant do a derived to base coversion if the access is private or protected.

    p = &dd1; // dd1 has type Derived_from_Public legal

    //p = &dd2; // dd2 has type Derived_from_Private //illegal: we are still deriving from priv_derv which is is using the private access specifier for inheritance

    //p = &dd3; // dd3 has type Derived_from_Protected // illegal: same reason as d3
}