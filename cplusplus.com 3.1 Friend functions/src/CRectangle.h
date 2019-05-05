#ifndef CDUMMY_H_
#define CDUMMY_H_
// friend functions

#include <iostream>
using namespace std;

class CRectangle {
    int width, height;
  public:
    void set_values (int, int);
    int area () {return (width * height);}
    friend CRectangle duplicate (CRectangle);		//CLASSE FRIEND: allowing this function to have access to the private and protected members of this class
};

void CRectangle::set_values (int a, int b) {
  width = a;
  height = b;
}

CRectangle duplicate (CRectangle rectparam){
  CRectangle rectres;
  rectres.width = rectparam.width*2;		//private
  rectres.height = rectparam.height*2;
  return (rectres);
}

#endif /* CDUMMY_H_ */
