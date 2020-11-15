#include<iostream>
using namespace std;

class info{
    int id, mark;
public:
    void getid(){cin>>id; cout<<id<<endl;}
    void getmark(){cin>>mark; cout<<mark<<endl;}
};

class result:public info{
public:
    void print(){getmark();}
};

class student: private info{
public:
    void print(){getid();}
};

class student2: protected info{
public:
    void print(){getid();}
};

int main()
{
    student ob;
    ob.print();

    result ob1;
    ob1.print();

    student2 ob;
    ob.print();


    return 0;
}



