///4.9 exercise code
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
int main()
{
    double a,b,r;
    cout<<"Enter three sides of triangle:"<<endl;
    cin>>a>>b;
    cout<<"Enter the radius of circle.."<<endl;
    cin>>r;
    area(a,b);
    area(r);
    return 0;
}
