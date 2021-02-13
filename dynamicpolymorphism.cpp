#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class media
{
    protected:
        char title[50];
        float price;
    public:
        media()
        {
            char *s=new char[30];
            float a;
            cout<<"Enter name and price\n";
            cin>>s;
            cin>>a;
            strcpy(title,s);
            price=a;
        }
        virtual void display(){}
};
class book:public media
{
    int page;
public:
    book():media()
    {
        cout<<"Enter page number\n";
        int p;
        cin>>p;
        page=p;
    }
    void display()
    {
        cout<<"Title:\t"<<title<<endl;
        cout<<"Pages:\t"<<page<<endl;
        cout<<"Price:\t"<<price<<endl;
    }
};
class tape:public media
{
    float time;
public:
    tape():media()
    {
        int t;
        cout<<"Enter time\n";
        cin>>t;
        time=t;
    }
    void display()
    {
        cout<<"Title:\t"<<title<<endl;
        cout<<"Time:\t"<<time<<endl;
        cout<<"Price:\t"<<price<<endl;
    }
};
int main()
{
    book book1;
    tape tape1;
    media *list;
    list=&book1;
    list->display();
    list=&tape1;
    list->display();
    return 0;
}
