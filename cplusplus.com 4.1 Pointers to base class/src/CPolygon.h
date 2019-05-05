#ifndef CPOLYGON_H_
#define CPOLYGON_H_

#include <iostream>
using namespace std;

// pointers to base class

class CPolygon {
  protected:
    int width, height;
  public:
    void set_values (int a, int b) { width=a; height=b; }
  };

class CRectangle: public CPolygon {			//ereditarieta
  public:
    int area () { return (width * height); }
  };

class CTriangle: public CPolygon {
  public:
    int area () { return (width * height / 2); }
  };


#endif /* CPOLYGON_H_ */
