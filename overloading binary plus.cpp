#include<iostream>
using namespace std;
class pluss
{
    int x,y;
public:
    pluss(){};
    pluss(int r,int i){x=r;y=i;}
    friend pluss operator +(pluss,pluss);
    void display();
};
pluss operator +(pluss w1, pluss w2)
{
    pluss temp;
    temp.x=w1.x+w2.x;
    temp.y=w1.y+w2.y;
    return temp;
}
void pluss :: display()
{
    cout<<x<<"+ j   "<<y<<endl;
}
int main()
{
    pluss a(2,3),b(12,45),c;
    c=a+b;
    a.display();
    b.display();
    c.display();
}
