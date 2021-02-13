#include<iostream>
using namespace std;

int add (int a,int b)
{
    return (a+b)*2;
}

float add (float a,float b)
{
    return (float) ((a+b)*2);
}
double add (double a,double b)//(int a,int b,int c)
{
    return (a+b)*3;
}

int main()
{
    float a=4.2,b=3.2;
    cout<<add((float)4.2,3.2)<<endl;

    return 0;
}
