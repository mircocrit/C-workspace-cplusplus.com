#include <iostream>
#include <typeinfo>
using namespace std;

// typeid

int main () {
  int *a;
  int b=0;
  a=0;
  if (typeid(a) != typeid(b))
  {
    cout << "a and b are of different types:\n";
    cout << "a is: " << typeid(a).name() << '\n';	//pointer to int
    cout << "b is: " << typeid(b).name() << '\n';	//int
  }
  system("pause");
  return 0;
}
