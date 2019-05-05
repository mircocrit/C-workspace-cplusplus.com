#ifndef CPOLYGON_H_
#define CPOLYGON_H_

#include <iostream>
using namespace std;

// virtual members:POLIMORFISMO

class CPolygon {
  protected:
    int width, height;
  public:
    void set_values (int a, int b){	 width=a; height=b; }
    virtual int area (){ 	return (0); }	//se tolgo virual otterro sempre 0
};

//A member of a class that can be redefined in its derived classes is known as a virtual member
class CRectangle: public CPolygon {
  public:
    int area ()   { return (width * height); }
};

class CTriangle: public CPolygon {
  public:
    int area ()  { return (width * height / 2); }
};

#endif /* CPOLYGON_H_ */
