#include<iostream>
using namespace std;

void excep()
{
    try{
        throw 1;
    }
    catch(int e)
    {
        cout<<"Function: "<<e<<endl;
        throw;///Rethrowing hoise
    }
}

int main()
{
    try{
        excep();
    }
    catch(int e)
    {
        cout<<"Main: "<<e<<endl;
    }

    return 0;
}


