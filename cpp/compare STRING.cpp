#include<iostream>
#include<cstring>
using namespace std;

class String
{
    int a;
    char s[100];
public:
    void setdata(char *ch)
    {
        strcpy(s,ch);
    }
    bool operator ==(String ob)
    {
        return (strcmp(s,ob.s));
    }
};

int main()
{
    String ob1,ob2,ob3;
    char a[100],b[100];cin>>a>>b;
    ob1.setdata(a);
    ob2.setdata(b);
    if(ob1==ob2==0)
    {
        cout<<"Same"<<endl;
    }
    else
        cout<<"Not same"<<endl;
    return 0;
}

