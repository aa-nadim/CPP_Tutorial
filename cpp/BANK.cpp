#include<iostream>
#include<cstring>
using namespace std;

class bank_account
{
    char name[30];
    int account_no;
    char account_type[30];
    double balance;
public:
    void getdata(char*num , int no , char*typ , double bl)
    {
        strcpy(name,num);
        account_no=no;
        strcpy(account_type,typ);
        balance=bl;
    }
    void depo_account()
    {
        double amount;
        cout<<"Enter amount to deposit  : ";
        cin>>amount;
        balance=balance+amount;
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
    cout<<"Enter amount to withdraw : ";
    cin>>amount;
    if (balance-amount<500)
    cout<<"Sorry insufficient balance."<<endl;

    else if(amount <= balance)
        balance = balance - amount;
    //else
      //  cout<<"Sorry insufficient balance."<<endl;
}
int main()
{
    char name[30];
    int account_no;
    char account_type[5];
    double balance;
    bank_account ob[10];
    for(int i=0;i<5;i++)
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

