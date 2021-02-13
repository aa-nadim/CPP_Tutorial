///4.4 exercise code..using default argument.
#include<iostream>
using namespace std;

void sum(int a,int b=5)///5 is a default argument
{
    cout<<"a+b = "<<a+b<<endl;
}
int main()
{
    int a,b;
    a=10,b=5;
    sum(a,b);
    sum(a);
    return 0;
}
/**this code can be alternatively achieve by overloading
*/
