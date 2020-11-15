#include<iostream>
using namespace std;
class area
{
    int h, w;
    float k;
public:
    void rectan()
    {
        cin>>h>>w;
        cout<<h*w<<endl;
    }
    void trgle()
    {
        cin>>h>>k;
        cout<<h*k*0.5<<endl;
    }
    void squre()
    {
        cin>>h;
        cout<<h*h<<endl;
    }
    void circle()
    {
        cin>>k;
        cout<<3.1416*k*k<<endl;
    }
    void sphere()
    {
        cin>>h;
        cout<<(4*3.1416*k*k)<<endl;
    }
};
int main()
{
    area x;
    x.rectan();
    x.trgle();
    x.squre();
    x.circle();
    x.sphere();
    return 0;
}





