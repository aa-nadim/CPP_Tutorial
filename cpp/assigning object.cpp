#include<iostream>
using namespace std;

class rectangle
{
    int height;
    int width;
public:
    void set(int a,int b);
    int area();

};
inline int rectangle :: area()
{
    return height*width;
}
void rectangle::set(int a,int b){
    height = a;
    width = b;
}
int main()
{
    rectangle obj,obj1;
    obj.set(2,3);
    obj1.set(5,6);

    cout<<"Area = "<<obj.area()<<endl;
    cout<<"Area = "<<obj1.area()<<endl;
    obj1=obj;                               ///class same hotha hoba
    cout<<"Area = "<<obj.area()<<endl;
    cout<<"Area = "<<obj1.area()<<endl;
    return 0;
}


