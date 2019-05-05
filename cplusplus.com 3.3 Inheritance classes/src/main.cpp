// example on constructors and destructors
#include <iostream>

#include "CPolygon.h"

using namespace std;

int main () {
  CRectangle rect;
  CTriangle trgl;
  rect.set_values (4,5);
  trgl.set_values (4,5);
  cout << rect.area() << endl;
  cout << trgl.area() << endl;
  system("pause");
  return 0;
}
