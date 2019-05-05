// dynamic_cast

#include <iostream>
#include <exception>

using namespace std;

class CBase { };
class CDerived: public CBase { };

int main () {
	CBase b; CBase* pb;			//pointer base
	CDerived d; CDerived* pd;		//pointer derived

	pb = dynamic_cast<CBase*>(&d);     // ok: derived-to-base
	//pd = dynamic_cast<CDerived*>(&b);  // wrong: base-to-derived
	system("pause");
	return 0;
}
