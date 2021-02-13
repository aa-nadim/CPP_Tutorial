#include<iostream>
using namespace std;
class bank
{
    string depositor[50];
    int accountnum[50];
    string type[50];
    int amount[50];
    int count;
public:
    void cnt() {count =0;}
    bank() {amount[count]=0;}
    void getinformation()
    {
        cout<<"Enter name of the depositor\n";
        cin>>depositor[count];
        cout<<"Enter the account number\n";
        cin>>accountnum[count];
        cout<<"Enter the type of account\n";
        cin>>type[count];
        cout<<"Enter the balance amount\n";
        cin>>amount[count];
        count++;
    }
    void depositamount();
    void withdraw();
    void display();

};
void bank:: depositamount()
{
    int s,p;
    cout<<"Enter account number to deposit\n";
    cin>>s;
    cout<<"Enter amount of deposit\n";
    cin>>p;
    for(int i=0;i<count;i++)
        {
            if(accountnum[i]==s)
            {
              amount[i]=amount[i]+p;
            }
        }
}
void bank:: withdraw()
{
    int s; int withdraw,check=1;
    cout<<"Enter the account number to withdraw money\n";
    cin>>s;
    cout<<"Enter the amount of withdraw money\n";
    cin>>withdraw;
    for(int i=0;i<count;i++)
    {
        if(accountnum[i]==s&&amount[i]>500&&check<=2)
        {
            amount[i]=amount[i]-withdraw;
            check++;
        }
        if(check>2){
            cout<<"Can't withdraw money more than twice a day\n";
            break;
        }
    }
}
void bank::display()
{
    for(int i=0;i<count;i++)
    {
        cout<<"Name of the depositor:\t"<<depositor[i]<<endl;
        cout<<"Type of account:\t"<<type[i]<<endl;
        cout<<"Account number:\t"<<accountnum[i]<<endl;
        cout<<"Total amount:\t"<<amount[i]<<endl;
    }
}
int main()
{
    bank b1;
    b1.cnt();
    int x;
    do
    {
        cout<<"1.Add an account\n";
        cout<<"2.Display total amount\n";
        cout<<"3.Deposit amount\n";
        cout<<"4.Withdraw money\n";
        cout<<"5.Quit\n";
        cin>>x;
        switch(x)
        {
            case 1: b1.getinformation(); break;
            case 2: b1.display(); break;
            case 3: b1.depositamount(); break;
            case 4: b1.withdraw(); break;
            case 5: break;
        }
    } while(x!=5);
    return 0;
}
