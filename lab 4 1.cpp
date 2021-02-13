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

class mat
{
    int a[10][10],s[10][10]={{0}},x,y;
public:
    void get(){
    for(i,0,3){
        for(j,0,3)cin>>a[i][j];
    }
    }
    void print(){cout<<endl;
        for(i,0,3){
            for(j,0,3){
                cout<<s[i][j]<<" ";
            }cout<<endl;
        }
    }
    friend mat operator *(mat ob1,mat ob2);
    friend mat operator +(mat ob1,mat ob2);
    friend mat operator -(mat ob1,mat ob2);
};

mat operator*(mat ob1,mat ob2)
{
    mat tmp;
    for(i,0,3){
        for(j,0,3){
            for(k,0,3){
                tmp.s[i][j]+=ob1.a[i][k]*ob2.a[k][j];
            }
        }
    }
    return tmp;
}
mat operator+(mat ob1,mat ob2)
{
    mat tmp;
    for(i,0,3){
        for(j,0,3){
                tmp.s[i][j]=ob1.a[i][j]+ob2.a[i][j];
        }
    }
    return tmp;
}
mat operator-(mat ob1,mat ob2)
{
    mat tmp;
    for(i,0,3){
        for(j,0,3){
                tmp.s[i][j]=ob1.a[i][j]-ob2.a[i][j];
        }
    }
    return tmp;
}

int main ()
{
    mat a1,a2,a3,a4,a5;
    a1.get();
    a2.get();
    a3=a1*a2;
    a3.print();
    a4=a1+a2;
    a4.print();
    a5=a2-a1;
    a5.print();

    return 0;
}
