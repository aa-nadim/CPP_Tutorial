#include<iostream>
using namespace std;

class exampleconst{
public:
    int a;
    int change(int x)const
    {
        ///a=x;member ke change kora jabe na
        x=a+x;
        return a;
    }
};

int main()
{
    const int a=123;///manta ar change hobe na,#define er moto
    ///kintu #define er kono data type thake na.
    //a=3;
    int arr[a];

    int i=0;
    const int&r=i;
    //r=5;

    return 0;
}
