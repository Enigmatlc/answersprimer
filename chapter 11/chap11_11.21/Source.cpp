//Exercise 11.21: Assuming word_count is a map from string to size_t
//and word is a string, explain the following loop :

//while (cin >> word)
	//++word_count.insert({ word, 0 }).first->second;

//it inserts the pair {word,0} into word_count then it dereferences the pair returned by insert to first then it  accesses second to increase it by one.