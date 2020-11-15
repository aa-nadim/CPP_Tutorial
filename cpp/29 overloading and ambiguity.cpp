#include<iostream>
using namespace std;
///ambiguity = 5 takar ekta kisu nite hobe, 5 takar ekta chips ase, chocolate o ase
///ekhon konta nibe? hoy konotai nibe na othoba jekono ekta nibe
///compiler konotakei ney na error dekhay.

int abc(int a,int b=0)//arekta ambiguity hobe
{
    return a+b;
}
/**float abc(int a,int b)//ekta ambiguity hobe return type er jonno
{
    return a/b;
}*/
int abc(int a)
{
    return a;
}

int main()
{
    cout<<abc(5,6)<<endl;
    cout<<abc(5)<<endl;

    return 0;
}
