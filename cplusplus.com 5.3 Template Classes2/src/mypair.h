#ifndef MYPAIR_H_
#define MYPAIR_H_

// class templates
#include <iostream>
using namespace std;

template <class T>
class mypair {
    T a, b;
  public:
    mypair (T first, T second) {a=first; b=second;}
    T getmax ();
};
//implementazione getMax
template <class T>
T mypair<T>::getmax (){
  T retval;
  retval = a>b? a : b;
  return retval;
}

#endif /* MYPAIR_H_ */
