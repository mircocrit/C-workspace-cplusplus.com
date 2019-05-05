// this
#include <iostream>

#include "CDummy.h"
using namespace std;

int main () {
  CDummy a;
  CDummy* b = &a;
  if ( b->isitme(a) )
	  cout << "yes, &a is b";
  system("pause");
  return 0;
}
