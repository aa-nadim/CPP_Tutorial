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
/**
Recall that polymorphism is the phenomenon where the same message sent to two different objects
 produces two different set of actions. Polymorphism is broadly divided into two parts:

Static polymorphism – exhibited by overloaded functions.
Dynamic polymorphism – exhibited by using late binding.

Static Polymorphism:
Static polymorphism refers to an entity existing in different physical forms simultaneously.
Static polymorphism involves binding of functions based on the number, type, and sequence of
arguments. The various types of parameters are specified in the function declaration, and
therefore the function can be bound to calls at compile time. This form of association is
called early binding. The term early binding stems from the fact that when the program is
executed, the calls are already bound to the appropriate functions.

The resolution of a function call is based on number,type,and sequence of arguments declared
for each form of the function. Consider the following function declaration:

            void add(int , int);

            void add(float, float);

When the add() function is invoked, the parameters passed to it will determine which version
of the function will be executed. This resolution is done at compile time.

Dynamic Polymorphism:
Dynamic polymorphism refers to an entity changing its form depending on the circumstances.
A function is said to exhibit dynamic polymorphism when it exists in more than one form, and
calls to its various forms are resolved dynamically when the program is executed. The term
late binding  refers to the resolution of the functions at run-time instead of compile time.
This feature increases the flexibility of the program by allowing the appropriate method to
be invoked, depending on the context.

Static Vs Dynamic Polymorphism:
Static polymorphism is considered more efficient, and dynamic polymorphism more flexible.

Statically bound methods are those methods that are bound to their calls at compile time.
Dynamic function calls are bound to the functions during run-time. This involves the
additional step of searching the functions during run-time. On the other hand, no run-time
search is required for statically bound functions.

As applications are becoming larger and more complicated,the need for flexibility is
increasing rapidly. Most users have to periodically upgrade their software, and this could
become a very tedious task if static polymorphism is applied. This is because any change
in requirements requires a major modification in the code. In the case of dynamic binding,
the function calls are resolved at run-time, thereby giving the user the flexibility to
alter the call without having to modify the code.

To the programmer, efficiency and performance would probably be a primary concern, but to the
user, flexibility or maintainability may be much more important. The decision is thus a
trade-off between efficiency and flexibility.
*/

