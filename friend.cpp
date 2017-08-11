#include <iostream>

using namespace std;

class Rabbit{
	public: 
	int a;

	private:
	char c;
	double d;
	friend void doSomething(Rabbit &rObj);
};

void doSomething(Rabbit &rObj){
	rObj.a=14;
	rObj.c='g';
	rObj.d=999.45;
	cout<< "Value of a using Friend ffunction is : "<<rObj.a<<endl;
	cout<< "Value of c using Friend ffunction is : "<<rObj.c<<endl;
	cout<< "Value of d using Friend ffunction is : "<<rObj.d<<endl;
}

int main(){
	Rabbit myObj;
	doSomething(myObj);
	return 0;
}
