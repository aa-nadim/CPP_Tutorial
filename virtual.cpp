#include<iostream>
using namespace std;
class base
{
public:
    void show()
    {
        cout<<"Show base class\n";
    }
    virtual void display()
    {
        cout<<"Display base class\n";
    }
};
class derived:public base
{
public:
    void show()
    {
        cout<<"Show derived class\n";
    }
    void display()
    {
        cout<<"Display derived class\n";
    }
};
int main()
{
    base b;
    derived d;
    base *ptr;
    ptr=&b;
    ptr->show();
    ptr->display();
    ptr=&d;
    ptr->show();
    ptr->display();
    return 0;
}
