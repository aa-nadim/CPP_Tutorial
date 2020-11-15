#include<iostream>
using namespace std;

class sound{
public:
    virtual void print()=0;///pure virtual function mane proti
    ///khetrei must function ta ke override kora lagtche.
    ///erokom obosthay amra base class er function take 0 diei
    ///assign korte pari ebong base class er kono obj toiro korte
    ///hobe na shekhetre.
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
    //sound sob;
    dog dob;
    cat cob;

    sound *ptr;
    ptr=&dob;
    ptr->print();

    ptr=&cob;
    ptr->print();

    return 0;
}
