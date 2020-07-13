<<<<<<< HEAD
#include<iostream>

class PrivateClass
{
public:
	static PrivateClass* item();
private:
	PrivateClass();
};

PrivateClass* item() {
	return (PrivateClass*)20;
}

int main() {
	int b = (int)(PrivateClass::item());
	std::cout << b << std::endl;
}
=======
//Exercise 16.17: What, if any, are the differences between a type parameter
//that is declared as a typenameand one that is declared as a class ? When
//must typename be used ?When used as parameters there is no difference between the two, but when used to specify when a member is accessed through the scope operator is a type and not a static variable
>>>>>>> 80765d35302ca96945b1c08d5ba115d896eba32c
