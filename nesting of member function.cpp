#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
class binary
{
    string s;
public:
    void read()
    {
        cin>>s;
    }
    int chk_bin()
    {
        for(int i=0;i<s.length();i++)
        {
            if(s.at(i)!='0'&&s.at(i)!='1')
            {
                   cout<<"\nwrong";
                   getch();
                   return 0;
            }
        }
    }
    void once()
    {
        chk_bin();
        for(int i=0;i<s.length();i++)
        {
           if(s.at(i)=='0')
            s.at(i)='1';
           else
            s.at(i)='0';
        }

    }
    void display()
    {
        once();
        cout<<"\n1's complement of the binary is :"<<s<<endl;
    }
};
int main()
{
    binary a;
    a.read();
    a.display();




    return 0;
}
