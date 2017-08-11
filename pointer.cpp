#include <iostream>

using namespace std;

class newOne{
	public:
	const int abc,ccv;
	double d;
	newOne():abc(9),ccv(8),d(99.89)//implicit assignement to variables and you can assign const int variable also here
	{
		cout<< "what just happened = "<< abc<<' '<<ccv<<' '<<d<<endl;
	}
	~newOne(){
		cout<<"finally in Destructor cool isn't it"<<endl;
	}
}newObjectname,aa;

int main(){
	newObjectname;//running through object_name specified at the end of class 
	//and without specifying expicitly it will run here in these case 
	//constructor is run twice as there are 2 objects created newObjectName and aa.
	return 0;
}
