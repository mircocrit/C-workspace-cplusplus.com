// dynamic_cast

#include <iostream>

using namespace std;

class A {};
class B {};

int main (){
	A * a = new A;
	B * b = reinterpret_cast<B*>(a);

	system("pause");
	return 0;
}
