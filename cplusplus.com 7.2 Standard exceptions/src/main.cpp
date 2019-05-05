// standard exceptions
#include <iostream>
#include <exception>
#include "myexception.h"
using namespace std;

int main () {
  try{
    throw myex;
  }
  catch (exception& e)
  {
    cout << e.what() << endl;
  }
  system("pause");
  return 0;
}
