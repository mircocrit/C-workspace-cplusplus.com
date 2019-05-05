// exceptions
#include <iostream>
using namespace std;

int main () {
  try{
    throw 20;		//exception thrown
  }
  catch (int e){		//exception handler
    cout << "An exception occurred. Exception Nr. " << e << endl;
  }
  system("pause");
  return 0;
}
