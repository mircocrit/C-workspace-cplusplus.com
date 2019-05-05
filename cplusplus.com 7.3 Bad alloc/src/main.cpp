#include <iostream>
#include <exception>
// bad_alloc standard exception
using namespace std;

int main () {
  try
  {
    int* myarray= new int[1000];
  }
  catch (exception& e)
  {
    cout << "Standard exception: " << e.what() << endl;
  }
  system("pause");
  return 0;
}
