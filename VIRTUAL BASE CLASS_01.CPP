#include<iostream>
using namespace std;

class add
{
public:
    int a;
};
 class number1:virtual public add
 {
 public:
    int b;
 };
 class number2:virtual public add
 {
 public:
    int c;
 };
 class Derive:public number1,public number2
 {
 public:
    void setdata(){
        cout<<"Enter three integers :"<<endl;
        cin>>a>>b>>c;}
    void sum()
    {
        cout<<"a+b+c = "<<a+b+c<<endl;
        }
 };

int main()
{
    Derive ob;
    ob.setdata();
    ob.sum();
    return 0;
}
