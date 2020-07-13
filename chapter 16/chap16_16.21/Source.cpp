#include"DebugDelete.h"
#include<memory>
#include<string>
int main() {
	double* p = new double;
	DebugDelete d;
	d(p);
	int* ip = new int;

	DebugDelete()(ip);

	std::unique_ptr<int, DebugDelete> dp (new int, DebugDelete());
	std::unique_ptr<std::string, DebugDelete> sp(new std::string, DebugDelete());
}