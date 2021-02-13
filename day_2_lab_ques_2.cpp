#include<iostream>
using namespace std;
class DM
{   public:
    int a,b;
    float sum;
    float sum2;
    string s;
};
class DB
{
public:
    int x,y;
    float sum1;
};

int main()
{
    DM ob1;
    DB ob2;
    cout<<"give the input for DM classes"<<endl;
    cin>>ob1.a>>ob1.b;
    ob1. sum=ob1.a+ob1.b/100.0;
        cout<<"give the input for DM classes"<<endl;
        cin>>ob2.x>>ob2.y;
        ob2.sum1=ob2.x*0.3048+ob2.y*0.0258;
        ob1.sum2=ob1.sum+ob2.sum1;
cout<<"select a unit meter or inch or feet or sentimeter"<<endl;
cin>>ob1.s;
if(ob1.s=="meter")
    cout<<ob1.sum2<<endl;
if(ob1.s=="centimeter")
cout<<ob1.sum2*100<<endl;
if(ob1.s=="inch")
    cout<<ob1.sum2*39.37008<<endl;
if(ob1.s=="feet")
    cout<<ob1.sum2*3.28084<<endl;
 return 0;
}










