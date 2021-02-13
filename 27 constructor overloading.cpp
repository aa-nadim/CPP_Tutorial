///constructor er oveloading hoy kintu
///***kintu distructor er kono overloading hoy na***//
#include<iostream>
using namespace std;

class abc{
    int a;
public:
    abc(int x){a=x;}
    abc(){a=0;}
    abc(int x,int y){a=x+y;}
    int ret(){return a;}
};

int main()
{
    abc ob(5),ob1,ob2(2,4);
    cout<<ob.ret()<<endl;
    cout<<ob1.ret()<<endl;
    cout<<ob2.ret()<<endl;

    return 0;
}
