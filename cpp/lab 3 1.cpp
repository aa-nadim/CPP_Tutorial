#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
//#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <map>
#include <sstream>
#include <cmath>
#include <bitset>
#include <utility>
#include <set>
#include <numeric>
#include <stdlib.h>
#include <iomanip>

#define INF_MAX 2147483647
#define INF_MIN -2147483647
#define pi acos(-1.0)
#define N 1000000
#define LL long long

#define for(i, a, b) for( int i = (a); i < (b); i++ )
#define Fors(i, sz) for( size_t i = 0; i < sz.size (); i++ )
#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
#define Set(a, s) memset(a, s, sizeof (a))
#define Read(r) freopen(r, "r", stdin)
#define Write(w) freopen(w, "w", stdout)

using namespace std;

class string1
{
    char a[30],b[30];
public:
    string1(){}
    string1(char c[30]){strcpy(a,c);}
    void add(){cin>>a>>b;
    strcat(a,b);
    cout<<a<<endl;
    }
    void copy1(){
    cin>>a>>b;
    strcpy(a,b);
    cout<<a<<" "<<b<<endl;
    }
    //char as(){cin>>a; return a;}
    void display();
    string1 operator +(string1 w1);
    string1 operator =(string1 w1);
};
string1 string1:: operator +(string1 w1)
{
    string1 tmp;
    strcat(a,w1.a);
    strcpy(tmp.a,a);
    return tmp;
}
string1 string1:: operator =(string1 w1)
{
    string1 tmp;
    strcpy(a,w1.a);
    strcpy(tmp.a,a);
    return tmp;
}

void string1 :: display()
{
    cout<<a<<endl;
}
int main()
{
    string1 s1;
    string1 s3;
    string1 s2("welcome");
    string1 s4("welcom");
    //s3.add();

    s3=s2+s4;
    s3.display();
    s1=s2;
    s1.display();

    return 0;
}
