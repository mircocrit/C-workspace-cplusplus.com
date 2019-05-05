#ifndef CRECTANGLE_H_
#define CRECTANGLE_H_

#include <iostream>
using namespace std;

class CRectangle {
    int *width, *height;
  public:
    CRectangle (int,int);
    ~CRectangle ();
    int area () {return (*width * *height);}
};

CRectangle::CRectangle (int a, int b) {
  width = new int;
  height = new int;
  *width = a;
  *height = b;
}

CRectangle::~CRectangle () {
  delete width;
  delete height;
  cout<<"Distruttore chiamato"<<endl;
}

#endif /* CRECTANGLE_H_ */
