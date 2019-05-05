// example on constructors and destructors
#include <iostream>

#include "CDummy.h"
using namespace std;


int main () {
  CDummy a;
  CDummy b[5];
  CDummy * c = new CDummy;
  cout << a.n << endl;
  delete c;
  cout << CDummy::n << endl;
  system("pause");
  return 0;
}
