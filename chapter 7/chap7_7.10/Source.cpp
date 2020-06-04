//Exercise 7.10: What does the condition in the following if statement do ?
//if (read(read(cin, data1), data2))

//it reads data1 into the cin stream
//
//then it returns cin from the first read
//
//it reads data2 using the object istream returned from the first read
//
//it uses the return from the second read to check if it was succesful.
