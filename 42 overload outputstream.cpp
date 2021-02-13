///outputstream operator holo <<
#include<iostream>
using namespace std;

class Number{
    int x,y;///private member variable
public:
    Number(){x=0;y=0;}///constructor
    Number(int a,int b){x=a;y=b;}///constructor
    void print(){cout<<x<<" "<<y<<endl;}

    friend void operator << (ostream &os , Number ob){
        os<<ob.x<<" "<<ob.y<<endl;
    }
};



int main()
{
    Number n1(1,2),n2(4,5),n3(9,100);

    cout<<n3;

    return 0;
}


