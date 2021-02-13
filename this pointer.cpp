#include<iostream>
using namespace std;

class rectangle {
    int height;
    int width;
public:
    void set(int height,int width){this->height = height; this->width = width;}
    int area(){return height*width;}
};

int main()
{
    rectangle obj;
    obj.set(2,3);
    cout<<obj.area()<<endl;

    return 0;
}
