#include <iostream>

using namespace std;

class Thing
{
  private:
  int *x= NULL;
  int y,z;

  public:

  //Null constructor
  Thing()
  {
    x=new int;
    this->y=0;
    this->z=0;
  }

  //Parametrize constructor
  Thing(int a, int b, int c)
  {
    x= new int;
    this->y=b;
    this->z=c;
  }

  //Copy constructor
  Thing(Thing& clone)
  {
    this->x=clone.x;
    this->y=clone.y;
    this->z=clone.z;
  }


  //setter
  void set(int a, int b, int c)
  {
    x= new int;
    this->y=b;
    this->z=c;
  }


  //getters
  int* getx()
  {
    return x;
  }

  int gety()
  {
    return this->y;
  }

  int getz()
  {
    return this->z;
  }


  void display()
  {
    cout<<"("<<(*x)<<","<<y<<","<<z<<")"<< endl;
  }

};

