///problem 2..code...
#include<iostream>
using namespace std;

class Ebill
{
public:
    int customer_id;
};
class Derive1:public Ebill
{
public:
    int consumed_unit;
};
class Derive2:public Derive1
{
public:
    void set()
    {
        cout<<"Enter user ID & unit...";cin>>customer_id>>consumed_unit;
    }
    void show()
    {
        cout<<"Customer  ID  : "<<customer_id<<endl;
        cout<<"Consumed unit : "<<consumed_unit<<".unit"<<endl;
        cout<<"Electricity bill "<<consumed_unit*6<<".tk"<<endl<<endl;
    }
};

int main()
{
    Derive2 ob[5];
    for(int i=0;i<5;i++)
    {
        ob[i].set();
        ob[i].show();
    }
    return 0;
}
