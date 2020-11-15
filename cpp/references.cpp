#include<iostream>
using namespace std;

int& fun(int a)
{
    return a;
}
int main()
{
/*  int i;
    i=5;
    cout<<i<<endl;

    int *p;
    p = &i;
    cout<<*p<<endl;

    int& r = i;
    cout<<r<<endl;

    r = 7;

    cout<<i<<endl;
    cout<<*p<<endl;
    cout<<r<<endl;  */

    int a;
    a = 5;

    int *p=&a;
    int& r=*p;
    r=5;
    fun(a)=6;

    //fun(a);


    return 0;
}
