// example on constructors and destructors
#include <iostream>
#include "CRectangle.h"
using namespace std;

int main () {
  CRectangle rect (3,4), rectb (5,6);
  cout << "rect area: " << rect.area() << endl;
  cout << "rectb area: " << rectb.area() << endl;
  system("pause");
  return 0;
}
