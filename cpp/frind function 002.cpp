#include<iostream>
using namespace std;
class c2;
class c1
{
    int data1;
public:
    void getdata(int value){data1=value;}
    friend void add(c1,c2);
};
class c2
{
    int data2;
public:
    void getdata(int value){data2=value;}
    friend void add(c1,c2);
};
void add(c1 s1, c2 s2)
{
    cout<<s1.data1+s2.data2<<endl;
}
int main()
{
    c1 x1;c2 x2;
    x1.getdata(4);
    x2.getdata(3);
    add(x1,x2);
    return 0;
}
