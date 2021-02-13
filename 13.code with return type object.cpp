///problem 13...code with return type object....
#include<iostream>
using namespace std;

class Myclass
{
    int a,b;
public:
    void set(int a,int b){this->a=a,this->b=b;}
    void print();
    friend Myclass add(Myclass ob1,Myclass ob2);
};
void Myclass::print()
{
    cout<<"a = "<<a<<"  b = "<<b<<endl;
}

Myclass add(Myclass ob1,Myclass ob2)
{
    Myclass tmp;
    tmp.a=ob1.a+ob2.a;
    tmp.b=ob1.b+ob2.b;
    return tmp;
}

int main()
{
    Myclass ob1,ob2,ob3;
    ob1.set(5,6);
    ob2.set(10,20);

    ob3=add(ob1,ob2);

    ob1.print();
    ob2.print();
    ob3.print();

    return 0;
}
