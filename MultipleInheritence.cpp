#include <iostream>

using namespace std;

class Base{
	public:
	int base_var;
};

class Derived1:public virtual Base{};
class Derived2:public virtual Base{};

class Derived3:public Derived1,public Derived2{
	public:
	void method(){
		base_var=1;
	}
};

int main(){
	Derived3 *d3=new Derived3();
	//Base *b=d3;
	return 0;
}