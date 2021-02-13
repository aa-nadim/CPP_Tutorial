#include<iostream>
using namespace std;

class info{
    int id;
public:
    void set(){cin>>id;}
    void get(){cout<<id<<endl;}
};

class student:private info{
public:
    void print(){get();}
};

int main()
{
    student ob;
    ob.set();
    ob.print();

    return 0;
}
