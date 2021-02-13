#include<iostream>
#include<cstring>
using namespace std;

class Bank
{
    char name[30];
    int account_no;
    char account_type[30];
    double balance;
public:
    void getdata(char*nm,int no,char*tp,double bl);
    void deposit_account();
    void withdraw();
    void putdata();
};
void Bank::getdata(char*nm,int no,char*tp,double bl)
{
    strcpy(name,nm);
    account_no=no;
    strcpy(account_type,tp);
    balance=bl;
}
void Bank::deposit_account()
{
    double amount;
    cout<<"Enter amount to deposit  : ";
    cin>>amount;
    balance=balance+amount;
}
void Bank::withdraw()
{
    double amount;
    cout<<"Enter amount to withdraw : ";
    cin>>amount;
    if (balance-amount<500)
    cout<<"Sorry insufficient balance."<<endl;

      else if(amount<=balance)
        balance=balance-amount;


    else
        cout<<"Sorry insufficient balance."<<endl;
}
void Bank::putdata()
{
    cout<<"\n\nName : "<<name<<"  Balance : "<<balance<<endl;
}

int main()
{
    char name[30];
    int account_no;
    char account_type[5];
    double balance;
    Bank ob[10];
    for(int i=0;i<3;i++)
    {
        cout<<"Enter name of the depositor: ";
        cin>>name;
        cout<<"Enter Account number :";
        cin>>account_no;
        cout<<"Enter Type of account : ";
        cin>>account_type;
        cout<<"Enter Balance amount in the bank Account : ";
        cin>>balance;
        ob[i].getdata(name,account_no,account_type,balance);
        ob[i].deposit_account();
        ob[i].withdraw();
        ob[i].withdraw();
        ob[i].putdata();
    }
    for(int i=0;i<3;i++)
        ob[i].putdata();
    return 0;
}

