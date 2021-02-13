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

#define pi acos(-1)

using namespace std;

class area{
    double a,b,c,d;
public:
    void getdata(){
    cin>>a>>b;
    }
    area(int a,int b){cout<<a*b<<endl;}
    area(double v,double h){cout<<(v*h)/2<<endl;}
    area(int x){cout<<(x*x)<<endl;}
    area(double r){cout<<pi*r*r<<endl;}
    area(int r,double pii){cout<<4*pii*r*r<<endl;}
};

int main ()
{
    //area ob;
    //ob.getdata();
    area ob=area(5,6);
    area ob1=area(2.0,3.0);
    area ob2=area(4);
    area ob3=area(4.3);
    area ob4=area(4,3.14159);

    return 0;
}

