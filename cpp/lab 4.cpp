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

using namespace std;

void swap3(int &a,int &b,int &c)
{
    int t,t2;
    t=a;
    a=b;
    b=c;
    c=t;
    cout<<a<<" "<<b<<" "<<c<<endl;
}

int main ()
{
    int m,n,v;
    cin>>m>>n>>v;
    cout<<m<<" "<<n<<" "<<v<<endl;
    swap3(m,n,v);


    return 0;
}
