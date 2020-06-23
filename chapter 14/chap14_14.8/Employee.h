#include<string>
#include<iostream>
std::istream& read(std::istream&, Employee&);
class Employee {
	friend std::istream& operator>>(std::istream& is, Employee& item);
	friend std::ostream& operator>>(std::ostream& is, Employee& item);
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
std::istream& operator>>(std::istream& is, Employee& item) {
	is >> item.name >> item.age >> item.h_pay >> item.w_hours >> item.position;
	return is;
}
std::ostream& operator>>(std::ostream& os, Employee& item) {
	os << item.name << item.age << item.h_pay << item.w_hours << item.position;
	return os;
}
