#include<iostream>
using namespace std;

class excep{
    int id;
    string name;
public:
    excep(int i,string s){id=i;name = s;}
    void print(){cout<<"Error id: "<<id<<"-"<<name<<endl;}
};

void positive(int a)
{
    cout<<a<<endl;
    try{
        if(a<1) throw excep(a,"Not a positive number");
    }catch(excep e)
    {
        e.print();
    }
}

int main()
{

    positive(5);
    positive(-5);
    positive(6);

    return 0;
}


