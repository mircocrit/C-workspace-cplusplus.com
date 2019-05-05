#include <iostream>

#include "mysequence.h"
using namespace std;

int main () {
  mysequence <> myseq;		// mysequence<char,10> myseq;
  mysequence <int,5> myints;
  mysequence <double,5> myfloats;
  myints.setmember (0,100);
  myfloats.setmember (3,3.1416);
  cout << myints.getmember(0) << '\n';
  cout << myfloats.getmember(3) << '\n';
  system("pause");
  return 0;
}
