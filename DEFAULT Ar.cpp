//1. default argument.
#include<iostream>
using namespace std;

void sum(int x,int y=10)//10 is a default argument
{
    cout<<"x+y = "<<x+y<<endl;
}
int main()
{
    int x;
    int y;
    x=10,y=5;
    sum(x,y);
    sum(x);
    return 0;
}
