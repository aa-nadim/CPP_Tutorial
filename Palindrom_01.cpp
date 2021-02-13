#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,num,sum,temp;cin>>n;
    for(int i=1;i<=n;i++){
        num=i;sum=0;
        while(num!=0){
            temp=num%10;
            sum=sum*10+temp;
            num=num/10;
        }
        if(i==sum)
            cout<<i<<" ";
    }
    return 0;
}

