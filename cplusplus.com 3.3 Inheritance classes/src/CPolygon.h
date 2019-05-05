#ifndef CPOLYGON_H_
#define CPOLYGON_H_

#include <iostream>
using namespace std;


class CPolygon {
  protected:		//ereditarieta(i private non vengono ereditati)
    int width, height;
  public:
    void set_values (int a, int b){ width=a; height=b;}
  };

// derived classes

class CRectangle: public CPolygon {		//keyword public= same level class inherited:
	public:
	int area (){ return (width * height); }
  };

class CTriangle: public CPolygon {
  public:
    int area (){ return (width * height / 2); }
  };

#endif /* CPOLYGON_H_ */
