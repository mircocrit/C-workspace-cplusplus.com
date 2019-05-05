#include <iostream>
#include <fstream>
#include <string>
#define PATH "D:\\C++-workspace old\\C++ 7.1 I O files\\Debug\\example.txt"

using namespace std;
// reading a complete binary file

ifstream::pos_type size;
char * memblock;

int main () {
  ifstream file (PATH, ios::in|ios::binary|ios::ate);
  if (file.is_open()){
    size = file.tellg();
    memblock = new char [size];
    file.seekg (0, ios::beg);
    file.read (memblock, size);
    file.close();

    cout << "the complete file content is in memory";
    delete[] memblock;
  }
  else cout << "Unable to open file";
  system("pause");
  return 0;
}
