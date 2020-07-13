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