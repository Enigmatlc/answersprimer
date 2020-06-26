// Exercise 15.19: Assume that each of the classes from page 612 and page
// 613 has a member function of the form:
// void memfcn(Base &b) { b = *this; }
// For each class, determine whether this function would be legal.

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
