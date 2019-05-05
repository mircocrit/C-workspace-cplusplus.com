// dynamic_cast

#include <iostream>
#include <exception>

using namespace std;

class CBase { virtual void dummy() {} };
class CDerived: public CBase { int a; };

int main () {
  try {
    CBase * pba = new CDerived;
    CBase * pbb = new CBase;
    CDerived * pd;
    //dynamic_cast is always successful when we cast a class to one of its base classes
    pd = dynamic_cast<CDerived*>(pba);
    if (pd==0) 		cout << "Null pointer on first type-cast" << endl;

    pd = dynamic_cast<CDerived*>(pbb);
    if (pd==0) 		cout << "Null pointer on second type-cast" << endl;

  } catch (exception& e) {cout << "Exception: " << e.what();}
  system("pause");
  return 0;
}

