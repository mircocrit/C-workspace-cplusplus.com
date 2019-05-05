// example on constructors and destructors
#include <iostream>

#include "CRectangle.h"
using namespace std;

int main () {
  CRectangle rect, rectb;
  rect.set_values (2,3);
  rectb = duplicate (rect);	//lungh doppie
  cout << rectb.area();
  system("pause");
  return 0;
}
