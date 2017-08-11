#include <iostream>

using namespace std;

struct A{
	A(){ cout<< "A()"<<endl;}
	virtual ~A(){ cout << "~A()"<<endl;}
};

struct B:A{
	B(){cout<< "B()"<<endl;}
	~B(){cout<< "~B()"<<endl;}
};

int main(){
	A *aa= new B();
	delete aa;
	return 0;
}



