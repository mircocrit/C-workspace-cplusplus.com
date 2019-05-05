#ifndef MYPAIR_H_
#define MYPAIR_H_

template <class T>
class mypair {
    T values [2];
  public:
    mypair (T first, T second){
      values[0]=first; values[1]=second;
    }
};
#endif /* MYPAIR_H_ */
