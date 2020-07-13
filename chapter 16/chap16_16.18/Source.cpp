//Exercise 16.18: Explain each of the following function template declarations
//and identify whether any are illegal.Correct each error that you find.

//(a) template <typename T, U, typename V> void f1(T, U, V); illegal U does not have a type typename U
//(b) template <typename T> T f2(int& T); illegal declaring a type of a type. T& i
//(c) inline template <typename T> T foo(T, unsigned int*); legal declaration
//(d) template <typename T> f4(T, T);illegal no return type included declaration
//(e) typedef char Ctype;
//template <typename Ctype> Ctype f5(Ctype a); legal but might cause some confusion sicne the name being used is not the one in the typedef but the one in the parameter