#include<iostream>
using namespace std;

class base1{
public:
    int a;
    base1(int x){a=x;}
};
class base2{
public:
    int c;
    base2(int z){c=z;}
};

class derive:public base1, public base2{
public:
    int b;
    derive (int x,int z,int y):base1(x),base2(z){
    //derive(int y):base1(6),base2(7){///inheritance er moddhe constructor
        ///use korte hole evabe korte hobe.
        b=y;
//        a=x;
//        c=z;
    }
};

int main()
{
    derive ob(1,2,3);///evabeo kra jabe
    //derive ob(5);
    cout<<ob.a<<endl<<ob.c<<endl<<ob.b<<endl;

    return 0;
}
