#ifndef MOTHER_H_
#define MOTHER_H_

#include <iostream>
using namespace std;
// constructors and derived classes

class mother {
  public:
    mother (){ 		cout << "mother: no parameters\n"; }
    mother (int a){ 		cout << "mother: int parameter\n"; }
};
// the constructors of a derived class calls the default constructor of its base classes
class daughter : public mother {
  public:
    daughter (int a) { 		cout << "daughter: int parameter\n\n"; }
    // nothing specified: call default constructor
};

class son : public mother {
  public:
    son (int a) : mother (a){ 		cout << "son: int parameter\n\n"; }
    // constructor specified: call this specific constructor
};

#endif /* MOTHER_H_ */
