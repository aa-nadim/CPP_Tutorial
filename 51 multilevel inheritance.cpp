#include<iostream>
using namespace std;

class info{
    int id;
public:
    void getid(){cin>>id; cout<<id<<endl;}
};

class result:public info{
    int mark;
public:
    void getmark(){cin>>mark; cout<<mark<<endl;}
};

class student: private result{
    int mark;
public:
    void print(){getid(); getmark();}
};

int main()
{
    student ob;
    ob.print();

    return 0;
}


