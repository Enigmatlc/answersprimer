//Exercise 13.4: Assuming Point is a class type with a public copy
//constructor, identify each use of the copy constructor in this program
//fragment :

//Point global;
//Point foo_bar(Point arg) uses copy constructor because its non reference type
//{
//	Point local = arg, * heap = new Point(global); uses copy constructor to initialize the members in local with the members in arg, creates a dynamic object and used copy constructor to initialize it
//	*heap = local; 
//	Point pa[4] = { local, *heap };copy constructor is used to initialize array with braced list
//	return *heap; copy constructor is used when a function returns a non reference return type
//}