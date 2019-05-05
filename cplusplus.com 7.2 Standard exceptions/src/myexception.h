#ifndef MYEXCEPTION_H_
#define MYEXCEPTION_H_
#include <iostream>
#include <exception>
using namespace std;

class myexception: public exception{		//inheritance
  virtual const char* what() const throw()		//description of the exception
  {
    return "My exception happened";
  }
} myex;

#endif /* MYEXCEPTION_H_ */
