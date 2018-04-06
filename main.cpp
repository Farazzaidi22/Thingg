#include <iostream>
#include "thing.h"

using namespace std;

int main()
{
  Thing T(1,2,3);
  cout<<"T=";
  T.display();

  Thing A(T);
  cout<<"A=";
  A.display();

  Thing B;
  cout<<"B=";
  B.display();

  T.set(4,5,6);
  cout<<"T=";
  T.display();
  
  system("pause");
}