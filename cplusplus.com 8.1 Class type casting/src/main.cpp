// class type-casting
#include <iostream>
using namespace std;

class CDummy {
    float i,j;
};

class CAddition {
	int x,y;
  public:
	CAddition (int a, int b) { x=a; y=b; }
	int result() { return x+y;}
};

int main () {
	//CASTING
	/*short a=2000;
	int b;
	b = (int) a;    // c-like cast notation
	b = int (a);    // functional notation
	 */
  CDummy d;
  CAddition * padd;
  padd = (CAddition*) &d;
  cout << padd->result();		//runtime error / unexpected result-->
  //4 CASTING TYPES:
  //dynamic_cast
  //reinterpret_cast
  //static_cast
  //const_cast
  system("pause");
  return 0;
}
