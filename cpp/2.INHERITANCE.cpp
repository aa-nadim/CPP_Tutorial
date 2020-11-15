#include <iostream>
using namespace std ;
class Base
{
    int a;
protected :
    int p;
public:
    int x;
};
class Derive_class1:public Base
{
    int b;
protected :
    int q;
public:
    int y;
};
class Derive_class2:public Base
{
    int c;
protected :
    int r;
public:
    int z;
};
