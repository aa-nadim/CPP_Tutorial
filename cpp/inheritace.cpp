#include<iostream>
using namespace std;
class student
{
    int mark;
public:
    void getmark(){cin>>mark;}
    void display(){cout<<"mark : "<<mark<<endl;}
    int putmark(){return mark;}
};
class test: public student
{
    int t1;
public:
    void gett1(){cin>>t1;}
    void ddisplay(){cout<<"t1 : "<<t1<<endl<<"Result : "<<putmark()+t1<<endl;}
};
/**
class test2
{
    int t2;
public:
    void getmark();
    void display();
    void putmark();
    void gett1();
    void ddisplay();

};
*/
int main()
{
    test t;
    t.getmark();
    t.gett1();
    t.display();
    t.ddisplay();
    return 0;
}







