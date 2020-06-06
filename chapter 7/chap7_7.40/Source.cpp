//Exercise 7.40: Choose one of the following abstractions(or an abstraction
//	of your own choosing).Determine what data are needed in the class.Provide
//	an appropriate set of constructors.Explain your decisions.
//	(a)Book
//	(b) Date
//	(c) Employee
//	(d) Vehicle
//	(e) Object
//	(f) Tree
#include<string>
#include<iostream>
std::istream& read(std::istream& , Employee& );
class Employee {
	friend std::istream& read(std::istream& is, Employee& item);
public:
	Employee() = default;
	Employee(std::istream& is) {
		read(is, *this);
	}
private:
	std::string name;
	int age;
	double h_pay;
	double w_hours;
	std::string position;
};
std::istream& read(std::istream& is, Employee& item) {
	is >> item.name >> item.age >> item.h_pay >> item.w_hours >> item.position;
	return is;
}