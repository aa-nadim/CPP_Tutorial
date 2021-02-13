#include<iostream>
using namespace std;

class info{
    int id;
public:
    int getid(){cout<<"Enter id -> "; cin>>id; return id;}
};

class lab{
    int lmark;
public:
    int getLmark(){cout<<"Enter lab mark -> "; cin>>lmark; return lmark;}
};

class exam:public lab{
    int mark;
public:
    int getMark(){cout<<"Enter exam mark -> "; cin>>mark; return mark+getLmark();}
};

class result:private info, private exam{
    int mark;
public:
    void getResult(){
        int sid=getid();
        int res=getMark();
        cout<<"id -> "<<sid<<" result -> "<<res<<endl;
    }
};

int main()
{
    result ob;
    ob.getResult();
    //ob.getid();

    return 0;
}
