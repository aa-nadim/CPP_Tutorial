#include<iostream>
#include<cstring>
using namespace std;

class bank_account
{
    string name;
    int account_no;
    string account_type;
    double balance;
public:
    void getdata(string n , int no , string typ , double bl)
    {
        name=n;
        account_no=no;
        account_type=typ;
        balance=bl;
    }
    void depo_account()
    {
        double amount;
        cout<<"Enter amount to deposit  : ";
        cin>>amount;
        balance = balance + amount;
    }
    void putdata()
    {
        cout<<"Name : "<<name<<"  Balance : "<<balance<<endl;
    }

    void withdraw();
};

void bank_account::withdraw()
{
    double amount;
    cout<<"Enter withdraw : ";
    cin>>amount;

    if (balance-amount<500)
    cout<<"Sorry ."<<endl;

    else if(amount <= balance)
        balance = balance - amount;
}
int main()
{
    char name[30];
    int account_no;
    char account_type[5];
    double balance;
    bank_account ob[10];
    for(int i=0;i<2;i++)
    {
        cout<<"Enter depositor's name : ";
        cin>>name;
        cout<<"Enter Account number :";
        cin>>account_no;
        cout<<"Enter Type of account : ";
        cin>>account_type;
        cout<<"Enter Balance amount : ";
        cin>>balance;
        ob[i].getdata(name,account_no,account_type,balance);
        ob[i].depo_account();
        ob[i].withdraw();
        ob[i].withdraw();
        ob[i].putdata();
    }
    return 0;
}

