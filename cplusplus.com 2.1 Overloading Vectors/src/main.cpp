// example on constructors and destructors
#include <iostream>
#include "CVector.h"
using namespace std;

int main () {
  CVector a (3,1);
  CVector b (1,2);
  CVector c;
 // c = a + b;
  c = a.operator+ (b);
  cout << c.x << "," << c.y;

  CVector d (2,3);
  CVector e;
  e = d;		 // copy assignment operator

  system("pause");
  return 0;
}
