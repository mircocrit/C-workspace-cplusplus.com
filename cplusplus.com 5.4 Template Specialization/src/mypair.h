#ifndef MYPAIR_H_
#define MYPAIR_H_

// template specialization
#include <iostream>
using namespace std;

// class template:
template <class T>
class mycontainer {
    T element;
  public:
    mycontainer (T arg) {element=arg;}
    T increase () {return ++element;}
};

// class template specialization:
template <>
class mycontainer <char> {
    char element;
  public:
    mycontainer (char arg) {element=arg;}
    char uppercase (){				//specialization
      if ((element>='a')&&(element<='z'))
      element+='A'-'a';
      return element;
    }
};


/*

template <class T> class mycontainer { ... };
template <> class mycontainer <char> { ... };

*/
#endif /* MYPAIR_H_ */

