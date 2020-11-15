///problem 6. code with virtual class...
#include<iostream>
using namespace std;

class Myclass
{
protected:
    int a;
};
 class new1:virtual public Myclass
 {
 protected:
    int b;
 };
 class new2:virtual public Myclass
 {
 protected:
    int c;
 };
 class Derive:public new1,public new2
 {
 public:
    void set(){
        cout<<"Enter three integers"<<endl;
        cin>>a>>b>>c;}
    void sum(){cout<<"a+b+c = "<<a+b+c<<endl;}
 };

int main()
{
    Derive ob;
    ob.set();
    ob.sum();
    return 0;
}
