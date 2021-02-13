///problem 10..code with private,public,protected inheritance...
#include<iostream>
using namespace std;

class Base
{
    int a;
protected:
    int x;
public:
    int p;
};
class Derive1:public Base
{
    int b;
protected:
    int y;
public:
    int q;
};
class Derive2:protected Derive1
{
    int c;
protected:
    int z;
public:
    int r;
};
class Derive:private Derive2
{
public:
    void set();
    void print();
};
void Derive::set()
{
    cout<<"Enter the values of x,y,z,p,q,r"<<endl;
    cin>>x>>y>>z>>p>>q>>r;
}
void Derive::print()
{
    cout<<"x = "<<x<<" y = "<<y<<" z = "<<z<<endl;
    cout<<"p = "<<p<<" q = "<<q<<" r = "<<r<<endl;
}

int main()
{
    Derive ob;
    ob.set();
    ob.print();
    return 0;
}
