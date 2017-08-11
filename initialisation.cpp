#include <iostream>

using namespace std;
static int x;
class A{
	public:
	static int i;
	A(int j){
		i=j;
	}
};

int A::i=8;

int main(){
	//A aObj;
	//aObj.i=20;
	A aObj(2);
	x=10;
	cout<< "i= "<<aObj.i<< endl;
	cout<< "x= " << x;
	return 0;
}


