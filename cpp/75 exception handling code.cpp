#include<iostream>
using namespace std;

int main()
{
    try{
        cout<<"Try"<<endl;
        throw 1;
    }
    catch(int e){
        cout<<"Catch "<<e<<endl;///e er moddhe throw er man ta rakhbe
    }

    return 0;
}

