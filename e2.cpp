#include<iostream>
using namespace std;
class bank
{
    int amount,years;
    float profit;
    float value;
public:
    fixed_deposit() {}
    fixed_deposit(int p,int y,int r)
    {
        amount=p; profit=r; years=y;
        value=amount+(profit*years);
    }
    fixed_deposit(int p,int y)
    {
        amount=p; profit=200; years=y;
        value=amount+(profit*years);
    }
    void display()
    {
           cout<<"Total amount after "<<years<<" years "<<value<<endl;
    }
};
int main()
{
    bank f1,f2,f3;
    int a,c,b1;
    float b;
    cout<<"Enter initial amount and years and profit(in integer)\n";
    cin>>a>>b>>c;
    f1.fixed_deposit(a,b,c);
    f1.display();
    cout<<"To calculate total amount Enter amount and years\n";
    cin>>a>>b;
    f3.fixed_deposit(a,b);
    f3.display();
    return 0;

}

