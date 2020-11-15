#include<iostream>
using namespace std;
class item
{
    int num;
    float fl;
public:
    void getdata(int a,float b);
    void putdata()
    {
        cout<<"number :"<<num<<endl<<"cost :"<<fl<<endl;
    }
};
void item::getdata(int a,float b)
{
    num=a;
    fl=b;
}
int main()
{
    item x[3];
    int a;
    float b;
    for(int i=0;i<3;i++)
    {
        cin>>a>>b;
        x[i].getdata(a,b);
    }
    for(int i=0;i<3;i++)
    {
      x[i].putdata();
    }

    return 0;
}
