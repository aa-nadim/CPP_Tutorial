#include<iostream>
using namespace std;

class base{
    int x;
};

class derive:public base{
    int y;
};

int main()
{
    base bob;
    derive dob;

    try{
        //throw dob;
        throw bob;///dob throw korleo base exception e hoy tai
        ///ei problem dur korte derive ta ke age likhte hoy.
    }
    catch(derive e)
    {
        cout<<"derive Exception"<<endl;
    }
    catch(base e)
    {
        cout<<"Base Exception"<<endl;
    }
//    catch(derive e)
//    {
//        cout<<"derive Exception"<<endl;
//    }

    return 0;
}
