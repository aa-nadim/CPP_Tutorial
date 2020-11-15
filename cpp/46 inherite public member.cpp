#include<iostream>
using namespace std;

class student{
public:
    int roll,marks;
};

/**class result:public student{///public mode e
public:
    //void get(){cin>>roll;}
    void set(){cin>>marks>>roll;}
    void print(){cout<<marks<<" "<<roll<<endl;}
};*/
/**class result:private student{///private mode e
public:
    void set(){cin>>marks>>roll;}
    void print(){cout<<marks<<" "<<roll<<endl;}
};**/
class result:protected student{///protected mode e
public:
    void set(){cin>>marks>>roll;}
    void print(){cout<<marks<<" "<<roll<<endl;}
};

int main()
{///shudhu matro private o protected er khetre
    ///ob.set(),ob.print() functions chara base class er
    ///public member guloke access kora jay ar public er
    ///khetre duivabei jabe.
    result ob;
    ///ob.marks=75;
    ///ob.roll=1;
    ob.set();
    ///cout<<ob.marks<<" "<<ob.roll<<endl;
    ob.print();
    return 0;
}
