#include<iostream>
using namespace std;

class base{
public:
    int a;
};

class new1:virtual public base{
public:
    int b;
};

class new2:virtual public base{
public:
    int c;
};

class derive:public new1, public new2{
public:
    void get(){cin>>a>>b>>c;}///a ta ekhane duibar ashtase
    ///ekbar base->new1, abar base->new2 erpor derive e
    ///tai ekhane a ambiguous hochhe. er solve hochhe virtual
    ///use kora.
    void add(){cout<<a+b+c<<endl;}
};

int main()
{
    derive ob;
    ob.get();
    ob.add();

    return 0;
}
