#include<iostream>
using namespace std;

void divide(double numerator, double denominator)
{
    try{
        if(denominator==0) throw 0;
        cout<<"Result: "<<numerator/denominator<<endl;
    }
    catch(int e)
    {
        cout<<"Cannot divide something zero"<<endl;
    }
}

int main()
{
    double num,denom;

    do{
        cout<<"Enter Numerator (press 0 to stop process) : "<<endl;
        cin>>num;
        cout<<"Enter Denominator: "<<endl;
        cin>>denom;
        divide(num,denom);
    }while(num);

    return 0;
}




