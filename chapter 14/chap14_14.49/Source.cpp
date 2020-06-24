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
    explicit operator bool() const {
        if(!name.empty())
            return true;
        return false;
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