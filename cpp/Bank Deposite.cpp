#include<iostream>
using namespace std;
class person
{
public:
    char n[200];
    int acno, taka;
    int amount=0;
    void getdata(){cout<<"Enter name and AC no.\n";cin>>n>>acno;}
    void inivau()
    {
        cout<<"Enter initial Balance\n";
        cin>>taka;
        amount=amount + taka;
    }
    int depoam()
    {
        cout<<"Enter Dipposite Balance\n";
        cin>>taka;
        amount=amount+taka;return taka;
    }
    int withdraw()
    {
        cout<<"Enter withdraw Balance\n";
        cin>>taka;
        amount=amount-taka;return taka;
    }
    void display()
    {
        cout<<"Name: "<<n<<"\nACno. "<<acno<<endl;
        /*cout<<"Dipposite Balanace "<<depoam()<<endl;
        cout<<"withdraw Balanace "<<withdraw()<<endl;
        //cout<<"Dipposite Balanace "<<depoam();
        cout<<"Net Balance : "<<amount<<endl;*/
    }
};
int main()
{
    int i, j, k, l;
    while(1)
    {
        cout<<"
    }
    return 0;
}
