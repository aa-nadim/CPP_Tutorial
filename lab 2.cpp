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
    int a;
    void print(){getmark();}
};

class student: private info{
public:
    int b;
    void print(){getid();}
};

class student2: protected info{
public:
    int c;
    void print(){getid();}
};

class all:public result,public student, public student2{
public:
    int allll(){
    cin>>a>>b>>c;
    return a+b+c;
    }
};

int main()
{
    student ob;
    ob.print();

    result ob1,ob1a;
    ob1.print();

    student2 ob2;
    ob2.print();

    ob1a.print();

    all ob23;
    cout<<ob23.allll()<<endl;

    return 0;
}



