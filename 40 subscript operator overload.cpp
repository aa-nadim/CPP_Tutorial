///copy constructor er motoi
///subscript operator mane [] operator.
#include<iostream>
using namespace std;


class Number{
    int x,arr[5];///private member variable
public:
    Number(){
        x=1;
        for(int i=1;i<=5;i++)
            arr[i-1]=i*x;
    }///constructor
    Number(int a){
        x=a;
        for(int i=1;i<=5;i++)
            arr[i-1]=i*x;
    }///constructor
    //void print(){cout<<x<<endl;}

    int operator [] (int a);
};

int Number::operator [] (int a)
{
    return arr[a-1];
}

int main()
{
    Number n1(5),n2,n3;

    cout<<n1[3]<<endl;

    return 0;
}
