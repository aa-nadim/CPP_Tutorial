///1^1+2^2+3^3+....+n^n
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0;cin>>n;
    for(int i=1;i<=n;i++){
        sum=sum+pow(i,i);
    }cout<<sum<<endl;


    return 0;
}
