///problem 2 ..code with dynamic polymorphism.....
#include<iostream>
using namespace std;

class Base
{
protected:
    int height;
    int width;
public:
    void set(int h,int w){height=h,width=w;}
    virtual void area(){cout<<"Area in Base : "<<height*width<<endl;}
};
class Derive:public Base
{
public:
    void area(){cout<<"Area in Derive : "<<height*width<<endl;}
};

int main()
{
    Base ob;
    Derive dob;
    ob.set(10,10);
    dob.set(10,5);
    ob.area();
    dob.area();

    Base*ptr;
    ptr=&ob;
    ptr->area();
    ptr=&dob;
    ptr->area();


    return 0;
}
