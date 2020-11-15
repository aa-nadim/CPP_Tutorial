#include<iostream>
using namespace std;

class student{
private:
    int roll,marks;
public:///by pass system e access.
    void set(){cin>>marks>>roll;}
    void print(){cout<<marks<<" "<<roll<<endl;}
};

/**class result:public student{///public mode e
public:
    void all(){set();print();}
};*/
/**class result:private student{///private mode e
public:
    void all(){set();print();}
};**/
class result:protected student{///protected mode e
public:
    void all(){set();print();}
};

int main()
{
    result ob;
//    ob.set();///ob.all() die o ekbare kora jabe.
//    ob.print();
    ob.all();///private o protected er khetre kaj korte hobe all() die
    return 0;
}

