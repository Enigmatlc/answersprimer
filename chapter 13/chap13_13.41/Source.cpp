//Exercise 13.41: Why did we use postfix increment in the call to
//construct inside push_back ? What would happen if it used the prefix
//increment ? because first_free points to one past the last item by calling postfix we insert a new item into first_freee then increase the pointer by one to point one past the item that was inserted.