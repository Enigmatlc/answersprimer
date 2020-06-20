//Exercise 13.35: What would happen if Message used the synthesized
//versions of the copy - control members ?

//copy constructor: if we used the synthsized version we would not add the message to the folders that point to the argument 


//assignment operator: it wouln't call remove_from_folders before assigning the data to the members and it would cause a data leak.


//destructor:it wouldnt remove the data before deleting the objects