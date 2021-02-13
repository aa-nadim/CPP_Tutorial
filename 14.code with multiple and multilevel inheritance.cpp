///problem 14 ,,code with multiple and multilevel inheritance
#include<iostream>
using namespace std;

class Employee
{
public:
    int id;
};
class new1:virtual public Employee
{
public:
    double wages;
};
class Derive:virtual public Employee
{
public:
};
class Multiple:virtual public Employee,public new1
{
public:
    void set();
    void show();
};
void Multiple::set()
{
    cout<<"Enter id and wages...";
    cin>>id>>wages;
}
void Multiple::show()
{
    cout<<"ID    :  "<<id<<endl;
    cout<<"Wages :  "<<wages<<endl<<endl;
}

int main()
{
    Derive ob[10];
    Multiple mb[10];
    for(int i=0;i<5;i++)
    {
        ///ob[i].set();
        ///ob[i].show();
        mb[i].set();
        mb[i].show();
    }
    return 0;
}
