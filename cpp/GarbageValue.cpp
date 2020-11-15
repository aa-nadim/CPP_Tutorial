///...............................GarbageValue..........................///
#include<bits/stdc++.h>
using namespace std;
#define    IOS            ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define    MX             1000000000
#define    fill(a,b)      memset(a,b,sizeof(a))
#define    REP(i,a,b)     for(int i = a; i <= b; i++)
#define    gcd(a,b)     __gcd(a,b)
#define    lcm(a,b)       (a*(b/gcd(a,b)))
#define    ll             long long int
#define    F              first
#define    S              second
#define    pb             push_back
#define    mp             make_pair
#define    pi             acos(-1)
#define    all(x)         x.begin(),x.end()
int main(){
#ifdef OJ
        freopen("inputf.in", "r", stdin);
        freopen("outputf.in", "w", stdout);
#endif
    ll test;cin>>test;while(test--)
        {

            int a,b;string s;
            cin>>a>>b>>s;
            int l=s.length(),x,y,c1=0,c2=0,t;
            for(int i=0;i<l;i++){
                if(s[i]=='1'){x=i;break;}
            }
            for(int i=l-1;i>=0;i--){
                if(s[i]=='1'){y=i;break;}
            }
            for(int i=x;i<=y;i++){
                if(s[i]=='0'){
                    c2+=b;
                }
            }c2+=a;
            for(int i=x;i<=y;i++){

            }


        }
return 0;
}
///if()cout<<"YES"<<endl;else cout<<"NO"<<endl;

