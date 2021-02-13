#include<iostream>
using namespace std;
class swapi
{
    int a,b,c;
public:
    void getdata(int p,int q,int r )
    {
        a=p; b=q; c=r;
    }
    void swapint(int &x,int &y,int &z)
    { a=x;b=y;c=z;
        int temp=a;
        a=b;
        b=c;
        c=temp;
    }
    void display()
    {
        cout<<"A = "<<a<<"  B = "<<b<<"  C = "<<c<<endl;
    }
};
int main()
{
    int p,q,r;
    cin>>p>>q>>r;
    swapi s,s1;
    s.getdata(p,q,r);
    s.display();
    s.swapint(p,q,r);
    s.display();
}
