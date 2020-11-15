///friend operator function e this operator thakay
///= () [] -> operator gula kaj kore na.
#include<iostream>
using namespace std;

class Number{
    int x,y;///private member variable
public:
    Number(){x=0;y=0;}///constructor
    Number(int a,int b){x=a;y=b;}///constructor
    Number(int a){x=a;}///constructor
    void print(){cout<<x<<" "<<y<<endl;}
    void print1(){cout<<x<<endl;}

    friend Number operator * (Number a, Number b);
    friend Number operator * (Number a, int b);
};

//Number operator*(Number a, Number b)
//{
//        Number tmp;
//        tmp.x= a.x*b.x;
//        tmp.y= a.y*b.y;
//        return tmp;
//}
Number operator*(Number a, int b)
{
        Number tmp;
        tmp.x= a.x*b;
        //tmp.y= a.y*b.y;
        return tmp;
}

int main()
{
    Number n1(1,2),n2(4,5),n3,n4(4);
    int n=6;

    n3=n4*n;
    n3.print1();

    return 0;
}

