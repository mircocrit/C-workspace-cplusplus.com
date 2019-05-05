#include <iostream>
#include <fstream>

#define PATH "D:\\C++-workspace old\\C++ 7.1 I O files\\Debug\\example.txt"

using namespace std;
// writing on a text file

int main () {		//scrittura su file
  ofstream myfile (PATH);		//nessun parametro== cancella tutto
  if (myfile.is_open()){	//if (fp!= NULL)
    myfile << "This is a line.\n";
    myfile << "This is another line.\n";
    myfile.close();
  }
  else cout << "Unable to open file";
  system("pause");
  return 0;
}
