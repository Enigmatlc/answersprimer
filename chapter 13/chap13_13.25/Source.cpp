//Exercise 13.25: Assume we want to define a version of StrBlob that acts
//like a value.Also assume that we want to continue to use a shared_ptr so
//that our StrBlobPtr class can still use a weak_ptr to the vector.Your
//revised class will need a copy constructor and copy - assignment operator but
//will not need a destructor.Explain what the copy constructor and copy assignment
//operators must do.Explain why the class does not need a
//destructor. because we must define what will happen when objects are copied instead of increasing the user count of the shared pointers we will allocate new memory in the heap to store the information inside the shared pointer and we need the copy assigment operator to do this. We dont need a destructor because the memory being allocated in the stack will be handled by the shared pointers.