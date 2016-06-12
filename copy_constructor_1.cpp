/*Declare a copy constructor and an assignment operator for classes 
with dynamically allocated memory*/

#include <iostream>
using namespace std;

class String {
	public :
		String(const char *value = 0);
		void show();
		~String();

	private :
		char *data;
};

String::String(const char *value) 
{
	if(value) {
		data = new char[strlen(value) + 1];
		strcpy(data, value);
	}
	else {
		data = new char[1];
		data = '\0';
	}
}

inline String::~String() {delete [] data;}

void String::show()
{
	cout << data << endl;
}

int main(int argc, char const *argv[])
{
	//String a("Hello");
	//String b("World");
	//a.show();
	//b.show();
	String a("Hello");
	{
		String b("World");
		b = a; // default op = 
	}
	String c = a; 
	c.show(); //data is already lost
	return 0;
}