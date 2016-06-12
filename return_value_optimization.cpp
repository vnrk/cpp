/*return value optimization is a compiler optimization that involves eliminating the temporary object
created ti a function's return value*/

#include <iostream>
using namespace std;

struct C {
	C() {}
	C(const C&) {cout << "A copy was made." << endl;}
};

C f() {
	return C();
}


int main(int argc, char const *argv[])
{
	cout << "Hello World" <<endl;
	C obj = f();
	return 0;
}