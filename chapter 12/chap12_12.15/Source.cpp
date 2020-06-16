//Exercise 12.15: Rewrite the first exercise to use a lambda(§ 10.3.2, p.
//388) in place of the end_connection function.
#include<memory>
#include<iostream>
#include<string>
using std::string;
using std::shared_ptr;
using std::cout;
using std::endl;

struct destinnation {
	string ip;
	string port;
};
struct connection
{
	destinnation*  p;
};
connection connect(destinnation* c) {
	connection d;
	d.p = c;
	return d;
}
void disconnect(connection c) {
	cout << "end connection to: " <<c.p->ip<< c.p->port << endl;
}
void end_connection(connection* c) {
	disconnect(*c);
}
void useC(destinnation& d) {
	connection c = connect(&d);
	shared_ptr<connection> f(&c, [](connection* f) {cout << "ending connection to: " << f->p->ip <<" "<< f->p->port << endl; });
	cout <<"user count before deletion: "<< f.use_count()<<endl;
}
int main() {
	destinnation item;
	item.ip = ("1.2.2.2");
	item.port = ("23434");
	useC(item);
}