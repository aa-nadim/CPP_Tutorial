#include<iostream>
using namespace std;

void excep(int a) throw (int,double)///shudhu matro int ebong double
///ke exception korbe baki jekono type kei korbena error dekhabe.
{
    if(a==1) throw 1;
    if(a==2) throw 1.3;
    if(a==3) throw "o";
}

int main()
{
    try{
        excep(3);
    }
    catch(...)
    {
        cout<<"Exception"<<endl;
    }

    return 0;
}

