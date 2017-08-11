#include <iostream>
using namespace std;

class Base
{
	public:
	Base()
	{ 
		cout<<"inside Base constructor";
		fun(); //note: fun() is virtual
	}
	virtual void fun()
	{cout<<"\nBase Function";}
};

class Derived: public Base
{
	public:
	Derived(){cout<<"\nInside derived constructor";}
	virtual void fun()
	{cout<<"\nDerived Function";}
};

int main()
{
	Base* pBase = new Derived();
	pBase->fun();
	delete pBase;
	return 0;
}

