///constructor er virtual function hoy na kintu distructorer hoy
///virtual function er kaj holo pointer use kora derived class
///er member gula access kora.
///virtual function runtime er shomoy memory allocate hoy,
///compile time er shomoy ney na tai eke late/dynamic bynding
///bola hoy
///onno function gula runtime er agei memory allocate hoy tai
///bola hoy early binding.
#include<iostream>
using namespace std;

class sound{
public:
    virtual void print(){cout<<"Hello"<<endl;}
};

class dog:public sound{
public:
    void print(){cout<<"ghew ghew"<<endl;}
};

class cat:public sound{
public:
    void print(){cout<<"meauo"<<endl;}
};

int main()
{
    sound sob;
    dog dob;
    cat cob;

    sound *ptr;
    ptr=&dob;
    ptr->print();///virtual function neyar karone chahida moto
    ///reference onujai print function ta call hobe.

    ptr=&cob;
    ptr->print();

    ptr=&sob;
    ptr->print();

    return 0;
}



