//Exercise 12.16: Compilers don’t always give easy - to - understand error
//messages if we attempt to copy or assign a unique_ptr.Write a program
//that contains these errors to see how your compiler diagnoses them.
#include<memory>
using std::unique_ptr;
int main() {
	//unique_ptr<int>ptr(new int);
	//unique_ptr<int>ptr2 = ptr;
	//unique_ptr<int>ptr3(ptr);



//"std::unique_ptr<_Ty, _Dx>::unique_ptr(const std::unique_ptr<_Ty, _Dx> &) [with _Ty=int, _Dx=std::default_delete<int>]" (declared at line 1916 of "C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.26.28801\include\memory") cannot be referenced -- it is a deleted function

}