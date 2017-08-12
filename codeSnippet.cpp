#include <iostream>

using namespace std;

class test {
	public:
	static int n;
	test () { n++; };
	~test () { n--; };
};

int test::n=0;

int main () {
	test a;
	test b[5];
	test *c = new test;
	cout << a.n << endl;
	delete c;
	cout << test::n << endl;
	return 0;
}
