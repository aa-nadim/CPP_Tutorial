#include<iostream>
using namespace std;

/*int fun()
{
    static int a=0;
    int b=0;
    a++;
    b++;
    cout<<a<<" "<<b<<endl;
}*/
class abc{
public:
    static int a;
    static int b;
    static void fun(){cout<<++a<<" "<<++b<<endl;}
    abc(){b = 0;}
};
int abc::a;
int abc::b;
int main()
{
    ///fun();fun();fun();
    abc ob,ob1;
    ob.fun();
    ob.fun();
    ob1.fun();
    return 0;
}
