#include<iostream>
using namespace std;

class base{
public:
    void print(int a){cout<<"Base"<<endl;}
};

class derive:public base{
public:
    void print(){cout<<"derive"<<endl;}
};

int main()
{
    derive ob;
    ob.print(5);///base ke override kore derive e chole jay.
    ///overloading hoy na.
    return 0;
}


