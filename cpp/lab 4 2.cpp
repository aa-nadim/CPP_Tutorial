#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
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

class String
{
    char a[30];
public:
    String(char c[30]){strcpy(a,c);}
    void print(){cout<<a<<endl;}

    bool operator == (String ob);
};

bool String::operator == (String ob)
{
    return (!strcmp(a,ob.a));
}

int main ()
{
    String n1("Welcome"),n2("Welcome");
    if(n1==n2)cout<<"n1=n2"<<endl;
    else cout<<"n1!=n2"<<endl;

    return 0;
}
