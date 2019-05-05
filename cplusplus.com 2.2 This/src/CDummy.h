#ifndef CDUMMY_H_
#define CDUMMY_H_

#include <iostream>
using namespace std;
// this

class CDummy {
  public:
    int isitme (CDummy& param);
};

int CDummy::isitme (CDummy& param){
  if (&param == this) return true;
  else return false;
}


#endif /* CDUMMY_H_ */
