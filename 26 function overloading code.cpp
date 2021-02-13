#include<iostream>
using namespace std;

int add(int a,int b)
{
    return a+b;
}

int add(int a,int b,int c)
{
    return a+b+c;
}

/*double add(double a,double b)
{
    return a+b;
}*/

float add(double a,double b)
{
    return (float)(2*(a+b));
}
double add(double a,double b)///error karon return type change er
///khetre hoyna
{
    return (a+b)*3;
}

int main()
{
    float a=4.3,b=3.2;
    cout<<add(a,b)<<endl;
    cout<<add((float)a,(float)b)<<endl;
    cout<<add(4.3,3.2)<<endl;///ekhetre double nie nibe auto

    return 0;
}
