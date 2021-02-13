///3.10 exercise code..
#include<iostream>
#include<cstring>
using namespace std;

class EBILL
{
    char name[20];
    int unit;
    double charge;
public:
    void set(char*nm,int u);
    void print();
};
void EBILL::set(char*nm,int u)
{
    strcpy(name,nm);
    unit=u;
    if(unit<=100)
        charge=unit*.6;
    else if(unit<=300)
        charge=unit*.8;
    else
        charge=unit*.9;
}
void EBILL::print()
{
    if(charge<50)
        cout<<"Name: "<<name<<"  Charge: "<<50<<"tk."<<endl<<endl;
    else if(charge<=300)
        cout<<"Name: "<<name<<"  Charge: "<<charge<<endl<<endl;
    else
    {
        charge=charge+(charge*15/100);
        cout<<"Name: "<<name<<"  Charge: "<<charge<<endl<<endl;
    }
}

int main()
{
    char name[20];
    int unit;
    EBILL ob[100];
    for(int i=0;i<3;i++)
    {
        cout<<"Enter name and unit....."<<endl;
        cin>>name>>unit;
        ob[i].set(name,unit);
        ob[i].print();
    }
    return 0;
}
