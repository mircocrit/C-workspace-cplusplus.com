#include <iostream>
#include <fstream>
#include <string>
#define PATH "D:\\C++-workspace old\\C++ 7.1 I O files\\Debug\\example.txt"

using namespace std;
// reading a text file

int main () {
  string line;
  ifstream myfile (PATH);		//lettura da file: while(!feof(fp))
  if (myfile.is_open()){
    while ( getline (myfile,line) ){
      cout << line << endl;
    }
    myfile.close();
  }
  else cout << "Unable to open file";
  system("pause");
  return 0;
}
