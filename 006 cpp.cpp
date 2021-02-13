#include<iostream>
using namespace std;

class rectangle
{
    int height;
    int width;
public:
    void getdata(int a,int b)
    {
        height=a;
        width=b;
    }
    int area();
};
inline int rectangle :: area()
{
    return height*width;
}
int main()
{
    rectangle obj;
    obj.getdata(4,6);

    cout<<obj.area()<<endl;
    return 0;
}


