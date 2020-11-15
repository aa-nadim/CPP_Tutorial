#include<iostream>
using namespace std;

class Number{
    int x,y;///private member variable
public:
    Number(){x=0;y=0;}///constructor
    Number(int a,int b){x=a;y=b;}///constructor
    //void get(int &a,int &b){a=x;b=y;}
    //void set(int a,int b){x=a;y=b;}
    void print(){cout<<x<<" "<<y<<endl;}

    bool operator && (Number ob);
};

bool Number::operator && (Number ob)
{
    return (x&&y) && (ob.x && ob.y);
}

int main()
{
    Number n1(1,0),n2(4,4),n3;
    if(n1&&n2){
        cout<<"ok"<<endl;
    }
    else{
        cout<<"error"<<endl;
    }

    return 0;
}




