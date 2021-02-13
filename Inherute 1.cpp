#include<iostream>
using namespace std;
class student
{
public:
    int id;
    int age;
    getdata(){cin>>id>>age;}
    int putid(){return id;}
    int putage(){return age;}
};
class test1 : public student
{
public:
    int ct1;
    getct1(){ct1=20;}
    int putct1(){return ct1;}
    friend void xyz()
};
class test2 : public student
{
public:
    int ct2;
    getct2(){ct2=25;}
    int putct2(){return ct2;}
};
class test3 : private student
{
public:
    int ct3;
    getct3(){ct3=23;}
    int putct3(){return ct3;}
};
class final
{
public:
    int mark;
    getdata(){cin>>mark;}
    void datagt(){getdata(); getct1(); getct2();getct3();}
    void showdata(){cout<<"ID "<<putid()<<"\n age "<<putage()<<"\nct1 "<<putct1()<<"\n ct2 "<<putct2<<endl;
    cout<<"ct3 "<<putct3()<<"\nTotal "<<mark+putct1()+putct2()+putct3()<<endl;}
};
int main()
{
    final x;
    x.getdata();
    x.datagt();
    x.showdata();
    return 0;
}





















