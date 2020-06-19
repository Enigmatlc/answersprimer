//Exercise 13.7: What happens when we assign one StrBlob to another ?
//What about StrBlobPtrs ?
//it will achieve the same thing as if we passed the object to the copy constructor the shared pointers members will increase by one and the weak pointers will be pointing to the same objects.