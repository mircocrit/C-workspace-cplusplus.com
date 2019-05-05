// example on constructors and destructors
#include <iostream>

#include "CExample.h"
using namespace std;

int main () {
	//CExample ex;
	CExample ex (2,3);
	CExample ex2 (ex);
    system("pause");
    return 0;
}
