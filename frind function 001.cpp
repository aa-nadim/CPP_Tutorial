#include<iostream>
using namespace std;
class complexx
{
    int a,b;
public:
    void getdata(){a=5;b=3;}
    friend void sum(complexx s);
};
void sum(complexx s)
{
    int ans;
    ans=s.a+s.b;
    cout<<"Ans: "<<ans<<endl;
}
int main()
{
    complexx x;
    x.getdata();
    sum(x);
    return 0;
}
