//Exercise 9.39: Explain what the following program fragment does :

//vector<string> svec;
//svec.reserve(1024);
//string word;
//while (cin >> word)
//svec.push_back(word);
//svec.resize(svec.size() + svec.size() / 2);

//reserves space for 1024 items of the vector type
//
//reads words until cin is valid
//
//nothing changes since resize only applies to items that are alreay inside the vector.
//nothing changes since resize only applies to items that are alreay inside the vector.