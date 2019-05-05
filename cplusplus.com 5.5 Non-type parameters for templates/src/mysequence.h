#ifndef MYSEQUENCE_H_
#define MYSEQUENCE_H_

// sequence template
#include <iostream>
using namespace std;

template <class T=char, int N=10>
class mysequence {
    T memblock [N];
  public:
    void setmember (int x, T value);
    T getmember (int x);
};

template <class T, int N>
void mysequence<T,N>::setmember (int x, T value) {
  memblock[x]=value;
}

template <class T, int N>
T mysequence<T,N>::getmember (int x) {
  return memblock[x];
}


#endif /* MYSEQUENCE_H_ */

