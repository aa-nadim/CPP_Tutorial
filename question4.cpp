#include<iostream>
#include<bits/stdc++.h>
#include<cstring>
using namespace std;
class strng
{
public:
    char  s1[100], s2[100], s3[100], s4[100];
    gets1()
    {
        cin>>s1;
    }
   void constant()
    {
        s2[0]='I';
        s2[1]='C';
        s2[2]='E';
        s2[3]='\0';
    }
    void concat()
    {
        strcat(s1," ");
        strcat(s1,s2);
        cout<<s1<<endl;
    }
    void assignva()
    {
        strcpy(s3,s1);
    }
    void display()
    {
        cout<<"s1  : "<<s1<<endl;
        cout<<"s2  : "<<s2<<endl;
        cout<<"s3  : "<<s3<<endl;
    }
};
int main()
{
    strng ob1, ob2;
    ob1.gets1();
    ob1.constant();
    ob1.assignva();
    ob1.concat();
    ob1.display();
}
