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
class Derive_class1:public Base
{
    int b;
protected:
    int y;
public:
    int q;
};
class Derive_class2:public Base
{
    int c;
protected:
    int z;
public:
    int r;
};
class Derive_class3:public Base
{
    int d;
protected:
    int m;
public:
    int s;
};

class Derive:public Derive_class1,public Derive_class2,public Derive_class3
{
public:
    void getdata();
    void printdata();
};
void Derive::getdata()
{
    cout<<"Enter the values of X,Y,Z,M,P,Q,R,S"<<endl;
    cin>>x>>y>>z>>m>>p>>q>>r>>s;
}
void Derive::printdata()
{
    cout<<"X = "<<x<<" Y = "<<y<<" Z = "<<z<<" M= "<<m<<endl;
    cout<<"P = "<<p<<" Q = "<<q<<" R = "<<r<<" S= "<<s<<endl;
}

int main()
{
    Derive value;
    value.getdata();
    value.printdata();
    return 0;
}
