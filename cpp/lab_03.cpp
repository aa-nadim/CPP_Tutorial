#include<iostream>
using namespace std;

class area
{
public:
    int height;
    int width;
    int r;
};
int main()
{
    area obj;

    obj.height=4;
    obj.width=5;
    obj.r=1;

    cout<<"rectangle : "<<obj.height*obj.width<<endl;
    cout<<"triangle : "<<0.5*obj.height*obj.width<<endl;
    cout<<"squre : "<<obj.height*obj.height<<endl;
    cout<<"circle : "<<3.1416*obj.r*obj.r<<endl;
    cout<<"spare : "<<4*3.1416*obj.r*obj.r<<endl;
    return 0;
}

