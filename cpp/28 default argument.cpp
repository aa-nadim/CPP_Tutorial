#include<iostream>
using namespace std;

class rectangle{
    int h,w;
public:
    void getdata(int a,int b)
    {
        h=a;w=b;
    }
    int area(rectangle s)
    {
        return s.h*s.w;
    }
};

int main()
{
    rectangle ob;
    ob.getdata(5,6);
    cout<<ob.area(ob)<<endl;

    return 0;
}
