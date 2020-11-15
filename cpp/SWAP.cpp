///3.1 exercise code...
#include<iostream>
using namespace std;

void swap(int&,int&);
int main()
{
    int a,b;
    cout<<"Enter two integers.."<<endl;
    cin>>a>>b;
    cout<<"Before swap ..."<<endl;
    cout<<"a = "<<a<<"  b = "<<b<<endl;
    swap(a,b);
    cout<<"After swap.."<<endl;
    cout<<"a = "<<a<<" b = "<<b<<endl;
    return 0;
}
void swap(int&a,int&b)
{
    int tmp;
    tmp=a;
    a=b;
    b=tmp;
}
