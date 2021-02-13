///problem 4. operator overloading..
#include<iostream>
using namespace std;

class Myclass
{
    float a;
public:
    void set(int a){this->a=a;}
    void print(){cout<<"a = "<<a<<endl;}
    Myclass operator + (Myclass ob)
    {
        Myclass tmp;
        tmp.a=a+ob.a;
        return tmp;
    }
    Myclass operator - (Myclass ob)
    {
        Myclass tmp;
        tmp.a=a-ob.a;
        return tmp;
    }
    friend Myclass operator * (Myclass ob1,Myclass ob2)
    {
        Myclass tmp;
        tmp.a=ob1.a*ob2.a;
        return tmp;
    }
    friend Myclass operator / (Myclass ob1,Myclass ob2)
    {
        Myclass tmp;
        tmp.a=ob1.a/ob2.a;
        return tmp;
    }
};

int main()
{
    Myclass ob1,ob2,ob3;
    ob1.set(100);
    ob2.set(10);
    ob1.print();
    ob2.print();
    cout<<"'+ 'overloading by member function"<<endl;
    ob3=ob1+ob2;
    ob3.print();
    cout<<"'- 'overloading by member function"<<endl;
    ob3=ob1-ob2;
    ob3.print();
    cout<<"'* 'overloading by friend function"<<endl;
    ob3=ob1*ob2;
    ob3.print();
    cout<<"'/ 'overloading by friend function"<<endl;
    ob3=ob1/ob2;
    ob3.print();
    return 0;
}
