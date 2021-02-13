///7.4 exercise code..
#include<iostream>
#include<cstring>
using namespace std;

class String
{
    int a;
    char s[100];
public:
    void set(char *ch){strcpy(s,ch);}
    bool operator ==(String ob)
    {
        return (strcmp(s,ob.s));
    }
};

int main()
{
    String ob1,ob2,ob3;
    ob1.set("alam");
    ob2.set("alam");
    if(ob1==ob2==0)
    {
        cout<<"Same"<<endl;
    }
    else
        cout<<"Not same"<<endl;
    return 0;
}
