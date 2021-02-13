///Type Conversion tin dhoroner
///built in -> class  n1=5
///class -> built in  int a=n1
///class -> class  n1=x1
#include<iostream>
using namespace std;

class Number{
    int x,y;///private member variable
public:
    Number(){x=0;y=0;}///constructor
    Number(int a,int b){x=a;y=b;}///constructor
    Number(int a){x=a;y=0;}///constructor
    void print(){cout<<x<<" "<<y<<endl;}

    operator int()///for class->built in
    {
        return x+y;
    }
};
class Number1{
    int x;///private member variable
public:
    Number1(){x=5;}///constructor
    Number1(int a){x=a;}///constructor
    void print(){cout<<x<<endl;}

    operator Number()///for class->class
    {
        Number tmp(x);
        return tmp;
    }
};



int main()
{
    Number n1,n2(4,5),n3(9,100);
    Number1 x1;
    ///built in -> class
//    int a(6);
//    n1=a;
//    n1.print();
    ///class -> built in
//    int a;
//    a=n1;
//    cout<<a<<endl;
    ///class -> class
    n1=x1;
    n1.print();

    return 0;
}



