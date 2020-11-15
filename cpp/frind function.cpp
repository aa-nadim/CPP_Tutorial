#include<iostream>
using namespace std;
class rectangle
{
    int hight;
    int width;
public:
    void set(int a,int b)
    {
        hight=a;
        width=b;
    }
    int area()
    {
        return hight*width;
    }
    friend class cost;
};
class cost
{
    int costRate;
public:
    void setValue(int a)
    {
        costRate=a;
    }
    int totalcost(rectangle A)
    {
        return costRate*A.hight *A.width;
    }
};
int main()
{
    rectangle r;
    r.set(5,6);
    cost c;
    c.setValue(100);
    cout<<r.area()<<endl;
    cout<<c.totalcost(r)<<endl;

    return 0;
}
