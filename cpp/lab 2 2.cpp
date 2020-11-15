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
class DB;
class DM
{
    float m,cm;
public:
    void getdata(){cout<<"Enter the distance in m-cm: ";cin>>m>>cm;}
    void display(){cout<<m<<"m and "<<cm<<"cm.\n";}
    friend void add(DM &a,DB &b);
};
class DB
{
    float ft,inch;
public:
    void getdata(){cout<<"\nEnter the distance in ft-inch: ";cin>>ft>>inch;}
    void display(){cout<<ft<<"ft and "<<inch<<"inch.\n";}
    friend void add(DM &a,DB &b);
};
void add(DM &a,DB &b)
{
    int l;
    cout<<"If you want to see result in m-cm press 1 else press any number without 1: ";
    cin>>l;
    if(l==1){
        DM x;
    int z=a.m*100+a.cm+b.ft*30.48+b.inch*2.54;
    if(z>=100){
        x.m=z/100;
        x.cm=z%100;
    }
    else{
        x.m=0;x.cm=z;}
    x.display();
    }
    else{
        DB x;
        int z2=a.m*39.37+a.cm*0.39+b.ft*12+b.inch;
        if(z2>=12){x.ft=z2/12;x.inch=z2%12;}
        else{x.ft=0;x.inch=z2;}
        x.display();
    }
}

int main ()
{
   DM a;DB b;
   a.getdata();
   b.getdata();
   add(a,b);
   return 0;
}

