#include <iostream>
#include"mypair.h"
using namespace std;

int main () {
  mypair <int> myobject (100, 75);
  cout << myobject.getmax();
  system("pause");
  return 0;
}
