Exercise 15.32: What happens when an object of type Query is copied,
moved, assigned, and destroyed?
copy: the data from the object is copied into a new object using the synthesized copy constructor
moved: move constructor moves the items from the object to the other and the shared_pointer will be moved to the other object.
assigned: the assignment operator will be called and all items will be copied to the other object.
move assigned: will move all items from to the other object and the shared_ptr will be moved

all these operations use the synthesized version of operators and constructors.

destroyed: all items will be destroyed and the member count on the shared pointer will go down by one.