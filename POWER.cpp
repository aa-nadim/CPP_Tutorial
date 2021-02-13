///4.7 exercise code ..
#include<iostream>
#include<math.h>
using namespace std;

double power(double m,int n=2)
{
    double result;
    result=pow(m,n);
    return result;
}

int main()
{
    int n;
    double m;
    cout<<"Enter the value of m and n."<<endl;
    cin>>m>>n;
    cout<<power(m,n)<<endl;
    cout<<power(m)<<endl;
    return 0;
}
