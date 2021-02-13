///problem 7: code with abstract class....
#include<iostream>
using namespace std;

class Base
{
protected:
    int height;
    int width;
public:
    virtual void area()=0;
};
class Derive:public Base
{
public:
    void set(int h,int w){height=h,width=w;}
    void area(){cout<<"Area in Derive : "<<height*width<<endl;}
};

int main()
{
    Derive dob;
    dob.set(10,5);
    dob.area();

    Base*ptr;
    ptr=&dob;
    ptr->area();
    return 0;
}
/**
*Abstract classes act as expressions of general concepts from which more specific classes can
be derived. You cannot create an object of an abstract class type; however, you can use
pointers and references to abstract class types.
*A class that contains at least one pure virtual function is considered an abstract class.
 Classes derived from the abstract class must implement the pure virtual function or they,
 too, are abstract classes.
********Restrictions on abstract classes**********
Abstract classes cannot be used for:
1) Variables or member data
2) Argument types
3) Function return types
4) Types of explicit conversions

 */
