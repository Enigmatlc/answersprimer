//Exercise 12.10: Explain whether the following call to the process function
//defined on page 464 is correct.If not, how would you correct the call ?
//shared_ptr<int> p(new int(42));

//process(shared_ptr<int>(p));creates a temporary object that points to the same object as p but it will be deleted after the call is done. correct