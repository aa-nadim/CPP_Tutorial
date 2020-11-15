#include<iostream>
using namespace std;

class base{
public:
    int a;
};

class derive:public base{
public:
    int b;
};

int main()
{
    base b;
    derive d;

    d.a=5;
    cout<<d.a<<endl;

    d.b=6;
    cout<<d.b<<endl;

    base *p;
    p = &d;

    //p->a=1;
    cout<<p->a<<endl;///5 ashbe jehetu reference d obj e.
    ///p->b=2;//ekhane jehetu pointer deya hoise base class e
    ///shehetu shudhu base class er member chara onno class er
    ///reference deya thakleo member access kora jabe na.

    return 0;
}
