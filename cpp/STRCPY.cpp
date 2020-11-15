#include<iostream>
#include<cstring>
using namespace std;

class String
{
    char s1[100];
public:
    String(){}
    String(char*ch)
    {
        strcpy(s1,ch);
        }
    String add(String ob2,String ob3)
    {
        strcat(ob2.s1,ob3.s1);
        return ob2;
    }
    void display()
    {
        cout<<s1<<endl;
    }
};

int main()
{
    String ob1;
    String ob2("WELCOME!");
    String ob3("to ICE.");
    ob2.display();
    ob3.display();
    ob1=ob1.add(ob2,ob3);
    ob1.display();
    return 0;
}
