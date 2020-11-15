#include<iostream>
using namespace std;

class student{
protected:
    int roll,marks;
};

/**class result:public student{///public mode e
public:
    void set(){cin>>marks>>roll;}
    void print(){cout<<marks<<" "<<roll<<endl;}
};*/
class result:private student{///private mode e
public:
    void set(){cin>>marks>>roll;}
    void print(){cout<<marks<<" "<<roll<<endl;}
};
/**class result:protected student{///protected mode e
public:
    void set(){cin>>marks>>roll;}
    void print(){cout<<marks<<" "<<roll<<endl;}
};***/

int main()
{
    result ob;
    //ob.roll=5;
    ob.set();
    ob.print();
    return 0;
}
