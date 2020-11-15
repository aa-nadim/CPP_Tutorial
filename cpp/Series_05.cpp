///1-2+3-4+5...nth term

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s1,s2;cin>>n;
    s1=s2=0;
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            s1=s1+i;
        }
        else{
            s2=s2+i;
        }
    }cout<<s1-s2<<endl;


    return 0;
}

