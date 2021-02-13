#include<iostream>
using namespace std;
class information;
class student{

public:
    int roll;
    friend int get_roll(int r);

   //friend class information;
};
int get_roll(int r)
    {
        int roll;
        roll=r;
        return roll;
    }
class marks:virtual  public student
{
public:
    int ct1,ct2;
    friend int getmarks(int a,int b);
};
int getmarks(int a,int b)
    {
        cout<<"CT1 marks\t"<<a<<endl;
        cout<<"CT2 marks\t"<<b<<endl;
        return (a+b);
    }
class attendence:virtual protected student
{
public:
    int attend;
    friend int get_attendence(int m);
};
int get_attendence(int m)
    {
        int attend;
        attend=m;
        return attend;
    }
class name:virtual private student
{
protected:
    string nm;
public:
    friend string getname();

};
string getname(string s)
    {
        return s;
    }
 class information
{
    int total;
public:
    int a,t1,t2,at1; string s;
    void get_information()
    {
        cout<<"Get Roll\n";
        cin>>a;
        cout<<"Get 2 marks\n";
        cin>>t1>>t2;
        cout<<"Get attendance\n";
        cin>>at1;
        cout<<"Get name\n";
        cin>>s;
    }
    void display()
    {
        cout<<"Roll number\t"<<get_roll(a)<<endl;
        cout<<"Total Ct marks:\n"<<getmarks(t1,t2)<<endl;
        cout<<"Attendance\t"<<get_attendence(at1)<<endl;
        cout<<"Name\t"<<getname(s)<<endl;
    }
};
int main()
{
 information i1;
 i1.get_information();
 i1.display();
 return 0;
}
