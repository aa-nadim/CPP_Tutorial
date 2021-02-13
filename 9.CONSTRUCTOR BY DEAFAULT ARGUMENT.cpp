///problem 9 ..code with constructor function with default argument...
#include<iostream>
using namespace std;

class memory
{
    int a,b;
public:
    memory(int x,int y=5){a=x,b=y;}
    void print()
    {
        cout<<"a = "<<a<<" b = "<<b<<endl;
    }
};

int main()
{
    memory M1(2);
    memory M2(5,6);
    M1.print();
    M2.print();
    return 0;
}
