// const_cast
#include <iostream>
using namespace std;

void print (char * str){
  cout << str << endl;
}

int main () {
  const char * c = "sample text";
  print ( const_cast<char *> (c) );		//in order to pass a const argument to a function that expects a non-constant parameter:
  system("pause");
  return 0;
}
