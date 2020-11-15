#include<iostream>
using namespace std;

class c1
{
private:
    int a;
};
class c2: private c1
{
protected:
    int b;
};
class c3:protected c2
{
    public;

};
int main()
{

    return 0;
}
