#include<iostream>
using namespace std;
int sum(int a, int b);
float sum2(float x, float y, float z);
int main()
{
    cout<<sum(9,3)<<endl;
    cout<<sum2(4.3,3,5.9)<<endl;
    return 0;
}
int sum(int a,int b=20)
{
    return a+b;
}
float sum2(float x,float y,float z)
{
    return x+y+z;
}
