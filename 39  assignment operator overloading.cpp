///copy constructor er motoi
#include<iostream>
using namespace std;

class Number{
    int x,y;///private member variable
public:
    Number(){x=0;y=0;}///constructor
    Number(int a,int b){x=a;y=b;}///constructor
    void print(){cout<<x<<" "<<y<<endl;}

    Number operator = (Number ob);
};

Number Number::operator = (Number ob)
{
    x=ob.x;
    y=ob.y;
    return *this;
}

int main()
{
    Number n1(4,0),n2(4,4),n3;

    n1.print();
    n2.print();
    n3=n1=n2;///n1=n2 return kore jeta pabe sheta n3 te dibe.
    n1.print();
    n2.print();
    n3.print();

    return 0;
}






