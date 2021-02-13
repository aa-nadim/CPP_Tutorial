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
    void display()
    {
        cout<<area()<<endl;
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
    obj.display();
    return 0;
}



