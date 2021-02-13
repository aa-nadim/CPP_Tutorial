#include<iostream>
using namespace std;

int &swap(int&a,int&b,int &c)
{
    int temp;
    temp=a;
    a=c;
    c=b;
    b=temp;
}

int main()
{
    int a=10,b=20,c=30;
    cout <<"Before Swap:"<<endl;
    cout<<"a = "<<a<<"  b = "<<b<<" c = "<<c<<endl;
    swap(a,b,c);
   cout <<"After Swap:"<<endl;
    cout<<"a = "<<a<<"  b = "<<b<<" c = "<<c<<endl;
    return 0;
}
