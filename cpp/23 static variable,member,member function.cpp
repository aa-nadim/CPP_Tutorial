#include<iostream>
using namespace std;
///ekbar static declare korle manta thakbe jotokkhon na
///program ta destroy hoye jay
void fun()
{
    static int a;///a=0 hoye jabe.//staric variable
    int b=0;
    a++;
    b++;
    cout<<a<<" "<<b<<endl;
}

class abc{
public:
    static int a;///static member.
    ///int b;
    static int b;
    static void fun(){cout<<++a<<" "<<++b<<endl;}///static member funt.
    abc(){b=0;}
};

int abc::a;
int abc::b;

int main()
{
    //fun();
    //fun();

    abc ob,ob1;
    ob.fun();
    ob.fun();
    ob1.fun();///notun object prothob
    ob.fun();
    ob1.fun();

    return 0;
}
