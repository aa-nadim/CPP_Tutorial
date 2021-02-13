///program 11 code with copy constructor function with default argument..
#include<iostream>
using namespace std;

class Myclass
{
    int a,b;
public:
    Myclass(){}
    Myclass(int a,int b=5){this->a=a,this->b=b;}
    void print();
    Myclass(Myclass&ob)
    {
        a=ob.a;
        b=ob.b;
    }
};
void Myclass::print()
{
    cout<<"a = "<<a<<endl;
}

int main()
{
    Myclass ob(10);
    Myclass ob1(10,5);
    Myclass ob2(ob1);
    Myclass ob3=ob2;
    ob.print();
    ob1.print();
    ob2.print();
    ob3.print();
    return 0;
}
