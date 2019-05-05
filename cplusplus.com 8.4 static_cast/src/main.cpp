// dynamic_cast

#include <iostream>

using namespace std;

class CBase {};
class CDerived: public CBase {};

int main (){
	CBase * a = new CBase;
	CDerived * b = static_cast<CDerived*>(a);		//da base a derivata

	double d=3.14159265;
	int i = static_cast<int>(d);

	system("pause");
	return 0;
}
