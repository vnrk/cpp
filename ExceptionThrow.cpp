#include <iostream>

using namespace std;

class BaseEx{};
class DerivedEx:public BaseEx{};

void func2(){
	DerivedEx dd;
	throw dd;
}

void func1(){
	try{ func2();}
	catch(BaseEx ex) { throw ex; }
}

int main(){
	try{func1();}
	catch (DerivedEx ex){ cout << "DerivedEx"<< endl;}
	catch (BaseEx ex){ cout << "BaseEx"<< endl;}
	catch(...){cout << "UnKnown"<< endl;}
}

