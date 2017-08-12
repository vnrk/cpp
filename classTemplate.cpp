#include <iostream>

using namespace std;

template <class S>
class classTemplate{
public:
	S x,y;
	classTemplate(S a,S b){
		x=a;
		y=b;
	}
	S Bigger();
};

template <class S>
S classTemplate<S>::Bigger(){
	return x<y?y:x;
}

int main(){
	class classTemplate <int> ct(332,444);
	cout<< "Worked because of Class Template, Bigger Number is "<< ct.Bigger() << endl;
	return 0;
}
