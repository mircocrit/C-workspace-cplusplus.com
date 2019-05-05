#include <iostream>
using namespace std;

// function template

template <class T>
T GetMax (T a, T b) {
  T result;
  result = (a>b)? a : b;
  return (result);
}

template <class T, class U>
T GetMin (T a, U b) {
  return (a<b?a:b);
}

int main () {
  int i=5, j=6, k;
  long l=10, m=5, n;
  //k=GetMax<int>(i,j);
  k=GetMax(i,j);
  //n=GetMax<long>(l,m);
  n=GetMax(l,m);
  n=GetMin(j,l);
  cout << k << endl;
  cout << n << endl;
  system("pause");
  return 0;
}
