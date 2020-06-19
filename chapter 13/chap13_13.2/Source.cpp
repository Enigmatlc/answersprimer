//Exercise 13.2: Explain why the following declaration is illegal :

//Sales_data::Sales_data(Sales_data rhs);

//because the sales_data parameter is not a reference and it will need a copy constructor to initialize the call and the call will be going for ever since theres to constructor to handle copy initialization for the class object.