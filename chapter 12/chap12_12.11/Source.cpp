//Exercise 12.11: What would happen if we called process as follows ?

//process(shared_ptr<int>(p.get())); it binds a new shared pointer to the pointer returned by get according to th book we should not assign .get() to operations that delete it therefore this code is not illegal since the compiler will probably not complain but its not recommended.