#include<iostream>
using namespace std;

class base{
public:
    int a;
    int get(){return a;}
};

class derive:public base{
public:
    int a;
    int getd(){return a+get();}
};

int main()
{
    derive ob;
    ob.a=5;///ob.derive::a=5;//evabeo kora jay.
    ///ekhane directly e derive class er a take nibe.
    ob.base::a=10;///base class er a take nite evabe call korte
    ///hobe.
    cout<<ob.getd()<<endl;

    return 0;
}
