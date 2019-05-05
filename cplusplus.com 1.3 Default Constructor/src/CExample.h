#ifndef CEXAMPLE_H_
#define CEXAMPLE_H_

#include <iostream>

using namespace std;
// overloading class constructors

class CExample {
  public:
	CExample (int n, int m) { a=n; b=m; }; //CONSTRUCTOR
	CExample(const CExample&);		//COPY CONSTRUCTOR
    int a,b,c;
    void multiply (int n, int m) { a=n; b=m; c=a*b; }
  };

CExample::CExample (const CExample& rv) {
  a=rv.a;  b=rv.b;  c=rv.c;
}

#endif /* CEXAMPLE_H_ */
