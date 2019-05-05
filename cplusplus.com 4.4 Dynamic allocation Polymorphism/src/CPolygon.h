#include <iostream>
using namespace std;

// dynamic allocation and polymorphism

class CPolygon {
  protected:
    int width, height;
  public:
    void set_values (int a, int b) { width=a; height=b; }
    virtual int area (void) =0;
    void printarea (void)  { cout << this->area() << endl; }
  };

class CRectangle: public CPolygon {
  public:
    int area (void){ 	return (width * height); }
};

class CTriangle: public CPolygon {
  public:
    int area (void){ 	return (width * height / 2); }
};


