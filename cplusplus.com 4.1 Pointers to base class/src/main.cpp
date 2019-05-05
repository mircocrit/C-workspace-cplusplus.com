#include <iostream>

#include "CPolygon.h"
using namespace std;

int main () {
  CRectangle rect;
  CTriangle trgl;

  CPolygon * ppoly1 = &rect;
  CPolygon * ppoly2 = &trgl;

  ppoly1->set_values (4,5);
  ppoly2->set_values (4,5);
  cout << rect.area() << endl;
  cout << trgl.area() << endl;
  system("pause");
  return 0;
}
