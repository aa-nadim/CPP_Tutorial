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

class bank_account
{
    char nod[50],a_type[50];
    int a_number,balance=0,d=0,w=0,x;
public:
    void an_n(){cin>>a_number;
    cout<<" ";
    cin.getline(nod,sizeof(nod));
    }
    void assigni(){cout<<"\nEnter initial value= ";cin>>balance;}
    void deposit(){cout<<"\nEnter deposit amount= ";cin>>d;balance+=d;}
    void withdraw(){
        cout<<"Balance= "<<balance<<endl;
        cout<<"How much money you want to withdraw?\n";
        cin>>w;
        if(balance-w>=500){
        cout<<"Take money: "<<w<<endl;balance-=w;}
        else cout<<"You can't withdraw.\n";
        }
    void display(){
        cout<<"Account Number= "<<a_number;
        cout<<"\nName of depositor= "<<nod;
        cout<<"\nAmount of deposit account= "<<balance<<endl;
        cout<<"Amount of wthdraw account= "<<w<<endl;
        }
    int abc(){cin>>x;return x;}
    //void type(){if}
};

int main ()
{
    int a;
    bank_account ob[5];
    for(i,0,5){
    cout<<"Enter account number and depositor name= ";ob[i].an_n();
    ob[i].assigni();
    cout<<"Enter account type in int(if you want to deposit press 1 else 2)= ";//ob.abc();
    if(ob[i].abc()==1){

        ob[i].deposit();
    }
    else{
        cout<<"How many times you want to withdraw? ";cin>>a;
        if(a>2)cout<<"You can't withdraw more than 2 times a day.\n";
        else{
        for(j,1,a+1){ob[i].withdraw();}}
    }
    cout<<"Name and account balance are given below->\n";
    ob[i].display();
    }
    return 0;
}

