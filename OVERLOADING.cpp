///4.4 exercise code..using  overloading....
#include<iostream>
using namespace std;

void sum(int a,int b)
{
    cout<<"a+b = "<<a+b<<endl;
}
void sum(int a)
{
    int b=5;
    cout<<"a+b = "<<a+b<<endl;
}
int main()
{
    int a,b;
    a=10,b=5;
    sum(a,b);
    sum(a);
    return 0;
}
