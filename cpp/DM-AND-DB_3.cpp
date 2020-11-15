#include<iostream>
using namespace std;
class DM
{
    double m,cm;
public:
    void getdata();
    friend DM addmeter(DM ob1,DB ob2);
    friend DB addfeet(DM ob1,DB ob2);
    void putdata()
    {
        cm=m*100;
        cout<<"meter = "<<m<<"  centimeters = "<<cm<<endl;
    }
};

class DB
{
    double ft,in;
public:
    void get();
    friend DM addmeter(DM ob1,DB ob2);
    friend DB addfeet(DM ob1,DB ob2);
    void print()
    {
        in=ft*12;
        cout<<"feet = "<<ft<<"  inchi = "<<in<<endl;
    }
};
