#ifndef CRECTANGLE_H_
#define CRECTANGLE_H_

#include <iostream>
using namespace std;

// pointer to classes example

class CRectangle {
    int width, height;
  public:
    void set_values (int, int);
    int area (void) {return (width * height);}
};

void CRectangle::set_values (int a, int b) {
  width = a;
  height = b;
}

#endif /* CRECTANGLE_H_ */
