//Exercise 13.10: What happens when a StrBlob object is destroyed ? What
//about a StrBlobPtr ?
//when a StrBlob is destroyed the shared_ptr destroctor is called to free the memory.
//when a strBlobPtr is destroyed the size_t is not destroyed because its a build in type and the weak_ptr is free from the memory that its pointing to but the shared_ptr still owns that memory.