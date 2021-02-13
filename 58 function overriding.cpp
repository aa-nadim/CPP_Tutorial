#include<iostream>
using namespace std;

class base{
public:
    void print(){cout<<"Base"<<endl;}
    void print(int a,int b){cout<<"Base"<<endl;}
};

class derive:public base{
public:
    void print(){cout<<"derive"<<endl;}
};

int main()
{
    derive ob;
    //ob.print(2,3);///overload kora jayna evabe
    ob.print();///prothome derive class e khujbe print()//eitai overriding
    ///function ta paile kaj korbe ar base class e khujbe na
    ///jodi derive class e na pawa jay taile base class e
    ///gie sheta die kaj korbe.
    ob.base::print();
    ob.derive::print();
    return 0;
}
