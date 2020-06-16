//Exercise 12.12: Using the declarations of p and sp explain each of the

//following calls to process.If the call is legal, explain what it does.If the call
//is illegal, explain why :

//auto p = new int();
//auto sp = make_shared<int>();

//(a)process(sp); legal calls process with a shared_ptr and it increases user_count by one while the function is executed.
//(b)process(new int());  illegal creates a new int initialize to 0 but process doesn't accept regular pointers.
//(c)process(p); illegal same as above but this time is not temporary.
//(d)process(shared_ptr<int>(p)); legal: creates a temporary shared pointer to hold p. the memory will be freed after the call is done and p will be a dangling pointer.