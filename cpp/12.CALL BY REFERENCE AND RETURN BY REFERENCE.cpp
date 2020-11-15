///problem 12..code with call by reference and return by reference......
#include<iostream>
using namespace std;

int &swap(int&a,int&b)
{
    int tmp;
    tmp=a;
    a=b;
    b=tmp;
    if(a>b)
        return a;
    else
        return b;
}

int main()
{
    int a=10,b=20;
    cout<<"a = "<<a<<"  b = "<<b<<endl;
    cout<<swap(a,b)<<endl;
    cout<<"a = "<<a<<"  b = "<<b<<endl;
    return 0;
}
