#include <iostream>
using namespace std;

class Dog {
	public :
	virtual Dog* clone() { return (new Dog(*this));}
};

class Puppy : public Dog {
	virtual Puppy* clone() { return (new Puppy(*this));}
};

void foo(Dog *d) {
	//Dog* dd = new Dog(*d);
	Dog* dd = d->clone();
}

int main() {
	Puppy p;
	foo(&p);
	return 0;
}
