#ifndef CRECTANGLE_H_
#define CRECTANGLE_H_

#include <iostream>

using namespace std;
// overloading class constructors

class CRectangle {
    int width, height;
  public:
    CRectangle (){width = 5; height = 5;}		//OPPURE CRectangle (); + IMPLEM
    CRectangle (int a ,int b) {width = a;height = b;}	//OPPURE  CRectangle (int ,int)
    int area (void) {return (width*height);}
};
/*OPPURE
CRectangle::CRectangle () {
	width = 5;
	height = 5;
}

CRectangle::CRectangle (int a, int b) {
  width = a;
  height = b;
}
*/
#endif /* CRECTANGLE_H_ */
