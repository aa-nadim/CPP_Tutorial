#include<iostream>
using namespace std;



int main()
{
    try{
        cout<<"Try"<<endl;
        throw 1.5;
    }catch(int e)
    {
        cout<<"Exception(int) "<<e<<endl;
    }
    catch(double e)
    {
        cout<<"Exception(double) "<<e<<endl;
    }

    return 0;
}



