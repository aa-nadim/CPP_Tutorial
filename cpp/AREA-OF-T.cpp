
#include<iostream>
#include<math.h>
using namespace std;

void area(double a,double b)
{
    double area;
    area=.5*a*b;
    cout<<"Area of triangle : "<<area<<endl;
}
void area(double r)
{
    double area;
    area=r*r*3.1416;
    cout<<"Area of circle : "<<area<<endl;
}
void area(int x,int y)
{
    int area;
    area=x*y;
    cout<<"Area of Rectangle : "<<area<<endl;
}
void area(int x)
{
    int area;
    area=x*x;
    cout<<"Area of Square : "<<area<<endl;
}
int main()
{
    double a,b,r;
    int x,y;
    cout<<"Enter three sides of triangle:"<<endl;
    cin>>a>>b;
    area (a,b);
    cout<<"Enter the radius of circle.."<<endl;
    cin>>r;
    area(r);
    cout<<"Enter three sides of Recangle:"<<endl;
    cin>>x>>y;
    area(x,y);
    cout<<"Enter three side of Square:"<<endl;
    cin>>x;
    area(x);

    return 0;
}

