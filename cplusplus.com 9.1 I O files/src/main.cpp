// basic file operations

#include <iostream>
#include <fstream>
#define PATH "D:\\C++-workspace old\\C++ 7.1 I O files\\Debug\\example.txt"
using namespace std;

int main () {
  ofstream myfile;	//FILE *p;
  myfile.open (PATH, ios::out|ios::app);
  myfile << "Writing this to a file.\n";
  myfile.close();
  system("pause");
  return 0;
}

/*
myfile.open ("example.bin", ios::out | ios::app | ios::binary);
*/
