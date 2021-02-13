///problem 8 ..code with constructor..
#include<iostream>
using namespace std;

class memory
{
    int a,b,c;
    double d;
public:
    memory(){}
    memory(int x){a=x;}
    memory(int x,int y){a=x,b=y;}
    memory(int x,int y,int z){a=x,b=y,c=z;}
    memory(int x,double y,int z){a=x,d=y,b=z;}
};

int main()
{
    memory M1;
    memory M2(2);
    memory M3(5,6,7);
    memory(5,6.5,8);
    return 0;
    
}
