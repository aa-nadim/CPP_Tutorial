#include<iostream>
using namespace std;

class Number{
    double x,y;///private member variable
    int n;
public:
    Number(){x=0;y=0;}///constructor
    Number(int a,int b){x=a;y=b;}///constructor
    Number(int a){x=a;}///constructor
    //void get(int &a,int &b){a=x;b=y;}
    //void set(int a,int b){x=a;y=b;}
    void print(){cout<<x<<" "<<y<<endl;}
    void print1(){cout<<x<<endl;}

    friend Number operator + (int a,Number ob);///declaration
    friend Number operator + (Number ob,int a);///declaration
    friend Number operator - (int a,Number ob);///declaration
    friend Number operator - (Number ob,int a);///declaration
    friend Number operator * (int a,Number ob);///declaration
    friend Number operator * (Number ob,int a);///declaration
    Number operator - (Number ob);///declaration
    Number operator * (Number ob);///declaration
    Number operator / (Number ob);
    Number operator = (Number ob);///declaration
};

Number operator + (int a,Number ob)
{
    Number tmp;
    tmp.x= a+ob.x;
    //tmp.y= y+ob.y;
    return tmp;
}
Number operator + (Number ob,int a)
{
    Number tmp;
    tmp.x= a+ob.x;
    //tmp.y= y+ob.y;
    return tmp;
}

Number operator - (int a,Number ob)
{
    Number tmp;
    tmp.x= a-ob.x;
    //tmp.y= y+ob.y;
    return tmp;
}
Number operator - (Number ob,int a)
{
    Number tmp;
    tmp.x= ob.x-a;
    //tmp.y= y+ob.y;
    return tmp;
}

Number operator * (int a,Number ob)
{
    Number tmp;
    tmp.x= a*ob.x;
    //tmp.y= y+ob.y;
    return tmp;
}
Number operator * (Number ob,int a)
{
    Number tmp;
    tmp.x= a*ob.x;
    //tmp.y= y+ob.y;
    return tmp;
}

Number Number::operator - (Number ob)
{
    Number tmp;
    tmp.x= x-ob.x;
    tmp.y= y-ob.y;
    return tmp;
}
Number Number::operator * (Number ob)
{
    Number tmp;
    tmp.x= x*ob.x;
    tmp.y= y*ob.y;
    return tmp;
}
Number Number::operator / (Number ob)
{
    Number tmp;
    tmp.x= x/ob.x;
    tmp.y= y/ob.y;
    return tmp;
}
Number Number::operator = (Number ob)
{
    x=ob.x;
    y=ob.y;
    return *this;
}


int main()
{
    int n=2;
    Number n1(7,8),n2(9,10),result1,result2,result3,result4,result5,result6,result7,result8,result9;
    result1 = n+n1;
    result1.print1();

    result2 = n1+n;
    result2.print1();

    result3 = n-n1;
    result3.print1();

    result4 = n1-n;
    result4.print1();

    result5 = n2-n1;
    result5.print();

    result6 = n*n1;
    result6.print1();

    result7 = n2*n;
    result7.print1();

    result8 = n1*n2;
    result8.print();

    result9 = n1/n2;
    result9.print();

    n1=n2;
    n1.print();
    n2.print();

    return 0;
}

