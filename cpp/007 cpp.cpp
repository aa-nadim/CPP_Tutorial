#include<iostream>
using namespace std;

class rectangle
{
    int height;
    int width;
public:
    void getdata()
    {
        cin>>height>>width;
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
    obj.getdata();

    cout<<obj.area()<<endl;
    return 0;
}



