// example on constructors and destructors
#include <iostream>
#include "CRectangle.h"

using namespace std;

int main () {
  CRectangle a, *b, *c;
  CRectangle * d = new CRectangle[2];		//array di oggetti
  b= new CRectangle;
  c= &a;
  a.set_values (1,2);
  b->set_values (3,4);		//indirection operad for access of a pointer member
  d->set_values (5,6);
  d[1].set_values (7,8);
  cout << "a area: " << a.area() << endl;
  cout << "*b area: " << b->area() << endl;
  cout << "*c area: " << c->area() << endl;
  cout << "d[0] area: " << d[0].area() << endl;
  cout << "d[1] area: " << d[1].area() << endl;
  delete[] d;
  delete b;
  system("pause");
  return 0;
}
