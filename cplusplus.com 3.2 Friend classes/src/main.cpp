#include <iostream>
#include "CRectangle.h"

using namespace std;

int main () {
  CSquare sqr;
  CRectangle rect;
  sqr.set_side(4);
  rect.convert(sqr);
  cout << rect.area();
  system("pause");
  return 0;
}
