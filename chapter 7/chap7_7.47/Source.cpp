//Exercise 7.47: Explain whether the Sales_data constructor that takes a
//string should be explicit.What are the benefits of making the
//constructor explicit ? What are the drawbacks ?

//One negative things about non explicit constructors that only take one argument is that we don't have access to the object when implicitly passing an argument.
//it can be problematic if the person sends the wrong information since we cant change it once its send to the class.
//
//one benefit of making it explicit is that it forces people to use the class how its meant to be used unless they force it to use implicit conversion.