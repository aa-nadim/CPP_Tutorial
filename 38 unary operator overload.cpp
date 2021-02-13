#include<iostream>
using namespace std;

class Number{
    int x,y;///private member variable
public:
    Number(){x=0;y=0;}///constructor
    Number(int a,int b){x=a;y=b;}///constructor
    void print(){cout<<x<<" "<<y<<endl;}

    Number operator ++ (int z);
    Number operator ++ ();
    Number operator - (Number ob);
    Number operator - ();
};

Number Number::operator ++ (int z)///ei parameter er man default
///vabe 0 thake.
{
    Number tmp;
    tmp.x= x;
    tmp.y= y;
    x++,y++;
    return tmp;
}
Number Number::operator ++ ()///ei parameter er man default
///vabe 0 thake.
{
    Number tmp;
    x++,y++;
    tmp.x= x;
    tmp.y= y;
    return tmp;
}

Number Number::operator - (Number ob)
{
    Number tmp(x-ob.x , y-ob.y);
    return tmp;
}
Number Number::operator - ()
{
    Number tmp(-x,-y);
    return tmp;
}

int main()
{
    Number n1(4,0),n2(4,4),n3;

    /**cout<<"N1 -> before ";n1.print();
    //n3 = ++n1;///pre default vabe ney ar post++ korte hole parameter dite hobe
    n3 = ++n1;
    //n3 = n1++;
    cout<<"N1 -> after ";n1.print();

    n3.print();**/

    n3.print();
    n3= n1-n2;
    n3.print();
    n3=-n2;
    n3.print();

    return 0;
}





