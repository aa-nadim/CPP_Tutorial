///3.6 exercise code...
#include<iostream>
#include<cstring>
using namespace std;

class cricket
{
    char name[20];
    int runs;
    int innings;
    int times_of_notout;
    double average;
public:
    void set(char*nm,int rn,int in,int t);
    void print();
};
void cricket::set(char*nm,int rn,int in,int t)
{
    strcpy(name,nm);
    runs=rn;
    innings=in;
    times_of_notout=t;
    average=(double)runs/innings;
}
void cricket::print()
{
    cout<<name<<"  "<<runs<<"    "<<innings<<"     "<<times_of_notout<<"  "<<average<<endl;
}

int main()
{
    char name[20];
    int runs;
    int innings;
    int times_of_notout;
    cricket ob[10];
    for(int i=0;i<3;i++)
    {
        cout<<"Enter NAME, runsS, INNINGS, TIMEOF_NOTOUT........."<<endl;
        cin>>name>>runs>>innings>>times_of_notout;
        ob[i].set(name,runs,innings,times_of_notout);
    }
    cout<<"Name :......"<<"runss:  "<<"Innings :  "<<"Times of not out: "<<"Average :"<<endl;
    for(int i=0;i<3;i++)
    {
        ob[i].print();
    }
    return 0;
}
