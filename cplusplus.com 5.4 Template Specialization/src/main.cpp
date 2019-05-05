#include <iostream>
#include"mypair.h"
using namespace std;

int main () {
  mycontainer<int> myint (7);
  mycontainer<char> mychar ('j');
  cout << myint.increase() << endl;
  cout << mychar.uppercase() << endl;
  system("pause");
  return 0;
}
