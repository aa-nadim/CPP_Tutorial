#include<iostream>
using namespace std;

void excep() throw (int)
{
    throw 1;
}

void T()
{
    cout<<"Terminated"<<endl;
}

void U()
{
    cout<<"Unexpected"<<endl;
}

int main()
{
    set_terminate(T);
    set_unexpected(U);
    try{
        excep();
    }
    catch(double e)
    {
        cout<<"Exception "<<e<<endl;
    }

    return 0;
}



