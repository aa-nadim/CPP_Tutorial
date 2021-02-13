#include<iostream>
using namespace std;

class base{
public:
    void print(){cout<<"Base"<<endl;}
};

class derive:public base{
public:
    void print(){cout<<"derive"<<endl;}
};

int main()
{
    base *b;
    derive ob;
    b=&ob;
    b->print();///public mode e prothome base ase tai age base
    ///takei print korbe.

    return 0;
}

