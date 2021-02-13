#include<iostream>
using namespace std;

int abc(int a,int b)
{
    return a+b;
}

void abc(int a)
{
    cout<<a<<endl;
}

int main()
{
///    int (*p)(int,int);///declaration
///    p=abc;
///    cout<<p<<endl;
///    cout<<p(4,5)<<endl;
    void (*p)(int);
    p=abc;
    cout<<p<<endl;
    p(5);

    return 0;
}

