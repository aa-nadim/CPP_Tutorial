#include<iostream>
using namespace std;
class rectangle{
public:
    int height;
    int width;
};
int main()
{
    rectangle obj;

    obj.height=4;
    obj.width=5;

    cout<<obj.height*obj.width<<endl;
    return 0;
}
