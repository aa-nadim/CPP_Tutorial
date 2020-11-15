#include<iostream>
using namespace std;

class abc{
    int *p;
public:
    abc(){p=new int(0);cout<<"constructor"<<*p<<endl;}
    ~abc(){cout<<"distructor "<<*p<<endl;delete p;}
    void set(int x){*p=x;}
    void get(){cout<<*p<<endl;}
//    abc(abc &ob)///copy constructor***
//    {
//       p=new int(1);
//       cout<<"constructor"<<*p<<endl;
//    }
};

/***jodi definition class er baire dite chai taile evabe
abc::abc(abc &ob)
{
       p=new int(1);
       cout<<"constructor"<<*p<<endl;
}**/

int main()
{
    abc a;
    a.get();
    abc b=a;//erokom declare time e initialize korle copy
    //constructor use kora jay abar pointer use korle class e
    //copy constructor must use kora lage.
    ///jodi object declare korar shomoy initialize korahoy,
    ///jodi function er parameter hishebe obj call hoy,
    ///jodi return type hishebe obj declare hoy
    ///ei tin khetre shudhu constructor call hobe na !!!mind it!!!
    a.get();
    b.get();
    b.set(4);
    a.get();
    b.get();

    return 0;
}
