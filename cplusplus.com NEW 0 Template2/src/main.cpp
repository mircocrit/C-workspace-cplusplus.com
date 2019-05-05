// function templates
#include <iostream>
using namespace std;

template <class T, class U>
bool are_equal (T a, U b){
  return (a==b);
}

int main (){
	//string mystr;
  if (are_equal(10,10.0))			//are_equal<int,double>(10,10.0)
    cout << "x and y are equal\n";
  else
    cout << "x and y are not equal\n";
  //getline(cin,mystr);
  system("pause");
  return 0;
}
