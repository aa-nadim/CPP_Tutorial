#include<iostream>
using namespace std;

void positive(int a)
{
//    cout<<a<<endl;
//    if(a<1) throw a;

    cout<<a<<endl;
    try{
        if(a<1) throw a;
    }catch(int e)
    {
        cout<<"Exception "<<e<<endl;
    }
}

int main()
{
//    try{
//        positive(5);
//        positive(-5);///jehetu ekhane exception hoise tai porer
//        ///function call hoy nai.ei problem dur korar jonno
//        ///function ter vitore try cacth block dite hobe.
//        positive(6);
//    }catch(int e)
//    {
//        cout<<"Exception "<<e<<endl;
//    }

    positive(5);
    positive(-5);
    positive(6);

    return 0;
}

