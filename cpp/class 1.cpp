#include<iostream>
#include<string.h>
using namespace std;
class emply
{
    int emn;
    char name[20];
    int salary;
public:
    void getdata(int value,char a[20],int b);
    void showdata();
    void showofficer(){cout<<"Officer  :"<<emn<<"  "<<name<<"  "<<salary<<endl;}
};
void emply :: getdata(int value,char a[20],int b)
{
    emn=value;
    salary=b;
    strcpy(name,a);
}
void emply :: showdata()
{
    cout<<"Employee: "<<emn<<"  "<<name<<"  "<<salary<<endl;
}
const int siz=3;
int main()
{
    emply x[siz],y[siz];
    int no, salary;
    char nam[20];
    for(int i=0;i<siz;i++)
    {
        cin>>no>>nam>>salary;
        x[i].getdata(no,nam,salary);
        if(salary>20000)
        {
            y[i].getdata(no,nam,salary);
        }
        else
        {
            y[i].getdata(0,"Empty",00000);
        }
    }
    for(int i=0;i<3;i++)
    {
            x[i].showdata();
    }
    for(int i=0;i<3;i++)
    {
            y[i].showofficer();
    }
    return 0;
}
