//Exercise 13.24: What would happen if the version of HasPtr in this section
//didn’t define a destructor ? What if HasPtr didn’t define the copy
//constructor ?
//then the memory to wich ps points will not be deleted and if we decide not to define a copy constructor then the destructor would delete the memory from multiple objects since we would be copying the pointer instead of alocating new memory for the data.