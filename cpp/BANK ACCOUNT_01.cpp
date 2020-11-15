#include<iostream>
#include<cstring>
using namespace std;

class Bank
{
    char n[30];
    int a_no;
    char ac_t[30];
    double balance;
public:
    void getdata(char*nm,int no,double bl);
    void deposit_account();
    void withdraw();
    void putdata();
};
void Bank::getdata(char*nm,int no,double bl)
{
    strcpy(n,nm);
    a_no=no;
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
    cout<<"name : "<<n<<"\nBalance : "<<balance<<endl;
}

int main()
{
    char n[30];
    int a_no;
    char ac_t[5];
    double balance;
    Bank x[10];
    for(int i=0;i<3;i++)
    {
        cout<<"Enter name : ";
        cin>>n;
        cout<<"Enter Ac_no : ";
        cin>>a_no;
        cout<<"Enter Initial Balance : ";
        cin>>balance;
        x[i].getdata(n,a_no,balance);
        x[i].deposit_account();
        x[i].withdraw();
        x[i].withdraw();
        x[i].putdata();
    }
    for(int i=0;i<3;i++)
    {
        x[i].putdata();
    }
    return 0;
}

