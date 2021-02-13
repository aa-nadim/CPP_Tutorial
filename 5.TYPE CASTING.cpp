///problem 5. code..type casting..
#include<iostream>
using namespace std;

class number
{
    int x;
public:
    void set(int xy){this->x=xy;}
    operator int ()
    {
        return x;
    }
    
};

int main()
{
    int z;
    number N1;
    N1.set(10);
    cout<<" x = "<<z<<endl;
    z=10+N1;
    cout<<" x = "<<z<<endl;
     
    return 0;
}
