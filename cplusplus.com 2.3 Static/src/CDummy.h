#ifndef CDUMMY_H_
#define CDUMMY_H_

#include <iostream>
using namespace std;
// static members in classes

class CDummy {
  public:
    static int n;
    CDummy () { n++; };
    ~CDummy () { n--; };
};
//initialize a static data-member we must include a formal definition outside the class, in the global scope, as in the previous example:
int CDummy::n=0;

#endif /* CDUMMY_H_ */
