#include<iostream>
using namespace std;

class rectangle;
class cost{
    int costRate;
public:
    void setValue(int a){costRate = a;}
    int totalCost(rectangle A);
    ///int area(rectangle A){return A.height*A.width;}
    int area(rectangle A);
};

class rectangle {
    int height;
    int width;
public:
    void set(int a,int b){height = a; width = b;}
    int area(){return height*width;}
    ///friend class cost;
    friend int cost::totalCost(rectangle A);
    friend int cost::area(rectangle A);
};

int cost::totalCost(rectangle A)
{
    return costRate*A.height*A.width;
}
int cost :: area(rectangle A)
{
    return A.height*A.width;
}

int main()
{
    rectangle r;
    r.set(5,6);
    cost c;
    c.setValue(100);
    cout<<r.area()<<endl;
    cout<<c.totalCost(r)<<endl;

    return 0;
}
