#ifndef CVECTOR_H_
#define CVECTOR_H_

#include <iostream>
using namespace std;
// vectors: overloading operators example

class CVector {
  public:
    int x,y;
    CVector () {x=0; y=0;};		//NECESSARIO PER AVER DICHIARATO COSTRUTTORE SPECIALIZZATO,	ANCHE:	(CVector () {};	)
    CVector (int,int);		// function name CVector (constructor)
    CVector operator + (CVector);		// function returns a CVector
    CVector& operator= (const CVector&);
};

CVector::CVector (int a, int b) {
  x = a;
  y = b;
}

CVector CVector::operator+ (CVector param) {
  CVector temp;
  temp.x = x + param.x;		//la x e' quella in public
  temp.y = y + param.y;
  return (temp);
}

//USANDO IL THIS
CVector& CVector::operator= (const CVector& param){
  x=param.x;
  y=param.y;
  return *this;
}

#endif /* CVECTOR_H_ */
