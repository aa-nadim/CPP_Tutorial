#include<iostream>
using namespace std;

int main()
{
    try{
        cout<<"Try"<<endl;
        //throw 1.5;//catch deya return type o double dite hobe.
        ///throw (float) 1.9;//float dite hole casting kore dite hobe.
        throw 1;///ei exception power pore ekhanei block thekeber
        ///hoye jay porer kisu thakleo execute hoy na.
        cout<<"Try end\n";
    }
    catch(int e){
        cout<<"Catch "<<e<<endl;
    }

    return 0;
}
