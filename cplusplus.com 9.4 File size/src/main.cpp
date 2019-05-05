#include <iostream>
#include <fstream>
#include <string>
#define PATH "D:\\C++-workspace old\\C++ 7.1 I O files\\Debug\\example.txt"

using namespace std;

// obtaining file size

int main () {
  long begin,end;
  ifstream myfile (PATH);
  begin = myfile.tellg();		//restituisce la psozione attuale del puntatore e la salva in begin
  myfile.seekg (0, ios::end);	//sposta il puntatore all fine del file
  end = myfile.tellg();		//restituisce la psozione attuale del puntatore e la salva in end
  myfile.close();
  cout << "size is: " << (end-begin) << " bytes.\n";
  system("pause");
  return 0;
}
