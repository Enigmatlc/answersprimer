//Exercise 12.13: What happens if we execute the following code ?

//auto sp = make_shared<int>(); creates a new shared_ptr that hold an int that is value default initialize

//auto p = sp.get(); creates a regular pointer that points to the same object as sp.

//delete p; deletes p. we are not supposed to delete pointers that use .get() from shared_ptr's this will make sp a dangling pointer and we attempt to use sp it will be undefined.